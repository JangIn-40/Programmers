#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TODO: day6 수 조작하기1에 신박한 풀이 있음
int solution(int n, string control)
{
	int answer = 0;

	// case로 하는게 좀더 보기 좋았겠다.
	for (const char &e : control)
	{
		if (e == 'w')
		{
			n += 1;
		}
		else if(e == 's')
		{
			n -= 1;
		}
		else if (e == 'd')
		{
			n += 10;
		}
		else
		{
			n -= 10;
		}
	}

	answer = n;
	return answer;
}

int main()
{
	std::cout << solution(0, "wsdawsdassw");
}