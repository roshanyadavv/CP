import keyboard
keyboard.wait('1')
a="""
#include<stdio.h>
int main()
{
   int L,W,H;
   scanf("%d%d%d",&L,&W,&H);
  
   
   if((L<1 && L>1000) ||(H<1 && H>1000) || (H<1 && H>1000))
   return 0;
   
   if(W==L && H==L) printf("ACCEPTED");
   else
   if(W<L || H<L) printf("CHANGE"); 
   else
   if(W>L || H>L) printf("CROP");
  
  return 0;
}
"""
keyboard.write(a)