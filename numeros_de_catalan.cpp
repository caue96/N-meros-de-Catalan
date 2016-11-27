#include <iostream>
#include <stdio.h>

const int MOD = 1000000007;

// Função que calcula o binomial (2n n)
unsigned long int binomial(unsigned long int n, unsigned long int k)
{
	unsigned long int resultado = 1;

	if (k > n - k)
		k = n - k;

	for (unsigned long int i = 0; i < k; ++i)
	{
		resultado *= (n - i);
		resultado /= (i + 1);
	}

	return resultado;
}

// Função que calcula o número de catalan
unsigned long int catalan(unsigned long int n)
{
	unsigned long int c = binomial(2*n, n);

	return c/(n+1);
}

// Função que calcula o resto do módulo do número de catalan pela constante MOD
int main()
{
	int q;
	unsigned long int n, resto = 0;

	scanf("%d", &q);

	while(q--){
		scanf("%lu", &n);

		resto = catalan(n) % MOD;

		printf("%lu\n", resto);
	}

	return 0;
}