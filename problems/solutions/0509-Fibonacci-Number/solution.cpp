
class Solution
{
public:
    int frml(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        return frml(n - 1) + frml(n - 2);
    };
    int calc(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        int a = n - 1;
        int b = n - 2;
        return frml(a) + frml(b);
    };
    int fib(int n)
    {
        int r = calc(n);
        return r;
    }
};