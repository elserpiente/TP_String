#include "String.h"
#include <string>

void testC_str(std::string& v_str,String& f_str){
  char* c_s=f_str.c_str();
  std::cout<<"True string : "<<v_str.c_str()<<'\n';
  std::cout<<"False string : "<<f_str.c_str()<<'\n';
}

void testLength(std::string& v_str,String& f_str){
  if (v_str.length()==f_str.length()){
    std::cout<<"Test length() conforme"<<'\n';
  } else {
    std::cout<<"Test length() non conforme"<<'\n';
  }
}

void testSize(std::string& v_str,String& f_str){
  if (v_str.size()==f_str.size()){
    std::cout<<"Test size() conforme"<<'\n';
  } else {
    std::cout<<"Test size() non conforme"<<'\n';
  }
}

void testCapacity(std::string& v_str,String& f_str){
  if (v_str.capacity()==f_str.capacity()){
    std::cout<<"Test capacity() conforme"<<'\n';
  } else {
    std::cout<<"Test capacity() non conforme"<<'\n';
  }
}

void testMaxSize(std::string& v_str,String& f_str){
  if (100==f_str.max_size()){
    std::cout<<"Test max_size() conforme"<<'\n';
  } else {
    std::cout<<"Test max_size() non conforme"<<'\n';
  }
}

void testClear(String& f_str){
  String as_to_be_cleared(f_str);
  as_to_be_cleared.clear();
  if(as_to_be_cleared.c_str()[0]=='\0' && f_str.c_str()[0]!='\0'){
    std::cout<<"Test clear() conforme"<<'\n';
  }else{
    std::cout<<"Test clear() non conforme"<<'\n';
  }

}

void testEmpty(String& s){
  bool result = s.empty();
  if (result){ std::cout<< "The string \""<<s.c_str()<<"\" is empty : true"<<std::endl;}
  else { std::cout<< "The string \""<<s.c_str()<<"\" is empty : false"<<std::endl;}
}

void testStringEg(){
  String s("non");
  String t("Test =String& conforme");
  s=t;
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<std::endl;
}

void testStringAdd(){
  String s1("Test");
  String s2(" +String& conforme");

  s1=s1+s2;
  std::cout<<s1.c_str()<<std::endl;
}

void testReserve(String& s){
  int resize = 30;
  int size=s.length();
  s.reserve(30);
  if((s.capacity() == 30)&&(s.length()==size)){
    std::cout<<"Test reserve() conforme"<<'\n';
  }
  else {
    std::cout<<"Test reserve() non conforme"<<'\n';
  }
}

void testCharAdd(){
  String s1("Test +char conform");
  char c='e';
  String s2;
  s2=s1+c;
  std::cout<<s2.c_str()<<'\n';
}

void testTableCharAdd(){
  int a=1;
}

void testTableCharEg(){
  String s("non");
  s="Test =char* conforme";
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<std::endl;
}

void testCharEg(){
  int a=1;
}

void testResize(){
  String s("banane");
  s.resize(5,'a');
  char t[6]={'b','a','n','a','n','a'};
  int eq=0;
  for(int i=0;i<5;i++){
    if(s.c_str()[i]==t[i]){
      eq++;
    }
  }
  if (eq==5){
    std::cout<<"Test resize() < conforme"<<'\n';
  }
  s.resize(6,'a');
  eq=0;
  for(int i=0;i<6;i++){
    if(s.c_str()[i]==t[i]){
      eq++;
    }
  }
  if (eq==6){
    std::cout<<"Test resize() > conforme"<<'\n';
  }
}

int main() {
  std::string true_string("banane_banane");
  String false_string("banane_banane");
  //Getters
  testC_str(true_string,false_string);
  testLength(true_string,false_string);
  testSize(true_string,false_string);
  testCapacity(true_string,false_string);
  testMaxSize(true_string,false_string);
  //Other
  testResize();
  testClear(false_string);
  testEmpty(false_string);
  String emp("");
  testEmpty(emp);
  testReserve(false_string);
  //Operators
  //testCharEg();
  testTableCharEg();
  testStringEg();
  testCharAdd();
  //testTableCharAdd();
  testStringAdd();
}
