#include <iostream>
using namespace std;

typedef int Natural;

//��һ��ᰴ˳���1
enum Weekday { SUN = 7, MON = 1, TUE, WED, THU, FRI, SAT };
enum GameResult { WIN, LOSE, TIE, CANCEL };

void test_type() {
	GameResult result;
	enum GameResult cancel = CANCEL;

	for (int count = WIN; count <= CANCEL; count++) {
		result = GameResult(count);
		//Ҳ����дcancel����,"3"��ö���ж�ӦCANCEL
		if (result == 3)
			cout << "The game was cancelled" << endl;
		else {
			cout << "The game was played";
			if (result == WIN)
				cout << "and we won!";
			if (result == LOSE)
				cout << "and we lost.";
			cout << endl;
		}
	}

}