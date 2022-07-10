#include <iostream>
#include <cstring>
using namespace std;
/*
push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

*/

int arr[10000] = {}; // ���� ������ 10000��
int a = 0; // a�� ������ ����

void push_front() {
	int x = 0;
	cin >> x; // ���� x

	if (a == 0) {
		arr[0] = x; // a��° �迭�� ����x ����
		a++;
	}
	else { // a�� 0�� �ƴ� ���
		for (int i = a; i > 0; i--) { // ��ĭ�� �ڷ� �̷��
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
		a++;
	}
}
void push_back() {
	int x = 0;
	cin >> x; // ���� x
	if (a == 0) {
		arr[0] = x;
	}
	else {
		arr[a] = x;
	}
	a++;
}
int pop_front() {
	if (a == 0) {
		return -1;
	}
	else {
		int front = arr[0];
		for (int i = 0; i < a; i++) {
			arr[i] = arr[i + 1];//�� ���� ���� ���� ��ĭ�� ������ �δ� 
		}
		a--;//���� ����
		return front;
	}
}
int pop_back() {
	if (a == 0) {
		return -1;
	}
	else {
		int last = arr[a - 1];
		a--;//���� ����
		return last;
	}

}
int size() {
	return a;
}
int empty() {
	if (a == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int front() {
	if (a == 0) {
		return -1;
	}
	else {
		return arr[0];
	}
}
int back() {
	if (a == 0) {
		return -1;
	}
	else {
		return arr[a - 1];
	}
}


int main() {
	int coin = 0;//����� ��� �������ΰ�
	cin >> coin;

	for (int i = 0; i < coin; i++) {
		string str;//� ����� �����Ұ��ΰ�
		cin >> str;
		if (str == "push_front") {
			push_front();
		}
		else if (str == "push_back") {
			push_back();
		}
		else if (str == "pop_front") {
			cout << pop_front() << endl;
		}
		else if (str == "pop_back") {
			cout << pop_back() << endl;
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