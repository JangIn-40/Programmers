#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr)
{
	vector<vector<int>> answer;

	if(arr.size() < arr[0].size())
		while (arr.size() != arr[0].size())
		{
			arr.push_back(vector<int>(arr[0].size()));
		}
	else if (arr.size() > arr[0].size())
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			while (arr.size() != arr[i].size())
			{
				arr[i].push_back(0);
			}
		}
	}

	answer = arr;
	return answer;
}