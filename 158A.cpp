#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, t, c = 0; 
	int z[51];
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
		cin >> z[i];

	for (int i = 1; i <= n; ++i)
		if (z[i] > 0 && z[i] >= z[k])
			c++;
		else
			break;

	cout << c << "\n";

	return 0;
}