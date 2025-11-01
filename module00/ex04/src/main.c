/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:31:17 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/02 00:30:22 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <util/delay.h>
#include <avr/io.h>
#include <stdio.h>
#include <stdint.h>

// TODO afficher la valeur en form binaire ( CAD: si la valeur est 5 alors je dois afficher 0b0101 sur les LEDS )
// TODO Increment with ++ should be the one TO DO need find a way to put that in LEDs

int main( void ) {
	// Pour definir les broches comme etant en sortie
	DDRB |= (1 << PB0);
	DDRB |= (1 << PB1);
	DDRB |= (1 << PB2);
	DDRB |= (1 << PB4);
	
	// Value utiliser pour incrementer / decrementer
	uint8_t count = 0b0000;
	uint8_t mask = 0b1000;
	
	// operation AND with mask to know if PB3 -> 1
	int r = (count & mask);
	if (r) {
		PORTB |= (1 << PB4);
	}
}
