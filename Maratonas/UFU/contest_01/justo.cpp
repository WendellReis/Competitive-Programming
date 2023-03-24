#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main() {
int N;
    while(cin >> N) {
        string c, p = "";
        cin.ignore();
        getline(cin, c);
        for (int i = 0; i < c.size(); i++)
            if(int(c[i])-48 != N)
                p+= c[i];

        int f = 1;
        for (int i = 0; i < p.size(); i++)
        {
            if(p[i] != 48) {
                f = 0;
                break;
            }

        }

        string np = "";
        if(f)
            np = "0";
        else {
            f = 0;
            for (int i = 0; i < p.size(); i++)
            {
                if(p[i] != 48)
                    f = 1;
                if(f != 0)
                    np += p[i];
            }

        }

        cout << np << endl;
    }

    return 0; 
}