#include <cstdio>

int main(int argc, char const *argv[])
{
	long long i = 0;
	unsigned number = 12345;
	printf("Summ of the number %d ====>", number);
	long long summ = 0;
	while (number != 0 )
	{
		summ += number % 10;
		number /= 10;
		i++;
	}
	printf("%lld\n", summ);
	
	auto calcSumm = summ / i;
	printf("%lld", calcSumm);
	/*sprintf(/*summ, " / ", i, " = ", summ / i)*/
	return 0;
}