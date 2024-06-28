#include "library2/Hello.h"
#include <iostream>

using namespace library2;

void Hello::SayHello()
{
    std::cout << HelloString() << std::endl;
}

std::string Hello::HelloString()
{
    return "library1: Hello, World!";
}
