#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int p(int k) {
    return k & -k;
}

int sum(int k, vi& tree) {
    int s = 0;
    while (k > 0) {
        s += tree[k];
        k -= p(k);
    }
    return s;
}

void add(int k, int x, vi& tree) {
    int n = tree.size() - 1;
    while (k <= n) {
        tree[k] += x;
        k += p(k);
    }
}

int main() {
    vi v = {1,3,4,8,6,1,4,2};

    vi tree(v.size()+1,0);
    for(int i = 1; i <= v.size(); i++)
        add(i,v[i],tree);
    
    return 0;
}