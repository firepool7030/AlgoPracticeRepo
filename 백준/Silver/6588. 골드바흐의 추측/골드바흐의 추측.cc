#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void is_prime(bool ar[], int MAX) {
	ar[0] = ar[1] = true;
	int n = MAX - 1;
	for (int i = 2; i * i <= n; i++) {
		if (!ar[i]) {
			for (int j = i * i; j <= n; j += i) {
				ar[j] = true;
			}
		}
	}
	return;
}

int main(void) {
	const int MAX = 1000001;
	bool ar[MAX] = { false, }, flag;
	is_prime(ar, MAX);

	int tmp;
	while (true) {
		scanf("%d", &tmp);
		flag = false;
		if (tmp == 0)
			break;
		for (int j = 3; j <= tmp / 2; j += 2) {
			if (!ar[j] && !ar[tmp - j]) {
				flag = true;
				printf("%d = %d + %d\n", tmp, j, tmp - j);
				break;
			}
		}
		if (flag == false) {
			printf("Goldbach's conjecture is wrong.\n");
		}
	}

	return 0;
}