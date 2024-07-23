#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 1;

	int temp;
	for (int i = 1; answer < n + 1; ++i)
	{
		answer *= i;
		temp = i;
	}

	answer = temp - 1;
	return answer;
}