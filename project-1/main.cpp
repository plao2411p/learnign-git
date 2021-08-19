#include <iostream>
using namespace std;
int main()
{   cout.precision(17);
    double x = 0;
    for (int i = 0; i < 100000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            x += 0.2;
        }
    }
    cout << x <<endl;
    return 0;
}
