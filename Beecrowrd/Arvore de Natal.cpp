//Problem Link: https://judge.beecrowd.com/pt/problems/view/1768

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int qtd = (n-1)/2;
        for(int i = 1; i <= n; i+=2) {
            for(int j = 0; j < qtd; j++)
                cout << " ";
            qtd--;
            for(int j = 0; j < i; j++)
                cout << "*";
            cout << "\n";
        }

        for(int j = 0; j < (n+1)/2-1; j++)
                cout << " ";
            cout << "*\n";

            for(int j = 0; j < (n+1)/2-2; j++)
                cout << " ";
            cout << "***\n";
    }
    cout << "\n";
    return 0;
}