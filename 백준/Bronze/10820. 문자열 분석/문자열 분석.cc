#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s;

	while (getline(cin, s)) {
		int len = s.size(), upper = 0, lower = 0, space = 0, num = 0;
		for (int j = 0; j < len; j++) {
			if (s[j] >= 'A' && s[j] <= 'Z') {
				upper++;
			}
			else if (s[j] >= 'a' && s[j] <= 'z') {
				lower++;
			}
			else if (s[j] >= '0' && s[j] <= '9') {
				num++;
			}
			else if (s[j] == ' ') {
				space++;
			}
		}
		cout << lower << " " << upper << " " << num << " " << space << endl;
	}
	return 0;
}