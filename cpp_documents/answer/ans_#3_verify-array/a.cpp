#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)
const int inf = 1001001000;

int main(){
    int N, K, ans{0};
    cin >> N >> K;
    vector<int> a(N);
    rep(i,N)cin >> a[i];
    a.push_back(inf);
    rep(i,N){
        if(abs(a[i] - a[i+1]) <= K)++ans;
    }
    cout << ans << endl;
    return 0;
}
