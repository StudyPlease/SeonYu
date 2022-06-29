#include <iostream>
using namespace std;
int GCD(int a, int b);//�ִ����� �Լ�
int LCM(int a, int b); //�ּҰ���� �Լ�
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << GCD(a, b) << endl;
	cout << LCM(a, b) << endl;
}


int GCD(int a, int b) {
	int r = 1;
	if (a < b) {//a�� b���� �۴ٸ� a��b ��ȯ
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