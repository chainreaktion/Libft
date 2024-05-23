/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:01:17 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/23 15:12:32 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <string.h>

int	ft_isalpha(int arg)
int ft_isdigit(int arg)
int	ft_isalnum(int arg)
int ft_isascii(int arg)
int ft_isprint(int arg)
int ft_strlen(char *str)
void    *ft_memset(void *s, int c, size_t n)
void	ft_bzero(void *s, size_t n)
void    *ft_memcpy(void *dst, const void *src, size_t n)
void    *ft_memmove(void *dst, const void *src, size_t n)
size_t  ft_strlcpy(char *dst, const char *src, size_t size_dst)
size_t  ft_strlcat(char *dst, const char *src, size_t siz)
int toupper(int c)
int ft_tolower(int c)
char    *ft_strchr(const char *s, int c)
char    *ft_strrchr(const char *s, int c)
int ft_strncmp(char *s1, char *s2, unsigned int n)
void    *ft_memchr(const void *s, int c, size_t n)
int ft_memcmp(const void *s1, const void *s2, size_t n)
char    *ft_strnstr(const char *big, const char *little, size_t len)
int	ft_atoi(char *str)
void	*ft_calloc(size_t nmemb, size_t size)
char    *ft_strdup(const char *s)


#endif
