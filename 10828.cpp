#include <iostream>
using namespace std;

int s = 0;
int arr[1000];

void push() {
	int x;
	cin >> x;
	s++;
	arr[s] = x;
	//return x;
}
int pop() {
	if (s != 0) {
		int a = arr[s];
		arr[s] = NULL;
		s--;
		return a;
	}
	else {
		return -1;
	}
}
int size() {
	return s;
}
int empty() {
	if (s != 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int top() {
	if (s != 0) {
		return arr[s];
	}
	else {
		return -1;
	}
}

int main() {
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {//���� x�� �Է¹ް� X�� ���ÿ� �ִ� �����̴�.
			push();
		}
		else if (str == "pop") {//���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
			cout << pop() << endl;
		}
		else if (str == "size") {//���ÿ� ����ִ� ������ ������ ����Ѵ�.
			cout << size() << endl;
		}
		else if (str == "empty") {//������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
			cout << empty() << endl;
		}
		else if (str == "top") {//������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
			cout << top() << endl;
		}
	}
}