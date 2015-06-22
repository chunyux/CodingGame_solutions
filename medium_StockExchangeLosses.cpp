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
    int n;
    cin >> n; cin.ignore();
    string vs;
    int stocks[n];
    int i=0;
    int perdu = 0;
    int max=0,min=0;
    while(getline(cin, vs,' ')){
            stocks[i] = stoi(vs);
            cerr << stocks[i] << endl;
            if(stocks[i]<min){
                min = stocks[i];
                perdu = min -max;
            }
            else if(stocks[i]>max){
                max = stocks[i];
                min = max+perdu;
            }
        i++;
        cerr << "max is "<< max <<" min is "<< min << " answer is " << perdu << endl; 
    }
    
    
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    cout << perdu << endl;
}
