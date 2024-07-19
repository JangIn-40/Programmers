#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string alp)
{
	string answer = "";

	for (auto &e : my_string)
	{
		if (e == alp[0])
			e = std::toupper(e);
	}

	answer = my_string;
	return answer;
}