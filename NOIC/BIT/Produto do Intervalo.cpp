#include <bits/stdc++.h>

using namespace std;

int prod(int a, int b, vector<int>& tree) {
    int n = tree.size()/2;
    a += n;
    b += n;
    int p = 1;
    while (a <= b) {
        if (a % 2 == 1)
            p *= tree[a++];
        if (b % 2 == 0)
            p *= tree[b--];
        a /= 2;
        b /= 2;
    }
    return p;
}

void multiply(int k, int x, vector<int>& tree) {
    int n = tree.size()/2;
    k += n;
    tree[k] *= x;
    for (k /= 2; k >= 1; k /= 2) {
        tree[k] = tree[2*k] * tree[2*k+1];
    }
}

int main() {
    int n,k;

    while(cin >> n >> k) {
        int v;
        vector<int> tree(2*(int)(pow(2,ceil(log2(n)))),1);
        for(auto u : tree)
            cerr << u << " ";
        for(int i = 0; i < n; i++) {
            cin >> v;
            multiply(i,v,tree);
        }

        for(auto u : tree)
            cerr << u << " ";
            
        char c;
        int i;
        while(k--) {
            
        }
    }

    return 0;
}