#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, t;
	std::vector<int> v;
	
	cin >> n >> t;
	for (int i = 0; i < n-1; ++i) {
		cin >> temp;
		v.push_back(temp);
	}

	int i = 0;
	while(i != t-1) {
		if (i > t-1) {
			cout << "NO\n";
			return 0;
		}
		i += v[i];
	}

	cout << "YES\n";
	return 0;
}