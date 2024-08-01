#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array)
{
	int answer = 0;

	for (auto &num : array)
	{
		while (num)
		{
			if (num % 10 == 7) ++answer;
			num /= 10;
		}
	}

	return answer;
}