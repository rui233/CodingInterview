double PowerWithUnsignedExponent(double base,unsigned int exponent){
    if (exponent == 0)
        return 1;

    if (exponent == 1)
        return base;

    double result = PowerWithUnsignedExponent(base,exponent >> 1);
    result *= result;
    if (exponent & 0x1 == 1) /*  &��ʾ��λ�룬0x��ͷ�ı�ʾ����ʮ����������k&0x1��ʾk��0x1��λ�룬��Ч��Ϊȡk�Ķ����������ұߵ�����,�ȼ��ڳ���2  */
        result *=base;

    return result; 
}