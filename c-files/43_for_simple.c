int main ()
{
    int i, s;
    for (i = 0; i < 5; i = i + 1) debug i;
    for (i = 0; i < 3; i = i + 1) { debug i; }
    for (i = 10; i > 5; i = i - 2) { debug i; }
    s = 0;
    for (i = 1; i <= 100; i = i + 1) s = s + i;
    debug s;
    for (i = 1; i < 100; i = i * 3) { debug i; }
    debug i;
}
