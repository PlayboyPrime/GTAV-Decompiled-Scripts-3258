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
	struct<3> Local_19 = { 0, 0, 0 } ;
	struct<18> Local_20 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	struct<178> Local_40[27];
	var uLocal_41 = 0;
	struct<24> Local_42[30];
	var uLocal_43 = 0;
	struct<24> Local_44[24];
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	bool bLocal_62 = 0;
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
	iLocal_39 = 29;
	fLocal_47 = 0,075f;
	fLocal_48 = 0,725f;
	iLocal_55 = 1;
	iLocal_56 = 1;
	bLocal_62 = true;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_43();
	}
	unk_0x8F72AF14CE5AACE4(0);
	unk_0x9C091F2E9354854A(1);
	func_36(1);
	bLocal_62 = false;
	unk_0x839AD252B0708F35("fos_ep_1_p1", 8);
	func_19(0);
	func_8(1, 1, 1, 0, 0, 0, 0);
	while (true)
	{
		unk_0xA0265306DFF63938(0f);
		unk_0xF9A2335AB37CF17E(0f);
		func_7(unk_0x4A8C381C258A124D());
		if (func_2())
		{
			func_43();
		}
		if (bLocal_54)
		{
			unk_0xBFE94E91C83D8794(0,5f, 0,5f);
			func_1(0,1f, 0,1f, "NUMBER", 1, 0);
		}
		system::wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
}

int func_2()
{
	unk_0xCBE10A13619B9FAA(Local_19.f_0, Local_19.f_1, Local_19.f_2);
	unk_0x65D8EA648927792B(-1f);
	switch (iLocal_57)
	{
		case 0:
			unk_0x10B228D2FDB7AF16(0);
			func_6();
			unk_0x10B228D2FDB7AF16(500);
			unk_0xED65412F8B26ED99(0);
			iLocal_57++;
			break;
		
		case 1:
			if (!unk_0xC9BA6D804FA4FAAA())
			{
				if (bLocal_62)
				{
					func_4();
				}
				unk_0x61055542D9D877AE(uLocal_51);
				unk_0x6D16B99FEB0AFFF1(uLocal_49, 0,2f, 0,34f, 0,410001f, 0,69f, 100, 100, 100, 255, 0);
				unk_0x61055542D9D877AE(uLocal_52);
				if (bLocal_53)
				{
					unk_0x88F483FBD433696A(uLocal_50, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0xE6B753D52F4CA222();
					unk_0x6D16B99FEB0AFFF1(uLocal_50, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x15EF8F22A719BE5E();
	bVar1 = false;
	while (bVar1 <= (16 - 1))
	{
		if (Local_20[bVar1] != -1)
		{
			if ((!BitTest(uLocal_37, bVar1) && iVar0 >= Local_20[bVar1]) && iVar0 < Local_20.f_17[bVar1])
			{
				func_5();
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_37, bVar1);
			}
		}
		bVar1++;
	}
}

void func_5()
{
}

void func_6()
{
}

bool func_7(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_18(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_17())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_16(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_18(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_16(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_14(unk_0x259BE71D8A81D4FA())) && !func_10(unk_0x259BE71D8A81D4FA(), 0)) && !func_9()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_14(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_9()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_13(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574926;
}

int func_13(var uParam0)
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

int func_14(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_15())
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

bool func_15()
{
	return BitTest(Global_2621446, 3);
}

int func_16(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_17()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
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

void func_19(bool bParam0)
{
	int iVar0;
	
	if (func_7(unk_0x4A8C381C258A124D()))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 689,1f, 586,5f, 130,5f, 1, 0, 0, 1);
		unk_0x55F7AC4B2B875901(689,1f, 586,5f, 130,5f, 500f, 0);
		unk_0x1834D30866818A23(unk_0x4A8C381C258A124D(), 1);
	}
	func_35(0);
	func_34(&uLocal_61, 0);
	unk_0x4A3280817398D754(689,1f, 586,5f, 130,5f, 80f, 0);
	while (!unk_0x9E2D35FA908F57B4())
	{
		system::wait(0);
	}
	unk_0x6981C3213B841071();
	if (bParam0)
	{
		unk_0xECFC57F5F11BCD83("LInvader");
		while (!unk_0x5AEB336317DC4151("LInvader"))
		{
			system::wait(0);
		}
	}
	unk_0xE38A58649E049502("EXTRASUNNY");
	iLocal_38[0] = joaat("a_m_y_hipster_01");
	iLocal_38[1] = joaat("a_m_y_hipster_02");
	iLocal_38[2] = joaat("a_m_y_hipster_03");
	iLocal_38[3] = joaat("a_f_y_hipster_01");
	iLocal_38[4] = joaat("a_f_y_hipster_02");
	iLocal_38[5] = joaat("a_f_y_hipster_03");
	iLocal_38[6] = joaat("a_f_y_hipster_04");
	iLocal_38[7] = joaat("a_f_y_bevhills_01");
	iLocal_38[8] = joaat("a_m_m_business_01");
	iLocal_38[9] = joaat("a_m_m_bevhills_02");
	iLocal_38[10] = joaat("a_m_m_skater_01");
	iLocal_38[11] = joaat("a_m_y_beachvesp_01");
	iLocal_38[12] = joaat("a_m_y_bevhills_01");
	iLocal_38[13] = joaat("a_f_m_bevhills_01");
	iLocal_38[14] = joaat("a_m_m_ktown_01");
	iLocal_38[15] = joaat("a_m_y_busicas_01");
	iLocal_38[16] = joaat("a_m_y_business_02");
	iLocal_38[17] = joaat("a_m_y_gay_01");
	iLocal_38[18] = joaat("a_m_y_ktown_02");
	iLocal_38[19] = joaat("a_m_m_bevhills_02");
	iLocal_38[20] = joaat("a_m_y_business_03");
	iLocal_38[21] = joaat("a_m_y_gay_02");
	iLocal_38[22] = joaat("a_m_m_malibu_01");
	iLocal_38[22] = joaat("a_m_y_gay_02");
	iLocal_38[23] = joaat("a_m_y_eastsa_02");
	iLocal_38[24] = joaat("a_m_y_soucent_02");
	iLocal_38[25] = joaat("a_m_y_vinewood_01");
	iLocal_38[26] = joaat("a_m_y_vinewood_02");
	iLocal_38[27] = joaat("a_m_y_vinewood_03");
	iLocal_38[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_32(func_33(iVar0), 1);
		iVar0++;
	}
	func_32("misslester1b_crowdlow@14@", 1);
	func_32("misslester1b_crowdlow@24@", 1);
	func_31("BREAKING_NEWS", &uLocal_50, 1);
	func_31("lifeinvader_presentation", &uLocal_49, 1);
	func_30("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_24(&(Local_40[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_23(&(Local_42[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_22(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0xA4F67CEB594AE064(1);
	unk_0x106F99CDCDEED9A0("Big_Disp", 0);
	unk_0xF1C26EB47E689774(joaat("prop_huge_display_01"));
	unk_0xF1C26EB47E689774(joaat("prop_huge_display_02"));
	uLocal_51 = unk_0x08732C0099FA1813("Big_Disp");
	uLocal_52 = unk_0xB803C9D209A7C3DC();
	while (unk_0x642A49B0C066F723(unk_0x4A8C381C258A124D()))
	{
		system::wait(0);
	}
	while (!unk_0x0DDDD9D153BCF51F())
	{
		system::wait(0);
	}
	system::wait(2000);
	iLocal_57 = 0;
	Local_19.f_0 = 12;
	Local_19.f_1 = 0;
	Local_19.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_20(iVar0);
		iVar0++;
	}
	if (bLocal_54)
	{
	}
}

void func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_21(iParam0, 0, 10000);
			break;
		
		case 1:
			func_21(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_21(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_21(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_21(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_21(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_21(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_21(iParam0, 69600, joaat("ss1_03_98_lod"));
			break;
		
		case 8:
			func_21(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_21(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_21(iParam0, -1, -1);
			break;
		
		case 11:
			func_21(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_21(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_21(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_21(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_21(iParam0, 154200, 154200);
			break;
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	Local_20[iParam0] = iParam1;
	Local_20.f_17[iParam0] = iParam2;
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0x8744D2E3FC95740E(&uLocal_45, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0x8744D2E3FC95740E(&uLocal_43, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_24(var uParam0, int iParam1)
{
	struct<3> Var0;
	
	func_29(uParam0);
	unk_0x8744D2E3FC95740E(&uLocal_41, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (func_28(-4,29f) + 180f) };
			func_26(uParam0, 82047830, 667,319f, 572,133f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 83248680, 666,312f, 571,675f, 128,521f, Var0, 6, 1, 0);
			func_26(uParam0, 71526810, 665,235f, 571,183f, 128,521f, Var0, 6, 2, 0);
			func_26(uParam0, 49826530, 664,124f, 570,679f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 78575440, 663,029f, 570,181f, 128,521f, Var0, 6, 1, 0);
			func_26(uParam0, 12133230, 661,937f, 569,685f, 128,521f, Var0, 6, 2, 0);
			func_26(uParam0, 89665750, 660,839f, 569,194f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 65990810, 659,537f, 569,392f, 128,521f, Var0, 6, 1, 0);
			func_26(uParam0, 21233450, 658,187f, 569,572f, 128,523f, Var0, 4, 0, 1f);
			func_25(&(uParam0->f_155[0 /*11*/]), 659,867f, 571,539f, 128,531f, Var0, 0, 0,5f, -1,5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 660,646f, 567,108f, 128,521f, Var0, 0, 0,5f, -1,5f);
			break;
		
		case 1:
			Var0 = { 0f, 0f, (func_28(-3,98f) + 180f) };
			func_26(uParam0, 21091970, 670,312f, 568,023f, 128,521f, Var0, 5, 0, 0,5f);
			func_26(uParam0, 97482490, 669,189f, 567,502f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 66764240, 668,28f, 566,688f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 82832850, 667,384f, 565,885f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 33636100, 666,491f, 565,085f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 22769640, 665,595f, 564,282f, 128,522f, Var0, 6, 1, 0);
			break;
		
		case 2:
			Var0 = { 0f, 0f, (func_28(-3,78f) + 180f) };
			func_26(uParam0, 91480760, 673,7f, 564,799f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 64996320, 672,996f, 563,847f, 128,521f, Var0, 6, 1, 0);
			func_26(uParam0, 30855220, 672,271f, 562,865f, 128,521f, Var0, 6, 2, 0);
			func_26(uParam0, 98921990, 671,557f, 561,897f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 73357200, 670,258f, 561,366f, 128,522f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 669,564f, 563,469f, 128,521f, Var0, 2, -1,5f, -1,5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 672,34f, 559,914f, 128,522f, Var0, 2, -1,5f, -1,5f);
			break;
		
		case 3:
			Var0 = { 0f, 0f, (func_28(-3,38f) + 180f) };
			func_26(uParam0, 89689390, 681,517f, 555,801f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 71057000, 681,796f, 556,967f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 26206390, 682,076f, 558,137f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 58207860, 682,36f, 559,342f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 43622440, 682,635f, 560,475f, 128,522f, Var0, 6, 1, 0);
			break;
		
		case 4:
			Var0 = { 0f, 0f, (func_28(-3,17f) + 180f) };
			func_26(uParam0, 78555440, 687,841f, 559,785f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 12324420, 687,807f, 558,602f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 4083210, 687,771f, 557,382f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 2021980, 688,465f, 556,159f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 21091970, 688,431f, 554,961f, 128,521f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 685,931f, 556,306f, 128,522f, Var0, 0, 0,5f, -1,5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 685,897f, 555,108f, 128,521f, Var0, 1, -1,5f, -1,5f);
			break;
		
		case 5:
			Var0 = { 0f, 0f, (func_28(-2,97f) + 180f) };
			func_26(uParam0, 31491440, 692,632f, 559,992f, 128,522f, Var0, 5, 2, -0,5f);
			func_26(uParam0, 34393340, 693,189f, 558,886f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 94762900, 693,396f, 557,684f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 95283980, 693,6f, 556,498f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 92416940, 693,803f, 555,317f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 53597080, 694,007f, 554,131f, 128,522f, Var0, 6, 1, 0);
			break;
		
		case 6:
			Var0 = { 0f, 0f, (func_28(-2,7f) + 180f) };
			func_26(uParam0, 86170110, 697,492f, 561,188f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 62247860, 697,964f, 560,188f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 43665230, 698,467f, 559,116f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 32906070, 698,988f, 558,013f, 128,522f, Var0, 6, 0, 0);
			func_26(uParam0, 70836820, 699,502f, 556,925f, 128,522f, Var0, 6, 1, 0);
			func_26(uParam0, 67800350, 700,014f, 555,841f, 128,522f, Var0, 6, 2, 0);
			func_26(uParam0, 41115560, 701,184f, 555,063f, 128,521f, Var0, 6, 0, 0);
			func_26(uParam0, 98430790, 701,005f, 553,758f, 128,522f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 698,861f, 554,048f, 128,521f, Var0, 0, 0,5f, -1,5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 703,267f, 554,91f, 128,522f, Var0, 0, 0,5f, -1,5f);
			break;
		
		case 7:
			Var0 = { 0f, 0f, (func_28(-3,99f) + 180f) };
			func_26(uParam0, 13168530, 652,833f, 570,052f, 128,529f, Var0, 6, 0, 0);
			func_26(uParam0, 92127780, 652,006f, 569,319f, 128,528f, Var0, 6, 1, 0);
			func_26(uParam0, 51664260, 651,136f, 568,538f, 128,729f, Var0, 6, 2, 0);
			func_26(uParam0, 35914010, 650,242f, 567,746f, 128,729f, Var0, 6, 0, 0);
			func_26(uParam0, 43076060, 649,661f, 566,94f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 21755390, 648,426f, 566,137f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 8:
			Var0 = { 0f, 0f, (func_28(-3,9f) + 180f) };
			func_26(uParam0, 20501110, 656,955f, 565,868f, 128,53f, Var0, 6, 0, 0);
			func_26(uParam0, 10114780, 656,193f, 565,067f, 128,53f, Var0, 6, 1, 0);
			func_26(uParam0, 12664730, 655,358f, 564,19f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 32956570, 654,534f, 563,324f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 11862860, 653,696f, 562,443f, 128,93f, Var0, 6, 1, 0);
			func_26(uParam0, 87809290, 652,862f, 561,566f, 128,93f, Var0, 6, 2, 0);
			break;
		
		case 9:
			Var0 = { 0f, 0f, (func_28(-3,76f) + 180f) };
			func_26(uParam0, 75170110, 662,947f, 560,965f, 128,529f, Var0, 6, 0, 0);
			func_26(uParam0, 62246860, 662,306f, 560,065f, 128,529f, Var0, 6, 1, 0);
			func_26(uParam0, 83665250, 661,603f, 559,079f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 22016170, 660,91f, 558,106f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 41846840, 660,204f, 557,116f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 10000350, 659,502f, 556,13f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 10:
			Var0 = { 0f, 0f, (func_28(-3,68f) + 180f) };
			func_26(uParam0, 86878180, 667,872f, 557,785f, 128,53f, Var0, 6, 0, 0);
			func_26(uParam0, 22242820, 667,31f, 556,833f, 128,53f, Var0, 6, 1, 0);
			func_26(uParam0, 93969290, 666,693f, 555,791f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 12101010, 666,086f, 554,762f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 20232220, 665,467f, 553,715f, 128,93f, Var0, 6, 1, 0);
			func_26(uParam0, 57707370, 664,852f, 552,673f, 128,93f, Var0, 6, 2, 0);
			break;
		
		case 11:
			Var0 = { 0f, 0f, (func_28(-3,53f) + 180f) };
			func_26(uParam0, 13130110, 674,882f, 554,326f, 128,529f, Var0, 6, 0, 0);
			func_26(uParam0, 97845810, 674,46f, 553,305f, 128,529f, Var0, 6, 1, 0);
			func_26(uParam0, 12345670, 673,997f, 552,186f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 89101110, 673,541f, 551,081f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 12131410, 673,076f, 549,958f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 51617180, 672,613f, 548,839f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 12:
			Var0 = { 0f, 0f, (func_28(-3,45f) + 180f) };
			func_26(uParam0, 60616260, 680,396f, 552,335f, 128,53f, Var0, 6, 0, 0);
			func_26(uParam0, 36465660, 680,063f, 551,281f, 128,53f, Var0, 6, 1, 0);
			func_26(uParam0, 67686970, 679,697f, 550,127f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 71727370, 679,336f, 548,988f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 47576770, 678,969f, 547,829f, 128,93f, Var0, 6, 1, 0);
			func_26(uParam0, 78798080, 678,603f, 546,674f, 128,93f, Var0, 6, 2, 0);
			break;
		
		case 13:
			Var0 = { 0f, 0f, (func_28(-3,31f) + 180f) };
			func_26(uParam0, 11511610, 688,034f, 550,483f, 128,529f, Var0, 6, 0, 0);
			func_26(uParam0, 17118110, 687,853f, 549,393f, 128,529f, Var0, 6, 1, 0);
			func_26(uParam0, 91201210, 687,653f, 548,199f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 12212310, 687,457f, 547,02f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 23124120, 687,257f, 545,821f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 51261270, 687,058f, 544,627f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 14:
			Var0 = { 0f, 0f, (func_28(-3,22f) + 180f) };
			func_26(uParam0, 15515610, 693,855f, 549,783f, 128,53f, Var0, 6, 0, 0);
			func_26(uParam0, 57158150, 693,767f, 548,682f, 128,53f, Var0, 6, 1, 0);
			func_26(uParam0, 91601610, 693,67f, 547,474f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 16216310, 693,575f, 546,283f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 64165160, 693,478f, 545,071f, 128,93f, Var0, 6, 1, 0);
			func_26(uParam0, 61671680, 693,381f, 543,865f, 128,93f, Var0, 6, 2, 0);
			break;
		
		case 15:
			Var0 = { 0f, 0f, (func_28(-3,08f) + 180f) };
			func_26(uParam0, 19920020, 701,652f, 549,708f, 128,529f, Var0, 6, 0, 0);
			func_26(uParam0, 1202200, 701,721f, 548,605f, 128,529f, Var0, 6, 1, 0);
			func_26(uParam0, 32042050, 701,795f, 547,396f, 128,729f, Var0, 6, 2, 0);
			func_26(uParam0, 20620720, 701,869f, 546,203f, 128,729f, Var0, 6, 0, 0);
			func_26(uParam0, 8209210, 701,944f, 544,99f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 2112120, 702,019f, 543,781f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 16:
			Var0 = { 0f, 0f, (func_28(-2,99f) + 180f) };
			func_26(uParam0, 24024120, 707,482f, 550,335f, 128,53f, Var0, 6, 0, 0);
			func_26(uParam0, 43244240, 707,644f, 549,242f, 128,53f, Var0, 6, 1, 0);
			func_26(uParam0, 42452460, 707,821f, 548,044f, 128,73f, Var0, 6, 2, 0);
			func_26(uParam0, 24724820, 707,996f, 546,862f, 128,73f, Var0, 6, 0, 0);
			func_26(uParam0, 48249250, 708,174f, 545,659f, 128,929f, Var0, 6, 1, 0);
			func_26(uParam0, 2512520, 708,351f, 544,461f, 128,929f, Var0, 6, 2, 0);
			break;
		
		case 17:
			Var0 = { 0f, 0f, (func_28(-3,98f) + 180f) };
			func_26(uParam0, 46779100, 646,434f, 564,522f, 128,927f, Var0, 6, 0, 0);
			func_26(uParam0, 93643160, 645,612f, 563,784f, 128,927f, Var0, 6, 1, 0);
			func_26(uParam0, 34729570, 644,71f, 562,975f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 28556490, 643,821f, 562,177f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 75335160, 642,916f, 561,365f, 129,327f, Var0, 6, 1, 0);
			func_26(uParam0, 84872300, 642,015f, 560,557f, 129,327f, Var0, 6, 2, 0);
			break;
		
		case 18:
			Var0 = { 0f, 0f, (func_28(-3,91f) + 180f) };
			func_26(uParam0, 65187100, 651,092f, 559,707f, 128,926f, Var0, 6, 0, 0);
			func_26(uParam0, 87514460, 650,325f, 558,912f, 128,926f, Var0, 6, 1, 0);
			func_26(uParam0, 46165810, 649,483f, 558,04f, 128,127f, Var0, 6, 2, 0);
			func_26(uParam0, 12560720, 648,654f, 557,18f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 27854880, 647,809f, 556,306f, 129,326f, Var0, 6, 1, 0);
			func_26(uParam0, 97601360, 646,968f, 555,435f, 129,326f, Var0, 6, 2, 0);
			break;
		
		case 19:
			Var0 = { 0f, 0f, (func_28(-3,75f) + 180f) };
			func_26(uParam0, 55178130, 657,925f, 554,108f, 128,927f, Var0, 6, 0, 0);
			func_26(uParam0, 75148880, 657,29f, 553,204f, 128,927f, Var0, 6, 1, 0);
			func_26(uParam0, 88865540, 656,593f, 552,213f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 64916770, 655,906f, 551,235f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 70536220, 655,207f, 550,241f, 129,327f, Var0, 6, 1, 0);
			func_26(uParam0, 17101310, 654,512f, 549,25f, 129,327f, Var0, 6, 2, 0);
			break;
		
		case 20:
			Var0 = { 0f, 0f, (func_28(-3,68f) + 180f) };
			func_26(uParam0, 76870120, 663,545f, 550,463f, 128,926f, Var0, 6, 0, 0);
			func_26(uParam0, 32147850, 662,977f, 549,515f, 128,926f, Var0, 6, 1, 0);
			func_26(uParam0, 97662220, 662,353f, 548,477f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 12107070, 661,738f, 547,453f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 60841880, 661,111f, 546,411f, 129,326f, Var0, 6, 1, 0);
			func_26(uParam0, 27803350, 660,489f, 545,373f, 129,326f, Var0, 6, 2, 0);
			break;
		
		case 21:
			Var0 = { 0f, 0f, (func_28(-3,53f) + 180f) };
			func_26(uParam0, 19202120, 671,531f, 546,515f, 128,927f, Var0, 6, 0, 0);
			func_26(uParam0, 22232420, 671,116f, 545,491f, 128,927f, Var0, 6, 1, 0);
			func_26(uParam0, 52627280, 670,66f, 544,369f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 29303130, 670,211f, 543,262f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 23334350, 669,753f, 542,135f, 129,327f, Var0, 6, 1, 0);
			func_26(uParam0, 36373830, 669,298f, 541,014f, 129,327f, Var0, 6, 2, 0);
			break;
		
		case 22:
			Var0 = { 0f, 0f, (func_28(-3,46f) + 180f) };
			func_26(uParam0, 18283840, 677,828f, 544,227f, 128,926f, Var0, 6, 0, 0);
			func_26(uParam0, 85858680, 677,487f, 543,176f, 128,926f, Var0, 6, 1, 0);
			func_26(uParam0, 78889900, 677,112f, 542,024f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 91929390, 676,744f, 540,888f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 49596970, 676,368f, 539,731f, 129,326f, Var0, 6, 1, 0);
			func_26(uParam0, 98991000, 675,994f, 538,58f, 129,326f, Var0, 6, 2, 0);
			break;
		
		case 23:
			Var0 = { 0f, 0f, (func_28(-3,3f) + 180f) };
			func_26(uParam0, 12812910, 686,526f, 542,118f, 128,927f, Var0, 6, 0, 0);
			func_26(uParam0, 30131130, 686,352f, 541,027f, 128,927f, Var0, 6, 1, 0);
			func_26(uParam0, 21331340, 686,16f, 539,831f, 129,127f, Var0, 6, 1, 0);
			func_26(uParam0, 13513610, 685,972f, 538,652f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 37138130, 685,779f, 537,451f, 129,327f, Var0, 6, 1, 0);
			func_26(uParam0, 91401410, 685,588f, 536,256f, 129,327f, Var0, 6, 2, 0);
			break;
		
		case 24:
			Var0 = { 0f, 0f, (func_28(-3,23f) + 180f) };
			func_26(uParam0, 16917010, 693,176f, 541,306f, 128,926f, Var0, 6, 0, 0);
			func_26(uParam0, 71172170, 693,08f, 540,205f, 128,926f, Var0, 6, 1, 0);
			func_26(uParam0, 31741750, 692,975f, 538,998f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 17617810, 692,871f, 537,808f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 79180180, 692,765f, 536,597f, 129,326f, Var0, 6, 1, 0);
			func_26(uParam0, 21831840, 692,66f, 535,391f, 129,326f, Var0, 6, 2, 0);
			break;
		
		case 25:
			Var0 = { 0f, 0f, (func_28(-3,07f) + 180f) };
			func_26(uParam0, 21321420, 702,065f, 541,218f, 128,927f, Var0, 6, 0, 0);
			func_26(uParam0, 15216210, 702,14f, 540,116f, 128,927f, Var0, 6, 1, 0);
			func_26(uParam0, 72182190, 702,223f, 538,907f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 22022120, 702,304f, 537,715f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 22223220, 702,387f, 536,502f, 129,327f, Var0, 6, 1, 0);
			func_26(uParam0, 42252260, 703,116f, 526,841f, 129,618f, Var0, 6, 2, 0);
			break;
		
		case 26:
			Var0 = { 0f, 0f, (func_28(-3f) + 180f) };
			func_26(uParam0, 25325420, 708,727f, 541,922f, 128,926f, Var0, 6, 0, 0);
			func_26(uParam0, 55256250, 709,881f, 539,828f, 128,926f, Var0, 6, 1, 0);
			func_26(uParam0, 72582590, 709,05f, 539,628f, 129,127f, Var0, 6, 2, 0);
			func_26(uParam0, 26026120, 709,217f, 538,445f, 129,127f, Var0, 6, 0, 0);
			func_26(uParam0, 62263260, 709,386f, 537,241f, 129,326f, Var0, 6, 1, 0);
			func_26(uParam0, 42652650, 709,555f, 536,043f, 129,326f, Var0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_25(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, float fParam4, float fParam5)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 1;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_26(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5, int iParam6)
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_27(uParam0[uParam0->f_154 /*17*/], iParam1, Param2, Param3, iParam4, iParam5, iParam6);
	uParam0->f_154++;
}

void func_27(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, var uParam4, var uParam5, var uParam6)
{
	*uParam0 = { Param2 };
	uParam0->f_3 = { Param3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

float func_28(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_29(var uParam0)
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_30(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737() + 7500;
	unk_0xF2CB0224D3BE0B42(sParam0, iParam1);
	if (unk_0xDCB78A15E5F495DC(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xDCB78A15E5F495DC(iParam1))
	{
		system::wait(0);
		if (unk_0x1DD05E817C89C737() > iVar0 && !unk_0xDCB78A15E5F495DC(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_31(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0x8DE4F68A9728925E(sParam0);
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xA0C7B98BCF1EEF9E(*uParam1))
	{
		system::wait(0);
		if (unk_0x1DD05E817C89C737() > iVar0 && !unk_0xA0C7B98BCF1EEF9E(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_32(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737() + 7500;
	unk_0x80813AC549A1E8AE(sParam0);
	if (unk_0xE100DD4F82A51BDE(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0xE100DD4F82A51BDE(sParam0))
	{
		system::wait(0);
		if (unk_0x1DD05E817C89C737() > iVar0 && !unk_0xE100DD4F82A51BDE(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_33(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_34(var uParam0, int iParam1)
{
	unk_0xAD9B1C8FED6B4D96(0);
	unk_0x9E635675ADA39E95(1);
	unk_0x283C0970282AA5F3(0);
	unk_0xD81FEE0302584F60(1);
	unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xD682DD0578BF5392(0);
	unk_0x312DFD78768FEAA0(1);
	*uParam0 = unk_0xA7B0B03284E7503C(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1, 1);
	unk_0x470041F66BF345BA("DRIVE", 0);
	unk_0xA63572E348CC4CFB(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1);
	unk_0xC4BCE90F7242F354(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(unk_0x4A8C381C258A124D()) && iParam1 == 1)
	{
		unk_0x55F7AC4B2B875901(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 500f, 0);
	}
}

void func_35(int iParam0)
{
	unk_0xCC1C92F7E1A3CE9D(2, iParam0);
	unk_0xCC1C92F7E1A3CE9D(3, iParam0);
	unk_0xCC1C92F7E1A3CE9D(4, iParam0);
	unk_0xCC1C92F7E1A3CE9D(5, iParam0);
	unk_0xCC1C92F7E1A3CE9D(6, iParam0);
	unk_0xCC1C92F7E1A3CE9D(7, iParam0);
	unk_0xCC1C92F7E1A3CE9D(8, iParam0);
	unk_0xCC1C92F7E1A3CE9D(9, iParam0);
	unk_0xCC1C92F7E1A3CE9D(10, iParam0);
	unk_0xCC1C92F7E1A3CE9D(11, iParam0);
	unk_0xCC1C92F7E1A3CE9D(12, iParam0);
}

void func_36(bool bParam0)
{
	if (bParam0)
	{
		func_42();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_41(0))
		{
			func_37(0);
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

void func_37(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_39())
		{
			func_38(1, 1);
		}
		else
		{
			func_38(0, 0);
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
	if (!func_17())
	{
		Global_20930.f_1 = 3;
	}
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
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

bool func_39()
{
	return BitTest(Global_1956920, 5);
}

bool func_40()
{
	return BitTest(Global_1956920, 19);
}

int func_41(int iParam0)
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

void func_42()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_43()
{
	func_44();
	func_8(0, 1, 1, 0, 0, 0, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_44()
{
	int iVar0;
	
	if (unk_0x0CB7695268A7F50F())
	{
		if (unk_0xFD216000DC314A92())
		{
			unk_0xA7E4AA8D29D3DAC1();
		}
		unk_0xDD291722ADDCBD60();
	}
	func_54(&uLocal_58);
	unk_0xF8211BE23F0D0552("Big_Disp");
	unk_0x5373E9377066509E("LInvader");
	unk_0xD314260005F064BF(&uLocal_49);
	unk_0xD314260005F064BF(&uLocal_50);
	unk_0xA21EFB60FCA3D0F6();
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		func_51(&(Local_40[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		func_48(&(Local_42[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		func_48(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_38)
	{
		func_47(iLocal_38[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_46(func_33(iVar0));
		iVar0++;
	}
	func_45(uLocal_61);
	func_8(0, 1, 1, 0, 0, 0, 0);
}

void func_45(var uParam0)
{
	unk_0x9E635675ADA39E95(0);
	unk_0xAD9B1C8FED6B4D96(3);
	unk_0xD81FEE0302584F60(0);
	unk_0x283C0970282AA5F3(3);
	unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xD682DD0578BF5392(1);
	unk_0x312DFD78768FEAA0(0);
	unk_0xD7B6A43ACC36D868(uParam0, 0);
	unk_0x470041F66BF345BA("DRIVE", 1);
	unk_0xA63572E348CC4CFB(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 1, 1);
}

void func_46(var uParam0)
{
	unk_0x268BE77F77533D03(uParam0);
}

void func_47(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x55098D9E9AD58806(iParam0);
	}
}

void func_48(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = func_50(uParam0->f_16);
	uVar2 = func_49(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]) && !unk_0x1C2F771CDC87A3A5(uParam0->f_17[iVar0], 0))
		{
			unk_0x1D949F0AD44C7F05(uParam0->f_17[iVar0], uVar2, uVar1, -1000f);
		}
		func_54(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_49(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_50(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_51(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_53(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_52(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_52(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(uParam0);
	}
}

void func_53(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_52(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_54(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		unk_0x51C8BEA2005931AB(uParam0);
	}
}

