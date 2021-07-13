#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
	int t,n,x,y;
	std::vector<int> a,b,tm;
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> x >> y;
			a.push_back(x);
			b.push_back(y);
		}
		for (int i = 0; i < n; ++i) {
			cin >> x;
			tm.push_back(x);
		}
		iterator it = v.begin();
		while (it != v.end()) {
			cout << "HELLO";
		}
	}
	return 0;
}