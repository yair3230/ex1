#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.
int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int number, position, result;
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d",&position);

  // Move the given number by <position> bits. do AND 1 to keep just the last bit.
  result = (number>>position) & 1;
  printf("The bit in position %d of number %d is: %d\n", position, number, result);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int numberTwo, positionTwo, shifterOn, shifterOff, resultOn, resultOff;
  printf("Please enter a number:\n");
  scanf("%d",&numberTwo);
  printf("Please enter a position:\n");
  scanf("%d",&positionTwo);

  // Set position to one, rest stay as zeros
  shifterOn = 1 << positionTwo;

  // Doing OR on "shifterOn" will turn the bit in given position to 1,
  // while the rest will stay the same.
  resultOn = numberTwo | shifterOn;

  // Negate "shifterOn" to get 0 in the wanted position.
  shifterOff = ~shifterOn;

  // Doing AND will keep all other bits as they are,
  // while the bit at the given position will be turned off
  resultOff = numberTwo & shifterOff;
  printf("Number with bit %d set to 1: %d\n", positionTwo, resultOn);
  printf("Number with bit %d set to 0: %d\n", positionTwo, resultOff);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int numberThree, positionThree, mask, resultThree;
  printf("Please enter a number:\n");
  scanf("%d",&numberThree);
  printf("Please enter a position:\n");
  scanf("%d",&positionThree);

  // Set position to one, rest stay as zeros
  mask = 1 << positionThree;

  // Use a XOR to flip that bit
  resultThree = numberThree ^ mask;
  printf("Number with bit %d toggled: %d\n", positionThree, resultThree);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int numberFour, resultFour;
  printf("Please enter a number:\n");
  scanf("%d",&numberFour);

  // Keep only the last bit (using AND) and "flip" it (using XOR).
  resultFour = (numberFour&1) ^ 1;
  printf("%d\n", resultFour);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  int octalOne, octalTwo, sum, bitThree, bitFive, bitSeven, bitEleven;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &octalOne);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &octalTwo);

  // Calc the sum and print it in hex, uppercase.
  sum = octalOne + octalTwo;
  printf("The sum in hexadecimal: %X\n", sum);

  // Keep only the bit in position n.
  bitThree = (sum >> 3) & 1;
  bitFive = (sum >> 5) & 1;
  bitSeven = (sum >> 7) & 1;
  bitEleven = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bitThree,bitFive,bitSeven,bitEleven);

  printf("Bye!\n");
  
  return 0;
}
