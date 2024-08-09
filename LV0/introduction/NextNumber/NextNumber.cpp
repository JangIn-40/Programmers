#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common)
{
    int answer = 0;
    int comp1 = common[1] - common[0];
    int comp2 = common[2] - common[1];

    if (comp1 != comp2)
    {
        answer = comp2 / comp1 * common[common.size() - 1];
    }
    else
    {
        answer = comp1 + common[common.size() - 1];
    }
    return answer;
}