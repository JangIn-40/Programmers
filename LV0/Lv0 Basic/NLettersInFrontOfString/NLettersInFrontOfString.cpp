#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, int n)
{
	string answer = "";
	
	answer = my_string.substr(0, n);

	return answer;
}

int main()
{
	std::cout << solution("ProgrammerS123", 11);
}