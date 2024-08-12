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

struct PhanSo{
    ll tu, mau;
};

void nhap(PhanSo &A){
    cin >> A.tu >> A.mau;
}

void rutgon(PhanSo &A){
    ll tmp = __gcd(A.tu, A.mau);
    A.tu /= tmp;
    A.mau /= tmp;
}

void in(PhanSo A){
    cout << A.tu << "/" << A.mau;
}

int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}