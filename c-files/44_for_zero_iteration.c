int main ()
{
    int i;
    for (i = 0; i < 0; i = i + 1) debug 1;
    debug i;
    for (i = 5; 0; i = i + 1) {}
    debug i;
    for (i = 7; i < 3; i = i + 1) { debug 2; }
    debug i;
}
