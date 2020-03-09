/*
 * File:   BLINKmain.c
 * Author: 19180066
 *
 * Created on 9 de Março de 2020, 08:47
 */


#include <xc.h>
#include "config.h"

void main (void)
{
    
   PORTDbits.RD0=0;      //Inicializa pino RD0 com 0
   PORTDbits.RD0=1;      //Inicializa pino RD0 com 0
   TRISDbits.TRISD0=0;   //Configura RD0 como Saída
   TRISDbits.TRISD2=1;   //Configura RD2 como Entrada
   TRISDbits.TRISD1=0;   //Configura RD1 como Saída
   TRISDbits.TRISD3=1;   // COnfigura RD3 como Entrada
    
   
   while(1)
     {
        if (PORTDbits.RD3==0)
        {
            PORTDbits.RD0=1;
            
        }
        else
        {
            PORTDbits.RD0=0;
            
        }
     
  
        if (PORTDbits.RD2==0)
        {
            PORTDbits.RD1=1;
            
        }
        else
        {
            PORTDbits.RD1=0;
            
        }
     }
    
    
    
    
    
    
    
    
    
}