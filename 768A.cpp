#include <bits/stdc++.h>
using namespace std;

int ar[100000];

int main() {
	int n, c = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}

	sort(ar, ar+n);

	int min = ar[0];
	int max = ar[n-1];

	for (int i = 0; i < n; ++i)
	{
		if (ar[i] != min && ar[i] != max)
		{
			c++;
		}
	}

	cout << c << "\n";

	return 0;
}