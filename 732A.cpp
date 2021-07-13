#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r, t;
	cin >> k >> r;
	int i = 1;
	while(1) {
		t = k*i;
		if (t % 10 == 0 || t%10 == r)
		{
			cout << i <<"\n";
			return 0;
		}
		i++;

	}

	return 0;
}