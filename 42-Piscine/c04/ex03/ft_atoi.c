/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekalkan <Emirkalkan1337@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:11:32 by ekalkan           #+#    #+#             */
/*   Updated: 2022/02/28 17:22:30 by ekalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	res;

	i = 0;
	negativ = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negativ *= -1;
		i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = (str[i] - '0') + (res * 10);
			i++;
		}
		return (res * negativ);
	}
