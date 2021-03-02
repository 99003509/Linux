#include"Mystring.h"
#include"Bitmask.h"
#include"Myutils.h"
#include<stdio.h>
int main()
{
    char str1[]="Nikitha";
    char str2[]="Prakruthi";
    char str3[]="Manushna";
    int l=mystrlen(str1);
    printf("%d\n",l);
    printf("%d\n",mystrcmp(str1,str2));
    mystrcpy(str1,str2);
    printf("%s\n",str1);
    mystrcat(str1,str3);
    printf("%s\n",str1);
    int b1=8;
    printf("%d\n",set(b1,3));
    printf("%d\n",reset(b1,4));
    printf("%d\n",flip(b1));
    printf("%d\n",query(b1));
    int n=9;
   
    printf("Factorial of %d = %d", n, multiplyNumbers(9));
    int num=0,res=0;
	
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER\n",num);
         

   
   
   
    if(checkpalindrome("snellens"))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    
    printf("Sum of 10, 20 = %d\n",sum(2,10,20));
    printf("Sum of 10, 20, 30, 40 = %d\n",sum(4,10,20,30,30));
    printf("Sum of 10, 20, 30, 40, 50, 60 = %d\n",sum(6,10,20,30,30,40,50));


   
    return 0;
}