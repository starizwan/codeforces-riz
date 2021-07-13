#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, last, s_last;
	cin >> n;

	if (n < 0) {
		last = n%10;
		n = n/10;
		s_last = n%10;
		if (abs(s_last) > abs(last)) {
			n = n/10;
			n = n * 10 + last;
		}
	}
	cout << n << "\n";
	return 0;
}