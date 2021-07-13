#include <bits/stdc++.h>
using namespace std;

int main() {
	int candles, recycled, remainder = 0, result;
	cin >> candles >> recycled;

	while(candles >= 1) {
		result += candles;
		remainder = candles % recycled;
		candles /= recycled;
		candles += remainder;
	}

	cout << result << "\n";

	return 0;
}


// 2000 ===> 1000 + 500 + 250 + 125 + 62 + 31 + 15 + (1) + 8 + 4 + 2 + 1