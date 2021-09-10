#include <iostream>

using namespace std;

int main() {
	int num = 0;

	do {
		cout << "크기(3보다 큰 홀수) : ";
		cin >> num;

		if (num % 2 == 0 || num <= 1) {
			continue;
		}
		for (int i = 0; i < num; i++) {
			for (int j = num - 1; j > i; j--) {
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++) {
				cout << "*";
			}
			cout << endl;
		}
		for (int i = 1; i < num; i++) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int j = 2 * num - 1; j > 2 * i; j--) {
				cout << "*";
			}
			cout << endl;
		}
	} while (num != 0);

	return 0;
}