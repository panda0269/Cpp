#include <iostream>
#include <string>
#include <vector>
using namespace std;
string reverse(string s1 ) {
    int b=0,e=s1.length()-1;
    while (b<=e) {
        swap(s1[b],s1[e]);
        b++;
        e--;
    }
    return s1;
}
void re(const string &s) {
    string word;

    for (int i = 0; i <= s.length(); i++) {
        if (const char ch = (i < s.length()) ? s[i] : ' '; ch == ' ') {
            if (!word.empty()) {
                cout << reverse(word) << " ";
                word = "";
            }
        } else {
            word += ch;
        }
    }
}

int main(int argc, char *argv[]) {
    string s;
    cout<<"enter string\n";
    getline(cin,s);
    re(s);
    return 0;
}
