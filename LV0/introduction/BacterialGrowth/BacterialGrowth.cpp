#include <string>
#include <vector>

using namespace std;

// TODO: 2의 배수는 쉬프트 연산...
int solution(int n, int t)
{
	int answer = n;

	for (int i = 0; i < t; ++i)
	{
		answer *= 2;
	}

	return answer;
}
