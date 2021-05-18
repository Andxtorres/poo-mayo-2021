#include <iostream>
using namespace std;
 
void swap(string &str1, string &str2)
{
  string temp = str1;
  str1 = str2;
  str2 = temp;
}
 
int main()
{
    string str1="GEEKS";
    string* str1ptr = &str1;
    string str2 = "FOR GEEKS";
    string* str2ptr = &str2;
    cout << "str1 is " << str1 << endl;
    cout << "str1 is " << str1ptr << endl;
    cout << "str2 is " << str2 << endl;
    cout << "str1 is " << str2ptr << endl;
    cout << " AFTER SWAP " << endl;
    swap(str1, str2);
    cout << "str1 is " << str1 << endl;
    cout << "str1 is " << str1ptr << endl;
    cout << "str2 is " << str2 << endl;
    cout << "str1 is " << str2ptr << endl;
    return 0;
}