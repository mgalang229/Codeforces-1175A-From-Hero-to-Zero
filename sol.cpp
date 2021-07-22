#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, k;
		cin >> n >> k;
		long long cnt = 0;
		while (n > 0) {
			if (n % k == 0) {
				// if 'n' is divisible by 'k', then simply divide it
				n /= k;
				// increment 'cnt'
				cnt++;
			} else {
				// otherwise, add the remainder of 'n' and 'k' to 'cnt'
				cnt += (n % k);
				// subtract the remainder of 'n' and 'k' from 'n' itself (to make it divisible by 'k')
				n -= (n % k);
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
