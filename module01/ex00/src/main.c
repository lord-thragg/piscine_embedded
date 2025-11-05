/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/05 16:49:10 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <avr/io.h>

/* ANCHOR TIC TAC
 *	only one bitwise operation means you need to reverse the octet

 *	volatile for the long is usefull to cancel optimisation of the compilateur
 *	that it normally do

 *	The XOR operation ( ^= ) is usefull to change the state of a bit with one operation
*/

int main( void ) {
	DDRB |= (1 << PB1);

	while ( 1 ) {
		PORTB ^= (1 << PB1);

		for( volatile long i = 0; i < 160000; i++) { }
	}

	return (0);
}
