#include <stdio.h> 
int stack[100],i,j,choice=0,n=0,top=-1; 
int isStackFull();
void push(); 
int isStackEmpty();
void pop(); 
void peep(); 
void show(); 
int main ()
{ 
 printf("\n*********Stack Operations Using Static Array*********"); 
 printf("\n----------------------------------------------"); 
 printf("\nEnter the size of the STACK:"); 
 scanf("%d",&n); 
 
 do 
 { 
 printf("\n...Chose one from the below options..."); 
 printf("\n1.Push\n2.Pop\n3.Peep/Peek\n4.Show OR Display\n5.Exit"); 
 printf("\n Enter your choice:"); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
 case 1: 
 { 
 push(); 
 break; 
 } 
 case 2: 
 { 
 pop(); 
 break; 
 } 
 case 3: 
 { 
 peep(); 
 break; 
 } 
 case 4: 
 { 
 show(); 
 break; 
 } 
 case 5: 
 { 
 printf("\nPlease Wait Exiting...."); 
 break; 
 } 
 default: 
 { 
 printf("\nPlease Enter valid choice ... "); 
 } 
 }; 
 } while(choice != 5) ;
return 0;
} 
int isStackFull()
 {
 if(top == n - 1)// n is size of the array 
 return 1;
 else return 0;
 } 
void push () 
{ 
 int val; 
 if(isStackFull())
 printf("\nSTACK Is Full !!!"); 
 else 
 { 
 printf("\nEnter the value?"); 
 scanf("%d",&val); 
 top = top +1; 
 stack[top] = val;
printf("\nElement is pushed in to the STACK");
 } 
} 
int isStackEmpty()
 {
 if(top == -1)
 return 1;
 else return 0;
 } 
void pop () 
{ 
 if(isStackEmpty())
 printf("\nStack Is Empty !!!");
 else 
 {top = top -1;
 printf("\nElement is Popped from the STACK");
} 
} 
void peep() 
{
if(isStackEmpty()) 
 printf("\nStack Is Empty !!!"); 
else printf("\nTOP Index =%d and Value=%d",top,stack[top]); 
}
void show() 
{ if(isStackEmpty())
printf("\nStack Is Empty !!!"); 
 else
 {
printf("\nStack Contains: ");
 for (i=top;i>=0;i--) 
 printf("\n%5d",stack[i]); 
 
}
}
