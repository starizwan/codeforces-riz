#include <bits/stdc++.h>
using namespace std;

int ar[10000];

int main() {
	int t, n, r, k;
	cin >> t;
	while(t--) {
		cin >> n;
		int i = 0;
		k = 0;
		while(n != 0) {
			r  = n%10 * pow(10, i);
			n = n/10;
			i++;
			if (r != 0) {
				ar[k] = r;
				k++;
			}
		}
		cout << k << "\n";
		for (int i = 0; i < k; ++i) {
			cout << ar[i] << " " ;
		}
		cout << "\n";
	}
}