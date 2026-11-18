int main ()
{
    if (1) debug 1;
    if (0) debug 2;
    if (5) debug 3;
    if (-1) debug 4;
    if (0 - 0) debug 5;
    if (1) { debug 6; }
    if (0) { debug 7; }
    if (1) { debug 8; debug 9; }
    if (0) { debug 10; debug 11; }
    if (1 + 1 == 2) debug 12;
    if (!0) debug 13;
    if (!1) debug 14;
    debug 15;
    if ((1)) debug 16;
    if (((0))) debug 17;
    if (2 * 3 - 6) debug 18;
    if (2 * 3 - 5) debug 19;
    if(1)debug 20;if(0)debug 21;
    if (1)
        debug 22;
}
