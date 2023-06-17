#include <iostream>
using namespace std;
bool isAnagram(string s, string t)
{
    int Ss = s.length();
    int Ts = t.length();
    int count = 0;
    for (int i = 0; i < Ts; i++)
    {
        // for (int j = 0; j < Ss; i++)
        // {
        //     if (t[i] == s[j])
        //     {
        //         cout << t[i] << " = " << s[j] << endl;
        //         count++;
        //         cout << " String s is now :" << s << " and count is : " << count << endl;
        //         break;
        //     }
        // }
        cout << t[i] << " and " << s[i] << endl;
    }
    if (count == Ts)
    {
        return true;
    }
    return false;
}
int main()
{
    string A = "anagram";
    string B = "nagaram";
    cout << isAnagram(A, B) << endl;
    return 0;
}