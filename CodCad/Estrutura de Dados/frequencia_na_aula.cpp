#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> freq;
    int n, p;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p;
        freq.insert(p);
    }

    cout << freq.size() << endl;
    return 0;
}