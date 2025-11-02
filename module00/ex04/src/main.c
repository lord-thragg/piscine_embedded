/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:31:17 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/02 12:26:12 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <util/delay.h>
#include <avr/io.h>
#include <stdio.h>
#include <stdint.h>

int main( void ) {
	// Define the output broche
	DDRB |= (1 << PB0);
	DDRB |= (1 << PB1);
	DDRB |= (1 << PB2);
	DDRB |= (1 << PB4);
	
	// Define the input button
	DDRD &= ~(1 << PD2);
	DDRD &= ~(1 << PD3);
	uint8_t lstate_1 = 1;
	uint8_t lstate_2 = 1;
	
	// Value used to incrementer / decrementer
	uint8_t count = 0b0000;
	// Mask to detect which bit is 1 or 0
	uint8_t mask0 = 0b0001, mask1 = 0b0010, mask2 = 0b0100, mask3 = 0b1000;

	while ( 1 ) {
		
		_delay_ms(50);
		
		uint8_t cstate_1 = PIND & (1 << PD2);
		uint8_t cstate_2 = PIND & (1 << PD3);

		// Need to add the incrementation / decrementation when button pressed
		if ( !cstate_1 && lstate_1 )
			count++;
		if ( !cstate_2 & lstate_2 )
			count--;

		if ( count & mask0 )
			PORTB |= (1 << PB0);
		else
			PORTB &= ~(1 << PB0);

		if ( count & mask1 )
			PORTB |= (1 << PB1);
		else
			PORTB &= ~(1 << PB1);

		if ( count & mask2 )
			PORTB |= (1 << PB2);
		else
			PORTB &= ~(1 << PB2);

		if ( count & mask3 )
			PORTB |= (1 << PB4);
		else
			PORTB &= ~(1 << PB4);

		if (count > 16 || count < 0)
			count = 0b0000;

		lstate_1 = cstate_1;
		lstate_2 = cstate_2;

	}

	return (0);
}
