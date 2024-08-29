#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(int a, int b)
{
    string answer = "";
    unordered_map<int, int> month{ {1, 31}, {2, 29}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
                                    {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30} };
    unordered_map<int, string> week{ {0, "THU"}, {1, "FRI"}, {2, "SAT"}, {3, "SUN"},
        {4, "MON"}, {5, "TUE"}, {6, "WED"} };
    int count{};
    for (int i = 1; i < a; ++i)
    {
        count += month[i];
    }

    count += b;
    answer = week[count % 7];
    return answer;
}