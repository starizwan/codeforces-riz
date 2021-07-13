#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int n, a, b, in, max;
	in = max = 0;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		in += (b - a);
		max = (max < in) ? in : max;
	}
	cout << max << "\n";
	return 0;
}