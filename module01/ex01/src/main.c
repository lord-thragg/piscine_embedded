/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/06 18:20:43 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <avr/io.h>
#include <avr/interrupt.h>

/* ANCHOR Time1
 *	No PORTx register should be used so for that we need use Timer1 register
 *	do to the same as the first exercice

 * 
*/

int main( void ) {
	DDRB |= (1 << PB1); // Permet de mettre la led en sortie

	// Put the mode CTC ( Bit 3 of TCCR1B register )
	TCCR1B |= (1 << WGM12);

	OCR1A = 7811;

	TIMSK1 |= (1 << OCIE1A); // interupt value

	TCCR1B |= (1 << CS12) | (1 << CS10); // prescaler

	sei();

	while ( 1 ) {

	}

	return (0);
}

ISR(TIMER1_COMPA_vect) {
	PORTB ^= (1 << PB1);
}
