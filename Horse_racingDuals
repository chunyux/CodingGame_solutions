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
    int N;
    vector<int> Pis;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        Pis.push_back(Pi);
    }
    
    sort(Pis.begin(),Pis.end());
    
    vector<int> diff;
    for(int i=0; i<(Pis.size()-1);i++){
        diff.push_back(Pis[i+1]-Pis[i]);
    }
    sort(diff.begin(), diff.end());
    
    
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << diff[0] << endl;
}
