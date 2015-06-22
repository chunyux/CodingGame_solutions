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
    int R; // the length of the road before the gap.
    cin >> R; cin.ignore();
    int G; // the length of the gap.
    cin >> G; cin.ignore();
    int L; // the length of the landing platform.
    cin >> L; cin.ignore();

    // game loop
    while (1) {
        int S; // the motorbike's speed.
        cin >> S; cin.ignore();
        int X; // the position on the road of the motorbike.
        cin >> X; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cerr<< R <<' ' << G << ' '<< L<<endl;
        //cout << "SPEED" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        if(X<=(R-S)&&S<=G){
            cout << "SPEED" << endl;
        }
        else if(X<=(R-S)&&S>G&&S<=(G+1)){
            cout << "WAIT" <<endl;
        }
        else if(X<=(R-S)&&S>(G+1)){
            cout << "SLOW" <<endl;
        }
        else if(X>(R-S)&&X<(R+G)){
            cout << "JUMP" <<endl;
        }
        else{
            cout << "SLOW"<< endl;
        }
    }
}
