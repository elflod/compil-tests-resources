{
    int a;
    a = 0;
    0 && (a = 5);
    debug a;
    1 && (a = 5);
    debug a;
    a = 0;
    1 || (a = 7);
    debug a;
    0 || (a = 7);
    debug a;
    a = 0;
    debug 0 && (a = 1) || (a = 2);
    debug a;
    a = 0;
    debug 1 || (a = 3) && (a = 4);
    debug a;
}
