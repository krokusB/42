
int main(void)
{

    return;
}



void putnbr(int nb)
{
    long n;
    int arr[10];
    int i;

    i = 0;
    //wegen long ?
    n = nb;

    if(n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    while(n > 9)
    {
        n = n / 10;
    }
    //immer modulo 10 - speichern, dann durch 10 - wieder modulo bis aus halt
    while(n > 0)
    {
        n = n % 10;
        n = n + '0';
        arr[i] = n;
    }
}