#include <unistd.h>

void    print_line(int x, char strt_char, char mdl_char, char lst_char)
{
    int cntrx;
    cntrx = x;

    while(cntrx >= 1)
    {
        if (cntrx == x)
        {
            write(1, &strt_char, 1);
            //affiche first char
        }
        else if (cntrx == 1)
        {
            write(1, &lst_char, 1);
            //affiche last char
        }
        else
            write(1, &mdl_char, 1);
            //affiche middle char
        cntrx--;
        
        //print new line 
    }
    write(1,"\n",1);
}

void rush(int x, int y)
{
    // y = 3 , x = 5
    int cntr;
    cntr = y;
    while (cntr >= 1)
    {
        if (cntr == y)
        {
            print_line(x,'o','-','o');
        }
        else if (cntr == 1)
        {
            print_line(x,'o','-','o');
        }
        else
            print_line(x,'|',' ','|');
    	cntr--;
    }
    
}

int	main(void)
{
    rush(1,5);
    rush(50,50);
    return(0);
}
