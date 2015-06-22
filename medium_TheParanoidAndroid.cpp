#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators
    //map <int, int> elevators;
    cin >> nbFloors >> width >> nbRounds >> exitFloor >> exitPos >> nbTotalClones >> nbAdditionalElevators >> nbElevators; cin.ignore();
    int elevator[nbElevators];
    for (int i = 0; i < nbElevators; i++) {
        int elevatorFloor; // floor on which this elevator is found
        int elevatorPos; // position of the elevator on its floor
        cin >> elevatorFloor >> elevatorPos; cin.ignore();
        elevator[elevatorFloor] = elevatorPos;
        cerr << elevatorPos << " at floor: "<< elevatorFloor<< endl;
    }
   // elevators.key_comp();

    // game loop
    while (1) {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor
        string direction; // direction of the leading clone: LEFT or RIGHT
        cin >> cloneFloor >> clonePos >> direction; cin.ignore();
        
        //cerr << cloneFloor << " " << clonePos << " " <<direction <<endl;
        //cerr << " position of elevator: " << elevator[1][cloneFloor]<<" position of leading clone: "<< clonePos <<endl;
        //cerr << "exit floor is " << exitFloor << endl;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
            if(cloneFloor == exitFloor){
                if(direction == "RIGHT" && (exitPos-clonePos) < 0 ||direction == "LEFT" && (exitPos-clonePos) >0 ){
                    cout << "BLOCK" << endl;
                    cerr << exitPos<< " " << clonePos <<endl;
                }
                else
                    cout << "WAIT" << endl; 
            }
            else if((direction == "RIGHT" && (elevator[cloneFloor]-clonePos) < 0) || (direction == "LEFT" && (elevator[cloneFloor]-clonePos)> 0)){
                    cout << "BLOCK" << endl;
                    cerr <<direction<< " position of elevator: " << elevator[cloneFloor]<<" position of leading clone: "<< clonePos <<endl;
                }
                
            else{
                cerr <<direction<< " position of elevator: " << elevator[cloneFloor]<<" position of leading clone: "<< clonePos <<endl;
                cout << "WAIT" << endl; 
            }
    }
}
