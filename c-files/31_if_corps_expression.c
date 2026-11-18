int main ()
{
    int a;
    a = 0;
    if (1) a = 5;
    debug a;
    if (0) a = 6;
    debug a;
    if (a == 5) a = a + 1; else a = a - 1;
    debug a;
    if (a == 5) a = a + 1; else a = a - 1;
    debug a;
    if (1) a + 1;
    if (1) 3;
    if (0) 4; else 5;
    if (1) { a = 100; }
    debug a;
}
