int ft_isalpha()
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z'))
            return (0);
        i++;
    }
    return (1);
    
    
    NOOONONONNO
}
