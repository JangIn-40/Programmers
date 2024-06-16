#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

// 수 조작하기 1에서 다른사람 풀이 중 map사용이 있길래 map사용해봄
// 다른사람들은 함수 밖에 std::map을 선언해주었는데 map을 함수가 불릴때마다
// 초기화해주면 성능에 영향이 있어서 그런듯하다
// static으로 선언해주면 똑같은 효과를 얻을듯 
string solution(vector<int> numLog)
{
	static std::map<int, char> m{{ 1, 'w' }, { -1, 's' }, { 10, 'd' }, { -10, 'a' }};
	string answer = "";

	int n{};
	for (int i{1}; i < numLog.size(); ++i)
	{
		n = numLog[i] - numLog[i - 1];
		answer += m[n];
	}

	return answer;
}

int main()
{
	vector<int> numLog{ 0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1 };
	std::cout << solution(numLog);
}