#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) 
{
    if (num == 1)
    {
        return 0;
    }

    int answer = 0;
    long temp = num;
    while (temp != 1 && answer < 500)
    {
        ++answer;

        temp & 1 ? temp = temp * 3 + 1 : temp >>= 1;

        cout << "answer: " << answer << " num: " << temp << endl;
    }

    if (answer == 500 && temp != 1)
    {
        answer = -1;
    }

    return answer;
}

int main()
{
    solution(626331);
}