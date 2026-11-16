{
    int i, s;
    i = 0;
    while (i < 6) { i = i + 1; if (i % 2 == 0) continue; debug i; }
    i = 0;
    s = 0;
    while (i < 10) { i = i + 1; if (i % 3 == 0) continue; s = s + i; }
    debug s;
}
