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
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    int w0 =0, h0 = 0, w1 = W, h1=H;
        
    // game loop
    while (1) {
        string BOMB_DIR; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> BOMB_DIR; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        //enum string{
            //"U","UR","R","DR","D","DL","L","UL",
        //}BombDir;
        
        if(BOMB_DIR=="U")
        {       
                h1 = Y0;
                Y0=(Y0+h0)/2;
        }
        else if(BOMB_DIR=="UR")
        {   
                w0 = X0;
                h1 = Y0;
                X0=(w1+X0)/2;
                Y0=(Y0+h0)/2;
        }
        else if(BOMB_DIR=="R")
        {
                w0 = X0;
                X0=(X0+w1)/2;
        }
        else if(BOMB_DIR=="DR")
        {
                w0 = X0;
                h0 = Y0;
                X0=(X0+w1)/2;
                Y0=(Y0+h1)/2;
        }
        else if(BOMB_DIR=="D")
        {
            
                h0 = Y0;
                Y0=(Y0+h1)/2;
        }
        else if(BOMB_DIR=="DL")
        {
                w1 = X0;
                h0 = Y0;
                X0=(X0+w0)/2;
                Y0=(Y0+h1)/2;
        }
        else if(BOMB_DIR=="L")
        {
                w1 = X0;
                X0=(X0+w0)/2;
        }
        else if(BOMB_DIR=="UL")
        {
                w1 = X0;
                h1 = Y0;
                X0=(X0+w0)/2;
                Y0=(Y0+h0)/2;
        }
        
        //cout << "1 1" << endl; // the location of the next window Batman should jump to.
        cout << X0<< " "<< Y0 << endl; 
    }
}
