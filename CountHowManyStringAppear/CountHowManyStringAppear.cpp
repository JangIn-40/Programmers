#include <string>
#include <vector>
#include <iostream>
using namespace std;

// find������ ���ϰ� �ѹ������ε� ����
int solution(string myString, string pat)
{
	int answer = 0;

	int f = myString.find(pat);
	while (f != myString.npos)
	{
		++answer;
		f = myString.find(pat, f + 1);
	}

	return answer;
}