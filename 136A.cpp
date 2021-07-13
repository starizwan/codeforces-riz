#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int a[101], z[101], n;
	cin >> n;

	for (int i = 1; i < n+1; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i < n+1; ++i)
	{
		z[a[i]] = i;
	}

	for (int i = 1; i < n+1; ++i)
	{
		cout << z[i] << " ";
	}
	cout << "\n";

}