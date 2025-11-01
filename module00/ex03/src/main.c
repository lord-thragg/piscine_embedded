/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/01 13:58:11 by luluzuri         ###   ########.fr       */
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
		if (!current_state && last_state) {
			_delay_ms(10);
			PORTB ^= (1 << PB0);
		}
		last_state = current_state;
	}
	return (0);
}
