#include <string>
#include <vector>
#include <iostream>

using namespace std;


// 프로그래머스에서는 문제 원형을 변경하진 말자!
string solution(string my_string, string overwrite_string, int s)
{
	string answer = my_string;

	for (int i = s, j = 0; i < overwrite_string.size() + s; ++i, ++j)
	{
		answer[i] = overwrite_string[j];
	}
	return answer;
}

int main()
{
	string my_string = "He11oWorld";
	string overwrite_string = "lloWorl";
	int s = 2;

	cout << solution(my_string, overwrite_string, s) << endl;
}