int main ()
{
    if (1) debug 1;
    if (0) debug 2;
    if (5) debug 3;
    if (!0) debug 4;
    if (2 * 3 - 6) debug 5;
    if (1) debug 6; else debug 7;
    if (0) debug 8; else debug 9;
    if (1) if (1) debug 10;
    if (1) if (0) debug 11;
    if (0) if (1) debug 12;
    if (1) if (1) debug 13; else debug 14;
    if (1) if (0) debug 15; else debug 16;
    if (0) if (1) debug 17; else debug 18;
    if (0) debug 19; else if (1) if (0) debug 20; else debug 21;
    if (1) if (1) if (0) debug 22; else debug 23; else debug 24;
    if (0) debug 25; else if (0) debug 26; else if (0) debug 27;
    if (1 + 1 == 2) debug 28; else debug 29;
    if (3 < 2 || 2 < 3) debug 30;
    debug 31;
}
