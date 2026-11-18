int main ()
{
    int a;
    a = 1;
    if (a == 1) {
        int a;
        a = 2;
        debug a;
    }
    debug a;
    if (a == 2) { debug 0; } else { int b; b = 7; debug b; int a; a = 9; debug a; }
    debug a;
    { int b; b = 3; if (b == 3) { int c; c = b + 1; debug c; } }
}
