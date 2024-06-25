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
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<27> Local_39 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_40[5];
	int iLocal_41[5] = { 0, 0, 0, 0, 0 };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59[2];
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 16;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	var uLocal_230 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	
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
	Local_38 = { -690,938f, 512,2703f, 109,3639f };
	bLocal_50 = -1;
	iLocal_58 = 60000;
	iLocal_229 = 99;
	if (unk_0x96CFB880BAC634CE(146))
	{
		func_96();
	}
	if (func_95(90) == 1)
	{
		func_94();
		unk_0xBBC29EBE6E1A48FA();
	}
	iLocal_49 = Global_113969.f_10052.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_91(6);
	func_90(&Local_39, joaat("prop_ch2_09c_garage_door"), -689,81f, 510,34f, 109,98f, Local_38, -688,4919f, 507,2549f, 108,9186f, -691,8835f, 516,2689f, 113,4316f, 9,25f, -687,4553f, 507,5179f, 109,3635f, -690,9484f, 506,2783f, 109,3631f);
	func_89(&Local_39, 2);
	Local_39.f_4 = 3;
	unk_0x60040CDD28AA1BC3(Local_38, 5f, 0, 0, 0, 0, 0, 0, 0);
	func_88(&Local_59, -691,9059f, 515,8249f, 108,6139f, -684,0605f, 493,0171f, 110,8504f, 8,25f);
	unk_0x5E08BBBF87BC4886(Local_59[0 /*3*/], Local_59[1 /*3*/], 8,25f, 0, 0, 1);
	unk_0x5E08BBBF87BC4886(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 0, 0, 1);
	func_87(-688,5f, 503,7f, 110,2f, 30f, &Var0, &Var1);
	uLocal_62 = unk_0xA7B0B03284E7503C(Var0, Var1, 0, 1, 1, 1, 1);
	if (func_95(90) == 1)
	{
		func_94();
		func_96();
	}
	if (Global_113969.f_10052.f_104 == 0)
	{
		Global_113969.f_10052.f_104 = unk_0xB12880C92EA6EE15();
	}
	func_83(1);
	func_82(0);
	while (true)
	{
		if (func_95(90) == 1)
		{
			func_94();
			func_96();
		}
		func_81(unk_0x4A8C381C258A124D());
		if (unk_0x3D2EB53CF281A77E() || func_75() != 0)
		{
			func_70();
		}
		switch (iLocal_44)
		{
			case 0:
				func_69(&iLocal_43);
				break;
			
			case 4:
				func_68(&iLocal_43);
				break;
			
			case 1:
				func_67(&iLocal_43);
				break;
			
			case 2:
				func_61(&iLocal_43);
				break;
			
			case 3:
				func_57(&iLocal_43);
				break;
			
			case 6:
				func_54(2, 6, 1);
				func_53(2, "EPS_LSTEMAIL", 1);
				func_52(2);
				func_96();
				break;
		}
		func_49(&Local_39);
		if (func_48(&Local_39))
		{
			if (func_42(&Local_39))
			{
				if (unk_0x1D25F777D0165BF3() == Global_79084)
				{
					Global_79084 = 0;
					Global_113969.f_32753.f_5588 = 0;
				}
				unk_0x60040CDD28AA1BC3(Local_39.f_14, 8,5f, 0, 0, 0, 0, 0, 0, 0);
				Global_113969.f_10052.f_103 = iLocal_49;
				func_40();
				func_39(&uLocal_63, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
				func_22(&uLocal_63, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					unk_0x428C32CC68809A35(1);
				}
				func_19();
			}
		}
		if (Global_113969.f_10052.f_104 != 0)
		{
			iLocal_47 = (Global_113969.f_10052.f_104 + 14 % func_18(unk_0x8825A6E0A30BDCB8(), unk_0x7598FE4545010A75()));
			if (((unk_0xB12880C92EA6EE15() == iLocal_47 && !func_17(0)) && !unk_0xD5FF242D0AFC5855(unk_0x259BE71D8A81D4FA())) && unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_228, &uLocal_230, &iLocal_229);
		if ((iLocal_57 > 0 && unk_0x1DD05E817C89C737() > iLocal_57) && iLocal_229 == 99)
		{
			iLocal_57 = 0;
			if (func_92())
			{
				func_82(6);
			}
		}
		system::wait(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
			if (unk_0xA0C7B98BCF1EEF9E(*iParam0))
			{
				iVar0 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			unk_0x88F483FBD433696A(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x882AEFD55B8D51FB("EPS_CAR_TITLE");
			unk_0xCFAD3D478C87321A();
			unk_0x882AEFD55B8D51FB("EPS_CAR_NOTE");
			unk_0x511D14ED2DA887E1(func_3());
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			*uParam1 = unk_0x1DD05E817C89C737();
			*iParam2++;
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - *uParam1) > 7000)
			{
				unk_0x88F483FBD433696A(*iParam0, "SHARD_ANIM_OUT");
				unk_0x330108B080A2132F(1);
				unk_0x74BF156C860580D4(0,33f);
				unk_0xE6B753D52F4CA222();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0xA0C7B98BCF1EEF9E(*iParam0))
				{
					unk_0xA91A4C18A2DB01BD(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0xA0C7B98BCF1EEF9E(*iParam0))
				{
					unk_0xA91A4C18A2DB01BD(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (unk_0xA0C7B98BCF1EEF9E(*iParam0))
			{
				unk_0xD314260005F064BF(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()
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

int func_3()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (BitTest(iLocal_49, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_54(2, Local_40[(5 - iParam0) /*3*/], 1);
	if (func_15(bLocal_50))
	{
		func_53(2, Local_40[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_53(2, Local_40[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_41)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_41[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_113969.f_10052.f_104 = unk_0xB12880C92EA6EE15();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_54569[iVar0 /*203*/].f_9 - 1);
	if (!Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_45269[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_45269[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45269[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xFD216000DC314A92())
	{
		return;
	}
	iVar0 = func_75();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xCCDB0041859B85A6(sParam3);
				if (!unk_0xD6F9DEE4765092A9(iParam4))
				{
					unk_0xACF853FB3F6EA7D4(iParam4);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam5))
				{
					unk_0xACF853FB3F6EA7D4(iParam5);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam6))
				{
					unk_0xACF853FB3F6EA7D4(iParam6);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xACF853FB3F6EA7D4(iParam7);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam8))
				{
					unk_0xACF853FB3F6EA7D4(iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam9))
				{
					unk_0xACF853FB3F6EA7D4(iParam9);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam10))
				{
					unk_0xACF853FB3F6EA7D4(iParam10);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam11))
				{
					unk_0xACF853FB3F6EA7D4(iParam11);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam12))
				{
					unk_0xACF853FB3F6EA7D4(iParam12);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam13))
				{
					unk_0xACF853FB3F6EA7D4(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0x5C7E2225D7451992(&cVar2, &cVar2, 0, 2, unk_0xFACCDE46E24AD056(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0x5C7E2225D7451992("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFACCDE46E24AD056(func_8(iParam1)), 0));
		}
		switch (Global_20930)
		{
			case 0:
				StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
				Global_45261++;
				if (Global_45261 > 16)
				{
					Global_45261 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
				Global_45263++;
				if (Global_45263 > 16)
				{
					Global_45263 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
				Global_45262++;
				if (Global_45262 > 16)
				{
					Global_45262 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xBF3D28CA44F3BE2D(-1, "Notification", &Global_20919, 1);
	}
}

void func_7(var uParam0)
{
	Global_45264[Global_45268] = uParam0;
	Global_23344 = 1;
	Global_23343 = uParam0;
	Global_45268++;
	if (Global_45268 == 3)
	{
		Global_45268 = 0;
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFACCDE46E24AD056(&(Global_2169[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFACCDE46E24AD056(&(Global_2169[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFACCDE46E24AD056(&(Global_2169[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFACCDE46E24AD056(&(Global_2169[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFACCDE46E24AD056(&(Global_2169[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFACCDE46E24AD056(&(Global_2169[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFACCDE46E24AD056(&(Global_2169[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFACCDE46E24AD056(&(Global_2169[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFACCDE46E24AD056(&(Global_2169[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFACCDE46E24AD056(&(Global_2169[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFACCDE46E24AD056(&(Global_2169[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFACCDE46E24AD056(&(Global_2169[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFACCDE46E24AD056(&(Global_2169[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFACCDE46E24AD056(&(Global_2169[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFACCDE46E24AD056(&(Global_2169[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFACCDE46E24AD056(&(Global_2169[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFACCDE46E24AD056(&(Global_2169[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFACCDE46E24AD056(&(Global_2169[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFACCDE46E24AD056("CELL_E_381");
		
		case 38:
			return unk_0xFACCDE46E24AD056(&(Global_2169[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFACCDE46E24AD056(&(Global_2169[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFACCDE46E24AD056(&(Global_2169[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFACCDE46E24AD056(&(Global_2169[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFACCDE46E24AD056(&(Global_2169[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFACCDE46E24AD056(&(Global_2169[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFACCDE46E24AD056(&(Global_2169[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFACCDE46E24AD056(&(Global_2169[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFACCDE46E24AD056(&(Global_2169[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFACCDE46E24AD056(&(Global_2169[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFACCDE46E24AD056(&(Global_2169[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFACCDE46E24AD056(&(Global_2169[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFACCDE46E24AD056(&(Global_2169[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFACCDE46E24AD056(&(Global_2169[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFACCDE46E24AD056(&(Global_2169[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFACCDE46E24AD056(&(Global_2169[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_54569[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_54569[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_54569[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_41[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_41[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_41[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_41[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_41[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)
{
	return BitTest(iLocal_49, iParam0);
}

int func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return BitTest(iLocal_49, iParam0 + 5);
}

int func_16()
{
	return (5 - func_3());
}

int func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	iLocal_229 = 0;
	unk_0xDF7F16323520B858(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0x1164A75E490C27B6(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)
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

bool func_21(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_35();
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
			unk_0x8744D2E3FC95740E(&Global_8802, false);
			if (bParam2)
			{
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_29();
		func_24();
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
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x259BE71D8A81D4FA()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
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

void func_30()
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

int func_31()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
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

void func_33()
{
	if (func_34(14))
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
		Global_20930 = func_75();
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

bool func_34(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_35()
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

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_40()
{
	if (func_41(0))
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

int func_41(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_81(uVar3[iVar0]))
		{
			if (unk_0x5105BE70DEF1F5FB(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26)
			{
				if (func_43(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_113969.f_10052.f_104 = unk_0xB12880C92EA6EE15();
		iLocal_57 = (unk_0x1DD05E817C89C737() + iLocal_58);
	}
	return iVar2;
}

int func_43(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
	if (func_47(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (func_46(iVar1, bVar0))
		{
			if (!func_14(bVar0))
			{
				func_45(bVar0, unk_0x8D91ADE44AC79BC9(iParam0) < 875);
				func_44(bVar0, 1);
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_49, bParam0);
		bLocal_50 = bParam0;
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iLocal_49, bParam0);
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_49, iParam0 + 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iLocal_49, iParam0 + 5);
	}
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_41[iParam1])
	{
		return 1;
	}
	if (iLocal_41[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_47(int iParam0)
{
	if (!func_81(uParam0))
	{
		return 1;
	}
	if (unk_0x8D91ADE44AC79BC9(uParam0) < 750)
	{
		return 1;
	}
	if (unk_0x2495CCF0BF303C19(iParam0, 1) || unk_0x2495CCF0BF303C19(iParam0, 0))
	{
		return 1;
	}
	return unk_0x4FD9D8C197FF8A52(iParam0) > 0;
}

bool func_48(var uParam0)
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_49(var uParam0)
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (unk_0x5A3D7606D599F99A(uParam0->f_19[0 /*3*/], 1,2f, 0, 1, 1, 0, 0, unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (unk_0x5A3D7606D599F99A(uParam0->f_19[1 /*3*/], 1,2f, 0, 1, 1, 0, 0, unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_50(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0,5f, 1) };
		uParam0->f_26 = unk_0x5A3D7606D599F99A(Var0, 1,2f, 0, 1, 1, 0, 0, unk_0x4A8C381C258A124D(), 0);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			unk_0x8E4825CCACA34B58(iLocal_45);
			iLocal_46 = 0;
			unk_0xF37CDE164C892195(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_46)
		{
			unk_0xF37CDE164C892195(iLocal_45, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_46 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			unk_0x8E4825CCACA34B58(iLocal_45);
			iLocal_46 = 0;
			unk_0xF37CDE164C892195(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_46)
		{
			unk_0xF37CDE164C892195(iLocal_45, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_46 = 1;
		}
	}
	if (unk_0xE10356B235A70E70(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0x1F3E4227575DF103(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
	}
}

Vector3 func_50(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		fParam2 = func_51(fParam2, 0f, 1f);
	}
	return Param0 + Vector(fParam2, fParam2, fParam2) * Param1 - Param0;
}

float func_51(float fParam0, float fParam1, float fParam2)
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

void func_52(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113969.f_24989, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_54569[iVar0 /*203*/] = 0;
}

void func_53(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_56(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_54569[iVar0 /*203*/].f_2 = iParam0;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_54569[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54569[iVar0 /*203*/].f_4[iVar1] == Global_45269[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54569[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54569[iVar0 /*203*/].f_4[Global_54569[iVar0 /*203*/].f_3] = Global_45269[iParam1 /*12*/].f_3;
			Global_54569[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54569[iVar0 /*203*/].f_4[iVar1] == Global_45269[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54569[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54569[iVar0 /*203*/].f_4[Global_54569[iVar0 /*203*/].f_3] = Global_45269[iParam1 /*12*/].f_2;
			Global_54569[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_54569[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_55(Global_54569[iVar0 /*203*/].f_4[iVar1], Global_54569[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_48594[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_48594[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_10(Global_45269[iVar5 /*12*/].f_1) };
		if (Global_45269[iVar5 /*12*/].f_2 == iParam0 && !Global_45269[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_45269[iVar5 /*12*/].f_2;
		iVar0 = Global_54207[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = (Global_45261 - 1);
						if (Global_45261 < 0)
						{
							Global_45261 = 0;
						}
						break;
					
					case 1:
						Global_45262 = (Global_45262 - 1);
						if (Global_45262 < 0)
						{
							Global_45262 = 0;
						}
						break;
					
					case 2:
						Global_45263 = (Global_45263 - 1);
						if (Global_45263 < 0)
						{
							Global_45263 = 0;
						}
						break;
					}
				}
		}
		Global_54207[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_54207[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_54207[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54207[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_54207[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = (Global_45261 - 1);
						if (Global_45261 < 0)
						{
							Global_45261 = 0;
						}
						break;
					
					case 1:
						Global_45262 = (Global_45262 - 1);
						if (Global_45262 < 0)
						{
							Global_45262 = 0;
						}
						break;
					
					case 2:
						Global_45263 = (Global_45263 - 1);
						if (Global_45263 < 0)
						{
							Global_45263 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_54569[iVar9 /*203*/].f_1 == iParam1 && Global_54569[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_54207[iParam0 /*120*/].f_18[iVar0] = Global_54569[iVar8 /*203*/].f_1;
		Global_54207[iParam0 /*120*/].f_1[iVar0] = (Global_54569[iVar8 /*203*/].f_9 - 1);
		Global_54207[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_54207[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54207[iParam0 /*120*/]++;
		iVar10 = Global_54207[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_54569[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_45269[iVar11 /*12*/].f_2;
		if (Global_54569[iVar8 /*203*/].f_10[(Global_54569[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_54569[iVar8 /*203*/].f_10[(Global_54569[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_45269[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54207[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_54569[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54569[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54569[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_54569[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_54569[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_54569[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_54569[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_54569[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_54207[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_54207[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_54207[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_54207[iVar6 /*120*/].f_18[iVar8] == Global_54569[iVar4 /*203*/].f_1)
							{
								if (Global_54207[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_45261 = (Global_45261 - 1);
											break;
										
										case 1:
											Global_45262 = (Global_45262 - 1);
											break;
										
										case 2:
											Global_45263 = (Global_45263 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_54569[iVar4 /*203*/].f_2 = iParam0;
	Global_54569[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_54569[iVar4 /*203*/] = 1;
	}
	Global_113969.f_21040.f_310++;
	if (Global_113969.f_21040.f_310 == 0)
	{
		Global_113969.f_21040.f_310 = 1;
	}
	Global_54569[iVar4 /*203*/].f_1 = Global_113969.f_21040.f_310;
	Global_54569[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_57(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_42);
			func_59("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_58())
			{
				*iParam0 = 4;
				return;
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
				if (func_81(iVar0))
				{
					if (unk_0xDE3B10768F6103AD(iVar0, 0, 1) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				func_59("EPS_DROP_ESCAPE", -1);
				func_82(2);
			}
			break;
	}
}

int func_58()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	if (!func_81(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iLocal_52 = 0;
		return 0;
	}
	uVar1 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
	if (!func_81(uVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_46(unk_0x4B423FAA24E8ABF0(uVar1), iVar0))
			{
				if (func_47(iVar1))
				{
					if (!iLocal_52)
					{
						func_59("EPS_DROP_FAIL", -1);
						iLocal_52 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_59(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_60(int iParam0)
{
	if (unk_0xC450B06E5AAA0985(*iParam0))
	{
		unk_0xBC64B805EE071A37(*iParam0, 0);
		unk_0xFE54B8568B2ABD12(iParam0);
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_89(&Local_39, 1);
			Local_39.f_4 = 4;
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1,5f);
			}
			*iParam0 = 2;
			iLocal_48 = 0;
			iLocal_56 = 0;
			break;
		
		case 2:
			switch (iLocal_48)
			{
				case 0:
					if (iLocal_53 == 1 && !Local_39.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							unk_0x428C32CC68809A35(1);
						}
					}
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
					{
						func_82(4);
						return;
					}
					if (func_66(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
					}
					if (func_81(iVar0) && unk_0xDE3B10768F6103AD(iVar0, 0, 1) > 0)
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0) != unk_0x4A8C381C258A124D())
						{
							func_82(3);
							return;
						}
					}
					if (!Local_39.f_26)
					{
						if (iLocal_54 == 0)
						{
							if (func_65(iVar0))
							{
								if (unk_0x5105BE70DEF1F5FB(iVar0, Local_39.f_6[0 /*3*/], Local_39.f_6[1 /*3*/], Local_39.f_6.f_7, 0, 1, 0))
								{
									func_64("EPS_DROP_EXIT", 7500, 1);
									iLocal_56 = 0;
									iLocal_54 = 1;
									iLocal_53 = 0;
								}
							}
						}
						if (func_63(unk_0x4A8C381C258A124D(), Local_39.f_14, 0) < 3f)
						{
							func_60(&iLocal_42);
						}
						if (func_63(unk_0x4A8C381C258A124D(), Local_39, 0) > (15f + 5f))
						{
							func_89(&Local_39, 2);
							Local_39.f_4 = 3;
							iLocal_54 = 0;
							iLocal_53 = 0;
							iLocal_56 = 0;
							func_82(1);
							return;
						}
						if (func_62(&Local_39) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							func_89(&Local_39, 2);
							Local_39.f_4 = 3;
							iLocal_56 = 0;
							func_82(0);
							return;
						}
					}
					if ((Local_39.f_26 && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
					{
						if (iLocal_56 == 0)
						{
							iLocal_56 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_56) > 500)
						{
							if (iLocal_53 == 0)
							{
								unk_0x406CBCEA35499884();
								func_59("EPS_DROP_MESS", -1);
								iLocal_53 = 1;
								iLocal_54 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_62(var uParam0)
{
	return (!uParam0->f_26 && !unk_0x5A3D7606D599F99A(uParam0->f_14, 6,2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_63(int iParam0, struct<3> Param1, int iParam2)
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

void func_64(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_65(int iParam0)
{
	if (func_66(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66(int iParam0)
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

void func_67(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!unk_0xC450B06E5AAA0985(iLocal_42))
			{
				iLocal_42 = unk_0x34864AB7DA700AA6(Local_38);
				if (unk_0xC450B06E5AAA0985(iLocal_42))
				{
					unk_0x4C905FB262965D5D(iLocal_42, 206);
					unk_0x61183D6239A9D7B8(iLocal_42, 42);
				}
			}
			*iParam0 = 2;
			iLocal_48 = 0;
			break;
		
		case 2:
			if (!func_58())
			{
				func_82(0);
				return;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				func_82(4);
				return;
			}
			if (func_66(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
			}
			if (func_81(iVar0) && unk_0xDE3B10768F6103AD(iVar0, 0, 1) > 0)
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0) != unk_0x4A8C381C258A124D())
				{
					func_82(3);
					return;
				}
			}
			if (func_63(unk_0x4A8C381C258A124D(), Local_39, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_82(2);
			break;
	}
}

void func_68(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_42);
			if (iLocal_55 == 0)
			{
				func_59("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				if (iLocal_55 == 0)
				{
					func_59("EPS_DROP_ESCAPE", -1);
				}
				func_82(2);
			}
			iLocal_55 = 1;
			break;
	}
}

void func_69(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_51 = 0;
			iLocal_53 = 0;
			func_60(&iLocal_42);
			break;
		
		case 2:
			if (func_66(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39.f_6[0 /*3*/], Local_39.f_6[1 /*3*/], Local_39.f_6.f_7, 0, 1, 0) && func_48(&Local_39))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -687,6668f, 500,598f, 109,0364f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 200,7367f);
				}
			}
			if (func_63(unk_0x4A8C381C258A124D(), Local_39, 0) > (15f + 5f))
			{
				func_89(&Local_39, 2);
				if (Local_39.f_4 != 2)
				{
					Local_39.f_4 = 3;
				}
			}
			if (func_58())
			{
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					func_82(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_51 == 0 && func_66(unk_0x4A8C381C258A124D()))
			{
				if (iLocal_61 != unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))
				{
					iLocal_61 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
					func_59("EPS_DROP_HELP", -1);
					iLocal_51 = 1;
				}
			}
			iLocal_52 = 0;
			func_82(1);
			break;
	}
}

void func_70()
{
	func_72();
	while (unk_0x3D2EB53CF281A77E() || func_75() != 0)
	{
		system::wait(0);
	}
	func_71();
}

void func_71()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_81(unk_0x4A8C381C258A124D()))
	{
	}
	unk_0x5E08BBBF87BC4886(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 0, 0, 1);
	func_87(-688,5f, 503,7f, 110,2f, 30f, &Var0, &Var1);
	uLocal_62 = unk_0xA7B0B03284E7503C(Var0, Var1, 0, 1, 1, 1, 1);
	iLocal_49 = Global_113969.f_10052.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_83(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_82(0);
}

void func_72()
{
	if (unk_0xC450B06E5AAA0985(iLocal_42))
	{
		func_60(&iLocal_42);
		iLocal_42 = 0;
	}
	Global_113969.f_10052.f_103 = iLocal_49;
	func_60(&iLocal_42);
	func_83(0);
	func_74();
	func_73(&Local_39);
	unk_0xD7B6A43ACC36D868(uLocal_62, 0);
	unk_0x2AF2D6F164BD6F5A(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 1);
	unk_0x2AF2D6F164BD6F5A(Local_59[0 /*3*/], Local_59[1 /*3*/], 8,25f, 1);
}

void func_73(var uParam0)
{
	if (unk_0xE10356B235A70E70(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0x1F3E4227575DF103(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x55098D9E9AD58806(iLocal_41[iVar0]);
		iVar0++;
	}
}

int func_75()
{
	func_76();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_76()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_79(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_78(unk_0x4A8C381C258A124D());
			if (func_77(iVar0) && (!func_34(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_77(Global_113969.f_2366.f_539.f_4321))
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

bool func_77(int iParam0)
{
	return iParam0 < 3;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)
{
	if (func_77(iParam0))
	{
		return func_80(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_80(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_81(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

void func_82(int iParam0)
{
	iLocal_44 = iParam0;
	iLocal_43 = 1;
}

void func_83(bool bParam0)
{
	func_84(44, bParam0);
	func_84(45, bParam0);
	func_84(46, bParam0);
	func_84(47, bParam0);
	func_84(48, bParam0);
	func_84(49, bParam0);
	func_84(50, bParam0);
}

void func_84(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_86(iParam0, 0))
		{
			func_85(iParam0, 1, 0);
			func_85(iParam0, 2, 0);
			func_85(iParam0, 3, 0);
			func_85(iParam0, 4, 0);
			func_85(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_85(iParam0, 0, 0);
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), bParam1);
	}
}

int func_86(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_87(struct<3> Param0, float fParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { fParam1, fParam1, fParam1 };
	*uParam2 = { Param0 - Var0 };
	*uParam3 = { Param0 + Var0 };
}

void func_88(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param2 };
	uParam0->f_7 = fParam3;
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_90(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, float fParam6, struct<3> Param7, struct<3> Param8)
{
	uParam0->f_3 = iParam1;
	*uParam0 = { Param2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { Param7 };
	uParam0->f_19[1 /*3*/] = { Param8 };
	uParam0->f_14 = { Param3 };
	func_88(&(uParam0->f_6), Param4, Param5, fParam6);
}

int func_91(int iParam0)
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

bool func_92()
{
	return func_3() == 5;
}

void func_93()
{
	iLocal_41[0] = joaat("vacca");
	iLocal_41[1] = joaat("surano");
	iLocal_41[2] = joaat("tornado2");
	iLocal_41[3] = joaat("superd");
	iLocal_41[4] = joaat("double");
	Local_40[0 /*3*/] = 1;
	Local_40[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	Local_40[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	Local_40[1 /*3*/] = 2;
	Local_40[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	Local_40[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	Local_40[2 /*3*/] = 3;
	Local_40[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	Local_40[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	Local_40[3 /*3*/] = 4;
	Local_40[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	Local_40[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	Local_40[4 /*3*/] = 5;
	Local_40[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	Local_40[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_94()
{
	int iVar0;
	
	iLocal_49 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_49, iVar0);
		bVar0++;
	}
}

int func_95(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_96()
{
	int iVar0;
	
	func_60(&iLocal_42);
	func_83(0);
	func_74();
	func_73(&Local_39);
	Global_113969.f_10052.f_103 = iLocal_49;
	if (func_92() || func_95(90) == 1)
	{
		func_98(90, 1);
		func_97(6);
	}
	unk_0x2AF2D6F164BD6F5A(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 1);
	unk_0x2AF2D6F164BD6F5A(Local_59[0 /*3*/], Local_59[1 /*3*/], 8,25f, 1);
	unk_0xD7B6A43ACC36D868(uLocal_62, 0);
	if (iLocal_228 != 0)
	{
		unk_0xD314260005F064BF(&iLocal_228);
		iLocal_228 = 0;
	}
	unk_0xDF7F16323520B858(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0x1164A75E490C27B6(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	unk_0xBBC29EBE6E1A48FA();
}

int func_97(int iParam0)
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

void func_98(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

