#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool valid(std::string s) {
   int b = 0;
   int e = s.length() - 1;

   while (b <= e) {
      // Skip non-alphanumeric characters for both b and e
      if (!isalnum(s[b])) {
         b++;
         continue;
      }
      if (!isalnum(s[e])) {
         e--;
         continue;
      }

      // Compare the characters in a case-insensitive manner
      if (tolower(s[b]) != tolower(s[e])) {
         return false;
      }

      b++;
      e--;
   }

   return true;
}
int main() {
   std:: string s;
   cout<<"enter string\n";
   cin>>s;
   const bool m=valid(s);
   cout<<m;
   return 0;

}
