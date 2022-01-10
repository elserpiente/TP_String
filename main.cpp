#include "String.h"
#include <string>

int main() {

  String s("banane");

  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl
  //std::cout<<"\t Size : "<<s.length()<<std::endl
  std::cout<<"\t Capacity : "<<s.capacity()<<std::endl
  std::cout<<"\t Max Size : "<<s.max_size()<<std::endl

  return 0;
}
