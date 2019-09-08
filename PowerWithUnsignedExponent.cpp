double PowerWithUnsignedExponent(double base,unsigned int exponent){
    if (exponent == 0)
        return 1;

    if (exponent == 1)
        return base;

    double result = PowerWithUnsignedExponent(base,exponent >> 1);
    result *= result;
    if (exponent & 0x1 == 1) /*  &表示按位与，0x开头的表示的是十六进制数，k&0x1表示k与0x1按位与，其效果为取k的二进制中最右边的数字,等价于除以2  */
        result *=base;

    return result; 
}