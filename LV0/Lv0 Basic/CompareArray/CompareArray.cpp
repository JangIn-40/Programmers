#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
	int answer = 0;

	answer = arr1.size() < arr2.size() ? -1 : 1;
	if (arr1.size() == arr2.size())
	{
		int sum1{}, sum2{};
		for (const auto &e : arr1)
			sum1 += e;
		for (const auto &e : arr2)
			sum2 += e;

		answer = sum1 < sum2 ? -1 : 1;
		answer = sum1 == sum2 ? 0 : answer;
	}

	return answer;
}