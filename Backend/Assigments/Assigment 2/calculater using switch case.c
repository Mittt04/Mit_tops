#include<stdio.h>
#include<math.h>

 int main()
 {
  int a,b,i;
   printf("\nenter two no");
   scanf("%d %d",&a,&b);
         do
         {
           printf("\nenter 1 for ‘+’ :");
           printf("\nenter 2 for ‘-’ :");
           printf("\nenter 3 for ‘*’ :");
           printf("\nenter 4 for ‘/’ : \n");

           scanf("%d",&i);

              switch(i)
              {
                      case 1: printf("\nthe ans. is : %d\n",a+b);
                         break;
                      case 2: printf("\nthe ans. is :%d\n",a-b);
                         break;
                      case 3: printf("\nthe ans. is :%d\n",a*b);
                         break;
                         case 4: printf("\nthe ans. is :%d\n",a/b);
                         break;
                 default:printf("\nenter valid option\n");
              }


         }

         while(i!=0);
 return 0;
 }


