#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 프로그래머스에서는 const string & 타입은 오류발생
// 리터럴로 전달해도 오류가 안나던데 왜 오류가 생기는지 모르겠다
string solution(const string &my_string, const string &overwrite_string, int s)
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