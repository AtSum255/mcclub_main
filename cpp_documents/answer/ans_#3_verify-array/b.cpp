#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)

int main(){
    char board[3][3];
    rep(i,3)rep(j,3)cin >> board[i][j];
    bool win_atsum = false;
    rep(i,3){
        if(board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o')win_atsum = true;
        if(board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o')win_atsum = true;
    }
    cout << (win_atsum ? "Atsum" : "Nyapo") << endl;
    return 0;
}
