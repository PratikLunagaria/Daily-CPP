#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(15) << 2020 << "Hello world" << std::endl;
    
    // char, int, short
    // short -32268 --- 32267    0---65536
    // long 
    // float precision till 6 decimals
    // double


    int day=1, month=1, year=2020;
    std::cout << std::setw(2) << std::setfill('0') << day << "."
            << std::setw(2) << std::setfill('0') << month << "."
            << year ;
    return 0;
}