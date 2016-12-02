// EMC Boys

#include <iostream>
#include <stdio.h>

const int MOD = 1000000007;

// Função que calcula o binomial (2n n)
unsigned long long int binomial(unsigned long long int n, unsigned long long int k)
{
	unsigned long long int resultado = 1;

	if (k > n - k)
		k = n - k;

	for (unsigned long long int i = 0; i < k; i++)
	{
		resultado *= (n - i);
		resultado /= (i + 1);
	}

	return resultado;
}

// Função que calcula o número de catalan
unsigned long long int catalan(unsigned long long int n)
{
	unsigned long long int c = binomial(2*n, n);

	return c/(n+1);
}

// Função que calcula o resto do módulo do número de catalan pela constante MOD
int main()
{
	int q;
	unsigned long long int n, resto = 0;

	scanf("%d", &q);

	while(q--){
		scanf("%llu", &n);

		resto = catalan(n) % MOD;

		printf("%llu\n", resto);
	}

	return 0;
}