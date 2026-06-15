#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);
int strglength(char *src);


int main(void)
{
    char    *myString;
    myString = "Fill this into a new array";

    char bufferArray[100] = {0}; 

    ft_strcpy(bufferArray, myString);
    printf("%s ", bufferArray + 2);
    return (0);
}
//meine dest is mein neuer array meine src myString//in dem beispiel

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;

    if (strglength(src) < 100)
    //if dest > src  und ich weiss es ja muss es nicht rechnen, aber wenn lang - zählen mäh
    {
        while(*(src + i) != '\0')
        {
        dest[i] = src[i];
        i++;
        }
    }
    dest[strglength(src)] = '\0';
    return(dest);
}

int strglength(char *src)
{
    char *src_start;
    
    src_start = src;
    while(*src)
    {
        src++;
    }
    return(src - src_start);
}
//wenn ich einen int pointer funktion daraus mach, kann ich dann auch in der unterfunktion die länge nehmen, aber ohne input machts ja keinen sinn
//aber myString is eh auch ein pointer also wert überall zugänglich