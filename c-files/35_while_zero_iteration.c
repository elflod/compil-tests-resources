{
    int i;
    while (0) debug 1;
    while (0) { debug 2; }
    while (0) {}
    i = 5;
    while (i < 3) { debug 3; i = i + 1; }
    debug i;
    while (!1) debug 4;
    debug 5;
}
