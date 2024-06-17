#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	vector<int> answer;

	for (int i = 0; i < queries.size(); ++i)
	{
		int temp = arr[queries[i][0]];
		arr[queries[i][0]] = arr[queries[i][1]];
		arr[queries[i][1]] = temp;
	}

	answer = arr;
	return answer;
}


int main()
{
	vector<vector<int>> queries{ {0, 3}, {1, 2}, {1, 4} };
	vector<int> arr{ 0, 1, 2, 3, 4 };
	vector<int> answer;

	answer = solution(arr, queries);
	for (const auto &e : answer)
	{
		std::cout << e << std::endl;
	}
}