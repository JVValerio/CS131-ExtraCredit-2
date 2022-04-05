////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 3 - Activity
// Program Purpose: To create a number pyramid/diamond. Users can determine the height of the pyramid/diamond
////
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "My name is Josh Valerio\n";

    int userHeight; // User input
    int LPyramid, RPyramid; // Sets the "width" of the pyramid level
    int userCounter = 1;
    int rCounter = 15;

    cout << "Enter the desired height of the pyramid: ";
    cin >> userHeight;
    int diamondNum = userHeight;

    // Pyramid top
    while (userCounter <= userHeight) {
        cout << setw(rCounter);
        for (LPyramid = 1; LPyramid <= userCounter; LPyramid++) {
            cout << LPyramid;
        }

        //cout << " "; // Use if want spaces

        if (userCounter != 1) {
            for (RPyramid = userCounter - 1; RPyramid >= 1; RPyramid--) {
                cout << RPyramid;
            }
        }
        cout << endl;
        rCounter--;
        userCounter++;
    }
    rCounter = rCounter + 2;

    // Diamond (Comment out if only want number Pyramid)
    while (userCounter >= 1) {
        cout << setw(rCounter);
        for (LPyramid = 1; LPyramid <= userCounter - 2; LPyramid++) {
            cout << LPyramid;
        }
        if (userCounter != 1) {
            for (RPyramid = LPyramid - 2; RPyramid >= 1; RPyramid--) {
                cout << RPyramid;
            }
        }
        cout << endl;
        rCounter++;
        userCounter--;
    }
    
    system("pause");
    return 0;
}

