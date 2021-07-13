#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	// size_t r = s.find("HQ+9")

	if (s.find("H") != std::string::npos || 
		s.find("9") != std::string::npos ||
		s.find("Q") != std::string::npos)
	{
		cout << "YES\n";
		return 0;
	}

	cout << "NO\n";
	return 0;
}