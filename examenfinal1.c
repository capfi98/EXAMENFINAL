/*
Autor:          captop
Compilador:     gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilado:      gcc -o examenfinal1.out examenfinal1.c
Fecha:          Mon May 16 08:34:00 CST 2022
Librerias:      stdio
Resumen:        
*/

//librerias
#include <stdio.h>
#include <math.h>
//inicializo constantes
 
 #define G 0.00000000006693
 #define RT 6378000
 #define MT 5973600000000000000000000
 #define R 287.06
 #define L 0.0065
 #define g0 9.81
 #define T0 288.15
 #define P0 101325

//cohete 1

#define E01 30000000		//Empuje
#define TSFC1 0.0003248	//Consumo esp. de empuje
#define CD1 61.27		//Coeficiente CD
#define A1 201.06		//Seccion transversal cohete
#define m01 110000		//Masa propulsor
#define mf01 150000		//Masa inicial combustible

//cohete 2

#define E02 27000000	//Empuje
#define TSFC2 0.0002248	//Consumo esp. de empuje
#define CD2 61.27		//Coeficiente CD
#define A2 201.06		//Seccion transversal cohete
#define m02 110000		//Masa propulsor
#define mf02 150000		//Masa inicial combustible

//cohete 3

#define E03 25000000	//Empuje
#define TSFC3 0.0002248	//Consumo esp. de empuje
#define CD3 70.25		//Coeficiente CD
#define A3 215.00		//Seccion transversal cohete
#define m03 180000		//Masa propulsor
#define mf03 2100000	//Masa inicial combustible

float densidad();
float variacionmasa(float delta);
float gravedad();
float friccion(float dy);


void main(){
    float delta = 0.1;
    FILE *pf;
    //creamos archivo

    //ecuacion de aceleracion 
    float y0=0.26;
    float dy=0;
    float F =E01-variacionmasa(delta)*gravedad()-friccion(dy);
    float masa = variacionmasa(delta);
    Acell = F/masa;
    printf(Acell);
    
    
}

float densidad(){
    float rep;
    rep = pow(P0/(R*T0)(1-(L*y0)/T0),g0/(R*L);
    return rep;
}

float variacionmasa(float delta){
    float rep;
    rep = m01 - delta*TSFC1*E01 +mf01;
    return rep;
}

float gravedad(){
    float rep;
    rep = (G*MT)/(pow((RT+y0),2));
    return rep;
}

float friccion(float dy){
    (1/2)*densidad()*CD1*A1*dy*dy;
    return rep;
}