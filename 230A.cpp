#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 
	int s, n, p, q;
	multimap<int, int> a; 

	cin >> s >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p >> q;
		a.insert(pair<int, int>(p,q));
	}


	// printing map gquiz1 
	map<int, int>::iterator itr;  
	for (itr = a.begin(); itr != a.end(); ++itr) { 
		if (s > itr->first) {
			s += itr->second;
		} else {
			cout << "NO\n";
			return 0;
		}
	} 
	cout << "YES\n";


	return 0; 
} 