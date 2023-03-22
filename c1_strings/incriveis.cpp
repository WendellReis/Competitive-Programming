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
    int X, M, N;
    cin >> X >> N >> M;

    string alfabeto, de, para;
    cin >> alfabeto;

    vector<map<string, string>> regras(N+1);
    string regra;
    vector<string> v;
    for(int i = 1; i <= N; i++) {
        getline(cin >> ws, regra);
        split(regra, ' ', v);
        for(int k = 0; k < v.size(); k++) {
            regras[i].insert({(string) ""+alfabeto[k], v[k]});
            //cout << (string) ""+alfabeto[k] << " => " << v[k] << endl;
        }
        v.clear();
    }

    /*for(int i = 1; i <= N; i++)
        for(auto it : regras[i])
            cout << it.first << " -> " << it.second << endl;
    */

    set<string> finais;
    int F;
    cin >> F;
    string final;
    getline(cin >> ws, final);
    v.clear();
    split(final, ' ', v);
    for(int k = 0; k < v.size(); k++)
        finais.insert(v[k]);

    // cout << "F: ";
    /*for(auto i : finais)
        cout << i << " ";
    cout << endl;*/

    int S;
    cin >> S; //cout << S;
    string sentenca, at;
    int atual;
    for(int i = 0; i < S; i++) {
        atual = 1;
        at = "";
        getline(cin >> ws, sentenca); //cout << sentenca << endl;
        for(int s = 0; s < sentenca.size(); s++) {
            string simbolo = (string) "" + sentenca[s];
            // cout << simbolo << " => " << regras[atual].at(simbolo) << endl;
            atual = atoi(regras[atual].at(simbolo).c_str());
        }
        at = to_string(atual); // cout << atual << " " << at << endl;
        if(find(finais.begin(), finais.end(), at) != finais.end())
            cout << "s\n";
        else
            cout << "n\n";
    }

    return 0;
}