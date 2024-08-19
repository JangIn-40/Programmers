#include <string>
#include <vector>

using namespace std;

// string말고 stack이나 vector쓰는게 훨씬 나음
int solution(int n) 
{
    int answer = 0;

    string threeDigit;
    while (n)
    {
        threeDigit += n % 3 + '0';
        n /= 3;
    }

    for (int i = 0; i < threeDigit.size(); ++i)
    {
        answer += (threeDigit[i] - '0') * pow(3, threeDigit.size() - i - 1);
    }

    return answer;
}