#include "main.h"
/**
 * _abs - a function that computes the absolute value of an interger
 * @ab: interger input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
