int _putchar(char c);



void print_alphabet(void)
{
        int i;
        char alpha = 'a';

        for (i = 0; i <= 25; i++)
        {
                _putchar(alpha + i);
        }
        _putchar('\n');
}


