#include <string>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

// 정수 오버플로우 계산하는거 너무 힘들다
// factorial이 아닌 combination으로 재귀적으로 풀수있음
int solution(int balls, int share)
{
	int answer = 1;
	int gcd{}, sumBalls{1}, sumShare{1};

	if (balls - share < share)
	{
		share = balls - share;
	}
	
	for (int i = share; i > 0; --i)
	{
		sumBalls *= balls--;
		sumShare *= i;

		gcd = std::gcd(sumBalls, sumShare);
		sumBalls /= gcd;
		sumShare /= gcd;
	}

	answer = sumBalls;
	return answer;
}

int main()
{
	std::cout << solution(30, 15);

}