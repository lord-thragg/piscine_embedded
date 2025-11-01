/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/01 14:19:38 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <util/delay.h>
#include <avr/io.h>

int	main(void) {
	DDRB |= (1 << PB0);
	DDRD &= ~(1 << PD2);

	PORTD |= (1 << PD2);

	while (1) {
		if ( !(PIND & (1 << PD2)) )
			PORTB |= (1 << PB0);
		else
			PORTB &= ~(1 << PB0);
		_delay_ms(10);
	}

	return (0);
}
