#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> a(n),b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    
    int sa = 0, sb = 0;
    for(int i = 0; i < n; i++)
        if(a[i] != b[i]){
            if(a[i] == 1) sa++;
            else sb++;
        }
    if(sa == 0)
        cout << "-1\n";
    else if(sa > sb)
        cout << "1\n";
    else{
        int tot = (int)(sb+1)/sa;
        if((sb+1)%sa == 0)
            cout << tot << "\n";
        else
            cout << tot+1 << "\n";
    }
        
    return 0;
}