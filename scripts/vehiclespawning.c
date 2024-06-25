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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	fLocal_41 = 277,7314f;
	Local_43 = { -196,045f, -580,13f, 135,0004f };
	unk_0x8F72AF14CE5AACE4(800);
	func_16();
	while (true)
	{
		unk_0x66AA5AE1BFE28CA0();
		func_15();
		if (func_7() || uLocal_40)
		{
			func_3();
		}
		if (!iLocal_36)
		{
			if (!iLocal_35 && unk_0x15CCE8886267624F())
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_43, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_41);
				unk_0x4A3280817398D754(Local_43, 2500f, 0);
				unk_0x64BB72494B9DF6DC(0);
				iLocal_35 = 1;
			}
			else if (unk_0x787F8EE1F6FBDC6D())
			{
				if (!bLocal_39)
				{
					bLocal_39 = func_2();
				}
				else if (!bLocal_37)
				{
					bLocal_37 = func_1();
				}
				else
				{
					unk_0x10B228D2FDB7AF16(800);
					iLocal_36 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x9491D4E34E4389CD(uLocal_42, "garage_decor_01"))
	{
		unk_0x907994FF361E5295(uLocal_42, "garage_decor_01");
	}
	else
	{
		unk_0xEEC112F70F9E6543(uLocal_42);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_42 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
	if (unk_0xF8A8852F99E201DD(uLocal_42))
	{
		if (!iLocal_38)
		{
			unk_0x74C1590CC91B3930(uLocal_42);
			iLocal_38 = 1;
		}
		else if (unk_0xD0B0D1BD29678350(uLocal_42))
		{
			unk_0xBBB6D0F765409642(uLocal_42);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_34)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_33[iParam0]));
	unk_0x552B3BADB43FF551((unk_0xF46F370442FAD8F9(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

int func_7()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_32948;
}

bool func_11()
{
	return Global_2684504.f_700;
}

int func_12(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2696172;
}

bool func_14()
{
	return Global_2684504.f_695;
}

void func_15()
{
	system::wait(0);
}

void func_16()
{
	unk_0xDB2434E51017FFCC(32, 0, -1);
	func_18(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&uLocal_33, 21, 0);
	if (!func_17())
	{
		func_3();
	}
	unk_0xAECC5FA98C879D67(0);
	if (!unk_0x5AEB336317DC4151("imp_dt1_02_cargarage_a"))
	{
		unk_0xECFC57F5F11BCD83("imp_dt1_02_cargarage_a");
	}
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_19(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_19(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

