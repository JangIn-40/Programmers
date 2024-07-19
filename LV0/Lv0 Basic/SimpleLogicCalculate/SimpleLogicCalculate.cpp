#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 논리연산자를 비트연산자로 바꾸어도 가능하네?
bool solution(bool x1, bool x2, bool x3, bool x4)
{
	bool answer = true;

	answer = (x1 || x2) && (x3 || x4);

	return answer;
}

int main()
{
	
}