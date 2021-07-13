#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int a, b, n = 0;
	cin >> a >> b;
	while(a <= b) {
		a *= 3;
		b *= 2;
		n++;
	}
	cout << n << "\n";
	return 0;
}