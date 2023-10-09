#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n; cin >> n;
    int mat[n][3];

    for(int i = 0; i < n; i++)
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

    int count = 0;
    for(int i = 0; i < n; i++)
        if(mat[i][0] + mat[i][1] + mat[i][2] > 1)
            count++;
    cout << count << "\n";
    return 0;
}