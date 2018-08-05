#pragma once

#include <iostream>

#include "libtl.h"

namespace wlib {
void hello();
void t_hello();
}

class WPrint
{
public:
        WPrint();
        void print();
private:
        TestPrint* m_ptr;
};
