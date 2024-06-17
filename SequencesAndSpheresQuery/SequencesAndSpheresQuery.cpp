#include <string>
#include <vector>
#include <iostream>
#include <limits>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	vector<int> answer;
	int temp;
	
	for (int i = 0; i < queries.size(); ++i)
	{
		temp = std::numeric_limits<int>::max();
		for (int j = queries[i][0]; j <= queries[i][1]; ++j)
		{
			if (arr[j] < temp && arr[j] > queries[i][2])
			{
				temp = arr[j];
			}
		}
		if (temp == std::numeric_limits<int>::max())
		{
			temp = -1;
		}
		answer.push_back(temp);
	}

	return answer;
}

int main()
{
	vector<vector<int>> queries{ {0, 4, 2}, {0, 3, 2}, {0, 2, 2} };
	vector<int> arr{ 0, 1, 2, 4, 3 };
	vector<int> answer;

	answer = solution(arr, queries);
	for (const auto &e : answer)
	{
		std::cout << e << std::endl;
	}
}