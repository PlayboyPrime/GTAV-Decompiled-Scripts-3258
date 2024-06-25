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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	struct<2> Local_69 = { 0, 5 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 5;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	struct<3> Var1;
	var uVar2;
	struct<2> Var3;
	int iVar4[7];
	bool bVar5;
	
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = unk_0x8CC13B3BF7A9890A();
	uLocal_46 = unk_0x2A3612A4B836469E();
	uLocal_50 = func_332(64);
	uLocal_51 = func_332(63);
	iLocal_52 = joaat("u_m_m_aldinapoli");
	iLocal_53 = joaat("premier");
	iLocal_66 = -1;
	unk_0x2918C30E34ED2C88(1);
	func_331();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	uVar2 = 15;
	func_330(&Var0);
	Var1 = { ScriptParam_69.f_1[0 /*3*/] };
	Var3.f_1 = -1;
	iVar4[0] = 37;
	iVar4[1] = 38;
	iVar4[2] = 39;
	iVar4[3] = 40;
	iVar4[4] = 41;
	iVar4[5] = 42;
	iVar4[6] = 43;
	if (unk_0x96CFB880BAC634CE(83))
	{
		func_329("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_113056[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_329("Relinquishing candidate id...");
				func_328(&(Global_113056[Var0.f_0 /*10*/].f_9));
			}
		}
		func_310(&Var0, &Var3, 1);
	}
	if (!func_307(&iVar4, &Var0, Var1, 1f))
	{
		func_306();
		func_329("SCRIPT TERMINATED");
		unk_0xBBC29EBE6E1A48FA();
	}
	if (!func_298(Var0.f_0))
	{
		func_306();
		func_329("SCRIPT TERMINATED");
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_297(Var0.f_0))
	{
		func_306();
		func_329("SCRIPT TERMINATED");
		unk_0xBBC29EBE6E1A48FA();
	}
	while (!func_262(&Var0, &uVar2))
	{
		system::wait(0);
		if (!unk_0x173751E886F8E9AB())
		{
			func_329("Player out of range [TERMINATING]");
			func_310(&Var0, &Var3, 1);
		}
	}
	if (Var0.f_0 == 43)
	{
		Var3.f_0 = 0;
	}
	unk_0x2094BC4B6731BA68(Var1, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		system::wait(0);
		if (!func_228(&Var0, 1))
		{
			func_310(&Var0, &Var3, 1);
		}
		func_227(Var0.f_0);
		func_220(&iLocal_66, &(Var0.f_9), Var1);
		if (Var0.f_0 == 42)
		{
			if (unk_0xB3FA103AA6383C28())
			{
				unk_0xFE61105198EA3496(func_219(), 4, 0, 0, func_218());
				func_329("Nigel 2 : set Di Napoli's cutscene trousers variation in launcher");
			}
		}
		if (func_217(&uLocal_54) && Var0.f_0 == 37)
		{
			func_214(Var0.f_28[1], &uLocal_54, Var0.f_0);
		}
		if (Var0.f_0 == 37)
		{
			func_210(&Var0, Var1, "NIG1AAU", "NIG1A_AMB", 0, "NIGEL", 1, "MRSTHORNHILL", &uLocal_68);
		}
		else if (Var0.f_0 == 42)
		{
			func_205(&Var0, Var1, "NIG2AUD", "NIG2_AMB", 4, "NIGEL", 5000, 14f);
		}
		else if (Var0.f_0 == 43)
		{
			func_203(&Var3, &(Var0.f_35[0]), &(Var0.f_28[1]));
			func_205(&Var0, -44,75f, -1289,86f, 29,16f, "NIGE3AU", "NIGEL3_AMB", 4, "NIGEL", 8000, 1101004800);
		}
		bVar5 = false;
		if (Var0.f_0 == 41)
		{
			if (func_201(&Var0, &uVar2) || func_200(&Var0))
			{
				bVar5 = true;
			}
		}
		else if (func_185(&Var0, 0))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			if (Var0.f_0 == 42)
			{
				func_184(1, 0, 1, 0);
			}
			if (func_183(Var0.f_0))
			{
				func_180(Var0.f_0, &uLocal_67);
			}
			if (!func_2(&Var0))
			{
				func_310(&Var0, &Var3, 1);
			}
			if (func_1(&Var0))
			{
				func_310(&Var0, &Var3, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_113056[*iParam0 /*10*/])
	{
		system::wait(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_179())
	{
		while (!func_170(*iParam0))
		{
			if (func_169(*iParam0))
			{
				func_157();
			}
			if (!func_228(iParam0, *iParam0 != 2))
			{
				func_329("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			system::wait(0);
		}
	}
	if (func_156())
	{
		func_154();
	}
	if (!func_123(iParam0))
	{
		func_329("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_120(*iParam0, &Var0);
	MemCopy(&sVar1, {func_119(*iParam0)}, 4);
	func_117(&sVar1, Var0.f_3, 0);
	func_114(*iParam0);
	if (!func_179())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0.f_0);
	return 1;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	unk_0x8744D2E3FC95740E(&(Global_113969.f_18577[iParam0 /*6*/]), 5);
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			system::wait(0);
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) < 1)
	{
		Global_64167 = 0;
		unk_0x97A5024CE91641F1("mission_stat_watcher");
		while (!unk_0xA6E4F7A73ABC4A76("mission_stat_watcher"))
		{
			system::wait(0);
		}
		system::start_new_script("mission_stat_watcher", 1828);
		unk_0xFD49725F3FE7EE13("mission_stat_watcher");
	}
	while (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 5))
	{
		if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_18577[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_64164 == 1)
	{
		func_18();
		Global_64164 = 0;
		if (Global_64159)
		{
			return;
		}
	}
	if (Global_4)
	{
		Global_64167 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_64181, {func_9(iParam0)}, 4);
	Global_64169 = 0;
	Global_64168 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_64156 = 1;
			Global_64159 = 1;
			Global_64162 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_64167 = 1;
			Global_64168 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_76411;
	Global_76411 = 1;
	iVar1 = Global_76412;
	Global_76412 = iParam0;
	if (!Global_64156)
	{
		if ((Global_76412 != iVar1 || Global_76261 == 0) || iVar0 != Global_76411)
		{
			Global_33202 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_64159 = 1;
		}
	}
	Global_64194 = unk_0x1DD05E817C89C737();
	func_5();
	Global_64166 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_64163)
	{
		return;
	}
	if (Global_76261 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		switch (Global_64391[Global_76262[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_76262[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_64174)
				{
					Global_76262[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_76262[iVar0 /*9*/].f_1 != 0)
					{
						Global_76262[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_64163 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_64159 = 1;
	Global_64162 = 1;
	if (Global_76261 > 15)
	{
		return;
	}
	func_8(Global_76261);
	Global_76262[Global_76261 /*9*/] = iParam0;
	Global_76261++;
	if (Global_64391[iParam0 /*13*/] == 16)
	{
		Global_76413 = 1;
	}
}

void func_8(int iParam0)
{
	Global_76262[iParam0 /*9*/].f_1 = 0;
	Global_76262[iParam0 /*9*/].f_2 = 0f;
	Global_76262[iParam0 /*9*/].f_3 = 0;
	Global_76262[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_119(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

void func_10()
{
	if (Global_64166)
	{
		return;
	}
	Global_64175 = 0;
	Global_76261 = 0;
	Global_64177 = 0;
	if (Global_64174)
	{
	}
	Global_64174 = 0;
	func_17(0);
	func_16();
	Global_76413 = 0;
	Global_64165 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_64156 = 0;
	Global_64186 = 0;
	Global_64194 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_76448[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_76457 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_76414[iVar0 /*2*/] = 0;
		Global_76414[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_76447 = 0;
}

void func_13()
{
	Global_64325 = 0;
}

void func_14()
{
	Global_64185 = 0;
	Global_64189 = func_15(joaat("sp0_shots"));
	Global_64188 = func_15(joaat("sp0_hits"));
	Global_64191 = func_15(joaat("sp1_shots"));
	Global_64190 = func_15(joaat("sp1_hits"));
	Global_64193 = func_15(joaat("sp2_shots"));
	Global_64192 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	unk_0xDF7F16323520B858(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_64195 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_64196[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_64164 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		Global_76262[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_64174)
	{
	}
	Global_64174 = 0;
}

void func_19()
{
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_64161 && !Global_64160)
			{
				Global_64161 = 0;
				unk_0xD13237BC328B938E("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xD13237BC328B938E("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_64159)
	{
		return 0;
	}
	return Global_64171;
}

void func_21(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_101533 != 10 && Global_101533 != 9)
	{
		StringCopy(&Global_104522, cParam0, 32);
		func_25(&Global_104530, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_95691 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_107514 = Global_104530;
	Global_107514.f_1 = Global_104530.f_1;
	Global_107514.f_6 = Global_104530.f_6;
	Global_107514.f_7 = Global_104530.f_7;
	Global_107514.f_8 = Global_104530.f_8;
	Global_107514.f_2 = Global_104530.f_2;
	Global_107514.f_3 = Global_104530.f_3;
	Global_107514.f_4 = Global_104530.f_4;
	Global_107514.f_5 = Global_104530.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_107514.f_9[iVar1] = Global_104530.f_9[iVar1];
		Global_107514.f_13[iVar1] = Global_104530.f_13[iVar1];
		Global_107514.f_17[iVar1] = Global_104530.f_17[iVar1];
		Global_107514.f_21[iVar1] = Global_104530.f_21[iVar1];
		Global_107514.f_25[0 /*295*/][iVar1 /*98*/] = { Global_104530.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_107514.f_25[1 /*295*/][iVar1 /*98*/] = { Global_104530.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_107514.f_616[iVar1 /*65*/][iVar0] = Global_104530.f_616[iVar1 /*65*/][iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_13[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_26[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_107514.f_616[iVar1 /*65*/].f_59 = Global_104530.f_616[iVar1 /*65*/].f_59;
		Global_107514.f_616[iVar1 /*65*/].f_60 = Global_104530.f_616[iVar1 /*65*/].f_60;
		Global_107514.f_616[iVar1 /*65*/].f_61 = Global_104530.f_616[iVar1 /*65*/].f_61;
		Global_107514.f_616[iVar1 /*65*/].f_62 = Global_104530.f_616[iVar1 /*65*/].f_62;
		Global_107514.f_616[iVar1 /*65*/].f_63 = Global_104530.f_616[iVar1 /*65*/].f_63;
		Global_107514.f_616[iVar1 /*65*/].f_64 = Global_104530.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_107514.f_616[iVar1 /*65*/].f_39[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_49[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_107514.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_104530.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_107514.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_104530.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_107514.f_2244[iVar1 /*32*/][iVar0] = Global_104530.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_107514.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_104530.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_107514.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_104530.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_107514.f_2341[iVar1] = Global_104530.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_107514.f_2838[iVar1 /*15*/][iVar0] = Global_104530.f_2838[iVar1 /*15*/][iVar0];
			Global_107514.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_104530.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_107514.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_104530.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_107514.f_2345[iVar1 /*164*/][iVar0] = Global_104530.f_2345[iVar1 /*164*/][iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_107514.f_2884 = { Global_104530.f_2884 };
	Global_107514.f_2884.f_3 = Global_104530.f_2884.f_3;
	Global_107514.f_2890 = { Global_104530.f_2890 };
	Global_107514.f_2890.f_3 = { Global_104530.f_2890.f_3 };
	Global_107514.f_2890.f_6 = Global_104530.f_2890.f_6;
	Global_107514.f_2890.f_8 = Global_107514.f_2890.f_8;
	Global_107514.f_2890.f_7 = Global_104530.f_2890.f_7;
	Global_107514.f_2890.f_9 = Global_104530.f_2890.f_9;
	Global_107514.f_2890.f_11 = Global_104530.f_2890.f_11;
	Global_107514.f_2890.f_10 = Global_104530.f_2890.f_10;
	Global_107514.f_2890.f_12 = Global_104530.f_2890.f_12;
	Global_107514.f_2890.f_12.f_1 = { Global_104530.f_2890.f_12.f_1 };
	Global_107514.f_2890.f_12.f_5 = Global_104530.f_2890.f_12.f_5;
	Global_107514.f_2890.f_12.f_6 = Global_104530.f_2890.f_12.f_6;
	Global_107514.f_2890.f_12.f_7 = Global_104530.f_2890.f_12.f_7;
	Global_107514.f_2890.f_12.f_8 = Global_104530.f_2890.f_12.f_8;
	Global_107514.f_2890.f_12.f_9 = { Global_104530.f_2890.f_12.f_9 };
	Global_107514.f_2890.f_12.f_59 = { Global_104530.f_2890.f_12.f_59 };
	Global_107514.f_2890.f_12.f_62 = Global_104530.f_2890.f_12.f_62;
	Global_107514.f_2890.f_12.f_63 = Global_104530.f_2890.f_12.f_63;
	Global_107514.f_2890.f_12.f_64 = Global_104530.f_2890.f_12.f_64;
	Global_107514.f_2890.f_12.f_65 = Global_104530.f_2890.f_12.f_65;
	Global_107514.f_2890.f_12.f_77 = Global_104530.f_2890.f_12.f_77;
	Global_107514.f_2890.f_12.f_66 = Global_104530.f_2890.f_12.f_66;
	Global_107514.f_2890.f_12.f_67 = Global_104530.f_2890.f_12.f_67;
	Global_107514.f_2890.f_12.f_68 = Global_104530.f_2890.f_12.f_68;
	Global_107514.f_2890.f_12.f_69 = Global_104530.f_2890.f_12.f_69;
	Global_107514.f_2890.f_12.f_71 = Global_104530.f_2890.f_12.f_71;
	Global_107514.f_2890.f_12.f_72 = Global_104530.f_2890.f_12.f_72;
	Global_107514.f_2890.f_12.f_73 = Global_104530.f_2890.f_12.f_73;
	Global_107514.f_2890.f_12.f_74 = Global_104530.f_2890.f_12.f_74;
	Global_107514.f_2890.f_12.f_75 = Global_104530.f_2890.f_12.f_75;
	Global_107514.f_2890.f_12.f_76 = Global_104530.f_2890.f_12.f_76;
	Global_107514.f_2980 = Global_104530.f_2980;
	Global_107514.f_2980.f_1 = Global_104530.f_2980.f_1;
	Global_107514.f_2980.f_2 = Global_104530.f_2980.f_2;
	Global_107514.f_2980.f_3 = Global_104530.f_2980.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_113();
	uParam0->f_1 = func_102();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(unk_0x4A8C381C258A124D());
		func_60(unk_0x4A8C381C258A124D(), 0);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_48(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_79084 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_34(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_35(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_36(bool bParam0)
{
	return bParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_41(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_41(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				*uParam1 = unk_0xDC8D5832207C2EAD();
			}
			else
			{
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
			}
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
						{
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_113(), 1))
						{
							sVar0 = unk_0x1AF90EB93E0012D6();
							if (!unk_0x1B79E937E91F40C3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(bParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_48(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(bVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_53(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3);
			}
			uParam1->f_60 = func_49(754, iParam3);
			uParam1->f_61 = func_49(755, iParam3);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_53(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3);
			}
		}
	}
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_50(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_50(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_51(uParam1));
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1574926;
}

int func_53(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_54(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_54(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_51(uParam1));
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_46(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_45(unk_0x4A8C381C258A124D());
			if (func_36(iVar0) && (!func_59(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_36(Global_113969.f_2366.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_60(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_61(iParam0, &(Global_113969.f_2366.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] = unk_0xFCFCA9D377ED6568(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xAE146ED24909CAF4();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &uVar3);
			if (bVar0 == 0)
			{
				unk_0x1164A75E490C27B6(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 1)
			{
				unk_0x1164A75E490C27B6(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 2)
			{
				unk_0x1164A75E490C27B6(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_64(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_63(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, iVar1, &Var8))
						{
							if (!func_62(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_62(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[bVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	
	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (BitTest(Global_79638, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			bVar3 = func_113();
			if (bVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (bVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (bVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_69(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, sParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_72(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_101())
		{
			*uParam0 = func_78(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_76() == 0)
		{
			return BitTest(func_49(func_75(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_76()
{
	return Global_32948;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam1 == 6 || iParam1 == func_100(iVar0))
		{
			if (!bParam3 || func_99(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_79(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_96(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_95())
			{
				if (func_94(Global_1845111))
				{
					return func_87(2, 2);
				}
				else if (func_86(Global_1845111))
				{
					return func_87(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_84(-9,9f, -0,5f, 1f);
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (func_83())
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_80();
			break;
		
		case 59:
			return 560f, -405f, -69,6591f;
			break;
		
		case 60:
			return -1299,691f, -3017,165f, -48,2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_80()
{
	if (!func_82(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_81())
	{
		case 0:
			return -29,532f, 6435,136f, 31,162f;
		
		case 1:
			return 1705,214f, 4819,167f, 41,75f;
		
		case 2:
			return 1795,522f, 3899,753f, 33,869f;
		
		case 3:
			return 1335,536f, 2758,746f, 51,099f;
		
		case 4:
			return 795,583f, 1210,78f, 338,962f;
		
		case 5:
			return -3192,67f, 1077,205f, 20,594f;
		
		case 6:
			return -789,719f, 5400,921f, 33,915f;
		
		case 7:
			return -24,384f, 3048,167f, 40,703f;
		
		case 8:
			return 2666,786f, 1469,324f, 24,237f;
		
		case 9:
			return -1454,966f, 2667,503f, 3,2f;
		
		case 10:
			return 2340,418f, 3054,188f, 47,888f;
		
		case 11:
			return 1509,183f, -2146,795f, 76,853f;
		
		case 12:
			return 1137,404f, -1358,654f, 34,322f;
		
		case 13:
			return -57,208f, -2658,793f, 5,737f;
		
		case 14:
			return 1905,017f, 565,222f, 175,558f;
		
		case 15:
			return 974,484f, -1718,798f, 30,296f;
		
		case 16:
			return 779,077f, -3266,297f, 5,719f;
		
		case 17:
			return -587,728f, -1637,208f, 19,611f;
		
		case 18:
			return 733,99f, -736,803f, 26,165f;
		
		case 19:
			return -1694,632f, -454,082f, 40,712f;
		
		case 20:
			return -1330,726f, -1163,948f, 4,313f;
		
		case 21:
			return -496,618f, 40,231f, 52,316f;
		
		case 22:
			return 275,527f, 66,509f, 94,108f;
		
		case 23:
			return 260,928f, -763,35f, 30,559f;
		
		case 24:
			return -478,025f, -741,45f, 30,299f;
		
		case 25:
			return 894,94f, 3603,911f, 32,56f;
		
		case 26:
			return -2166,511f, 4289,503f, 48,733f;
		
		case 27:
			return 1465,633f, 6553,67f, 13,771f;
		
		case 28:
			return 1101,032f, -335,172f, 66,944f;
		
		case 29:
			return 149,683f, -1655,674f, 29,028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_81()
{
	return Global_2652592.f_2671;
}

int func_82(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

Vector3 func_84(struct<3> Param0)
{
	return unk_0xF10F2A2453AF1DFB(func_85(), 0f, Param0);
}

Vector3 func_85()
{
	return -880f, -2770f, -50f;
}

int func_86(int iParam0)
{
	if (iParam0 != func_95())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_87(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_95())
	{
		if (iParam1 == 3)
		{
			if (func_88(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_88(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_88(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_88(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_93(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_93(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_91(iParam0) };
	}
	else
	{
		Var2 = { func_90(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_89(Var3, -Var0.f_3.f_2) };
	Var3 = { func_89(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_89(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_90(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_91(int iParam0)
{
	return func_92(iParam0);
}

struct<6> func_92(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_93(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 != func_95())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	return -1;
}

Vector3 func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return func_85();
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_97() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_97()
{
	return func_98(unk_0x259BE71D8A81D4FA());
}

var func_98(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_99(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_101()
{
	return Global_101585.f_393 > 0;
}

var func_102()
{
	var uVar0;
	
	func_112(&uVar0, unk_0x4BA5A16068183C5E());
	func_111(&uVar0, unk_0x18E502A71E28968C());
	func_110(&uVar0, unk_0x5295501D0862870D());
	func_105(&uVar0, unk_0xB12880C92EA6EE15());
	func_104(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_103(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_105(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(*uParam0);
	iVar1 = func_107(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_106(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_107(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_108(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_108(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_109(var uParam0)
{
	return uParam0 & 15;
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

bool func_113()
{
	func_58();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_114(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_116())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(9, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_115())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(9, &cVar1);
	}
}

var func_115()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_116()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_117(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xD6F9DEE4765092A9(&Global_98583))
	{
		unk_0x1A6EB10909EB6840(&Global_98583, 0, 0, 0, 1, 0);
		StringCopy(&Global_98583, "", 64);
	}
	StringCopy(&Global_98583, sParam0, 64);
	unk_0x048963DA591ECAAF(sParam0, uParam1, iParam2, func_118(0));
}

int func_118(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

struct<2> func_119(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_120(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 1:
			func_121(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 2:
			func_121(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 3:
			func_121(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 4:
			func_121(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 5:
			func_121(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 6:
			func_121(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 7:
			func_121(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
		
		case 8:
			func_121(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 9:
			func_121(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 10:
			func_121(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 11:
			func_121(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 12:
			func_121(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 13:
			func_121(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 14:
			func_121(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 15:
			func_121(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 16:
			func_121(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 17:
			func_121(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 18:
			func_121(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 19:
			func_121(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 20:
			func_121(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 21:
			func_121(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 22:
			func_121(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 23:
			func_121(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
		
		case 24:
			func_121(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
		
		case 25:
			func_121(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 26:
			func_121(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 27:
			func_121(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 28:
			func_121(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 29:
			func_121(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 30:
			func_121(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 31:
			func_121(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 32:
			func_121(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 33:
			func_121(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 34:
			func_121(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 35:
			func_121(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 36:
			func_121(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 37:
			func_121(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 38:
			func_121(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 39:
			func_121(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 40:
			func_121(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 41:
			func_121(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 42:
			func_121(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 43:
			func_121(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 44:
			func_121(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 45:
			func_121(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 46:
			func_121(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 47:
			func_121(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 48:
			func_121(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 49:
			func_121(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 50:
			func_121(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 51:
			func_121(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 52:
			func_121(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 54:
			func_121(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 55:
			func_121(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 56:
			func_121(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 53:
			func_121(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 57:
			func_121(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 58:
			func_121(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 59:
			func_121(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 60:
			func_121(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 61:
			func_121(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 62:
			func_121(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_123(var* uParam0)
{
	int iVar0;
	
	if (func_153(&(uParam0->f_1)))
	{
		if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_9)))
		{
			func_143(1);
			func_141(uParam0, 1, func_142(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_140(*uParam0))
			{
				while (!unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
				{
					func_157();
					system::wait(0);
				}
			}
		}
		func_124(*uParam0);
		iVar0 = system::start_new_script_with_args(&(uParam0->f_1), uParam0, 61, 62500);
		unk_0xFD49725F3FE7EE13(&(uParam0->f_1));
		if (unk_0x0DDDD9D153BCF51F())
		{
			func_329("Initial cutscene loaded and passing to RC mission.");
			unk_0xA82578E07F14DD90(iVar0);
		}
		else
		{
			func_329("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xDD291722ADDCBD60();
		}
		return 1;
	}
	return 0;
}

void func_124(int iParam0)
{
	struct<2> Var0;
	
	func_139();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 250, 0);
	}
	if (func_138(iParam0))
	{
		unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 0);
	}
	unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xA790E8E6FD7393AC(0, 1);
	unk_0xA790E8E6FD7393AC(3, 1);
	unk_0xA790E8E6FD7393AC(2, 1);
	if (Global_45250 == 1)
	{
		if (func_136(unk_0x4A8C381C258A124D()))
		{
			func_127(unk_0x4A8C381C258A124D());
		}
	}
	if (!func_179())
	{
		if (iParam0 < 63)
		{
			func_125(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0xB51A8DA1DD0D2E4E(1, &Var0);
		}
	}
}

void func_125(int iParam0)
{
	if (iParam0 < 63)
	{
		func_126();
		Global_79645 = iParam0;
		Global_79644 = 0;
		Global_79647 = 7;
	}
}

void func_126()
{
	if (Global_79644 != 6)
	{
	}
	if (Global_79649)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_79649 = 0;
		Global_23831.f_9116 = 0;
	}
	Global_79644 = 6;
	Global_79646 = -1;
	Global_79645 = -1;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_130(1, iVar1, 1);
		return;
	}
	iVar2 = func_129(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_45005[iParam0 /*6*/].f_1 == 0)
	{
		if (Global_45005[iParam0 /*6*/].f_1 == unk_0x4A8C381C258A124D())
		{
			Global_45248 = 0;
		}
	}
	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = (Global_45003 - 1);
	if (Global_45003 < 0)
	{
		Global_45003 = 0;
	}
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
	if (iVar0 == -1)
	{
		return;
	}
	Global_45117[iVar0 /*6*/] = iParam0;
	Global_45117[iVar0 /*6*/].f_1 = iParam1;
	Global_45117[iVar0 /*6*/].f_2 = iParam2;
	Global_45117[iVar0 /*6*/].f_3 = iParam3;
	Global_45117[iVar0 /*6*/].f_4 = iParam4;
	Global_45117[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45117[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				if (iParam1 == Global_45117[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_136(int iParam0)
{
	if (func_137(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_139()
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

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_141(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_28[iVar0]))
		{
			unk_0xD0F1DB0E50B367AD(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_137(uParam0->f_35[iVar0]))
		{
			unk_0xD0F1DB0E50B367AD(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_41[iVar0]))
		{
			unk_0xD0F1DB0E50B367AD(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), iParam1);
		if (bParam2)
		{
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_143(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB6B621402486C3E4();
	if (!unk_0xD5FF242D0AFC5855(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x4686BC3BFDBB5348(uVar0, bParam0, 16);
		unk_0x4686BC3BFDBB5348(uVar0, bParam0, 32);
	}
	func_144(1, 1, 0, 0, 0, 0, 0);
}

void func_144(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_152(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_151())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_184(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_152(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_184(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_149(unk_0x259BE71D8A81D4FA())) && !func_146(unk_0x259BE71D8A81D4FA(), 0)) && !func_145()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_149(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_145()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_146(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_147(-1, 0) == 8;
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

int func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

int func_148(var uParam0)
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

int func_149(int iParam0)
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
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

bool func_150()
{
	return BitTest(Global_2621446, 3);
}

int func_151()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
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

int func_153(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(uParam0))
	{
		unk_0x97A5024CE91641F1(uParam0);
		while (!unk_0xA6E4F7A73ABC4A76(sParam0))
		{
			unk_0x97A5024CE91641F1(sParam0);
			system::wait(0);
		}
		return 1;
	}
	func_329("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_154()
{
	Global_21152 = 0;
	func_155();
}

void func_155()
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

int func_156()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_157()
{
	func_163(0);
	func_162();
	func_158();
}

void func_158()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (func_159(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 10,5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) != 1)
				{
					unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
				}
			}
		}
	}
}

int func_159(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_161(bParam5, bParam6);
	func_160(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_160(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_161(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

void func_162()
{
	unk_0x66EFB3D6110055C4(0, 21, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x66EFB3D6110055C4(0, 141, 1);
	unk_0x66EFB3D6110055C4(0, 140, 1);
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 257, 1);
	unk_0x66EFB3D6110055C4(0, 22, 1);
	unk_0x66EFB3D6110055C4(0, 23, 1);
}

void func_163(int iParam0)
{
	if (func_168())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_167(0))
		{
			func_164(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_164(int iParam0)
{
	if (func_168())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_166())
		{
			func_165(1, 1);
		}
		else
		{
			func_165(0, 0);
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
	if (!func_151())
	{
		Global_20930.f_1 = 3;
	}
}

void func_165(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_167(0))
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

bool func_166()
{
	return BitTest(Global_1956920, 5);
}

int func_167(int iParam0)
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

bool func_168()
{
	return BitTest(Global_1956920, 19);
}

int func_169(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_177();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_172(&(Global_113056[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_171(iParam0);
	return 1;
}

void func_171(int iParam0)
{
	Global_113056[iParam0 /*10*/].f_4 = 1;
	Global_113056[iParam0 /*10*/].f_5 = 0;
	Global_113056[iParam0 /*10*/].f_6 = 0;
	Global_113056[iParam0 /*10*/] = 0;
}

int func_172(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_176(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1495D79F52B9EEE(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_174(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_173(uParam0, iParam4);
		}
	}
	return 2;
}

void func_173(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_174(int iParam0)
{
	return func_175(iParam0, Global_44042);
}

int func_175(int iParam0, int iParam1)
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

int func_176(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_174(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_177()
{
	return func_178(unk_0x1AF90EB93E0012D6(), 0);
}

int func_178(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(uParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_120(iVar0, &uVar1);
		if (unk_0x70E57E9927B6BA58(uVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_179()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_181(-1604,668f, 5239,1f, 3,01f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 66);
			unk_0x61183D6239A9D7B8(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_181(-1592,84f, 5214,04f, 3,01f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 400);
			unk_0x61183D6239A9D7B8(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_181(190,26f, -956,35f, 29,63f, 0);
			if ((BitTest(Global_113969.f_18577[2 /*6*/], 3) || BitTest(Global_113969.f_18577[4 /*6*/], 3)) || BitTest(Global_113969.f_18577[4 /*6*/], 3))
			{
				unk_0x4C905FB262965D5D(*uParam1, 381);
			}
			else
			{
				unk_0x4C905FB262965D5D(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0x61183D6239A9D7B8(*uParam1, 42);
			}
			else
			{
				unk_0x61183D6239A9D7B8(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_181(414f, -761f, 29f, 0);
			if (BitTest(Global_113969.f_18577[2 /*6*/], 3) || BitTest(Global_113969.f_18577[3 /*6*/], 3))
			{
				unk_0x4C905FB262965D5D(*uParam1, 381);
			}
			else
			{
				unk_0x4C905FB262965D5D(*uParam1, 66);
			}
			unk_0x61183D6239A9D7B8(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_181(-1622,89f, 4204,87f, 83,3f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 66);
			unk_0x61183D6239A9D7B8(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_181(1835,53f, 4705,86f, 38,1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_181(1826,13f, 4698,88f, 38,92f, 0);
			}
			else
			{
				*uParam1 = func_181(637,02f, 119,7093f, 89,5f, 0);
			}
			unk_0x4C905FB262965D5D(*uParam1, 206);
			unk_0x61183D6239A9D7B8(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_181(-954,19f, -2760,05f, 14,64f, 0);
			}
			else
			{
				*uParam1 = func_181(-63,8f, -809,5f, 321,8f, 0);
			}
			unk_0x4C905FB262965D5D(*uParam1, 382);
			unk_0x61183D6239A9D7B8(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_181(-1877,82f, -440,649f, 45,05f, 0);
			}
			else
			{
				*uParam1 = func_181(-915,6f, 6139,2f, 5,5f, 0);
			}
			if ((BitTest(Global_113969.f_18577[21 /*6*/], 3) || BitTest(Global_113969.f_18577[22 /*6*/], 3)) || BitTest(Global_113969.f_18577[23 /*6*/], 3))
			{
				unk_0x4C905FB262965D5D(*uParam1, 405);
			}
			else
			{
				unk_0x4C905FB262965D5D(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0x61183D6239A9D7B8(*uParam1, 42);
			}
			else
			{
				unk_0x61183D6239A9D7B8(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_181(-1104,93f, 291,25f, 64,3f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 66);
			unk_0x61183D6239A9D7B8(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_181(-1104,93f, 291,25f, 64,3f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 385);
			unk_0x61183D6239A9D7B8(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_181(-303,82f, 6211,29f, 31,05f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 386);
			unk_0x61183D6239A9D7B8(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_181(-44,75f, -1288,67f, 28,21f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 149);
			unk_0x61183D6239A9D7B8(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_181(-149,75f, 285,81f, 93,67f, 0);
			unk_0x4C905FB262965D5D(*uParam1, 66);
			unk_0x61183D6239A9D7B8(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_181(-70,71f, 301,43f, 106,79f, 0);
			}
			else
			{
				*uParam1 = func_181(-257,22f, 292,85f, 90,63f, 0);
			}
			unk_0x4C905FB262965D5D(*uParam1, 389);
			unk_0x61183D6239A9D7B8(*uParam1, 43);
			break;
	}
}

var func_181(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_182(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_182(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && iParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1826,631f, 4699,115f, 35,38089f, 1812,878f, 4710,457f, 42,05354f, 23,75f, 0, 1, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_191(2))
							{
								if (func_189(iParam0->f_27))
								{
									func_188(iParam0->f_27, *iParam0);
									func_329("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_137(iParam0->f_28[0]))
				{
					if (func_187(iParam0))
					{
						if (func_191(2))
						{
							if (func_189(iParam0->f_27))
							{
								func_188(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1895,788f, -434,0192f, 40,30126f, -1883,038f, -444,0811f, 50,24509f, 8,5f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1883,576f, -443,6434f, 36,40581f, -1874,826f, -448,0797f, 49,15162f, 8,5f, 0, 1, 0)) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1876,343f, -446,2214f, 35,64637f, -1866,952f, -456,5601f, 49,0442f, 8,5f, 0, 1, 0)) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1882,997f, -438,9922f, 44,17246f, -1874,079f, -443,342f, 48,69179f, 0,75f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1878,822f, -441,7655f, 44,9175f, -1877,941f, -439,9522f, 47,28982f, 1,25f, 0, 1, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (func_187(iParam0))
						{
							if (func_191(2))
							{
								if (func_189(iParam0->f_27))
								{
									func_188(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (*iParam0 == 22)
			{
				if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 837,0731f, 1261,086f, 366,1592f, 780,8383f, 1260,829f, 351,405f, 17,75f, 0, 1, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (func_187(iParam0))
						{
							if (func_191(2))
							{
								if (func_189(iParam0->f_27))
								{
									func_188(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (func_137(iParam0->f_28[0]))
			{
				if (func_187(iParam0))
				{
					if (func_191(2))
					{
						if (func_189(iParam0->f_27))
						{
							func_188(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_137(iParam0->f_35[0]))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0->f_35[0], 0))
				{
					if (func_191(3))
					{
						func_188(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_186();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(iParam0->f_35[0]))
			{
				if (!unk_0x1C2F771CDC87A3A5(iParam0->f_35[0], 0))
				{
					if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0->f_35[0], 1), 1) < iParam0->f_15)
					{
						if (func_191(2))
						{
							if (func_189(iParam0->f_27))
							{
								func_188(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), iParam0->f_17[0 /*3*/], 1) < iParam0->f_15)
			{
				if (func_191(2))
				{
					if (func_189(iParam0->f_27))
					{
						func_188(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_191(2))
				{
					if (func_189(iParam0->f_27))
					{
						func_188(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (func_137(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
					{
						if (unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("towtruck")) || unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("towtruck2")))
						{
							if (unk_0x4A64AADF9B40D2AF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iParam0->f_35[0]))
							{
								if (func_191(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("cargobob")) || unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("cargobob2"))) || unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("cargobob3")))
						{
							if (unk_0x93EBA5A2C85D82E7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) && unk_0x4160C3716329E630(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iParam0->f_35[0]))
							{
								if (func_191(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (unk_0x864E9BBAA7BFA064(unk_0x4A8C381C258A124D()) >= 2f)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 245,8885f, 371,9034f, 103,9884f, 241,5898f, 359,6458f, 107,3461f, 1,25f, 0, 1, 0))
					{
						if (func_191(2))
						{
							if (func_189(iParam0->f_27))
							{
								func_188(iParam0->f_27, *iParam0);
								func_329("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -164,2046f, 277,4866f, 91,55322f, -153,6f, 277,4061f, 97,33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2728,948f, 4143,44f, 42,29295f, 2722,213f, 4144,521f, 45,43182f, 10f, 0, 1, 0))
				{
					if (func_191(2))
					{
						if (func_189(1))
						{
							func_188(1, *iParam0);
							func_329("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -992,4995f, 358,7455f, 96,3735f, -1021,94f, 361,8888f, 65,36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -983,5426f, 369,1104f, 68,46017f, -1028,566f, 395,4613f, 94,57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -983,875f, 346,7556f, 68,02096f, -1021,451f, 336,3458f, 93,18714f, 14,5f, 0, 1, 0))
						{
							if (func_191(2))
							{
								if (func_189(iParam0->f_27))
								{
									func_188(iParam0->f_27, *iParam0);
									func_329("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, 1, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2338,697f, 2597,037f, 45,39052f, 2324,003f, 2597,185f, 47,74961f, 8,5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_191(2))
				{
					if (func_189(iParam0->f_27))
					{
						func_188(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_186()
{
	func_27(&(Global_104530.f_2890), &Global_104530, 0, 1, 1, 0);
}

int func_187(var uParam0)
{
	float fVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_140(iParam1))
		{
			return;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			func_329("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				func_329("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xC229299217554C78(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0, 1, 0);
			}
			func_157();
		}
	}
}

int func_189(bool bParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xDC8D5832207C2EAD();
				if (func_190(iVar0))
				{
					if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
					{
						if ((!unk_0x14E25ED5E75102C8(iVar0) && !unk_0x3F18810075C77D41(iVar0)) && unk_0xDF93B3CFAC96698F(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x3F18810075C77D41(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (func_137(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	bool bVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				bVar0 = func_113();
				if (!func_36(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_199()) || Global_113016) || Global_32951) || func_198()) || func_197(8, -1)) || func_101()) || func_196()) || func_195()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_199()) || Global_32951) || func_198()) || func_197(8, -1)) || func_195()) || func_101()) || func_196()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_199()) || Global_113016) || Global_32951) || func_198()) || func_197(8, -1)) || func_195()) || func_101()) || func_196()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_199()) || Global_113016) || Global_32951) || func_198()) || func_197(8, -1)) || func_101()) || func_196()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_199() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_197(8, -1)) || func_194()) || func_193()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_197(8, -1) || func_101()) || func_196()) || func_193()) || func_192())
						{
							return 0;
						}
						if ((unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3) && unk_0x6D231A0D52134FC1() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						{
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_199()) || Global_32951) || func_198()) || func_197(8, -1)) || func_196()) || func_195()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_199()) || func_196()) || Global_113016) || Global_32951) || func_198()) || Global_45250) || func_197(8, -1)) || func_195()) || func_193()) || func_194()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_199()) || Global_113016) || Global_32951) || func_198()) || func_197(8, -1)) || func_195()) || func_193()) || func_101()) || func_196()) || func_194())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_192()
{
	return Global_101572.f_1;
}

int func_193()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_194()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_195()
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

bool func_196()
{
	return Global_101585.f_394 > 0;
}

var func_197(int iParam0, int iParam1)
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

var func_198()
{
	return Global_1575083;
}

int func_199()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_137(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (unk_0xFC8BFE4B41177C22(iParam0->f_28[iVar0]))
			{
				if (func_137(iParam0->f_28[iVar0]))
				{
					if (unk_0x9B3D4335E0EDB0BE(iParam0->f_28[iVar0], unk_0x4A8C381C258A124D(), 1) || unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0->f_28[iVar0], 1), 7,5f, 1))
					{
						if (func_191(2))
						{
							func_188(iParam0->f_27, *iParam0);
							return 1;
						}
						else
						{
							func_329("Player damaged the N1D peds but it's not safe to trigger the mission!");
						}
					}
				}
				else if (func_191(2))
				{
					func_188(iParam0->f_27, *iParam0);
					return 1;
				}
				else
				{
					func_329("Player killed a N1D ped but it's not safe to trigger the mission!");
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_201(int iParam0, var uParam1)
{
	if (func_202(uParam1, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)))
	{
		if (func_191(2))
		{
			if (func_189(iParam0->f_27))
			{
				func_188(iParam0->f_27, *iParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_202(var uParam0, struct<2> Param1, Vector3 vParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_203(int iParam0, var uParam1, var uParam2)
{
	if (func_137(*uParam1))
	{
		switch (*iParam0)
		{
			case 0:
				if (unk_0xD7E1DF759CD0FFF2("CAR_TRUNK_THUMPS", 0, -1))
				{
					iParam0->f_1 = unk_0xCA369FBC0DE29517();
					iParam0->f_2 = unk_0x1DD05E817C89C737();
					iParam0->f_3 = unk_0xC5935DFB3F39785A(6000, 12000);
					*iParam0 = 1;
				}
				break;
			
			case 1:
				if ((unk_0x1DD05E817C89C737() - iParam0->f_2) > iParam0->f_3)
				{
					unk_0xF37CDE164C892195(iParam0->f_1, "TRUNK_THUMPS", unk_0x0D1381B6E0F3987D(*uParam1, 0f, -2,2f, 0,5f), 0, 0, 0, 0);
					unk_0x4CAD907F190E6F10(*uParam2, "NIGE3_CXAA", "DINAPOLI", func_204(0), 0);
					iParam0->f_4 = unk_0xC5935DFB3F39785A(3, 7);
					iParam0->f_5 = 0;
					iParam0->f_6 = unk_0x1DD05E817C89C737();
					iParam0->f_7 = unk_0xC5935DFB3F39785A(100, 250);
					*iParam0 = 2;
				}
				break;
			
			case 2:
				if ((unk_0x1DD05E817C89C737() - iParam0->f_6) > iParam0->f_7)
				{
					iParam0->f_8 = unk_0xC5935DFB3F39785A(-200, -120);
					iParam0->f_9 = (0,5f * system::to_float(unk_0xC5935DFB3F39785A(-2, 3)));
					unk_0xE592D924D5438108(*uParam1, 1, 0f, 0f, IntToFloat(iParam0->f_8), iParam0->f_9, -1,5f, 0f, 0, 1, 1, 0, 1, 1);
					iParam0->f_5++;
					if (iParam0->f_5 < iParam0->f_4)
					{
						iParam0->f_6 = unk_0x1DD05E817C89C737();
						iParam0->f_7 = unk_0xC5935DFB3F39785A(150, 280);
					}
					else
					{
						iParam0->f_2 = unk_0x1DD05E817C89C737();
						iParam0->f_3 = unk_0xC5935DFB3F39785A(6000, 12000);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_205(int iParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	var uVar0;
	
	if ((((func_137(unk_0x4A8C381C258A124D()) && func_137(iParam0->f_28[0])) && !func_156()) && (unk_0x1DD05E817C89C737() - iParam0->f_60) > iParam6) && func_209(unk_0x4A8C381C258A124D(), Param1, 1) < fParam7)
	{
		uVar0 = 16;
		func_208(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
		func_206(&uVar0, cParam2, sParam3, 7, 0, 0);
		iParam0->f_60 = unk_0x1DD05E817C89C737();
		return 1;
	}
	return 0;
}

void func_206(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_207(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_21152, 0);
	Global_22289 = iParam3;
	StringCopy(&Global_22276, sParam2, 24);
}

void func_207(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_208(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

float func_209(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

int func_210(int iParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, var uParam8)
{
	var uVar0;
	
	if (!*uParam8 == 3)
	{
		if (func_191(2))
		{
			if (!func_156())
			{
				if (((func_137(unk_0x4A8C381C258A124D()) && func_137(iParam0->f_28[0])) && func_137(iParam0->f_28[1])) && func_209(unk_0x4A8C381C258A124D(), Param1, 1) < 20f)
				{
					func_329("start conversation");
					uVar0 = 16;
					if (*uParam8 == 0)
					{
						func_208(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
						func_208(&uVar0, iParam6, iParam0->f_28[1], sParam7, 0, 1);
						func_206(&uVar0, cParam2, sParam3, 7, 0, 0);
						*uParam8 = 2;
					}
					else if (*uParam8 == 2)
					{
						func_329("conversation ended");
						*uParam8 = 3;
						return 1;
					}
				}
			}
			else if (((func_212(sParam3) && !*uParam8 == 1) && func_137(unk_0x4A8C381C258A124D())) && func_209(unk_0x4A8C381C258A124D(), Param1, 1) >= 20f)
			{
				func_329("pause conversation");
				func_211(1);
				*uParam8 = 1;
			}
			if (func_209(unk_0x4A8C381C258A124D(), Param1, 1) < 20f && *uParam8 == 1)
			{
				func_329("unpause conversation");
				func_211(0);
				*uParam8 = 2;
			}
		}
	}
	return 0;
}

void func_211(int iParam0)
{
	Global_23297 = iParam0;
}

int func_212(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_213() };
	if (unk_0x1B79E937E91F40C3(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_213()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

void func_214(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_137(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_217(uParam1))
				{
					if (unk_0xE100DD4F82A51BDE(*uParam1))
					{
						unk_0x19626F992DC71FB9(iParam0);
						if (iParam2 != 21)
						{
							if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x10425721983AE158(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xB5396F1FB088FE38(&uVar0);
								if (func_216(uParam1))
								{
									unk_0x9F5225AA1E102B7A(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x9F5225AA1E102B7A(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x9F5225AA1E102B7A(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x93C0674FC00824D0(uVar0);
								unk_0x4BD42B0527065BB6(iParam0, uVar0);
								unk_0xD0557B139A542F12(&uVar0);
							}
						}
						else
						{
							unk_0x9F5225AA1E102B7A(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_216(uParam1) || !unk_0x13CCB1AD131C1082(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_215(iParam2) && !unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 25f))
					{
						unk_0x0E95B96CFEFE7B61(iParam0, unk_0x4A8C381C258A124D(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_216(uParam1) && uParam1->f_4 == 0) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xB5396F1FB088FE38(&uVar1);
				if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x10425721983AE158(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x9F5225AA1E102B7A(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x9F5225AA1E102B7A(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x93C0674FC00824D0(uVar1);
				unk_0x4BD42B0527065BB6(iParam0, uVar1);
				unk_0xD0557B139A542F12(&uVar1);
				uParam1->f_4 = 1;
				if (func_215(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_215(iParam2) || unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 10f))
				{
					if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x10425721983AE158(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x9F5225AA1E102B7A(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_215(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_216(var uParam0)
{
	if (unk_0xD6F9DEE4765092A9(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_217(var uParam0)
{
	if (unk_0xD6F9DEE4765092A9(*uParam0) || unk_0xD6F9DEE4765092A9(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_218()
{
	return joaat("u_m_m_aldinapoli");
}

char* func_219()
{
	return "Al_DiNapoli";
}

void func_220(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0xD6F9DEE4765092A9(sParam1))
		{
			if (Global_44042 == 17)
			{
				if (*iParam0 != -1)
				{
					func_225(iParam0);
				}
			}
			else if (func_224())
			{
				if (*iParam0 != -1)
				{
					func_225(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_209(unk_0x4A8C381C258A124D(), Param2, 1) <= 100f)
				{
					func_223(iParam0, 1);
				}
			}
			else
			{
				switch (func_222(*iParam0))
				{
					case 1:
						if (unk_0x1B79E937E91F40C3(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x046FF102DCE74A94(sParam1, 14, 8);
						}
						else
						{
							unk_0x839AD252B0708F35(sParam1, 8);
						}
						unk_0x78081733656ABA54(2);
						func_221(*iParam0, 1);
						break;
					
					case 2:
						unk_0xB479965CBAA3EAE1(0);
						unk_0xDD291722ADDCBD60();
						unk_0x78081733656ABA54(0);
						func_221(*iParam0, 0);
						break;
				}
				if (func_209(unk_0x4A8C381C258A124D(), Param2, 1) > 120f)
				{
					func_225(iParam0);
				}
			}
		}
	}
}

void func_221(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_79385 == iParam0)
		{
			Global_79386 = iParam0;
		}
	}
	else if (Global_79386 == iParam0)
	{
		Global_79386 = -1;
	}
}

int func_222(int iParam0)
{
	if (Global_79385 == iParam0)
	{
		if (Global_79386 == -1)
		{
			if (Global_79384 < unk_0x8034325BF6D6E41F())
			{
				return 1;
			}
		}
	}
	else if (Global_79386 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_223(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_79382 < 5)
	{
		Global_79371[Global_79382 /*2*/] = 0;
		Global_79371[Global_79382 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_79382)
			{
				if (Global_79371[iVar1 /*2*/] == Global_79371[Global_79382 /*2*/])
				{
					Global_79371[Global_79382 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_79371[Global_79382 /*2*/];
		Global_79382++;
		Global_79383 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_224()
{
	return Global_98822;
}

void func_225(int iParam0)
{
	unk_0xB479965CBAA3EAE1(0);
	unk_0xDD291722ADDCBD60();
	func_226(iParam0);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_79386 == *iParam0)
	{
		func_221(*iParam0, 0);
	}
	if (Global_79385 == *iParam0)
	{
		Global_79385 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_79382)
	{
		if (Global_79371[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_79382 - 2))
	{
		Global_79371[iVar2 /*2*/] = Global_79371[iVar2 + 1 /*2*/];
		Global_79371[iVar2 /*2*/].f_1 = Global_79371[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_79371[(Global_79382 - 1) /*2*/] = -1;
	Global_79371[(Global_79382 - 1) /*2*/].f_1 = 3;
	Global_79382 = (Global_79382 - 1);
	Global_79383 = 1;
	Global_79384 = unk_0x8034325BF6D6E41F();
	*iParam0 = -1;
}

void func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_177();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_113056[iParam0 /*10*/].f_1 = 1;
}

int func_228(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_79389)
	{
		func_329("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_120(*uParam0, &Var0);
	if ((func_261(*uParam0) || func_259(*uParam0)) || Global_79635 == 1)
	{
		return 1;
	}
	if (!unk_0x173751E886F8E9AB())
	{
		func_329("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_255(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_254(uParam0->f_28[0]);
		}
		func_329("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_234(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_234(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_232(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_231(uParam0);
			}
			else
			{
				func_229(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_232(uParam0, 0, 1))
		{
			func_229(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_232(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_232(uParam0, 1, 0))
		{
			func_229(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_232(uParam0, 0, 0))
		{
			func_229(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_137(uParam0->f_35[0]))
		{
			if (!unk_0x65FFA94B82A71741(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x8764A5B95AE1F967(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_329("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_113()))
		{
			func_329("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_217(&(uParam0->f_48)) && bParam1)
	{
		func_214(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_229(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_230(&(uParam0->f_41[1]));
		func_230(&(uParam0->f_41[2]));
	}
	if (func_137(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				if (!unk_0x7F420695E3F776FB(uParam0->f_28[iVar0], 0))
				{
					unk_0x44C48AC14D3C09ED(uParam0->f_28[iVar0], 1, 0);
					unk_0x5D7CD709B34C90F0(uParam0->f_28[0], 0);
				}
				unk_0x44FB298D6382876D(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_137(uParam0->f_41[0]))
					{
						unk_0x44C48AC14D3C09ED(uParam0->f_41[0], 1, 0);
						unk_0x5D7CD709B34C90F0(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_254(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x80813AC549A1E8AE("rcmcollect_paperleadinout@");
						while (!unk_0xE100DD4F82A51BDE("rcmcollect_paperleadinout@"))
						{
							system::wait(0);
						}
						unk_0xB5396F1FB088FE38(&uVar1);
						unk_0x10425721983AE158(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uVar1);
						unk_0x4BD42B0527065BB6(uParam0->f_28[iVar0], uVar1);
						unk_0xD0557B139A542F12(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x80813AC549A1E8AE("rcmabigail");
						while (!unk_0xE100DD4F82A51BDE("rcmabigail"))
						{
							system::wait(0);
						}
						unk_0xB5396F1FB088FE38(&uVar1);
						unk_0x10425721983AE158(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uVar1);
						unk_0x4BD42B0527065BB6(uParam0->f_28[iVar0], uVar1);
						unk_0xD0557B139A542F12(&uVar1);
						break;
					
					case 32:
						unk_0x80813AC549A1E8AE("rcmminute1");
						while (!unk_0xE100DD4F82A51BDE("rcmminute1"))
						{
							system::wait(0);
						}
						unk_0xB5396F1FB088FE38(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x10425721983AE158(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x10425721983AE158(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uVar1);
						unk_0x4BD42B0527065BB6(uParam0->f_28[iVar0], uVar1);
						unk_0xD0557B139A542F12(&uVar1);
						break;
					
					case 24:
						unk_0x80813AC549A1E8AE("special_ped@hao@base");
						while (!unk_0xE100DD4F82A51BDE("special_ped@hao@base"))
						{
							system::wait(0);
						}
						unk_0xB5396F1FB088FE38(&uVar1);
						unk_0x10425721983AE158(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uVar1);
						unk_0x4BD42B0527065BB6(uParam0->f_28[iVar0], uVar1);
						unk_0xD0557B139A542F12(&uVar1);
						break;
					
					default:
						unk_0xBEB96F1A510EE9AA(uParam0->f_28[iVar0]);
						unk_0xD844F5E50DAB6FF7(uParam0->f_28[iVar0], unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_230(var uParam0)
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

void func_231(var uParam0)
{
	int iVar0;
	
	if (func_137(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				unk_0xBE8796DB2B90A437(uParam0->f_28[iVar0], 1, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_28[iVar0], 0);
				unk_0x44FB298D6382876D(uParam0->f_28[iVar0], 1);
				unk_0x62A5310368A20EFA(uParam0->f_28[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
				unk_0xF09E30AF1B8FB379(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_232(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_136(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_35[iVar0]))
			{
				if (unk_0x1C2F771CDC87A3A5(uParam0->f_35[iVar0], 0))
				{
					func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xD9F5E1FEFD1329E4(uParam0->f_35[iVar0], 0))
				{
					func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x9B3D4335E0EDB0BE(uParam0->f_35[iVar0], unk_0x4A8C381C258A124D(), 0))
				{
					func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x8D91ADE44AC79BC9(uParam0->f_35[iVar0]) < 850)
				{
					func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x685171EED42BC4DF(uParam0->f_35[iVar0], unk_0x4A8C381C258A124D()) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 5f)
						{
							func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0xDC8D5832207C2EAD();
						if (func_190(uVar2))
						{
							if (unk_0x4B423FAA24E8ABF0(uVar2) == joaat("towtruck") || unk_0x4B423FAA24E8ABF0(iVar2) == joaat("towtruck2"))
							{
								if (func_190(uParam0->f_35[iVar0]))
								{
									if (unk_0x4A64AADF9B40D2AF(iVar2, uParam0->f_35[iVar0]))
									{
										func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xDC8D5832207C2EAD();
						if (func_190(iVar3))
						{
							if (unk_0x685171EED42BC4DF(uParam0->f_35[iVar0], iVar3) && unk_0xDF93B3CFAC96698F(iVar3) > 6f)
							{
								func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_233(unk_0x4A8C381C258A124D(), uParam0->f_35[iVar0]))
							{
								func_329("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			iVar0 = unk_0xCDA725BC2F170795(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_136(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_28[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_28[iVar0]))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							if (func_156())
							{
								func_154();
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0xF76AF9D45D6BDA45(uParam0->f_28[iVar0]) || unk_0xFFF4FB66DA549D0F(uParam0->f_28[iVar0])) || unk_0x6E470765558FCD9E(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_229(uParam0);
						}
						else
						{
							func_231(uParam0);
						}
						func_329("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x8BF5256C439DF778(uParam0->f_28[iVar0]))
					{
						if (unk_0xFAA48325A90263BE(uParam0->f_28[iVar0], unk_0x4A8C381C258A124D(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_253(*uParam0))
					{
						if (!func_169(*uParam0))
						{
							if (func_248(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_229(uParam0);
								}
								else
								{
									func_231(uParam0);
								}
								func_329("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x8764A5B95AE1F967(-1, unk_0xD1A6A821F5AC81DB(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_236(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_235(*uParam0))
					{
						if (unk_0x8764A5B95AE1F967(-1, unk_0xD1A6A821F5AC81DB(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
						{
							if (iParam2 == 0)
							{
								func_229(uParam0);
							}
							else
							{
								func_231(uParam0);
							}
							func_329("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_329("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_137(uParam0->f_41[0]))
						{
							unk_0x44C48AC14D3C09ED(uParam0->f_41[0], 1, 0);
							unk_0x5D7CD709B34C90F0(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_235(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_137(unk_0x4A8C381C258A124D()) && func_137(iParam0))
	{
		if (func_247(iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_237(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_237(int iParam0, float fParam1)
{
	return func_238(iParam0, unk_0x4A8C381C258A124D(), fParam1, 1, 250, 7);
}

bool func_238(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_246(iParam0, iParam1);
	if (!func_137(iParam0) || !func_137(iParam1))
	{
		if (iVar2 != -1)
		{
			func_245(&(Local_47[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_242(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_241();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_47[iVar2 /*4*/].f_1 = iParam0;
		Local_47[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_239(&(Local_47[iVar2 /*4*/]), Var1, iParam1, &(Local_47[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1DD05E817C89C737() - Local_47[iVar2 /*4*/].f_3) < iParam4);
}

int func_239(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_137(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_240(iParam2, iParam5) };
		*uParam0 = unk_0x120E577522852984(Param1, Var1 + Var1 - Param1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x0101C509A6E67F99(iVar3))
	{
		func_137(iVar3);
		if (unk_0xBD545F8729E9F413(iVar3) == iParam2)
		{
			if (bLocal_48)
			{
				unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x1DD05E817C89C737();
			return 1;
		}
		return 0;
	}
	if (unk_0x55B80B6E7AB61270(iVar3))
	{
		func_137(iVar3);
		if (unk_0x7F420695E3F776FB(iParam2, 0))
		{
			if (unk_0xE93EDE86BBB66532(iVar3) == unk_0x6EF03BE64E058E2F(iParam2, 0))
			{
				if (bLocal_48)
				{
					unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD1A6A821F5AC81DB(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD1A6A821F5AC81DB(iParam0, 1);
}

int func_241()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_47.f_0)
	{
		if ((Local_47[iVar0 /*4*/] == 0 && Local_47[iVar0 /*4*/].f_1 == 0) && Local_47[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_242(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_244(unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_244(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_243(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_243(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_244(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_245(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_47.f_0)
	{
		if (Local_47[iVar0 /*4*/].f_1 == iParam0 && Local_47[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247(var uParam0)
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_137(unk_0x4A8C381C258A124D()) && func_137(uParam0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_252(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_249(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x3C2402675D8FFADA(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_252(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_249(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_249(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	Var1 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.f_0 = (Var1.f_0 + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_250(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_250(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE94C7FA27FEB00DD(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF67924A428A734EC(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF67924A428A734EC(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_251(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_244(Param1 - unk_0xD1A6A821F5AC81DB(uParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_244(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_243(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_254(int iParam0)
{
	var uVar0;
	
	if (func_137(unk_0x4A8C381C258A124D()) && func_137(uParam0))
	{
		unk_0x80813AC549A1E8AE("rcmextreme3");
		while (!unk_0xE100DD4F82A51BDE("rcmextreme3"))
		{
			system::wait(0);
		}
		unk_0xB5396F1FB088FE38(&uVar0);
		unk_0x10425721983AE158(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x96F4A599D1C6F95A(0, 1);
		unk_0xD62DC69EB22834CE(0, 64,6f, -737,8f, 44,2f);
		unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
		unk_0x93C0674FC00824D0(uVar0);
		unk_0x4BD42B0527065BB6(uParam0, uVar0);
		unk_0xD0557B139A542F12(&uVar0);
	}
}

int func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_177();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_261(iParam0))
	{
		return 0;
	}
	if (!func_174(4))
	{
		if (func_259(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_258() && !func_257())
	{
		return 1;
	}
	if (!func_256(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_257()
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

int func_258()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_259(int iParam0)
{
	if ((func_260() && Global_101533.f_11 == 6) && iParam0 == func_178(&(Global_101533.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_260()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)
{
	if (func_118(0))
	{
		if (Global_79636.f_1 == 7)
		{
			if (Global_79636 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 37:
			if (!func_296(iParam0))
			{
				return 0;
			}
			break;
		
		case 38:
			if (!func_287(iParam0))
			{
				return 0;
			}
			break;
		
		case 39:
			if (!func_283(iParam0))
			{
				return 0;
			}
			break;
		
		case 40:
			if (!func_282(iParam0))
			{
				return 0;
			}
			break;
		
		case 41:
			if (!func_278(iParam0, uParam1))
			{
				return 0;
			}
			break;
		
		case 42:
			if (!func_273(iParam0))
			{
				return 0;
			}
			break;
		
		case 43:
			if (!func_263(iParam0))
			{
				return 0;
			}
			break;
	}
	func_329("Created initial scene");
	return 1;
}

int func_263(var uParam0)
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_50;
	iVar0[1] = iLocal_52;
	iVar0[2] = iLocal_53;
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_3_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			func_272(&(uParam0->f_48), "rcmnigel3", "base", 0);
			iLocal_49 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !func_270(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_28[0]))
			{
				if (!func_267(&(uParam0->f_28[0]), 64, -44,6f, -1289,86f, 29,16f, 22,9f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_35[0]))
			{
				func_265(&(uParam0->f_35[0]), iLocal_53, -39,9688f, -1285,962f, 28,3505f, 181,02f);
				if (func_137(uParam0->f_35[0]))
				{
					unk_0xD133EF7430EDCD09(uParam0->f_35[0], 65, 0);
					unk_0xBDE75E2FCBF91A6C(uParam0->f_35[0], 5, 0);
					unk_0x3FEAE59CDE6D3946(uParam0->f_35[0], "28BNT310");
					unk_0x05D3F682DDA06C20(uParam0->f_35[0], 0);
					unk_0x0B74F181ADFC39BF(uParam0->f_35[0], 10);
					unk_0x1E00EF437AE43BB8(uParam0->f_35[0], 0);
					unk_0x03DACC5F7E5335AC(uParam0->f_35[0], 0);
					unk_0x515A606E0E38355D(uParam0->f_35[0], 0);
				}
			}
			if (!func_264(&(uParam0->f_28[1]), &(uParam0->f_35[0])))
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				iLocal_49 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_264(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0xFC8BFE4B41177C22(*uParam1) && unk_0x6252BC0DD8A320DB(iLocal_52))
	{
		*uParam0 = unk_0xB1DBFEB95C0EFB88(26, joaat("u_m_m_aldinapoli"), -59,7094f, -1330,129f, 32,1963f, 0f, 1, 1);
		unk_0xEB418CA245FFE897(*uParam0, "NI3_LNCH_CELEB");
		unk_0xD1C578C204015E1F(*uParam0, 4, 0, 0, 0);
		unk_0xAAA71DD7E9059338(*uParam0, 1);
		Var0 = { unk_0x0D1381B6E0F3987D(*uParam1, -0,2f, -1,8f, -1f) };
		fVar2 = (-90f + unk_0xCFC0C995455A6204(*uParam1));
		Var1 = { 0f, 0f, fVar2 };
		unk_0x62C438C53BB57AFD(*uParam0, Var0, 0, 0, 1);
		unk_0xCF39804E8C88080E(*uParam0, Var1, 2, 1);
		unk_0x4D306DD94DD6FDBA(*uParam0, *uParam1, 0, 0,2f, -1,8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1, 0);
		unk_0x4285E11B28063EE0(*uParam0, 0, 0);
		return 1;
	}
	return 0;
}

void func_265(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_266(uParam0);
	*uParam0 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, 1, 1, 0);
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x1DE99C193C7EC64B(*uParam0, 1084227584);
		unk_0xD25E9BDC14A0B649(*uParam0, 1000, 0, 0);
	}
}

void func_266(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		if (func_190(*uParam0))
		{
			if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
			{
				if (func_137(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
					{
						unk_0x68298CA6191CDFDB(uParam0);
						return;
					}
				}
				unk_0x8C1F7D7A31B2A38E(uParam0);
			}
		}
		else
		{
			if (func_137(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
				{
					unk_0x68298CA6191CDFDB(uParam0);
					return;
				}
			}
			unk_0x8C1F7D7A31B2A38E(uParam0);
		}
	}
}

int func_267(var uParam0, int iParam1, struct<3> Param2, float fParam3, char* sParam4, int iParam5)
{
	if (func_268(uParam0, iParam1, Param2, fParam3, 1))
	{
		if (unk_0xFC8BFE4B41177C22(*uParam0))
		{
			if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
			{
				unk_0xAAA71DD7E9059338(*uParam0, 1);
				unk_0x886FA295C1257AAA(*uParam0, 0);
				if (iParam5 == 1)
				{
					unk_0x3F58BFCF656F0DF1(*uParam0, 0);
				}
			}
			unk_0xEB418CA245FFE897(*uParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_268(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_332(iParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param2, uParam3, 0, 0);
			unk_0x77EFA99E6A8FFC43(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC0120BBCC298EA2F(*uParam0, 3) == 0)
				{
					unk_0xD1C578C204015E1F(*uParam0, 5, 2, 0, 0);
				}
			}
			func_269(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0x55098D9E9AD58806(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_269(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97347[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_270(var uParam0)
{
	if (func_217(uParam0))
	{
		unk_0x80813AC549A1E8AE(*uParam0);
		if (unk_0xE100DD4F82A51BDE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x6252BC0DD8A320DB((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_272(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	unk_0x80813AC549A1E8AE(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_273(var uParam0)
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_50;
	iVar0[1] = iLocal_53;
	iVar0[2] = joaat("dubsta");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 9f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_2_RCM", 24);
			func_274(42, 1);
			func_272(&(uParam0->f_48), "rcmnigel2", "base_nigel", "base_nigel");
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_49 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !func_270(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_28[0]))
			{
				if (!func_267(&(uParam0->f_28[0]), 64, -1310,65f, -640,17f, 26,52f, 153,43f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_35[0]))
			{
				func_265(&(uParam0->f_35[0]), iLocal_53, -1304,01f, -644,58f, 25,91f, 127,67f);
				if (func_137(uParam0->f_35[0]))
				{
					unk_0xD133EF7430EDCD09(uParam0->f_35[0], 65, 0);
					unk_0xBDE75E2FCBF91A6C(uParam0->f_35[0], 5, 0);
					unk_0x3FEAE59CDE6D3946(uParam0->f_35[0], "28BNT310");
					unk_0x05D3F682DDA06C20(uParam0->f_35[0], 0);
					unk_0x0B74F181ADFC39BF(uParam0->f_35[0], 10);
				}
			}
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_35[1]))
			{
				func_265(&(uParam0->f_35[1]), iVar0[2], -1290,73f, -634,603f, 26,1004f, 126,961f);
				if (func_137(uParam0->f_35[1]))
				{
					unk_0xD133EF7430EDCD09(uParam0->f_35[1], 0, 0);
					unk_0x0B74F181ADFC39BF(uParam0->f_35[1], 10);
				}
			}
			if (bVar2)
			{
				iLocal_49 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_274(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				uLocal_65 = func_277();
				unk_0x470041F66BF345BA("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0x470041F66BF345BA("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
				func_276();
				unk_0x55F7AC4B2B875901(-1100,5f, 789,8f, 164,34f, 20f, 0);
				func_275(0);
			}
			else
			{
				unk_0xD7B6A43ACC36D868(uLocal_65, 0);
				unk_0x93586F94C370857F();
				func_275(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				uLocal_65 = unk_0xA7B0B03284E7503C(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 0, 1, 1, 1, 1);
				unk_0x470041F66BF345BA("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0x470041F66BF345BA("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
				unk_0x89C4F1335B4A6633(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f);
				unk_0xA1F44380A2D59F2B(joaat("s_m_y_doorman_01"), 1);
				unk_0xA1F44380A2D59F2B(joaat("s_m_m_bouncer_01"), 1);
				unk_0x55F7AC4B2B875901(-558,2858f, 284,4073f, 81,1764f, 15f, 0);
				unk_0x55F7AC4B2B875901(-573,394f, 289,3696f, 79,06918f, 15f, 0);
				unk_0x2094BC4B6731BA68(-554,17f, 307,68f, 82,84f, 2f, 1, 0, 0, 0);
				unk_0xA63572E348CC4CFB(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 0, 1);
				unk_0xC4BCE90F7242F354(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 0);
				unk_0xCCA6D8A84EE8C88A(joaat("gauntlet"), 1);
			}
			else
			{
				unk_0xD7B6A43ACC36D868(uLocal_65, 0);
				unk_0x470041F66BF345BA("WORLD_HUMAN_GUARD_STAND", 1);
				unk_0x470041F66BF345BA("WORLD_HUMAN_CLIPBOARD", 1);
				unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 1);
				unk_0x93586F94C370857F();
				unk_0xA1F44380A2D59F2B(joaat("s_m_y_doorman_01"), 0);
				unk_0xA1F44380A2D59F2B(joaat("s_m_m_bouncer_01"), 0);
				unk_0xA63572E348CC4CFB(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 1, 1);
				unk_0xCCA6D8A84EE8C88A(joaat("gauntlet"), 0);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				uLocal_65 = unk_0xA7B0B03284E7503C(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 0, 1, 1, 1, 1);
				unk_0x89C4F1335B4A6633(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f);
				unk_0xA63572E348CC4CFB(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 0, 1);
				unk_0xC4BCE90F7242F354(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 0);
				unk_0x2094BC4B6731BA68(-1035,73f, 365,44f, 68,91f, 35f, 1, 0, 0, 0);
				unk_0x60040CDD28AA1BC3(-1035,73f, 365,44f, 68,91f, 27f, 0, 0, 0, 0, 0, 0, 0);
				unk_0x55F7AC4B2B875901(-1035,73f, 365,44f, 68,91f, 27f, 0);
			}
			else
			{
				unk_0xD7B6A43ACC36D868(uLocal_65, 0);
				unk_0x93586F94C370857F();
				unk_0xA63572E348CC4CFB(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 1, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				uLocal_65 = unk_0xA7B0B03284E7503C(-1122,202f, 48,5724f, 51,4652f, -1076,233f, 92,1041f, 60,0617f, 0, 1, 1, 1, 1);
				unk_0x89C4F1335B4A6633(-1122,202f, 48,5724f, 51,4652f, -1076,233f, 92,1041f, 60,0617f);
				unk_0x2094BC4B6731BA68(-1096,855f, 67,6858f, 52,952f, 15f, 1, 0, 0, 0);
			}
			else
			{
				unk_0xD7B6A43ACC36D868(uLocal_65, 0);
				unk_0x93586F94C370857F();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				uLocal_65 = unk_0xA7B0B03284E7503C(-1319,566f, -650,077f, 23,53715f, -1301,789f, -634,0721f, 38,18122f, 0, 1, 1, 1, 1);
				unk_0x89C4F1335B4A6633(-1319,566f, -650,077f, 23,53715f, -1301,789f, -634,0721f, 38,18122f);
			}
			else
			{
				unk_0xD7B6A43ACC36D868(uLocal_65, 0);
				unk_0x93586F94C370857F();
			}
			break;
	}
}

void func_275(bool bParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	Var0 = { -1212,164f, 634,8231f, 100,5055f };
	Var1 = { -1010,083f, 830,9487f, 250,4705f };
	Var2 = { Var0 };
	Var3 = { Var1 };
	unk_0x5E08BBBF87BC4886(Var2, Var3, 25f, 0, bParam0, 1);
	unk_0xA63572E348CC4CFB(Var0, Var1, bParam0, 1);
	if (!bParam0)
	{
		unk_0xC4BCE90F7242F354(Var0, Var1, 0);
		unk_0x2094BC4B6731BA68(-1100,5f, 789,8f, 164,34f, 40f, 1, 0, 0, 0);
	}
}

void func_276()
{
	unk_0x89C4F1335B4A6633(-1112,99f, 774,12f, 151,77f, -1077,99f, 853,65f, 187,66f);
}

var func_277()
{
	return unk_0xA7B0B03284E7503C(-1212,16f, 634,82f, 138,5f, -1010,08f, 830,94f, 180,47f, 0, 1, 1, 1, 1);
}

int func_278(var uParam0, var uParam1)
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	var uVar3;
	
	sVar1 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			func_281(uParam1);
			func_280(uParam1, -1313,714f, -27,2202f, 48,0314f);
			func_280(uParam1, -1294,066f, -27,0136f, 47,5724f);
			func_280(uParam1, -1069,844f, -143,769f, 39,7493f);
			func_280(uParam1, -925,2529f, -89,9079f, 38,3457f);
			func_280(uParam1, -1010,948f, 40,0643f, 49,9277f);
			func_280(uParam1, -1122,838f, 233,7037f, 64,7587f);
			func_280(uParam1, -1282,578f, 188,8798f, 59,2769f);
			func_280(uParam1, -1328,153f, 192,0178f, 57,8136f);
			func_280(uParam1, -1386,75f, 167,32f, 57,11f);
			func_280(uParam1, -1411,5f, 109,64f, 51,49f);
			func_280(uParam1, -1379,52f, 111,05f, 54,28f);
			func_280(uParam1, -1371,77f, 24,07f, 52,88f);
			func_280(uParam1, -1342,27f, 16,92f, 52,16f);
			func_279(uParam1);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar2]);
				iVar2++;
			}
			unk_0x80813AC549A1E8AE(uParam0->f_48);
			unk_0x80813AC549A1E8AE(sVar1);
			iLocal_49 = 1;
			break;
		
		case 1:
			if ((!func_271(&iVar0) || !unk_0xE100DD4F82A51BDE(uParam0->f_48)) || !unk_0xE100DD4F82A51BDE(sVar1))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			func_274(41, 1);
			uParam0->f_28[0] = unk_0xB1DBFEB95C0EFB88(26, iVar0[3], -1096,855f, 67,6858f, 52,952f, 112f, 1, 1);
			unk_0x7F08C4791E6D6969(uParam0->f_28[0], 0, 0, 0, 0, 1);
			unk_0xAAA71DD7E9059338(uParam0->f_28[0], 1);
			unk_0x1F7539C841C2A71F(uParam0->f_28[0], 1);
			unk_0x788F35D395511DFE(uParam0->f_28[0], 1, 1);
			unk_0x3F58BFCF656F0DF1(uParam0->f_28[0], 1);
			uParam0->f_41[0] = unk_0x4E55EAB577C13329(iVar0[1], -1096,855f, 67,6858f, 52,952f, 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(uParam0->f_41[0], uParam0->f_28[0], unk_0x72F7E39FB49FC0BA(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			unk_0xB5396F1FB088FE38(&uVar3);
			unk_0x10425721983AE158(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC58DD79B4CA8487F(uVar3, 1);
			unk_0x93C0674FC00824D0(uVar3);
			unk_0x4BD42B0527065BB6(uParam0->f_28[0], uVar3);
			unk_0xD0557B139A542F12(&uVar3);
			uParam0->f_28[1] = unk_0xB1DBFEB95C0EFB88(26, iVar0[4], -1096,258f, 69,723f, 53,0107f, 163f, 1, 1);
			unk_0x10425721983AE158(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xAAA71DD7E9059338(uParam0->f_28[1], 1);
			uParam0->f_41[1] = unk_0x4E55EAB577C13329(iVar0[2], -1096,258f, 69,723f, 53,0107f, 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(uParam0->f_41[1], uParam0->f_28[1], unk_0x72F7E39FB49FC0BA(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			uParam0->f_28[2] = unk_0xB1DBFEB95C0EFB88(26, iVar0[0], -1105,622f, 66,4609f, 53,07f, 118f, 1, 1);
			uParam0->f_28[3] = unk_0xB1DBFEB95C0EFB88(26, iVar0[0], -1090,09f, 64,3905f, 52,5607f, 238f, 1, 1);
			uParam0->f_28[4] = unk_0xB1DBFEB95C0EFB88(26, iVar0[0], -1093,736f, 73,8568f, 53,0388f, 319f, 1, 1);
			iVar2 = 2;
			while (iVar2 <= 4)
			{
				unk_0xAAA71DD7E9059338(uParam0->f_28[iVar2], 1);
				unk_0xB41DEC3AAC1AA107(uParam0->f_28[iVar2], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x1F7539C841C2A71F(uParam0->f_28[iVar2], 1);
				unk_0x3F58BFCF656F0DF1(uParam0->f_28[iVar2], 1);
				unk_0x9E6CC93E007219AC(uParam0->f_28[iVar2], 1);
				unk_0xF24ADF73381B85C1(uParam0->f_28[iVar2], 1);
				unk_0xA1F44380A2D59F2B(iVar0[0], 1);
				iVar2++;
			}
			uParam0->f_35[0] = unk_0x5779387E956077A6(iVar0[5], -1099,91f, 61,2608f, 52,8124f, 243f, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(uParam0->f_35[0], 1084227584);
			unk_0xC229299217554C78(uParam0->f_35[0], 1, 1, 0);
			unk_0xD25E9BDC14A0B649(uParam0->f_35[0], 1200, 0, 0);
			unk_0xCCA6D8A84EE8C88A(iVar0[5], 1);
			uParam0->f_41[2] = unk_0x4E55EAB577C13329(iVar0[6], -1099,91f, 63,2608f, 52,8124f, 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(uParam0->f_41[2], uParam0->f_35[0], 0, 0,2f, -1,3f, 0,5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			uParam0->f_35[1] = unk_0x5779387E956077A6(iVar0[5], -1102,335f, 75,7757f, 53,2591f, 293f, 1, 1, 0);
			uParam0->f_35[2] = unk_0x5779387E956077A6(iVar0[5], -1103,023f, 65,6267f, 53,056f, 203f, 1, 1, 0);
			iVar2 = 1;
			while (iVar2 <= 2)
			{
				unk_0x1DE99C193C7EC64B(uParam0->f_35[iVar2], 1084227584);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_279(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(system::to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = system::vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = system::sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_280(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_281(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_282(var uParam0)
{
	int iVar0[2];
	int iVar1;
	char* sVar2;
	var uVar3;
	
	sVar2 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("ig_kerrymcintosh");
	iVar0[1] = joaat("a_c_rottweiler");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650,5558f, -217,0627f, 35,55435f };
			uParam0->f_17[1 /*3*/] = { -601,4099f, -300,3887f, 64,24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x80813AC549A1E8AE(sVar2);
			iLocal_49 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !unk_0xE100DD4F82A51BDE(sVar2))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			uParam0->f_28[0] = unk_0xB1DBFEB95C0EFB88(26, iVar0[0], -626,87f, -268,85f, 38f, 121f, 1, 1);
			unk_0xD1C578C204015E1F(uParam0->f_28[0], 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(uParam0->f_28[0], 2, 1, 2, 0);
			unk_0xD1C578C204015E1F(uParam0->f_28[0], 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_28[0], 4, 0, 0, 0);
			unk_0xBE8796DB2B90A437(uParam0->f_28[0], 17, 1);
			unk_0x0428AFDCAA63B06E(uParam0->f_28[0], 132, 1);
			unk_0x1F7539C841C2A71F(uParam0->f_28[0], 1);
			unk_0x81E9E7612B0E4BCE(uParam0->f_28[0], 0);
			unk_0xFD61BB3B8F1CDB6D(uParam0->f_28[0], 1);
			unk_0xB5396F1FB088FE38(&uVar3);
			unk_0x10425721983AE158(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "dexy_stay_there", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "price_tag", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "such_a_good", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "this_looks", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sVar2, "who_would", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xC58DD79B4CA8487F(uVar3, 1);
			unk_0x93C0674FC00824D0(uVar3);
			unk_0x4BD42B0527065BB6(uParam0->f_28[0], uVar3);
			unk_0xD0557B139A542F12(&uVar3);
			uParam0->f_28[1] = unk_0xB1DBFEB95C0EFB88(26, iVar0[1], -627,4f, -267,12f, 38,23f, -59,95f, 1, 1);
			unk_0xD1C578C204015E1F(uParam0->f_28[1], 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_28[1], 4, 0, 1, 0);
			unk_0x0428AFDCAA63B06E(uParam0->f_28[1], 132, 1);
			unk_0x1F7539C841C2A71F(uParam0->f_28[1], 1);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_283(var uParam0)
{
	int iVar0[6];
	int iVar1;
	char* sVar2;
	float fVar3;
	
	sVar2 = "rcmnigel1b";
	iVar0[0] = joaat("ig_tylerdix");
	iVar0[1] = joaat("a_f_y_beach_01");
	iVar0[2] = joaat("s_m_m_gardener_01");
	iVar0[3] = joaat("speedo");
	iVar0[4] = joaat("comet2");
	iVar0[5] = joaat("prop_nigel_bag_pickup");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1065,12f, 366,3438f, 97,59101f };
			uParam0->f_17[1 /*3*/] = { -1020,775f, 364,7596f, 65,23878f };
			uParam0->f_24 = 40f;
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1bnmt_1b";
			func_274(39, 1);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x80813AC549A1E8AE(uParam0->f_48);
			unk_0x80813AC549A1E8AE(sVar2);
			iLocal_49 = 1;
			break;
		
		case 1:
			if ((!func_271(&iVar0) || !unk_0xE100DD4F82A51BDE(uParam0->f_48)) || !unk_0xE100DD4F82A51BDE(sVar2))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_35[0]))
			{
				func_265(&(uParam0->f_35[0]), iVar0[3], -1010,97f, 359,91f, 70,65f, 331,46f);
				if (func_137(uParam0->f_35[0]))
				{
					unk_0x1DE99C193C7EC64B(uParam0->f_35[0], 1084227584);
					unk_0xD133EF7430EDCD09(uParam0->f_35[0], 97, 97);
					unk_0x9452FE4900245259(uParam0->f_35[0], 13,5f);
					unk_0xBDE75E2FCBF91A6C(uParam0->f_35[0], 2, 0);
					unk_0xBFE60A5CC0C835D8(uParam0->f_35[0], 2, 0, 1);
					unk_0x3E13A302AA0F06BF(uParam0->f_35[0], 2, 0, 1f);
					unk_0x2B2ECB6F6371E59E(uParam0->f_35[0]);
					return 0;
				}
			}
			if (func_137(uParam0->f_35[0]))
			{
				fVar3 = unk_0x7BFB76C576628F3D(uParam0->f_35[0], 2);
				if (!unk_0x6B0915C0DDD2954F(uParam0->f_35[0], 2) && fVar3 < 0,8f)
				{
					unk_0x3E13A302AA0F06BF(uParam0->f_35[0], 2, 0, 1f);
				}
				else
				{
					iLocal_49 = 3;
				}
			}
			break;
		
		case 3:
			if (func_137(uParam0->f_35[0]))
			{
				if (!unk_0x13CCB1AD131C1082(uParam0->f_35[0], sVar2, "idle_speedo", 3))
				{
					if (unk_0xE100DD4F82A51BDE(sVar2))
					{
						unk_0x3D98759970C5FCC9(uParam0->f_35[0], sVar2, "idle_speedo");
						return 0;
					}
					else
					{
						unk_0x80813AC549A1E8AE(sVar2);
						return 0;
					}
				}
			}
			func_265(&(uParam0->f_35[1]), iVar0[4], -1018,26f, 357,76f, 70,2f, 339,52f);
			if (func_137(uParam0->f_35[1]))
			{
				unk_0xD133EF7430EDCD09(uParam0->f_35[1], 27, 27);
			}
			func_285(&(uParam0->f_28[0]), iVar0[0], -1054,7f, 355,94f, 68,35f, 23,67f, 26);
			if (func_136(uParam0->f_28[0]))
			{
				unk_0x34A9A872D3C510BF(uParam0->f_28[0], 0);
				unk_0x62C438C53BB57AFD(uParam0->f_28[0], -1054,7f, 355,94f, 68,35f, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uParam0->f_28[0], 23,67f);
				unk_0x10425721983AE158(uParam0->f_28[0], sVar2, "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			func_285(&(uParam0->f_28[1]), iVar0[1], -1058,43f, 362,78f, 69,86f, 130,45f, 26);
			if (func_136(uParam0->f_28[1]))
			{
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 0, 0, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 2, 0, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 3, 0, 2, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 4, 0, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 8, 0, 1, 0);
				unk_0x34A9A872D3C510BF(uParam0->f_28[1], 0);
				uParam0->f_59 = unk_0x2EC137C692A52458(-1059f, 360,976f, 69f, 0f, 0f, -1,08f, 2);
				unk_0xBF3497E24DEAD835(uParam0->f_59, 1);
				unk_0xA7C372501A8A3B23(uParam0->f_59, 0);
				unk_0x3DA436E63AB0F541(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "base_girl", 1000f, -8f, 592, 0, 1148846080, 0);
			}
			func_285(&(uParam0->f_28[2]), iVar0[2], -1012,57f, 357,48f, 70,62f, -28,55f, 26);
			if (func_136(uParam0->f_28[2]))
			{
				unk_0x77EFA99E6A8FFC43(uParam0->f_28[2]);
				unk_0x62C438C53BB57AFD(uParam0->f_28[2], -1012,57f, 357,48f, 70,62f, 0, 0, 1);
				unk_0xD25E9BDC14A0B649(uParam0->f_28[2], 160, 0, 0);
				if (unk_0xE100DD4F82A51BDE(sVar2))
				{
					unk_0x10425721983AE158(uParam0->f_28[2], sVar2, "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
				}
			}
			func_284(&(uParam0->f_41[0]), iVar0[5], -1050,03f, 368,95f, 69,29f, -11,27f);
			if (func_137(uParam0->f_41[0]))
			{
				unk_0xCF39804E8C88080E(uParam0->f_41[0], 0f, 0f, -11,27f, 2, 1);
				unk_0x999C62072AF920FD(uParam0->f_41[0], 0);
				unk_0x935364B4448CD584(uParam0->f_41[0], 1);
				unk_0x06A3C9A5604F9F4C(uParam0->f_41[0], 0);
				unk_0xE59BDA10CE05FD35(uParam0->f_41[0], 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x268BE77F77533D03(uParam0->f_48);
			unk_0x268BE77F77533D03(sVar2);
			return 1;
			break;
	}
	return 0;
}

void func_284(var uParam0, var uParam1, struct<3> Param2, float fParam3)
{
	func_230(uParam0);
	*uParam0 = unk_0x4E55EAB577C13329(uParam1, Param2, 1, 1, 0);
	unk_0x5C96CEA06531AB03(*uParam0, fParam3);
}

void func_285(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)
{
	func_286(uParam0);
	*uParam0 = unk_0xB1DBFEB95C0EFB88(iParam4, uParam1, Param2, fParam3, 0, 0);
}

void func_286(var uParam0)
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

int func_287(var uParam0)
{
	int iVar0[7];
	int iVar1;
	var uVar2;
	
	iVar0[0] = joaat("u_m_m_willyfist");
	iVar0[1] = joaat("a_f_y_bevhills_03");
	iVar0[2] = joaat("a_f_y_bevhills_03");
	iVar0[3] = joaat("a_f_y_bevhills_03");
	iVar0[4] = joaat("a_m_y_vinewood_04");
	iVar0[5] = joaat("a_m_y_gay_01");
	iVar0[6] = joaat("gauntlet");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -565,5146f, 269,6139f, 81,02081f };
			uParam0->f_17[1 /*3*/] = { -562,2337f, 306,5382f, 94,13258f };
			uParam0->f_24 = 30f;
			uParam0->f_27 = 1;
			func_288(4, 0);
			func_329(" SetupScene_NIGEL_1A - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, FALSE)	");
			uParam0->f_48 = "rcmnigel1aig_1";
			uParam0->f_59 = -1;
			func_274(38, 1);
			uVar2 = unk_0x0556019E7EE8EC9A(-555,5934f, 285,7738f, 81,1763f, "v_rockclub");
			if (unk_0xF8A8852F99E201DD(uVar2))
			{
				unk_0xEEC112F70F9E6543(iVar2);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x80813AC549A1E8AE(uParam0->f_48);
			iLocal_49 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !unk_0xE100DD4F82A51BDE(uParam0->f_48))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			func_285(&(uParam0->f_28[0]), iVar0[0], -552,66f, 287,75f, 82,18f, 123,75f, 26);
			func_285(&(uParam0->f_28[1]), iVar0[1], -553,46f, 287,34f, 82,18f, -65,86f, 26);
			if (func_136(uParam0->f_28[1]))
			{
				unk_0x3F58BFCF656F0DF1(uParam0->f_28[1], 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 0, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 2, 0, 2, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 3, 1, 2, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 4, 0, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 7, 0, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[1], 8, 1, 0, 0);
			}
			uParam0->f_59 = unk_0x2EC137C692A52458(-552,18f, 285,476f, 81,976f, 0f, 0f, 79,5f, 2);
			unk_0xBF3497E24DEAD835(uParam0->f_59, 1);
			unk_0xA7C372501A8A3B23(uParam0->f_59, 0);
			if (func_136(uParam0->f_28[0]))
			{
				unk_0x3DA436E63AB0F541(uParam0->f_28[0], uParam0->f_59, uParam0->f_48, "BASE_02_Willie", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			if (func_136(uParam0->f_28[1]))
			{
				unk_0x3DA436E63AB0F541(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "BASE_02_GIRL", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			func_285(&(uParam0->f_28[2]), iVar0[2], -559,94f, 285,99f, 85,38f, -59,06f, 26);
			func_285(&(uParam0->f_28[3]), iVar0[3], -558,87f, 289,79f, 85,38f, 162,44f, 26);
			func_285(&(uParam0->f_28[4]), iVar0[4], -559f, 286,09f, 85,38f, 65,92f, 26);
			func_285(&(uParam0->f_28[5]), iVar0[5], -558,84f, 288,97f, 85,38f, -7,72f, 26);
			if (func_136(uParam0->f_28[2]))
			{
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 0, 0, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 2, 1, 2, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 3, 1, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 4, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 7, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[2], 8, 1, 0, 0);
			}
			if (func_136(uParam0->f_28[3]))
			{
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 0, 1, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 2, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 3, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 4, 1, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 7, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[3], 8, 1, 0, 0);
			}
			if (func_136(uParam0->f_28[4]))
			{
				unk_0xD1C578C204015E1F(uParam0->f_28[4], 0, 0, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[4], 2, 0, 2, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[4], 3, 0, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[4], 4, 0, 1, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[4], 8, 0, 0, 0);
			}
			if (func_136(uParam0->f_28[5]))
			{
				unk_0xD1C578C204015E1F(uParam0->f_28[5], 0, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[5], 2, 2, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[5], 3, 0, 3, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[5], 4, 1, 0, 0);
				unk_0xD1C578C204015E1F(uParam0->f_28[5], 8, 0, 2, 0);
			}
			func_265(&(uParam0->f_35[0]), iVar0[6], -553,55f, 308,61f, 82,81f, 202,78f);
			if (func_137(uParam0->f_35[0]))
			{
				unk_0x20DD46D27530FAC7(uParam0->f_35[0], 1);
				unk_0x0B74F181ADFC39BF(uParam0->f_35[0], 1);
				unk_0x06A3C9A5604F9F4C(uParam0->f_35[0], 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x268BE77F77533D03(uParam0->f_48);
			return 1;
			break;
	}
	return 0;
}

void func_288(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_292(iParam0, &iVar1);
	if (!unk_0x1B79E937E91F40C3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x79D5985D0CE1880C(iVar1))
		{
			if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == iVar1)
			{
				func_291(iParam0, 1);
				return;
			}
			iVar2 = unk_0x92EA98681B1610F2();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_291(iParam0, 1);
				return;
			}
			unk_0xA5C49FC956688050(iVar1, 1);
		}
		else if (!bParam1 && unk_0x79D5985D0CE1880C(iVar1))
		{
			if (func_289(iParam0))
			{
				func_291(iParam0, 0);
			}
			unk_0xA5C49FC956688050(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_289(iParam0))
			{
				func_291(iParam0, 0);
			}
		}
	}
}

int func_289(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_290(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_39382[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_290(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_291(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_290(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_39382[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_39382[Var0.f_1]), Var0.f_0);
	}
}

var func_292(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_293(iParam0) };
	*iParam1 = unk_0x0556019E7EE8EC9A(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_293(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_295(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_295(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_295(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_295(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_295(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_295(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_295(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312298[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_295(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_295(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_295(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_295(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_295(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_295(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_295(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_295(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_295(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_295(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_295(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_295(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_295(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_295(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_295(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_295(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_295(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_295(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_295(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_295(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_295(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_295(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_295(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_295(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_295(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_295(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_295(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_295(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_295(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_295(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_295(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103,562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113,4f, 25,7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99,2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1,1f, -705,6f, 16,1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99,4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935,7f, -2992,2f, 13,9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152,3f, -1004,4f, -97,8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415,1f, -69,6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984,4f, -95,4f, 76,8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930,1f, -2269,9f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930,1f, -2240,1f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930,1f, -2213,2f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930,1f, -2183,4f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421,015f, -3012,587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113,2f, 27,6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_222620[0 /*160*/].f_16 };
			Var0.f_3 = func_294(&(Global_4718592.f_222620[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_222620[1 /*160*/].f_16 };
			Var0.f_3 = func_294(&(Global_4718592.f_222620[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_222620[2 /*160*/].f_16 };
			Var0.f_3 = func_294(&(Global_4718592.f_222620[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_222620[3 /*160*/].f_16 };
			Var0.f_3 = func_294(&(Global_4718592.f_222620[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_222620[4 /*160*/].f_16 };
			Var0.f_3 = func_294(&(Global_4718592.f_222620[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196,14f, -580,65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
			if (func_82(Var0))
			{
			}
			return Var0;
	}
}

var func_294(var uParam0)
{
	return uParam0;
}

struct<6> func_295(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_296(var uParam0)
{
	int iVar0[3];
	int iVar1;
	var uVar2;
	bool bVar3;
	
	iVar0[0] = uLocal_50;
	iVar0[1] = uLocal_51;
	iVar0[2] = iLocal_53;
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xEC9DAA34BBB4658C(iVar0[iVar1]);
				iVar1++;
			}
			func_272(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			func_272(&uLocal_54, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
			iLocal_49 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !func_270(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		
		case 2:
			bVar3 = true;
			if (!func_267(&(uParam0->f_28[0]), 64, -1100,5f, 789,8f, 164,34f, 1,82f, "RC: NIGEL", 1))
			{
				bVar3 = false;
			}
			if (!func_267(&(uParam0->f_28[1]), 63, -1099,35f, 789,15f, 164,47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar3 = false;
			}
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_35[0]))
			{
				func_265(&(uParam0->f_35[0]), iLocal_53, -1077,959f, 793,9361f, 164,6374f, 172,8563f);
				if (func_137(uParam0->f_35[0]))
				{
					unk_0xD133EF7430EDCD09(uParam0->f_35[0], 65, 0);
					unk_0xBDE75E2FCBF91A6C(uParam0->f_35[0], 5, 0);
					unk_0x3FEAE59CDE6D3946(uParam0->f_35[0], "28BNT310");
					unk_0x05D3F682DDA06C20(uParam0->f_35[0], 0);
					unk_0x0B74F181ADFC39BF(uParam0->f_35[0], 10);
					unk_0x1E00EF437AE43BB8(uParam0->f_35[0], 0);
					unk_0x03DACC5F7E5335AC(uParam0->f_35[0], 0);
					unk_0x515A606E0E38355D(uParam0->f_35[0], 0);
				}
			}
			if (bVar3)
			{
				iLocal_49 = 3;
			}
			break;
		
		case 3:
			if (func_137(uParam0->f_28[0]) && func_137(uParam0->f_28[1]))
			{
				unk_0xAAA71DD7E9059338(uParam0->f_28[0], 1);
				unk_0xAAA71DD7E9059338(uParam0->f_28[1], 1);
				uVar2 = unk_0x2EC137C692A52458(-1100,558f, 789,8862f, 163,3285f, 0f, 0f, 0f, 2);
				unk_0x3DA436E63AB0F541(uParam0->f_28[0], uVar2, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(uParam0->f_28[1], uVar2, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x55098D9E9AD58806(iVar0[iVar1]);
				iVar1++;
			}
			func_274(37, 1);
			return 1;
			break;
	}
	return 0;
}

int func_297(int iParam0)
{
	struct<27> Var0;
	bool bVar1;
	
	func_120(iParam0, &Var0);
	bVar1 = func_113();
	if (bVar1 == 145)
	{
		return 1;
	}
	else if ((bVar1 != 1 && bVar1 != 0) && bVar1 != 2)
	{
		return 1;
	}
	if (!BitTest(Var0.f_26, bVar1))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)
{
	char* sVar0;
	
	if (Global_79389)
	{
		func_329("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113969.f_9088 && !func_118(1))
	{
		func_329("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_299(iParam0))
	{
		Global_113056[iParam0 /*10*/].f_1 = 1;
		func_329("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_101533.f_11 == 6)
	{
		if (Global_101533 < 9)
		{
			func_120(iParam0, &sVar0);
			if (unk_0x1B79E937E91F40C3(&(Global_101533.f_3), sVar0))
			{
				func_329("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("candidate_controller")) == 0)
	{
		Global_113056[iParam0 /*10*/].f_1 = 1;
		func_329("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_299(int iParam0)
{
	var uVar0;
	
	func_120(iParam0, &uVar0);
	if (!func_174(4))
	{
		if (func_259(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_258() && !func_257())
	{
		return 0;
	}
	if (func_305(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_177();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_261(iParam0))
	{
		if (!func_304(iParam0))
		{
			return 0;
		}
		if (!func_303(iParam0))
		{
			return 0;
		}
		if (func_302(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_300(5))
		{
			Global_113056[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_113056[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_101585.f_391 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_300(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_301(iParam0, &sVar1);
		iVar2 = unk_0x0556019E7EE8EC9A(Global_96551[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_101585.f_391 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_301(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x5AEB336317DC4151("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x1B79E937E91F40C3(sParam1, "");
}

int func_302(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 3);
}

int func_303(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 2);
}

int func_304(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 0);
}

int func_305(int iParam0)
{
	if (func_256(iParam0))
	{
		return 0;
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_306()
{
	func_329("Running end routines.");
	Global_113687 = (Global_113687 - 1);
}

int func_307(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_308((*iParam0)[0], Param2, fParam3, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_308((*iParam0)[iVar0], Param2, fParam3, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_329("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_308(int iParam0, struct<3> Param1, float fParam2, var uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_120(iParam0, &Var1);
	if (func_309(Var1.f_6, Param1, fParam2, 0))
	{
		if (BitTest(Global_113969.f_18577[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_261(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_309(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_310(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (*iParam0 == 43)
	{
		func_286(&(iParam0->f_28[1]));
	}
	if (unk_0xC450B06E5AAA0985(uLocal_67))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_67);
	}
	if (bParam2)
	{
		func_329("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 38)
		{
			func_288(4, 1);
			func_327(iParam0);
			func_329(" Script_Cleanup - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, TRUE)");
		}
		else if (*iParam0 == 39)
		{
			func_325(iParam0);
		}
		func_315(iParam0, 0, 0, 0);
	}
	func_274(*iParam0, 0);
	switch (*iParam0)
	{
		case 43:
			if (iParam1->f_1 != -1)
			{
				unk_0x394AFAC073E1F277(iParam1->f_1);
			}
			break;
	}
	func_314(&(iParam0->f_48));
	if (iLocal_66 != -1)
	{
		func_329("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_226(&iLocal_66);
	}
	switch (*iParam0)
	{
		case 37:
			sVar0 = "NIG1A_AMB";
			break;
	}
	func_311(sVar0);
	if (bParam2)
	{
		func_227(*iParam0);
	}
	func_306();
	func_329("SCRIPT TERMINATED");
	unk_0xBBC29EBE6E1A48FA();
}

void func_311(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (func_212(sParam0))
		{
			func_312();
		}
	}
}

void func_312()
{
	Global_21152 = 0;
	func_313();
}

void func_313()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_314(var uParam0)
{
	if (func_217(uParam0))
	{
		if (unk_0xE100DD4F82A51BDE(*uParam0))
		{
			unk_0x268BE77F77533D03(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_315(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_322(uParam0, iParam1);
	func_319(uParam0, bParam2);
	func_316(uParam0, bParam3);
}

void func_316(var uParam0, bool bParam1)
{
	func_317(&(uParam0->f_41), bParam1);
}

void func_317(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_230(uParam0[iVar0]);
		}
		else
		{
			func_318(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_318(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB3B56385ECA230B4(uParam0);
		}
		else
		{
			unk_0xC942CD0D37369DC4(*uParam0);
		}
	}
}

void func_319(var uParam0, bool bParam1)
{
	func_320(&(uParam0->f_35), bParam1);
}

void func_320(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_266(uParam0[iVar0]);
		}
		else
		{
			func_321(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_321(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x1C2F771CDC87A3A5(*uParam0, 0);
		if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
		{
			unk_0x68298CA6191CDFDB(uParam0);
		}
	}
}

void func_322(var uParam0, int iParam1)
{
	func_323(&(uParam0->f_28), iParam1);
}

void func_323(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_286(uParam0[iVar0]);
		}
		else
		{
			func_324(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_324(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

void func_325(var uParam0)
{
	if (unk_0x5266F1D2AEF6F73A(uParam0->f_59))
	{
		if (func_136(uParam0->f_28[1]))
		{
			if (func_326(uParam0->f_28[1], joaat("script_task_synchronized_scene")))
			{
				unk_0x974022927CB47E68(uParam0->f_28[1]);
			}
			unk_0xC0086E5CBF13BBF7(uParam0->f_28[1], -1000f, 1);
		}
	}
}

int func_326(int iParam0, int iParam1)
{
	if (func_136(uParam0))
	{
		if (unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_327(var uParam0)
{
	if (unk_0x5266F1D2AEF6F73A(uParam0->f_59))
	{
		if (func_136(uParam0->f_28[0]))
		{
			if (func_326(uParam0->f_28[0], joaat("script_task_synchronized_scene")))
			{
				unk_0x974022927CB47E68(uParam0->f_28[0]);
			}
			unk_0xC0086E5CBF13BBF7(uParam0->f_28[0], -1000f, 1);
		}
		if (func_136(uParam0->f_28[1]))
		{
			if (func_326(uParam0->f_28[1], joaat("script_task_synchronized_scene")))
			{
				unk_0x974022927CB47E68(uParam0->f_28[1]);
			}
			unk_0xC0086E5CBF13BBF7(uParam0->f_28[1], -1000f, 1);
		}
	}
}

void func_328(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

void func_329(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
	}
}

void func_330(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_331()
{
	func_329("Running start routines.");
	Global_113687++;
}

int func_332(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

