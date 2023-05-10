#include <stdio.h>
#include <stdbool.h>

long long get_card(void);
bool do_luhn(long long card);
void check_card_type(int ctr, long long card);
int get_card_size(long long card);

int main(void)
{
    long long card = get_card();
    int size = get_card_size(card);
    bool luhnvalid= do_luhn(card);

    if (luhnvalid == true)
    {
        check_card_type(size, card);
    }
    else
    {
        printf("INVALID \n");
    }

}

long long get_card(void)
{
    long long card;
    printf("Please enter your card number: \n");
    do 
    {
        scanf("%lld", &card);
    }
    while (card < 0);
    return card;
}

int get_card_size(long long card)
{   
    int size = 0;
    while(card!=0)
    {
        card = card/10;
        size++;
    }
    return size;
}

bool do_luhn(long long n)
{
    int ctr = 0;
    bool luhnvalid = false;
    int sum_even = 0;
    int sum_odd = 0;
    int rem;
 
    while(n!=0)
    {
        rem = n%10;
        n = n/10;
        if (ctr%2 == 0)
        {
            sum_even = sum_even + rem;
        }
        else
        {
            int num = rem*2;
            while (num!=0)
            {
                int rem2 = num%10;
                num = num/10;
                sum_odd = sum_odd + rem2;
            }
        }
        ctr = ctr + 1;
    }
    if ((sum_even+sum_odd)%10==0)
    {
        luhnvalid = true;
    }
    return luhnvalid;
}

void check_card_type(int size, long long card)
{   
    int ctr = 0;
    int d1, d2;
    while(card!=0)
    {
        ctr++;
        if (ctr == size-1)
        {
            d1 = card%10; // second to last digit
        }
        else if(ctr == size)
        {
            d2 = card; // last digit
        }
        card = card/10;
    }
    if ((size == 13 || size == 16) && d2 == 4)
    {
        printf("VISA \n");
    }
    else if (size == 16 && d2 == 5 && (d1 == 1 || d1 == 2 || d1 == 3 || d1 == 4 || d1 == 5))
    {
        printf("MASTERCARD \n");
    }
    else if (size == 15 && d2 == 3 && (d1 == 4 || d1 == 7))
    {
        printf("AMEX \n");
    }
    else
    {
        printf("INVALID \n");
    }   
}