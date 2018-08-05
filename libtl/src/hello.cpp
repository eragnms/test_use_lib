#include "hello.h"

void libtl::t_hello() {
        std::cout << "Hello world from test lib!" << std::endl;
}

TestPrint::TestPrint()
{}

void TestPrint::print()
{
        std::cout << "Hello world from class" << std::endl;
}
