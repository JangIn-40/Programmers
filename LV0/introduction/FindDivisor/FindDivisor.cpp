#include <string>
#include <vector>

using namespace std;

// TODO: 다른 사람의 풀이 보기 시간복잡도를 많이 줄일 수 있는 방법 있음
vector<int> solution(int n)
{
	vector<int> answer;

	for (int i = 1; i < n + 1; ++i)
	{
		if (n % i == 0)
			answer.push_back(i);
	}

	return answer;
}