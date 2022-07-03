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
		if (str == "push") {//정수 x를 입력받고 X를 스택에 넣는 연산이다.
			push();
		}
		else if (str == "pop") {//스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
			cout << pop() << endl;
		}
		else if (str == "size") {//스택에 들어있는 정수의 개수를 출력한다.
			cout << size() << endl;
		}
		else if (str == "empty") {//스택이 비어있으면 1, 아니면 0을 출력한다.
			cout << empty() << endl;
		}
		else if (str == "top") {//스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
			cout << top() << endl;
		}
	}
}