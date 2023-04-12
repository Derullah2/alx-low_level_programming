#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */


int main(int argc, char *argv[]) {
  if (argc != 2) {  // Check the number of arguments passed
    printf("Error\n");
    return 1;
  }

  int cents = atoi(argv[1]);  // Convert the argument to an integer

  if (cents < 0) {  // Check if the amount is negative
    printf("0\n");
    return 0;
  }

  int coins[] = {25, 10, 5, 2, 1};  // Define the coins available
  int num_coins = sizeof(coins) / sizeof(coins[0]);  // Calculate the number of coins available
  int count = 0;  // Initialize the coin count

  for (int i = 0; i < num_coins; i++) {
    count += cents / coins[i];  // Count the number of coins required
    cents %= coins[i];  // Update the remaining amount of money
  }

  printf("%d\n", count);  // Print the minimum number of coins required

  return 0;
}
