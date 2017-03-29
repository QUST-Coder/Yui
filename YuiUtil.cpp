#include "src/YuiUtil.h"

bool YuiUtil::is_ipaddress(wxString address)
{
    char bufa[20];
    char bufb[20];
    int a,b,c,d;
    if(sscanf(address.c_str(),"%d.%d.%d.%d",&a,&b,&c,&d)==4)
    {
        sprintf("%d.%d.%d.%d",bufa);
        if(strlen(bufa)==address.length())
        {
            if(a>=0&&b>=0&&c>=0&&d>=0&&a<=255&&b<=255&&c<=255&&d<=255)
            {
                return true;
            }
        }
    }
    return false;
}
