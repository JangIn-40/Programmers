#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString)
{
	string answer = "";

	for (auto &e : myString)
		e = std::toupper(e);

	answer = myString;
	return answer;
}