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

string add(string a, string b) {
	if (a.length() < b.length())swap(a, b);
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int x = a[i] + b[i] - 96 + nho;
		nho = x / 10;
		int z = x % 10;
		c.push_back(z + '0');
	}
	if (nho > 0)c.push_back(nho + '0');
    reverse(c.begin(), c.end());
	return c;
}

int main(){
    boost;
    int t; 
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        vector<string> v(10, "0");
        v[1] = s2;
        foru(i, 2, 9) v[i] = add(v[i - 1], s2);
        string res;
        foru(i, 0, s1.size() - 1){
            res.pb('0');
            res = add(res, v[s1[i] - '0']);
        }
        cout << res << endl;
    }
}