#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int n)
{
	int answer = (num % n == 0) ? 1 : 0;

	return answer;
}

int main()
{
	cout << solution(10, 6);
}