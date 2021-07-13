#include <bits/stdc++.h>
using namespace std;

std::vector<int> team1, team2, bench;

int main() {
	int n, m, x, y;
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		cin >> x >> y;

		if (!team1.contains(y))
		{
			team1.push_back(x);
		} else {
			team2.push_back(x);
		}
		
		team2.push_back(y);


	}

	return 0;
}