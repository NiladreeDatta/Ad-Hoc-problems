#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	string res;
	int l = 0, r = n - 1;
	int lst = 0;
	while (l <= r) {
		vector<pair<int, char>> cur;
		if (lst < a[l]) cur.push_back(make_pair(a[l], 'L'));
		if (lst < a[r]) cur.push_back(make_pair(a[r], 'R'));
		sort(cur.begin(), cur.end());
		if (int(cur.size()) == 2 && cur[0].first != cur[1].first) {
			cur.pop_back();
		}
		if (int(cur.size()) == 1) {
			if (cur[0].second == 'L') {
				res += 'L';
				lst = a[l];
				++l;
			} else {
				res += 'R';
				lst = a[r];
				--r;
			}
		} else if (int(cur.size()) == 2) {
			int cl = 1, cr = 1;
			while (l + cl <= r && a[l + cl] > a[l + cl - 1]) ++cl;
			while (r - cr >= l && a[r - cr] > a[r - cr + 1]) ++cr;
			if (cl > cr) {
				res += string(cl, 'L');
			} else {
				res += string(cr, 'R');
			}
			break;
		} else {
			break;
		}
	}

	cout << res.size() << endl << res << endl;

	return 0;
}
