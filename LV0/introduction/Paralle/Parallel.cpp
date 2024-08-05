#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> dots)
{
    int answer = 0;

    for (int i = 1; i < dots.size(); ++i)
    {
        int x1, x2, y1, y2;
        switch (i)
        {
        case 1:
            x1 = abs(dots[1][0] - dots[0][0]);
            x2 = abs(dots[3][0] - dots[2][0]);
            y1 = abs(dots[1][1] - dots[0][1]);
            y2 = abs(dots[3][1] - dots[2][1]);
            break;
        case 2:
            x1 = abs(dots[2][0] - dots[0][0]);
            x2 = abs(dots[3][0] - dots[1][0]);
            y1 = abs(dots[2][1] - dots[0][1]);
            y2 = abs(dots[3][1] - dots[1][1]);
            break;
        case 3:
            x1 = abs(dots[3][0] - dots[0][0]);
            x2 = abs(dots[2][0] - dots[1][0]);
            y1 = abs(dots[3][1] - dots[0][1]);
            y2 = abs(dots[2][1] - dots[1][1]);
            break;
        default:
            break;
        }

        if ((float)y1 / x1 == (float)y2 / x2)
        {
            answer = 1;
        }
        cout << "x1 : " << x1 << " x2: " << x2 << " y1: " << y1 << 
            " y2: " << y2 << " y1 / x1: " << y1 / x1 << " y2 / x2: " << y2 / x2 <<endl;
    }

    return answer;
}

int main()
{
    cout << solution({ {1, 2}, {2, 1}, {3, 4}, {4, 5} });
}