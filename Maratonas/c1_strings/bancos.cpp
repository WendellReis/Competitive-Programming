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
    string s, info;
    vector<string> v, v1;

   while(getline(cin >> ws, s)) {
        split(s, ',', v);

        split(v[v.size()-1], ',', v1);
        int ultimo = atoi(v1[0].c_str());
        int dia = atoi(v1[1].c_str());
        string sol = v1[2];
        int temp = atoi(v1[3].c_str());

        int c;
        cout << ultimo << " " << dia << " " << sol << " " << temp << endl;
        for(int i = 0; i < v.size()-1; i++) {
            c = atoi(v[i].c_str());
            if(sol == "F" || (sol == "T" && temp > 30)) c = c/2 - 1;
            if(dia == 2)
                c += 3;
            else
                c -= 3;
            cout << (char) c;
        }

        if(sol == "F" || (sol == "T" && temp > 30)) ultimo = ultimo/2 -1;
        if(dia == 2)
            ultimo += 3;
        else
            ultimo -= 3;
        cout << (char) ultimo << endl;

        v.clear();
        v1.clear();
    }

    return 0;
}