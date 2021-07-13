#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int a, b, c;
	int x = 0;
	while(n--)
	{
		cin >> a >> b >> c;
		if(a&&b || b&&c || a&&c)
			x++;

	}
	cout << x << "\n";
	return 0;
}