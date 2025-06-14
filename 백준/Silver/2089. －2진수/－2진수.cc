#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n;
	string str;
	cin >> n;

	if (n == 0)
		str = '0';
	else {
		while (n != 0) {
			if (n % 2 == 1 || n % 2 == -1) { // 홀수일 때
				str = '1' + str;
				if (n < 0) n--;
			}
			else {
				str = '0' + str;
			}
			n /= -2;
		}
	}

	cout << str;

	return 0;
}