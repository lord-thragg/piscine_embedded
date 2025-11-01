/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:31:17 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/01 17:04:57 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <util/delay.h>
#include <avr/io.h>

// TODO afficher la valeur en form binaire ( CAD: si la valeur est 5 alors je dois afficher 0b0101 sur les LEDS )

int main( void ) {
	// Pour definir les broches comme etant en sortie
	DDRB |= (1 << PB0);
	DDRB |= (1 << PB1);
	DDRB |= (1 << PB2);
	DDRB |= (1 << PB4);
	
	// Value utiliser pour incrementer / decrementer
	uint8_t value = 0b0000;

	// Lecture des boutons ( via PINx )
	

	// try to put all the needed LED in light
	PORTB |= (1 << PB0);
	PORTB |= (1 << PB1);
	PORTB |= (1 << PB2);
	PORTB |= (1 << PB4);
}
