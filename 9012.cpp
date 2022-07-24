#include <iostream>
#include <string>
using namespace std;


// (와 ) 의 갯수는 같아야한다. )가 먼저 나오면 안된다. ( 가 나오는대로 ( 갯수를 +1씩 하고 )를 만나면 -1씩한다. 0보다 작아진다면 NO를 출력한다.  문장의 끝까지 간 후 0이 된다면 YES를, 0보다 크다면 NO를 출력한다. 

int main() {

	int x = 0;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int stk = 0;// (가 나오면 +1, )가 나오면 -1
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {//str의 길이만큼 반복
			if (str[j] == ')' && stk <= 0 && j == 0) {
				stk--;
				//cout << "NO" << "\n";
				break;
			}
			else if (str[j] == ')') {
				stk--;
				if (stk < 0) {
					break;
				}
			}
			else if (str[j] == '(') {
				stk++;
			}

		}
		if (stk == 0) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}

	}
}