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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// set 'gcd' to the first element of the array
		int gcd = a[0];
		// set 'ans' to -1 (initial)
		int ans = -1;
		for (int i = 1; i < n; i++) {
			// get the GCD of every element
			gcd = __gcd(gcd, a[i]);
			if (gcd == 1) {
				// if the GCD is equal to 1, then store the 'i' + 1 (count)
				ans = i + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
