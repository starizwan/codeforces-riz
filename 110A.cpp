#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	ll n;
	int t, c = 0;
	cin >> n;
	while(n != 0) {
		t = n%10;
		n /= 10;
		if (t == 4 || t == 7) {
			c++;
		}
	}

	if (c == 4 || c == 7) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}