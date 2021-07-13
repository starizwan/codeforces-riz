#include <bits/stdc++.h>
using namespace std;

int ar[5000][3];

int main() {
	int n, t, p = 0;
	int x, y, z;
	x = y = z = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		if (t == 1) {
			ar[x][0] = i+1;
			x++;
		} else if(t == 2) {
			ar[y][1] = i+1;
			y++;
		} else if(t == 3) {
			ar[z][2] = i+1;
			z++;
		}
	}
	int m = min(min(x, y), z);
	cout << m << "\n";
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << ar[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}