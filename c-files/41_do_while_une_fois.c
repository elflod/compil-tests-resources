{
    int i;
    do { debug 1; } while (0);
    i = 10;
    do { debug i; i = i + 1; } while (i < 5);
    do { debug 3; } while (0);
    do { debug 5; } while (1 == 2);
    debug i;
}
