#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// prepare the name that contains "chef" for conditions later
		string name = "chef";
		int cnt = 0;
		int id = 0;
		while (id < (int) s.size()) {
			bool checker = false;
			// get the substring in 's' from 'id' up to 4 elements
			string tmp = s.substr(id, 4);
			// sort the string in lexicographic order before using 'next_permutation' function
			sort(tmp.begin(), tmp.end());
			do {
				// check if the permutation of the string matches the "chef"
				if (tmp == name) {
					checker = true;
				}
			} while (next_permutation(tmp.begin(), tmp.end()));
			// increment 'id' to move on the next set of characters
			id++;
			// if 'tmp' is permutation of the word "chef", then increment the counter
			if (checker) {
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
