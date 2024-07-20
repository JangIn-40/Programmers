#include <string>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

// ���� �����÷ο� ����ϴ°� �ʹ� �����
// factorial�� �ƴ� combination���� ��������� Ǯ������
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