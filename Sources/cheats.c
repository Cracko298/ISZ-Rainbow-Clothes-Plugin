#include "cheats.h"
#include <stdbool.h>
#include "hid.h"
#include "values.h"
#include <string.h>

u32 offset = 0;
u32 data = 0;
u32 patch_address = 0;


void    Rainbow_Clothes(void)
{
    offset = 0x00000000;
    WRITEU32(offset + 0x0482FFC, 0x0888D6B8);
    offset = 0;
    data = 0;
    offset = 0x00000000;
    WRITEU32(offset + 0x048362C, 0x00000005);
    WRITEU32(offset + 0x0482FFC, 0x0888D718);
    for (int i = 0; i < 0x00000666; i++)
    {
    }
    WRITEU32(offset + 0x048362C, 0x00000002);
    WRITEU32(offset + 0x0482FFC, 0x0888D6D8);
    for (int i = 0; i < 0x00000666; i++)
    {
    }
    WRITEU32(offset + 0x048362C, 0x00000003);
    WRITEU32(offset + 0x0482FFC, 0x0888D638);
    for (int i = 0; i < 0x00000666; i++)
    {
    }
    offset = 0;
    data = 0;
    offset = 0x00000000;
    WRITEU32(offset + 0x0482FFC, 0x0888D6B8);
    offset = 0;
    data = 0;
}
