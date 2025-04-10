#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
	long long sum = 0;
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    
    cout << sum << endl;
    
	return 0;
}