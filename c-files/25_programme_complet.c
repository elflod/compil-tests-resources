void main()
{
    int a, b, c;
    a = 10;
    b = 3;
    c = a / b;
    debug c;
    debug a % b;
    debug c * b + a % b == a;
    {
    int a;
    a = b = 100;
    debug a + b;
    {
    int c;
    c = a - b;
    debug c;
    debug !c;
    }
    debug c;
    }
    debug a;
    debug b;
    debug a > b && b > c || 0;
    c = (a = 1) + (b = 2) * (c = 3);
    debug c;
    debug a + b + c;
}
