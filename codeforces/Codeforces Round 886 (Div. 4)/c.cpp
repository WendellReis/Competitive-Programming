#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t > 0){
        char mat[8][8];
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
                cin >> mat[i][j];

        string s = "";
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
                if(mat[i][j] >= 'a' && mat[i][j] <= 'z')
                    s.push_back(mat[i][j]);
        cout << s << "\n";
        t--;
    }
    return 0;
}