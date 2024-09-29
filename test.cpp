#include "stdFile.h"

int main()
{
    double buff[3] = {1.,2.,3.};
    Txt_Output("textfile",ios::out,buff,3);
    return 0;
}