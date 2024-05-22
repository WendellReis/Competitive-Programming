#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int p(int k) {
    return k & -k;
}

vi getBit(vi V) {
    int n = V.size();
    vi tree(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        int k = i + 1;
        while (k <= n) {
            tree[k] += V[i];
            k += p(k);
        }
    }
    return tree;
}

int sum(int k, vi& tree) {
    int s = 0;
    while (k > 0) {
        s += tree[k];
        k -= p(k);
    }
    return s;
}

int sum(int i, int r, vi& tree) {
    return sum(r,tree) - sum(i-1,tree);
}

void add(int k, int x, vi& tree) {
    int n = tree.size() - 1;
    while (k <= n) {
        tree[k] += x;
        k += p(k);
    }
}

int main() {
    int n,q,v; cin >> n >> q;

    vi tree(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> v;
        add(i,v,tree);
    }
    
    int op,k,p;
    while(q--) {
        cin >> op;
        if(op) {
            cin >> k;
            cout << sum(k,tree) << "\n";
        } else {
            cin >> k >> p;
            add(k,p-sum(k,k,tree),tree);
        }
    }

    return 0;
}