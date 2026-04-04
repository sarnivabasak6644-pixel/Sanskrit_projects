#ifndef SANSKRIT_H
#define SANSKRIT_H
#include <stdio.h>
#include <string.h>
/* prakar — data types */
#define purnaAnka int
#define varna char
#define bhinna float
#define dviguNaBhinna double
#define dirgha long
#define laghu short
#define dhanam unsigned
#define rinam signed
#define shunya void

/* gunaDharma — qualifiers and type constructors */
#define dhruva const
#define sthayi static
#define bahya extern
#define prakar typedef
#define samuha struct
#define samyoga union
#define tattva enum
#define parimanasya sizeof

/* niyantran — control flow */
#define yadi if
#define anyatha else
#define vichaar switch
#define paksha case
#define yavad while
#define kuru do
#define krite for
#define bhanj break
#define pluti continue
#define gaccha goto

/* kaarya — function */
#define mukhya main
#define parinam return

/* vaakyavyavhar — I/O */
#define vaach printf
#define shrun scanf

/* tantu - string functions*/
#define vyasa strlen

#endif