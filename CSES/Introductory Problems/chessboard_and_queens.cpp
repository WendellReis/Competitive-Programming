#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

int const N = 8; //dimensao do tabuleiro
int Q = 8; //quantidade de damas

//Marca '*' nas posicoes do tabuleiro que estao no alcance de uma dama posiconada em (x,y)
void countGames(char board[][N], int x, int y, int *count);
void setQueen(char board[][N], int x, int y);

int main(){
    //Leitura do Tabuleiro
    char board[N][N];
    REP(i,0,N) REP(j,0,N) cin >> board[i][j];
    
    int count = 0;
    REP(i,0,N) REP(j,0,N)
        if(board[i][j] == '.'){
            board[i][j] = '*';
            countGames(board,i,j,&count);
        }

    cout << count << "\n";
    return 0;
}

void countGames(char board[][N], int x, int y, int *count){
    if(Q == 2){
        REP(i,0,N) REP(j,0,N)
            if(board[i][j] == '.')
                count++;
        return;
    }

    char copy_board[N][N];
    REP(i,0,N) REP(j,0,N) copy_board[i][j] = board[i][j]; 
    setQueen(copy_board,x,y);
    Q--;
    REP(i,0,N) REP(j,0,N)
        if(copy_board[i][j] == '.')
            countGames(copy_board,i,j,count);
}

void setQueen(char board[][N], int x, int y){
    REP(i,0,N){
        board[x][i] = '*'; //vertical
        board[i][y] = '*'; //horizontal
    }
    //Diagonais
    REP(d,0,N){
        if(x + d < N && y + d < N)
            board[x+d][y+d] = '*';
        if(x - d >= 0 && y - d >= 0)
            board[x-d][y-d] = '*';
        if(x + d < N && y - d >= 0)
            board[x+d][y-d] = '*';
        if(x - d < N && y + d < N)
            board[x-d][y+d] = '*';
    }
}