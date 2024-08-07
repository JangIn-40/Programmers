#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int chicken)
{
	int answer = 0;
    int coupon{}, remainCoupon{};

	while (chicken)
	{
        coupon += chicken % 10;
		answer += chicken / 10;
		chicken /= 10;
	}

    while (coupon)
    {
        remainCoupon += coupon % 10;
        answer += coupon / 10;
        coupon /= 10;
    }
    answer += remainCoupon / 10;
    
	return answer;
}

int main()
{
    cout << solution(1999);
}