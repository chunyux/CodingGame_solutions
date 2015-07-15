#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
int max_val(vector<int> input){
    int res_max = 0;
    for(vector<int>::iterator it = input.begin(); it!=input.end(); ++it)
    {
        if (*it > res_max)
            res_max = *it;
    }
    return res_max;
}
int min_val(vector<int> input){
    int res_min = 99999;
    for(vector<int>::iterator it = input.begin(); it!=input.end(); ++it)
    {
        if (*it < res_min)
            res_min = *it;
    }
    return res_min;
}

int abs_val(int val)
{
    return val>=0? val:(-val);
}

int middle_val(int *input, int N)
{
    if(N%2 == 0)
        return input[N/2-1] ;
    else
        return input[(N+1)/2-1];
        
}

unsigned long total_val(vector<int> input, int ref)
{
    unsigned long res_total = 0;
    for(vector<int>::iterator it = input.begin(); it!=input.end(); ++it)
    {
        res_total = res_total+ abs_val(*it-ref);
        
    }
    return res_total;
}

int main()
{
    int N;
    vector<int> vecX;
    vector<int> vecY;
    
    
    cin >> N; cin.ignore();
    int * arrY = new int[N];
    
    for (int i = 0; i < N; i++) {
        int X;
        int Y;
        cin >> X >> Y; cin.ignore();
        vecX.push_back(X);
        vecY.push_back(Y);
        arrY[i] = Y;
    }
    long long answer = abs( max_val(vecX) - min_val(vecX));
  
    sort(arrY,arrY+N);
    int ref = middle_val(arrY, N);
    cerr << ref<< endl;
    cerr << answer << endl;
    
    unsigned long miny = total_val(vecY, ref);
    cerr << miny << endl;
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    long long test = 6066790161;
    cerr <<test << endl;
    
    answer = answer + miny;
    cout << answer << endl;
}
