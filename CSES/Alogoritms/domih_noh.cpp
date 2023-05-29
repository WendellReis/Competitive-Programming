#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    if(n == 0)
        return 1;
    else if(n < 0)
        return 0;
    return solve(n-1) + solve(n-2);
}

int main(){
    for(int i = 1; i <= 5; i++)
        cout << "N = " << i << " : " << solve(i) << "\n";
    return 0;
}