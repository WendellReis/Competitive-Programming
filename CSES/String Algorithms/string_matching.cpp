#include <bits/stdc++.h>

using namespace std;

int main(){
    string n,m; cin >> n >> m;
    int count = 0, sn = n.size(), sm = m.size();

    size_t found = n.find(m);
    if(found != string::npos){
        count++;
        while(sn - found >= sm){
            found = n.find(m,found+1);
            if(found == string::npos)
                break;
            count++;
        }
    }
    
    cout << count << "\n";
    return 0;
}