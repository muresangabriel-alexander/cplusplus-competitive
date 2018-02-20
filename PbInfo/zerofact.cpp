int nz(int n) {
    int ret = 0, p = 5;
    while (n >= p) {
        ret += n / p;
        p *= 5;
    }

    return ret;
}