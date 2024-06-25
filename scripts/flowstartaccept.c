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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x96CFB880BAC634CE(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x761778199FE1211C()) && unk_0xF27FC86E347471F1())
	{
		unk_0x6FF322107B12B749(1);
		if (!unk_0x15CCE8886267624F())
		{
			if (!unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(800);
			}
		}
		iLocal_18 = unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
		iLocal_19 = unk_0x8DE4F68A9728925E("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xA0C7B98BCF1EEF9E(iLocal_18) || !unk_0xA0C7B98BCF1EEF9E(iLocal_19))
		{
			system::wait(0);
		}
		unk_0x88F483FBD433696A(iLocal_18, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(iLocal_19, "SET_DATA_SLOT_EMPTY");
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(iLocal_19, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(0);
		func_4(unk_0xE934399D6F2C3AC5(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(iLocal_19, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x557F1E2300EF1A3E(0);
		unk_0xE6B753D52F4CA222();
		while (!unk_0x15CCE8886267624F())
		{
			system::wait(0);
		}
		unk_0xCD17096A98584C2B();
		while (!iLocal_20)
		{
			unk_0x6B91FA4E397DAB8D();
			unk_0xA4F67CEB594AE064(7);
			unk_0xA91A4C18A2DB01BD(iLocal_18, 255, 255, 255, 0, 0);
			unk_0xA91A4C18A2DB01BD(iLocal_19, 255, 255, 255, 0, 0);
			if (unk_0x6D05C5731A838CB3(2, 201))
			{
				iLocal_20 = 1;
			}
			system::wait(0);
		}
		unk_0x6FF322107B12B749(0);
		func_3(1, 1);
		func_1();
	}
	Global_79660.f_1 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10019.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_101572.f_7 = iParam0;
	Global_101572.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_6()
{
	if (iLocal_18 != 0)
	{
		unk_0xD314260005F064BF(&iLocal_18);
	}
	if (iLocal_19 != 0)
	{
		unk_0xD314260005F064BF(&iLocal_19);
	}
	unk_0xA4F67CEB594AE064(4);
	unk_0x6FF322107B12B749(0);
	unk_0xBBC29EBE6E1A48FA();
}

