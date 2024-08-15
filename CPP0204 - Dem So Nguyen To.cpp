#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define ford(i,a,b) for(int i = a; i >= b; --i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;
vector<int> nt(1000006, 1), pre(1000000, 0);

void sieve(){
    nt[0] = nt[1] = 0;
    foru(i, 2, 1000){
        if(nt[i]){
            for(int j = i * 2; j <= 1000000; j += i){
                nt[j] = 0;
            }
        }
    }
    foru(i, 1, 1000000){
        pre[i] = pre[i - 1] + nt[i];
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    sieve();
    while(t--){
        int l , r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
}