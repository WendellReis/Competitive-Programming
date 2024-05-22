#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b, vector<int>& tree) {
    int n = tree.size()/2;
    a += n;
    b += n;
    int s = 0;
    while (a <= b) {
        if (a % 2 == 1)
            s += tree[a++];
        if (b % 2 == 0)
            s += tree[b--];
        a /= 2;
        b /= 2;
    }
    return s;
}

void add(int k, int x, vector<int>& tree) {
    k += n;
    tree[k] += x;
    for (k /= 2; k >= 1; k /= 2) {
        tree[k] = tree[2*k] + tree[2*k+1];
    }
}

int main() {
    n = 8;
    int v[] = {5,8,6,3,2,7,2,6};
    vector<int> tree(2*n,0);

    for(int i = 0; i < 8; i++)
        add(i, v[i], tree);
    
    for(auto u : tree)
        cout << u << " ";
    cout << endl;
    return 0;
}
