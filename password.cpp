#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isStrongPassword(string);
int main()
{
  string password;
  cout<<"Enter password:";
  getline(cin,password);
  if(isStrongPassword(password))
    cout<<"Strong Password";
  else
    cout<<"Not a Strong Password";
  return 0;
}

bool isStrongPassword(string s)
{
  bool containsUpper=false,containsSpecialchar=false,containsNumber=false;
  for(auto c:s)
  {
    if(isupper(c))
      containsUpper=true;
    if(ispunct(c))
      containsSpecialchar=true;
    if(isdigit(c))
      containsNumber=true;
  }
  if(containsUpper && containsSpecialchar && containsNumber && s.size()>=9)
    return true;
  return false;
}
