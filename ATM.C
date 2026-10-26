# include <stdio.h>

   int main(){
   int b=5000,a,ch;
   printf("1.withdraw\n2.deposite\n");
   scanf("%d",&ch);

   printf("enter the amount");
   scanf("%d",&a);
   if(ch==1&&a>0&&a<=b)
   printf("blance = %d",b-a);
   else if (ch==2&&a>0)
   printf("blance=%d",b+a);
   else
     printf("invalid amount");
     return 0;
  }


