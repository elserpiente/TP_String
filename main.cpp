#include "String.h"

int main() {

  String s;
  std::cout<<s.getStr()<<std::endl;
  std::cout<<"Hello world"<<std::endl;

  char arr[100] = {};
  printf("size = %lu bytes \n", sizeof arr);

  return 0;
}
