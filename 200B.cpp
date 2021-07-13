#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int ll;

int main() {
	int n, a, s = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		s += a;
	}

	cout << std::setprecision(9) <<(float)s/(n) << "\n";


	return 0;
}