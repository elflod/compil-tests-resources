int main ()
{
    int i;
    for (i = 0; i < 2; i = i + 1) { int k; k = i * 10; debug k; }
    { int k; k = 99; debug k; }
    for (i = 0; i < 2; i = i + 1) { int i; i = 50; debug i; }
    debug i;
}
