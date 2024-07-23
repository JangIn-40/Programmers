#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
	string answer = "";

	for (const auto &e : my_string)
	{
		if(!(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u'))
			answer.push_back(e);
	}

	return answer;
}