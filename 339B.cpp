#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, m, s, c, t;

	cin >> n >> m;
	c = 1;
	s = 0;
	for (int i = 0; i < m; ++i) {
		cin >> t;
		if (t - c >= 0) {
			s += (t-c);
			c = t;
		} else {
			s += ((t-c)+n);
			c = t;
		}
	}

	cout << s << "\n";
	return 0;
}