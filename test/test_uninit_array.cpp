// test_uninit_array.cpp
// A small checker for headfile src/test_uninit_array.hpp

#include <iostream>
#include <string>

#include "../src/uninit_array.hpp"

namespace xiaosuan_test {

namespace uninit_array {

using xiaosuan_lib::size_t;
using xiaosuan_lib::uninit_array;
using std::cout;
using std::endl;
using std::string;

struct foo {
    foo(int label = 0) {
        cout << "obj with label " << label << " has been inited" << endl;
        return;
    }
};

uninit_array <foo, 2> data1;

int main() {
    cout << "before init" << endl;
    data1.init(0, 114514);
    data1.init(1);
    cout << "after init" << endl;
    return 0;
}

}

}

int main() {
    return xiaosuan_test::uninit_array::main();
}