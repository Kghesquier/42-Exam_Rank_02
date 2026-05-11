unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char result = 0;

    while (i < 8)
    {
        if ((octet >> i) & 1)
            result = result | (1 << (7 - i));
        i++;
    }
    return (result);
}
