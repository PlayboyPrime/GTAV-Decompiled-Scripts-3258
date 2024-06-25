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
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_43)
		{
			case 0:
				uLocal_44 = unk_0x8DE4F68A9728925E("mission_complete");
				iLocal_43 = 1;
				break;
			
			case 1:
				if (unk_0xA0C7B98BCF1EEF9E(uLocal_44))
				{
					iLocal_43 = 2;
				}
				break;
			
			case 2:
				unk_0x4A536D06AFED1D5B(uLocal_44, "SET_MISSION_TITLE", ScriptParam_48.f_0, ScriptParam_48.f_1, 0, 0, 0);
				unk_0xDBCE37B37A697642(uLocal_44, "SET_MISSION_TITLE_COLOUR", ScriptParam_48.f_2, ScriptParam_48.f_2, ScriptParam_48.f_2, -1082130432, -1082130432);
				if (ScriptParam_48.f_5.f_1 != -1f && !unk_0xFF692AB7350A74D7(ScriptParam_48.f_5.f_2))
				{
					unk_0x5EA38B125B8B37E5(uLocal_44, "SET_TOTAL", system::to_float(ScriptParam_48.f_5), ScriptParam_48.f_5.f_1, -1f, -1f, -1f, ScriptParam_48.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0xDBCE37B37A697642(uLocal_44, "SET_MEDAL", system::to_float(ScriptParam_48.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xDBCE37B37A697642(uLocal_44, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_48.f_66 + 1)
				{
					unk_0x88F483FBD433696A(uLocal_44, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(ScriptParam_48.f_9[iVar0 /*7*/]);
					unk_0x330108B080A2132F(ScriptParam_48.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_48.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x330108B080A2132F(2);
						unk_0x330108B080A2132F(0);
						unk_0x330108B080A2132F(0);
						unk_0x882AEFD55B8D51FB("STRING");
						unk_0xBD34A69071611974(system::floor((ScriptParam_48.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0xCFAD3D478C87321A();
						if (!unk_0xFF692AB7350A74D7(ScriptParam_48.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_48.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_48.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0xFF692AB7350A74D7(ScriptParam_48.f_9[iVar0 /*7*/].f_5) && !unk_0xFF692AB7350A74D7(ScriptParam_48.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x882AEFD55B8D51FB(ScriptParam_48.f_9[iVar0 /*7*/].f_6);
							unk_0x60D332F23943B34F(ScriptParam_48.f_9[iVar0 /*7*/].f_5);
							unk_0xCFAD3D478C87321A();
						}
					}
					else
					{
						unk_0x330108B080A2132F(ScriptParam_48.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_48.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x74BF156C860580D4(ScriptParam_48.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x882AEFD55B8D51FB("NUMBER");
							unk_0x7DCF91CE9137DE0E(ScriptParam_48.f_9[iVar0 /*7*/].f_3, 2);
							unk_0xCFAD3D478C87321A();
						}
						if ((ScriptParam_48.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x74BF156C860580D4(ScriptParam_48.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x882AEFD55B8D51FB("NUMBER");
							unk_0x7DCF91CE9137DE0E(ScriptParam_48.f_9[iVar0 /*7*/].f_4, 2);
							unk_0xCFAD3D478C87321A();
						}
						if (!unk_0xFF692AB7350A74D7(ScriptParam_48.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_48.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0xFF692AB7350A74D7(ScriptParam_48.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_48.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xE6B753D52F4CA222();
					iVar0++;
				}
				if (ScriptParam_48.f_5 != 0 && !unk_0xFF692AB7350A74D7(ScriptParam_48.f_5.f_2))
				{
					unk_0x88F483FBD433696A(uLocal_44, "SET_TOTAL");
					unk_0x330108B080A2132F(ScriptParam_48.f_5);
					if (!unk_0xFF692AB7350A74D7(ScriptParam_48.f_5.f_3))
					{
						func_18(ScriptParam_48.f_5.f_3);
					}
					else
					{
						unk_0x74BF156C860580D4(ScriptParam_48.f_5.f_1);
					}
					func_18(ScriptParam_48.f_5.f_2);
					unk_0xE6B753D52F4CA222();
				}
				unk_0x88F483FBD433696A(uLocal_44, "DRAW_MENU_LIST");
				unk_0xE6B753D52F4CA222();
				func_12(1);
				func_9(&uLocal_45);
				if (!func_8(Global_113969.f_19100, 4096))
				{
					func_6(&(Global_113969.f_19100), 4096);
				}
				iLocal_43 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_45) > ScriptParam_48.f_67 && ScriptParam_48.f_67 != -1f) || unk_0x15CCE8886267624F()) || Global_33093)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0x6D16B99FEB0AFFF1(uLocal_44, 0,1495f, 0,3159f, 0,2021f, 0,5111f, 255, 255, 255, 0, 0);
					if (unk_0x7B035E8A1D320F1B(10))
					{
						unk_0x4EB223432F8FA0A0(10);
					}
				}
				break;
		}
		system::wait(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_4(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_20930.f_1 = 3;
	}
}

int func_13()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return BitTest(Global_1956920, 5);
}

bool func_17()
{
	return BitTest(Global_1956920, 19);
}

void func_18(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_19()
{
	unk_0xD314260005F064BF(&uLocal_44);
	Global_33093 = 0;
	func_1(0);
	unk_0xBBC29EBE6E1A48FA();
}

