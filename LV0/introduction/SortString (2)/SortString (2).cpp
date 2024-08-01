#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string)
{
	string answer = "";
	int lowerChange = 'a' - 'A';

	for (auto &ch : my_string)
	{
		if (ch >= 'A' && ch <= 'Z')
			ch += lowerChange;
	}

	sort(my_string.begin(), my_string.end());

	answer = my_string;
	return answer;
}