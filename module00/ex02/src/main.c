/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/10/31 10:39:34 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <util/delay.h>
#include <avr/io.h>

int	main(void) {
	DDRB |= (1 << PB0);
	DDRD &= ~(1 << PD2);

	uint8_t last_state = 1;

	while (1) {
		uint8_t current_state = PIND & (1 << PD2);
		if (!current_state && last_state)
			PORTB ^= (1 << PB0);
		last_state = current_state;
	}

	return (0);
}
