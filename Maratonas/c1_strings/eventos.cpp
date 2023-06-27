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

int insertion_sort(vector<string> v, int tam) {
    int q = 0;
    for(int i = 1; i < tam; i++) {
        for(int j = i; j >= 0; j--) {
            if(v[j] < v[j-1]) {
                string aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
                q++;
            } else
                break;
        }
    }
    
    return q;
}

int main() {
    vector<string> eventos, v;
    int N; cin >> N; N++;
    string s, evento;
    while(N != -1) {
        while(N--) {
            getline(cin >> ws, s);
            split(s, '-', v);
            eventos.push_back(v[0]);
            v.clear();
        }

        cout << insertion_sort(eventos, eventos.size()) << endl;

        cin >> N;
        if(N!=-1)
            N++;
    }
    
    return 0;
}