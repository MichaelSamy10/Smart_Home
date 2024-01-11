/*
 * DIO_config.h
 *
 *  Created on: Dec 6, 2023
 *      Author: MICHAEL
 */

#ifndef MCAL_DIO_CONFIG_H_
#define MCAL_DIO_CONFIG_H_

/* Pins Direction 
	Options:
	1- DIO_u8INPUT
	2- DIO_u8OUTPUT
*/

#define PORTA_PIN0_DIR	DIO_u8OUTPUT
#define PORTA_PIN1_DIR	DIO_u8OUTPUT
#define PORTA_PIN2_DIR	DIO_u8OUTPUT
#define PORTA_PIN3_DIR	DIO_u8OUTPUT
#define PORTA_PIN4_DIR	DIO_u8OUTPUT
#define PORTA_PIN5_DIR	DIO_u8OUTPUT
#define PORTA_PIN6_DIR	DIO_u8OUTPUT
#define PORTA_PIN7_DIR	DIO_u8OUTPUT

#define PORTB_PIN0_DIR	DIO_u8OUTPUT
#define PORTB_PIN1_DIR	DIO_u8OUTPUT
#define PORTB_PIN2_DIR	DIO_u8OUTPUT
#define PORTB_PIN3_DIR	DIO_u8OUTPUT
#define PORTB_PIN4_DIR	DIO_u8OUTPUT
#define PORTB_PIN5_DIR	DIO_u8OUTPUT
#define PORTB_PIN6_DIR	DIO_u8INPUT
#define PORTB_PIN7_DIR	DIO_u8OUTPUT

#define PORTC_PIN0_DIR	DIO_u8INPUT
#define PORTC_PIN1_DIR	DIO_u8INPUT
#define PORTC_PIN2_DIR	DIO_u8OUTPUT
#define PORTC_PIN3_DIR	DIO_u8OUTPUT
#define PORTC_PIN4_DIR	DIO_u8OUTPUT
#define PORTC_PIN5_DIR	DIO_u8OUTPUT
#define PORTC_PIN6_DIR	DIO_u8OUTPUT
#define PORTC_PIN7_DIR	DIO_u8OUTPUT

#define PORTD_PIN0_DIR	DIO_u8OUTPUT
#define PORTD_PIN1_DIR	DIO_u8OUTPUT
#define PORTD_PIN2_DIR	DIO_u8OUTPUT
#define PORTD_PIN3_DIR	DIO_u8OUTPUT
#define PORTD_PIN4_DIR	DIO_u8INPUT
#define PORTD_PIN5_DIR	DIO_u8INPUT
#define PORTD_PIN6_DIR	DIO_u8INPUT
#define PORTD_PIN7_DIR	DIO_u8INPUT



/* Pins Initial Value 
	Options:
	1- DIO_u8LOW
	2- DIO_u8HIGH
*/

#define PORTA_PIN0_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN1_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN2_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN3_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN4_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN5_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN6_INITIAL_VAL	DIO_u8LOW
#define PORTA_PIN7_INITIAL_VAL	DIO_u8LOW

#define PORTB_PIN0_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN1_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN2_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN3_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN4_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN5_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN6_INITIAL_VAL	DIO_u8LOW
#define PORTB_PIN7_INITIAL_VAL	DIO_u8LOW

#define PORTC_PIN0_INITIAL_VAL	DIO_u8HIGH
#define PORTC_PIN1_INITIAL_VAL	DIO_u8HIGH
#define PORTC_PIN2_INITIAL_VAL	DIO_u8LOW
#define PORTC_PIN3_INITIAL_VAL	DIO_u8LOW
#define PORTC_PIN4_INITIAL_VAL	DIO_u8LOW
#define PORTC_PIN5_INITIAL_VAL	DIO_u8LOW
#define PORTC_PIN6_INITIAL_VAL	DIO_u8LOW
#define PORTC_PIN7_INITIAL_VAL	DIO_u8LOW

#define PORTD_PIN0_INITIAL_VAL	DIO_u8LOW
#define PORTD_PIN1_INITIAL_VAL	DIO_u8LOW
#define PORTD_PIN2_INITIAL_VAL	DIO_u8LOW
#define PORTD_PIN3_INITIAL_VAL	DIO_u8LOW
#define PORTD_PIN4_INITIAL_VAL	DIO_u8HIGH
#define PORTD_PIN5_INITIAL_VAL	DIO_u8HIGH
#define PORTD_PIN6_INITIAL_VAL	DIO_u8HIGH
#define PORTD_PIN7_INITIAL_VAL	DIO_u8HIGH




#endif /* MCAL_DIO_CONFIG_H_ */

