#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, k;
	cin >> s >> k;

	int a, b, n;
	a = b = 0;
	
	while(a != s.size() && b != k.size()) {
		if (s[a] == k[b]) {
			a++;
			b++;
		} else {
			b++;
		}
	}

	cout << a+1 << "\n";




	return 0;
}