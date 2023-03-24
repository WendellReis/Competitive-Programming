#include <bits/stdc++.h>
#include <cctype>

using namespace std;

void colectWords(string &s ,vector<vector<char>> &p);
void toLowerStr(string &s);

int main(){
    string s = "Pra voce dar o nome";
    //getline(cin, s);
    toLowerStr(s);

    vector<vector<char>> words;
    vector<char> word;
    for(int i = 0; i < (int)s.size(); i++){ 
        if(s[i] >= 'a' && s[i] <= 'z') word.push_back(s[i]);
        else if(word.size() != 0){
            words.push_back(word);
            word.clear();
        }
        if(i == s.size() - 1 && word.size() != 0) words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++){
        for(int j = 0; j < words[i].size(); j++)
            cout << words[i][j];
        cout << endl;
    }

}

void toLowerStr(string &s){
    for(int i = 0; i < (int)s.size(); i++)
        s[i] = tolower(s[i]); 
}
