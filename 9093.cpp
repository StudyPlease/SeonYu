#include <iostream>
#include <cstring>
using namespace std;

char sent[1000];
int main()
{
	int a;
	cin >> a;// ������ ��
	cin.ignore(100, '\n');

	for (int i = 0; i < a; i++) {
		cin.getline(sent, 1000, '\n');
		char* ptr = strtok(sent, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ
		while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
		{
			for (int j = strlen(ptr) - 1; j >= 0; j--) {//�� ���� ��(�ڸ� ������ ũ��)���� ù��° ���ڱ��� 
				cout << ptr[j];          // �ڸ� ���ڿ� ���
			}
			cout << " ";
			ptr = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
		}
		cout << "\n";
	}
}
