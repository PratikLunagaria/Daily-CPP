

// 1: inclusion of other libraries
#include <iostream>
// no need of using .h extension in c++ , however it is used in c
// #include "iostream"
// #include <time.h> // this is how a C library is imported in C
// #include <ctime>  // the same C lib in C++ code
// #include "/path/to/file.h"


// 2: if-else statement
// int main()
// {
//     int x = 10;
//     if(x>6)
//     {
//         std::cout << "X is greater than 6" << std::endl;
//     }
//     if(x)
//     {
//         std::cout << "X is true" << std::endl;
//     }
//     if(-1)
//     {
//         std::cout << "-1 is true" << std::endl;
//     }
//     else if(x>18)
//     {
//         std::cout << "x is greater than 18" << std::endl;
//     }
//     // everything not 0 is true
//     // omit curly braces if there's only one line
//     if(!0) std::cout << "Yep, 0 is false" << std::endl;
// }


// 3: logical operators
// int main()
// {
//     int A,B,C;
//     bool and1 = A && B;
//     bool and2 = A || B;
//     bool and3 = A && B || C; // first it evaluates && statement and the result is compared with C
//     // execution goes from left to right
//     // use paranthesis for making code readable
//     bool not1 = !A;
//     return 0;
// }

// 4: Relational Operators
// int main()
// {
//     // >, >=, ==, <= , !=
//     int x,y,z;
//     bool a = x==y;
//     bool b = x !=y ;
//     return 0;
// }


// 5: comma operator
// int main()
// {
//     int x= 2, y=3;
//     // last statement will be taken into consideration no matter how many statements with comma are provided
//     if(x>4, y >1) std::cout << "Something..." <<std::endl;
//     return 0;
// }

// 6: loops
