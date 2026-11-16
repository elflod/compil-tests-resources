{
    int i, j, s;
    for (i = 1; i <= 3; i = i + 1)
        for (j = 1; j <= 3; j = j + 1)
            debug i * 10 + j;
    for (i = 1; i <= 4; i = i + 1)
    {
        s = 0;
        for (j = 1; j <= i; j = j + 1) s = s + j;
        debug s;
    }
}
