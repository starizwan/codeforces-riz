#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, r;
	cin >> s >> r;
	reverse(s.begin(), s.end());
	if (r == s) {
		cout << "YES\n";
	} else {
		cout << "NO\n";	
	}
	
	return 0;
}