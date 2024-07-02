#include <string>
#include <vector>
#include <iostream>
using namespace std;

// return�� find != npos ��밡��
int solution(string myString, string pat)
{
	int answer = 0;

	for (auto &e : myString)
	{
		e = std::tolower(e);
	}

	for (auto &e : pat)
	{
		e = std::tolower(e);
	}

	if (myString.find(pat) != std::string::npos)
		answer = 1;

	return answer;
}

int main()
{
	std::cout << solution("AbCdEfG", "aBc");
}