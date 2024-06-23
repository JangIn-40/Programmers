#include <string>
#include <vector>
#include <iostream>
using namespace std;

// for문 안써도 된다!
int solution(string my_string, string is_prefix)
{
	int answer = 0;

	for (int i = 0; i < my_string.size(); ++i)
	{
		if (is_prefix == my_string.substr(0, i))
		{
			return answer = 1;
		}
	}

	return answer;
}

int main()
{
	solution("banana", "ban");
}