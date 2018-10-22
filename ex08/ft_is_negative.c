 #include <unistd.h>
 void ft_putchar(char display)
 {
     write(1, &display, 1);
 }

 void ft_is_negative(short int n)
 {
     if (n < 0)
     {
         ft_putchar('N');
     }
     if (n > 0 || n == 0)
     {
         ft_putchar('P');
     }
 }

 int    main(void)
 {
     ft_is_negative(-5);
     return (0);
 }