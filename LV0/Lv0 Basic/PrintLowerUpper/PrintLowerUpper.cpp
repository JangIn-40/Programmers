#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    
    cin >> str;
    int changeUpDown = 'a' - 'A';

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += changeUpDown;
        else
            str[i] -= changeUpDown;
        i++;
    }

    cout << str;

    return 0;
}
