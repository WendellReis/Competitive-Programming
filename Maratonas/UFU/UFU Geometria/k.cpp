#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n  > 0) {
        int m; cin >> m;
        int v[m];
        int mult[1001] = {0};

        int maior = 0;
        for(int i = 0; i < m; i++)
            cin >> v[i], maior = max(maior,v[i]);

        for(int i = 2; i <= maior; i++) {
            int quant = 10000;
            for(int j = 0; j < m; j++) {
                int tot = 0;
                int temp = v[i];
                while(temp%i == 0)
                    tot++,temp/=i;
                quant = min(quant,tot);
            }
            for(int j = 0; j < m; j++)
                v[i] = v[i]/pow(i,quant);
            mult[i] = quant;
        }
        for(int j = 2; j <= 1000; j++)
            cout << "mult = " << mult[j] << endl;
        int mmc = 1;
        for(int i = 2; i <= 1000; i++)
            if(mult[i] > 0)
                mmc*=pow(i,mult[i]);
        cout << mmc << "\n";
        n--;
    }
    return 0;
}