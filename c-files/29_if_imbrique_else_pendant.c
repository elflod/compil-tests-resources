int main ()
{
    if (1) if (1) debug 1;
    if (1) if (0) debug 2;
    if (0) if (1) debug 3;
    if (1) if (1) debug 4; else debug 5;
    if (1) if (0) debug 6; else debug 7;
    if (0) if (1) debug 8; else debug 9;
    if (0) { if (1) debug 10; } else debug 11;
    if (1) { if (0) debug 12; } else debug 13;
    if (1) { if (0) debug 14; else debug 15; } else debug 16;
    if (0) debug 17; else if (1) if (0) debug 18; else debug 19;
    if (1) if (1) if (1) debug 20;
    if (1) if (1) if (0) debug 21; else debug 22; else debug 23;
    if (1) if (0) debug 24; else debug 25; else debug 26;
    if (0) if (0) debug 27; else debug 28; else debug 29;
}
