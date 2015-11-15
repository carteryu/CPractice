/*
Bouncy Numbers

Working from left-to-right if no digit is exceeded by the digit to its left it is called an increasing number; for example, 134468.

Similarly if no digit is exceeded by the digit to its right it is called a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" number; for example, 155349.

Clearly there cannot be any bouncy numbers below one-hundred, but just over half of the numbers below one-thousand (525) are bouncy. In fact, the least number for which the proportion of bouncy numbers first reaches 50% is 538.

Surprisingly, bouncy numbers become more and more common and by the time we reach 21780 the proportion of bouncy numbers is equal to 90%.

Find the least number for which the proportion of bouncy numbers is exactly 99%.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
  //check if argument is valid. 
  if (argv[1] == NULL) {
    printf("invalid argument\n");
    exit(0);
  }
  double percent = atof(argv[1]);
  checker(percent);
  return 0;
}

int checker(double percent){
  int i = 0;
  int counter = 0;
  double p = 0.00000000;

  while(p != percent){
    if (!increasing(i)&!decreasing(i)){
      counter++;
      p = (double) counter / (double) i;
      p = p * 100.00;
    }
    if (p >= percent){
      
      printf("%d\n",i);
      return 0;
    }
    i++;

  } 
  return 0;
}

int increasing(int x){
  int prev = 0;
  int curr;
  while (x != 0){
    curr = x % 10;
    x = x / 10;
    if (!(curr >= prev)){
      return 0;
    }
    prev = curr;
    
  }
  return 1;
} 

int decreasing(int x){
  int prev = 10;
  int curr;
  while( x != 0){
    curr = x % 10;
    x = x / 10;
    if (!(curr <= prev)) return 0;
    prev = curr;
  }
  return 1;
}
  

