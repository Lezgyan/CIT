#include <iostream>
using namespace std;

void fib(int n) {
	int d = 0, p = 1;
	cout << d << endl;
	cout << p << endl;
	for (int i = 2; i < n; i++) {
		cout << d + p << endl;
		int k = d;
		d = p;
		p = k + p;
	}
}

int main() {
	int n; cin >> n;
	fib(n);
	system("pause");
	return 0;
}