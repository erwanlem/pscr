#include "string.h"
#include <iostream>


int main(int argc, char const *argv[])
{
    std::cout << "Hello World !" << std::endl;

    const char* str = "Hello";

    pr::String s = pr::String((const char*)str);

    std::cout << s << std::endl;

    return 0;
}
