#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int>& v, int k);

int main(){
    vector<int> v;
    int n, p;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p;
        insert(v,p);
    }

    cout << v.size() << endl;
    return 0;
}

void insert(vector<int>& v, int k){
    if(v.size() == 0){
        v.push_back(k);
        return;
    }

    for(int i = 0; i < v.size(); i++)
        if(v[i] == k) return;

    v.push_back(k);
}