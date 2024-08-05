#include <string>
#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

// 비쥬얼 스튜디오는 왜 없을까
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int solution(int a, int b) {
    int answer = 2;
    int num = gcd(a, b);
    int denominator = b / num;

    if (denominator == 1)
    {
        return answer = 1;
    }

    cout << "num: " << num << " denominator: " << denominator << endl;
    for (int i = 1; i <= denominator; ++i)
    {
        if (i % 2 == 0 || i % 5 == 0)
        {
            answer = 1;
            continue;
        }
        if (denominator % i == 0 && (i % 2 != 0 || i % 5 != 0))
        {
            answer = 2;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution(3500, 500);
}