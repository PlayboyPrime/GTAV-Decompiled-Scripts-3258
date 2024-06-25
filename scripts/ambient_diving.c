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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	struct<8> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<11> Local_46[30];
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54[4] = { 0, 0, 0, 0 };
	float fLocal_55[4] = { 0f, 0f, 0f, 0f };
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	bLocal_38 = true;
	bLocal_39 = true;
	iLocal_49 = -1;
	iLocal_59 = 1;
	uLocal_61 = unk_0xCA369FBC0DE29517();
	if (unk_0x96CFB880BAC634CE(210))
	{
		func_75(1);
	}
	if (unk_0x486FF5D06E9659F1(joaat("ambient_diving")) > 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_74(27);
	while (true)
	{
		system::wait(0);
		if (func_71(0))
		{
			if (!iLocal_65)
			{
				func_75(0);
				iLocal_65 = 1;
			}
		}
		else
		{
			iLocal_65 = 0;
			func_70(unk_0x4A8C381C258A124D());
			switch (iLocal_47)
			{
				case 0:
					func_65();
					break;
				
				case 1:
					func_62();
					func_53();
					func_1();
					break;
				
				case 2:
					func_53();
					break;
				
				case 3:
					func_75(1);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_40, &Local_46) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_60)
			{
				bLocal_60 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_47 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar1;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113969.f_7691.f_911 == Var0.f_0)
		{
			Global_113969.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x8744D2E3FC95740E(&(Var0.f_1), true);
		unk_0x8744D2E3FC95740E(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 10);
		}
		Global_113969.f_7691[Global_113969.f_7691.f_136 /*15*/] = { Var0 };
		Global_113969.f_7691.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam2, bVar1))
			{
				func_4(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

void func_4(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113969.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113969.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113969.f_7691.f_764)
	{
		if (BitTest(Global_113969.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113969.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113969.f_7691.f_919[bParam0] = iVar1;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_9();
	}
}

void func_9()
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
		func_12(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_11() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
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

int func_11()
{
	return Global_32948;
}

int func_12(int iParam0, int iParam1)
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

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_14()
{
	return Global_1574926;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		Global_113969.f_14054.f_89 = 1;
	}
	else
	{
		Global_113969.f_14054.f_89 = 0;
	}
}

int func_16()
{
	if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	
	unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D());
	Var2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_52(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_51((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_49(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_49(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_34(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_79650)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_50, &uLocal_48, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (func_24(&Local_40, &Local_46, Var3, &iVar4))
			{
				if (unk_0xED977E2AE2CB16EE(func_23(iVar4), Var3, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_60 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_20413.f_150[iVar1]), bVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_22();
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036,73f, 6735,72f, -100,52f;
			break;
		
		case 1:
			return -908,86f, 6655,98f, -34,35f;
			break;
		
		case 2:
			return -985,14f, 6697,71f, -41,57f;
			break;
		
		case 3:
			return 1825,73f, -2920,67f, -36,82f;
			break;
		
		case 4:
			return 1772,11f, -2967,72f, -46,81f;
			break;
		
		case 5:
			return 3198,59f, -385,05f, -31,49f;
			break;
		
		case 6:
			return 3170,43f, -302,21f, -25,99f;
			break;
		
		case 7:
			return 3157,44f, -268,54f, -28,07f;
			break;
		
		case 8:
			return -3180,2f, 3010,9f, -37,6f;
			break;
		
		case 9:
			return -3178,3f, 3044,86f, -39,96f;
			break;
		
		case 10:
			return 910,48f, -3471,21f, -17,57f;
			break;
		
		case 11:
			return 1338,76f, -3041,59f, -19,23f;
			break;
		
		case 12:
			return 1153,38f, -2864,51f, -18,96f;
			break;
		
		case 13:
			return 958,56f, -2847,78f, -22,05f;
			break;
		
		case 14:
			return 782,28f, -2872,81f, -9,577f;
			break;
		
		case 15:
			return 581,28f, -2471,5f, -9,44f;
			break;
		
		case 16:
			return 636,56f, -2214,49f, -7,87f;
			break;
		
		case 17:
			return 371,06f, -3226,67f, -19,6f;
			break;
		
		case 18:
			return 689,69f, -3451,07f, -27,85f;
			break;
		
		case 19:
			return 180,17f, -2255,91f, -2,54f;
			break;
		
		case 20:
			return -691,64f, -2836,86f, -15,67f;
			break;
		
		case 21:
			return -3397,5f, 3717,52f, -86,14f;
			break;
		
		case 22:
			return -3357,11f, 3710,79f, -96,14f;
			break;
		
		case 23:
			return -3282,21f, 3682,6f, -82,87f;
			break;
		
		case 24:
			return -3256,66f, 3672,29f, -35,06f;
			break;
		
		case 25:
			return -3142,19f, 3625,95f, -26,31f;
			break;
		
		case 26:
			return 3271,34f, 6420,78f, -50,78f;
			break;
		
		case 27:
			return 3237,83f, 6487,44f, -43,9f;
			break;
		
		case 28:
			return 1772,1f, -2997,12f, -50,44f;
			break;
		
		case 29:
			return 3207f, -415,17f, -32,01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_52(&(uParam0->f_1), iVar0))
		{
			fVar1 = system::vdist2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_33(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
				if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
				{
					uVar0 = unk_0xCA369FBC0DE29517();
					if (iParam3 == 6)
					{
						unk_0xBF3D28CA44F3BE2D(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xBF3D28CA44F3BE2D(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x88F483FBD433696A(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x882AEFD55B8D51FB(sParam6);
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB(sParam7);
				unk_0x511D14ED2DA887E1(func_28(iParam3));
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
				*uParam2 = unk_0x1DD05E817C89C737();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x1DD05E817C89C737() - *uParam2) > 7000)
				{
					unk_0x88F483FBD433696A(*uParam5, "SHARD_ANIM_OUT");
					unk_0x330108B080A2132F(1);
					unk_0x74BF156C860580D4(0,33f);
					unk_0xE6B753D52F4CA222();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
					{
						func_33(1);
						unk_0xA91A4C18A2DB01BD(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x1DD05E817C89C737() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
					{
						func_33(1);
						unk_0xA91A4C18A2DB01BD(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
				{
					unk_0xD314260005F064BF(uParam5);
				}
				func_33(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_32(iParam0))
		{
			if (BitTest(Global_113969.f_10052.f_108, func_31(func_32(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_32(iParam0))
		{
			iVar2 = (func_30(iParam0) + iVar1);
			if (func_29(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_29(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_30(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_32(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_33(int iParam0)
{
	if (Global_79657 != iParam0)
	{
		Global_79657 = iParam0;
	}
}

int func_34(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x1D56B24774D5E23C((uParam1[bVar0 /*11*/])->f_1) || func_47((uParam1[bVar0 /*11*/])->f_1))
			{
				func_37(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (unk_0xB0E14182FAD64944((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((system::vdist2(Param2, unk_0x80C8AA1625977488((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_36(13)) || func_36(14))
		{
			func_35(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_35(var uParam0)
{
	if (unk_0xB0E14182FAD64944(*uParam0))
	{
		unk_0xDDFB0941A19702BE(*uParam0);
	}
}

bool func_36(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_37(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_30(*uParam0) + bParam2);
	func_35(&((uParam1[bParam2 /*11*/])->f_1));
	func_46(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_45(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_44(*uParam0, bParam2, 1);
	}
	unk_0x97A041099E92C69F(0, 200, 250);
	unk_0x3CAC0DB32E69B1B8(uParam0->f_6, 1f);
	if (bLocal_39)
	{
		func_43(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_41(&(uParam0->f_1));
	}
	func_39();
	unk_0x4E84B27CF8AA616F(iVar0);
	func_38(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_38(int iParam0, int iParam1)
{
	Global_101572.f_7 = iParam0;
	Global_101572.f_8 = iParam1;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xDF7F16323520B858(func_40(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	unk_0xDF7F16323520B858(func_40(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	unk_0xDF7F16323520B858(func_40(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_32(0) + func_32(1)) + func_32(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x1164A75E490C27B6(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_40(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_52(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_42(168, 0);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

void func_43(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_52(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_38)
		{
		}
	}
	if (bLocal_38)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_42(168, 0);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_122), bParam1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_10052.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_10052.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_125), bParam1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_10052.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_10052.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_45(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(uParam0, bParam1);
		}
		else
		{
			unk_0x8744D2E3FC95740E(uParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), (bParam1 - 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1), (bParam1 - 32));
	}
}

void func_46(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

int func_47(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	if (func_48(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = unk_0x4B423FAA24E8ABF0(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uParam0)) < (5f * 5f) || unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), unk_0xA9D6BD2486442887(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_48(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_49(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_36(13) && !func_36(14))
			{
				if (!unk_0xB0E14182FAD64944(uParam0->f_1))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xEC9DAA34BBB4658C(uParam1);
						while (!unk_0x6252BC0DD8A320DB(uParam1))
						{
							unk_0xEC9DAA34BBB4658C(uParam1);
							system::wait(0);
						}
						if (bParam3)
						{
							func_50(uParam0->f_3);
						}
						unk_0x2094BC4B6731BA68(uParam0->f_3, 2,5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, true);
							uParam0->f_1 = unk_0x6FCBED6282FF5DA5(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 3);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 8);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, true);
							uParam0->f_1 = unk_0x8D4CAF9A056EA9E4(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0x55098D9E9AD58806(uParam1);
					}
				}
			}
			if (unk_0xB0E14182FAD64944(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_50(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x0E171121A3A25363(Param0);
	if (unk_0xF8A8852F99E201DD(uVar0))
	{
		unk_0x74C1590CC91B3930(uVar0);
		while (!unk_0xD0B0D1BD29678350(uVar0))
		{
			system::wait(0);
		}
		system::wait(0);
		unk_0xBBB6D0F765409642(uVar0);
	}
}

bool func_51(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

void func_53()
{
	float fVar0;
	
	switch (iLocal_64)
	{
		case 0:
			if (func_60())
			{
				if (func_48(uLocal_62))
				{
					func_59();
					unk_0x3E29597A27D861B2(uLocal_62, 0);
					iLocal_64 = 1;
					if (iLocal_47 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_48(uLocal_62) && func_48(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_58(unk_0x4A8C381C258A124D(), uLocal_62, 0) > fVar0)
				{
					func_57();
					if (iLocal_47 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_59();
				if (iLocal_47 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_47 == 2)
			{
				func_2(3);
			}
			if (!func_60())
			{
				if (func_48(uLocal_62))
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_63))
					{
						uLocal_63 = func_54(uLocal_62, 0, 0);
					}
					unk_0xC229299217554C78(uLocal_62, 0, 1, 0);
					if (unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(uLocal_62)))
					{
						if (!unk_0x14E25ED5E75102C8(uLocal_62))
						{
							unk_0x3E29597A27D861B2(uLocal_62, 1);
						}
					}
					iLocal_64 = 0;
				}
			}
			break;
	}
}

int func_54(var uParam0, bool bParam1, bool bParam2)
{
	return func_55(uParam0, !bParam1, bParam2);
}

int func_55(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(uParam0);
	if (unk_0x55B80B6E7AB61270(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_56(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_56(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_56(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_56(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_57()
{
	func_59();
	if (func_48(uLocal_62))
	{
		if (unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(uLocal_62)))
		{
			unk_0x3E29597A27D861B2(uLocal_62, 0);
		}
		unk_0x3A95CBA6857C4C37(uLocal_62, 0);
		if (unk_0x110821AE6C63DD4F(uLocal_62))
		{
			unk_0x68298CA6191CDFDB(&uLocal_62);
		}
	}
}

float func_58(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

void func_59()
{
	if (unk_0xC450B06E5AAA0985(uLocal_63))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_63);
	}
}

int func_60()
{
	if (func_48(unk_0x4A8C381C258A124D()))
	{
		if (func_48(uLocal_62))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uLocal_62, 0))
			{
				return 1;
			}
		}
		else if (func_61())
		{
			uLocal_62 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xFC8BFE4B41177C22(uLocal_62))
			{
				unk_0xEE0BCDB1B5E36BCB(uLocal_62, 1, 1);
				unk_0x3A95CBA6857C4C37(uLocal_62, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("dinghy") || unk_0x4B423FAA24E8ABF0(uVar0) == joaat("dinghy2"))
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

void func_62()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	if (func_24(&Local_40, &Local_46, Var0, &iLocal_49))
	{
		Var1 = { func_23(iLocal_49) };
		fVar2 = unk_0xED977E2AE2CB16EE(Var1, Var0, 0);
		if (fVar2 > 200f)
		{
			func_64();
			if (!iLocal_59)
			{
				iLocal_59 = 1;
			}
			if (func_61())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_49 != iLocal_52)
				{
					if (unk_0xC450B06E5AAA0985(uLocal_51))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_51);
					}
				}
				if (!unk_0xC450B06E5AAA0985(uLocal_51))
				{
					uLocal_51 = unk_0x339BF323C4261E69(Var1, 200f);
					unk_0xF42EBD7CD0682A8B(uLocal_51, 128);
					unk_0x61183D6239A9D7B8(uLocal_51, 2);
					unk_0xA1DFF583C8070610(uLocal_51, 0);
					unk_0x594D5D0D7071B0DE(uLocal_51, "B_WRE");
					unk_0x89FE619BFBB2024B(uLocal_51, 0);
					iLocal_52 = iLocal_49;
				}
			}
			else if (unk_0xC450B06E5AAA0985(uLocal_51))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_51);
			}
		}
		else
		{
			if (func_61())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()) && !unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (unk_0xC450B06E5AAA0985(uLocal_51))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_51);
			}
			if (iLocal_49 != iLocal_52)
			{
				func_64();
				iLocal_52 = iLocal_49;
				iLocal_59 = 1;
			}
			if (Local_40.f_1.f_4 < Local_40.f_1.f_3)
			{
				if (iLocal_59)
				{
					fLocal_56 = 0f;
					fLocal_57 = fVar2;
					if (func_61())
					{
						fLocal_57 = func_63(fLocal_57, 20f, 200f);
					}
					else
					{
						fLocal_57 = func_63(fLocal_57, 10f, 200f);
					}
					fLocal_58 = (fLocal_57 * 0,025f);
					iLocal_59 = 0;
					if (func_61())
					{
						unk_0xF37CDE164C892195(uLocal_61, "SINGLE_BLIP_FROM_BOAT", Var1, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						unk_0xF37CDE164C892195(uLocal_61, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_56 = (fLocal_56 + fLocal_58);
					fLocal_56 = func_63(fLocal_56, 0f, fLocal_57);
					if (!unk_0xC450B06E5AAA0985(uLocal_53))
					{
						uLocal_53 = unk_0x339BF323C4261E69(Var1, fLocal_56);
						unk_0xF42EBD7CD0682A8B(uLocal_53, 255);
						unk_0x61183D6239A9D7B8(uLocal_53, 4);
						unk_0x360B279488A775FC(uLocal_53, 1);
						unk_0x641FCCDF2824DCFD(uLocal_53, 1);
						unk_0x89FE619BFBB2024B(uLocal_53, 0);
					}
					else
					{
						unk_0x5D3946F818C6B331(uLocal_53, fLocal_56);
					}
					iVar3 = 0;
					if (func_61())
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (!unk_0xC450B06E5AAA0985(uLocal_54[iVar3]))
							{
								uLocal_54[iVar3] = unk_0x339BF323C4261E69(Var1, (fLocal_56 + fLocal_55[iVar3]));
								unk_0xF42EBD7CD0682A8B(uLocal_54[iVar3], 255);
								unk_0x61183D6239A9D7B8(uLocal_54[iVar3], 4);
								unk_0x360B279488A775FC(uLocal_54[iVar3], 1);
								unk_0x641FCCDF2824DCFD(uLocal_54[iVar3], 1);
								unk_0x89FE619BFBB2024B(uLocal_54[iVar3], 0);
							}
							else
							{
								unk_0x5D3946F818C6B331(uLocal_54[iVar3], (fLocal_56 + fLocal_55[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (unk_0xC450B06E5AAA0985(uLocal_54[iVar3]))
							{
								unk_0x5D3946F818C6B331(uLocal_54[iVar3], fLocal_56);
							}
							iVar3++;
						}
					}
					if (fLocal_56 >= fLocal_57)
					{
						iLocal_59 = 1;
					}
				}
			}
			else
			{
				func_64();
			}
		}
	}
}

float func_63(float fParam0, float fParam1, float fParam2)
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

void func_64()
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(uLocal_53))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_53);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_54[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_54[iVar0]));
		}
		iVar0++;
	}
}

void func_65()
{
	iLocal_50 = 0;
	if (func_60())
	{
		iLocal_64 = 1;
	}
	else
	{
		iLocal_64 = 0;
	}
	func_69();
	func_68(&Local_40, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_66(&Local_40, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_55[0] = 0,25f;
	fLocal_55[1] = 0,5f;
	fLocal_55[2] = 0,75f;
	fLocal_55[3] = 1f;
}

void func_66(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_67(&(uParam0->f_1), iParam2, iParam3);
}

void func_67(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_38)
	{
	}
	bVar0 = false;
	while (bVar0 < uParam0->f_3)
	{
		if (func_29((uParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_45(uParam0, bVar0, 1);
			if (bLocal_38)
			{
			}
		}
		bVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_46[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_46[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_46[0 /*11*/].f_6 = { -16,4f, 78,53f, -146,67f };
	Local_46[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_46[2 /*11*/].f_6 = { 0,72f, 65,2f, -50,26f };
	Local_46[3 /*11*/].f_6 = { 0f, 15f, -132,16f };
	Local_46[4 /*11*/].f_6 = { 166,37f, -40f, 168,81f };
	Local_46[5 /*11*/].f_6 = { 90f, 56,2f, 90f };
	Local_46[6 /*11*/].f_6 = { -20f, 0f, 89,95f };
	Local_46[7 /*11*/].f_6 = { 4,08f, 54,9f, -65,35f };
	Local_46[8 /*11*/].f_6 = { 174,15f, -58,2f, -144,66f };
	Local_46[9 /*11*/].f_6 = { -28,22f, 36,11f, -90,22f };
	Local_46[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_46[11 /*11*/].f_6 = { 0f, -108f, 45,36f };
	Local_46[12 /*11*/].f_6 = { -10,9f, 43,12f, 131,52f };
	Local_46[13 /*11*/].f_6 = { 12,37f, 49,66f, 126,88f };
	Local_46[14 /*11*/].f_6 = { 4,35f, 10,22f, 27,51f };
	Local_46[15 /*11*/].f_6 = { 0f, 10f, 60,73f };
	Local_46[16 /*11*/].f_6 = { 150,56f, -78,67f, -174,35f };
	Local_46[17 /*11*/].f_6 = { 0f, 50f, 46,41f };
	Local_46[18 /*11*/].f_6 = { 6,26f, 44,65f, 8,88f };
	Local_46[19 /*11*/].f_6 = { 90f, 78,5f, 16,04f };
	Local_46[20 /*11*/].f_6 = { -1,36f, 6,53f, -70,94f };
	Local_46[21 /*11*/].f_6 = { -61,86f, 78,61f, 126,5f };
	Local_46[22 /*11*/].f_6 = { -10f, -80,71f, 69,7f };
	Local_46[23 /*11*/].f_6 = { -76,43f, -70,02f, 29,74f };
	Local_46[24 /*11*/].f_6 = { -28f, -70f, 107,53f };
	Local_46[25 /*11*/].f_6 = { 4,19f, 6,46f, 110,43f };
	Local_46[26 /*11*/].f_6 = { -3,19f, 60,6f, 25f };
	Local_46[27 /*11*/].f_6 = { 0f, -81,68f, -20,16f };
	Local_46[28 /*11*/].f_6 = { 7,39f, 44,52f, 19,65f };
	Local_46[29 /*11*/].f_6 = { 89,74f, 80,95f, 151,74f };
}

bool func_70(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

int func_71(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_72(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, Global_44042);
}

int func_73(int iParam0, int iParam1)
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

int func_74(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_75(bool bParam0)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(uLocal_51))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_51);
	}
	func_64();
	if (!unk_0x9F0C06CFBACDD6A1(uLocal_61))
	{
		unk_0x8E4825CCACA34B58(uLocal_61);
	}
	func_57();
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		func_46(&(Local_46[iVar0 /*11*/].f_2));
		func_35(&(Local_46[iVar0 /*11*/].f_1));
		Local_46[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_77(&(Local_40.f_1)) || func_17(110) == 1)
		{
			func_76(27);
		}
		unk_0x55098D9E9AD58806(Local_40.f_7);
		unk_0xBBC29EBE6E1A48FA();
	}
	else
	{
		iLocal_47 = 0;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

