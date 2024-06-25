#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x96CFB880BAC634CE(83))
	{
		func_10();
	}
	unk_0xD82473EFEF7FC622(0);
	unk_0x8744D2E3FC95740E(&(Global_113969.f_10019.f_25), 1);
	func_7();
	unk_0x6FF322107B12B749(1);
	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(0);
	}
	iLocal_0 = unk_0x8DE4F68A9728925E("OPENING_CREDITS");
	while (!unk_0xA0C7B98BCF1EEF9E(iLocal_0))
	{
		func_7();
		system::wait(0);
	}
	while (!unk_0x15CCE8886267624F())
	{
		func_7();
		system::wait(0);
	}
	func_6("TITLE", 0f, 1f, 1,5f, 1f, 0f, 1,5f, 15f);
	iLocal_1 = (unk_0x1DD05E817C89C737() + 8000 + system::round((2f * 1000f)));
	while (!unk_0xFD216000DC314A92())
	{
		func_7();
		if (!BitTest(Global_113969.f_10019.f_25, 1))
		{
			unk_0xA91A4C18A2DB01BD(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x1DD05E817C89C737() + system::round((2f * 1000f)));
				}
			}
			else if (unk_0x1DD05E817C89C737() > iLocal_1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10019.f_25), 1);
				if (unk_0xF27FC86E347471F1() || unk_0x761778199FE1211C())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		system::wait(0);
	}
	func_10();
}

void func_1()
{
	Global_101572 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_101572.f_7 = iParam0;
	Global_101572.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x88F483FBD433696A(iLocal_0, "HIDE_LOGO");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x88F483FBD433696A(iLocal_0, "SHOW_LOGO");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0x74BF156C860580D4(fParam2);
	unk_0x74BF156C860580D4(fParam3);
	unk_0x74BF156C860580D4(fParam4);
	unk_0x74BF156C860580D4(fParam5);
	unk_0x74BF156C860580D4(fParam6);
	unk_0x74BF156C860580D4(fParam7);
	unk_0xE6B753D52F4CA222();
}

void func_7()
{
	unk_0x6B91FA4E397DAB8D();
	unk_0x66EFB3D6110055C4(2, 199, 1);
	unk_0xA4F67CEB594AE064(7);
	func_8();
}

void func_8()
{
	unk_0xC0964AABD3C0CC7E();
	func_9();
}

void func_9()
{
	Global_23692.f_134 = 1;
}

void func_10()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10019.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xD314260005F064BF(&iLocal_0);
	}
	unk_0xA4F67CEB594AE064(4);
	unk_0x6FF322107B12B749(0);
	unk_0xD82473EFEF7FC622(1);
	unk_0xBBC29EBE6E1A48FA();
}

