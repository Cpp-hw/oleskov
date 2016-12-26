#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;


bool wordPattern(string str, string pattern)
{
    if(pattern.length() == 0 && str.length() == 0)
        return true;
    else if(pattern.length() == 0)
        return false;
    else
    {
        map <char, int> pattern1;
        map <string, int> str1;
        
        istringstream istream(str);
        string temp;
        int i = 0;
        while (istream >> temp)
        {
            if (i == pattern.size())
                return false;
            
            pattern1[pattern[i]]++;
            str1[temp]++;
            
            if (pattern1.find(pattern[i])->second != str1.find(temp)->second)
                return false;
            i++;
        }
        
        if (i < pattern.size())
            return false;
        return true;
    }
}

int main()
{
    string str, pattern;
    cout << "Input a text: ";
    getline(cin, str);
    cout << "Input a pattern: ";
    getline(cin, pattern);
    
    cout << "The pattern is valid? - " << boolalpha << wordPattern(str, pattern) << endl;
    return 0;
}
