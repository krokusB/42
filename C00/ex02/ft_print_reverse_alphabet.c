#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(void)
    {
        ft_print_reverse_alphabet();
        return (0);
    }

void ft_print_reverse_alphabet(void)
    {
        char    letter;
        letter = 122;
        
        int i;
        i = 25;

        while(i >= 0)
        {
            write(1, &letter, 1);
            i--;
        }    
    }
//brauch keinen extra i counterr
