/*
 * File:   main.c
 * Author: Mateus
 *
 * Created on 26 de Fevereiro de 2018, 22:19
 */

#include "config_bits.h"
#include "display7segmentos.h"
#include "teclado_matricial_4x3.h"

void main(){
 
    print_7_seg(0);
    int i;
    
    while(1){
        i = teclado_matricial_read();
        if(i != -1)
            print_7_seg(i);
    }
    
}

