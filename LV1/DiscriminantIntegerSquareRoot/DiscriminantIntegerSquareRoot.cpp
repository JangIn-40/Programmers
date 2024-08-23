#include <string>
#include <vector>
#include <numeric>
using namespace std;

long long solution(long long n) 
{
    long long answer = -1;
    long long root = sqrt(n);

    if (root * root == n)
    {
        answer = pow(root + 1, 2);
    }

    return answer;
}