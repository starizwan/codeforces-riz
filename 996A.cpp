#include <bits/stdc++.h>
using namespace std;

int ar[] = {100, 20, 10, 5, 1};

int main() {
	int n, s = 0, d, t;
	cin >> n;

	for (int i = 0; i < 5; ++i)
	{
		t = ar[i];
		d = n/t;
		s += d;
		n = n - (d*t);
	}
		
	cout << s << "\n";

	return 0;
}