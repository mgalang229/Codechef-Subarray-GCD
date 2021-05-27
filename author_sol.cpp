#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int g = 0;
		// Suppose gcd of a subarray is 1. Let us denote this subarray by S.
		// What is the gcd of this S and any other number?
		// It is 1. Reason : gcd of Subarray is 1, and gcd(1, any_number) = 1
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			g = (i == 0 ? a : __gcd(g, a));
		}
		// Basically, if there exist a subarray in the array that has a gcd of 1
		// then the gcd of the whole array is also 1 (that's why print 'n')
		cout << (g == 1 ? n : -1) << '\n';
	}
	return 0;
}
