#include <bits/stdc++.h>

using namespace std;

int main(){
    string a; cin >> a;

    set<int> s;
    for(int i = 0; i < a.size(); i++)
        s.insert(a[i]);
    
    if(s.size()%2 == 1)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
    return 0;
}