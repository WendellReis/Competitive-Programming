#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k; cin >> t;

    while(t > 0){
        cin >> n >> k;
        string s; cin >> s;

        int count = 0;
        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] == 'B'){
                count++;
                i+=k-1;
            }
        }
        cout << count << "\n";

        t--;
    }
    return 0;
}