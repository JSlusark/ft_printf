/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:56:16 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/21 17:02:07 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int mine_c;
	int func_c;

//%c

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

/*
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
*/

//%s
	// ft_printf("Hello %s, you scored %d%% on your C exam. Character: %c\n", "Alice", 95, 'A');
/* // TEST(3, print("%s ", ""));
	//________________________________MY TESTS %s__________________________________________
	printf("___________________________FRANCI TESTS %%s_________________________________\n\n");
	// 3
	printf("test 3: print(\"%%s \", \"\")\n");
	mine_c = ft_printf("%s ", "");
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%s ", "");
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 10
	printf("test 10: print(\" NULL %%s NULL \", \"NULL\")\n");
	mine_c = ft_printf(" NULL %s NULL ", (char *)NULL);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" NULL %s NULL ", (char *)NULL);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("___________________________MY TESTS %%s_________________________________\n\n");
	printf("test 1: print(\"character name: %%s \", \"Jess\")\n");
	mine_c = ft_printf("character name: %s", "Jess");
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("character name: %s", "Jess");
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	 */
	//%p

//%i & %d
/* 	//________________________________MY TESTS i__________________________________________
		printf("___________________________MY TESTS i & d_________________________________\n\n");
		printf("My test 1: print(\"Coding is my number %%i priority\")\n");
		mine_c = ft_printf("Coding is my number %i priority", 1);
		printf(" <- args, my printft returns: %i\n", mine_c);
		func_c = printf("Coding is my number %i priority", 1);
		printf(" <- args, o printft returns: %i\n", func_c);
		printf("\n");

		printf("My test 2: print(\"I have %%i problems and you're not %%i of them\")\n");
		mine_c = ft_printf("I have %i problems and you're not %i of them", 99, 1);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("I have %i problems and you're not %i of them", 99, 1);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 3: print(\"Hope you not score %%i at the exam\")\n");
		mine_c = ft_printf("Hope you not score %i at the exam", -42);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Hope you not score %i at the exam", -42);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 4: print(\"Zero value: %%i\")\n");
		mine_c = ft_printf("Zero value: %i", 0);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Zero value: %i", 0);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

// need to chek if ok
		printf("My test 5: print(\"Min and max edgecases: %%i %%i %%i %%i %%i %%i %%i\")\n");
		mine_c = ft_printf("Min and max edgecases: %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, ULONG_MAX);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Min and max edgecases: %i %i %li %li %lld %lli %lu", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, ULONG_MAX);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		unsigned int one= -1;
		printf("My test 6: print(\"Unsigned: %%u\")\n");
		mine_c = ft_printf("Unsigned: %u", one);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Unsigned: %u",one);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n"); */



		// printf("My test 2: print(\" %i %i %i %i \")\n");
		// mine_c = ft_printf(" %i %i %i %i ");
		// printf(" <- args, my printft returns: %d\n", mine_c);
		// func_c = printf(" %i %i %i %i ");
		// printf(" <- args, o printft returns: %d\n", func_c);
		// printf("\n");

		// printf("My test 2: print(\" %i100 %i50 %i25 %i0 \")\n");
		// mine_c = ft_printf(" %i100 %i50 %i25 %i0 ");
		// printf(" <- args, my printft returns: %d\n", mine_c);
		// func_c = printf(" %i100 %i50 %i25 %i0 ");
		// printf(" <- args, o printft returns: %d\n", func_c);
		// printf("\n");

	//%u
	//%x
		printf("___________________________MY TESTS x & X_________________________________\n\n");
		mine_c = ft_printf("Hex of %i: %x", 20, 20);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Hex of %i: %x", 20, 20);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		mine_c = ft_printf("Hex of %i: %X", 50, 50);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Hex of %i: %X", 50, 50);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		mine_c = ft_printf("Hex of %i: %X", 927819203, 927819203);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Hex of %i: %X", 927819203, 927819203);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");


	//%X

//%%
/*
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
	*/

	return (0);
}
