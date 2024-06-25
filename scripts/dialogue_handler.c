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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	char cLocal_36[24] = "";
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char cLocal_40[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[24] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	char* sLocal_57 = NULL;
	char cLocal_58[24] = "";
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char* sLocal_62 = NULL;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	char cLocal_68[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_93[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_96 = 0;
	var uLocal_97 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0,0375f;
	fLocal_25 = 0,17f;
	iLocal_32 = 5000;
	iLocal_33 = 5000;
	unk_0x51CC1333A10C4E09();
	while (true)
	{
		system::wait(0);
		if (BitTest(Global_8801, 1))
		{
			if (!BitTest(Global_8800, 20))
			{
				if (unk_0xE87F28FD4128D063())
				{
					if (Global_20918)
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_20873)
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x8744D2E3FC95740E(&Global_8801, 1);
				}
			}
		}
		if (BitTest(Global_21152, 0))
		{
			if (!func_119())
			{
				if (!BitTest(Global_21152, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_21152, 1);
					if (unk_0x76CD105BCAC6EB9F())
					{
						uLocal_87 = unk_0x7E3F74F641EE6B27();
					}
					else
					{
						iLocal_83 = unk_0x1DD05E817C89C737();
					}
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_89 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_87);
				}
				else
				{
					iLocal_84 = unk_0x1DD05E817C89C737();
					iLocal_89 = (iLocal_84 - iLocal_83);
				}
				if (iLocal_89 < 3000)
				{
					if (func_112(&Global_21740, &Global_22356, &Global_22276, Global_22289, Global_23271, Global_23272, 0))
					{
						Global_21152 = 0;
					}
				}
				else
				{
					Global_21152 = 0;
				}
			}
		}
		if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !BitTest(Global_4718592.f_17, 4)) && !func_111()) && unk_0x486FF5D06E9659F1(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_22286 != 0)
			{
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					func_110();
				}
			}
		}
		if (iLocal_30 == 1)
		{
			func_106();
		}
		switch (Global_22286)
		{
			case 0:
				break;
			
			case 1:
				if (Global_22292)
				{
					if (Global_22282 == 0)
					{
						func_104();
					}
					else
					{
						func_103();
						func_104();
					}
				}
				else if (Global_22282 == 0)
				{
					func_91();
				}
				else
				{
					func_103();
					func_73();
				}
				break;
			
			case 2:
				func_67();
				break;
			
			case 3:
				func_63();
				break;
			
			case 4:
				if (Global_22292)
				{
					if (Global_22294)
					{
						func_62();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_22296 = 0;
	Global_20929 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_22297 = 0;
	Global_22298 = 0;
	Global_22299 = 0;
	Global_22300 = 0;
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
	Global_22290 = 0;
	Global_22291 = 0;
	Global_22333 = 0;
	Global_22334 = 0;
	Global_22337 = 0;
	Global_22339 = 0;
	Global_22338 = 0;
	Global_22341 = 0;
	Global_22340 = 0;
	Global_23303 = 0;
	Global_22343 = 0;
	if (Global_20930.f_1 == 10)
	{
	}
	else if (BitTest(Global_8800, 11))
	{
		func_3();
	}
	Global_22292 = 0;
	Global_22293 = 0;
	Global_22294 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23276 = 0;
	Global_23283 = 0;
	Global_23282 = 0;
	Global_23279 = 0;
	Global_23278 = 0;
	Global_23280 = 0;
	Global_23281 = 0;
	Global_22282 = 0;
	Global_22283 = 0;
	Global_22284 = 0;
	Global_22285 = 0;
	Global_22544 = 0;
	Global_23307 = 5000;
	Global_20913 = 0;
	unk_0x8744D2E3FC95740E(&Global_8800, 20);
	unk_0x8744D2E3FC95740E(&Global_8800, 24);
	unk_0x8744D2E3FC95740E(&Global_8801, 23);
	unk_0x8744D2E3FC95740E(&Global_8802, 0);
	unk_0x8744D2E3FC95740E(&Global_8801, 9);
	unk_0x8744D2E3FC95740E(&Global_8801, 31);
	unk_0x8744D2E3FC95740E(&Global_8801, 17);
	unk_0x8744D2E3FC95740E(&Global_8802, 5);
	Global_23270 = 0;
	Global_23269 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		Global_22286 = 4;
	}
	else
	{
		Global_22286 = 0;
		Global_23297 = 0;
		Global_23308 = unk_0x1DD05E817C89C737();
	}
}

void func_3()
{
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (BitTest(Global_8800, 11))
			{
				if (!Global_20873)
				{
					unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 0, 1);
				}
				if (Global_79389)
				{
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
				}
				unk_0x8744D2E3FC95740E(&Global_8800, 11);
			}
		}
	}
}

void func_4()
{
	Global_22296 = 0;
	Global_20929 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
		{
			if (Global_22342 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_31 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_23278 == 0)
	{
		if (iLocal_29 == 0)
		{
			if (Global_23297 == 1)
			{
				unk_0xF329B991CDE087C7(1);
				iLocal_29 = 1;
			}
		}
		else if (Global_23297 == 0)
		{
			unk_0xC78B293A5F4EACF9();
			iLocal_29 = 0;
		}
	}
	else if (Global_23280 > 0)
	{
		iLocal_35 = unk_0x1DD05E817C89C737();
		if ((iLocal_35 - iLocal_34) > Global_23280)
		{
			unk_0x43D69D4AAC59FA8E();
			Global_23278 = 0;
		}
	}
	if (Global_23297 == 0)
	{
		if (!unk_0x1F9EB85925C3ECD7())
		{
			Global_22286 = 6;
		}
	}
}

void func_6()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE87F28FD4128D063())
	{
		if (!BitTest(Global_8800, 11))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (Global_79389 == 0)
					{
						func_60();
					}
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				if (Global_79389 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_79389 == 0)
	{
		func_59();
	}
	if (iLocal_31 == 1)
	{
		func_54(0);
	}
	if (iLocal_29 == 0)
	{
		if (Global_23297 == 1)
		{
			if (Global_23298 == 1)
			{
				unk_0xF329B991CDE087C7(1);
				iLocal_29 = 1;
				Global_23298 = 0;
			}
		}
	}
	else if (Global_23297 == 0)
	{
		if (Global_23298 == 1)
		{
			unk_0xC78B293A5F4EACF9();
			iLocal_29 = 0;
			Global_23298 = 0;
		}
	}
	if (Global_22339 == 0)
	{
		if (!Global_22299)
		{
			if (!BitTest(Global_8801, 31))
			{
				if (!BitTest(Global_8801, 27))
				{
					if (func_53())
					{
						if (Global_20930.f_1 > 6)
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 24);
							unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 27);
							unk_0x8744D2E3FC95740E(&Global_8801, 26);
							unk_0x8744D2E3FC95740E(&Global_8801, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xE87F28FD4128D063() == 0 && Global_22299 == 0)
	{
		if (Global_22339 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 23);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_8801, 23);
		}
		if (Global_22343)
		{
			if (Global_22339 == 0)
			{
				Global_21905 = { Global_22344 };
				Global_22362 = { Global_22350 };
				Global_22296 = 0;
				Global_23303 = 6;
				func_52();
				return;
			}
		}
		if (!Global_22341)
		{
			while (Global_22339 == 1)
			{
				system::wait(0);
				if (Global_20930.f_1 < 6)
				{
					Global_22339 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_51();
						if (Global_22341)
						{
							iLocal_28 = 1;
							Global_23301 = 1;
							func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
							func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20918)
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_28 = 1;
							Global_23299 = 1;
							if (func_49(Global_8115, Global_20930) == 0)
							{
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_22428, "CELL_300", &(Global_118[Global_8115 /*10*/].f_4), "CELL_195", 0);
								func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
								func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20918)
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x8744D2E3FC95740E(&Global_8800, 17);
						}
					}
					if (func_48(2, Global_20899, 0))
					{
						func_46();
						Global_20856 = 0,19f;
						Global_22339 = 0;
						func_44();
						if (Global_22341)
						{
							Global_21905 = { Global_22422 };
							Global_23303 = 5;
						}
						else if (Global_22284 > 0)
						{
							Global_22544 = 1;
							Global_22286 = 0;
							Global_23307 = 0;
							if (BitTest(Global_8801, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_23270 + 1)
								{
									uLocal_92[iVar0] = func_43(&(Global_22545[iVar0 /*6*/]));
									uLocal_93[iVar0] = func_43(&(Global_22907[iVar0 /*6*/]));
									iVar0++;
								}
								func_42(Global_23270, &Global_21575, Global_8115, &Global_22362, &uLocal_92, &uLocal_93, 9, 0, 0, 0, 0);
							}
							else if (Global_22284 == 2)
							{
								func_24(&Global_21575, Global_8115, &Global_22362, &(Global_22440[0 /*6*/]), &(Global_22492[0 /*6*/]), &(Global_22440[1 /*6*/]), &(Global_22492[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23303 = 1;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							return;
						}
						else
						{
							Global_21905 = { Global_22380 };
							Global_23303 = 1;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20900, 0) || BitTest(Global_8800, 24))
					{
						func_46();
						Global_20856 = 0,19f;
						Global_22339 = 0;
						func_44();
						if (Global_22341)
						{
							Global_21905 = { Global_22416 };
							Global_23303 = 4;
						}
						else if (Global_22284 > 0)
						{
							Global_22544 = 1;
							Global_22286 = 0;
							Global_23307 = 0;
							if (BitTest(Global_8801, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_23269 + 1)
								{
									uLocal_94[iVar1] = func_43(&(Global_22726[iVar1 /*6*/]));
									uLocal_95[iVar1] = func_43(&(Global_23088[iVar1 /*6*/]));
									iVar1++;
								}
								func_42(Global_23269, &Global_21575, Global_8115, &Global_22362, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_22284 == 2)
							{
								func_24(&Global_21575, Global_8115, &Global_22362, &(Global_22453[0 /*6*/]), &(Global_22505[0 /*6*/]), &(Global_22453[1 /*6*/]), &(Global_22505[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23303 = 2;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							return;
						}
						else
						{
							Global_21905 = { Global_22386 };
							Global_23303 = 2;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20902, 0))
					{
						if (Global_22341)
						{
							Global_20856 = 0,19f;
							Global_22339 = 0;
							func_44();
							func_46();
							Global_21905 = { Global_22410 };
							Global_23303 = 3;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							func_52();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_22339)
			{
				system::wait(0);
				if (Global_20930.f_1 < 6)
				{
					Global_22339 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_51();
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_120(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_120(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(2), system::to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_50(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_21(Global_20911, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_20918)
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x8744D2E3FC95740E(&Global_8800, 17);
						iLocal_96 = 0;
						iLocal_28 = 1;
					}
					func_15();
					if (func_48(2, Global_20899, 0))
					{
						func_46();
						Global_22339 = 0;
						func_44();
						unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
						uLocal_97 = unk_0x6CA3F2B87712B6A4();
						while (!unk_0xA6F779AA284EB20E(uLocal_97))
						{
							system::wait(0);
						}
						iVar2 = unk_0x5DEF122A58D4F685(uLocal_97);
						switch (iVar2)
						{
							case 0:
								Global_21905 = { Global_22416 };
								Global_23303 = 4;
								break;
							
							case 1:
								Global_21905 = { Global_22410 };
								Global_23303 = 3;
								break;
							
							case 2:
								Global_21905 = { Global_22422 };
								Global_23303 = 5;
								break;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20900, 0))
					{
						Global_22339 = 0;
						func_44();
					}
				}
			}
		}
		if (Global_22287 == 0)
		{
			unk_0x0F15249D24BC5ADA(0);
			system::settimera(0);
			while (system::timera() < 900 && Global_20930.f_1 == 9)
			{
				system::wait(0);
			}
			Global_22286 = 6;
		}
		if (!Global_1574992)
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20919, 1);
		}
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
	else if (Global_21145 == 0)
	{
		if (func_48(2, Global_20898, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (BitTest(Global_8800, 20))
					{
					}
					else
					{
						Global_20908 = 1;
						func_44();
						unk_0x0F15249D24BC5ADA(0);
						Global_22335 = 1;
						Global_22336 = 1;
						Global_22286 = 6;
						func_14();
						Global_20930.f_1 = Global_20932;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	int iVar0;
	struct<3> Var1;
	
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
			func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_9405);
			if (Global_9405 == 1)
			{
				func_50(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_50(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_50(Global_20911, "DISPLAY_VIEW", 4f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
				func_50(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_10();
				func_50(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_49(Global_8115, Global_20930) == 0)
				{
					func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_50(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_22544)
					{
						StringCopy(&Var1, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var1, "CELL_211", 24);
					}
					if (func_49(Global_8115, Global_20930) == 0)
					{
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", &Var1, "CELL_195", 0);
					}
					else
					{
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &Var1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_22();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_10()
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

void func_11(int iParam0)
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
	func_13();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
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
								func_9(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
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
								func_9(&(Global_8807[iVar1 /*15*/]));
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
								func_9(&(Global_8807[iVar1 /*15*/]));
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
								func_9(&(Global_8807[iVar1 /*15*/]));
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
								func_9(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_14()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return;
	}
	switch (Global_20932)
	{
		case 5:
			Global_20932 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8801, 5))
			{
				Global_20932 = 6;
				unk_0x8744D2E3FC95740E(&Global_8801, 5);
			}
			else
			{
				Global_20932 = 3;
			}
			break;
		
		case 7:
			Global_20932 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8801, 5))
			{
				Global_20932 = 6;
				unk_0x8744D2E3FC95740E(&Global_8801, 5);
			}
			else
			{
				Global_20932 = 3;
			}
			break;
		
		default:
			Global_20932 = 3;
			break;
	}
}

void func_15()
{
	if (iLocal_96)
	{
		if (system::timera() > 50)
		{
			iLocal_96 = 0;
		}
	}
	if (iLocal_96 == 0)
	{
		if (func_48(2, Global_20906, 0) || unk_0x875A214D5EBCA509(2, 181))
		{
			func_19();
			iLocal_96 = 1;
			system::settimera(0);
		}
		if (func_48(2, Global_20907, 0) || unk_0x875A214D5EBCA509(2, 180))
		{
			func_16();
			iLocal_96 = 1;
			system::settimera(0);
		}
	}
}

void func_16()
{
	func_50(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_17();
}

void func_17()
{
	if (func_18())
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

int func_18()
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

void func_19()
{
	func_50(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_20();
}

void func_20()
{
	if (func_18())
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

void func_21(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_22()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		func_23();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_23()
{
	if (Global_79389)
	{
		func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
	}
}

int func_24(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_41(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_40();
	if (iParam8 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_38(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_25(&uVar0, &uVar1, iParam7, bParam11);
}

int func_25(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam2 > Global_22288)
			{
				if (bParam3 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
				}
				else
				{
					func_110();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_36();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23282 = Global_23283;
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_21905.f_370 = Global_23275;
		Global_22282 = Global_22283;
		Global_22284 = Global_22285;
		if (Global_22544 == 0)
		{
			Global_22440[0 /*6*/] = { Global_22466[0 /*6*/] };
			Global_22440[1 /*6*/] = { Global_22466[1 /*6*/] };
			Global_22492[0 /*6*/] = { Global_22518[0 /*6*/] };
			Global_22492[1 /*6*/] = { Global_22518[1 /*6*/] };
			Global_22453[0 /*6*/] = { Global_22479[0 /*6*/] };
			Global_22453[1 /*6*/] = { Global_22479[1 /*6*/] };
			Global_22505[0 /*6*/] = { Global_22531[0 /*6*/] };
			Global_22505[1 /*6*/] = { Global_22531[1 /*6*/] };
		}
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam3)
			{
				func_29();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (Global_22544 == 0)
					{
						if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
						{
							return 0;
						}
						if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
						{
							return 0;
						}
						if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
						{
							return 0;
						}
						if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_27())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_26();
			Global_22296 = bParam3;
		}
		Global_22288 = iParam2;
		if (Global_22282 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_22282)
			{
				StringCopy(&(Global_21905.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21905.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21152 = 0;
		func_52();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_22288 || iParam2 == Global_22288)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_110();
	}
	return 0;
}

void func_26()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_27()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_29()
{
	if (func_12(14))
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
			if (func_32(iVar0) && (!func_12(14) || Global_112917))
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
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_38(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_39(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_39(var uParam0)
{
	Global_22283 = uParam0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
}

void func_40()
{
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_22300 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
}

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_42(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_41(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_40();
	if (iParam7 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	func_39(uParam0);
	return func_25(uParam4, uParam5, iParam6, bParam10);
}

var func_43(var uParam0)
{
	return uParam0;
}

void func_44()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_45();
	}
}

void func_45()
{
	if (func_18())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

void func_46()
{
	if (func_47())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!Global_20873)
				{
					if (!BitTest(Global_8800, 11))
					{
						func_60();
					}
				}
			}
		}
	}
}

int func_47()
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
		if (func_12(14))
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

int func_48(int iParam0, int iParam1, int iParam2)
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

int func_49(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_50(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_51()
{
	if (func_47())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!Global_20873)
				{
					if (BitTest(Global_8800, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

int func_53()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		iLocal_89 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_88);
	}
	else
	{
		iLocal_86 = unk_0x1DD05E817C89C737();
		iLocal_89 = (iLocal_86 - iLocal_85);
	}
	return 0;
}

void func_54(int iParam0)
{
	if (func_58())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_57())
		{
			func_55(1, 1);
		}
		else
		{
			func_55(0, 0);
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
	if (!func_27())
	{
		Global_20930.f_1 = 3;
	}
}

void func_55(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_56(0))
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

int func_56(int iParam0)
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

bool func_57()
{
	return BitTest(Global_1956920, 5);
}

bool func_58()
{
	return BitTest(Global_1956920, 19);
}

void func_59()
{
	if (func_48(2, Global_20907, 0))
	{
		if (Global_23297 == 0)
		{
			if (Global_22292)
			{
				if (BitTest(Global_8801, 17))
				{
				}
				else
				{
					unk_0x329FFB0BB004FDEE();
				}
			}
		}
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_61() && unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
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

int func_61()
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

void func_62()
{
	if (Global_79389 == 0)
	{
		func_59();
	}
	if (iLocal_31 == 1)
	{
		func_54(0);
	}
	if (iLocal_28 == 0)
	{
		iLocal_28 = 1;
		Global_23299 = 1;
		if (func_49(Global_8115, Global_20930) == 0)
		{
			func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_22428, "CELL_300", "CELL_195", "CELL_195", 0);
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20856 = 0,2f;
		if (Global_20918)
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
	}
	if (Global_22339 == 1)
	{
		if (Global_20930.f_1 < 6)
		{
			Global_22339 = 0;
		}
		else
		{
			if (Global_20870 == 0)
			{
				if (func_48(2, Global_20899, 0))
				{
					Global_20856 = 0,19f;
					Global_22339 = 0;
					func_44();
					Global_23304 = 1;
					iLocal_30 = 1;
				}
			}
			if (func_48(2, Global_20900, 0))
			{
				Global_20856 = 0,19f;
				Global_22339 = 0;
				func_44();
				Global_23304 = 2;
			}
		}
	}
	else if (Global_23304 == 2)
	{
		if (Global_22287 == 0)
		{
			unk_0x0F15249D24BC5ADA(0);
			Global_22286 = 6;
		}
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
	else if (!unk_0xE87F28FD4128D063())
	{
		iLocal_30 = 0;
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20919, 1);
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
}

void func_63()
{
	if (Global_21153 == 1)
	{
		if (unk_0xE87F28FD4128D063())
		{
			if (unk_0x22258A5EB34183DC())
			{
				Global_21153 = 0;
			}
		}
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			Global_21153 = 0;
			unk_0x0F15249D24BC5ADA(0);
			Global_22286 = 6;
		}
	}
	if (system::timerb() > iLocal_33)
	{
		if (Global_21153 == 1)
		{
			Global_21153 = 0;
		}
	}
	if (system::timera() < Global_23307 || Global_21153 == 1)
	{
		if (func_48(2, Global_20898, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (BitTest(Global_8800, 20))
					{
					}
					else
					{
						Global_20908 = 1;
						func_44();
						unk_0x0F15249D24BC5ADA(0);
						Global_22335 = 1;
						Global_22286 = 6;
						unk_0x8744D2E3FC95740E(&Global_8800, 27);
						if (!Global_22297)
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 5);
						}
						func_14();
						Global_20930.f_1 = Global_20932;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 27);
		Global_22286 = 4;
		Global_22343 = 0;
		func_66();
		func_65();
		if (!Global_22299)
		{
			if (Global_23303 == 0)
			{
				if (!BitTest(Global_8802, 5))
				{
					unk_0x43D69D4AAC59FA8E();
				}
				unk_0x8744D2E3FC95740E(&Global_8802, 5);
			}
			else
			{
				unk_0xABC27367E50604B7(Global_21905.f_368, Global_21905.f_369);
			}
		}
		func_64();
	}
}

void func_64()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		uLocal_88 = unk_0x7E3F74F641EE6B27();
	}
	else
	{
		iLocal_85 = unk_0x1DD05E817C89C737();
	}
}

void func_65()
{
	if (Global_22299)
	{
		if (Global_79389)
		{
			if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
			{
				if (!unk_0x761778199FE1211C())
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1847), 15);
				}
			}
		}
	}
}

void func_66()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		if (!Global_22294)
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22299)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(4);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(2);
				unk_0x882AEFD55B8D51FB("CELL_CONDFON");
				unk_0x60D332F23943B34F(&Global_22301);
				unk_0xCFAD3D478C87321A();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xE6B753D52F4CA222();
			}
			else if (func_49(Global_8115, Global_20930) == 0)
			{
				func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_120(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_219", &(Global_2169[Global_8115 /*29*/].f_3), 0);
			}
		}
		func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_67()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		iLocal_90 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_76);
		iLocal_91 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_79);
	}
	else
	{
		iLocal_75 = unk_0x1DD05E817C89C737();
		iLocal_90 = (iLocal_75 - iLocal_74);
		iLocal_78 = unk_0x1DD05E817C89C737();
		iLocal_91 = (iLocal_78 - iLocal_77);
	}
	if (Global_22333 == 1)
	{
		if (func_47())
		{
			if (iLocal_90 > 4000)
			{
				if (BitTest(Global_8800, 14))
				{
					if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
					{
						func_44();
						Global_20929 = 2;
						func_66();
						func_65();
					}
				}
			}
		}
		else if (iLocal_90 > 2000)
		{
			if (BitTest(Global_8800, 14))
			{
				if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
				{
					func_44();
					Global_20929 = 2;
					func_66();
					func_65();
				}
			}
		}
	}
	if (iLocal_91 > 10000)
	{
		Global_20929 = 3;
	}
	if (Global_20929 == 2)
	{
		iLocal_28 = 0;
		Global_22286 = 4;
		func_60();
		Global_22343 = 0;
		func_66();
		func_65();
		if (!Global_22299)
		{
			if (Global_23303 == 0)
			{
				unk_0x43D69D4AAC59FA8E();
			}
			else
			{
				unk_0xABC27367E50604B7(Global_21905.f_368, Global_21905.f_369);
			}
		}
		func_64();
		Global_23302 = 0;
	}
	if (Global_22333 == 0)
	{
		if (Global_20929 == 3)
		{
			if (Global_22299)
			{
				func_69();
				func_54(0);
			}
			else
			{
				func_68();
				Global_23302 = 1;
				unk_0x0F15249D24BC5ADA(0);
				Global_22286 = 6;
				func_14();
				Global_20930.f_1 = Global_20932;
				func_8();
			}
		}
	}
	else if (Global_20929 == 3)
	{
	}
}

void func_68()
{
}

void func_69()
{
	Global_2746025.f_2 = 1;
	Global_2746025.f_38 = 1;
	if (unk_0x261E3728EE56B3AC())
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			while (unk_0x8BDB5F6FED3994AD())
			{
				system::wait(0);
			}
			unk_0x7D8697356CC73FFD();
			Global_2746025 = 0;
			Global_2746025.f_2 = 0;
		}
		else if (func_72(Global_2746025.f_20))
		{
			if (unk_0xEDD63461767A518C(&(Global_2746025.f_20)))
			{
				if (!unk_0x484CF81C32C3D413(&(Global_2746025.f_20)))
				{
					func_70();
				}
			}
		}
		else
		{
			func_70();
		}
	}
	else
	{
		func_70();
	}
	if (Global_2746025.f_37)
	{
		func_54(0);
	}
	Global_2746025.f_37 = 0;
	Global_2746025.f_3 = 0;
}

void func_70()
{
	Global_2746025.f_1 = 0;
	Global_2746025 = 0;
	Global_2746025.f_2 = 0;
	Global_2746025.f_33 = -1;
	Global_2746025.f_34 = -1;
	StringCopy(&(Global_2746025.f_4), "", 64);
	StringCopy(&(Global_2746025.f_39[0 /*16*/]), "", 64);
	Global_2746025.f_38 = 0;
	Global_2746025.f_56 = 0;
	Global_2746025.f_57 = 0;
	Global_2746025.f_58 = -2;
	Global_2746025.f_3 = 0;
	func_71(&(Global_2746025.f_20));
}

void func_71(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_73 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_27 = 0;
	iLocal_29 = 0;
	while (iLocal_73 < Global_22282)
	{
		func_90();
		func_89();
		func_88();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_27 == 0)
		{
			cLocal_40 = { Global_21905.f_6[iLocal_73 /*6*/] };
			StringConCat(&cLocal_40, "A", 24);
			Global_21154[iVar2 /*6*/] = { Global_21905.f_6[iLocal_73 /*6*/] };
			StringConCat(&(Global_21154[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_21154[iVar2 /*6*/]), iVar1, 24);
			cLocal_36 = { Global_21154[iVar2 /*6*/] };
			StringConCat(&cLocal_36, "A", 24);
			if (unk_0x6BA487C862DB8DDF(&cLocal_36))
			{
				StringCopy(&cLocal_44, unk_0xFACCDE46E24AD056(&cLocal_36), 64);
				iVar3 = func_87(iVar13);
				iVar4 = func_86(iVar13);
				uVar5 = func_84(iVar13);
				uLocal_65 = func_83();
				uLocal_66 = func_82();
				uLocal_67 = func_81();
				uVar6 = func_80(iVar13);
				uVar7 = func_79(iVar13);
				uVar8 = func_78(iVar13);
				uVar12 = func_77(iVar13);
				uVar9 = func_76(iVar13);
				uVar10 = func_75(iVar13);
				uVar11 = func_74(iVar13);
				if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar2 /*6*/])))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_21154[iVar2 /*6*/]), &(Global_21905.f_187[iLocal_73 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &(Global_21154[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x6BA487C862DB8DDF(&cLocal_40))
			{
				StringCopy(&cLocal_44, unk_0xFACCDE46E24AD056(&cLocal_40), 64);
				iVar3 = func_87(0);
				iVar4 = func_86(0);
				uVar5 = func_84(0);
				uLocal_65 = func_83();
				uLocal_66 = func_82();
				uLocal_67 = func_81();
				uVar6 = func_80(0);
				uVar7 = func_79(0);
				uVar8 = func_78(0);
				uVar12 = func_77(0);
				uVar9 = func_76(0);
				uVar10 = func_75(0);
				uVar11 = func_74(0);
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &(Global_21905.f_6[iLocal_73 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_21154[iVar2 /*6*/]), "END", 24);
				iLocal_27 = 1;
			}
			else
			{
				StringCopy(&(Global_21154[iVar2 /*6*/]), "END", 24);
				iLocal_27 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_73++;
		iLocal_27 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_22292 == 0)
	{
		unk_0x6CBE32FD4ABF9B73(uLocal_66);
		unk_0xC5C39679B6570380(uLocal_67);
		unk_0xA406335199BF1001(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, uLocal_65);
		Global_22286 = 4;
	}
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_68), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 2, 3);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 1, 2);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 0, 1);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_53), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_85(uVar0);
}

int func_85(var uParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_86(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_53), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_85(uVar0);
}

int func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_53), iParam0 * 3, iParam0 * 3 + 1);
	return func_85(uVar0);
}

void func_88()
{
	cLocal_68 = { Global_21905.f_6[iLocal_73 /*6*/] };
	StringConCat(&cLocal_68, "LF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_68))
	{
		sLocal_72 = unk_0xFACCDE46E24AD056(&cLocal_68);
		if (unk_0xFF692AB7350A74D7(sLocal_72))
		{
		}
	}
}

void func_89()
{
	cLocal_58 = { Global_21905.f_6[iLocal_73 /*6*/] };
	StringConCat(&cLocal_58, "IF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_58))
	{
		sLocal_62 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 0, 1);
		if (unk_0xFF692AB7350A74D7(sLocal_62))
		{
		}
		sLocal_63 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 1, 2);
		if (unk_0xFF692AB7350A74D7(sLocal_63))
		{
		}
		sLocal_64 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 2, 3);
		if (unk_0xFF692AB7350A74D7(sLocal_64))
		{
		}
	}
}

void func_90()
{
	cLocal_53 = { Global_21905.f_6[iLocal_73 /*6*/] };
	StringConCat(&cLocal_53, "SL", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_53))
	{
		sLocal_57 = unk_0xFACCDE46E24AD056(&cLocal_53);
		if (unk_0xFF692AB7350A74D7(sLocal_57))
		{
		}
	}
}

void func_91()
{
	func_92();
	unk_0x6CBE32FD4ABF9B73(uLocal_66);
	unk_0xC5C39679B6570380(uLocal_67);
	if (Global_23278)
	{
		unk_0x4082E7EF621D1686(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, uLocal_65);
		iLocal_34 = unk_0x1DD05E817C89C737();
	}
	else
	{
		unk_0xA406335199BF1001(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, uLocal_65);
	}
	Global_22286 = 4;
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_27 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	if (unk_0x00F2D73E763510A4(&Global_22362))
	{
		if (unk_0x1B79E937E91F40C3(&Global_22362, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_102() || func_101())
		{
			if (Global_1835500 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_79389 || func_100(0))
		{
			if (Global_1835500 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_98())
		{
			iVar14 = 1;
		}
		if (func_97(unk_0x70E57E9927B6BA58(&Global_22362)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_22288 < 5 || Global_22288 == 10) || Global_22288 == 12) || Global_22288 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				unk_0xF2CB0224D3BE0B42(&Global_22362, 7);
				while (!unk_0xDCB78A15E5F495DC(7))
				{
					system::wait(0);
				}
			}
			else
			{
				unk_0x4AB15E3851FF326B(&Global_22362, 15);
				while (!unk_0xDCB78A15E5F495DC(15))
				{
					system::wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			unk_0xF2CB0224D3BE0B42(&Global_22362, 6);
			while (!unk_0xDCB78A15E5F495DC(6))
			{
				system::wait(0);
			}
		}
		else if (unk_0x486FF5D06E9659F1(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0x4AB15E3851FF326B(&Global_22362, 14);
			while (!unk_0xDCB78A15E5F495DC(14))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		iLocal_31 = 1;
		return;
	}
	unk_0x4C2ADBAAF83DA56A();
	func_96();
	func_95();
	func_94();
	func_93();
	Global_23296 = 0;
	while (iVar2 < 70 && iLocal_27 == 0)
	{
		cLocal_40 = { Global_21905 };
		StringConCat(&cLocal_40, "A", 24);
		Global_21154[iVar2 /*6*/] = { Global_21905 };
		StringConCat(&(Global_21154[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_21154[iVar2 /*6*/]), iVar1, 24);
		cLocal_36 = { Global_21154[iVar2 /*6*/] };
		StringConCat(&cLocal_36, "A", 24);
		if (unk_0x6BA487C862DB8DDF(&cLocal_36))
		{
			StringCopy(&cLocal_44, unk_0xFACCDE46E24AD056(&cLocal_36), 64);
			iVar3 = func_87(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4543272 == 0)
				{
				}
			}
			iVar4 = func_86(iVar2);
			uVar5 = func_84(iVar2);
			uLocal_65 = func_83();
			uLocal_66 = func_82();
			uLocal_67 = func_81();
			uVar6 = func_80(iVar2);
			uVar7 = func_79(iVar2);
			uVar8 = func_78(iVar2);
			uVar12 = func_77(iVar2);
			uVar9 = func_76(iVar2);
			uVar10 = func_75(iVar2);
			uVar11 = func_74(iVar2);
			if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar2 /*6*/])))
			{
				if (Global_23276 == 0 && Global_23282 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &(Global_21154[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x1B79E937E91F40C3(&(Global_21154[iVar2 /*6*/]), &Global_23284))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &(Global_21154[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_23296 = iVar2;
					if (Global_23282 == 1)
					{
						Global_23282 = 0;
					}
				}
			}
			else if (Global_23282 == 0 && Global_23276 == 0)
			{
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &cLocal_44, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x6BA487C862DB8DDF(&cLocal_40))
			{
				StringCopy(&cLocal_44, unk_0xFACCDE46E24AD056(&cLocal_40), 64);
				iVar3 = func_87(iVar2);
				iVar4 = func_86(iVar2);
				uVar5 = func_84(iVar2);
				uLocal_65 = func_83();
				uLocal_66 = func_82();
				uLocal_67 = func_81();
				uVar6 = func_80(iVar2);
				uVar7 = func_79(iVar2);
				uVar8 = func_78(iVar2);
				uVar12 = func_77(iVar2);
				uVar9 = func_76(iVar2);
				uVar10 = func_75(iVar2);
				uVar11 = func_74(iVar2);
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_44, &Global_21905, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_27 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_21575[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_21575[iVar0 /*10*/]) || Global_21575[iVar0 /*10*/] == 0)
			{
				unk_0x302B7D91564CDE7F(iVar0, Global_21575[iVar0 /*10*/], &(Global_21575[iVar0 /*10*/].f_1));
			}
			if (Global_21575.f_161 == iVar0)
			{
				if ((Global_21575.f_162 != 0f && Global_21575.f_162.f_1 != 0f) && Global_21575.f_162.f_2 != 0f)
				{
					system::wait(0);
					unk_0x353876FDDC0D0E0E(Global_21575.f_161, Global_21575.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4543272 == 1)
	{
		Global_4543272 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4543091[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xFC8BFE4B41177C22(Global_4543091[iVar0 /*9*/]) || Global_4543091[iVar0 /*9*/] == 0)
				{
					unk_0x302B7D91564CDE7F(Global_4543091[iVar0 /*9*/].f_8, Global_4543091[iVar0 /*9*/], &(Global_4543091[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_94()
{
	cLocal_68 = { Global_21905 };
	StringConCat(&cLocal_68, "LF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_68))
	{
		sLocal_72 = unk_0xFACCDE46E24AD056(&cLocal_68);
		if (unk_0xFF692AB7350A74D7(sLocal_72))
		{
		}
	}
}

void func_95()
{
	cLocal_58 = { Global_21905 };
	StringConCat(&cLocal_58, "IF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_58))
	{
		sLocal_62 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 0, 1);
		if (unk_0xFF692AB7350A74D7(sLocal_62))
		{
		}
		sLocal_63 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 1, 2);
		if (unk_0xFF692AB7350A74D7(sLocal_63))
		{
		}
		sLocal_64 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_58), 2, 3);
		if (unk_0xFF692AB7350A74D7(sLocal_64))
		{
		}
	}
}

void func_96()
{
	cLocal_53 = { Global_21905 };
	StringConCat(&cLocal_53, "SL", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_53))
	{
		sLocal_57 = unk_0xFACCDE46E24AD056(&cLocal_53);
		if (unk_0xFF692AB7350A74D7(sLocal_57))
		{
		}
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case -1018917633:
		case 1332392277:
		case -1889985881:
		case -1536828534:
		case -580715848:
		case -947428706:
		case -790967848:
		case 1475512972:
		case -9119060:
		case 1748914928:
		case -105714609:
		case -1463539315:
		case 1194496889:
		case -147438928:
		case 494169967:
		case 549653660:
		case 39587133:
		case 1013082963:
		case 952237143:
		case 1073149438:
		case 391502992:
		case -1192647115:
		case 1657711155:
		case 1404758415:
		case -675588129:
		case -1333870039:
		case -266249619:
		case 1616674547:
		case -1250679862:
		case -158239083:
		case -1990606476:
		case 979781164:
		case 438323893:
		case -959327640:
		case 690539531:
		case -1415949907:
		case -664409440:
		case 1563674548:
		case 384471949:
		case 505411200:
		case 1293627226:
		case 41616433:
		case -1447946034:
		case -1219032008:
		case 1035385642:
		case 1835084155:
		case -1402743508:
		case -705242143:
		case -701364348:
		case 65148540:
		case -2014413289:
		case 918679880:
		case 1312667164:
		case 1526675260:
		case 1211110589:
		case 1269670038:
		case 1692871935:
		case -90893584:
		case -2011752699:
		case 1990037697:
		case 349249063:
		case -1398692094:
		case -1257187312:
		case -574963840:
		case -528969183:
		case -1953444711:
			return 1;
		
		default:
	}
	return 0;
}

int func_98()
{
	if (Global_2883694)
	{
		if (func_12(0))
		{
			if (Global_3407872 || func_99(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_12(0))
		{
			if (Global_3932160 || func_99(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_99(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

var func_100(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

var func_101()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

var func_102()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_102() || func_101())
	{
		if (Global_1835500 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_79389)
	{
		if (Global_1835500 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_98())
	{
		iVar1 = 1;
	}
	if (unk_0x00F2D73E763510A4(&Global_22362))
	{
		if (unk_0x1B79E937E91F40C3(&Global_22362, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_97(unk_0x70E57E9927B6BA58(&Global_22362)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_22288 < 5 || Global_22288 == 10) || Global_22288 == 12) || Global_22288 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			unk_0xF2CB0224D3BE0B42(&Global_22362, 7);
			while (!unk_0xDCB78A15E5F495DC(7))
			{
				system::wait(0);
			}
		}
		else
		{
			unk_0x4AB15E3851FF326B(&Global_22362, 15);
			while (!unk_0xDCB78A15E5F495DC(15))
			{
				system::wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		unk_0xF2CB0224D3BE0B42(&Global_22362, 6);
		while (!unk_0xDCB78A15E5F495DC(6))
		{
			system::wait(0);
		}
	}
	else
	{
		unk_0x4AB15E3851FF326B(&Global_22362, 14);
		while (!unk_0xDCB78A15E5F495DC(14))
		{
			system::wait(0);
		}
	}
	unk_0x4C2ADBAAF83DA56A();
	func_93();
}

void func_104()
{
	while (Global_20913 == 1 && unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		system::wait(0);
	}
	Global_20913 = 0;
	if (BitTest(Global_8800, 20))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8801, 1);
	}
	Global_20914 = 0;
	if (Global_22282 == 0)
	{
		if (!Global_22299)
		{
			func_92();
		}
	}
	else
	{
		func_73();
	}
	Global_21153 = 0;
	if (Global_22296)
	{
		if (Global_23303 == 0)
		{
			if (Global_22299 == 0)
			{
				iLocal_32 = 5000;
				unk_0x4FF8DE2B4C376BE4(Global_21905.f_368, Global_21905.f_369);
			}
			else
			{
				iLocal_32 = 0;
			}
		}
		else
		{
			iLocal_32 = 0;
		}
		Global_21153 = 1;
		system::settimerb(0);
		while ((Global_21153 == 1 && Global_22286 == 1) && system::timerb() < iLocal_32)
		{
			system::wait(0);
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				Global_21153 = 0;
				unk_0x0F15249D24BC5ADA(0);
				Global_22286 = 6;
			}
			if (unk_0xE87F28FD4128D063())
			{
				if (unk_0x22258A5EB34183DC())
				{
					Global_21153 = 0;
				}
			}
		}
		if (system::timerb() > iLocal_32)
		{
		}
		if (Global_22286 != 1)
		{
		}
		if (Global_21153 == 0)
		{
		}
	}
	Global_21153 = 0;
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 0) || Global_22286 != 1) || Global_20896 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
	else
	{
		if (Global_22294)
		{
			Global_23304 = 0;
			iLocal_30 = 0;
		}
		if (Global_22296 == 0)
		{
			if (Global_22337 == 0)
			{
				Global_20932 = Global_20930.f_1;
				Global_22337 = 1;
			}
			iLocal_28 = 0;
			if (Global_23303 == 0)
			{
				unk_0x4FF8DE2B4C376BE4(Global_21905.f_368, Global_21905.f_369);
				system::wait(0);
				Global_22286 = 3;
				Global_21153 = 1;
				system::settimerb(0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 27);
				system::settimera(0);
			}
			else
			{
				Global_21153 = 0;
				Global_22286 = 4;
			}
			Global_20929 = 0;
			if (Global_22297 == 1)
			{
				if (Global_20930.f_1 == 10)
				{
				}
				if (!Global_20930.f_1 == 9)
				{
					if (Global_20930.f_1 > 4)
					{
						if (Global_20913 == 0)
						{
							Global_20930.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_20930.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_20930.f_1 == 4)
				{
					system::wait(0);
					if (Global_21153 == 1)
					{
						if (unk_0xE87F28FD4128D063())
						{
							if (unk_0x22258A5EB34183DC())
							{
								Global_21153 = 0;
							}
						}
					}
				}
				if (Global_20930.f_1 == 6)
				{
				}
				if (Global_20930.f_1 == 10)
				{
				}
				if (Global_20930.f_1 == 3)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_22286 = 6;
					Global_20914 = 1;
					return;
				}
				Global_20930.f_1 = 9;
				func_8();
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_82 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_80 = unk_0x1DD05E817C89C737();
			}
			while (Global_20930.f_1 != 9 && Global_20913 == 0)
			{
				system::wait(0);
				if (Global_21153 == 1)
				{
					if (unk_0xE87F28FD4128D063())
					{
						if (unk_0x22258A5EB34183DC())
						{
							Global_21153 = 0;
						}
					}
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_89 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_82);
				}
				else
				{
					iLocal_81 = unk_0x1DD05E817C89C737();
					iLocal_89 = (iLocal_81 - iLocal_80);
				}
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_89 > 15000)
					{
						Global_23302 = 1;
						Global_20913 = 1;
					}
				}
			}
			if (!BitTest(Global_8800, 11))
			{
				if (func_47() == 0)
				{
					func_60();
				}
			}
			if (Global_20913 == 0)
			{
				if (!Global_23303 == 0)
				{
					Global_22343 = 0;
					func_66();
					func_65();
					if (!Global_22299)
					{
						if (Global_23303 == 0)
						{
							unk_0x43D69D4AAC59FA8E();
						}
						else
						{
							unk_0xABC27367E50604B7(Global_21905.f_368, Global_21905.f_369);
						}
					}
					func_64();
				}
			}
			else
			{
				func_105();
				Global_20914 = 1;
			}
		}
		else
		{
			Global_20929 = 1;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (Global_20930.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x8744D2E3FC95740E(&Global_8801, 21);
				}
			}
			if (Global_22337 == 0)
			{
				Global_20932 = Global_20930.f_1;
				Global_22337 = 1;
			}
			if (Global_20930.f_1 == 3)
			{
				Global_20930.f_1 = 4;
			}
			else
			{
				while (Global_20930.f_1 == 4)
				{
					system::wait(0);
				}
				if (Global_20930.f_1 == 6)
				{
				}
				Global_20930.f_1 = 9;
				func_8();
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_82 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_80 = unk_0x1DD05E817C89C737();
			}
			while (Global_20930.f_1 != 9 && Global_20913 == 0)
			{
				system::wait(0);
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_89 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_82);
				}
				else
				{
					iLocal_81 = unk_0x1DD05E817C89C737();
					iLocal_89 = (iLocal_81 - iLocal_80);
				}
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_89 > 20000)
					{
						Global_23302 = 1;
						Global_20913 = 1;
						unk_0x8744D2E3FC95740E(&Global_8801, 21);
					}
				}
			}
			if (Global_20913 == 0)
			{
				Global_22286 = 2;
			}
			else
			{
				func_105();
				Global_20914 = 1;
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_76 = unk_0x7E3F74F641EE6B27();
				uLocal_79 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_74 = unk_0x1DD05E817C89C737();
				iLocal_77 = unk_0x1DD05E817C89C737();
			}
		}
	}
}

void func_105()
{
	Global_21152 = 0;
	func_110();
}

void func_106()
{
	float fVar0;
	
	fVar0 = func_107(Global_20883[Global_20875 /*3*/], Global_20876[Global_20875 /*3*/], Global_20890, Global_20861, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_23300 == 0)
		{
			unk_0x37B894853929BF1A(1);
		}
		iLocal_30 = 0;
	}
}

float func_107(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
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
	if (func_47() && Global_4543363 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = unk_0x1DD05E817C89C737();
	}
	fVar1 = func_109((system::to_float((unk_0x1DD05E817C89C737() - iLocal_16)) / fParam4), 0f, 1f);
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
		Global_20858 = { func_108(Param0, Param1, fVar2) };
		Global_20861 = { func_108(Param2, Param3, fVar2) };
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

Vector3 func_108(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_109(float fParam0, float fParam1, float fParam2)
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

void func_110()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

bool func_111()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_112(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_113(sParam2, iParam3, 0);
}

int func_113(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_110();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_36();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_29();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_27())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_52();
		func_114();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_110();
	}
	return 0;
}

void func_114()
{
	if (!func_115())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_115()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_118())
	{
		return 0;
	}
	if (func_116(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_116(int iParam0)
{
	return func_117(iParam0, 20);
}

var func_117(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_118()
{
	return -1;
}

int func_119()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

