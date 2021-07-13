#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, g = 1, a[100000];
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n-1; ++i) {
		if (a[i] != a[i+1])
		{
			g++;
		}
	}

	cout << g << "\n";
	return 0;
}