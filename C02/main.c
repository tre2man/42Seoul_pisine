/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:45:05 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 23:42:01 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strcapitalize(char *str);

void	*ft_print_memory(void *addr, unsigned int size);

int main()
{
	char dest[100] = "Hello";
	char src[10] = "BoB";
	char ex09[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char ex12[] = {
		                '\x42', '\x6f', '\x6e', '\x6a', '\x6f', '\x75', '\x72', '\x20',
				                '\x6c', '\x65', '\x73', '\x20', '\x61', '\x6d', '\x69', '\x6e',
						                '\x63', '\x68', '\x65', '\x73', '\x09', '\x0a', '\x09', '\x63',
								                '\x20', '\x20', '\x65', '\x73', '\x74', '\x20', '\x66', '\x6f',
										                '\x75', '\x09', '\x74', '\x6f', '\x75', '\x74', '\x09', '\x63',
												                '\x65', '\x20', '\x71', '\x75', '\x20', '\x6f', '\x6e', '\x20',
														                '\x70', '\x65', '\x75', '\x74', '\x20', '\x66', '\x61', '\x69',
																                '\x72', '\x65', '\x20', '\x61', '\x76', '\x65', '\x63', '\x09',
																		                '\x0a', '\x09', '\x70', '\x72', '\x69', '\x6e', '\x74', '\x5f',
																				                '\x6d', '\x65', '\x6d', '\x6f', '\x72', '\x79', '\x0a', '\x0a',
																						                '\x0a', '\x09', '\x6c', '\x6f', '\x6c', '\x2e', '\x6c', '\x6f',
																								                '\x6c', '\x0a', '\x20', '\x00'
																											    }; 






	//printf("==ex00==\n");
	//printf("dest : %s , src : %s , return : %s , dest : %s\n" , dest_0, src_0, ft_strcpy(dest_0, src_0), dest_0);
	printf("==ex01==\n");
	printf("return : %s\ndest : %s\n" , strncpy(dest, src, 3), dest);	
	
	printf("==ex09==\n");
	printf("input : %s\nreturn : %s\n" , ex09, ft_strcapitalize(ex09));	
	
	
	printf("==ex12==\n");
	ft_print_memory((void *)ex12, sizeof(ex12));
	return (0);
}
