#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TODO: 다른사람 풀이 보기
// 반쪽만 봐도 가능함
int solution(vector<vector<int>> arr)
{
	int answer = 1;

	for (int i = 0; i < arr.size(); ++i)
	{
		for (int j = 0; j < arr[i].size(); ++j)
		{
			if (arr[i][j] != arr[j][i])
				return answer = 0;
		}
	}

	return answer;
}