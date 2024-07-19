#include <string>
#include <vector>
#include <iostream>
using namespace std;


string solution(string myString)
{
	string answer = "";

	for (auto &e : myString)
		e = std::tolower(e);

	answer = myString;
	return answer;
}

int main()
{
	solution("aBcDeFg");
}