#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
	string answer = "";

	int change = 'a' - 'A';
	for (const auto &ch : my_string)
	{
		if (ch <= 'Z')
			answer.push_back(ch + change);
		else if (ch <= 'z')
			answer.push_back(ch - change);
	}

	return answer;
}