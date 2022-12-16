#include <cassert>

unsigned int length(const char *str) {
    const char* c = str;
    if (!str){
      return 0;
    }
    while (*c != '\0')
      {c++;}
  return c - str;
}

int main() {
  assert(length("a") == 1);
  assert(length("ab") == 2);
  assert(length("") == 0);
  assert(length("hello world") == 11);
  assert(length(nullptr) == 0);
  return 0;
}
