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
	int iLocal_17[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<6> Local_47[180];
	struct<6> Local_48[180];
	struct<8> Local_49[19];
	int iLocal_50 = 0;
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
		func_62();
	}
	func_46();
	Global_23352 = 0;
	Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
	Global_21144 = 0;
	func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_42();
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 7;
	}
	iLocal_28 = unk_0x1DD05E817C89C737();
	Global_20934 = 1;
	while (true)
	{
		system::wait(0);
		if (iLocal_27 == 0)
		{
			iLocal_29 = unk_0x1DD05E817C89C737();
			if ((iLocal_29 - iLocal_28) > 500)
			{
				iLocal_27 = 1;
			}
		}
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (Global_23352 == 0)
					{
						if (Global_2749862 == 0)
						{
							func_37();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_23352 == 1)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_23352 == 0)
			{
				if (func_4())
				{
					func_62();
				}
			}
			else if (func_3(2, Global_20898, 0) || BitTest(Global_8801, 12))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/]), "CELL_FINV"))
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
						func_62();
					}
					func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_42();
					if (Global_113969.f_14144[iLocal_21 /*104*/].f_29 > 0)
					{
						if (Global_113969.f_14144[iLocal_21 /*104*/].f_31 == 1)
						{
							Global_113969.f_14144[iLocal_21 /*104*/].f_29 = 4;
							Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 1;
						}
						else
						{
							Global_113969.f_14144[iLocal_21 /*104*/].f_29 = 4;
							Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			func_62();
		}
		if (func_1())
		{
			func_62();
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
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
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
	func_6();
}

void func_6()
{
	if (Global_113969.f_14144[iLocal_21 /*104*/].f_24 == 1)
	{
		if (Global_20908 == 0)
		{
			if (unk_0x875A214D5EBCA509(2, Global_20901))
			{
				func_2();
				Global_20908 = 1;
				func_25();
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_27 == 1)
				{
					Global_113969.f_14144[iLocal_21 /*104*/].f_99[0] = 0;
					Global_113969.f_14144[iLocal_21 /*104*/].f_99[1] = 0;
					Global_113969.f_14144[iLocal_21 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_113969.f_14144[iLocal_21 /*104*/].f_99[Global_20930] = 0;
				}
				if (func_24(iLocal_21))
				{
				}
				else
				{
					Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 0;
					Global_113969.f_14144[iLocal_21 /*104*/].f_28 = 0;
				}
				unk_0xFE3A52C5B7AE3101(Global_113969.f_14144[iLocal_21 /*104*/].f_16);
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_19 > 0)
				{
					iLocal_19 = (iLocal_19 - 1);
				}
				func_42();
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
			if (iLocal_23 == 1)
			{
				if (Global_20930.f_1 > 3)
				{
					StringCopy(&Global_76481, unk_0xFACCDE46E24AD056(&Global_23327), 64);
					Global_76612 = 7;
					unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 10);
					Global_20930.f_1 = 6;
				}
				func_62();
			}
		}
	}
	if (Global_113969.f_14144[iLocal_21 /*104*/].f_31 == 1)
	{
		if (Global_20908 == 0)
		{
			if (func_3(2, Global_20902, 0))
			{
				func_21();
				Global_20908 = 1;
				Global_113969.f_14144[iLocal_21 /*104*/].f_29 = 2;
				Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 1;
				Global_113969.f_14144[iLocal_21 /*104*/].f_31 = 0;
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
		}
	}
	if (Global_20908 == 0 && iLocal_27 == 1)
	{
		if (func_3(2, Global_20899, 0))
		{
			Global_20908 = 1;
			if (Global_113969.f_14144[iLocal_21 /*104*/].f_29 > 0)
			{
				func_21();
				Global_113969.f_14144[iLocal_21 /*104*/].f_29 = 3;
				Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 1;
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
			else if (Global_113969.f_14144[iLocal_21 /*104*/].f_30 == 1)
			{
				func_21();
				Global_8115 = 144;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 10;
					if (func_20() == 0)
					{
						func_18();
					}
				}
				func_17("appContacts");
				Global_20928 = system::start_new_script("appContacts", 4000);
				unk_0xFD49725F3FE7EE13("appContacts");
				Global_8115 = Global_113969.f_14144[iLocal_21 /*104*/].f_17;
				if (func_16(Global_8115, Global_20930) == 0)
				{
					func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_211", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_7();
				func_62();
			}
		}
	}
}

void func_7()
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
			func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_12(Global_9405);
			if (Global_9405 == 1)
			{
				func_45(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_45(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_45(Global_20911, "DISPLAY_VIEW", 4f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
				func_45(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_11();
				func_45(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_16(Global_8115, Global_20930) == 0)
				{
					func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_45(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
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
					if (func_16(Global_8115, Global_20930) == 0)
					{
						func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", &cVar1, "CELL_195", 0);
					}
					else
					{
						func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_15(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		func_9();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_79389)
	{
		func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
	}
}

void func_10(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_11()
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

void func_12(int iParam0)
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
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_13(14))
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
								func_10(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_15(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_13(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_15(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

int func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_17(char* sParam0)
{
	unk_0x97A5024CE91641F1(sParam0);
	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		system::wait(0);
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_19() && unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
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

int func_19()
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

int func_20()
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
		if (func_13(14))
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

void func_21()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_22();
	}
}

void func_22()
{
	if (func_23())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_23()
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

int func_24(int iParam0)
{
	if ((Global_113969.f_14144[iParam0 /*104*/].f_99[0] == 1 || Global_113969.f_14144[iParam0 /*104*/].f_99[1] == 1) || Global_113969.f_14144[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_25()
{
	if (func_13(14))
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
		Global_20930 = func_26();
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

var func_26()
{
	func_27();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_27()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_30(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_29(unk_0x4A8C381C258A124D());
			if (func_28(iVar0) && (!func_13(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_28(Global_113969.f_2366.f_539.f_4321))
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

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_32()
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_20908 == 0)
	{
		if ((func_3(2, Global_20899, 0) || Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1) || Global_23346 == 1)
		{
			if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 0 && Global_23346 == 0)
			{
				func_21();
			}
			Global_20908 = 1;
			iLocal_27 = 0;
			iLocal_21 = iLocal_17[iLocal_19];
			if (Global_113969.f_14144[iLocal_21 /*104*/].f_24 != 0)
			{
				if (Global_20930.f_1 > 3)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x8744D2E3FC95740E(&Global_8800, 17);
					Global_20930.f_1 = 8;
				}
				if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1 || Global_23346 == 1)
				{
					iLocal_21 = iLocal_17[0];
					iLocal_20 = 0;
					if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
					{
					}
					Global_23346 = 0;
				}
				else
				{
					system::settimerb(0);
					iLocal_25 = 0;
					unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
					uLocal_30 = unk_0x6CA3F2B87712B6A4();
					while (!unk_0xA6F779AA284EB20E(uLocal_30) && iLocal_25 == 0)
					{
						system::wait(0);
						if (system::timerb() > 2000)
						{
							iLocal_25 = 1;
						}
					}
					if (iLocal_25 == 1)
					{
						iLocal_26 = 0;
					}
					else
					{
						iLocal_26 = unk_0x5DEF122A58D4F685(uLocal_30);
					}
					if (iLocal_26 < 0)
					{
						iLocal_26 = 0;
					}
					iLocal_21 = iLocal_17[iLocal_26];
					iLocal_20 = iLocal_26;
				}
				Global_113969.f_14144[iLocal_21 /*104*/].f_28 = 1;
				iLocal_23 = 0;
				StringCopy(&Global_23327, "NO_HYPERLINK", 64);
				Var0 = { Global_113969.f_14144[iLocal_21 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x6BA487C862DB8DDF(&Var0))
				{
					Global_23327 = { Var0 };
					iLocal_23 = 1;
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
					Global_113969.f_14144[iLocal_21 /*104*/].f_26 = 1;
					Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 2;
				}
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_26 == 0)
				{
					Global_113969.f_14144[iLocal_21 /*104*/].f_24 = 1;
				}
				func_36();
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(7);
				unk_0x330108B080A2132F(0);
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_17 == 145)
				{
					unk_0x882AEFD55B8D51FB("CELL_2000");
					unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_50));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_10(&(Global_2169[Global_113969.f_14144[iLocal_21 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113969.f_14144[iLocal_21 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113969.f_14144[iLocal_21 /*104*/]));
						break;
					
					case 1:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iLocal_21 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_33));
						if (Global_113969.f_14144[iLocal_21 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iLocal_21 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 2:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iLocal_21 /*104*/]));
						unk_0x511D14ED2DA887E1(Global_113969.f_14144[iLocal_21 /*104*/].f_49);
						unk_0xCFAD3D478C87321A();
						break;
					
					case 3:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iLocal_21 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_33));
						unk_0x511D14ED2DA887E1(Global_113969.f_14144[iLocal_21 /*104*/].f_49);
						if (Global_113969.f_14144[iLocal_21 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iLocal_21 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iLocal_21 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 4:
						func_35(iLocal_21);
						break;
					
					case 5:
						func_35(iLocal_21);
						break;
					
					case 6:
						func_35(iLocal_21);
						break;
					
					case 7:
						func_35(iLocal_21);
						break;
					
					case 8:
						func_35(iLocal_21);
						break;
					
					case 9:
						func_35(iLocal_21);
						break;
					
					case 10:
						func_35(iLocal_21);
						break;
					
					case 11:
						func_35(iLocal_21);
						break;
					
					case 12:
						func_34(iLocal_21);
						break;
				}
				if (Global_23355[iLocal_21] == 0)
				{
					if (Global_113969.f_14144[iLocal_21 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_2169[Global_113969.f_14144[iLocal_21 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (unk_0xCF3FA9D6B87D2277(Global_23355[iLocal_21]))
					{
						if (unk_0x445B6F53EA9E6A6F(Global_23355[iLocal_21]))
						{
							sVar1 = unk_0x008C0EB38E4459EE(Global_23355[iLocal_21]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					unk_0x882AEFD55B8D51FB("CELL_2000");
					unk_0x60D332F23943B34F(sVar1);
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
				Global_23352 = 1;
				func_45(Global_20911, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_33(Global_20911, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0xFE3A52C5B7AE3101(Global_113969.f_14144[iLocal_21 /*104*/].f_16);
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_29 > 0)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_113969.f_14144[iLocal_21 /*104*/].f_30 == 1)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_29 > 0)
				{
					if (unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/]), "CELL_FINV"))
					{
						if (Global_20918)
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113969.f_14144[iLocal_21 /*104*/].f_24 == 2)
				{
					if (Global_113969.f_14144[iLocal_21 /*104*/].f_31 == 1)
					{
						iLocal_23 = 0;
						if (Global_20918)
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
					}
					else if (iLocal_23 == 0)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x8744D2E3FC95740E(&Global_8800, 17);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_113969.f_14054[Global_20930 /*20*/].f_17 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1 || Global_23346 == 1)
				{
					if (Global_23346)
					{
					}
					iVar2 = 1;
				}
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_113969.f_14054[Global_20930 /*20*/].f_17 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_20930.f_1 = 3;
				}
			}
		}
		if (Global_2749862 == 0)
		{
			if (Global_79389)
			{
				unk_0x4CC1CF98851922CE(0, Global_20902);
				if (func_3(2, Global_20902, 0))
				{
					Global_20908 = 1;
					Global_2749862 = 1;
				}
			}
		}
	}
}

void func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_10(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_10(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_10(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_10(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_10(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L01");
			break;
		
		case 2:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L02");
			break;
		
		case 3:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L03");
			break;
		
		case 4:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L04");
			break;
		
		case 5:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L05");
			break;
		
		case 6:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L06");
			break;
		
		case 7:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L07");
			break;
		
		case 8:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L08");
			break;
		
		case 9:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L09");
			break;
		
		case 10:
			unk_0x882AEFD55B8D51FB("TUN_CBL_L10");
			break;
	}
	while (iVar0 < Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_113969.f_14144[iParam0 /*104*/].f_32)
		{
			case 12:
				unk_0xACF853FB3F6EA7D4(&(Global_1928583[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xCFAD3D478C87321A();
}

void func_35(int iParam0)
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

void func_36()
{
	int iVar0;
	
	if (iLocal_50)
	{
		unk_0x633E3833FB96BCCB(&uLocal_31);
	}
	iLocal_50 = 0;
	if (Global_113969.f_14144[iLocal_21 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 180)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Local_47[iVar0 /*6*/])) && unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iLocal_21 /*104*/]), &(Local_47[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_31, {Local_49[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_31, {Local_48[iVar0 /*6*/]}, 16);
				}
				iLocal_50 = 1;
				unk_0xD0D00ED689D6CA81(&uLocal_31, 0);
				while (!unk_0x38D063D8CF6D1967(&uLocal_31))
				{
					system::wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (iLocal_24)
	{
		if (system::timera() > 50)
		{
			iLocal_24 = 0;
		}
	}
	if (iLocal_24 == 0)
	{
		if (func_3(2, Global_20906, 0) || unk_0x875A214D5EBCA509(2, 181))
		{
			if (iLocal_19 > 0)
			{
				iLocal_19 = (iLocal_19 - 1);
			}
			func_40();
			iLocal_24 = 1;
			system::settimera(0);
		}
		if (func_3(2, Global_20907, 0) || unk_0x875A214D5EBCA509(2, 180))
		{
			iLocal_19++;
			if (iLocal_19 == iLocal_18)
			{
				iLocal_19 = 0;
			}
			func_38();
			iLocal_24 = 1;
			system::settimera(0);
		}
	}
}

void func_38()
{
	func_45(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_39();
}

void func_39()
{
	if (func_23())
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

void func_40()
{
	func_45(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_41();
}

void func_41()
{
	if (func_23())
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

void func_42()
{
	if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 0)
	{
		if (iLocal_20 < 0)
		{
			iLocal_20 = 0;
		}
		func_45(Global_20911, "DISPLAY_VIEW", 6f, system::to_float(iLocal_20), -1082130432, -1082130432, -1082130432);
		func_33(Global_20911, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_20918)
		{
			if (iLocal_18 > 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_18 > 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_79389)
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
	}
	else
	{
		iLocal_20 = 0;
	}
}

void func_43()
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_18 = 0;
	func_25();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			func_62();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_113969.f_14144[iVar3 /*104*/].f_18 = -1;
		Global_113969.f_14144[iVar3 /*104*/].f_18.f_1 = 0;
		Global_113969.f_14144[iVar3 /*104*/].f_18.f_2 = 0;
		Global_113969.f_14144[iVar3 /*104*/].f_18.f_3 = 0;
		Global_113969.f_14144[iVar3 /*104*/].f_18.f_5 = 0;
		while (iVar2 < 35)
		{
			if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
			{
				func_62();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_113969.f_14144[iVar2 /*104*/].f_24 != 0)
				{
					if (Global_113969.f_14144[iVar2 /*104*/].f_99[Global_20930] == 1)
					{
						if (func_44(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[iVar3 /*104*/].f_18))
						{
							iVar3 = iVar2;
							if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
							{
								iLocal_22 = 33;
							}
							else
							{
								iLocal_22 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_17[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
		{
			if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(6);
				unk_0x330108B080A2132F(iVar1);
				unk_0x330108B080A2132F(Global_113969.f_14144[iVar3 /*104*/].f_18.f_2);
				unk_0x330108B080A2132F(Global_113969.f_14144[iVar3 /*104*/].f_18.f_1);
				unk_0x330108B080A2132F(iLocal_22);
				if (Global_113969.f_14144[iVar3 /*104*/].f_17 == 145)
				{
					unk_0x882AEFD55B8D51FB("CELL_CONDFNH");
					unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_50));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_10(&(Global_2169[Global_113969.f_14144[iVar3 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113969.f_14144[iVar3 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113969.f_14144[iVar3 /*104*/]));
						break;
					
					case 1:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iVar3 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_33));
						if (Global_113969.f_14144[iVar3 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iVar3 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iVar3 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iVar3 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iVar3 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 2:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iVar3 /*104*/]));
						unk_0x511D14ED2DA887E1(Global_113969.f_14144[iVar3 /*104*/].f_49);
						unk_0xCFAD3D478C87321A();
						break;
					
					case 3:
						unk_0x882AEFD55B8D51FB(&(Global_113969.f_14144[iVar3 /*104*/]));
						unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_33));
						unk_0x511D14ED2DA887E1(Global_113969.f_14144[iVar3 /*104*/].f_49);
						if (Global_113969.f_14144[iVar3 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_67), "NULL"))
						{
							unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iVar3 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_67), "NULL")) && !unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar3 /*104*/].f_83), "NULL"))
						{
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iVar3 /*104*/].f_67)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_67));
							}
							if (unk_0x6BA487C862DB8DDF(&(Global_113969.f_14144[iVar3 /*104*/].f_83)))
							{
								unk_0xACF853FB3F6EA7D4(&(Global_113969.f_14144[iVar3 /*104*/].f_83));
							}
							else
							{
								unk_0x60D332F23943B34F(&(Global_113969.f_14144[iVar3 /*104*/].f_83));
							}
						}
						unk_0xCFAD3D478C87321A();
						break;
					
					case 4:
						func_35(iVar3);
						break;
					
					case 5:
						func_35(iVar3);
						break;
					
					case 6:
						func_35(iVar3);
						break;
					
					case 7:
						func_35(iVar3);
						break;
					
					case 8:
						func_35(iVar3);
						break;
					
					case 9:
						func_35(iVar3);
						break;
					
					case 10:
						func_35(iVar3);
						break;
					
					case 11:
						func_35(iVar3);
						break;
					
					case 12:
						func_34(iVar3);
						break;
				}
				unk_0xE6B753D52F4CA222();
			}
		}
		if (Global_113969.f_14144[iVar1 /*104*/].f_24 != 0)
		{
			if (Global_113969.f_14144[iVar1 /*104*/].f_99[Global_20930] == 1)
			{
				iLocal_18++;
			}
		}
		iVar1++;
	}
}

int func_44(struct<6> Param0, struct<6> Param1)
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_46()
{
	StringCopy(&(Local_47[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_49[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_47[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_49[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_47[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_49[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_47[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_49[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_47[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_49[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_47[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_49[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_47[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_49[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_47[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_49[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_47[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_49[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_47[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_49[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_47[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_49[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_47[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_49[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_47[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_49[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_47[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_49[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_47[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_49[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_47[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_49[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_47[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_49[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_47[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_49[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_47[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_49[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_47[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_48[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_47[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_48[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_47[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_48[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_47[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_48[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_47[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_48[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_47[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_48[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_47[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_48[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_47[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_48[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_47[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_48[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_47[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_48[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_47[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_48[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_47[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_48[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_47[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_48[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_47[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_48[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_47[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_48[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_47[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_48[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_47[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_48[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_47[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_48[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_47[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_48[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_47[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_48[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_47[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_48[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_47[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_48[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_47[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_48[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_47[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_48[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_47[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_48[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_47[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_48[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_47[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_48[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_47[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_48[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_47[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_48[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_47[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_48[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_47[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_48[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_47[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_48[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_47[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_48[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_47[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_48[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_47[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_48[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_47[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_48[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_47[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_48[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_47[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_48[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_47[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_48[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_47[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_48[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_47[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_48[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_47[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_48[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_47[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_48[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_47[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_48[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_47[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_48[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_47[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_48[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_47[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_48[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_47[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_48[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_47[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_48[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_47[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_48[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_47[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_48[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_47[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_48[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_47[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_48[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_47[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_48[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_47[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_48[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_47[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_48[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_47[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_48[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_47[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_48[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_47[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_48[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_47[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_48[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_47[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_48[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_47[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_48[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_47[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_48[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_47[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_48[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_47[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_48[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_47[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_48[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_47[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_48[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_47[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_48[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_47[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_48[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_47[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_48[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_47[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_48[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_47[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_48[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_47[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_48[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_47[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_48[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_47[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_48[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_47[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_48[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_47[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_48[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_47[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_48[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_47[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_48[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_47[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_48[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_47[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_48[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_47[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_48[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_47[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_48[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_47[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_48[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_47[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_48[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_47[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_48[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_47[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_48[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_47[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_48[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_47[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_48[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_47[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_48[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_47[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_48[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_47[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_48[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_47[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_48[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_47[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_48[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_47[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_48[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_47[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_48[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_47[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_48[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_47[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_48[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_47[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_48[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_47[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_48[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_47[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_48[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_47[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_48[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_47[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_48[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_47[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_48[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_47[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_48[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_47[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_48[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_47[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_48[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_47[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_48[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_47[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_48[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_47[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_48[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_47[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_48[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_47[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_48[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_47[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_48[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_47[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_48[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_47[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_48[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_47[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_48[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_47[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_48[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_47[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_48[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_47[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_48[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_47[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_48[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_47[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_48[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_47[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_48[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_47[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_48[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_47[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_48[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_47[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_48[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_47[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_48[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_47[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_48[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_47[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_48[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_47[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_48[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_47[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_48[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_47[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_48[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_47[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_48[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_47[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_48[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_47[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_48[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_47[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_48[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_47[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_48[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_47[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_48[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_47[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_48[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_47[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_48[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_47[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_48[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_47[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_48[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_47[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_48[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_47[161 /*6*/]), "XM22FLOW_TXT_0", 24);
	StringCopy(&(Local_48[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	StringCopy(&(Local_47[162 /*6*/]), "CHM6_PMSG_TR", 24);
	StringCopy(&(Local_48[162 /*6*/]), "UPDT1_2023_TEXT_LSA6_1", 24);
	StringCopy(&(Local_47[163 /*6*/]), "CBR2_PMSG_P1", 24);
	StringCopy(&(Local_48[163 /*6*/]), "UPDT2_2023_TEXT_IMG_2", 24);
	StringCopy(&(Local_47[164 /*6*/]), "CBR2_PMSG_P2", 24);
	StringCopy(&(Local_48[164 /*6*/]), "UPDT2_2023_TEXT_IMG_3", 24);
	StringCopy(&(Local_47[165 /*6*/]), "CBR2_PMSG_P3", 24);
	StringCopy(&(Local_48[165 /*6*/]), "UPDT2_2023_TEXT_IMG_4", 24);
	StringCopy(&(Local_47[166 /*6*/]), "CBR2_PMSG_TB", 24);
	StringCopy(&(Local_48[166 /*6*/]), "UPDT2_2023_TEXT_IMG_5", 24);
	StringCopy(&(Local_47[167 /*6*/]), "CBR3_PMSG", 24);
	StringCopy(&(Local_48[167 /*6*/]), "UPDT2_2023_TEXT_IMG_6", 24);
	StringCopy(&(Local_47[168 /*6*/]), "CBR4_PMSG", 24);
	StringCopy(&(Local_48[168 /*6*/]), "UPDT2_2023_TEXT_IMG_7", 24);
	StringCopy(&(Local_47[169 /*6*/]), "BTY_HVTM_CEO", 24);
	StringCopy(&(Local_48[169 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[170 /*6*/]), "BTY_HVTM_RESCUE", 24);
	StringCopy(&(Local_48[170 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[171 /*6*/]), "BTY_HVTM_AMBUSH", 24);
	StringCopy(&(Local_48[171 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[172 /*6*/]), "BTY_HVTM_HEAVY", 24);
	StringCopy(&(Local_48[172 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[173 /*6*/]), "BTY_HVTM_MOVIE", 24);
	StringCopy(&(Local_48[173 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[174 /*6*/]), "BTY_HVTM_LFINV", 24);
	StringCopy(&(Local_48[174 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_47[175 /*6*/]), "BTY_HVTM_TOWER", 24);
	StringCopy(&(Local_48[175 /*6*/]), "UPDT1_24_TEXT_TOWER", 24);
	if (func_61(unk_0x259BE71D8A81D4FA()) == 19)
	{
		StringCopy(&(Local_47[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_48[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_48[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_48[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_48[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_48[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_48[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_48[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_48[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_48[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_48[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_47[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_48[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_48[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_48[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_48[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_48[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_48[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_48[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_48[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_48[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_48[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_47[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_48[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_48[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_48[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_48[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_48[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_48[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_48[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_48[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_48[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_47[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_48[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_60(unk_0x259BE71D8A81D4FA()) == 14)
	{
		StringCopy(&(Local_47[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_48[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_48[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_48[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_48[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_48[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_48[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_47[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_48[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_47[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_48[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_48[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_47[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_48[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_48[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_48[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_48[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_48[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_48[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_48[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_48[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_48[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_47[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_48[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_47[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_48[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_48[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_47[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_48[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_48[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_47[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_48[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_59(unk_0x259BE71D8A81D4FA()) == 30)
	{
		StringCopy(&(Local_47[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_48[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_47[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_48[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_59(unk_0x259BE71D8A81D4FA()) == 32)
	{
		StringCopy(&(Local_47[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_48[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_47[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_48[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_47[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_48[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_47[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_48[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_58(unk_0x259BE71D8A81D4FA()) == 17)
	{
		StringCopy(&(Local_47[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_48[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_57(unk_0x259BE71D8A81D4FA()) == 4)
	{
		StringCopy(&(Local_47[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_48[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_47[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_48[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_47[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_48[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_57(unk_0x259BE71D8A81D4FA()) == 11)
	{
		StringCopy(&(Local_47[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_48[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_56(unk_0x259BE71D8A81D4FA()) == 4)
	{
		StringCopy(&(Local_47[44 /*6*/]), "FXR_TXT_WI1", 24);
		StringCopy(&(Local_48[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_55(unk_0x259BE71D8A81D4FA()) == 4)
	{
		StringCopy(&(Local_47[44 /*6*/]), "DL_TXT_PHOTO1", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_47[45 /*6*/]), "DL_TXT_PHOTO2", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_47[46 /*6*/]), "DL_TXT_PHOTO3", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
	else if (func_54(unk_0x259BE71D8A81D4FA()) == 1)
	{
		StringCopy(&(Local_47[44 /*6*/]), "S23_SOAD_TXT0", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_2023_TEXT_IMG_1", 24);
		StringCopy(&(Local_47[45 /*6*/]), "S23_SOAD_TXT1", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_2023_TEXT_IMG_2", 24);
		StringCopy(&(Local_47[46 /*6*/]), "S23_SOAD_TXT2", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_2023_TEXT_IMG_3", 24);
	}
	else if (func_54(unk_0x259BE71D8A81D4FA()) == 0)
	{
		StringCopy(&(Local_47[44 /*6*/]), "ACR_TXT_IMG", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_2023_TEXT_IMG_4", 24);
	}
	else if (func_53(unk_0x259BE71D8A81D4FA()) == 4)
	{
		StringCopy(&(Local_47[44 /*6*/]), "SALV_SUBF_T_HOS", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT2_2023_TEXT_IMG_1", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 0)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_00", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_01", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_02", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 1)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_10", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_11", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_12", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 2)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_20", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_21", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_22", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 3)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_30", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_31", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_32", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 4)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_40", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_41", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_42", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
	}
	else if (func_50(unk_0x259BE71D8A81D4FA()) == 5)
	{
		StringCopy(&(Local_47[44 /*6*/]), "BTFM_TXT_50", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_47[45 /*6*/]), "BTFM_TXT_51", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_47[46 /*6*/]), "BTFM_TXT_52", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
	}
	else if (func_47(unk_0x259BE71D8A81D4FA()) == 338)
	{
		StringCopy(&(Local_47[44 /*6*/]), "DLYBTTXTMAR20", 24);
		StringCopy(&(Local_48[44 /*6*/]), "UPDT1_24_TEXT_BOUNTY_0", 24);
		StringCopy(&(Local_47[45 /*6*/]), "DLYBTTXTMAR21", 24);
		StringCopy(&(Local_48[45 /*6*/]), "UPDT1_24_TEXT_BOUNTY_1", 24);
		StringCopy(&(Local_47[46 /*6*/]), "DLYBTTXTMAR22", 24);
		StringCopy(&(Local_48[46 /*6*/]), "UPDT1_24_TEXT_BOUNTY_2", 24);
		StringCopy(&(Local_47[47 /*6*/]), "DLYBTTXTMAR23", 24);
		StringCopy(&(Local_48[47 /*6*/]), "UPDT1_24_TEXT_BOUNTY_3", 24);
		StringCopy(&(Local_47[48 /*6*/]), "DLYBTTXTMAR24", 24);
		StringCopy(&(Local_48[48 /*6*/]), "UPDT1_24_TEXT_BOUNTY_4", 24);
		StringCopy(&(Local_47[49 /*6*/]), "DLYBTTXTMAR25", 24);
		StringCopy(&(Local_48[49 /*6*/]), "UPDT1_24_TEXT_BOUNTY_5", 24);
		StringCopy(&(Local_47[50 /*6*/]), "DLYBTTXTMAR26", 24);
		StringCopy(&(Local_48[50 /*6*/]), "UPDT1_24_TEXT_BOUNTY_6", 24);
		StringCopy(&(Local_47[51 /*6*/]), "DLYBTTXTMAR27", 24);
		StringCopy(&(Local_48[51 /*6*/]), "UPDT1_24_TEXT_BOUNTY_7", 24);
		StringCopy(&(Local_47[52 /*6*/]), "DLYBTTXTMAR28", 24);
		StringCopy(&(Local_48[52 /*6*/]), "UPDT1_24_TEXT_BOUNTY_8", 24);
		StringCopy(&(Local_47[53 /*6*/]), "DLYBTTXTMAR29", 24);
		StringCopy(&(Local_48[53 /*6*/]), "UPDT1_24_TEXT_BOUNTY_9", 24);
		StringCopy(&(Local_47[54 /*6*/]), "DLYBTTXTMAR210", 24);
		StringCopy(&(Local_48[54 /*6*/]), "UPDT1_24_TEXT_BOUNTY_10", 24);
		StringCopy(&(Local_47[55 /*6*/]), "DLYBTTXTMAR211", 24);
		StringCopy(&(Local_48[55 /*6*/]), "UPDT1_24_TEXT_BOUNTY_11", 24);
		StringCopy(&(Local_47[56 /*6*/]), "DLYBTTXTMAR212", 24);
		StringCopy(&(Local_48[56 /*6*/]), "UPDT1_24_TEXT_BOUNTY_12", 24);
		StringCopy(&(Local_47[57 /*6*/]), "DLYBTTXTMAR213", 24);
		StringCopy(&(Local_48[57 /*6*/]), "UPDT1_24_TEXT_BOUNTY_13", 24);
		StringCopy(&(Local_47[58 /*6*/]), "DLYBTTXTMAR214", 24);
		StringCopy(&(Local_48[58 /*6*/]), "UPDT1_24_TEXT_BOUNTY_14", 24);
	}
}

int func_47(int iParam0)
{
	if (func_49(iParam0))
	{
		if (func_48(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_48(int iParam0, int iParam1)
{
	if (func_49(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_50(int iParam0)
{
	if (func_47(iParam0) == 337)
	{
		return func_51(iParam0, 337);
	}
	return -1;
}

int func_51(int iParam0, int iParam1)
{
	if (func_47(iParam0) == iParam1)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_48(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_53(int iParam0)
{
	switch (func_47(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_52(iParam0);
		
		default:
	}
	return -1;
}

int func_54(int iParam0)
{
	if (func_47(iParam0) == 317)
	{
		return func_51(iParam0, 317);
	}
	return -1;
}

int func_55(int iParam0)
{
	if (func_47(iParam0) == 307)
	{
		return func_51(iParam0, 307);
	}
	return -1;
}

int func_56(int iParam0)
{
	if (func_47(iParam0) == 264)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_57(int iParam0)
{
	if (func_47(iParam0) == 271)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_58(int iParam0)
{
	if (func_47(iParam0) == 256)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_59(int iParam0)
{
	if (func_47(iParam0) == 158)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_60(int iParam0)
{
	if (func_47(iParam0) == 243)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_61(int iParam0)
{
	if (func_47(iParam0) == 237 || func_47(iParam0) == 250)
	{
		return func_52(iParam0);
	}
	return -1;
}

void func_62()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
	{
		func_63(0);
	}
	if (iLocal_50)
	{
		unk_0x633E3833FB96BCCB(&uLocal_31);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_63(int iParam0)
{
	if (func_68())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_67())
		{
			func_65(1, 1);
		}
		else
		{
			func_65(0, 0);
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
	if (!func_64())
	{
		Global_20930.f_1 = 3;
	}
}

int func_64()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_66(0))
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

int func_66(int iParam0)
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

bool func_67()
{
	return BitTest(Global_1956920, 5);
}

bool func_68()
{
	return BitTest(Global_1956920, 19);
}

