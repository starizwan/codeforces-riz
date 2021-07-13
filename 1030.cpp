#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, m = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		m += t;
	}

	if (m == 0) {
		cout << "EASY\n";
	} else {
		cout << "HARD\n";
	}

	return 0;
}