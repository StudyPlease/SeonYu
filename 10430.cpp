#include <iostream>
using namespace std;


int main() {
	int arr[3];

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];

	cout << (arr[0] + arr[1]) % arr[2] << endl;
	cout << ((arr[0] % arr[2]) + (arr[1] % arr[2])) % arr[2] << endl;
	cout << (arr[0] * arr[1]) % arr[2] << endl;
	cout << ((arr[0] % arr[2]) * (arr[1] % arr[2])) % arr[2] << endl;
}
