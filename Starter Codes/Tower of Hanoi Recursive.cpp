// Author:  param3435
#include <iostream>
using namespace std;

void hanoi(int n, int a, int b) {
	if (n <= 0) {
		return;
	}
	return hanoi(n-1,b,a);
	return hanoi(n-1,a,b);
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		hanoi(n, 1, 2);
		cout << "\n";
	}
	return 0;
}
