#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string l,r;
    cin >> l >> r;
    
    while(l != "acabou" && r != "acabou") {
        int freq[26] = {0};

        for (int i = 0; i < l.size(); i++)
        {
            if(freq[l[i]-'a'] < 2) {
                freq[l[i]-'a']++;
            }
        }

        for (int i = 0; i < r.size(); i++)
        {
            if(freq[r[i]-'a'] < 2) {
                freq[r[i]-'a']++;
            }
        }
        string last = "";

        for (int i = 0; i < 26; i++)
        {
            if(freq[i] == 2) {
                last += (char)(i+'a');
            }
        }
        
        cout << last << endl;

        cin >> l >> r;
    }
}