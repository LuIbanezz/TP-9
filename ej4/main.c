/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lucia
 *
 * Created on 12 de mayo de 2021, 12:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int is_palindromo (char * p1, char *p2);


int main(void)
{
    char arr [100]; 
    char *p1 = arr;
    char *p2 = &arr[99];
    int i;
    int c=getchar();
    for (i = 0; i<99 && c!= '\n' ;i++)
    {
        arr[i]=c;
        c = getchar();
    }
    arr[i+1]=0;

    for (i=0; i<100 && *p2 != 0 ; i++)
    {
        p2--;//va a hacer esto hasta que este uno antes del 0
    }
    int resultado = is_palindromo (p1, p2);
    printf ("%d\n", resultado);
    return (EXIT_SUCCESS);
}

int is_palindrmo(char *p1, char *p2)
{
    while (!(((*p1)<='Z'&&(*p1)>= 'A')||((*p1)<= 'z'&&(*p1)>= 'a')))
    {
        if (p1!=p2)
        {
          p1++;  
        }

    }

    while (!(((*p2)<='Z'&&(*p2)>= 'A')||((*p2)<= 'z'&&(*p2)>= 'a')))
    {
        if (p1!=p2)
        {
          p1++;  
        }
    }
    
    
    //CASO BASE
    if ((p2-p1)<=1)
    {
        if (*p2 == *p1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    else
    {
        int resultado = is_palindromo (p1+1, p2-1);
        if (resultado == 1 && *p1==*p2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

}

