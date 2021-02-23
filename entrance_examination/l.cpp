#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mx = 0;
    int ans;
    for(int i = 0; i < n; ++i){
        int s = 0;
        for(int j = 0; j < m; ++j){
            int x;
            cin >> x;
            s += x;
        }
        if(s > mx){
            mx = s;
            ans = i + 1;
        }
    }
    cout << ans;
}