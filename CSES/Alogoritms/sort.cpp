#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> s = {"Pedra", "Nico nico ni", "Buchard", "Vendel"};

    random_device rd;
    default_random_engine gerador(rd());
    shuffle(s.begin(),s.end(),gerador);
    
    cout << "equipe 1: " << s[0] << " " << s[1] << "\n";
    cout << "equipe 2: " << s[2] << " " << s[3] << "\n";
    return 0;
}