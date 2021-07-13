#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, x;
	priority_queue<int> st;
	cin >> n;
	x = n;
	st.push(0);

	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		if (t == x) {
			cout << x;
			while (st.top() == --x && x > 0)
			{
				cout << " " <<st.top();
				st.pop();
			}
			cout << "\n";
		} else {
			st.push(t);
			cout << "\n";
		}
	}



	return 0;
}