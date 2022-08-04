Assignment = 5
part = 02
Question = 16

/*
#include<stdio.h>
 int main()
{
int n, reverse=0, rem;
printf("Enter a number: ");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("Reversed Number: %d",reverse);
return 0;
}
*\
Assignment = 5
Question = 17
/*
#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
*\


Question = 18
/*
#include <stdio.h>
#include <string.h>

oid solve(char *s){
    int freq[10] = {0};
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            freq[s[i] - '0']++ ;
        }
    }
    for(int i = 0; i<10; i++){
        if(freq[i] > 0)
            printf("(Number %d, Freq %d)\n", i, freq[i]);
    }
}
int main(){
    char *s = "we85abc586wow236h69";
    solve(s);
}
*\


Question = 19
/*

#include <stdio.h>
#include <math.h>
int main()
{
    int data, num = 0, digits;
    //Ask the user to enter the number
    printf("Enter any number to print in words: ");
    scanf("%d", &data);
    //Get all digits of entered number
    digits = (int) log10(data);
    //Store reverse of data in num
    while(data != 0)
    {
        num = (num * 10) + (data % 10);
        data /= 10;
    }
    // Find total number of trailing zeros
    digits =  digits - ((int) log10(num));
    //Extract last digit of number and print corresponding number in words
    //till num becomes 0
    while(num != 0)
    {
        switch(num % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        num /= 10;
    }
    // Print all trailing 0
    while(digits)
    {
        printf("Zero ");
        digits--;
    }
    return 0;
}

*\
Question = 20
/*
#include <stdio.h>
int main() {
   // Declare Variables
   int i = 0;
   printf("Character \t ASCII Value\n\n");
   //Print ASCII Values
   for (i = 65; i <=122; i++) {
      printf("%c \t\t %d\n", i, i);
   }
   return 0;
}
*\

Question = 21
/*


#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;
    int i;

    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    /* Multiply base, exponent times*/
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}

*\

Question = 22
/*
#include <stdio.h>

int main()
{
    int i, num;

    /* Input number from user */
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    /* Iterate from 1 to num */
    for(i=1; i<=num; i++)
    {
        /*
         * If num is exactly divisible by i
         * Then i is a factor of num
         */
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}
*\
Question = 23
/*
#include<stdio.h>
int main()
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
return 0;
}
*\
Question = 24

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    // declare the variables
    int n1, n2, i, GCD_Num;
    printf ( " Enter any two numbers: \n ");
    scanf ( "%d %d", &n1, &n2);

    // use for loop
    for( i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i ==0 && n2 % i == 0)
            GCD_Num = i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */
    }
    // print the GCD of two numbers
    printf (" GCD of two numbers %d and %d is %d.", n1, n2, GCD_Num);
    return 0;
}
*\

Question = 25
/*
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
*\
Question = 26
/*
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
*\
Question = 27
/*

#include<stdio.h>

int main(){

    int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && num!= 1)
             printf("%d ",num);
    }

   return 0;
}
*\
Question = 28
/*


#include <stdio.h>

int main()
{
    int i, j, end, isPrime, sum=0;

    /* Input upper limit from user */
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);

    /* Find all prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If 'i' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

    return 0;
}
*\
Question = 30
/*
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
*\
