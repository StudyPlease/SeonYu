#include <iostream>
using namespace std;
int GCD(int a, int b);//최대공약수 함수
int LCM(int a, int b); //최소공배수 함수
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << GCD(a, b) << endl;
	cout << LCM(a, b) << endl;
}


int GCD(int a, int b) {
	int r = 1;
	if (a < b) {//a가 b보다 작다면 a와b 교환
		int x = a;
		a = b;
		b = x;
	}
	while (r != 0) {
		r = a % b;
		if (r == 0) {
			break;
		}
		a = b;
		b = r;
	}
	return b;
}

int LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}