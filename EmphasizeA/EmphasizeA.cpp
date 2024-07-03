#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString)
{
	string answer = "";

	for (auto &e : myString)
	{
		if (e == 'a')
			e = std::toupper(e);
		else if(e >= 'B' && e <= 'Z')
			e = std::tolower(e);
	}

	answer = myString;
	return answer;
}