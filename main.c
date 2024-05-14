/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:56:16 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/14 17:17:05 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int mine_c;
	int func_c;

// %c tests

/*
 	//____________________________________FRANCI TESTS %c_____________________________________________
	printf("___________________________FRANCI TESTS %%c_________________________________\n\n");
	// 1
	printf("test 1: print(\"%%c\", '0')\n");
	mine_c = ft_printf("%c", '0');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%c", '0');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 2
	printf("test 2: print(\" %%c \", '0')\n");
	mine_c = ft_printf(" %c ", '0');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c ", '0');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 3
	printf("test 3: print(\" %%c\", '0' - 256)\n");
	mine_c = ft_printf(" %c", '0' - 256);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '0' - 256);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 4
	printf("test 4: print(\"%%c \", '0' + 256)\n");
	mine_c = ft_printf("%c ", '0' + 256);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%c ", '0' + 256);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 5
	printf("test 5: print(\" %%c %%c %%c \", '0', 0, '1')\n");
	mine_c = ft_printf(" %c %c %c ", '0', 0, '1');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c %c %c ", '0', 0, '1');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
*/


	//________________________________MY TESTS %c__________________________________________
	printf("___________________________MY TESTS %%c_________________________________\n\n");
	printf("My test 1: print(\"hello %%c %%c %%c %%c\", 'j', 'e', 's', 's')\n");
	mine_c = ft_printf("hello %c %c %c %c", 'j', 'e', 's', 's');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("hello %c %c %c %c", 'j', 'e', 's', 's');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 2: print(\" %%c\", '~' - 5)\n");
	mine_c = ft_printf(" %c", '~' - 5);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '~' - 5);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 3: print(\" %%c\", '~' + 1)\n");
	mine_c = ft_printf(" %c", '~' + 1);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '~' + 1);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n"); // ~ becomes DEL is not printable therefore does not show

	//%s
	// ft_printf("Hello %s, you scored %d%% on your C exam. Character: %c\n", "Alice", 95, 'A');
	//%p
	//%d
	//%i
	//%u
	//%x
	//%X

	//%%
	//________________________________MY TESTS %%__________________________________________
		printf("___________________________MY TESTS %%_________________________________\n\n");
		printf("My test 1: print(\"%% %% %% %%\")\n");
		mine_c = ft_printf("%% %% %% %%");
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("%% %% %% %%");
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 2: print(\" %% %% %% %% \")\n");
		mine_c = ft_printf(" %% %% %% %% ");
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf(" %% %% %% %% ");
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 2: print(\" %%100 %%50 %%25 %%0 \")\n");
		mine_c = ft_printf(" %%100 %%50 %%25 %%0 ");
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf(" %%100 %%50 %%25 %%0 ");
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

	return (0);
}
