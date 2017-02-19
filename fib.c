#include<stdio.h>
int main(){
int n,f;
scanf("%d",&n);
f=fib(n);
printf("%d",f);
}
int fib(int n){
if(n==2||n==1)
return n-1;
else
return (fib(n-2)+fib(n-1));
}
//hi sjklfjlkjskldjgfjsdjlg
