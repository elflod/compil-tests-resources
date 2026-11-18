int main ()
{
    int i, s, e;
    s = 0; e = 0;
    for (i = 1; i <= 10; i = i + 1)
    {
        if (i % 2 == 0) e = e + i; else s = s + i;
    }
    debug s;
    debug e;
    for (i = 1; i <= 15; i = i + 1)
    {
        if (i % 15 == 0) debug 0 - 15;
        else if (i % 3 == 0) debug 0 - 3;
        else if (i % 5 == 0) debug 0 - 5;
        else debug i;
    }
}
