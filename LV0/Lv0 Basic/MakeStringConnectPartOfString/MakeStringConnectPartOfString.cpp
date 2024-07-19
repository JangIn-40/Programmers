#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts)
{
	string answer = "";

	for (int i = 0; i < parts.size(); ++i)
	{
		for (int j = parts[i][0]; j <= parts[i][1]; ++j)
		{
			answer += my_strings[i][j];
		}
	}

	return answer;
}

int main()
{
	solution({ "progressive", "hamburger", "hammer", "ahocorasick" }, 
		{ {0, 4}, {1, 2}, {3, 5}, {7, 7} });
}