void main()
{
    int a, b, c;
    a = 5;
    debug a;
    a = a + 1;
    debug a;
    a = a * a;
    debug a;
    b = a = 2;
    debug a;
    debug b;
    a = b = c = 9;
    debug a + b + c;
    debug a = 4;
    debug a;
    debug (b = 3) + (c = 4);
    debug b * c;
    a = 1;
    b = 2;
    a = b;
    b = a + 10;
    debug a;
    debug b;
    c = (a = 7) + (b = 8);
    debug c;
    a = -a;
    debug a;
    a = !a;
    debug a;
    a = a == 0;
    debug a;
}
