#include <iostream>
#include <vector>

class String{
protected:
  std::vector<char> _strv;
  int _len;
public:
//Constructors~Destructors
  String();
  String(const char *str);
};
