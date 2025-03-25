#include <iostream>
using namespace std;
// Function to add two numbers
int add(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	cout << "Nhap so dau tien: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	int n=add(a, b);
	cout << n << endl;
	return 0;
}
