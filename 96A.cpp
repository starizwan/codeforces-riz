#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;
	
	if(s.find("0000000") != std::string::npos)
		cout << "YES\n";
	else if (s.find("1111111") != std::string::npos)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}