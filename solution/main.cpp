
// main.cpp

#include "str.h"

int main()
{
  cout << "TEST PROGRAM !!" << endl;
  
  str s1("Hello"); 

  cout << "s1 = "; 
  s1.print();

  str s2, s3;

  s2 = s1;        // calling s2.operator+(s1);
  
  cout << "s2 = "; 
  s2.print();

  s3 = s1 + s2;   // calling s3.operator(operator+(s1,s2))

  cout << "s1 + s2 = "; 
  s3.print();

  cout << "s3 = " << s3 << endl;

  cout << "Enter a string: ";
  cin >> s3;      // calling operator>>(cin,s3)
  cout << s3 << endl;

  return 0;
}
