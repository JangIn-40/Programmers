#include <string>
#include <vector>
#include <iostream>
using namespace std;

int pow(int a, int b)
{
	int sum{1};
	for (int i = 0; i < b; ++i)
	{
		sum *= a;
	}

	return sum;
}

// pow안쓰는게 가독성이 더 좋을려나
int solution(int a, int b, int c)
{
	int answer = 0;

	if (a == b && a == c)
	{
		answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) *
			(pow(a, 3) + pow(b, 3) + pow(c, 3));
	}
	else if(a == b || a == c || b == c)
	{
		answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
	}
	else
	{
		answer = a + b + c;
	}

	return answer;
}

int main()
{
	std::cout << solution(5, 3, 3);
}