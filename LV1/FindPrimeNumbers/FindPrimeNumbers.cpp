#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) 
{
    int answer = 0;
    int i, j;

    vector<int> primeNumber(n + 1, 0);

    for (i = 2; i < n; ++i)
    {
        if (primeNumber[i] == 1)
        {
            continue;
        }
        j = i;
        while ((j += i) <= n)
        {
            primeNumber[j] = 1;
        }
    }

    for (i = 2; i <= n; ++i)
    {
        if (primeNumber[i] == 0)
        {
            ++answer;
        }
    }

    return answer;
}

int main()
{
    cout << solution(10);
}