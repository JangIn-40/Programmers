#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	vector<int> answer;

	for (const auto &e : queries)
	{
		for (int i = e[0]; i <= e[1]; ++i)
		{
			++arr[i];
		}
	}

	answer = arr;
	return answer;
}