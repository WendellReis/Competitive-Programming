#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++)
        cin >> mat[n - 1][i];

    for (int j = 1; j < n; j++)
        for (int i = j; i < n; i++){
            if (mat[n - j][i] == mat[n - j][i - 1])
                mat[n - j-1][i] = 1;
            else
                mat[n - j-1][i] = -1;
        }
        

    if (mat[0][n - 1] == 1)
        cout << "preta\n";
    else
        cout << "branca\n";
    return 0;
}

/*
    n = 5
    # # # # b
    # # # b p
    # # p b b
    # b b p b
    p b p p b
*/