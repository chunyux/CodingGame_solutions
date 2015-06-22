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
    int N; // the number of temperatures to analyse
    cin >> N; cin.ignore();
    string TEMPS; // the N temperatures expressed as integers ranging from -273 to 5526
    getline(cin, TEMPS);
   
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    //string xx;
    //getline(TEMPS,xx,' ');
    //cerr << xx<<endl;
    int minTemp = 6000;
    int TEMP = 0;
    bool endofTEMP = true;
    bool Neg = false;
    
   
    
    if(TEMPS.length() <= 0 ){
        minTemp = 0;
    }

    
    else{

        for(int i =0; i< TEMPS.length(); i++){
                if(TEMPS.at(i)=='-'){
                    Neg = true;
                }
                if(TEMPS.at(i)=='0'||TEMPS.at(i)=='1'||TEMPS.at(i)=='2'||TEMPS.at(i)=='3'||TEMPS.at(i)=='4'||TEMPS.at(i)=='5'||TEMPS.at(i)=='6'||TEMPS.at(i)=='7'||TEMPS.at(i)=='8'||TEMPS.at(i)=='9'){
                    if(endofTEMP){
                        TEMP = TEMPS.at(i)-48;
                    }
                    else
                        TEMP = TEMP*10+TEMPS.at(i)-48;
                        
                    cerr << "My Temperature is " << TEMP << " " << TEMPS.at(i)<< endl;
                    endofTEMP = false;
                }
                else if (TEMPS.at(i) == ' '){
                    
                    endofTEMP = true;
                    if(TEMP!=0 && abs(TEMP)<abs(minTemp)){
                        if(Neg)
                            minTemp = TEMP*(-1);
                        else
                            minTemp = TEMP;
                        cerr << "The near zero temperature is " <<minTemp <<  endl;
                    }
                    else if (TEMP!=0 && abs(TEMP) == abs(minTemp))
                        minTemp = abs(TEMP);
                    
                    Neg = false;
                    
                }
                
                
        }
    }
    if (minTemp>-273 && minTemp< 5526)
        cout << minTemp  << endl;
    else
        cout << TEMPS <<endl;
}
