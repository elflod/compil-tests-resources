void main()
{
    int a, b;
    a = 1;
    b = 2;
    {
    int a;
    a = 10;
    debug a;
    debug b;
    {
    int b;
    b = 20;
    debug a + b;
    a = 11;
    {
    int a;
    a = 100;
    debug a + b;
    }
    debug a;
    }
    debug b;
    b = 22;
    }
    debug a;
    debug b;
}
