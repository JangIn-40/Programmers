#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n)
{
	int answer = 0;

    for (int i = 0; i < n; ++i)
    {
        while (true)
        {
            if ((answer + 1) % 3 == 0 && (answer + 1) != 0)
            {
                ++answer;
            }
            else if ((answer + 1) % 10 == 3)
            {
                ++answer;
            }
            else if ((answer + 1) / 10 == 3 || (answer + 1) / 10 % 10 == 3)
            {
                ++answer;
            }
            else
            {
                ++answer;
                break;
            }
        }
    }

	return answer;
}

int main()
{
	solution(100);
}