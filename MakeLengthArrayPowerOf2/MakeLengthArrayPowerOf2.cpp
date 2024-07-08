#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	while (arr.size() & (arr.size() - 1))
	{
		arr.push_back(0);
	}

	answer = arr;
	return answer;
}
