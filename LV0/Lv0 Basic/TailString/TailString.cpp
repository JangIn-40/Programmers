#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex)
{
	string answer = "";

	for (auto &e : str_list)
	{
		if (e.find(ex) == e.npos)
			answer += e;
	}

	return answer;
}