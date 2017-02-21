int foo(int x) {
    if (0 > x) {
        return 0;
    }
    int z = sqrt(x);
    printf("%d", z);
    return z;
}