#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n)
{
	int answer = 0;
	int temp{}, temp2{}, count{};
    int divide10{ n / 10 };

    for (int i = 0; i < n; ++i)
    {
        while (true)
        {
            if (answer % 3 == 0)
            {
                ++answer;
            }
            else if (answer % 10 % 3 == 0 && answer % 10 != 0)
            {
                ++answer;
            }
            else if (divide10 % 3 == 0 && divide10 != 0)
            {
                ++answer;
            }
            else
            {
                ++answer;
                break;
            }
        }
        cout << "n : " << i << " answer : "<< answer << endl;
    }

	return answer;
}

int main()
{
	solution(3);
}