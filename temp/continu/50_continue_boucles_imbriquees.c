{
    int i, j;
    for (i = 0; i < 3; i = i + 1)
    {
        for (j = 0; j < 3; j = j + 1)
        {
            if (j == 1) continue;
            debug i * 10 + j;
        }
    }
}
