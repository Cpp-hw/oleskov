#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

void zigzag_conversion(string str, int depth);

int main()
{
    string str;
    int depth = 0;
    cout << "Input your string: " << endl;
    cin >> str;
    cout << "Input a depth for the zigzag conversion: " << endl;
    cin >> depth;
    
    zigzag_conversion(str, depth);
    
    return 0;
}

void zigzag_conversion(string str, int depth)
{
    vector<string> rows(depth);
    string str1 = "";
    int length = (int)str.length(), cur = 0, dir = 0;
    
    if (depth == 1)
        cout << str;
    else if (depth > length)
    {
        for (int i = 0; i < length; i++)
        {
            int tab = i;
            while (tab != 0)
            {
                cout << "\t";
                tab--;
            }
            cout << str[i];
            cout << endl;
        }
    }
    else
    {
        for(int i = 0; i < length; i++)
        {
            rows[cur] += str[i];
            if (dir == 0)
            {
                cur++;
                if (cur == depth - 1)
                {
                    dir = 1;
                }
            }
            else
            {
                cur--;
                if (cur == 0)
                {
                    dir = 0;
                }
            }
        }
        
        for (int j = 0; j < depth; j++)
        {
            str1 += rows[j];
        }
        cout << str1 << endl;
    }
}
