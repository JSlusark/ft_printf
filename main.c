/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:56:16 by jslusark          #+#    #+#             */
/*   Updated: 2024/09/27 15:31:19 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int mine_c;
	int func_c;



	printf("\033[32m___________________________TESTING %%c_________________________________\n\n\033[0m");

	printf("test 1: print(\"%%c\", '0')\n");
	mine_c = ft_printf("%c", '0');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%c", '0');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("test 2: print(\" %%c \", '0')\n");
	mine_c = ft_printf(" %c ", '0');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c ", '0');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("test 3: print(\" %%c\", '0' - 256)\n");
	mine_c = ft_printf(" %c", '0' - 256);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '0' - 256);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("test 4: print(\"%%c \", '0' + 256)\n");
	mine_c = ft_printf("%c ", '0' + 256);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%c ", '0' + 256);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("test 5: print(\" %%c %%c %%c \", '0', 0, '1')\n");
	mine_c = ft_printf(" %c %c %c ", '0', 0, '1');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c %c %c ", '0', 0, '1');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 6: print(\"hello %%c %%c %%c %%c\", 'j', 'e', 's', 's')\n");
	mine_c = ft_printf("hello %c %c %c %c", 'j', 'e', 's', 's');
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("hello %c %c %c %c", 'j', 'e', 's', 's');
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 7: print(\" %%c\", '~' - 5)\n");
	mine_c = ft_printf(" %c", '~' - 5);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '~' - 5);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 8: print(\" %%c\", '~' + 1)\n");
	mine_c = ft_printf(" %c", '~' + 1);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" %c", '~' + 1);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("My test 9: print(\" %%c\", 0)\n");
	mine_c = ft_printf(" %c", 0);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf(" %c", 0);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 10: print(\"%%c\", '\\n')\n");
	mine_c = ft_printf("%c", '\n');
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%c", '\n');
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 11: print(\" %%c\", '\\t')\n");
	mine_c = ft_printf(" %c", '\t');
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf(" %c", '\t');
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");



printf("\033[33m___________________________TESTING %%s_________________________________\n\n\033[0m");

	printf("test 1: print(\"%%s\", \"hello\")\n");
	mine_c = ft_printf("%s", "hello");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "hello");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 2: print(\" %%s \", \"world\")\n");
	mine_c = ft_printf(" %s ", "world");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf(" %s ", "world");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 3: print(\"%%s\", \"\")\n");
	mine_c = ft_printf("%s", "");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 4: print(\"%%s\", NULL)\n");
	mine_c = ft_printf("%s", NULL);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", (char *)NULL);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 5: print(\"%%s\", \"a long string with spaces\")\n");
	mine_c = ft_printf("%s", "a long string with spaces");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "a long string with spaces");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 6: print(\"hello %%s!\", \"world\")\n");
	mine_c = ft_printf("hello %s!", "world");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("hello %s!", "world");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 7: print(\"%%s and %%s\", \"this\", \"that\")\n");
	mine_c = ft_printf("%s and %s", "this", "that");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s and %s", "this", "that");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 8: print(\"%%s\", \"0123456789\")\n");
	mine_c = ft_printf("%s", "0123456789");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "0123456789");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 9: print(\"%%s\", \"special characters !@#$%%^&*()\")\n");
	mine_c = ft_printf("%s", "special characters !@#$%^&*()");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "special characters !@#$%^&*()");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 10: print(\"%%s\", \"string with\\nnewline\")\n");
	mine_c = ft_printf("%s", "string with\nnewline");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "string with\nnewline");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("test 11: print(\"%%s\", \"string with\\ttab\")\n");
	mine_c = ft_printf("%s", "string with\ttab");
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("%s", "string with\ttab");
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");
	// 3
	printf("test 12: print(\"%%s \", \"\")\n");
	mine_c = ft_printf("%s ", "");
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("%s ", "");
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");
	// 10
	printf("test 13: print(\" NULL %%s NULL \", \"NULL\")\n");
	mine_c = ft_printf(" NULL %s NULL ", (char *)NULL);
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf(" NULL %s NULL ", (char *)NULL);
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");

	printf("test 14: print(\"character name: %%s \", \"Jess\")\n");
	mine_c = ft_printf("character name: %s", "Jess");
	printf(" <- args, my printft returns: %d\n", mine_c);
	func_c = printf("character name: %s", "Jess");
	printf(" <- args, o printft returns: %d\n", func_c);
	printf("\n");


	// TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
printf("\033[34m___________________________TESTING %%p_________________________________\n\n\033[0m");
	printf("My test 1: print(\" %%p %%p \", LONG_MIN, LONG_MAX\")\n");
	mine_c = ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 2: print(\" %%p %%p \", INT_MIN, INT_MAX\")\n");
	mine_c = ft_printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 3: print(\" %%p %%p \", 0, 0\")\n");
	mine_c = ft_printf(" %p %p ", (void *)0, (void *)0);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p %p ", (void *)0, (void *)0);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 4: print(\" %%p\", NULL)\n");
	mine_c = ft_printf(" %p", NULL);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p", NULL);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 5: print(\" %%p\", (void *)-1)\n");
	mine_c = ft_printf(" %p", (void *)-1);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p", (void *)-1);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 6: print(\" %%p\", (void *)ULONG_MAX)\n");
	mine_c = ft_printf(" %p", (void *)ULONG_MAX);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf(" %p", (void *)ULONG_MAX);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");


printf("\033[35m___________________________TESTING %%i & %%d_________________________________\n\n\033[0m");
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

		printf("My test 5: print(\"Min and max edgecases: %%i %%i %%i %%i %%i %%i %%i\")\n");
		mine_c = ft_printf("Min and max edgecases: %i %i %i %i %i %i %i", INT_MAX, INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)LLONG_MAX, (int)LLONG_MIN, (int)ULONG_MAX);
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf("Min and max edgecases: %i %i %i %i %i %i %i", INT_MAX, INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)LLONG_MAX, (int)LLONG_MIN, (int)ULONG_MAX);
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");


	printf("\033[35m___________________________TESTING %%d_________________________________\n\n\033[0m");

	printf("My test 1: print(\"Coding is my number %%d priority\")\n");
	mine_c = ft_printf("Coding is my number %d priority", 1);
	printf(" <- args, my printf returns: %i\n", mine_c);
	func_c = printf("Coding is my number %d priority", 1);
	printf(" <- args, o printf returns: %i\n", func_c);
	printf("\n");

	printf("My test 2: print(\"I have %%d problems and you're not %%d of them\")\n");
	mine_c = ft_printf("I have %d problems and you're not %d of them", 99, 1);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("I have %d problems and you're not %d of them", 99, 1);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 3: print(\"Hope you not score %%d at the exam\")\n");
	mine_c = ft_printf("Hope you not score %d at the exam", -42);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hope you not score %d at the exam", -42);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 4: print(\"Zero value: %%d\")\n");
	mine_c = ft_printf("Zero value: %d", 0);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Zero value: %d", 0);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 5: print(\"Min and max edgecases: %%i %%i %%i %%i %%i %%i %%i\")\n");
	mine_c = ft_printf("Min and max edgecases: %i %i %i %i %i %i %i", (int)INT_MAX, (int)INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)LLONG_MAX, (int)LLONG_MIN, (int)ULONG_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Min and max edgecases: %i %i %i %i %i %i %i", (int)INT_MAX, (int)INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)LLONG_MAX, (int)LLONG_MIN, (int)ULONG_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 6: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", (unsigned int)-1);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", (unsigned int)-1);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

		printf("\034[32m___________________________TESTING %%u_________________________________\n\n\033[0m");
	unsigned int one = -1;
	printf("My test 1: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", one);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", one);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	unsigned int zero = 0;
	printf("My test 2: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", zero);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", zero);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	unsigned int max_uint = UINT_MAX;
	printf("My test 3: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", max_uint);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", max_uint);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	unsigned int small_number = 42;
	printf("My test 4: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", small_number);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", small_number);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	unsigned int large_number = 987654321;
	printf("My test 5: print(\"Unsigned: %%u\")\n");
	mine_c = ft_printf("Unsigned: %u", large_number);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Unsigned: %u", large_number);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

printf("\033[36m___________________________TESTING %%x & %%X_________________________________\n\n\033[0m");
	printf("My test 1: print(\"Hex of %%i: %%x\", 20, 20)\n");
	mine_c = ft_printf("Hex of %i: %x", 20, 20);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %x", 20, 20);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 2: print(\"Hex of %%i: %%X\", 50, 50)\n");
	mine_c = ft_printf("Hex of %i: %X", 50, 50);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %X", 50, 50);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 3: print(\"Hex of %%i: %%x\", 0, 0)\n");
	mine_c = ft_printf("Hex of %i: %x", 0, 0);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %x", 0, 0);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 4: print(\"Hex of %%i: %%x\", 927819203, 927819203)\n");
	mine_c = ft_printf("Hex of %i: %x", 927819203, 927819203);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %x", 927819203, 927819203);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 5: print(\"Hex of %%i: %%X\", 927819203, 927819203)\n");
	mine_c = ft_printf("Hex of %i: %X", 927819203, 927819203);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %X", 927819203, 927819203);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 6: print(\"Hex of %%i: %%x\", INT_MIN, INT_MAX)\n");
	mine_c = ft_printf("Hex of %i: %x", INT_MIN, INT_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %x", INT_MIN, INT_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 7: print(\"Hex of %%i: %%X\", LONG_MAX, LONG_MAX)\n");
	mine_c = ft_printf("Hex of %i: %X", LONG_MIN, LONG_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %X", (int)LONG_MIN, (int)LONG_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 8: print(\"Hex of %%i: %%x\", LLONG_MIN, LLONG_MAX)\n");
	mine_c = ft_printf("Hex of %i: %x", LLONG_MIN, LLONG_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %x", (int)LLONG_MIN, (int)LLONG_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 9: print(\"Hex of %%i: %%X\", ULONG_MAX, ULONG_MAX)\n");
	mine_c = ft_printf("Hex of %i: %X", ULONG_MAX, ULONG_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %i: %X", (int)ULONG_MAX, (int)ULONG_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");

	printf("My test 10: print(\"Hex of %%u: %%x\", UINT_MAX, UINT_MAX)\n");
	mine_c = ft_printf("Hex of %u: %x", UINT_MAX, UINT_MAX);
	printf(" <- args, my printf returns: %d\n", mine_c);
	func_c = printf("Hex of %u: %x", UINT_MAX, UINT_MAX);
	printf(" <- args, o printf returns: %d\n", func_c);
	printf("\n");


		printf("\033[34m___________________________TESTING %%_________________________________\n\n\033[0m");
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

		printf("My test 3: print(\" %%100 %%50 %%25 %%0 \")\n");
		mine_c = ft_printf(" %%100 %%50 %%25 %%0 ");
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf(" %%100 %%50 %%25 %%0 ");
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 4: print(\" %%c %%i %%d %%s \")\n");
		mine_c = ft_printf(" %%c %%i %%d %%s ");
		printf(" <- args, my printft returns: %d\n", mine_c);
		func_c = printf(" %%c %%i %%d %%s ");
		printf(" <- args, o printft returns: %d\n", func_c);
		printf("\n");

		printf("My test 5: print(\"%%%%123%%%%456%%%%\")\n");
		mine_c = ft_printf("%%123%%456%%");
		printf(" <- args, my printf returns: %i\n", mine_c);
		func_c = printf("%%123%%456%%");
		printf(" <- args, o printf returns: %i\n", func_c);
		printf("\n");

		printf("\033[34m___________________________TESTING MIXED FORMATS IN THE SAME PHRASE_________________________________\n\n\033[0m");
		printf("My test 1: print(\"Name: %%s, Score: %%d, Grade: %%c\", \"Alice\", 95, 'A')\n");
		mine_c = ft_printf("Name: %s, Score: %d, Grade: %c", "Alice", 95, 'A');
		printf(" <- args, my printf returns: %d\n", mine_c);
		func_c = printf("Name: %s, Score: %d, Grade: %c", "Alice", 95, 'A');
		printf(" <- args, o printf returns: %d\n", func_c);
		printf("\n");

		printf("My test 2: print(\"ID: %%u, Hex value: %%x, Letter: %%c\", 4294967295, 255, 'F')\n");
		mine_c = ft_printf("ID: %u, Hex value: %x, Letter: %c", 4294967295U, 255, 'F');
		printf(" <- args, my printf returns: %d\n", mine_c);
		func_c = printf("ID: %u, Hex value: %x, Letter: %c", 4294967295U, 255, 'F');
		printf(" <- args, o printf returns: %d\n", func_c);
		printf("\n");

		printf("My test 3: print(\"Progress: %%d%%%%, Status: %%s\", (int)(0.75 * 100), \"Complete\")\n");
		mine_c = ft_printf("Progress: %d%%, Status: %s", (int)(0.75 * 100), "Complete");
		printf(" <- args, my printf returns: %d\n", mine_c);
		func_c = printf("Progress: %d%%, Status: %s", (int)(0.75 * 100), "Complete");
		printf(" <- args, o printf returns: %d\n", func_c);
		printf("\n");
	return (0);
}
