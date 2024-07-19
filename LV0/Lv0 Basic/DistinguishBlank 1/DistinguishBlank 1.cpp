#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(string my_string)
{
	vector<string> answer;

	int start{}, end{};
	while (my_string.find(' ', start) != my_string.npos)
	{
		end = my_string.find(' ', start);
		if(end != start)
			answer.push_back(my_string.substr(start, end - start));
		start = end + 1;
	}

	if (start < my_string.size())
	{
		answer.push_back(my_string.substr(start));
	}
	
	return answer;
}

int main()
{
	solution("i love you");
}