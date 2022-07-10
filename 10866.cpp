#include <iostream>
#include <cstring>
using namespace std;
/*
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.

*/

int arr[10000] = {}; // 덱의 개수는 10000개
int a = 0; // a는 정수의 개수

void push_front() {
	int x = 0;
	cin >> x; // 정수 x

	if (a == 0) {
		arr[0] = x; // a번째 배열에 정수x 대입
		a++;
	}
	else { // a가 0이 아닐 경우
		for (int i = a; i > 0; i--) { // 한칸씩 뒤로 미룬다
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
		a++;
	}
}
void push_back() {
	int x = 0;
	cin >> x; // 정수 x
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
			arr[i] = arr[i + 1];//맨 앞의 수를 빼고 한칸씩 앞으로 민다 
		}
		a--;//정수 개수
		return front;
	}
}
int pop_back() {
	if (a == 0) {
		return -1;
	}
	else {
		int last = arr[a - 1];
		a--;//정수 개수
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
	int coin = 0;//명령을 몇번 돌릴것인가
	cin >> coin;

	for (int i = 0; i < coin; i++) {
		string str;//어떤 명령을 실행할것인가
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