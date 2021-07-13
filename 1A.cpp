#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	double a, b, c, s;
	cin >> a >> b >> c;
	s = (ceil(a/c)) * (ceil(b/c));
	cout << (ll) s << "\n";
}