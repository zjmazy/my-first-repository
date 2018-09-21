#include <iostream>
using namespace std;

void test_for() {
	int n;

	cout << "Enter a positive integer:";
	cin >> n;
	cout << "Number " << n << " Factors ";

	for (int k = 1; k <= n; k++)
		if (n%k == 0)
			cout << k << " ";
	cout << endl;
}