{
    int a, b;
    a = 3; b = 4;
    if (a < b) debug 1;
    if (a > b) debug 2;
    if (a == 3 && b == 4) debug 3;
    if (a == 3 && b == 5) debug 4;
    if (a == 9 || b == 4) debug 5;
    if (a == 9 || b == 9) debug 6;
    if (!(a == b)) debug 7;
    if (a != b) debug 8;
    if (a + 1 == b) debug 9;
    if (a * b == 12) debug 10;
    if (a) debug 11;
    if (a - 3) debug 12;
    if (a - 3) debug 13; else debug 14;
    if (a = 0) debug 15; else debug 16;
    debug a;
    if (a = 5) debug 17;
    debug a;
    if ((b = b - 4) == 0) debug 18;
    debug b;
    if (a < b || a > b && a == 5) debug 19;
}
