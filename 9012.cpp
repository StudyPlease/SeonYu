#include <iostream>
#include <string>
using namespace std;


// (�� ) �� ������ ���ƾ��Ѵ�. )�� ���� ������ �ȵȴ�. ( �� �����´�� ( ������ +1�� �ϰ� )�� ������ -1���Ѵ�. 0���� �۾����ٸ� NO�� ����Ѵ�.  ������ ������ �� �� 0�� �ȴٸ� YES��, 0���� ũ�ٸ� NO�� ����Ѵ�. 

int main() {

	int x = 0;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int stk = 0;// (�� ������ +1, )�� ������ -1
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {//str�� ���̸�ŭ �ݺ�
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