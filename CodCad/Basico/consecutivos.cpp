#include <iostream>

using namespace std;

int main(){
    int n, v, v_seq, tam_seq = 0, maior = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v;
        if(i == 0)
            v_seq = v;
        else if(v == v_seq){
            tam_seq++;
        }
        else{
            v_seq = v;
            tam_seq = 1;
        }
        if(tam_seq > maior)
                maior = tam_seq;
    }

    cout << maior << endl;
    return 0;
}