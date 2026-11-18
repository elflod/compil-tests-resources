int main ()
{
    int i, s;
    i = 0;
    while (i < 5) { debug i; i = i + 1; }
    debug 100;
    i = 10;
    while (i > 7) { i = i - 1; debug i; }
    s = 0;
    i = 1;
    while (i <= 10) { s = s + i; i = i + 1; }
    debug s;
}
