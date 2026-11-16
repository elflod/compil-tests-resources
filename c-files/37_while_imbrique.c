{
    int i, j, s;
    i = 1;
    while (i <= 3)
    {
        j = 1;
        while (j <= 3)
        {
            debug i * 10 + j;
            j = j + 1;
        }
        i = i + 1;
    }
    s = 0;
    i = 1;
    while (i <= 4)
    {
        j = 1;
        while (j <= i) { s = s + j; j = j + 1; }
        i = i + 1;
    }
    debug s;
}
