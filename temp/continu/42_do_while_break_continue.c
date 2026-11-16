{
    int i;
    i = 0;
    do { i = i + 1; if (i == 2) continue; if (i == 5) break; debug i; } while (i < 10);
    debug 100;
    i = 0;
    do { i = i + 1; continue; debug 999; } while (i < 3);
    debug i;
    do { break; debug 998; } while (1);
    debug 200;
}
