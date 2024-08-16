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

string traVe(char c){
    c = toupper(c);
    if(c == 'A' || c == 'B' || c == 'C') return "2";
    else if(c == 'D' || c == 'E' || c == 'F') return "3";
    else if(c == 'G' || c == 'H' || c == 'I') return "4";
    else if(c == 'J' || c == 'K' || c == 'L') return "5";
    else if(c == 'M' || c == 'N' || c == 'O') return "6";
    else if(c == 'P' || c == 'Q' || c == 'R' || c == 'S') return "7";
    else if(c == 'T' || c == 'U' || c == 'V') return "8";
    else if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z') return "9";
}

string check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return "NO\n";
        ++l; --r;
    }
    return "YES\n";
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s; cin >> s;
        string ans = "";
        for(auto &c : s){
            ans += traVe(c);
        }
        cout << check(ans);
    }
}