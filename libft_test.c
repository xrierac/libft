/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:00:29 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/26 15:15:44 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isalpha_test(void)
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }
   
   if( ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }
   
   if( ft_isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }
   
   if( ft_isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
   
   return(0);
}

int	isdigit_test(void)
{
	int var1 = 'h';
	int var2 = '2';

   if(ft_isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }

   if( ft_isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
	return (0);
}

int	isalnum_test()
{
	int arr[] = {'d', '2', '\t', ' ', 'h', '+', '&'};
	int i = 0;

	while (i < 7)
	{
		if (ft_isalnum(arr[i]))
			printf("%c is alnum\n", arr[i]);
		else
			printf("%c is not alnum\n", arr[i]);
		i++;
	}
	return (0);
}

int	isascii_test()
{
	int ch;
	
	for (ch = 0x7c; ch <= 0x82; ch++) {
	   	printf("%#04x    ", ch);
		if (ft_isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
   return 0;
}

int	main(void)
{
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	
	return (0);
}
