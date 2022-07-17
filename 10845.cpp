#include <iostream>
#include <cstring>
using namespace std;
/*
push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/

int arr[10000] = {}; // ������ �� �ִ� ���� ����
int Max = 0; // ť�� ����ִ� ������ ��
void push() {
	int x = 0;
	cin >> x; // ���� x

	if (Max == 0) {// ť�� �ƹ��͵� ���ٸ�
		arr[0] = x; // ù��°�� ����x ����
		Max++; //ť�� ����ִ� ������ ���� �ϳ� ����
	}
	else { // ť�� ������ ����ִٸ�
		arr[Max] = x;// ����ִ� ���� ������ ����
		Max++; //ť�� ����ִ� ������ ���� �ϳ� ���� 
	}
}
int pop() {
	if (Max == 0) {// ť�� �ƹ��͵� ���ٸ� -1 ����
		return -1;
	}
	else {// ť�� ������ ����ִٸ�
		int front = arr[0];
		for (int i = 0; i < Max; i++) {
			arr[i] = arr[i + 1];// ��ĭ�� ������ �δ� 
		}
		Max--;//  ť�� ����ִ� ������ �� ����
		return front; // ���� �տ� �ִ� �� ���
	}
}
int size() {
	return Max;
}
int empty() {
	if (Max == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int front() {
	if (Max == 0) {
		return -1;
	}
	else {
		return arr[0];
	}
}
int back() {
	if (Max == 0) {
		return -1;
	}
	else {
		return arr[Max - 1];
	}
}

int main() {
	int coin = 0;//����� ��� �������ΰ�
	cin >> coin;

	for (int i = 0; i < coin; i++) {
		string str;//� ����� �����Ұ��ΰ�
		cin >> str;
		if (str == "push") {
			push();
		}
		else if (str == "pop") {
			cout << pop() << endl;
		}
		else if (str == "size") {
			cout << size() << endl;
		}
		else if (str == "empty") {
			cout << empty() << endl;
		}
		else if (str == "front") {
			cout << front() << endl;
		}
		else if (str == "back") {
			cout << back() << endl;
		}
	}
}