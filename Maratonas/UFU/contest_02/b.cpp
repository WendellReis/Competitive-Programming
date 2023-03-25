#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<int, char>> v;

    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin,s);

        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
            if(s[i] >= 'A' && s[i] <= 'Z'){
                if(v.size() == 0) v.push_back(make_pair(0,s[i]));
                else{
                    bool k = false;
                    for(int j = 0; j < v.size(); j++){
                        if(v[i].second = s[i]) {v[i].first++; k = true;}
                    }
                    if(!k) v.push_back(make_pair(0, s[i]));
                }
            }
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].second << " " << v[i].first << endl; 
    }
    return 0;
}