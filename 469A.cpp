#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q, t, a[100];
	cin >> n >> p;
	for (int i = 0; i < p; ++i) {
		cin >> t;
		a[t-1] = 1;
	}
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> t;
		a[t-1] = 1;
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] != 1) {
			cout << "Oh, my keyboard!";
			return 0;
		}
	}

	cout << "I become the guy.";
	return 0;
}