#include <iostream>
#include <string>
bool checkequal(int count[],int count2[])
{
 for (int i=0;i<26;i++)
 {
     if (count[i]!=count2[i])
     {
         return false;
     }
 }
    return true;
}

bool permutation(const std::string& s, const std::string& part) {
    if (part.length() > s.length()) return false;

    int count[26] = {0};
    int count2[26] = {0};
    const int window = part.length();

    for (int i = 0; i < window; i++) {
        count[part[i] - 'a']++;
        count2[s[i] - 'a']++;
    }

    if (checkequal(count, count2)) return true;

    for (int i = window; i < s.length(); i++) {
        count2[s[i] - 'a']++;                      // Add new character
        count2[s[i - window] - 'a']--;             // Remove old character

        if (checkequal(count, count2)) return true;
    }

    return false;
}

int main() {
    std::string s, part;
    std::getline(std::cin, s);
    std::getline(std::cin, part);

    const bool result = permutation(s, part);
    std::cout << (result ? "true" : "false");

    return 0;
}



