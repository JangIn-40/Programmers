#include <string>
#include <vector>
#include <iostream>

using namespace std;

// emplace_back�̳� push_back�̳� �ӵ����̸� �� �𸣰ڴ�
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