#include <iostream>
#include <cstring>
using namespace std;

char sent[1000];
int main()
{
	int a;
	cin >> a;// 문장의 수
	cin.ignore(100, '\n');

	for (int i = 0; i < a; i++) {
		cin.getline(sent, 1000, '\n');
		char* ptr = strtok(sent, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
		while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
		{
			for (int j = strlen(ptr) - 1; j >= 0; j--) {//총 글자 수(자른 문장의 크기)부터 첫번째 글자까지 
				cout << ptr[j];          // 자른 문자열 출력
			}
			cout << " ";
			ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
		}
		cout << "\n";
	}
}
