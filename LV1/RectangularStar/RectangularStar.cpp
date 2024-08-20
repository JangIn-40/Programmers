#include <iostream>

using namespace std;

// TODO: O(n)으로 하는 방법있음
int main(void) 
{
    int a;
    int b;
    cin >> a >> b;
    
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}