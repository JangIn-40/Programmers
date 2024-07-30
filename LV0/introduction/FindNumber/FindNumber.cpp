#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num, int k)
{
	int answer = -1;
	int temp = num;

	int i{};
	while (temp)
	{
		++i;
		temp /= 10;
	}
	
	int j{};
	while (num >= 0)
	{
		++j;
		--i;
		int down = pow(10, i);
		if (down == 0)
			break;
		if (k == num / down)
		{
			answer = j;
			break;
		}
		num %= down;
	}

	return answer;
}

int main()
{
	cout << solution(123456, 7);
}