#include <bits/stdc++.h>

using namespace std;

bool check(string s1, string s2) {
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return (s1 == s2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			// check substring from 'i' up to 4 elements if matches "chef"
			if (check(s.substr(i, 4), "chef")) {
				cnt++;
			}
		}
		if (cnt > 0) {
			cout << "lovely " << cnt;
		} else {
			cout << "normal";
		}
		cout << '\n';
	}
	return 0;	
}
