int fact(int n) {
    if (n < 2) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    debug fact(5);
    return 0;
}
