#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	
	size_t a= count(s.begin(), s.end(), 'A');
	size_t d= count(s.begin(), s.end(), 'D');

	if (a > d) {
		cout << "Anton\n";
	} else if (a < d) {
		cout << "Danik\n";
	} else {
		cout << "Friendship\n";
	}

	return 0;
}