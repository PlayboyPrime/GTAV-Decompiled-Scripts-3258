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
	int iLocal_16[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	fLocal_36 = 0,82f;
	fLocal_37 = 0,42f;
	fLocal_38 = 0f;
	fLocal_39 = 0f;
	unk_0x51CC1333A10C4E09();
	func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_46();
	if (Global_20875 == 0)
	{
		fLocal_41 = 0,75f;
		fLocal_42 = 0,8f;
	}
	else
	{
		fLocal_41 = 0,65f;
		fLocal_42 = 0,77f;
	}
	Global_9605[Global_20930 /*2811*/][2 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_6;
	Global_9605[Global_20930 /*2811*/][4 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_79389)
		{
			Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 = func_45(1199, -1);
			Global_9605[Global_20930 /*2811*/][2 /*281*/].f_259 = func_45(2030, -1);
			Global_9605[Global_20930 /*2811*/][4 /*281*/].f_259 = func_45(2029, -1);
		}
		else if (unk_0x1B79E937E91F40C3(&(Global_113969.f_14054[Global_20930 /*20*/].f_11), &(Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_79389)
	{
		Global_113969.f_14054[3 /*20*/].f_10 = func_45(1198, -1);
	}
	Global_9605[Global_20930 /*2811*/][3 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_10;
	func_44();
	if (Global_79389)
	{
		Global_9605[3 /*2811*/][0 /*281*/] = 190;
		Global_9605[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_9605[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9605[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_9605[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_9605[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_9605[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_45(2092, -1) == 0)
		{
			Global_9605[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_9605[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_34();
	while (true)
	{
		system::wait(0);
		if (iLocal_28)
		{
			if (system::timerb() > 3500)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
				}
				iLocal_28 = 0;
			}
		}
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					func_29();
					func_27();
					break;
				
				case 8:
					if (bLocal_34 || iLocal_35)
					{
						if (bLocal_34)
						{
							bLocal_34 = false;
							system::settimerb(0);
							Global_113969.f_14054.f_82 = 1;
							iLocal_35 = 1;
						}
						else if (system::timerb() > 7500)
						{
							iLocal_35 = 0;
							unk_0x428C32CC68809A35(1);
						}
					}
					else
					{
						func_29();
						func_12();
						if (iLocal_31)
						{
							func_11();
						}
						if (func_10(2, Global_20898, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
							}
							iLocal_31 = 0;
							func_9();
							Global_20908 = 1;
							func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_34();
							if (Global_20930.f_1 > 3)
							{
								Global_20930.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_20932 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
	}
	if (bLocal_34)
	{
		unk_0x428C32CC68809A35(1);
	}
	if (Global_113969.f_14054.f_83 == 0 || Global_113969.f_14054.f_82 == 0)
	{
		func_3();
	}
	unk_0x98E393364463951A(0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_3()
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
}

int func_4(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_44042);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_46();
	Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
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

void func_11()
{
	int iVar0;
	
	iLocal_32 = unk_0x1DD05E817C89C737();
	iVar0 = (iLocal_32 - iLocal_33);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x97A041099E92C69F(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_21 == 1)
	{
		if (iLocal_30)
		{
			iLocal_32 = unk_0x1DD05E817C89C737();
			if ((iLocal_32 - iLocal_33) > 1000)
			{
				iLocal_29 = 1;
				iLocal_30 = 0;
			}
		}
		if (unk_0xAE231F549813BBDF(2))
		{
			if (unk_0x875A214D5EBCA509(2, 180))
			{
				iLocal_43 = 1;
				iLocal_44 = 0;
			}
			if (unk_0x875A214D5EBCA509(2, 181))
			{
				iLocal_43 = 0;
				iLocal_44 = 1;
			}
		}
		if ((((func_10(2, Global_20906, 0) || func_10(2, Global_20907, 0)) || iLocal_29) || iLocal_43 == 1) || iLocal_44 == 1)
		{
			iLocal_43 = 0;
			iLocal_44 = 0;
			iLocal_29 = 0;
			iLocal_30 = 0;
			system::settimerb(0);
			iLocal_28 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_19 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_19))
			{
				system::wait(0);
			}
			iLocal_25 = iLocal_16[unk_0x5DEF122A58D4F685(uLocal_19)];
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
				system::wait(100);
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (!unk_0x129DE7ED6456C4CA(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x1B79E937E91F40C3(&(Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[iLocal_25 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x1BC60757AC20ACCF(&(Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[iLocal_25 /*6*/]), unk_0x4A8C381C258A124D(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_20908 == 0)
	{
		if (func_10(2, Global_20899, 0))
		{
			func_24();
			Global_20908 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_19 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_19))
			{
				system::wait(0);
			}
			iLocal_24 = unk_0x5DEF122A58D4F685(uLocal_19);
			if (iLocal_24 < 0)
			{
				iLocal_24 = 0;
			}
			Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[iLocal_24];
			if (iLocal_21 == 2)
			{
				iVar0 = Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259;
				Global_113969.f_14054[Global_20930 /*20*/].f_6 = Global_9605[Global_20930 /*2811*/][2 /*281*/].f_260[iVar0];
				func_47(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_79389)
				{
					Global_4543360 = Global_9605[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_9605[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_47(Global_20911, "SET_THEME", system::to_float(Global_4543360), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_47(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_23), system::to_float(23), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_23] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_24), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_24] /*4*/]), 0, 0, 0, 0);
				iLocal_23 = iLocal_24;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, system::to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_21 == 4)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_9 = Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259;
				if (Global_79389)
				{
					Global_4543361 = Global_9605[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_9605[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_4543361 == 0)
					{
						Var2 = { func_17(unk_0x259BE71D8A81D4FA()) };
						iVar3 = 0;
						if (unk_0x97DD063A9C6137F8(0) == 0)
						{
						}
						if ((unk_0xE582BF3EDDBB1A68(&Var2) && unk_0x97DD063A9C6137F8(0)) && Global_4543364 == 0)
						{
							system::settimera(0);
							while (!unk_0xE460920F3D75C34D(&Var2, &uVar1) && system::timera() < 3000)
							{
								system::wait(0);
								if (system::timera() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x882AEFD55B8D51FB("CELL_2000");
								unk_0x60D332F23943B34F(&uVar1);
								unk_0xCFAD3D478C87321A();
								unk_0xE6B753D52F4CA222();
							}
						}
						else
						{
							func_47(Global_20911, "SET_BACKGROUND_IMAGE", system::to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_47(Global_20911, "SET_BACKGROUND_IMAGE", system::to_float(Global_4543361), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_47(Global_20911, "SET_BACKGROUND_IMAGE", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_23), system::to_float(23), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_23] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_24), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_24] /*4*/]), 0, 0, 0, 0);
				iLocal_23 = iLocal_24;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, system::to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_21 == 1)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_11 = { Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_79389)
				{
					func_20(1199, Global_9605[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_23), system::to_float(18), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_23] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_24), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_24] /*4*/]), 0, 0, 0, 0);
				iLocal_23 = iLocal_24;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, system::to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_21 == 3)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_10 = Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259;
				if (Global_79389)
				{
					func_20(1198, Global_113969.f_14054[3 /*20*/].f_10, -1, 1);
				}
				if (Global_113969.f_14054[Global_20930 /*20*/].f_10 == 1)
				{
					iLocal_31 = 1;
					iLocal_33 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_31 = 0;
				}
			}
			if (iLocal_21 == 0)
			{
				if (Global_79389 == 1)
				{
					Global_9605[3 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[iLocal_24];
					func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_23), system::to_float(19), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_23] /*4*/]), 0, 0, 0, 0);
					func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_24), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iLocal_16[iLocal_24] /*4*/]), 0, 0, 0, 0);
					iLocal_23 = iLocal_24;
					func_47(Global_20911, "DISPLAY_VIEW", 22f, system::to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_9605[3 /*2811*/][iLocal_21 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_9605[0 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[iLocal_24];
					Global_9605[1 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[iLocal_24];
					Global_9605[2 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[iLocal_24];
					if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_44042 == 15)
						{
							if (Global_113969.f_14054.f_82 == 0)
							{
								unk_0x428C32CC68809A35(1);
								func_16("CELL_7050");
								if (fLocal_41 == fLocal_42)
								{
								}
								bLocal_34 = true;
							}
							else
							{
								func_47(Global_20911, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 25);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
								if (Global_113969.f_14054.f_83 == 0)
								{
									unk_0x428C32CC68809A35(1);
									func_15("CELL_7051", -1);
									Global_113969.f_14054.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_47(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x8744D2E3FC95740E(&Global_8800, 25);
						unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
					}
				}
			}
			func_13(Global_20911, "SET_HEADER", &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_14(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_14(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_19()
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

void func_20(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_21(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

var func_21(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_22(uParam1));
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

var func_23()
{
	return Global_1574926;
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
	if (func_26())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_26()
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

void func_27()
{
	if (Global_20908 == 0)
	{
		if (func_10(2, Global_20899, 0))
		{
			func_24();
			Global_20908 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_19 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_19))
			{
				system::wait(0);
			}
			iLocal_22 = unk_0x5DEF122A58D4F685(uLocal_19);
			iLocal_21 = iLocal_16[iLocal_22];
			switch (iLocal_21)
			{
				case 0:
					if (Global_79389 == 0)
					{
						if (Global_44042 == 15)
						{
							if (Global_113969.f_14054.f_82 == 0)
							{
								unk_0x428C32CC68809A35(1);
								func_16("CELL_7050");
								if (fLocal_41 == fLocal_42)
								{
								}
								bLocal_34 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 8;
			}
			func_28();
			iLocal_30 = 1;
			iLocal_33 = unk_0x1DD05E817C89C737();
		}
	}
}

void func_28()
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_17 = 0;
	iVar1 = 0;
	if (Global_79389)
	{
		StringCopy(&(Global_9605[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0x259BE71D8A81D4FA()) };
		if (!unk_0xE582BF3EDDBB1A68(&Var2))
		{
			StringCopy(&(Global_9605[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar3] < Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_16[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (unk_0x1B79E937E91F40C3(&(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 /*4*/]), &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_26 = iVar1;
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			if ((iLocal_21 == 1 || iLocal_21 == 4) || iLocal_21 == 2)
			{
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_23 = iVar1;
			}
			if (iLocal_21 == 0 && Global_79389 == 1)
			{
				func_18(Global_20911, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(48), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_23 = iVar1;
			}
		}
		if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_17++;
		}
		iVar1++;
	}
	func_47(Global_20911, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20918)
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_29()
{
	if (iLocal_40)
	{
		if (system::timera() > 50)
		{
			iLocal_40 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
			func_32();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
			func_30();
		}
	}
	if (iLocal_40 == 0)
	{
		if (func_10(2, Global_20906, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
			func_32();
			iLocal_40 = 1;
			system::settimera(0);
		}
		if (func_10(2, Global_20907, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
			func_30();
			iLocal_40 = 1;
			system::settimera(0);
		}
	}
}

void func_30()
{
	func_47(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_31();
}

void func_31()
{
	if (func_26())
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

void func_32()
{
	func_47(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_33();
}

void func_33()
{
	if (func_26())
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

void func_34()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_17 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_9605[Global_20930 /*2811*/][iVar3 /*281*/] = 5000;
		if (unk_0x38640D2193CB547F(2) == 0)
		{
			Global_9605[Global_20930 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_9605[Global_20930 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][iVar2 /*281*/] < Global_9605[Global_20930 /*2811*/][iVar3 /*281*/])
					{
						if (Global_79389)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_43(iVar2, iVar3);
								func_18(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_27), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_43(iVar2, iVar3);
								func_18(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_27), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_35() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_43(iVar2, iVar3);
								func_18(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_27), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_43(iVar2, iVar3);
							func_18(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_27), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_16[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_9605[Global_20930 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_17++;
		}
		iVar1++;
	}
	func_47(Global_20911, "DISPLAY_VIEW", 13f, system::to_float(iLocal_22), -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_20918)
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

int func_35()
{
	if (Global_79389)
	{
		Global_20930 = 3;
	}
	else
	{
		Global_20930 = func_36();
	}
	if (Global_20930 > 3)
	{
		Global_20930 = 3;
	}
	return Global_113969.f_14054[Global_20930 /*20*/].f_7;
}

var func_36()
{
	func_37();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_41(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_40(unk_0x4A8C381C258A124D());
			if (func_39(iVar0) && (!func_38(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_39(Global_113969.f_2366.f_539.f_4321))
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

bool func_38(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_79389)
			{
				iLocal_27 = 19;
			}
			else if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_27 = 26;
			}
			else
			{
				iLocal_27 = 25;
			}
			break;
		
		case 3:
			if (Global_9605[Global_20930 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_27 = 20;
			}
			else
			{
				iLocal_27 = 21;
			}
			break;
		
		default:
			iLocal_27 = Global_9605[Global_20930 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_44()
{
	if (Global_44042 != 15)
	{
		func_46();
		Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_45(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_21(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_46()
{
	if (func_38(14))
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
		Global_20930 = func_36();
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

void func_47(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

