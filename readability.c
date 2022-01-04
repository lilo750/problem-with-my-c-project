#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)

{
   string input = get_string("Text: ");


   int letters = 0, words = 1 , sentences = 0 , length = strlen(input);

   for (int i = 0 ; i < length; i++)
   {
      if (isalpha(input[i]))
      {
         letters += 1;
      }
      else if (isspace(input[i]))
      {
        words += 1;
      }
      if (input[i] == '?' || input[i] == '!' || input[i] == '.')
      {
         sentences += 1;
      }
   }

   int L = letters / words * 100;
   printf("average letters now is %i\n", L);

   int S = sentences / words * 100;

   float index = 0.0588 * L - 0.296 * S - 15.8;

   int grade = round(index);

   if (grade == 1 || grade <= 15)
   {
      printf("Grade %i\n", grade);
   }
   else if (grade < 1)
   {
      printf("before grade 1");
   }
   else
   {
      printf("grade is 16 or more");
   }

}
