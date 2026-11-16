{
    int n, d, p, a, b, t, i;
    a = 0; b = 1;
    for (i = 0; i < 10; i = i + 1) { debug a; t = a + b; a = b; b = t; }
    t = 1;
    for (i = 1; i <= 6; i = i + 1) { t = t * i; debug t; }
    a = 48; b = 18;
    while (b != 0) { t = a % b; a = b; b = t; }
    debug a;
    for (n = 2; n <= 30; n = n + 1)
    {
        p = 1;
        d = 2;
        while (d * d <= n)
        {
            if (n % d == 0) { p = 0; break; }
            d = d + 1;
        }
        if (p) debug n;
    }
    n = 6; i = 0;
    while (n != 1)
    {
        if (n % 2 == 0) n = n / 2; else n = 3 * n + 1;
        i = i + 1;
    }
    debug i;
}
