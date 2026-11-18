int main ()
{
    int i, j;
    for (i = 0; i < 3; i = i + 1)
    {
        for (j = 0; j < 3; j = j + 1)
        {
            if (j == 2) break;
            debug i * 10 + j;
        }
    }
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (1) { if (j == i) break; j = j + 1; }
        debug j;
        i = i + 1;
    }
}
