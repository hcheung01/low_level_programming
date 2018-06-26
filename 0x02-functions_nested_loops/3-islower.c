/*
 * _islower - entry point
 * @c: integer input
 * @return - 1 for lowercase and 0 for other
 *
 */
int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
