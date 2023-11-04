#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n != 0){
        string s;
        vector<string> v1,v2;
        cin.ignore();
        for(int i = 0; i < n; i++){
            getline(cin,s);
            if(s[s.size()-4] == 'a')
                v1.push_back(s);
            else
                v2.push_back(s);
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.begin(),v2.end());

        for(int i = 0; i < v1.size(); i++)
            cout << v1[i] << "\n";
        for(int i = 0; i < v2.size(); i++)
            cout << v2[i] << "\n";
        
        cin >> n;
    }
    return 0;
}
