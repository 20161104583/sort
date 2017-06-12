//
//  main.c
//  sort
//
//  Created by 20161104583 on 17/6/12.
//  Copyright © 2017年 20161104583. All rights reserved.
//


#include <stdio.h>
int main()
{
    int a[10],t,i,j;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(j=0;j<10;j++)
        for(i=0;i<10-j;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    return 0;
}

