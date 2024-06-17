#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	vector<int> answer;

	for (int i = 0; i < queries.size(); ++i)
	{
		for (int j = queries[i][0]; j <= queries[i][1]; ++j)
		{
			if (j % queries[i][2] == 0)
			{
				arr[j]++;
			}
		}

		for (const auto &e : arr)
		{
			std::cout << e << " ";
		}

		std::cout << std::endl;

	}

	answer = arr;
	return answer;
}

int main()
{
	vector<vector<int>> queries{ {0, 4, 1}, {0, 3, 2}, {0, 3, 3} };
	vector<int> arr{ 0, 1, 2, 4, 3 };
	vector<int> answer;

	answer = solution(arr, queries);
	/*for (const auto &e : answer)
	{
		std::cout << e << std::endl;
	}*/
}