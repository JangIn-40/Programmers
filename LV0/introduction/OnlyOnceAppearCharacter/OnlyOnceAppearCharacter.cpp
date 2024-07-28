#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// map사용하는 for문에서 if else안써도 가능
string solution(string s)
{
	string answer = "";
	unordered_map<char, int> m;

	for (const auto &ch : s)
	{
		if (m[ch])
			++m[ch];
		else
			m[ch] = 1;
	}

	for (const auto &pair : m)
	{
		if (pair.second == 1)
		{
			answer.push_back(pair.first);
		}
	}

	sort(answer.begin(), answer.end());
	return answer;
}

int main()
{
	solution("abcabcadc");
}