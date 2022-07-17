#include <iostream>
#include <cstring>
using namespace std;
int a, b = 0;
bool sosoo(int x) {
	if (x == 1) {
		return false;
	}
	for (int i = 2; i * i <= x; i++) { // 
		if (x % i == 0)  // 나머지가 0임
			return false;//소수아님
	}
	return true;//소수임
}
/*int sosooo(int x) {//so sooo 찾기 코드 입력받은 수보다 작은 최대 소수를 찾음
	while (1) {
		int count = 0;
		for (int i=2;  i * i <= x; i++) { //
			if (x % i == 0) { // 나머지가 0임
				count++;
				x--;
				break;
			}
			else { // 나머지가 0이 아님
				continue;
			}
		}
		if (count == 0) {
			return x;
		}
		else {
			count = 0;
			x--;
		}
	}
}*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (1) {
		int x = 1;
		cin >> x; //짝수만 입력함
		if (x == 0) {
			//exit(0);
			break;
		}
		else if (x % 2 == 1) {
			cout << "Goldbach's conjecture is wrong." << "\n";
		}
		else {
			int c = x;
			for (int i = 3; i < x; i = i + 2) {
				if (sosoo(i) && sosoo(x - i)) {
					cout << x << " = " << i << " + " << x - i << '\n';
					break;
				}
			}

		}
	}
	return 0;
}