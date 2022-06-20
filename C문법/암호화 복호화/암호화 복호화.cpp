#include <iostream>
#include <windows.h>

using namespace std;

class CCrypt
{
public:
    CCrypt(void);
    ~CCrypt(void);
    static BOOL Encrypt(BYTE* source, BYTE* destination, DWORD length);
    static BOOL Decrypt(BYTE* source, BYTE* destination, DWORD length);
};

const INT C1 = 52845;
const INT C2 = 22719;
const INT KEY = 78695;

CCrypt::CCrypt(void)
{

}

CCrypt::~CCrypt(void)
{

}

BOOL CCrypt::Encrypt(BYTE* source, BYTE* destination, DWORD length)
{
    DWORD i;
    INT key = KEY;

    if (!source || !destination || length <= 0)
    {
        return FALSE;
    }

    for (i = 0; i < length; i++)
    {
        destination[i] = source[i] ^ key >> 8;
        key = (destination[i] + key) * C1 + C2;
    }

    return true;
}

BOOL CCrypt::Decrypt(BYTE* source, BYTE* destination, DWORD length)
{
    DWORD i;
    BYTE previousBlock;
    INT key = KEY;

    if (!source || !destination || length <= 0)
    {
        return FALSE;
    }
    for (i = 0; i < length; i++)
    {
        previousBlock = source[i];
        destination[i] = source[i] ^ key >> 8;
        key = (previousBlock + key) * C1 + C2;
    }
    return true;
}

int main()
{
    BYTE origin[] = "abcdefg";
    BYTE encrypt[10];
    BYTE decrypt[10];

    ZeroMemory(encrypt, sizeof(encrypt));
    ZeroMemory(decrypt, sizeof(decrypt));

    CCrypt::Encrypt(origin, encrypt, sizeof(origin));

    printf("원 본 : %s\n", origin);
    cout << "암호화 : " << encrypt << endl;
    //printf("암호화 : %p\n", encrypt);

    CCrypt::Decrypt(encrypt, decrypt, sizeof(encrypt));

    printf("복호화 : %s\n", decrypt);
}

