#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2)
{
	int answer = 0;

	str1.find(str2) != str1.npos ? answer = 1 : answer = 2;

	return answer;
}