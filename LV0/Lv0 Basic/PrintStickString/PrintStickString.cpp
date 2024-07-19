#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;

	cin >> str1 >> str2;

	str1.append(str2);
	cout << str1;
}