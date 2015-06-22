#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    const double NIMAPI = 3.1416;
    double LonA, LatA, LonB, LatB;
    double minDist=99999999;
    string Name, NameClose;
    bool nameBool = false;
    vector<string> info;
    int posLeft = -1, posRight =-1;
    string LON;
    cin >> LON; cin.ignore();
    LON.at(LON.find_first_of(",")) = '.';
    LonA = atof(LON.c_str())*NIMAPI/180;
    
    string LAT;
    cin >> LAT; cin.ignore();
    LAT.at(LAT.find_first_of(",")) = '.';
    LatA = atof(LAT.c_str())*NIMAPI/180;
    
    int N;
    cin >> N; cin.ignore();
    
    for (int i = 0; i < N; i++) {
        string DEFIB;
        getline(cin, DEFIB);
        info.push_back(DEFIB);
    }
    
    if(N <= 0){
        cout << " " << endl;
    }
    
    else{
    
    for(int m = 0; m<info.size();m++){
        for(int j = 0; j < info[m].length(); j++){
            if( (info[m]).at(j) == ';' ){
                if(posRight == -1){
                    posRight= j+1;
                    nameBool = true;
                }
                else{
                    posLeft = posRight;
                    posRight = j+1;
                    if(nameBool){
                        Name = (info[m]).substr(posLeft,(posRight-posLeft-1));
                        cerr<<"Name is "<<Name<<endl;
                        nameBool = false;
                    }
                }
            } 
            if( (info[m]).at(j) == ',' ){
                       (info[m]).at(j) ='.';
            }
        }
        
        
        LonB = atof( ((info[m]).substr(posLeft,(posRight-posLeft+1))).c_str())*NIMAPI/180;
        LatB = atof( ((info[m]).substr(posRight,((info[m]).length()-posRight+1))).c_str())*NIMAPI/180;
        
        double x = (LonB-LonA)*cos((LatA+LatB)/2);
        double y = LatB-LatA;
        double d = sqrt(x*x+y*y)*6371;
        
        
        posLeft = -1;posRight =-1;
        
        if(d<=minDist){
            minDist =d;
            NameClose.clear();
            NameClose.append(Name); 
        }
        
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    cout << NameClose << endl;
    }
}
