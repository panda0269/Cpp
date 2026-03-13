#include <algorithm>
#include <iostream>
#include <string>
#include <stack>
std::string remove(std::string &s)
{
    std::stack<char>st;
    for (int i=0;i<s.length();i++)
    {
        if (!st.empty()&&s[i]==st.top())
        {
            st.pop();
        }
       else
       {
           st.push(s[i]);
       }
    }
    std::string r;
while (!st.empty())
{
    r+=st.top();
    st.pop();
}
    std::reverse(r.begin(),r.end());
    return r;
}
int main()
{
    std::string s,part;
    std::getline(std::cin,s);
    const std::string a=remove(s);
    std::cout << a;
    return 0 ;
}