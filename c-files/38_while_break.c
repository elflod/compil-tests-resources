{
    int i;
    i = 0;
    while (1) { if (i == 3) break; debug i; i = i + 1; }
    debug 100;
    while (1) break;
    debug 200;
    i = 0;
    while (i < 10) { i = i + 1; if (i * i > 20) break; }
    debug i;
    while (1) { debug 300; break; debug 301; }
}
