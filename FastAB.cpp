#include <iostream>

using namespace std;

int main() {
	int num, times, printNum;

	cout << "�� �ܱ��� ����ұ��? : ";
	cin >> num;

	cout << "����� ���ұ��? :";
	cin >> times;

	cout << "���ٿ� ��ܾ� ����ұ��? :";
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