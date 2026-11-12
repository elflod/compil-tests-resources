void main()
{
    int a;
    a = 1;
    {
    a = 2;
    {
    a = a + 1;
    }
    debug a;
    }
    debug a;
    {
    int a;
    a = 99;
    }
    debug a;
    {
    int b;
    b = 5;
    }
    {
    int b;
    b = 6;
    debug b;
    }
}
