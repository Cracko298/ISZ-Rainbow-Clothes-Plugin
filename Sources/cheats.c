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

void	Grey_Clothes(void)
{
	WRITEU32(offset + 0x048362C, 0x00000008);
	WRITEU32(offset + 0x0483630, 0x00000008);
	WRITEU32(offset + 0x0483634, 0x00000008);
}

void	Brown_Clothes(void)
{
	WRITEU32(offset + 0x048362C, 0x00000009);
	WRITEU32(offset + 0x0483630, 0x00000009);
	WRITEU32(offset + 0x0483634, 0x00000009);
}

void	Black_Clothes(void)
{
	WRITEU32(offset + 0x048362C, 0x00000001);
	WRITEU32(offset + 0x0483630, 0x00000001);
	WRITEU32(offset + 0x0483634, 0x00000001);
}

void	Blue_Clothes(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048362C, 0x00000002);
	WRITEU32(offset + 0x0483630, 0x00000002);
	WRITEU32(offset + 0x0483634, 0x00000002);
	offset = 0;
	data = 0;
}

void	Grey_and_Black(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048362C, 0x00000008);
	WRITEU32(offset + 0x0483630, 0x00000008);
	WRITEU32(offset + 0x0483634, 0x00000008);
	offset = 0;
	data = 0;
}

void	Tan_Clothes(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048362C, 0x0000000A);
	WRITEU32(offset + 0x0483630, 0x0000000A);
	WRITEU32(offset + 0x0483634, 0x0000000A);
	offset = 0;
	data = 0;
}

void	Red_Clothes(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048362C, 0x00000000);
	WRITEU32(offset + 0x0483630, 0x00000000);
	WRITEU32(offset + 0x0483634, 0x00000000);
	offset = 0;
	data = 0;
}

void	Bling_Clothes(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048362C, 0x0000000F);
	WRITEU32(offset + 0x0483630, 0x0000000F);
	WRITEU32(offset + 0x0483634, 0x0000000F);
	offset = 0;
	data = 0;
}

void	Kvlar_Clothes(void)
{
	WRITEU32(offset + 0x0483630, 0x00000005);
	WRITEU32(offset + 0x0483634, 0x00000005);
	WRITEU32(offset + 0x048362C, 0x00000005);
}

void	Default_Clothes(void)
{
	WRITEU32(offset + 0x0483630, 0x00000006);
	WRITEU32(offset + 0x0483634, 0x00000006);
	WRITEU32(offset + 0x048362C, 0x00000006);
}

void	Arctic_Clothes(void)
{
	WRITEU32(offset + 0x0483630, 0x0000000B);
	WRITEU32(offset + 0x0483634, 0x0000000B);
	WRITEU32(offset + 0x048362C, 0x0000000B);
}

