
class Solution
{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {

        if (n % 2 != 0)
        {
            return false;
        }
        while (n <= 2)
        {
            n /= 2;
        }
        if (n % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    };