#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 자료형의 크기에 대해서 잘 생각하자
int solution(string t, string p)
{
	int answer = 0;

    int N = p.size();
    unsigned long pNum = stoul(p);
    for (int i = 0; i < t.size() - (N - 1); ++i)
    {
        unsigned long num = stoul(string(t.begin() + i, t.begin() + i + N));
        if (pNum >= num)
        {
            ++answer;
        }
        cout << "num : " << num << " pNum: " << pNum << " answer: " << answer << endl;
    }

	return answer;
}

int main()
{
    solution("3141592", "271");
}