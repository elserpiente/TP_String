#include "String.h"

int main() {

  String s("banane");

  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl;
  //std::cout<<"\t Size : "<<s.length()<<std::endl;
  std::cout<<"\t Capacity : "<<s.capacity()<<std::endl;
  std::cout<<"\t Max Size : "<<s.max_size()<<std::endl;
  std::cout<<"Copy in s2 ... "<<std::endl;
  String s2(s);
  std::cout<<"Clear ... "<<std::endl;
  s.clear();
  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl;
  std::cout<<"String (s2) : "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2) : "<<s2.length()<<std::endl;


  return 0;
}
