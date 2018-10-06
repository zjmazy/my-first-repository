#include <iostream>

using namespace std;

void test_star() {
	for (int i = 0; i < 4; i++) {
		for (int j = 6 - i * 2; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 5 - i * 2; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}
