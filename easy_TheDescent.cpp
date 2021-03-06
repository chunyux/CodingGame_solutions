#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{

    // game loop
    while (1) {
        int SX;
        int SY;
        cin >> SX >> SY; cin.ignore();
        int MHPlus = 0;
        int PosPlus = 0;
        for (int i = 0; i < 8; i++) {
            int MH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            cin >> MH; cin.ignore();
            if (MH > MHPlus){
                MHPlus = MH;
                PosPlus = i;
                cerr << MHPlus <<' ' << PosPlus<<endl; 
            }
            else ;
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if (SX == PosPlus)
            cout << "FIRE" <<endl;
        else
            cout << "HOLD" << endl; // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
    }
}
