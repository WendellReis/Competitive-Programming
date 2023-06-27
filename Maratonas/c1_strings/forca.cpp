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
    string palavra, tentativa;
    set<char> s;
    int cont = 1, erros = 0;

    int N; cin >> N;
    while(N != -1) {
        getline(cin >> ws, palavra);
        for(int i = 0; i < palavra.length(); i++)
            s.insert(palavra[i]);

        getline(cin >> ws, tentativa);
        set<char>::iterator it, next, first;
        for(int i = 0; i < tentativa.length(); i++) {
            it = s.find(tentativa[i]);
            if(it != s.end()) {
                first = it;
                next = ++it;
                s.erase(first, next);
            } else
                erros++;
            if(s.size() == 0) {
                cout << "Jogo " << cont++ << "\n";
                cout << "ganhou\n";
                break;
            }
            if(erros == 7) {
                cout << "Jogo " << cont++ << "\n";
                cout << "perdeu\n";
                break;
            }
        }

        if(s.size() != 0 && erros != 7) {
            cout << "Jogo " << cont++ << "\n";
            cout << "desistiu\n";
        }

        cin >> N;
        if(N!=-1)
            N++;
    }
    
    return 0;
}