#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString)
{
	string answer = "";
	answer.reserve(myString.size());

	for (const auto &e : myString)
	{
		e < 'l' ? answer.push_back('l') : answer.push_back(e);
	}

	return answer;
}