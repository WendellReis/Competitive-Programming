#include <bits/stdc++.h>

using namespace std;

void split(string const &str, const char delim, vector<string> &out) {
    size_t start;
    size_t end = 0;
 
    while((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int main() {
    int N, T;
    cin >> N;
    string s;

    while(N--) {
        cin >> T;
        getline(cin >> ws, s);
        cout << s << endl;

        T = T%(s.size());
        //cout << T << endl;

        cout << s.substr(T, s.size())<< s.substr(0, T) << "\n";
    }
    
    return 0;
}