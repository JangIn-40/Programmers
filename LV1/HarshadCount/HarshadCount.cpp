#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = false;

    int sum{}, temp = x;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (x % sum == 0)
    {
        answer = true;
    }

    return answer;
}