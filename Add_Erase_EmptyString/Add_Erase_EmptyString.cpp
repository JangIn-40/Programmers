#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag)
{
	vector<int> answer;

	for (int i = 0; i < flag.size(); ++i)
	{
		if (flag[i])
		{
			for (int j = 0; j < arr[i] * 2; ++j)
				answer.push_back(arr[i]);
		}
		else
		{
			for(int j = 0; j < arr[i]; ++j)
				answer.pop_back();
		}
	}

	return answer;
}

int main()
{
	solution({ 3, 2, 4, 1, 3 }, { true, false, true, false, false });
}