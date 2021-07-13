#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {

	string s;
	cin >> s;
	bool f, g;

	f = g = true;

	for (int i = 0; i < s.size(); ++i)
	{
		if(islower(s[i])) {
			f = false;
			break;
		}
	}

	for (int i = 1; i < s.size(); ++i)
	{
		if (islower(s[i]))
		{
			g = false;
			break;
		}
	}

	if (g) {
		if (!islower(s[0]))
		{
			g = false;
		}
	}

	if (f || g)
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	if (g)
	{
		s[0] = toupper(s[0]);
	}

	cout << s << "\n";


	return 0;
}