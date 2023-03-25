#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,s1;
    cin >> s >> s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    cout << s << endl << s1 << endl;
    if(s==s1)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}