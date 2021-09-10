#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, sum;
    string result;

    cout << "ют╥б : ";

    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if ((i % j) == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            result = "(1";
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    result += "+" + to_string(j);
                }
            }
            cout << i << result << ")" << endl;
        }
    }
    return 0;
}