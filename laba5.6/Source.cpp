#include <iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	int c = sum(a, b);
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}