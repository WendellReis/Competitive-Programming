#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        cin.ignore();
        string s; cin >> s;

        vector<int> posB;
        for(int i = 0; i < n; i++)
            if(s[i] == 'B')
                posB.push_back(i);
        
        if(posB.size() == 0)
            cout << "0\n";
        cout << posB[posB.size()-1] - posB[0] + 1 << "\n";

    }

    return 0;
}