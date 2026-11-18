int dbl(int x) {
    return x + x;
}

int main() {
    debug dbl(dbl(3));
    return 0;
}
