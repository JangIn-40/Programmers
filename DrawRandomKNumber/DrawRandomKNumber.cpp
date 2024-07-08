#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, int k)
{
	vector<int> answer;

	bool isSame;
	for (const auto &e : arr)
	{
		isSame = false;
		for (auto &ele : answer)
		{
			if (ele == e)
				isSame = true;
		}

		if (!isSame)
			answer.push_back(e);

		if (k <= answer.size())
			break;
	}

	if (k > answer.size())
	{
		for (int i = answer.size(); i < k; ++i)
		{
			answer.push_back(-1);
		}
	}

	return answer;
}

int main()
{
	solution({ 0, 1, 1, 2, 2, 3 }, 3);
}