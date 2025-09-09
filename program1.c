#include <stdio.h>
int main(){
      int NumberFour = 4;
      int* FourPtr = &NumberFour;
      printf("Hello world.\n");
      printf("This is the number four: %d \n", NumberFour);
      printf("The int used to pass four is stored at: %p \n", FourPtr);
      printf("Here is that location displayed improperly (double): %lf \n", FourPtr);
      printf("Here is K's funny number in UPPER  hex: %X \n", -559038737);
      printf("SEGFAULT!!!!: %s", NumberFour);
      return 0;    
}
