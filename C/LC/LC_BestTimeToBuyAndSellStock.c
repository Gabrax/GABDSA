#include <stddef.h>
#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
  int left = 0, right = 1, last_profit = 0, new_profit = 0;

  while(right < pricesSize)
  {
    if(prices[right] > prices[left])
    {
      new_profit = prices[right] - prices[left];
      if(new_profit > last_profit) last_profit = new_profit;
    }
    else left = right;

    right++;
  }

  return last_profit;
}

int main()
{
  int arr[] = {7,1,5,3,6,4};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n",maxProfit(arr, size));

}
