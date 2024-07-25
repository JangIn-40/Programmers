#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string my_string)
{
	string answer = "";
	map<char, bool> comp;

	for (const auto &ch : my_string)
	{
		if (!comp[ch])
		{
			comp[ch] = true;
			answer.push_back(ch);
		}
	}

	return answer;
}

int main()
{
	solution("We are the world");
}