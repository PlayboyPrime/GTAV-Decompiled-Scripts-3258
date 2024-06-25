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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	struct<3> Local_29 = { 0, 0, 0 } ;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	char cLocal_42[64] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	char cLocal_51[64] = "";
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
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
	iLocal_19 = 3;
	iLocal_23 = 1;
	iLocal_31 = -1;
	iLocal_38 = -1;
	iLocal_39 = -1;
	iLocal_40 = -1;
	StringCopy(&cLocal_42, "NULL", 64);
	StringCopy(&cLocal_51, "NULL", 64);
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_69();
	}
	if (unk_0xFC8BFE4B41177C22(uScriptParam_67))
	{
		iLocal_33 = iScriptParam_67;
		iLocal_36 = iScriptParam_67;
	}
	while (true)
	{
		system::wait(0);
		func_68();
		if (unk_0xFC8BFE4B41177C22(iScriptParam_67))
		{
			if ((iLocal_39 != -1 && (func_67() && !func_66())) && !func_65(iLocal_39))
			{
				func_69();
			}
			if ((unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3) && unk_0x6D231A0D52134FC1() == 3)
			{
				func_69();
			}
			if (func_64(13) || func_64(14))
			{
				func_69();
			}
			if (unk_0x1C3788A51C49D6AD(iScriptParam_67, 0))
			{
				func_69();
			}
			if (unk_0x71C1A46B17126AA4(iScriptParam_67))
			{
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					func_63();
					if (unk_0x8D91ADE44AC79BC9(iScriptParam_67) < 950)
					{
						func_69();
					}
					switch (iLocal_27)
					{
						case 0:
							func_60();
							if (iLocal_39 == 5)
							{
								if (func_59(18) == 1 && func_59(20) == 0)
								{
									uLocal_37 = unk_0xC8C12645F5A0E13B(-809,962f, 170,919f, 75,7407f, 3f, "des_tvsmash");
									if (unk_0x502101046E18AD3F(uLocal_37))
									{
										unk_0xBF86159B8525B1AE(uLocal_37, 9);
									}
									unk_0xBBC29EBE6E1A48FA();
								}
							}
							if (iLocal_39 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								unk_0x69600B337BEBDC69("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x8E1F26D6742EC167(0);
								Global_33009[iLocal_39 /*11*/].f_2 = 0;
								Global_33009[iLocal_39 /*11*/].f_6 = 1;
								Global_33009[iLocal_39 /*11*/] = unk_0xC5935DFB3F39785A(0, 2);
								Global_33009[iLocal_39 /*11*/].f_1 = 0;
								Global_33009[iLocal_39 /*11*/].f_4 = 0;
								Global_33009[iLocal_39 /*11*/].f_7 = 0;
								Global_33009[iLocal_39 /*11*/].f_8 = 0;
								Global_33009[iLocal_39 /*11*/].f_10 = 0;
								fLocal_28 = -4f;
								func_56(&uLocal_24);
								func_54();
								func_53();
								system::wait(0);
								iLocal_27 = 1;
							}
							break;
						
						case 1:
							if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
							{
								system::wait(0);
							}
							else if (unk_0x0D7186810BF44109(iLocal_33) && unk_0xE99B9AC112F55D16(iLocal_33, 1119092736))
							{
								if (func_45() || Global_33009[iLocal_39 /*11*/].f_5)
								{
									iLocal_27 = 2;
								}
							}
							else
							{
								func_44(&iLocal_38);
							}
							break;
						
						case 2:
							func_54();
							if (!func_65(iLocal_39))
							{
								func_44(&iLocal_38);
								if (func_43("TV_HLP1"))
								{
									unk_0x428C32CC68809A35(1);
								}
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_33))
							{
								if (!unk_0xE5E2AE8B19267B8A(iLocal_33))
								{
									unk_0x4285E11B28063EE0(iLocal_33, 1, 0);
								}
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_35))
							{
								if (!unk_0xE5E2AE8B19267B8A(iLocal_35))
								{
									unk_0x4285E11B28063EE0(iLocal_35, 1, 0);
								}
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_34))
							{
								if (unk_0xE5E2AE8B19267B8A(iLocal_34))
								{
									unk_0x4285E11B28063EE0(iLocal_34, 0, 0);
								}
							}
							if (!unk_0x1B79E937E91F40C3(&cLocal_42, "NULL"))
							{
								unk_0xC897319696131088(&cLocal_42, 0);
							}
							unk_0x1BDD93397AF09D53(0);
							system::wait(0);
							if (unk_0xFC8BFE4B41177C22(iLocal_36))
							{
								unk_0xC850B483ACC98D91(iLocal_36);
							}
							if (!func_65(iLocal_39))
							{
								if ((Global_33009[iLocal_39 /*11*/] == 3 || Global_33009[iLocal_39 /*11*/] == 2) || Global_33009[iLocal_39 /*11*/] == -1)
								{
									Global_33009[iLocal_39 /*11*/] = unk_0xC5935DFB3F39785A(0, 2);
								}
								unk_0xECDF98280946398E(Global_33009[iLocal_39 /*11*/]);
								unk_0xBAF43CF1A42D5B1A(fLocal_28);
							}
							else
							{
								iLocal_40 = Global_33009[iLocal_39 /*11*/];
								iLocal_41 = Global_33009[iLocal_39 /*11*/].f_1;
								unk_0x7C7F282055FB517C(iLocal_40, func_42(iLocal_41), Global_33009[iLocal_39 /*11*/].f_9);
								unk_0xECDF98280946398E(iLocal_40);
								if (Global_33009[iLocal_39 /*11*/].f_7)
								{
									Global_33009[iLocal_39 /*11*/].f_5 = 0;
									Global_33009[iLocal_39 /*11*/].f_7 = 0;
								}
							}
							Global_33009[iLocal_39 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_27 = 3;
							break;
						
						case 3:
							if (Global_33009[iLocal_39 /*11*/].f_4)
							{
								iLocal_27 = 6;
							}
							if (Global_33009[iLocal_39 /*11*/].f_7 && func_65(iLocal_39))
							{
								Global_33009[iLocal_39 /*11*/].f_7 = 0;
								iLocal_27 = 6;
							}
							if (!func_39(iLocal_39))
							{
								func_38();
								iLocal_27 = 5;
							}
							else
							{
								func_36();
								if (unk_0x6609A7E82612E0DF() == -1)
								{
									unk_0xECDF98280946398E(Global_33009[iLocal_39 /*11*/]);
								}
								if (func_16())
								{
									iLocal_27 = 6;
								}
							}
							break;
						
						case 5:
							if (func_39(iLocal_39))
							{
								iLocal_27 = 2;
							}
							if (Global_33009[iLocal_39 /*11*/].f_4)
							{
								iLocal_27 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_38 != -1)
							{
								func_44(&iLocal_38);
							}
							Global_33009[iLocal_39 /*11*/].f_5 = 0;
							Global_33009[iLocal_39 /*11*/].f_4 = 0;
							Global_33009[iLocal_39 /*11*/].f_1 = 0;
							Global_33009[iLocal_39 /*11*/].f_2 = 0;
							Global_33009[iLocal_39 /*11*/].f_7 = 0;
							Global_33009[iLocal_39 /*11*/].f_8 = 0;
							Global_33009[iLocal_39 /*11*/].f_10 = 0;
							iLocal_27 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_69();
			unk_0xBBC29EBE6E1A48FA();
		}
	}
	func_69();
	unk_0xBBC29EBE6E1A48FA();
}

void func_1()
{
	if (iLocal_39 != -1)
	{
		Global_33009[iLocal_39 /*11*/] = unk_0x6609A7E82612E0DF();
	}
	fLocal_28 = unk_0x666CD06EF4DA7E5F();
	unk_0xECDF98280946398E(-1);
	func_4();
	if (unk_0x486FF5D06E9659F1(joaat("family5")) == 0)
	{
		if (!unk_0x1B79E937E91F40C3(&cLocal_42, "NULL"))
		{
			unk_0xC897319696131088(&cLocal_42, 1);
		}
	}
	if (((func_43("TV_HLP1") || func_43("TV_HLP2")) || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		unk_0x428C32CC68809A35(1);
	}
	func_3();
	func_53();
	if (unk_0xFC8BFE4B41177C22(iLocal_34))
	{
		if (!unk_0xE5E2AE8B19267B8A(iLocal_34))
		{
			unk_0x4285E11B28063EE0(iLocal_34, 1, 0);
		}
	}
	unk_0x85B701372CB0390F(0);
	func_2();
}

void func_2()
{
	if (unk_0x761778199FE1211C())
	{
		if (iLocal_65 == 1)
		{
			unk_0x4E6A84BCEF2DCCBF();
			iLocal_65 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_31 == -1)
	{
		unk_0x61055542D9D877AE(iLocal_31);
		if (unk_0xFC8BFE4B41177C22(iLocal_33))
		{
			if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_screen2") || unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4285E11B28063EE0(iLocal_33, 0, 0);
				if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x81645EE95A114FAE(0,5f, 0,5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x81645EE95A114FAE(0,5f, 0,5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_35))
	{
		unk_0x4285E11B28063EE0(iLocal_35, 0, 0);
	}
}

void func_4()
{
	if (iLocal_63)
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		if (unk_0xBC886554B5888A64(uLocal_60))
		{
			unk_0x4CBC5D1BC117616B(uLocal_60, 0);
		}
		unk_0x85E6A1E36B5E2E4D(uLocal_60, 0);
		unk_0x64BB72494B9DF6DC(0);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), Local_29, 1, 0, 2);
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				if (bLocal_32 == 1)
				{
					bLocal_32 = false;
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				}
			}
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
		}
		if (!unk_0x1B79E937E91F40C3(&cLocal_51, "NULL"))
		{
			if (unk_0xBC2EE32DE886BD08(&cLocal_51))
			{
				unk_0xB43467C43086A6A1(&cLocal_51);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_35))
		{
			unk_0x4285E11B28063EE0(iLocal_35, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0x85B701372CB0390F(0);
		iLocal_63 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_15(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_14())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_13(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_15(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_13(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_11(unk_0x259BE71D8A81D4FA())) && !func_7(unk_0x259BE71D8A81D4FA(), 0)) && !func_6()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_11(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_6()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_10(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1574926;
}

int func_10(var uParam0)
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

int func_11(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return BitTest(Global_2621446, 3);
}

int func_13(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_14()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

int func_16()
{
	if (!func_65(iLocal_39))
	{
		if (((((((func_32(&uLocal_24) >= 1f && unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_66, 1f, 1f, 1,5f, 0, 1, 0)) && unk_0xF8F35890F43ED2AE(iLocal_33) == unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())) && !func_31(8, -1)) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && unk_0xA702E444F81F0A83(unk_0x4A8C381C258A124D(), Local_29, 90f)) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !unk_0x3555462DB47B7AB1())
		{
			if (iLocal_38 == -1)
			{
				func_30();
				func_29(&iLocal_38, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_27(iLocal_38, 1))
			{
				func_44(&iLocal_38);
				func_56(&uLocal_24);
				Global_33009[iLocal_39 /*11*/].f_7 = 0;
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_17();
		}
		else
		{
			if (func_43("TV_HLP5"))
			{
				unk_0x428C32CC68809A35(1);
			}
			func_2();
			func_44(&iLocal_38);
		}
	}
	return 0;
}

void func_17()
{
	if (iLocal_63 == 0)
	{
		unk_0x4CC1CF98851922CE(2, 222);
		if (unk_0x875A214D5EBCA509(2, 222))
		{
			func_44(&iLocal_38);
			func_29(&iLocal_38, 3, "TV_HLP6", 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		unk_0x66EFB3D6110055C4(2, 200, 1);
		if (unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()))
		{
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
		}
		if (bLocal_32)
		{
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			}
		}
		unk_0x43AE50D2A33F6E2A();
		unk_0xAFD4869CC7EDDF08(unk_0x4A8C381C258A124D());
		func_24(1, 1);
		unk_0x4CC1CF98851922CE(2, 222);
		func_18(0);
		if (unk_0x875A214D5EBCA509(2, 222) || (unk_0xAE231F549813BBDF(2) && unk_0x61C3701AD6D746B2(2, 200)))
		{
			func_44(&iLocal_38);
			func_4();
		}
	}
}

void func_18(int iParam0)
{
	if (func_23())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_22(0))
		{
			func_19(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_19(int iParam0)
{
	if (func_23())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_21())
		{
			func_20(1, 1);
		}
		else
		{
			func_20(0, 0);
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
	if (!func_14())
	{
		Global_20930.f_1 = 3;
	}
}

void func_20(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_21()
{
	return BitTest(Global_1956920, 5);
}

int func_22(int iParam0)
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

bool func_23()
{
	return BitTest(Global_1956920, 19);
}

void func_24(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_25(0))
		{
			if (!iLocal_20)
			{
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x6609A7E82612E0DF() == 0)
				{
					unk_0xECDF98280946398E(1);
				}
				else
				{
					unk_0xECDF98280946398E(0);
				}
				iLocal_20 = 1;
			}
		}
		else if (iLocal_20)
		{
			iLocal_20 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x6C29A57AC29D7033(2, 219) - 127);
		if (!iLocal_21)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x666CD06EF4DA7E5F();
				fVar2 = (fVar2 - 0,5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xBAF43CF1A42D5B1A(fVar2);
				iLocal_22 = unk_0x1DD05E817C89C737();
				iLocal_21 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x666CD06EF4DA7E5F();
				fVar2 = (fVar2 + 0,5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xBAF43CF1A42D5B1A(fVar2);
				iLocal_22 = unk_0x1DD05E817C89C737();
				iLocal_21 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_23 = 1;
			}
			else if (iLocal_23)
			{
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_23 = 0;
				}
			}
		}
		if (iLocal_21)
		{
			if (iVar1 == 0 || unk_0x1DD05E817C89C737() > iLocal_22 + 24)
			{
				iLocal_21 = 0;
			}
		}
	}
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x6C29A57AC29D7033(2, 218) - 127);
	if (iParam0 || system::timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			system::settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_63 == 0)
	{
		uLocal_60 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", Local_61, Local_62, fVar0, 0, 2);
		unk_0x8397B3389E13A5E5(uLocal_60, 100f);
		unk_0x4CBC5D1BC117616B(uLocal_60, 1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		if (unk_0xFC8BFE4B41177C22(iLocal_35))
		{
			unk_0x4285E11B28063EE0(iLocal_35, 0, 0);
		}
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				bLocal_32 = true;
			}
			unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), Local_29, -1, 0, 2);
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
		}
		if (!unk_0x1B79E937E91F40C3(&cLocal_51, "NULL"))
		{
			if (!unk_0xBC2EE32DE886BD08(&cLocal_51))
			{
				unk_0xCAC4020CCF361AC8(&cLocal_51);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0x85B701372CB0390F(1);
		iLocal_63 = 1;
	}
}

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return 0;
	}
	if (func_22(0))
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*iParam0 == -1)
		{
			func_44(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	if (unk_0x761778199FE1211C())
	{
		if (iLocal_65 == 0)
		{
			unk_0x005E8B7CFA7D52A6("TV_Controls");
			iLocal_65 = 1;
		}
	}
}

bool func_31(int iParam0, int iParam1)
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

float func_32(var uParam0)
{
	if (func_35(uParam0))
	{
		if (func_34(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_33(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_33(bool bParam0)
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

bool func_34(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_35(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_36()
{
	float fVar0;
	
	fVar0 = 1f;
	func_37(&fVar0);
	unk_0x61055542D9D877AE(iLocal_31);
	unk_0xA4F67CEB594AE064(4);
	unk_0xA66AC5949E305457(1);
	unk_0x1A926FCDE89B4E6E(0,5f, 0,5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
}

void func_37(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x4AE9635532D92447(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_38()
{
	Global_33009[iLocal_39 /*11*/].f_7 = 0;
	Global_33009[iLocal_39 /*11*/] = unk_0x6609A7E82612E0DF();
	fLocal_28 = unk_0x666CD06EF4DA7E5F();
	if (unk_0xBC2EE32DE886BD08(&cLocal_51))
	{
		unk_0xB43467C43086A6A1(&cLocal_51);
	}
	if (((func_43("TV_HLP1") || func_43("TV_HLP2")) || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		unk_0x428C32CC68809A35(1);
	}
	func_44(&iLocal_38);
	unk_0xECDF98280946398E(-1);
	system::wait(0);
	func_3();
	func_53();
}

int func_39(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_40(unk_0x259BE71D8A81D4FA()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_40(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59908[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_42(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_43(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_44(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_28(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_45()
{
	if (func_32(&uLocal_24) < 1f)
	{
		func_44(&iLocal_38);
		return 0;
	}
	if ((!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_66, 1f, 1f, 1,5f, 0, 1, 0) || !unk_0xA702E444F81F0A83(unk_0x4A8C381C258A124D(), Local_29, 90f)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (unk_0xF8F35890F43ED2AE(iLocal_33) != unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()))
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (func_31(8, -1))
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (Global_98441)
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (Global_33009[iLocal_39 /*11*/].f_8)
	{
		func_44(&iLocal_38);
		return 0;
	}
	if (iLocal_38 == -1)
	{
		func_29(&iLocal_38, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_27(iLocal_38, 1))
	{
		func_44(&iLocal_38);
		func_56(&uLocal_24);
		Global_33009[iLocal_39 /*11*/].f_7 = 1;
		if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_46(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_52((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					unk_0x8DD7F37773EBD5B9(joaat("num_rndevents_completed"), Global_113692, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	unk_0x1164A75E490C27B6(joaat("num_missions_completed"), Global_113705, 1);
	unk_0x1164A75E490C27B6(joaat("num_missions_available"), Global_113688, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_completed"), Global_113706, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_available"), Global_113689, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_completed"), Global_113707, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_available"), Global_113690, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_completed"), Global_113708, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_available"), Global_113691, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_available"), Global_113695, 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_completed"), (Global_113711 + Global_113710), 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_available"), (Global_113694 + Global_113693), 1);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	unk_0x4F8678C02360C3D2(joaat("total_progress_made"), Global_113969.f_10197.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("percent_story_missions"), Global_113712, 1);
	unk_0x1164A75E490C27B6(joaat("percent_ambient_missions"), Global_113713, 1);
	unk_0x1164A75E490C27B6(joaat("percent_oddjobs"), Global_113714, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_113969.f_10197.f_3853))
	{
		func_51(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_50() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_49(0))
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

int func_49(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_50()
{
	return Global_32948;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_53()
{
	system::wait(0);
	if (unk_0xC13AFEAFC3F7AD96("tvscreen"))
	{
		unk_0xF8211BE23F0D0552("tvscreen");
		iLocal_31 = -1;
		unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
	}
}

void func_54()
{
	int iVar0;
	
	if (iLocal_39 == 4)
	{
		func_55();
	}
	if (unk_0xC13AFEAFC3F7AD96("tvscreen"))
	{
		unk_0xF8211BE23F0D0552("tvscreen");
	}
	system::wait(0);
	if (!unk_0xFC8BFE4B41177C22(iLocal_33))
	{
		func_69();
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iLocal_33);
	unk_0x106F99CDCDEED9A0("tvscreen", 0);
	unk_0xF1C26EB47E689774(iVar0);
	system::wait(0);
	if (iLocal_39 != 4)
	{
		while (!unk_0x4D05B3FECBCB8D97(iVar0))
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_33))
			{
				func_69();
			}
			if (!unk_0x71C1A46B17126AA4(iLocal_33))
			{
				func_69();
			}
			if (!unk_0xC13AFEAFC3F7AD96("tvscreen"))
			{
				unk_0x106F99CDCDEED9A0("tvscreen", 0);
			}
			if (!unk_0x4D05B3FECBCB8D97(iVar0))
			{
				unk_0xF1C26EB47E689774(iVar0);
			}
			system::wait(0);
		}
	}
	iLocal_31 = unk_0x08732C0099FA1813("tvscreen");
	func_3();
}

void func_55()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_33))
	{
		if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_33 = 0;
	iLocal_33 = unk_0x43AFC452F25F3A2F(joaat("v_ilev_mm_screen2"), Local_29, 1, 1, 0, 0);
	unk_0x5C96CEA06531AB03(iLocal_33, uLocal_30);
	unk_0x5D7CD709B34C90F0(iLocal_33, 1);
	unk_0x4285E11B28063EE0(iLocal_33, 0, 0);
	iLocal_35 = 0;
	iLocal_35 = unk_0x43AFC452F25F3A2F(joaat("v_ilev_mm_screen2_vl"), Local_29, 1, 1, 0, 0);
	unk_0x5C96CEA06531AB03(iLocal_35, uLocal_30);
	unk_0x5D7CD709B34C90F0(iLocal_35, 1);
	unk_0x4285E11B28063EE0(iLocal_35, 0, 0);
}

void func_56(var uParam0)
{
	func_57(uParam0, 0f);
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_33(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_58()
{
}

int func_59(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_60()
{
	Local_29 = { unk_0xD1A6A821F5AC81DB(iLocal_33, 1) };
	uLocal_30 = unk_0xCFC0C995455A6204(iLocal_33);
	func_62();
	if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("prop_tv_03"))
	{
		if (system::vdist(Local_29, -9,541955f, -1440,917f, 31,34692f) < 3f)
		{
			iLocal_39 = 0;
			Local_61 = { -9,8135f, -1440,913f, 31,3654f };
			Local_62 = { 0f, 0f, -134,3211f };
			Local_66 = { -9,3078f, -1440,931f, 30,1015f };
			StringCopy(&cLocal_42, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_51, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("prop_trev_tv_01"))
	{
		if (system::vdist(Local_29, 1978,425f, 3819,657f, 34,26763f) < 3f)
		{
			iLocal_39 = 2;
			Local_61 = { 1978,23f, 3819,65f, 34,2724f };
			Local_62 = { 0f, 0f, -105,15f };
			Local_66 = { 1978,33f, 3819,717f, 32,4501f };
			func_61();
			StringCopy(&cLocal_42, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_51, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("prop_tv_flat_01"))
	{
		if (system::vdist(Local_29, 3,6654f, 529,8486f, 173,6281f) < 3f)
		{
			iLocal_39 = 1;
			Local_61 = { 2,5724f, 527,9989f, 176,1619f };
			Local_62 = { 0f, 0f, -29,9488f };
			Local_66 = { 3,6654f, 529,8486f, 173,6281f };
			StringCopy(&cLocal_42, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_51, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("prop_tv_flat_02"))
	{
		if (system::vdist(Local_29, -1160,695f, -1520,745f, 10,49168f) < 3f)
		{
			iLocal_39 = 3;
			Local_61 = { -1160,502f, -1520,76f, 10,7393f };
			Local_62 = { 0f, 0f, 60,061f };
			Local_66 = { -1160,143f, -1520,495f, 9,6555f };
			StringCopy(&cLocal_42, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_51, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_screen2") || unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_scre_off"))
	{
		if (system::vdist(Local_29, -802,2527f, 173,0374f, 74,35708f) < 3f)
		{
			iLocal_39 = 4;
			Local_61 = { -802,8972f, 172,537f, 74,5801f };
			Local_62 = { 0f, 0f, -69,0273f };
			Local_66 = { -800,7292f, 173,2194f, 71,8348f };
			StringCopy(&cLocal_42, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_51, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("des_tvsmash_start"))
	{
		if (system::vdist(Local_29, -809,962f, 170,919f, 75,7407f) < 3f)
		{
			iLocal_39 = 5;
			Local_61 = { -808,3051f, 171,2623f, 77,2822f };
			Local_62 = { 1,8886f, 0f, 110,9232f };
			Local_66 = { -809,962f, 170,919f, 75,7407f };
			StringCopy(&cLocal_42, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_51, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_61()
{
	iLocal_34 = unk_0x43AFC452F25F3A2F(joaat("prop_tt_screenstatic"), Local_29, 1, 1, 0, 0);
	unk_0x5C96CEA06531AB03(iLocal_34, uLocal_30);
	unk_0x4285E11B28063EE0(iLocal_34, 1, 0);
	unk_0x5D7CD709B34C90F0(iLocal_34, 1);
}

void func_62()
{
	unk_0x7C7F282055FB517C(0, func_42(1), 0);
	if (func_59(22))
	{
		unk_0x7C7F282055FB517C(1, func_42(12), 0);
	}
	else
	{
		unk_0x7C7F282055FB517C(1, func_42(2), 0);
	}
}

void func_63()
{
	if (iLocal_39 == -1)
	{
		return;
	}
	if (Global_33009[iLocal_39 /*11*/].f_10 == 0)
	{
		if (iLocal_64 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_36))
			{
				unk_0x935364B4448CD584(iLocal_36, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_33))
			{
				unk_0x935364B4448CD584(iLocal_33, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_35))
			{
				unk_0x935364B4448CD584(iLocal_35, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_34))
			{
				unk_0x935364B4448CD584(iLocal_34, 0);
			}
			iLocal_64 = 0;
		}
	}
	else if (iLocal_64 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_36))
		{
			unk_0x935364B4448CD584(iLocal_36, 1);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_33))
		{
			unk_0x935364B4448CD584(iLocal_33, 1);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_35))
		{
			unk_0x935364B4448CD584(iLocal_35, 1);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_34))
		{
			unk_0x935364B4448CD584(iLocal_34, 1);
		}
		iLocal_64 = 1;
	}
}

bool func_64(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_65(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_33009[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (unk_0x761778199FE1211C())
	{
		if (unk_0xAB154BFC15F33733() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

void func_68()
{
}

void func_69()
{
	if (iLocal_39 == -1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_44(&iLocal_38);
	if (iLocal_39 != -1)
	{
		func_1();
		Global_33009[iLocal_39 /*11*/].f_6 = 0;
		Global_33009[iLocal_39 /*11*/].f_7 = 0;
		Global_33009[iLocal_39 /*11*/].f_8 = 0;
		Global_33009[iLocal_39 /*11*/].f_4 = 0;
		Global_33009[iLocal_39 /*11*/].f_5 = 0;
		Global_33009[iLocal_39 /*11*/].f_2 = 0;
		Global_33009[iLocal_39 /*11*/] = -1;
		Global_33009[iLocal_39 /*11*/].f_1 = 0;
		Global_33009[iLocal_39 /*11*/].f_10 = 0;
	}
	if ((func_43("TV_HLP1") || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		unk_0x428C32CC68809A35(1);
	}
	system::wait(0);
	func_70();
	if (unk_0xBC2EE32DE886BD08(&cLocal_51))
	{
		unk_0xB43467C43086A6A1(&cLocal_51);
	}
	unk_0x3A2C09DEA2F7A5FB();
	func_2();
	unk_0xBBC29EBE6E1A48FA();
}

void func_70()
{
	func_53();
	if (unk_0xFC8BFE4B41177C22(iLocal_33))
	{
		if (unk_0x4B423FAA24E8ABF0(iLocal_33) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x51C8BEA2005931AB(&iLocal_33);
			unk_0x55098D9E9AD58806(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_35))
	{
		unk_0x51C8BEA2005931AB(&iLocal_35);
		unk_0x55098D9E9AD58806(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_34))
	{
		unk_0x51C8BEA2005931AB(&iLocal_34);
		unk_0x55098D9E9AD58806(joaat("prop_tt_screenstatic"));
	}
}

