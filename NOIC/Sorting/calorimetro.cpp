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

teste makeTeste(double a, double b, double c, double d, double e){
    teste t;
    t.mq = a;
    t.tq = b;
    t.mf = c;
    t.tf = d;
    t.t = e;
    return t;
}

int main(){
    teste k[5];

    k[0] = makeTeste(149,63,100,25,48);
    k[1] = makeTeste(150,65,90,24,49);
    k[2] = makeTeste(199,61,75,24,52);
    k[3] = makeTeste(45,61,45,24,50);
    k[4] = makeTeste(190,58,75,25,49);

    cout << fixed << setprecision(2);
    cout << "teste\tMq(g)\tMf(g)\tTq(oC)\tTf(oC)\tT(oC)\tC(cal/oC)"<< endl;
    for(int i = 0; i < 5; i++)
        cout << i+1 << "\t" << k[i].mq << "\t" << k[i].mf << "\t" << k[i].tq << "\t" << k[i].tf
        << "\t" << k[i].t << "\t" <<  Cc(k[i]) << endl;
    return 0;
}