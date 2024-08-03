#include <string>
#include <vector>

using namespace std;

// TODO: 다른 사람 풀이에 시간복잡도 줄일 수 있는 방법이 있음
int solution(vector<int> numbers)
{
	int answer = 0;
	int max{ -10'000 * 10'000};

	for (int i = 0; i < numbers.size() - 1; ++i)
	{
		int num = numbers[i];
		for (int j = i + 1; j < numbers.size(); ++j)
		{
			int compareNum = numbers[j] * num;
			if (max < compareNum)
			{
				max = compareNum;
			}
		}
	}

	answer = max;
	return answer;
}