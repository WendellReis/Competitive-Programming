#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> quebraString(string s, char c) {
    vector<string> v;

    string p = "";

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == c) {
            v.push_back(p);
            p = "";
            continue;
        }
        p+= s[i];            
    }

    v.push_back(p);

    return v;
}

string juntarString(vector<string> v) {
    string p = "";

    for (int i = 0; i < v.size(); i++)
    {
        p+= v[i];
        if(i < v.size())
            p+= ' ';         
    }

    return p;
}

string juntarString(string s[], int tam)
{
    string frase="";

    for(int i=0;i<tam;i++) frase+=s[i]+" ";
    frase.resize(frase.size()-1);

    return frase;
}

string removeChar(string s, char c) {
    string v= "";

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == c) 
            continue;        

        v+= s[i];
    }
    return v;
}

string removeChar(string s, char *vc, int tam) {
    string v= "";

    for (int i = 0; i < s.size(); i++)
    {
        int f = 0;
        for (int c = 0; c < tam; c++)
            if(s[i] == vc[c]) 
                f=1;

        if(f==1)
            continue;
        v+= s[i];            
    }
    return v;
}

string captalize(string s, char m) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == m) {
            i++;
            if(i < s.size())
                s[i] = toupper(s[i]);
        }
    }
    return s;
}

string toUpperCase(string s) {
    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}

int main() {

    return 0;
}