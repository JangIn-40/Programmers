#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 2중for문 안써도 가능함
vector<vector<int>> solution(int n)
{
	vector<vector<int>> answer(n, std::vector<int>(n));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
				answer[i][j] = 1;
		}
	}

	return answer;
}

int main()
{
	solution(3);
}