#include <bits/stdc++.h>

using namespace std;

const int cag = 1;

struct teste{
    float mq,mf;
    float tq,tf,t;
};

float Cc(teste t){
    return -cag*(t.mq*(t.t-t.tq) + t.mf*(t.t-t.tf))/(t.t - t.tq);
}

int main(){
    teste k[5];
    cout << fixed << setprecision(2);
    cout << "teste\tMq(g)\tMf(g)\tTq(oC)\tTf(oC)\tT(oC)\tC(cal/oC)"<< endl;
    for(int i = 0; i < 5; i++)
        cout << i+1 << "\t" << k[i].mq << "\t" << k[i].mf << k[i].tq << "\t" << k[i].tf
        << "\t" << k[i].t << Cc(k[i]) << endl;
    return 0;
}