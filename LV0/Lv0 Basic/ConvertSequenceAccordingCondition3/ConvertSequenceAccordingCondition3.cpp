#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, int k)
{
	vector<int> answer;
	
	if (k & 1)
	{
		for (auto &e : arr)
			e *= k;
	}
	else
	{
		for (auto &e : arr)
			e += k;
	}

	answer = arr;
	return answer;
}