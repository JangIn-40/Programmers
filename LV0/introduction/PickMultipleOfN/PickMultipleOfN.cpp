#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist)
{
	vector<int> answer;

	for (const auto &i : numlist)
	{
		if (i % n == 0 && i != 0)
			answer.push_back(i);
	}

	return answer;
}