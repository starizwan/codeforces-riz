#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	char ch;
	int n, t;
	cin >> n >> t;
	cin >> s;
	for (int i = 0; i < t; ++i)
	{
		for (int i = 0; i < n-1; ++i)
		{
			if (s[i] < s[i+1])
			{
				ch = s[i];
				s[i] = s[i+1];
				s[i+1] = ch;
				i++;
			}
		}
	}

	cout << s << "\n";
	return 0;
}