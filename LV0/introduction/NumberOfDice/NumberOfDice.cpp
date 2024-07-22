#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n)
{
	int answer = 1;

	for (const auto &length : box)
	{
		answer *= length / n;
	}

	return answer;
}