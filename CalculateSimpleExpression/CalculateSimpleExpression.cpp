#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string binomial)
{
	int answer = 0;

	vector<string> temp;
	string b;
	for (const auto &e : binomial)
	{
		if (e == ' ')
		{
			temp.push_back(b);
			b.clear();
		}
		else
			b.push_back(e);
	}
	temp.push_back(b);

	if (temp[1] == "+")
	{
		answer = stoi(temp[0]) + stoi(temp[2]);
	}
	else if (temp[1] == "-")
	{
		answer = stoi(temp[0]) - stoi(temp[2]);
	}
	else if (temp[1] == "*")
	{
		answer = stoi(temp[0]) * stoi(temp[2]);
	}

	return answer;
}
