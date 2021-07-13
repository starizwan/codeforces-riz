#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100], s=0, c=0, r=0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s += a[i];
	}

	sort(a, a+n, greater <int>());
	for (int i = 0; i < n; ++i) {
		r += a[i];
		if (r > s-r) {
			cout << i+1 << "\n";
			return 0;
		}
	}

	return 0;
}