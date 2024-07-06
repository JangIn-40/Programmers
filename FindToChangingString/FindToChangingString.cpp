#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat)
{
	int answer = 0;

	for (auto &e : myString)
	{
		if (e == 'A')
			e = 'B';
		else
			e = 'A';
	}

	answer = myString.find(pat) != myString.npos ? 1 : 0;

	return answer;
}

