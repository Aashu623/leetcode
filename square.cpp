#include <iostream>
using namespace std;
int square(int num)
{
    int s = 0, ans;
    int e = num;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid > num)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    cout << " Sqaureroot of number is : " << square(num) << endl;
    return 0;
}