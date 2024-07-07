#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(string myStr)
{
	vector<string> answer;

	string temp;
	for (int i = 0; i < myStr.size(); ++i)
	{
		if (myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c')
		{
			temp.push_back(myStr[i]);
		}
		else if(!temp.empty())
		{
			answer.push_back(temp);
			temp.clear();
		}
	}

	if (temp.empty())
	{
		answer.push_back("EMPTY");
	}
	else
	{
		answer.push_back(temp);
	}

	return answer;
}

int main()
{
	solution("cabab");
}