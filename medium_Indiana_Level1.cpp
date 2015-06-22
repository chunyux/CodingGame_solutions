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
    int W; // number of columns.
    int H; // number of rows.
    cin >> W >> H; cin.ignore();
    int map[W][H];
    for (int i = 0; i < H; i++) {
        string LINE; // represents a line in the grid and contains W integers. Each integer represents one room of a given type.
        getline(cin, LINE);
        cerr << LINE << endl;
        bool end = false;
        int n = 0;
        map[0][i]=0;
        
        for(int j = 0;j<LINE.length();j++){
            if(LINE.at(j)==' '){
                cerr << map[n][i] <<endl;
                n++;
                map[n][i] = 0;
            }
            else if (LINE.at(j)>='0' && LINE.at(j)<='9'){
                map[n][i] = (map[n][i])*10+LINE.at(j)-'0';
            }
        }
        cerr << map[n][i] <<endl;
        
    }
    
    int EX; // the coordinate along the X axis of the exit (not useful for this first mission, but must be read).
    cin >> EX; cin.ignore();

    // game loop
    while (1) {
        int XI;
        int YI;
        string POS;
        cin >> XI >> YI >> POS; cin.ignore();
        //cerr << XI << " "<< YI <<" "<< map[XI][YI]<< endl;
        
        for (int i = 0;; i++){
        switch (map[XI][YI]){
            case 0:
                cerr << "HOW DID YOU GET HERE????" <<endl;
            break;
            case 1:
                YI++;
                POS.clear();
                POS.append("TOP");
                cout << (XI) <<" "<<  (YI) << endl;
            break;
            case 2:
                if(POS == "LEFT"){
                    POS.clear();
                    POS.append("LEFT");
                    XI++;
                }
                else if(POS == "RIGHT"){
                    POS.clear();
                POS.append("RIGHT");
                    XI--;
                }
                cout << (XI) <<" "<<  (YI) << endl;
            break;
            case 3:
                cerr << "case 3: "<< endl;
                POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            case 4:
                if(POS == "TOP"){
                    POS.clear();
                POS.append("RIGHT");
                    XI--;
                    cout << (XI) <<" "<<  (YI) << endl;
                    
                }
                else if(POS == "RIGHT"){
                    POS.clear();
                POS.append("TOP");
                     YI++;
                     cout << (XI) <<" "<<  (YI) << endl;
                   
                }
            break;
            case 5:
                if(POS =="TOP"){
                    POS.clear();
                POS.append("LEFT");
                    XI++; 
                    cout << (XI) <<" "<<  (YI) << endl;
                      
                }
                else if(POS == "LEFT"){
                    POS.clear();
                POS.append("TOP");
                    YI++;
                    cout << (XI) <<" "<<  (YI) << endl;
                    
                }
            break;
            case 6:
                if(POS == "LEFT"){
                    POS.clear();
                    POS.append("LEFT");
                    XI++;
                }
                else if(POS == "RIGHT"){
                    POS.clear();
                POS.append("RIGHT");
                    XI--;
                }
                cout << (XI) <<" "<<  (YI) << endl;
                
            break;
            case 7:
            POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            case 8:
            POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            case 9:
            POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            case 10:
            POS.clear();
                POS.append("RIGHT");
                XI--;
                cout << XI << " "<< YI << endl;
                
            break;
            case 11:
            POS.clear();
                POS.append("LEFT");
                XI++;
                cout << XI<< " "<< (YI) << endl;
                
            break;
            case 12:
            POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            case 13:
            POS.clear();
                POS.append("TOP");
                YI++;
                cout << XI << " "<< (YI) << endl;
                
            break;
            default:
            cerr << "no such type of room" << endl;
            break;
        }
            
        }
        
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << "0 0" << endl; // One line containing the X Y coordinates of the room in which you believe Indy will be on the next turn.
    }
}
