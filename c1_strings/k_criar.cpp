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
    int T, N, M;
    cin >> T;

    set<string> cj;
    vector<string> v;
    string s;

    while(T--) {
        int qtde = 0;
        cin >> N >> M;
        for(int i = 0; i < N; i++) {
            getline(cin >> ws, s);
            split(s, '/', v);
            string nova = "";
            for(int j = 0; j < v.size(); j++) {
                nova += v[j];
                //cout << nova << " ";
                if(cj.find(nova) == cj.end())
                    cj.insert(nova);
            }
            v.clear();
        }
        //cout << endl;
        
        v.clear();
        for(int i = 0; i < M; i++) {
            getline(cin >> ws, s);
            split(s, '/', v);
            string nova = "";
            for(int j = 0; j < v.size(); j++) {
                nova += v[j];
                //cout << nova << " ";
                if(cj.find(nova) == cj.end()) {
                    cj.insert(nova);
                    qtde++;
                }
            }
            v.clear();
        }
        //cout << endl;
        
        cout << qtde << endl;
        v.clear();
        cj.clear();
    }

    return 0;
}