#include "String.h"

int main() {

  String s("banane");

  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl;
  std::cout<<"\t Size : "<<s.size()<<std::endl;
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
  std::cout<<"s1=s2 ... "<<std::endl;
  s=s2;
  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl;
  std::cout<<"\t Resize (+3 'a') "<<std::endl;
  s.resize(3,'a');
  std::cout<<"String : "<<s.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s.length()<<std::endl;
  std::cout<<"s2=s1+'b' ... "<<std::endl;
  s2=s+'b';
  std::cout<<"String (s2) : "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2) : "<<s2.length()<<std::endl;

  return 0;
}
