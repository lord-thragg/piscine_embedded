/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:06:41 by luluzuri          #+#    #+#             */
/*   Updated: 2025/11/05 17:07:51 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <avr/io.h>

/* ANCHOR Time1
 *	No PORTx register should be used so for that we need use Timer1 register
 *	do to the same as the first exercice

 * 
*/

int main( void ) {
	DDRB |= (1 << PB1); // Permet de mettre la led en sortie

	while ( 1 ) {

	}
}
