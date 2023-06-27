#include <bits/stdc++.h>

using namespace std;

int maxAppointment(pair<int,int> *events, int tam, int pos = 0){
    int quant = 1;
    if(pos < tam){
        for(int i = pos + 1; i < tam; i++)
            //Se o próximo evento (i) começa após o término do evento atual (pos)
            if(events[i].first >= events[pos].second)
                quant = max(quant, 1 + maxAppointment(events,tam,i));
    }
    return quant;
}

int main(){
    int n; cin >> n;

    pair<int,int> events[n];
    for(int i = 0; i < n; i++)
        cin >> events[i].first >> events[i].second;
    cout << maxAppointment(events,n) << "\n";
    return 0;
}