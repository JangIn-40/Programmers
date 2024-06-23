#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// std::reverse()에서 last는 범위에 포함되지 않는다.
// 이터레이터 end가 어딜 가리키는지 생각해보면 말이 되는것 같다
string solution(string my_string, int s, int e)
{
	string answer = "";

	reverse(my_string.begin() + s, my_string.begin() + e + 1);

	answer = my_string;
	return answer;
}

int main()
{
	cout << solution("Progra21Sremm3", 6, 12);
}