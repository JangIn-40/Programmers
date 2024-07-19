#include <string>
#include <vector>
#include <iostream>

using namespace std;

// emplace_back이나 push_back이나 속도차이를 잘 모르겠다
vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
	vector<int> answer;

	for (const auto &e : intervals)
	{
		for (int i = e[0]; i <= e[1]; ++i)
		{
			answer.emplace_back(arr[i]);
		}
	}

	return answer;
}