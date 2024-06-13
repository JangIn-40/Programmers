#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int n, int m)
{
	int answer = (num % n == 0 && num % m == 0) ? 1 : 0;

	return answer;
}

int main()
{
	solution(10, 5, 3);
}