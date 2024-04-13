#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generatenum(int n)
{
   srand(time(NULL));
   return rand() % n;
}

int main()
{
   char name[55];
   int a;
   int computer = 0;
   int user = 0;
   printf("Enter ur name to play the game\n");
   gets(name);
   for (int i = 0; i < 3; i++)
   {
      printf("Enter 0 for Rock 1 for Paper and 2 for Scissors\n");
      scanf("%d", &a);

      switch (a) // user
      {
      case 0:
         printf("%s=Rock\n", name);
         break;

      case 1:
         printf("%s=Paper\n", name);
         break;

      case 2:
         printf("%s=Scissors\n", name);
         break;

      default:
         printf("Exit game");
         goto end;
         break;
      }

      switch (generatenum(3)) // computer
      {
      case 0:
         printf("Computer=Rock\n");
         break;

      case 1:
         printf("Computer=Paper\n");
         break;

      case 2:
         printf("Computer=Scissors\n");
         break;

      default:
         break;
      }

      if (a == 0 && generatenum(3) == 1)
      {
         printf("Computer gets a point\n");
         computer++;
      }

      else if (a == 0 && generatenum(3) == 2)
      {
         printf("%s gets a point\n", name);
         user++;
      }

      else if (a == 1 && generatenum(3) == 0)
      {
         printf("%s gets a point\n", name);
         user++;
      }

      else if (a == 1 && generatenum(3) == 2)
      {
         printf("Computer gets a point\n");
         computer++;
      }

      else if (a == 2 && generatenum(3) == 0)
      {
         printf("Computer gets a point\n");
         computer++;
      }

      else if (a == 2 && generatenum(3) == 1)
      {
         printf("%s gets a point\n", name);
         user++;
      }
   }

   printf("Result:\n%s=%d\ncomputer=%d\n", name, user, computer);
   if (user > computer)
   {
      printf("The winner is %s\n", name);
   }
   else
   {
      printf("The winner is the computer\n");
   }

end:
   return 0;
} 