#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

	ll k, n, w;
	cin >> k >> n >> w;
	ll r = (k*(w*(w+1))/2) - n;
	if (r > 0)
	{
		cout << r << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}
	return 0;
}