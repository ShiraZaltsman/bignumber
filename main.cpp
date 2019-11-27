#include <iostream>
#include "BigNumber.h"
using std::cout;
using std::endl;
int main() {
    BigNumber bn(123456, true);
    cout << bn;
    return 0;
}