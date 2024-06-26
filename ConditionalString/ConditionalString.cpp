﻿#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string ineq, string eq, int n, int m)
{
	int answer = 0;

	if (ineq == ">")
	{
		if (eq == "=")
		{
			answer = n >= m;
		}
		else if (eq == "!")
		{
			answer = n > m;
		}
	}
	else if (ineq == "<")
	{
		if (eq == "=")
		{
			answer = n <= m;
		}
		else if (eq == "!")
		{
			answer = n < m;
		}
	}
	
	return answer;
}

int main()
{
	std::cout << solution(">", "!", 41, 78);
}