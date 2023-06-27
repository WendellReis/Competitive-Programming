#include <bits/stdc++.h>

using namespace std;

void split(const string& s, char c, vector<string>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);

   while (j != string::npos) {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}

string remove_especial(string frase) {
    string s = "";
    for(int i = 0; i < frase.length(); i++)
        if(isalnum(frase[i]) || frase[i]==' ')
            s += frase[i];
            
    return s;
}

int main() {
    vector<string>  v,
                    positivo = {"excelente", "bom", "otimo", "adoro", "amo"},
                    negativo = {"ruim", "pessimo", "odeio", "droga", "fraco"};
    string s;
    int N;

    while(cin >> N) {
        int pos = 0, neg = 0;
        for(int i = 0; i < N; i++) {
            getline(cin >> ws, s);
            s = remove_especial(s);
            split(s, ' ', v);
            for(int k = 0; k < v.size(); k++) {
                if(find(positivo.begin(), positivo.end(), v[k]) != positivo.end()) {
                    if(k-1 >= 0 && v[k-1] == "nao") {
                        neg++;
                        continue;
                    }
                    pos++;
                    //cout << v[k] << endl;
                }
            }

            for(int k = 0; k < v.size(); k++) {
                if(find(negativo.begin(), negativo.end(), v[k]) != negativo.end()) {
                    if(k-1 >= 0 && v[k-1] == "nao") {
                        pos++;
                        continue;
                    }
                    neg++;
                    //cout << v[k] << endl;
                }
            }
            v.clear();
        }
        //cout << pos << " " << neg << endl;
        cout << ((pos == neg) ? "neutro" : ((pos > neg) ? "positivo" : "negativo")) << endl;
    }
}
