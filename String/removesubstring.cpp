#include<iostream>
#include<string>
std::string remove(std::string &s, const std::string& part)
{
    size_t pos;
    while ((pos = s.find(part)) != std::string::npos)
    {
        s.erase(pos, part.length());
    }
    return s;
}

int main()
{
    std::string s,part;
    std::getline(std::cin,s);
    std::getline(std::cin,part);
    const std::string a=remove(s,part);
    std::cout << a;
    return 0;

}
