{
    while (0) debug 1;
    while (1) break;
    while (1) if (1) break;
    while (1) if (0) debug 2; else break;
    debug 3;
    while (0) while (1) break;
    if (1) while (1) break; else debug 4;
    if (0) while (1) break; else debug 5;
    while (1) break;
    debug 6;
    while (0) if (1) debug 7; else debug 8;
    if (1) while (0) debug 9; else debug 10;
    while (1) break;
    debug 11;
}
