#include <string>
#include <vector>
#include <map>
using namespace std;

// TODO: �ٸ� ��� �ڵ� ���� yungoon 
// map�� �ƴ� ���ڰ������ Ǯ�� ����
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