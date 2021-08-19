#include <iostream>

int main(int, char**) {
    float x = 0;

    for (int i = 0; i < 100000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            x += 0.2;
        }        
    }
    std::cout << x;
    return 0;
}
