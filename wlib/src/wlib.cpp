#include "wlib.h"

void wlib::hello()
{
        std::cout << "Hello world from wlib!" << std::endl;
}

void wlib::t_hello()
{
        libtl::t_hello();
}
WPrint::WPrint()
{
        m_ptr = new TestPrint;
}

void WPrint::print()
{
        m_ptr->print();
}
