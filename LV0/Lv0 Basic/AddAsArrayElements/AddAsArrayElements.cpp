#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	for (const auto &e : arr)
	{
		for (int i = 0; i < e; ++i)
		{
			answer.push_back(e);
		}
	}

	return answer;
}