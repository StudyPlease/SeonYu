#include <iostream>
#include <string>
#include <cstring>
#include <stack>

using namespace std;

double arr[30];
stack<double> ans;

int main() {
	int N;
	cin >> N;
	string str;
	cin >> str;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			ans.push(arr[str[i] - 'A']);
		}
		else {
			double b = ans.top();
			ans.pop();
			double a = ans.top();
			ans.pop();
			if (str[i] == '*') {
				ans.push(a * b);
			}
			else if (str[i] == '+') {
				ans.push(a + b);
			}
			else if (str[i] == '-') {
				ans.push(a - b);
			}
			else {
				ans.push(a / b);
			}
		}
	}

	printf("%.2lf", ans.top());
	return 0;
}
// ����ߴµ� ��Ǯ���� ���ͳ�... �ٽ� ���� �ؾ߰ڽ��ϴ�._.