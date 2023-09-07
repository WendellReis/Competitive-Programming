#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b; cin >> a >> b;
    int t = a.size();

    for(int i = 0; i < t; i++){
        if(a[i] < 'z') a[i] = tolower(a[i]);
        if(b[i] < 'z') b[i] = tolower(b[i]);

        if((int)a[i] > (int)b[i]){
            cout << "1\n";
            return 0;
        } else if((int)b[i] > (int)a[i]){
            cout << "-1\n";
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}