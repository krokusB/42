#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *myString; 
    myString = "heyyoh";

    int resultat = ft_strlen(myString);
    printf("länge: %d ", resultat);
    return(0);   

}



int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
} 
//ich mache es mit normaler Schleife


int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(*(str + i) != '\0')
    {
        i++;
    }

    
    return (i); 
}
//mit pointer am ende vorm zurückgeben wieder zurücksetzen auf Anfang return?? länge nicht str


int ft_strlen(char *str)
{
    char *str_start;
    str_start = str;
    int length;

    while(*str)
    {
        str++;
    }

    length = str - str_start;
    
    return (length);
}
//mit pointer ende - anfang , wie muss ich variable deklarieren in der ich pointeradresse speicher?
