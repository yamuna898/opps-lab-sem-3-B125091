#include <iostream>
#include <string>
using namespace std;

class CricketPlayer{
private:
    string playerName;    // Stores player name
    int matches;          // Stores matches played
    int totalRuns;        // Stores total runs

public:
    void acceptDetails(){
        cout << "Enter Player Name: ";
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matches;

        cout << "Enter Total Runs: ";
        cin >> totalRuns;
    }

    float calculateAverage(){
        return (float)totalRuns / matches;    // Calculate batting average
    }

    void display(){
        float average = calculateAverage();

        cout << "\nPlayer Report\n";
        cout << "Player Name: " << playerName << endl;
        cout << "Matches: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Batting Average: " << average << endl;

        if (average >= 50)
            cout << "Performance: Excellent" << endl;
        else if (average >= 35)
            cout << "Performance: Good" << endl;
        else if (average >= 20)
            cout << "Performance: Average" << endl;
        else
            cout << "Performance: Poor" << endl;
    }
};

int main(){
    CricketPlayer player;    // Create object

    player.acceptDetails();  // Take player details
    player.display();        // Display player report

    return 0;
}