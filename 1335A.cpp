#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, r;
	cin >> n;
	while(n--) {
		cin >> x;
		if (x%2 == 0) {
			r = x-(x/2)-1;
		} else {
			r = x-(x/2)-1;
		}

		cout << r << "\n";
	}
	return 0;
}