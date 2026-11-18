int main ()
{
    if (1) debug 1; else debug 2;
    if (0) debug 3; else debug 4;
    if (1) { debug 5; } else debug 6;
    if (0) debug 7; else { debug 8; }
    if (1) { debug 9; } else { debug 10; }
    if (0) { debug 11; } else { debug 12; }
    if (1) { debug 13; debug 14; } else { debug 15; debug 16; }
    if (0) { debug 17; debug 18; } else { debug 19; debug 20; }
    if (1)
        debug 21;
    else
        debug 22;
    if (1) debug 23; else debug 24; debug 25;
    if (0) {} else debug 26;
    if (1) {} else debug 27;
    if (0) debug 28; else {}
    if (1) {} else {}
    debug 29;
}
