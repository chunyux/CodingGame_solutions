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
    int N; // the total number of nodes in the level, including the gateways
    int L; // the number of links
    int E; // the number of exit gateways
    
    cin >> N >> L >> E; cin.ignore();
    vector <pair<int, int>> edges;
    int gates[E];
    
    for (int i = 0; i < L; i++) {
        int N1; // N1 and N2 defines a link between these nodes
        int N2;
        cin >> N1 >> N2; cin.ignore();
        edges.push_back(pair<int,int>(N1,N2));
    }
    for (int i = 0; i < E; i++) {
        int EI; // the index of a gateway node
        cin >> EI; cin.ignore();
        gates[i] = EI;
    }

    // game loop
    while (1) {
        int SI; // The index of the node on which the Skynet agent is positioned this turn
        cin >> SI; cin.ignore();
        
        bool danger = false;
        
        for(int i=0; i< L; i++){
            bool suibian =  false;
            for(int j = 0; j<E; j++){
                if((SI==edges[i].first && edges[i].second == gates[j])||(SI==edges[i].second && edges[i].first == gates[j])){
                    cout << SI << " " << gates[j] << endl;
                    danger = true;
                    suibian =  true;
                    break;
                }
            }
            if(suibian)
                break;
            
        }
        
        if(!danger){
            
        for(int i=0; i< L; i++){
            bool suibian =  false;
            for(int j = 0; j<E; j++){
                if((edges[i].second == gates[j])||(edges[i].first == gates[j])){
                    cout << edges[i].second << " " << edges[i].first << endl;
                    
                    suibian =  true;
                    break;
                }
            }
            if(suibian)
                break;
            
        }
        
        }
            
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        //cout << "0 1" << endl; // Example: 0 1 are the indices of the nodes you wish to sever the link between
    }
}
