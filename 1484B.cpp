#include <bits/stdc++.h>
using namespace std;

int ar[1000000000];

int main() {
	long long int a, b, c, k, t;
	int te;
	cin >> te;

	while(te--) {
		cin >> c;
		b = 0;
		for (int i = 0; i < c; ++i) {
			cin >> ar[i];
			b += ar[i];
		}
		k = b/c;
		t = ar[c-2]+k-ar[c-1];

		while(k < t) {
			// t = ar[c-2]+k-ar[c-1];
			if ( t%1 == 0) {
				cout << t << " " << k << "\n";
				break;
			} else {
				k *= 2;
				t = ar[c-2]+k-ar[c-1];
			}
		}


	}

	return 0;
}