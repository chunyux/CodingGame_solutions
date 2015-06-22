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
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    vector<string> vectorStringAZ;
    vector<string> ::iterator iStringAZ;
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        vectorStringAZ.push_back(ROW);
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    for(int m=0; m<H; m++){
        vector<int> position;
        for(int i = 0; i<T.length(); i++){
            if (T.at(i)>='A' && T.at(i)<='Z'){
                position.push_back((T.at(i)-'A')*L);
            }
            else if(T.at(i)>='a' && T.at(i)<='z'){
                position.push_back((T.at(i)-'a')*L);
            }
            else 
                position.push_back(('Z'-'A'+1)*L);
        }
        string answer;
        for(int j = 0; j<position.size();j++){
            answer.append(vectorStringAZ[m].substr(position[j],L));
        }
           
        
        cout << answer << endl;
    }
    
}
