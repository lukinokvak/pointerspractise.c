//
//  main.c
//  pointers.c
//
//  Created by Lukas Kvak on 02/02/2021.
//

#include <stdio.h>
#include<stdlib.h>
int main(void){
    int a = 0,b = 0,sum=0,*p,*q,difference=0;
    
    printf("please enter two numbers for sum\n");
    scanf("%d%d",&a,&b);
   
    p=&a; q=&b;
    sum= *p + *q;
    difference = *p - *q;
    printf("your sum is:%d\n",sum);
    printf("difference is:%d\n",difference);
    
    return(0);
}
