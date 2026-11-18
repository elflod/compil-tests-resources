int main ()
{
    int i;
    if (1) { for (i = 0; i < 3; i = i + 1) debug i; } else { while (1) debug 99; }
    if (0) while (1) debug 1; else debug 2;
    if (1) for (i = 0; i < 3; i = i + 1) debug i * 10; else debug 9;
    if (0) do { debug 7; } while (1); else debug 3;
    i = 0;
    if (i == 0) while (i < 3) i = i + 1;
    debug i;
}
