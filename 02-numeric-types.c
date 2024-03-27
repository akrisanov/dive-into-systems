int main(void)
{
  /* Defining variables in this block's scope at the top of the block */

  int x;
  int i, j, k;

  char letter; // stores a single-byte interger value
               // it's often used to store a single ASCII character
               // a char in C is a different type than a string in C

  float winpct;
  double pi;

  /* After defining variables, you can use them in C statements */
  x = 7;     // x stores 7 (initialize variable before using it)
  k = x + 2; // using x's value in an expression

  letter = 'A';
  letter = letter + 1; // -> B

  pi = 3.1415926;

  winpct = 11 / 2.0; // -> 5.5
  j = 11 / 2;        // -> 5
  x = k % 2;         // -> 1

  return 0;
}
