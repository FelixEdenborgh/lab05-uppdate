#ifndef DHT_SETTINGS_H_INCLUDED
#define DHT_SETTINGS_H_INCLUDED
/*
||
||  Filename:	 		DHT_Settings.h
||  Title: 			    DHTxx Driver Settings
||  Author: 			Efthymios Koktsidis
||	Email:				efthymios.ks@gmail.com
||  Compiler:		 	AVR-GCC
||	Description:
||	Settings for the DHTxx driver. Pick a model
||	and the desirable pin.
||
*/

//----- Configuration --------------------------//
#define DHT_Type	DHT11         //DHT11 or DHT22
#define DHT_Pin		B, 0
//----------------------------------------------//
#endif


/** #ifndef DHT_SETTINGS_H_INCLUDED
#define DHT_SETTINGS_H_INCLUDED

#define DHT_TYPE DHT11
#define DHT_Pin D, 6
//#define SET(PD6, x) (DDRD |= (1 << x));
//#define CLEAR(PD6, x) (DDRD &= ~(1 << x));


#include <avr/io.h>
//For port edditing and pins, and DDR

//gör om det till det har gått igenom i skolan du minnst (1<<DDR eller liknande)
#define PinMode(x,y) (y ? SET(DDRD, x) : CLEAR(DDRD, x))
#define DigitalWrite(x,y) (y ? SET(PORTD, x) : CLEAR(PORTD, x))
#define DigitalRead(x) ( _GET(PIN, x))
#define PinModeToggle(x) ( _TOGGLE(DDR, x))
#define DigitalLevelToggle(x) ( _TOGGLE(PORT, x))

//1ul is an "unsigned long int with a value of 1 represented at the bit level
//setting bits
#define BitSet(x,y) ( x |= (1UL << y))
#define BitClear(x,y) ( x &= (~(1UL << y)))
#define BitToggle(x,y) ( x ^= (1UL << y))
#define BitCheck(x,y) (x & (1UL << y) ? 1:0)

//Port access
#define Port(port) (_PORT(port))
#define DDR(port) (_DDR(port))
#define PIN(port) (_PIN(port))
// ## = concatenation operator for the c preprocessor
#define _Port(port) (PORT## port)
#define _DDR(port) (DDR## port)
#define _PIN(port) (PIN## port)
#define _SET(type, port, bit) (BitSet((type##port), bit))
#define _CLEAR(type, port, bit) (BitClear((type##port), bit))
#define _TOGGLE(type, port, bit) (BitToggle((type##port), bit))
#define _Get(type, port, bit) (BitCheck((type##port), bit))

#define Input 0
#define Output !Input
#define Low 0
#define High !Low
#define False 0
#define True !False


#endif

  copyright (c) 2016 Efthymios koktsidis

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "software"),
  to deal in the software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of this software, and to premit persons to whom the software
  is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all copies or sustantial
  portions of the software.




**/
