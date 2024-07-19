#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

// 진짜 이렇게 해야했을까?
int solution(int a, int b, int c, int d)
{
	int answer = 0;

	if (a == b && b == c && c == d)
	{
		answer = 1111 * a;
	}
	else
	{
		if (a == b && a == c)
		{
			answer = pow(10 * a + d, 2);
		}
		else if (a == b && a == d)
		{
			answer = pow(10 * a + c, 2);
		}
		else if (a == c && a == d)
		{
			answer = pow(10 * a + b, 2);
		}
		else if (b == c && c == d)
		{
			answer = pow(10 * b + a, 2);
		}
		else if (a == b) 
		{
			if (c == d)
			{
				answer = (a + c) * (a - c);
			}
			else
			{
				answer = c * d;
			}
		}
		else if (a == c) 
		{
			if (b == d)
			{
				answer = (a + b) * (a - b);
			}
			else
			{
				answer = b * d;
			}
		}
		else if (a == d) 
		{
			if (b == c)
			{
				answer = (a + c) * (a - c);
			}
			else
			{
				answer = b * c;
			}
		}
		else if (b == c) 
		{
			if (a == d)
			{
				answer = (a + c) * (a - c);
			}
			else
			{
				answer = a * d;
			}
		}
		else if (b == d) 
		{
			if (a == c)
			{
				answer = (a + b) * (a - b);
			}
			else
			{
				answer = a * c;
			}
		}
		else if (c == d) 
		{
			if (b == a)
			{
				answer = (a + c) * (a - c);
			}
			else
			{
				answer = b * a;
			}
		}
		else 
		{
			answer = min(min(a, b), min(c, d));
		}
	}
	return answer > 0 ? answer : answer * (-1);
}

int main()
{
	std::cout << solution(4, 4, 1, 4);
	
}