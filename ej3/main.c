/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lucia
 *
 * Created on 12 de mayo de 2021, 11:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int suma_digitos (int);
int main(int argc, char** argv) {
    int n = 54;
    int resultado = suma_digitos (n);
    return (EXIT_SUCCESS);
}

int suma_digitos (int n1)
{
    return ((n1%10) + suma_digitos(n1/10));//caso recursivo
}
/* 
 a. El objetivo de la funcion es sumar los digitos del numero
 b. No funciona porque no hay un caso base
 
 */