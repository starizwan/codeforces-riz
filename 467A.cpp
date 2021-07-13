#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	int n, a, b, c = 0;
	cin >> n;
	while (n != 0) {
		cin >> a;
		cin >> b;
		if (b-a >= 2) {
			c++;
		}
		n--;
	}

	cout << c << "\n";
	
	return 0;
}