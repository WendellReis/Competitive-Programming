/*
    Problem Name: Dice Combinations
    Problem Link: https://cses.fi/problemset/task/1633
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

const int MD = 1000000007;

int main(){
    int dice[] = {1,2,3,4,5,6};

    int n; cin >> n;
    int count[n+1] = {0}; count[0] = 1;

    for(int x = 1; x <= n; x++)
        for(auto d : dice)
            if(x - d >= 0){
                count[x]+=count[x-d];
                if(count[x] >= MD)
                    count[x]-=MD;
            }
                
    
    cout << count[n] << "\n";
    return 0;
}