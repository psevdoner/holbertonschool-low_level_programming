#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* 1. Hata ve İstisnai Durumlar */
	/* 1'den küçük sayılar (0, negatifler) ve 1 asal değildir. */
	if (n <= 1)
	{
		return (0);
	}

	/* 2. Asal Kontrol Başlatma */
	return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if n is divisible by i.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	/* 1. Başarılı Temel Durum (Base Case - Success): */
	/* Denetleyici i, n'nin karekökünü (veya daha fazlasını) aştıysa, */
	/* o zaman n asaldır. Çünkü n'nin herhangi bir böleni varsa, bu bölen */
	/* karekökünden küçük veya eşit olmak zorundadır. */
	if (i * i > n)
	{
		return (1);
	}

	/* 2. Başarısız Temel Durum (Base Case - Failure): */
	/* çünkü kontrol 2'den başlar.) */
	if (n % i == 0)
	{
		return (0);
	}

	/* 3. Özyinelemeli Adım (Recursive Step): */
	/* Denetleyici i'yi bir artırarak bir sonraki böleni kontrol et. */
	return (check_prime(n, i + 1));
}
