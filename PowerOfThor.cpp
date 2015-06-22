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
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    cin >> LX >> LY >> TX >> TY; cin.ignore();

    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        cin >> E; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if ((LX>=TX)&&(LY>=TY)){
            for(int i = 0; i< min((LX-TX),(LY-TY));i++){
                cout << "SE"<<endl;
            }
            if(TX == LX){
               for(int i = 0; i< (LY-TY);i++){
                    cout << "S"<<endl;
                } 
            }
            else{
               for(int i = 0; i< (LX-TX);i++){
                    cout << "E"<<endl;
                } 
            }
            
        }
        
        if ((LX<=TX)&&(LY>=TY)){
            for(int i = 0; i< min((TX-LX),(LY-TY));i++){
                cout << "SW"<<endl;
            }
            if(TX == LX){
               for(int i = 0; i< (LY-TY);i++){
                    cout << "S"<<endl;
                } 
            }
            else{
               for(int i = 0; i< (TX-LX);i++){
                    cout << "W"<<endl;
                } 
            }
            
        }
        
        if ((LX<=TX)&&(LY<=TY)){
            for(int i = 0; i< min((TX-LX),(TY-LY));i++){
                cout << "NW"<<endl;
            }
            if(TX == LX){
               for(int i = 0; i< (TY-LY);i++){
                    cout << "N"<<endl;
                } 
            }
            else{
               for(int i = 0; i< (TX-LX);i++){
                    cout << "W"<<endl;
                } 
            }
            
        }
        
        if ((LX>=TX)&&(LY<=TY)){
            for(int i = 0; i< min((LX-TX),(TY-LY));i++){
                cout << "NE"<<endl;
            }
            if(TX == LX){
               for(int i = 0; i< (TY-LY);i++){
                    cout << "N"<<endl;
                } 
            }
            else{
               for(int i = 0; i< (TX-LX);i++){
                    cout << "E"<<endl;
                } 
            }
            
        }
        
    }
}
