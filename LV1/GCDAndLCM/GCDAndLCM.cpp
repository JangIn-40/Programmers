#include <string>
#include <vector>

using namespace std;

// gcd쓰고 싶다
// gcd함수의 유클리드 호제법은 내 코드보다 훨씬 빠름
vector<int> solution(int n, int m) 
{
    vector<int> answer;
    vector<int> gcd;

    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            gcd.emplace_back(i);
            if (i != n / i)
            {
                gcd.emplace_back(n / i);
            }
        }
    }

    int max{};
    for (const int& num : gcd)
    {
        if (m % num == 0 && max < num)
        {
            max = num;
        }
    }
    answer.emplace_back(max);

    answer.emplace_back((m * n) / max);
    return answer;
}