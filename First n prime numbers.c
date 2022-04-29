// Is ready
#include <stdio.h>

// this funtion chick if the number prime or not;
int	ft_is_prime(int nb)
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

int main()
{
    int i, n, nbr;
    i = 0;
    nbr = 2;
    printf("aabertente : Welcome to first n prime numbers programme\n");
    printf("aabertente : How many prime numbers you want : ");
    scanf("%d",&n);
    while (i < n)
    {
        // if the process applies by the function on (nbr) returned (1), they will print the (nbr) & (i++);
        if (ft_is_prime(nbr) == 1)
        {
            printf("%d, ", nbr);
            i++;
        }
        nbr++;
    }
    return (0);
}
