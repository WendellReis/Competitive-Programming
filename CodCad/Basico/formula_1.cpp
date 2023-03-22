#include <iostream>

using namespace std;

int main(){
    int g = 1,p = 1;

    while(g != 0 && p != 0){
        cin >> g >> p;

        int s, resultado[p][g], score[p][g] = {0};
        for(int i = 0; i < p; i++){
            for(int j = 0; j < g; j++)
                cin >> resultado[i][j];
        }

        cin >> s;
        int k[s], ult, maior_score = 0;

        for(int a = 0; a < s; a++){
            cin >> ult;

            for(int i = 0; i < ult; i++){
                cin >> k[s];
                for(int j = 0; j < p; j++)
                    if(resultado[j][i] == i+1){
                        score[j][i]+=k[s];
                        if(score[j][i] > maior_score)
                            maior_score = score[j][i];
                    }
            }
        }
        
        for(int i = 0; i < p; i++){
            for(int j = 0; j < g; j++)
                if(score[i][j] == maior_score)
                    cout << i+1 << " ";
            cout << endl;
        }    
    }
    return 0;
}