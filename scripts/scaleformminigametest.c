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
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	bool bLocal_21 = 0;
	bool bLocal_22 = 0;
	float fLocal_23 = 0f;
	bool bLocal_24 = 0;
	bool bLocal_25 = 0;
	float fLocal_26 = 0f;
	bool bLocal_27 = 0;
	bool bLocal_28 = 0;
	float fLocal_29 = 0f;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	float fLocal_32 = 0f;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	float fLocal_35 = 0f;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	float fLocal_38 = 0f;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	float fLocal_41 = 0f;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	float fLocal_44 = 0f;
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
	uLocal_18 = unk_0x34864AB7DA700AA6(100f, 100f, 30f);
	iLocal_20 = 1;
	fLocal_23 = 0f;
	fLocal_26 = 0f;
	fLocal_29 = 0f;
	fLocal_32 = 0f;
	fLocal_35 = 0f;
	fLocal_38 = 0f;
	fLocal_41 = 0f;
	fLocal_44 = 0f;
	if (unk_0x15CCE8886267624F())
	{
		unk_0x10B228D2FDB7AF16(500);
	}
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_2();
	}
	uLocal_16 = unk_0x8DE4F68A9728925E("p_bubblegum");
	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_16))
	{
		system::wait(0);
	}
	while (true)
	{
		if (iLocal_19 == 1)
		{
		}
		if (iLocal_20 == 1)
		{
			iLocal_20 = 0;
			uLocal_17 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x78411E34CF90EA8C(uLocal_17))
			{
				unk_0xA3774254665BAA82(uLocal_17, -160,6632f, -1072,144f, -1615,471f, -89,4999f, -0,2863f, 58,1189f, 45f, 0, 1, 1, 2);
				unk_0x3AAB5D3F3D4028CC(uLocal_17, 0,01f);
				unk_0x8397B3389E13A5E5(uLocal_17, 0,02f);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			}
			unk_0x4C905FB262965D5D(uLocal_18, 66);
		}
		iLocal_19 = 1;
		unk_0x6D16B99FEB0AFFF1(uLocal_16, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_16);
		system::wait(0);
	}
}

void func_1(var uParam0)
{
	if (Global_20909 == 0)
	{
		if (unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 190))
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
		if (unk_0x875A214D5EBCA509(2, 189))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 189))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 189))
		{
			bLocal_21 = false;
			fLocal_23 = 0f;
		}
		if (!bLocal_21 == bLocal_22)
		{
			bLocal_22 = bLocal_21;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(10);
			unk_0x74BF156C860580D4(fLocal_23);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 190))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 190))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 190))
		{
			bLocal_24 = false;
			fLocal_26 = 0f;
		}
		if (!bLocal_24 == bLocal_25)
		{
			bLocal_25 = bLocal_24;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(11);
			unk_0x74BF156C860580D4(fLocal_26);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 188))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 188))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 188))
		{
			bLocal_27 = false;
			fLocal_29 = 0f;
		}
		if (!bLocal_27 == bLocal_28)
		{
			bLocal_28 = bLocal_27;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(8);
			unk_0x74BF156C860580D4(fLocal_29);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 187))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 187))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 187))
		{
			bLocal_30 = false;
			fLocal_32 = 0f;
		}
		if (!bLocal_30 == bLocal_31)
		{
			bLocal_31 = bLocal_30;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0x74BF156C860580D4(fLocal_32);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 202))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 202))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 202))
		{
			bLocal_33 = false;
			fLocal_35 = 0f;
		}
		if (!bLocal_33 == bLocal_34)
		{
			bLocal_34 = bLocal_33;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(17);
			unk_0x74BF156C860580D4(fLocal_35);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 204))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 204))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 204))
		{
			bLocal_36 = false;
			fLocal_38 = 0f;
		}
		if (!bLocal_36 == bLocal_37)
		{
			bLocal_37 = bLocal_36;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(15);
			unk_0x74BF156C860580D4(fLocal_38);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 201))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 201))
		{
			bLocal_39 = false;
			fLocal_41 = 0f;
		}
		if (!bLocal_39 == bLocal_40)
		{
			bLocal_40 = bLocal_39;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(16);
			unk_0x74BF156C860580D4(fLocal_41);
			unk_0xE6B753D52F4CA222();
		}
		if (unk_0x875A214D5EBCA509(2, 203))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
		if (unk_0x6D05C5731A838CB3(2, 203))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
		if (!unk_0x6D05C5731A838CB3(2, 203))
		{
			bLocal_42 = false;
			fLocal_44 = 0f;
		}
		if (!bLocal_42 == bLocal_43)
		{
			bLocal_43 = bLocal_42;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(14);
			unk_0x74BF156C860580D4(fLocal_44);
			unk_0xE6B753D52F4CA222();
		}
	}
}

void func_2()
{
	if (unk_0x78411E34CF90EA8C(uLocal_17))
	{
		unk_0x85E6A1E36B5E2E4D(uLocal_17, 0);
	}
	unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x98E393364463951A(0);
	unk_0x428C32CC68809A35(1);
	unk_0xD314260005F064BF(&uLocal_16);
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20930.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1956920, 5);
}

bool func_8()
{
	return BitTest(Global_1956920, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

