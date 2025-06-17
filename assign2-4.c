// 4. Accept the cost price and selling price from the keyboard. Find out if the seller has made a profit or loss and display how much profit or loss has been made?
#include <stdio.h>
int main()
{
  float cp, sp, profitorloss;

  printf("\nEnter Cost Price:");
  scanf("%f", &cp);

  printf("\nEnter Selling Price:");
  scanf("%f", &sp);

  if (sp > cp)
  {
    profitorloss = sp - cp;
    printf("Profit Of %.2f", profitorloss);
  }

  else if (sp < cp)
  {
    profitorloss = cp - sp;
    printf("Profit Of %.2f", profitorloss);
  }
  else
  {
    printf("NITHER PROFIT NOR LOSS !");
  }

  return 0;
}