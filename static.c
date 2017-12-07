#include<stdio.h>
#include<stdlib.h>

//WRONG use of STATIC with recurrsion
int size1(int x)
{
  static int count = 0;
  if(x<0)
    return count;
  count++;
  printf("static : %d\n",count );
  return size1(x-2);
}

int size2(int x)
{
  static int count = 0;

  int retval;
  if(x<0)
  {
    retval = count;
    count = 0; //reset static for correct use in future calls
    return retval;
  }
  count++;
  printf("static : %d\n",count );
  return size2(x-2);
}

int main(int argc, char const *argv[]) {

  int x = 10;
  int y;
  y = size1(x);
  printf("%d\n",y );

  //here count is not reset to 0;
  y = size1(x);
  printf("%d\n",y );

  //Correct use of static
  y = size2(x);
  printf("%d\n",y );

  y = size2(x);
  printf("%d\n",y );
  return 0;
}
