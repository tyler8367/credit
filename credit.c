#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card;
    {
        // Request Credit Card Number
        do
        {
            card = get_long("Credit Card Number: ");
        }
        while (card < 0);

        //Find Digits To Multiply By 2
        int card1, card2, card3, card4, card5, card6, card7, card8;
        card1 = ((card % 100) / 10) * 2;
        card2 = ((card % 10000) / 1000) * 2;
        card3 = ((card % 1000000) / 100000) * 2;
        card4 = ((card % 100000000) / 10000000) * 2;
        card5 = ((card % 10000000000) / 1000000000) * 2;
        card6 = ((card % 1000000000000) / 100000000000) * 2;
        card7 = ((card % 100000000000000) / 10000000000000) * 2;
        card8 = ((card % 10000000000000000) / 1000000000000000) * 2;

        //Isolate Digits To Prepare For Sum
        card1 = (card1 % 100 / 10) + (card1 % 10);
        card2 = (card2 % 100 / 10) + (card2 % 10);
        card3 = (card3 % 100 / 10) + (card3 % 10);
        card4 = (card4 % 100 / 10) + (card4 % 10);
        card5 = (card5 % 100 / 10) + (card5 % 10);
        card6 = (card6 % 100 / 10) + (card6 % 10);
        card7 = (card7 % 100 / 10) + (card7 % 10);
        card8 = (card8 % 100 / 10) + (card8 % 10);

        //Get Sum Of First Half Of Card Number Digits
        int sum1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;

        //Get Second Set Of Digits To Sum
        int card9, card10, card11, card12, card13, card14, card15, card16;
        card9 = (card % 10);
        card10 = ((card % 1000) / 100);
        card11 = ((card % 100000) / 10000);
        card12 = ((card % 10000000) / 1000000);
        card13 = ((card % 1000000000) / 100000000);
        card14 = ((card % 100000000000) / 10000000000);
        card15 = ((card % 10000000000000) / 1000000000000);
        card16 = ((card % 1000000000000000) / 100000000000000);

        //Get Sum Of Second Set Of Digits
        int sum2 = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16;

        //Add Sums Together
        int sum = sum1 + sum2;

        int check = 0;

        if ((sum % 10) != 0)
        {
            printf("%s\n", "INVALID");
            return 0;
        }

        //Add card digit and starting digit caveats
        if (card > 339999999999999 && card < 350000000000000)
        {
            printf("AMEX\n");
        }
        else if (card > 369999999999999 && card < 380000000000000)
        {
            printf("AMEX\n");
        }
        else if (card > 5099999999999999 && card < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if (card > 3999999999999 && card < 5000000000000)
        {
            printf("VISA\n");
        }
        else if (card > 3999999999999999 && card < 5000000000000000)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    r}
}
