/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/01 00:26:40 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TODO To modify: When pressed too long and relieve the LED turn off/on ( not expected behavior )

#include <util/delay.h>
#include <avr/io.h>

int	main(void) {
	DDRB |= (1 << PB0);
	DDRD &= ~(1 << PD2);

	uint8_t last_state = 1;

	while (1) {
		uint8_t current_state = PIND & (1 << PD2);
		if (!current_state && last_state) {
			_delay_ms(50); // FIXME Problem here bc the delay is okay but  bad behavior when the button is hold
			PORTB ^= (1 << PB0);
		}
		last_state = current_state;
	}
	return (0);
}
