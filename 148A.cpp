#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,l,m,n,d,c = 0;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i < d+1; ++i) {
		if (i%k == 0) {
			c++;
		} else if (i%l == 0) {
			c++;
		} else if (i%m == 0) {
			c++;
		} else if (i%n == 0) {
			c++;
		}
	}

	cout << c << "\n";
	return 0;
}