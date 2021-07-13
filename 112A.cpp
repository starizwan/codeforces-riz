#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	string r, s;
	cin >> r;
	cin >> s;
	
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	transform(r.begin(), r.end(), r.begin(), ::toupper);

	if (r.compare(s) > 0)
		cout << "1\n";
	else if (r.compare(s) < 0)
		cout << "-1\n";
	else
		cout << "0\n";
}