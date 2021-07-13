#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main() { 
	int n, h, t, w = 0;

	cin >> n >> h;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		if (t > h) {
			w += 2;
		} else {
			w += 1;
		}
	}

	cout << w << "\n";


	return 0; 
}