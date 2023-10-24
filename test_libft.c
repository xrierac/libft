/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:05:59 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/24 17:30:51 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("Welcome to the libft test.\n");
	char testChars[] = "aA1$#!"; // Test characters

    printf("Testing isalpha function:\n");

    for (unsigned long int i = 0; i < sizeof(testChars) - 1; i++) {
        int result = isalpha(testChars[i]);
        printf("'%c' is %salpha\n", testChars[i], result ? "" : "not ");
    }

    // Edge Cases
    int edgeCase1 = isalpha('\0'); // Null character
    int edgeCase2 = isalpha(' ');  // Space
    int edgeCase3 = isalpha('2');  // Digit
    int edgeCase4 = isalpha('@');  // Special character

    printf("\nEdge Cases:\n");
    printf("Null character '\\0' is %salpha\n", edgeCase1 ? "" : "not ");
    printf("Space ' ' is %salpha\n", edgeCase2 ? "" : "not ");
    printf("Digit '2' is %salpha\n", edgeCase3 ? "" : "not ");
    printf("Special character '@' is %salpha\n", edgeCase4 ? "" : "not ");

	char testChars2[] = "aA1$#!"; // Test characters

    printf("Testing ft_isalpha function:\n");

    for (unsigned long int i = 0; i < sizeof(testChars2) - 1; i++) {
        int result = ft_isalpha(testChars[i]);
        printf("'%c' is %salpha\n", testChars[i], result ? "" : "not ");
    }

    // Edge Cases
    int edgeCase5 = ft_isalpha('\0'); // Null character
    int edgeCase6 = ft_isalpha(' ');  // Space
    int edgeCase7 = ft_isalpha('2');  // Digit
    int edgeCase8 = ft_isalpha('@');  // Special character

    printf("\nEdge Cases:\n");
    printf("Null character '\\0' is %salpha\n", edgeCase5 ? "" : "not ");
    printf("Space ' ' is %salpha\n", edgeCase6 ? "" : "not ");
    printf("Digit '2' is %salpha\n", edgeCase7 ? "" : "not ");
    printf("Special character '@' is %salpha\n", edgeCase8 ? "" : "not ");

    return 0;
}