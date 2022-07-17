#include <iostream>
#include <cstring>
using namespace std;
/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

int arr[10000] = {}; // 정수가 들어갈 최대 공간 생성
int Max = 0; // 큐에 들어있는 숫자의 수
void push() {
	int x = 0;
	cin >> x; // 정수 x

	if (Max == 0) {// 큐에 아무것도 없다면
		arr[0] = x; // 첫번째에 정수x 대입
		Max++; //큐에 들어있는 숫자의 수를 하나 증가
	}
	else { // 큐에 정수가 들어있다면
		arr[Max] = x;// 들어있던 정수 다음에 대입
		Max++; //큐에 들어있는 숫자의 수를 하나 증가 
	}
}
int pop() {
	if (Max == 0) {// 큐에 아무것도 없다면 -1 리턴
		return -1;
	}
	else {// 큐에 정수가 들어있다면
		int front = arr[0];
		for (int i = 0; i < Max; i++) {
			arr[i] = arr[i + 1];// 한칸씩 앞으로 민다 
		}
		Max--;//  큐에 들어있는 숫자의 수 감소
		return front; // 가장 앞에 있던 수 출력
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
	int coin = 0;//명령을 몇번 돌릴것인가
	cin >> coin;

	for (int i = 0; i < coin; i++) {
		string str;//어떤 명령을 실행할것인가
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