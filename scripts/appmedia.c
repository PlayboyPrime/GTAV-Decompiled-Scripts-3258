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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_25[25];
	int iLocal_26 = 0;
	struct<3> Local_27 = { 0, 0, 0 } ;
	struct<3> Local_28 = { 0, 0, 0 } ;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
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
	unk_0x51CC1333A10C4E09();
	func_28();
	func_26();
	while (true)
	{
		system::wait(0);
		if (iLocal_22 == 0)
		{
			if (Global_20930.f_1 != 9)
			{
				switch (Global_20930.f_1)
				{
					case 7:
						if ((iLocal_29 == 0 && iLocal_30 == 0) && Global_23321 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_20898, 0) && iLocal_29 == 0) && iLocal_30 == 0)
						{
							func_14();
							Global_20908 = 1;
							if (Global_20930.f_1 > 3)
							{
								if (BitTest(Global_8801, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_29)
				{
					func_9();
				}
				if (iLocal_30)
				{
					func_8();
				}
			}
			else
			{
				Global_20932 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_23 = unk_0x62830FDE95255DE5(0);
	switch (iLocal_23)
	{
		case 0:
			iLocal_22 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20930.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = unk_0x209F5DE8084C2803();
	iLocal_20 = 0;
	iVar0 = 0;
	while (iLocal_20 < iLocal_19)
	{
		if (unk_0xA536EFAB049B26A3(iLocal_20))
		{
			func_6(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0), -1f, -1f, &(Local_25[iLocal_20 /*6*/]), 0, 0, 0, 0);
			iLocal_24[iVar0] = iLocal_20;
			iVar0++;
		}
		iLocal_20++;
	}
	func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_20911, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20918)
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_5(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_5(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_5(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_5(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_5(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_5(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_5(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_5(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_5(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_5(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

void func_8()
{
	if (iLocal_29 == 0 && iLocal_30 == 1)
	{
		if (iLocal_34)
		{
			Local_28.f_0 = (Local_28.f_0 + 1f);
		}
		if (Local_28.f_0 > Local_27.f_0 || Local_28.f_0 == Local_27.f_0)
		{
			Local_28.f_0 = Local_27.f_0;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			Local_28.f_1 = (Local_28.f_1 - 2f);
		}
		if (Local_28.f_1 < Local_27.f_1 || Local_28.f_1 == Local_27.f_1)
		{
			Local_28.f_1 = Local_27.f_1;
			iLocal_35 = 0;
		}
		if (iLocal_36)
		{
			Local_28.f_2 = (Local_28.f_2 - 7f);
		}
		if (Local_28.f_2 < Local_27.f_2 || Local_28.f_2 == Local_27.f_2)
		{
			Local_28.f_2 = Local_27.f_2;
			iLocal_36 = 0;
		}
		if ((iLocal_34 == 0 && iLocal_35 == 0) && iLocal_36 == 0)
		{
			iLocal_30 = 0;
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 7;
				unk_0x428C32CC68809A35(1);
				Global_23323 = 1;
				func_26();
			}
		}
		unk_0xA0382000AA987093(Local_28, 0);
	}
}

void func_9()
{
	if ((iLocal_29 == 1 && iLocal_30 == 0) && Global_23321 == 6)
	{
		if (iLocal_31)
		{
			Local_28.f_0 = (Local_28.f_0 - 1f);
		}
		if (Local_28.f_0 < Local_27.f_0 || Local_28.f_0 == Local_27.f_0)
		{
			Local_28.f_0 = Local_27.f_0;
			iLocal_31 = 0;
		}
		if (iLocal_32)
		{
			Local_28.f_1 = (Local_28.f_1 - 0,5f);
		}
		if (Local_28.f_1 < Local_27.f_1 || Local_28.f_1 == Local_27.f_1)
		{
			Local_28.f_1 = Local_27.f_1;
			iLocal_32 = 0;
		}
		if (iLocal_33)
		{
			Local_28.f_2 = (Local_28.f_2 + 7f);
		}
		if (Local_28.f_2 > Local_27.f_2 || Local_28.f_2 == Local_27.f_2)
		{
			Local_28.f_2 = Local_27.f_2;
			iLocal_33 = 0;
		}
		if ((iLocal_31 == 0 && iLocal_32 == 0) && iLocal_33 == 0)
		{
			iLocal_29 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xA0382000AA987093(Local_28, 0);
	}
	if (BitTest(Global_8801, 15))
	{
		iLocal_29 = 0;
		iLocal_30 = 0;
		func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20918)
		{
			func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
		func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_20911, "SET_HEADER", &(Local_25[iLocal_21 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_11()
{
	Global_23323 = 1;
	unk_0x428C32CC68809A35(1);
	unk_0xBBC29EBE6E1A48FA();
}

int func_12()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_29 == 0)
	{
		unk_0x3CA646A848A5F334(&Local_28, 0);
		Local_27 = { Global_20890 };
		iLocal_30 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
		iLocal_36 = 1;
	}
}

void func_14()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, iParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x66DA7155B68E7638() == 0 || (unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2)))
			{
				return 0;
			}
		}
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_26)
	{
		if (system::timera() > 50)
		{
			iLocal_26 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_26 == 0)
	{
		if (func_15(2, Global_20906, 0))
		{
			func_20();
			iLocal_26 = 1;
			system::settimera(0);
		}
		if (func_15(2, Global_20907, 0))
		{
			func_17();
			iLocal_26 = 1;
			system::settimera(0);
		}
	}
}

void func_17()
{
	func_7(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(2);
		}
		else
		{
			unk_0xBF3F90E670404C44(1);
		}
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543362 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(1);
		}
		else
		{
			unk_0xBF3F90E670404C44(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_20908 == 0)
	{
		if (func_15(2, Global_20899, 0))
		{
			unk_0x8744D2E3FC95740E(&Global_8801, 15);
			func_24();
			Global_20908 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_18 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_18))
			{
				system::wait(0);
			}
			iVar0 = unk_0x5DEF122A58D4F685(uLocal_18);
			if (iVar0 > -1)
			{
				iLocal_21 = iLocal_24[iVar0];
				if (Global_20930.f_1 > 3)
				{
					if (Global_23321 == 0)
					{
						func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_20911, "SET_HEADER", &(Local_25[iLocal_21 /*6*/]), 0, 0, 0, 0);
						if (Global_20918)
						{
							func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x8744D2E3FC95740E(&Global_8800, 17);
						Global_23325 = iLocal_21;
						Global_23321 = 12;
						Global_20930.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_30 == 0)
	{
		unk_0x3CA646A848A5F334(&Local_28, 0);
		Local_27 = { -90,3f, -0,8f, 90f };
		iLocal_29 = 1;
		iLocal_31 = 1;
		iLocal_32 = 1;
		iLocal_33 = 1;
	}
}

void func_24()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

void func_26()
{
	if ((unk_0x1226C55CA7D2269A() || func_27()) || unk_0x761778199FE1211C())
	{
		unk_0x60B12E049FB8FF1C();
		if (unk_0xAE1965746C93F8D5(0))
		{
			iLocal_22 = 1;
		}
		else
		{
			Global_23323 = 1;
			Global_20930.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

var func_27()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_28()
{
	StringCopy(&(Local_25[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_25[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_25[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_25[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_25[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_25[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_25[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_25[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_25[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_25[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_25[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_25[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_25[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_25[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_25[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_25[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_25[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_25[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_25[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_25[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

