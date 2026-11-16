{
    int x;
    x = 0;
    while (x < 5)
    {
        if (x == 0) debug 100; else if (x == 1) debug 101; else if (x == 2) debug 102; else debug 103;
        x = x + 1;
    }
    x = 7;
    if (x < 5) { debug 1; } else if (x < 10) { debug 2; } else if (x < 20) { debug 3; } else { debug 4; }
    x = 15;
    if (x < 5) { debug 1; } else if (x < 10) { debug 2; } else if (x < 20) { debug 3; } else { debug 4; }
    x = 50;
    if (x < 5) { debug 1; } else if (x < 10) { debug 2; } else if (x < 20) { debug 3; } else { debug 4; }
    if (0) debug 5; else if (0) debug 6; else if (0) debug 7;
    debug 8;
}
