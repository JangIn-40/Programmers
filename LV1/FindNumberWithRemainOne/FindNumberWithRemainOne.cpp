#include <string>
#include <vector>

using namespace std;

// TODO: 홀수일시 for문 안돌아도 그래서 시간복잡도도 줄어듬 다른사람풀이에 방법있음
int solution(int n) 
{
	int answer = 0;

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 1)
		{
			answer = i;
			break;
		}
	}

	return answer;
}