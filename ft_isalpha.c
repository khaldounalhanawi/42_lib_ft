int ft_isalpha(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if ((str[i] < 'a' && str[i] > 'Z') || (str[i] < 'A') || (str[i] > 'z')) 
        	return (0);
        i++;
    }
    return (1);
}