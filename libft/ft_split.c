/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:25:45 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/01 10:19:42 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isseparator(char c, char separator)
{
	return (c == separator || c == '\0');
}

static int	ft_countwords(const char *str, char separator)
{
	int		i;
	int		words_counter;
	int		current_is_sep;
	int		next_is_sep;

	i = 0;
	words_counter = 0;
	while (str[i] != '\0')
	{
		current_is_sep = ft_isseparator(str[i], separator);
		next_is_sep = ft_isseparator(str[i + 1], separator);
		if (!current_is_sep && next_is_sep)
			words_counter++;
		i++;
	}
	return (words_counter);
}

static char	*ft_alloc_word(const char *src, char separator)
{
	int		word_length;
	char	*word;

	word_length = 0;
	while (!ft_isseparator(src[word_length], separator))
		word_length++;
	word = ft_substr(src, 0, word_length);
	return (word);
}

static void	*ft_fill_split(char **str_split, const char *src, char separator)
{
	int	i_src;
	int	i_words;

	i_src = 0;
	i_words = 0;
	while (src[i_src] != '\0')
	{
		if (!ft_isseparator(src[i_src], separator))
		{
			str_split[i_words] = ft_alloc_word(&src[i_src], separator);
			if (str_split[i_words] == NULL)
			{
				while (i_words-- > 0)
					free(str_split[i_words]);
				return (NULL);
			}
			while (!ft_isseparator(src[i_src], separator))
				i_src++;
			i_words++;
		}
		else
			i_src++;
	}
	return ((void *)1);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_countwords(s, c);
	result = ft_calloc(words + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (ft_fill_split(result, s, c) == NULL)
	{
		free(result);
		return (NULL);
	}
	return (result);
}

//Funciones
//----static ft_isseparator -> verifica si el caracter 
//es un separador o el final
//----static ft_countwords -> contamos las palabras que vamos
//encontrando en la cadena
//----static ft_writeword  -> copiamos una palabra desde SRC
//hasta DEST, hasta encontrar un separador
//----static ft_writewordinsplit  -> sirve para escribir las
//palabras divididas en el array split
//----ft_split  -> funcion principal, divide la cadena que 
//le pasa el usuario en subcadenas usando el delimitador que el
//usuario le proporciona.
