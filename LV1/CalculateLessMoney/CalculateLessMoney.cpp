#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    for (int i = 1; i <= count; ++i)
    {
        answer += price * i;
    }
    answer > money ? answer -= money : 0;

    return answer;
}

int main()
{
    cout << solution(3, 40, 4); //0
}