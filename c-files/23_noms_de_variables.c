{
    int a, ab, abc, a1, b2, x_y, _z, A, Ab;
    a = 1; ab = 2; abc = 3; a1 = 4; b2 = 5; x_y = 6; _z = 7; A = 8; Ab = 9;
    debug a; debug ab; debug abc; debug a1; debug b2; debug x_y; debug _z; debug A; debug Ab;
    int variable_avec_un_nom_tres_long_pour_tester_le_lexer;
    variable_avec_un_nom_tres_long_pour_tester_le_lexer = 123;
    debug variable_avec_un_nom_tres_long_pour_tester_le_lexer;
    int iff, intt, debugg, voidd, elsee;
    iff = 1; intt = 2; debugg = 3; voidd = 4; elsee = 5;
    debug iff + intt + debugg + voidd + elsee;
}
