void putc(char c)
{
	char *tx = (char*)0xff000000;
	*tx = c;
}

void puts(char *s)
{
	while (*s) putc(*s++);
}

void main(void)
{
	puts("Hello World, 2015-02-19!\n");
}
