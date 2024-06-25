#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	if (unk_0x15CCE8886267624F())
	{
		unk_0x10B228D2FDB7AF16(500);
	}
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_5();
	}
	uLocal_17 = unk_0x8DE4F68A9728925E("instructional_buttons");
	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_17))
	{
		system::wait(0);
	}
	while (true)
	{
		unk_0xA91A4C18A2DB01BD(uLocal_17, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_16, uLocal_17);
		system::wait(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 191, 1));
			func_2("PRESS A");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(1);
			func_3(unk_0xE934399D6F2C3AC5(2, 194, 1));
			func_2("PRESS B");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(2);
			func_3(unk_0xE934399D6F2C3AC5(2, 193, 1));
			func_2("PRESS X");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(3);
			func_3(unk_0xE934399D6F2C3AC5(2, 192, 1));
			func_2("PRESS Y");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
		
		case 1:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 187, 1));
			func_2("DOWN");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(1);
			func_3(unk_0xE934399D6F2C3AC5(2, 188, 1));
			func_2("UP");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(2);
			func_3(unk_0xE934399D6F2C3AC5(2, 190, 1));
			func_2("LEFT");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(3);
			func_3(unk_0xE934399D6F2C3AC5(2, 189, 1));
			func_2("RIGHT");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
		
		case 2:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 202, 1));
			func_2("BACK");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_3(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_4()
{
	if (Global_20909 == 0)
	{
		if (((((((((unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 190)) || unk_0x6D05C5731A838CB3(2, 188)) || unk_0x6D05C5731A838CB3(2, 187)) || unk_0x6D05C5731A838CB3(2, 205)) || unk_0x6D05C5731A838CB3(2, 206)) || unk_0x6D05C5731A838CB3(2, 207)) || unk_0x6D05C5731A838CB3(2, 208)) || unk_0x6D05C5731A838CB3(2, 201)) || unk_0x6D05C5731A838CB3(2, 202))
		{
			Global_20909 = 1;
			system::settimera(0);
		}
	}
	else if (system::timera() > 50)
	{
		Global_20909 = 0;
	}
	if (Global_20909 == 0)
	{
		if (unk_0x6D05C5731A838CB3(2, 217))
		{
			iLocal_16 = 1;
		}
		if (unk_0x6D05C5731A838CB3(2, 189))
		{
			iLocal_16 = 2;
		}
		if (unk_0x6D05C5731A838CB3(2, 190))
		{
			iLocal_16 = 2;
		}
		if (unk_0x6D05C5731A838CB3(2, 205))
		{
		}
		if (unk_0x6D05C5731A838CB3(2, 206))
		{
		}
		if (unk_0x6D05C5731A838CB3(2, 207))
		{
		}
		if (unk_0x6D05C5731A838CB3(2, 208))
		{
		}
		if (unk_0x6D05C5731A838CB3(2, 188))
		{
			iLocal_16 = 2;
		}
		if (unk_0x6D05C5731A838CB3(2, 187))
		{
			iLocal_16 = 2;
		}
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			iLocal_16 = 1;
		}
		if (unk_0x6D05C5731A838CB3(2, 202))
		{
			iLocal_16 = 0;
		}
		if (unk_0x6D05C5731A838CB3(2, 203))
		{
			iLocal_16 = 1;
		}
		if (unk_0x6D05C5731A838CB3(2, 204))
		{
			iLocal_16 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x98E393364463951A(0);
	unk_0xD314260005F064BF(&uLocal_17);
	unk_0xBBC29EBE6E1A48FA();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_8())
	{
		Global_20930.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

bool func_10()
{
	return BitTest(Global_1956920, 5);
}

bool func_11()
{
	return BitTest(Global_1956920, 19);
}

int func_12(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

