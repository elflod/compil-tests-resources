{
    int i, j;
    for (i = j = 2; i < 5; i = i + 1) j = j + i;
    debug j;
    for (i = 0; (j = i * i) < 20; i = i + 1) debug j;
    debug i;
    debug j;
    for (i = 0; i < 3 && j > 0; i = i + 1) j = j - 10;
    debug j;
}
