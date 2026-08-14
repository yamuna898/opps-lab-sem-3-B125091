# include <iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter 1st numbers: ";
    cin >> a;
    int *n1=new int;
    n1=&a;
    cout <<"Enter 2nd numbers: ";
    cin >> b;
    int *n2=new int;
    n2=&b;
    cout << "Sum: " << *n1+*n2 <<endl;
    cout << "Diff: " << *n1-*n2 << endl;
    cout << "Product: " << *n1* *n2<< endl;
    cout << "Quotient: " << *n1%*n2<< endl;
    delete n1,n2;
    return 0;

}
