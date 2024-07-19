#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	string classify = (n % 2 == 0) ? " is even" : " is odd";
	cout << n << classify << endl;
}