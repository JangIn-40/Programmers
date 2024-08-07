#include <string>
#include <vector>
using namespace std;

// 예전 강의에서 배운 코드 활용
string solution(string bin1, string bin2)
{
    string answer = "";
    int n = max(bin1.size(), bin2.size());
    bin1.insert(0, string(n - bin1.size(), '0'));
    bin2.insert(0, string(n - bin2.size(), '0'));
    answer.resize(n, '0');

    int carry = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        int n1 = bin1[i] - '0';
        int n2 = bin2[i] - '0';

        int sum = n1 + n2 + carry;
        carry = sum / 2;

        answer[i] = char(sum % 2 + '0');
    }

    if (carry > 0)
    {
        answer.insert(0, string(1, carry + '0'));
    }


    return answer;
}