#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)

int main(){
    int N, Q, com, x;
    cin >> N >> Q;
    vector<int> a(N);
    rep(i,N)cin >> a[i];
    rep(_,Q){
        cin >> com;
        if(com == 1){
            cin >> x;
            a.push_back(x);
        }else{
            rep(i,a.size())cout << a[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}
