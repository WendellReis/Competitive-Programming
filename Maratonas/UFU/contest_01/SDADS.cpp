#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin >> N;

    while (N > 0)
    {
        cin.ignore();
        int qtd[N][15];
        for (int i = 0; i < N; i++)
        {
            for (int c = 0; c < 15; c++)
            {
                qtd[i][c] = 0;
            }
        }        

        for (int i = 0; i < N; i++)
        {
            string s;
            getline(cin, s);
            for (int c = 0; c < s.size(); c++)
                qtd[i][s[c]-65]++;
        }

        int especies = 0;
        int f = 0;
        for (int i = 0; i < N; i++)
        {
            f = 0;
            for (int c = 0; c < 15; c++)
            {
                if(f == 1)
                    break;
                for (int k = 0; k < N; k++)
                {
                    if(qtd[i][c] != qtd[k][c]) {
                        especies++;
                        f = 1;
                        break;
                    }
                }
                
            }
            
        }
        
        cout << (especies == 0 ? 1 : especies) << endl;

        cin >> N;
    }

    return 0;
}