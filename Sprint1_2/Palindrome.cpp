#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool palindrome(string str);

int main()
{
    string str;
    cout << "Input your string: " << endl;
    cin >> str;
    
    if(palindrome(str))
        cout << "This is a palindrome." << endl;
    else
        cout << "This isn't a palindrome." << endl;
    return 0;
}

bool palindrome(string str)
{
    int length = (int)str.length() - 1;
    for(int i = 0; i < str.length(); i++, length--)
    {
        if(str[i] != str[length])
            return false;
    }

    return true;
}
