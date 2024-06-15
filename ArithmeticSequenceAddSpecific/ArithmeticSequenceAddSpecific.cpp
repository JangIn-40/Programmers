﻿#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int d, vector<bool> included)
{
	int answer = 0;

	for (int i = 0; i < included.size(); ++i)
	{
		if (included[i])
		{
			answer += a + d * i;
		}
	}

	return answer;
}

int main()
{
	vector<bool> included{ true, false, false, true, true };

	std::cout << solution(3, 4, included);
}