{
    int i;
    for (i = 0; i < 10; i = i + 1)
    {
        if (i == 3) continue;
        if (i == 6) break;
        debug i;
    }
    debug i;
    for (i = 0; i < 5; i = i + 1) continue;
    debug i;
}
