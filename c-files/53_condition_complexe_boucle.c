int main ()
{
    int i, s, a, b;
    i = 0; s = 0;
    while (i < 10 && s < 20) { i = i + 1; s = s + i; }
    debug i;
    debug s;
    for (i = 0; !(i == 5); i = i + 1) debug i;
    a = 1; b = 0;
    do { debug a; a = a + 1; b = b + 1; } while (a < 4 && !(b == 2));
    debug a + b;
    i = 3;
    while (i) { debug i; i = i - 1; }
}
