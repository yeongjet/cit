int x(int a, int b) {
    int c = (a+b)*2;
    return c;
}

int main()
{
    int a = x(2,3);
    printf("result:%d", a);
    return 0;
}

void _entry()
{
    int ret;
    ret = main();
    exit(ret);
}
