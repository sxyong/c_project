#include <ctype.h>
#include "hex2asi.h"



int hex2asii(const char* hex_buf, int hex_len, char* asii_buf, int asii_len)
{
	if(hex_buf == NULL || hex_len <= 0 || asii_buf == NULL || asii_len <=0)
		return -1;
}

int asii2hex(const char* asii_buf, int asii_len, char* hex_buf, int hex_len)
{
	if(asii_buf == NULL || asii_len <= 0 || hex_buf == NULL || hex_len <=0)
		return -1;
}
