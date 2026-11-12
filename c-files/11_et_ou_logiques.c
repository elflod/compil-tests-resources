void main()
{
    debug 1&&1;
    debug 1&&0;
    debug 0&&1;
    debug 0&&0;
    debug 1||1;
    debug 1||0;
    debug 0||1;
    debug 0||0;
    debug 5&&3;
    debug 5||0;
    debug 0||7;
    debug 2&&3&&4;
    debug 2&&0&&4;
    debug 0||0||5;
    debug 0||0||0;
    debug 1||0&&0;
    debug (1||0)&&0;
    debug 0&&1||1;
    debug 0&&(1||1);
    debug 1<2&&2<3;
    debug 1<2&&3<2;
    debug 1>2||2>1;
    debug !0&&!0;
    debug !(1&&0);
}
