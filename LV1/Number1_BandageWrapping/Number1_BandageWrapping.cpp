#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) 
{
    int answer = 0;
    int maxHealth = health;
    for (int j = 0, i = attacks[j][0], count = 0; i <= attacks[attacks.size() - 1][0]; ++i)
    {
        if (i == attacks[j][0])
        {
            health -= attacks[j][1];
            ++j;
            count = 0;
        }
        else
        {
            health += bandage[1];
            ++count;
        }

        if (count == bandage[0])
        {
            count = 0;
            health += bandage[2];
        }

        if (health > maxHealth)
        {
            health = maxHealth;
        }

        if (health <= 0)
        {
            answer = -1;
            break;
        }
        else
        {
            answer = health;
        }
    }

    return answer;
}

int main()
{
    solution({ 5, 1, 5 }, 30, { {2, 10}, {9, 15}, {10, 5}, {11, 5} });
}