#include <iostream>

using namespace std;

int main() {
	int num, times, printNum;

	cout << "몇 단까지 출력할까요? : ";
	cin >> num;

	cout << "몇까지 곱할까요? :";
	cin >> times;

	cout << "한줄에 몇단씩 출력할까요? :";
	cin >> printNum;

	for (int k = 1; k <= printNum; k++) {
		for (int i = 1; i <= times; i++) {
			for (int j = printNum * k - printNum + 1; j < printNum * k + 1; j++) {
				if (j > num) {
					break;
				}
				cout << j << " * " << i << " = " << i * j << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}