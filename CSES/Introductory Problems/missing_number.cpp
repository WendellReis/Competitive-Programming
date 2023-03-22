#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    set<long long> l;
    cin >> a;

    for(int i = 1; i < a; i++){
        cin >> b;
        l.insert(b);
    }

    for (int i = 1; i <= l.size(); i++)
        if(l.find(i) == l.end()){
            cout << i << endl;
            return 0;
        }
    cout << a << endl;
    return 0;
}