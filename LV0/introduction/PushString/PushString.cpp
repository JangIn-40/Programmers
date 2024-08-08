#include <string>
#include <vector>

using namespace std;
\// TODO: 다른 사람 풀이에 더 좋은 코드 있음
int solution(string A, string B)
{
    int answer = -1;
    int N = A.size();

    for (int i = 0; i < N; ++i)
    {
        if (A == B)
        {
            return answer = i;
        }
        else
        {
            A.insert(A.begin(), A[N - 1]);
            A = A.substr(0, N);
        }
    }

    return answer;
}

int main()
{
    solution("apple", "elppa");
}