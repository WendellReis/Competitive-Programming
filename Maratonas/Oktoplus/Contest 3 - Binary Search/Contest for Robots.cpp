#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> r(n),b(n);
    for(int i = 0; i < n; i++)
        cin >> r[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    
    int qr = 0, qb = 0;
    for(int i = 0; i < n; i++)
        if(r[i] != b[i]){
            if(r[i] == 1) qr++;
            else qb++;
        }
    if(qr == 0)
        cout << "-1\n";
    else
        cout << (int)qb/qr + 1 << "\n";
    return 0;
}