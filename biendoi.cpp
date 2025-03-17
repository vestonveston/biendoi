#include <bits/stdc++.h>

using namespace std;


void home(){
    freopen("biendoi.inp", "r", stdin);
    freopen("biendoi.out", "w", stdout);
}

long long l, r;
void nhap(){
    cin >> l >> r;
}

long long F(long long a){
    long long kq = a/9*45;
    long long du = a%9;
    return kq + du*(du+1)/2;
}

void solve(){
    cout << F(r) - F(l-1) << '\n';
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0); home();
    int t;
    cin >> t;
    while(t--)nhap(), solve();
    return 0;
}
