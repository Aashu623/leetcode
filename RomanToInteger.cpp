#include <iostream>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I' && s[i + 1] == 'V')
            {
                num = num + 4;
                i++;
                // cout << num << endl;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                num = num + 9;
                i++;
                // cout << num << endl;
            }
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                num = num + 40;
                i++;
                // cout << num << endl;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                num = num + 90;
                i++;
                // cout << num << endl;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                num = num + 400;
                i++;
                // cout << num << endl;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                num = num + 900;
                i++;
                // cout << num << endl;
            }

            else
            {

                switch (s[i])
                {
                case 'M':
                    num = num + 1000;
                    // cout << num << endl;
                    break;
                case 'D':
                    num = num + 500;
                    // cout << num << endl;
                    break;
                case 'C':
                    num = num + 100;
                    // cout << num << endl;
                    break;
                case 'L':
                    num = num + 50;
                    // cout << num << endl;
                    break;
                case 'X':
                    num = num + 10;
                    // cout << num << endl;
                    break;
                case 'V':
                    num = num + 5;
                    // cout << num << endl;
                    break;
                case 'I':
                    num = num + 1;
                    // cout << num << endl;
                    break;
                default:
                    num = 0;
                    break;
                }
            }
        }
        return num;
    }
};
int main()
{
    cout << Solution().romanToInt("MCMXCIV");
    return 0;
}