#include <string>
#include <vector>
#include <map>
using namespace std;

// TODO: 다른 사람 코드 보기 yungoon 
// map이 아닌 숫자계산으로 풀수 있음
string solution(string rsp)
{
	string answer = "";
	map<char, string> temp{ {'2', "0"}, {'0', "5"}, {'5', "2"}};

	for (const auto &e : rsp)
	{
		answer += temp[e];
	}

	return answer;
}