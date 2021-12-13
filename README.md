# ft_printf
Recoding the libc’s printf function

The function ft_printf is compared with the real printf. It manages the following conversions: cspdiuxX%:
• %c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal. 
• %d print a decimal (base 10) number.
• %i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16), with lowercase. 
• %X print a number in hexadecimal (base 16), with uppercase. 
• %% print a percent sign.

It manages any combination of the following flags: ’-0.’ and minimum field width with all conversions.
