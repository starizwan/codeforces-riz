#include <bits/stdc++.h>
using namespace std;

int h[100], g[100];

int main() {
	int n, c = 0;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> h[i] >> g[i];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (h[j] == g[i]) {
				c++;
			}
		}
	}

	cout << c << "\n";
	
	return 0;
}