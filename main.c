/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lucia
 *
 * Created on 12 de mayo de 2021, 09:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void dec2bin (unsigned int);
int main(int argc, char** argv)
{
    unsigned int numero = 234;
    dec2bin (numero);
    
    return (EXIT_SUCCESS);
}

void dec2bin (unsigned int n)
{
    if (n<=1)//caso base en el que estas en el ultimo numero de la izquierda
    {
        printf ("%d", n);
    }
    
    else
    {
        dec2bin(n/2);//imprime todos los bits menos el ultimo
        printf ("%d", n%2);
        
        
    }
  
}