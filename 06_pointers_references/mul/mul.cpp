#include <cstring>
#include <cassert>
#include "mul.h"

int main(){
    assert(strcmp(mul("5", "2"), "10") == 0);
    assert(strcmp(mul("0", "1"), "0") == 0);
    assert(strcmp(mul("99", "99"), "9801") == 0);
}