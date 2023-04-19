#include<stdio.h>
#define SIZE 50
int top=-1,stack[SIZE];
void push(char b)
{
    if (top==SIZE-1)
    {
        printf("\nOverflow\n\n");
    }
    else
    {
        top++;
        stack[top]=b;
    }
}
void pop(char b)
{
    if (top == -1)
    {
        printf("\nUnderflow\n\n");
 }
    else
    {
        top=top-1;
    }
}
void main()
{
   int i,b=0,c=0,d=0,e=0,f=0,g=0;
   char a[100];
   printf("Enter expression\n");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
      {
         if(a[i]=='(')
         b++;
         else if(a[i]=='{')
         c++;
         else if(a[i]=='[')
         d++;
         else if(a[i]==')')
         e++;
         else if(a[i]=='}')
         f++;
         else if(a[i]==']')
         g++; 
      }
      if((b==e)&&(c==f)&&(d==g))
      {
         for(i=0;a[i]!='\0';i++)
         {
            if(a[i]=='('||a[i]=='{'||a[i]=='[')
           push(a[i]);
 else if(a[i]==')'||a[i]=='}'||a[i]==']')
           pop(a[i]);
         }
         if(top==-1)
         printf("Balanced");
      }
      else
      printf("Not Balanced");
}