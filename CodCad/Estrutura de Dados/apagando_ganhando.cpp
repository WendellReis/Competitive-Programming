#include <bits/stdc++.h>

using namespace std;

int main() {
     int N,D;
    string num;
    vector<pair<int, int>> cresc;

    cin >> N >> D;

    while(N&&D)
    {
        cresc.clear();
        cin >> num;
        
        for(int c=0;c<N;c++) cresc.push_back(make_pair(num[c]-48, c));
        sort(cresc.begin(),cresc.end());
 
        for(int c=0;c<N;c++)
        {
            if(c<D) cresc.erase(cresc.begin());
            else swap(cresc[c-D].first,cresc[c-D].second);
        }
        sort(cresc.begin(),cresc.end());
        
        for(int c=0;c<N-D;c++) cout << cresc[c].second;
        cout << endl;

        cin >> N >> D;
    }
    return 0;
}






