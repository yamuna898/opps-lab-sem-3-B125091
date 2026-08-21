#include <iostream>
#include <string>
using namespace std;

class Camera {
    string brand, model;
    int megapixels, storageCapacity;
    friend void compareCamera(const Camera &c1, const Camera &c2);

public:
    Camera(string b, string m, int mp, int storage)
        : brand(b), model(m), megapixels(mp), storageCapacity(storage) {}
};

void compareCamera(const Camera &c1, const Camera &c2) {
    const Camera &better = (c1.megapixels != c2.megapixels) 
        ? (c1.megapixels > c2.megapixels ? c1 : c2) 
        : (c1.storageCapacity >= c2.storageCapacity ? c1 : c2);

    cout << "Better Camera: " << better.brand << "\nModel: " << better.model
         << "\nMegapixels: " << better.megapixels << "\nStorage Capacity: " 
         << better.storageCapacity << " GB" << endl;
}

int main() {
    Camera camera1("Canon", "EOS R10", 24, 128);
    Camera camera2("Sony", "Alpha A6400", 24, 256);

    compareCamera(camera1, camera2);
}