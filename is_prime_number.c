// Is ready
int ft_is_prime_number(int nbr)
{
	int	i;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
            // if the number is not prime function return (0)
			return (0);
		i++;
	}
    // if the number prime function return (1);
	return (1);
}