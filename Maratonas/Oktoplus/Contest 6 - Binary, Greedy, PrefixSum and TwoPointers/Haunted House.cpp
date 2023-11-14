#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t > 0){
        int n; cin >> n;
        string s; cin >> s;

        long long pos = n-1, count = 0, at = 0;
        for(int i = 1; i <= n; i++){
            bool f = true;
            while(pos >= 0){
                if(s[pos] == '0'){
                    count+=at;
                    cout << count << " ";
                    f = false;
                    pos--;
                    break;
                }
                at++;
                pos--;
            }
            if(f)
                cout << "-1 ";
        }
        cout << "\n";
        t--;
    }
    return 0;
}