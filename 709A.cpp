#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, b, d, t, c = 0;
	long double s = 0;
	

	cin >> n >> d >> b;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		if (t <= d)
		{	
			s += t;
			if (s > b)
			{
				s = 0;
				c++;
			}
		}
	}

	cout << c << "\n";



	return 0;
}