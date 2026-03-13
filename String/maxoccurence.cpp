#include <string>
#include <iostream>
char max(const std::string& s)
{
    int freq[26] = {0};

    for (char ch : s) {
        if (isalpha(ch)) { // optional: ensure only alphabets
            freq[ch - 'a']++;
        }
    }

    int maxi = -1;
    int ans = 0; // index of the max occurring character

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxi) {
            maxi = freq[i];
            ans = i;
        }
    }

    return 'a' + ans;
}
int main()
{
    int n;
    std::cin>>n;
    std::string s;
    std::cout<<"enter string\n";
    std::cin>>s;
    const char a=max(s);
    std::cout << "max occurring character "<<a;

}
