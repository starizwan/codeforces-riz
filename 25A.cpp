#include <bits/stdc++.h>
using namespace std;

int ar[100];

int main() {
	int n, e, o, et;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}
	et = 0;
	for (int i = 0; i < n; ++i) {
		if (ar[i] % 2 == 0) {
			e = i;
			et++;
		} else {
			o = i;
		}
	}

	if (et == 1) {
		cout << e+1 << "\n";
	} else {
		cout << o+1 << "\n";
	}


	return 0;
}