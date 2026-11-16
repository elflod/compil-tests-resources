{
    int i, j, k, c;
    c = 0;
    for (i = 0; i < 4; i = i + 1)
    {
        j = 0;
        while (j < 4)
        {
            j = j + 1;
            if (j == 3) continue;
            k = 0;
            do
            {
                k = k + 1;
                if (k == 2) break;
                c = c + 1;
            } while (k < 10);
            if (i == 2) break;
        }
    }
    debug c;
    debug i;
    debug j;
    debug k;
}
