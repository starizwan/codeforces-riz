#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int n, x, y, z, sumx, sumy, sumz;
	cin >> n;
	sumx = sumy = sumz = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y >> z;
		sumx += x;
		sumy += y;
		sumz += z;
	}

	if (sumx == 0 && sumy == 0 && sumz == 0)
	{
		cout << "YES\n";
	}
	else
		cout << "NO\n";

}