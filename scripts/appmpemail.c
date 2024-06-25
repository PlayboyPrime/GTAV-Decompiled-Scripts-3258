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
	int iLocal_17[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	struct<16> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_33[59];
	struct<16> Local_34[59];
	int iLocal_35 = 0;
	struct<3> Local_36 = { 0, 0, 0 } ;
	struct<3> Local_37 = { 0, 0, 0 } ;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<314> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
	{
		func_59();
	}
	func_58();
	Global_23352 = 0;
	Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
	Global_21144 = 0;
	func_57();
	func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 7;
	}
	iLocal_29 = unk_0x1DD05E817C89C737();
	Global_20934 = 0;
	unk_0x78C4EBB0251847E2(&Local_37);
	Local_36 = { Local_37 };
	Local_36.f_0 = (Local_36.f_0 - 10f);
	Local_36.f_1 = (Local_36.f_1 + 20f);
	Global_23319 = 0;
	Global_23320 = 1;
	while (true)
	{
		system::wait(0);
		if (Global_23320 == 0 && Global_23319 == 1)
		{
			func_50();
		}
		if (Global_23320 == 1 && Global_23319 == 0)
		{
			func_45();
		}
		if (iLocal_28 == 0)
		{
			iLocal_30 = unk_0x1DD05E817C89C737();
			if ((iLocal_30 - iLocal_29) > 500)
			{
				iLocal_28 = 1;
			}
		}
		if ((Global_20930.f_1 != 9 && Global_23320 == 0) && Global_23319 == 0)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (Global_23352 == 0)
					{
						if (Global_2749862 == 0)
						{
							func_44();
							func_36();
						}
					}
					break;
				
				case 8:
					if (Global_23352 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_23352 == 0)
			{
				if (func_4())
				{
					Global_23319 = 1;
				}
			}
			else if (func_3(2, Global_20898, 0) || BitTest(Global_8801, 12))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					system::wait(0);
					unk_0x8744D2E3FC95740E(&Global_8801, 12);
					func_2();
					Global_20908 = 1;
					Global_23352 = 0;
					if (Global_20930.f_1 > 3)
					{
						Global_20930.f_1 = 7;
					}
					if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
					{
						func_59();
					}
					func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4541819[iLocal_22 /*104*/].f_29 > 0)
					{
						if (Global_4541819[iLocal_22 /*104*/].f_31 == 1)
						{
							Global_4541819[iLocal_22 /*104*/].f_29 = 4;
							Global_4541819[iLocal_22 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4541819[iLocal_22 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		if (func_1())
		{
			func_59();
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
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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

int func_4()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_25)
	{
		if (system::timera() > 50)
		{
			iLocal_25 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_25 == 0)
	{
		if (func_3(2, Global_20906, 0))
		{
			func_9();
			iLocal_25 = 1;
			system::settimera(0);
		}
		if (func_3(2, Global_20907, 0))
		{
			func_6();
			iLocal_25 = 1;
			system::settimera(0);
		}
	}
}

void func_6()
{
	func_56(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_7();
}

void func_7()
{
	if (func_8())
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

int func_8()
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

void func_9()
{
	func_56(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4541819[iLocal_22 /*104*/].f_24 == 1)
	{
		if (Global_20908 == 0)
		{
			if (unk_0x6D05C5731A838CB3(2, Global_20901))
			{
				func_2();
				Global_20908 = 1;
				func_29();
				if (Global_4541819[iLocal_22 /*104*/].f_27 == 1)
				{
					Global_4541819[iLocal_22 /*104*/].f_99[0] = 0;
					Global_4541819[iLocal_22 /*104*/].f_99[1] = 0;
					Global_4541819[iLocal_22 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4541819[iLocal_22 /*104*/].f_99[Global_20930] = 0;
				}
				if (func_28(iLocal_22))
				{
				}
				else
				{
					Global_4541819[iLocal_22 /*104*/].f_24 = 0;
					Global_4541819[iLocal_22 /*104*/].f_28 = 0;
				}
				unk_0xFE3A52C5B7AE3101(Global_4541819[iLocal_22 /*104*/].f_16);
				func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_20 > 0)
				{
					iLocal_20 = (iLocal_20 - 1);
				}
				func_51();
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
					Global_23352 = 0;
				}
			}
		}
	}
	else if (Global_20908 == 0)
	{
		if (unk_0x6D05C5731A838CB3(2, Global_20902))
		{
			if (iLocal_24 == 1)
			{
				if (Global_20930.f_1 > 3)
				{
					StringCopy(&Global_76481, unk_0xFACCDE46E24AD056(&Global_23327), 64);
					if (unk_0x1B79E937E91F40C3(&Global_76481, "HARDCODED_4207156"))
					{
						Global_20930.f_1 = 3;
						Global_1962263 = 1;
					}
					else
					{
						Global_76612 = 7;
						unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 10);
						Global_20930.f_1 = 6;
					}
				}
				func_59();
			}
		}
	}
	if (Global_4541819[iLocal_22 /*104*/].f_31 == 1)
	{
		if (Global_20908 == 0)
		{
			if (func_3(2, Global_20902, 0))
			{
				func_26();
				Global_20908 = 1;
				Global_4541819[iLocal_22 /*104*/].f_29 = 2;
				Global_4541819[iLocal_22 /*104*/].f_24 = 1;
				Global_4541819[iLocal_22 /*104*/].f_31 = 0;
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_20908 == 0 && iLocal_28 == 1)
	{
		if (func_3(2, Global_20899, 0))
		{
			Global_20908 = 1;
			if (Global_4541819[iLocal_22 /*104*/].f_29 > 0)
			{
				func_26();
				Global_4541819[iLocal_22 /*104*/].f_29 = 3;
				Global_4541819[iLocal_22 /*104*/].f_24 = 1;
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4541819[iLocal_22 /*104*/].f_30 == 1)
			{
				func_26();
				Global_8115 = 144;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 10;
					func_24();
				}
				func_23("appContacts");
				Global_20928 = system::start_new_script("appContacts", 4000);
				unk_0xFD49725F3FE7EE13("appContacts");
				Global_8115 = Global_4541819[iLocal_22 /*104*/].f_17;
				if (func_22(Global_8115, Global_20930) == 0)
				{
					func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_211", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_13();
				func_59();
			}
		}
	}
}

void func_13()
{
	int iVar0;
	char cVar1[24];
	
	if (Global_20913 == 1)
	{
		return;
	}
	if (Global_20930.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		if (Global_79389)
		{
			return;
		}
		system::wait(0);
	}
	switch (Global_20930.f_1)
	{
		case 6:
			func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_18(Global_9405);
			if (Global_9405 == 1)
			{
				func_56(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_56(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_56(Global_20911, "DISPLAY_VIEW", 4f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
				func_56(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_56(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_17();
				func_56(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_22(Global_8115, Global_20930) == 0)
				{
					func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_56(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_56(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_22544)
					{
						StringCopy(&cVar1, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar1, "CELL_211", 24);
					}
					if (func_22(Global_8115, Global_20930) == 0)
					{
						func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", &cVar1, "CELL_195", 0);
					}
					else
					{
						func_56(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_21(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_56(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		func_15();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_79389)
	{
		func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
	}
}

void func_16(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_17()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20930 == 0)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 1)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 2)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 3)
		{
			switch (Global_4543360)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_20();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_19(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8806);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_16(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_19(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_16(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_16(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_16(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_16(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_16(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

int func_22(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_23(char* sParam0)
{
	unk_0x97A5024CE91641F1(sParam0);
	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		system::wait(0);
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_25() && unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB204F40D393426B6(unk_0x4A8C381C258A124D(), 0, 1);
			if (Global_79389)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			{
				iVar0 = 1;
			}
			if (!Global_20873)
			{
				if (Global_8115 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
							}
							else
							{
								if (Global_79389)
								{
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 11);
								unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_25()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_27();
	}
}

void func_27()
{
	if (func_8())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_28(int iParam0)
{
	if ((Global_113969.f_14144[iParam0 /*104*/].f_99[0] == 1 || Global_113969.f_14144[iParam0 /*104*/].f_99[1] == 1) || Global_113969.f_14144[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	if (func_19(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_30();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_30()
{
	func_31();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_31()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_34(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_33(unk_0x4A8C381C258A124D());
			if (func_32(iVar0) && (!func_19(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_32(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_36()
{
	struct<16> Var0;
	
	if (Global_20908 == 0)
	{
		if ((func_3(2, Global_20899, 0) || Global_4543069 == 1) || Global_23346 == 1)
		{
			if (Global_4543069 == 0 && Global_23346 == 0)
			{
				func_26();
			}
			Global_20908 = 1;
			iLocal_28 = 0;
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			iLocal_22 = iLocal_17[iLocal_20];
			if (iLocal_20 == iLocal_19 || iLocal_20 > iLocal_19)
			{
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 8;
					Global_23352 = 1;
					iLocal_21 = iLocal_20;
					unk_0xEC552A25287441B8(iLocal_17[iLocal_20], &Local_43);
				}
				system::settimerb(0);
				iLocal_26 = 0;
				unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
				uLocal_31 = unk_0x6CA3F2B87712B6A4();
				while (!unk_0xA6F779AA284EB20E(uLocal_31) && iLocal_26 == 0)
				{
					system::wait(0);
					if (system::timerb() > 2000)
					{
						iLocal_26 = 1;
					}
				}
				func_42();
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(0);
				func_16("CELL_1");
				unk_0x882AEFD55B8D51FB("CELL_TO_FIELD");
				unk_0x60D332F23943B34F(unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()));
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB("CELL_FROM_FIELD");
				unk_0x60D332F23943B34F(&(Local_43.f_2));
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB("CELL_EMAIL_BCON");
				unk_0x60D332F23943B34F(&(Local_43.f_56[0 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[1 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[2 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[3 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[4 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[5 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[6 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[7 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[8 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_56[9 /*16*/]));
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB("CELL_2000");
				unk_0x60D332F23943B34F(&(Local_43.f_2));
				unk_0xCFAD3D478C87321A();
				switch (Local_43.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x3585BEBEDC67FCC7("EmailAds_Dock_Tease");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 3:
						unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 4:
						unk_0x3585BEBEDC67FCC7("EmailAds_Legendary_Motorsport");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 5:
						unk_0x3585BEBEDC67FCC7("EmailAds_LS_Customs");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 6:
						unk_0x3585BEBEDC67FCC7("EmailAds_Elitas_Travel");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 7:
						unk_0x3585BEBEDC67FCC7("EmailAds_LS_Tourist_Info");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 8:
						unk_0x3585BEBEDC67FCC7("emailads_dynasty8");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 9:
						unk_0x3585BEBEDC67FCC7("emailads_bennys");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 10:
						unk_0x3585BEBEDC67FCC7("emailads_ammunation");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 11:
						unk_0x3585BEBEDC67FCC7("emailads_SSSA");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 12:
						unk_0x3585BEBEDC67FCC7("emailads_maze_bank");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 13:
						unk_0x3585BEBEDC67FCC7("emailads_shark");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 14:
						unk_0x3585BEBEDC67FCC7("emailads_RP");
						unk_0x557F1E2300EF1A3E(1);
						break;
					
					case 15:
						unk_0x3585BEBEDC67FCC7("emailads_rockstar");
						unk_0x557F1E2300EF1A3E(1);
						break;
				}
				unk_0xE6B753D52F4CA222();
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_56(Global_20911, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (Local_43.f_313 == 15)
				{
					unk_0x69AA35F3F391CDBA(iLocal_17[iLocal_20]);
				}
				if (iLocal_20 == iLocal_19)
				{
					if (BitTest(Global_4543084, 25))
					{
						unk_0x8744D2E3FC95740E(&Global_4543084, 25);
					}
					if (Global_4541818 > 0)
					{
						func_38(12927, uLocal_38, -1, 1);
						if (Global_4541818 > 0)
						{
							Global_4541818 = 0;
						}
					}
				}
				return;
			}
			if (Global_4541819[iLocal_22 /*104*/].f_24 != 0)
			{
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 8;
				}
				if (Global_4543069 == 1 || Global_23346 == 1)
				{
					iLocal_22 = iLocal_17[0];
					iLocal_21 = 0;
					if (Global_4543069 == 1)
					{
					}
					Global_23346 = 0;
				}
				else
				{
					system::settimerb(0);
					iLocal_26 = 0;
					unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
					uLocal_31 = unk_0x6CA3F2B87712B6A4();
					while (!unk_0xA6F779AA284EB20E(uLocal_31) && iLocal_26 == 0)
					{
						system::wait(0);
						if (system::timerb() > 2000)
						{
							iLocal_26 = 1;
						}
					}
					if (iLocal_26 == 1)
					{
						iLocal_27 = 0;
					}
					else
					{
						iLocal_27 = unk_0x5DEF122A58D4F685(uLocal_31);
					}
					if (iLocal_27 < 0)
					{
						iLocal_27 = 0;
					}
					iLocal_22 = iLocal_17[iLocal_20];
					iLocal_21 = iLocal_20;
				}
				Global_4541819[iLocal_22 /*104*/].f_28 = 1;
				iLocal_24 = 0;
				StringCopy(&Global_23327, "NO_HYPERLINK", 64);
				Var0 = { Global_4541819[iLocal_22 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x6BA487C862DB8DDF(&Var0))
				{
					Global_23327 = { Var0 };
					iLocal_24 = 1;
					if (Global_20918)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
					Global_4541819[iLocal_22 /*104*/].f_26 = 1;
					Global_4541819[iLocal_22 /*104*/].f_24 = 2;
				}
				if (Global_4541819[iLocal_22 /*104*/].f_26 == 0)
				{
					Global_4541819[iLocal_22 /*104*/].f_24 = 1;
				}
				func_42();
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(0);
				func_16("CELL_1");
				unk_0x882AEFD55B8D51FB("CELL_TO_FIELD");
				unk_0x60D332F23943B34F(unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()));
				unk_0xCFAD3D478C87321A();
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 145)
				{
					unk_0x882AEFD55B8D51FB("CELL_FROM_FIELD");
					unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_50));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("CELL_FROM_FIELD");
					unk_0xACF853FB3F6EA7D4(&(Global_2169[Global_4541819[iLocal_22 /*104*/].f_17 /*29*/].f_3));
					unk_0xCFAD3D478C87321A();
				}
				switch (Global_4541819[iLocal_22 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4541819[iLocal_22 /*104*/]));
						break;
					
					case 1:
						unk_0x882AEFD55B8D51FB(&(Global_4541819[iLocal_22 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_33));
						if (Global_4541819[iLocal_22 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_67));
						}
						if ((Global_4541819[iLocal_22 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_4541819[iLocal_22 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_4541819[iLocal_22 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_4541819[iLocal_22 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_4541819[iLocal_22 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 2:
						unk_0x882AEFD55B8D51FB(&(Global_4541819[iLocal_22 /*104*/]));
						unk_0x511D14ED2DA887E1(Global_4541819[iLocal_22 /*104*/].f_49);
						unk_0xCFAD3D478C87321A();
						break;
					
					case 3:
						unk_0x882AEFD55B8D51FB(&(Global_4541819[iLocal_22 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_33));
						unk_0x511D14ED2DA887E1(Global_4541819[iLocal_22 /*104*/].f_49);
						if (Global_4541819[iLocal_22 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_67));
						}
						if ((Global_4541819[iLocal_22 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_4541819[iLocal_22 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_4541819[iLocal_22 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_4541819[iLocal_22 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_4541819[iLocal_22 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 4:
						func_37(iLocal_22);
						break;
					
					case 5:
						func_37(iLocal_22);
						break;
					
					case 6:
						func_37(iLocal_22);
						break;
					
					case 7:
						func_37(iLocal_22);
						break;
					
					case 8:
						func_37(iLocal_22);
						break;
					
					case 9:
						func_37(iLocal_22);
						break;
					
					case 10:
						func_37(iLocal_22);
						break;
					
					case 11:
						func_37(iLocal_22);
						break;
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 145)
				{
					unk_0x882AEFD55B8D51FB("CELL_2000");
					unk_0x60D332F23943B34F(&(Global_4541819[iLocal_22 /*104*/].f_50));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_16(&(Global_2169[Global_4541819[iLocal_22 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 149)
				{
					unk_0x3585BEBEDC67FCC7("emailads_maze_bank");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 140)
				{
					unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 155)
				{
					unk_0x3585BEBEDC67FCC7("emailads_arena");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 160)
				{
					unk_0x3585BEBEDC67FCC7("emailads_diamond");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 174)
				{
					unk_0x3585BEBEDC67FCC7("emailads_ls_car_meet");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 185)
				{
					unk_0x3585BEBEDC67FCC7("SUM2_EMAIL_LUXURY_AUTOS");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 186)
				{
					unk_0x3585BEBEDC67FCC7("SUM2_EMAIL_PREMIUM_DELUXE");
					unk_0x557F1E2300EF1A3E(1);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_17 == 191)
				{
					unk_0x3585BEBEDC67FCC7("emailads_ghost_exposed");
					unk_0x557F1E2300EF1A3E(1);
				}
				unk_0xE6B753D52F4CA222();
				Global_23352 = 1;
				func_56(Global_20911, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xFE3A52C5B7AE3101(Global_4541819[iLocal_22 /*104*/].f_16);
				if (Global_4541819[iLocal_22 /*104*/].f_29 > 0)
				{
					if (Global_20918)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4541819[iLocal_22 /*104*/].f_30 == 1)
				{
					if (Global_20918)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_29 > 0)
				{
					if (unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/]), "CELL_FINV"))
					{
						if (Global_20918)
						{
							func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_21(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20918)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4541819[iLocal_22 /*104*/].f_24 == 2)
				{
					if (Global_4541819[iLocal_22 /*104*/].f_31 == 1)
					{
						iLocal_24 = 0;
						if (Global_20918)
						{
							func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
					}
					else if (iLocal_24 == 0)
					{
						func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x8744D2E3FC95740E(&Global_8800, 17);
					}
				}
				else if (Global_20918)
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				else
				{
					func_21(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_4543069 = 0;
			}
			else
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_4543069 = 0;
			}
		}
		if (Global_2749862 == 0)
		{
			if (Global_79389)
			{
			}
		}
	}
}

void func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x882AEFD55B8D51FB("CELL_CL01");
			break;
		
		case 2:
			unk_0x882AEFD55B8D51FB("CELL_CL02");
			break;
		
		case 3:
			unk_0x882AEFD55B8D51FB("CELL_CL03");
			break;
		
		case 4:
			unk_0x882AEFD55B8D51FB("CELL_CL04");
			break;
		
		case 5:
			unk_0x882AEFD55B8D51FB("CELL_CL05");
			break;
		
		case 6:
			unk_0x882AEFD55B8D51FB("CELL_CL06");
			break;
		
		case 7:
			unk_0x882AEFD55B8D51FB("CELL_CL07");
			break;
		
		case 8:
			unk_0x882AEFD55B8D51FB("CELL_CL08");
			break;
		
		case 9:
			unk_0x882AEFD55B8D51FB("CELL_CL09");
			break;
	}
	unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iParam0 /*104*/]));
	while (iVar0 < Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_113969.f_14144[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xACF853FB3F6EA7D4(&(Global_2738934.f_1777[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xACF853FB3F6EA7D4(&(Global_1928452[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xACF853FB3F6EA7D4(&(Global_1928493[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xACF853FB3F6EA7D4(&(Global_1928514[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xACF853FB3F6EA7D4(&(Global_1928531[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xACF853FB3F6EA7D4(&(Global_1928544[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xACF853FB3F6EA7D4(&(Global_1928557[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xACF853FB3F6EA7D4(&(Global_1928570[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xCFAD3D478C87321A();
}

void func_38(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_39(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

var func_39(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_40(uParam1));
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_41()
{
	return Global_1574926;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_35)
	{
		unk_0x633E3833FB96BCCB(&Local_32);
	}
	iLocal_35 = 0;
	if (Global_4541819[iLocal_22 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x1B79E937E91F40C3(&(Global_4541819[iLocal_22 /*104*/]), &(Local_33[iVar0 /*6*/])))
			{
				if (func_43(&(Local_33[iVar0 /*6*/])))
				{
					StringCopy(&Local_32, "BAT_CASE_", 64);
					StringIntConCat(&Local_32, Global_1962255, 64);
				}
				else
				{
					Local_32 = { Local_34[iVar0 /*16*/] };
				}
				iLocal_35 = 1;
				unk_0xD0D00ED689D6CA81(&Local_32, 0);
				while (!unk_0x38D063D8CF6D1967(&Local_32))
				{
					system::wait(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(var uParam0)
{
	switch (unk_0x70E57E9927B6BA58(uParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_25)
	{
		if (system::timera() > 50)
		{
			iLocal_25 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_18)
			{
				iLocal_20 = 0;
			}
			func_6();
		}
	}
	if (iLocal_25 == 0)
	{
		if (func_3(2, Global_20906, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
				func_9();
			}
			iLocal_25 = 1;
			system::settimera(0);
		}
		if (func_3(2, Global_20907, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_18)
			{
				iLocal_20 = 0;
			}
			func_6();
			iLocal_25 = 1;
			system::settimera(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(Local_37, Local_36, Global_20890, -90f, 0f, 90f, 350f, 0);
	unk_0xBA290C9390813C9F((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_23320 = 0;
		iLocal_16 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4543363 == 0)
	{
		if (BitTest(Global_8800, 14) && Global_20930.f_1 < 4)
		{
			unk_0x78C4EBB0251847E2(&Var0);
			if (Global_20883[Global_20875 /*3*/].f_1 == Var0.f_1)
			{
				Global_4543363 = 1;
			}
		}
	}
	if (func_49() && Global_4543363 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = unk_0x1DD05E817C89C737();
	}
	fVar1 = func_48((system::to_float((unk_0x1DD05E817C89C737() - iLocal_16)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0,670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = system::sin((fVar1 * 90f));
		}
		Global_20858 = { func_47(Param0, Param1, fVar2) };
		Global_20861 = { func_47(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20858 = { Param1 };
		Global_20861 = { Param3 };
	}
	unk_0x6B7EA0158D00C600(Global_20858);
	unk_0xA0382000AA987093(Global_20861, 0);
	return fVar1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			if (Global_20873 == 0)
			{
				if (Global_8115 != 128)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (Global_22286 != 2)
						{
						}
					}
				}
			}
		}
		if (func_19(14))
		{
			return 0;
		}
		if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x9CA0AFAD60564183())
			{
				if (unk_0x69799E0840A34AFB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D())) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || (unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x834C960822A4683F() || Global_1919896))))
		{
			return 0;
		}
		if (Global_113017)
		{
			return 0;
		}
	}
	if (Global_79389)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x9CA0AFAD60564183()))
	{
		iVar2 = 1;
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if ((((((((unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(uVar3)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("rhino")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4543362 || iVar2 == 1)
	{
		if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0 || Global_113969.f_14054.f_89)
		{
			if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(Local_36, Local_37, -90f, 0f, 90f, Global_20890, 350f, 0);
	unk_0xBA290C9390813C9F((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_23319 = 0;
		func_59();
		iLocal_16 = 0;
	}
}

void func_51()
{
	if (Global_4543069 == 0)
	{
		if (iLocal_21 < 0)
		{
			iLocal_21 = 0;
		}
		func_52(Global_20911, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_56(Global_20911, "DISPLAY_VIEW", 8f, system::to_float(iLocal_21), -1082130432, -1082130432, -1082130432);
		if (Global_20918)
		{
			if (iLocal_18 > 0)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_18 > 0)
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_21(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_21(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_79389)
		{
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_21(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
	}
	else
	{
		iLocal_21 = 0;
	}
}

void func_52(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_16(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_16(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_16(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_16(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_16(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	func_29();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4541819[iVar4 /*104*/].f_18 = -1;
		Global_4541819[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4541819[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4541819[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4541819[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
			{
				func_59();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4541819[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4541819[iVar3 /*104*/].f_99[Global_20930] == 1)
					{
						if (func_55(Global_4541819[iVar3 /*104*/].f_18, Global_4541819[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4541819[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_23 = 0;
							}
							else
							{
								iLocal_23 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_17[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4541819[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4541819[iVar4 /*104*/].f_99[Global_20930] == 1)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(8);
				unk_0x330108B080A2132F(iVar1);
				unk_0x330108B080A2132F(iLocal_23);
				unk_0x557F1E2300EF1A3E(0);
				if (Global_4541819[iVar4 /*104*/].f_17 == 145)
				{
					unk_0x882AEFD55B8D51FB("CELL_2000");
					unk_0x60D332F23943B34F(&(Global_4541819[iVar4 /*104*/].f_50));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_16(&(Global_2169[Global_4541819[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4541819[iVar4 /*104*/] };
				if (func_43(&(Global_4541819[iVar4 /*104*/])))
				{
					iVar6 = func_54(7315, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				unk_0xE6B753D52F4CA222();
				iLocal_18++;
				iLocal_19++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_18;
	iVar8 = 0;
	while (iVar1 < (iLocal_42 + iLocal_18))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_42 && iVar8 == 0)
		{
			unk_0xEC552A25287441B8(iVar2, &Local_43);
			if (iVar7[iVar2] == 0)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(8);
				unk_0x330108B080A2132F(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4541818 == 0)
					{
						unk_0x330108B080A2132F(1);
					}
					else
					{
						unk_0x330108B080A2132F(0);
					}
				}
				else
				{
					unk_0x330108B080A2132F(1);
				}
				unk_0x557F1E2300EF1A3E(0);
				unk_0x882AEFD55B8D51FB("CELL_2000");
				unk_0x60D332F23943B34F(&(Local_43.f_2));
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB("CELL_EMAIL_SUBJ");
				unk_0x60D332F23943B34F(&(Local_43.f_23[0 /*16*/]));
				unk_0x60D332F23943B34F(&(Local_43.f_23[1 /*16*/]));
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
				iVar7[iVar2] = 1;
				iLocal_17[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_18++;
				if (iVar2 == 0)
				{
					uLocal_38 = Local_43.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

var func_54(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_55(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_56(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_57()
{
	switch (unk_0x8608526719A575EE())
	{
		case -1:
			unk_0xED8D0AF79CFA040D("gta5mkt_en");
			break;
		
		case 0:
			unk_0xED8D0AF79CFA040D("gta5mkt_en");
			break;
		
		case 1:
			unk_0xED8D0AF79CFA040D("gta5mkt_fr");
			break;
		
		case 2:
			unk_0xED8D0AF79CFA040D("gta5mkt_ge");
			break;
		
		case 3:
			unk_0xED8D0AF79CFA040D("gta5mkt_it");
			break;
		
		case 4:
			unk_0xED8D0AF79CFA040D("gta5mkt_sp");
			break;
		
		case 5:
			unk_0xED8D0AF79CFA040D("gta5mkt_pt");
			break;
		
		case 6:
			unk_0xED8D0AF79CFA040D("gta5mkt_pl");
			break;
		
		case 7:
			unk_0xED8D0AF79CFA040D("gta5mkt_ru");
			break;
		
		case 8:
			unk_0xED8D0AF79CFA040D("gta5mkt_ko");
			break;
		
		case 9:
			unk_0xED8D0AF79CFA040D("gta5mkt_ch");
			break;
		
		case 10:
			unk_0xED8D0AF79CFA040D("gta5mkt_ja");
			break;
		
		case 11:
			unk_0xED8D0AF79CFA040D("gta5mkt_me");
			break;
		
		case 12:
			unk_0xED8D0AF79CFA040D("gta5mkt_cn");
			break;
	}
	unk_0x9286D4F3BBB483D0(0, 6);
	system::wait(0);
	iLocal_39 = 1;
	bLocal_40 = false;
	while (iLocal_39 && Global_20930.f_1 > 3)
	{
		system::wait(0);
		iLocal_41 = unk_0x80CA040BF6D2FA31();
		if (func_4())
		{
			Global_20930.f_1 = 3;
			iLocal_39 = 0;
			bLocal_40 = false;
		}
		switch (iLocal_41)
		{
			case 3:
				iLocal_39 = 0;
				bLocal_40 = true;
				break;
			
			case 0:
				iLocal_39 = 0;
				bLocal_40 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_39 = 0;
				bLocal_40 = false;
				break;
			
			case 2:
				iLocal_39 = 0;
				bLocal_40 = false;
				break;
		}
	}
	if (bLocal_40)
	{
		iLocal_42 = unk_0x6109CAB6F2F7BB46();
	}
	else
	{
		iLocal_42 = 0;
	}
}

void func_58()
{
	StringCopy(&(Local_33[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_34[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_34[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_34[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_33[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_34[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_33[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_34[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_33[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_34[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_33[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_34[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_34[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_34[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_33[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_34[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_34[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_34[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_33[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_34[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_33[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_34[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_33[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_34[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_33[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_34[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_34[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_34[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_33[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_34[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_33[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_34[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_33[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_34[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_33[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_34[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_33[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_34[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_33[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_34[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_33[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_34[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_33[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_34[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_33[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_34[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_33[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_34[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_33[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_34[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_33[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_34[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_33[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_34[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_33[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_34[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_33[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_34[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_33[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_34[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_33[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_34[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_33[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_34[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_33[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_34[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_33[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_34[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_33[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_34[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_33[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_34[39 /*16*/]), "", 64);
	StringCopy(&(Local_33[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_34[40 /*16*/]), "", 64);
	StringCopy(&(Local_33[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_34[41 /*16*/]), "", 64);
	StringCopy(&(Local_33[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_34[42 /*16*/]), "", 64);
	StringCopy(&(Local_33[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_34[43 /*16*/]), "", 64);
	StringCopy(&(Local_33[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_34[44 /*16*/]), "", 64);
	StringCopy(&(Local_33[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_34[45 /*16*/]), "", 64);
	StringCopy(&(Local_33[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_34[46 /*16*/]), "", 64);
	StringCopy(&(Local_33[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_34[47 /*16*/]), "", 64);
	StringCopy(&(Local_33[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_34[48 /*16*/]), "", 64);
	StringCopy(&(Local_33[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_34[49 /*16*/]), "", 64);
	StringCopy(&(Local_33[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_34[50 /*16*/]), "", 64);
	StringCopy(&(Local_33[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_34[51 /*16*/]), "", 64);
	StringCopy(&(Local_33[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_34[52 /*16*/]), "", 64);
	StringCopy(&(Local_33[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_34[53 /*16*/]), "", 64);
	StringCopy(&(Local_33[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_34[54 /*16*/]), "", 64);
	StringCopy(&(Local_33[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_34[55 /*16*/]), "", 64);
	StringCopy(&(Local_33[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_34[56 /*16*/]), "", 64);
	StringCopy(&(Local_33[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_34[57 /*16*/]), "", 64);
	StringCopy(&(Local_33[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_34[58 /*16*/]), "", 64);
}

void func_59()
{
	if (func_49() == 0)
	{
		unk_0x6B7EA0158D00C600(Global_20883[Global_20875 /*3*/]);
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
	{
		func_60(0);
	}
	if (iLocal_35)
	{
		unk_0x633E3833FB96BCCB(&Local_32);
	}
	Global_23320 = 0;
	Global_23319 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

void func_60(int iParam0)
{
	if (func_65())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_64())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
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
	if (!func_61())
	{
		Global_20930.f_1 = 3;
	}
}

int func_61()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_63(0))
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

int func_63(int iParam0)
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

bool func_64()
{
	return BitTest(Global_1956920, 5);
}

bool func_65()
{
	return BitTest(Global_1956920, 19);
}

