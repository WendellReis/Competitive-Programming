#include <bits/stdc++.h>

using namespace std;

vector<int> subset;
int n = 5;

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
}

void search(int k) {
    if (k == 3) {
        // process subset
        print(subset);
    } else {
    // include k in the subset
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
    // don’t include k in the subset
    search(k+1);
    }
}

int main(){
    search(0);
    return 0;
}