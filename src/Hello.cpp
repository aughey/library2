#include "library1/Hello.h"
#include <iostream>

using namespace library1;

void Hello::SayHello()
{
    std::cout << HelloString() << std::endl;
}

std::string Hello::HelloString()
{
    return "library1: Hello, World!";
}