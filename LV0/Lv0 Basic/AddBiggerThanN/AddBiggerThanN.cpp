#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> numbers, int n)
{
	int answer = 0;

	for (const auto &e : numbers)
	{
		answer += e;
		if (answer > n)
			return answer;
	}
}