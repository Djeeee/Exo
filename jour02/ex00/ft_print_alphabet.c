ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	int c = 97;

	while(c <= 121)
	{
		
		ft_putchar(c);
		c++;
	}
}

int main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return 0;
}
