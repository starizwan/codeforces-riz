#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	long long int a, b, s, t;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		s = 0;
		if (a%b != 0) {
			t = (a/b);
			s = (b*(t+1)) - a;
		}
		cout << s << "\n";
	}


	return 0;
}