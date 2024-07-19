#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	vector<int> index;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 2)
		{
			index.push_back(i);
		}
	}

	if (index.empty())
	{
		answer.push_back(-1);
		return answer;
	}

	for (int i = index.front(); i <= index.back(); ++i)
	{
		answer.push_back(arr[i]);
	}

	return answer;
}