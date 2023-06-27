#include <bits/stdc++.h>

using namespace std;

void split(string const &str, const char delim, vector<string> &out) {
    size_t start;
    size_t end = 0;
 
    while((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int main() {
    int N, d1, d2, m1, m2, a1, a2;
    cin >> N;
    for(int i = 0; i < N; i++) {
        scanf("%d-%d-%d %d-%d-%d", &a1, &m1, &d1, &a2, &m2, &d2);
        cout << a1 << "-" << m1 << "-" << d1 << " ";
        cout << a2 << "-" << m2 << "-" << d2 << "\n";
    }

    return 0;
}