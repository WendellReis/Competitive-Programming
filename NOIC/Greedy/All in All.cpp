/*
    UVa Online Judge
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1281
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;

    while(cin >> s >> t){
        int count = 0;

        for(int i = 0, j = 0; i < t.size() && j < s.size(); i++)
            if(t[i] == s[j]){
                count++;
                j++;
                if(j == s.size())
                    break;
            }
        if(count == s.size())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}