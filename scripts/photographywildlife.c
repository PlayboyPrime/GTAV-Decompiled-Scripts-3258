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
	var uLocal_35 = 10;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_82 = 20;
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
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	struct<3> Local_216 = { 0, 0, 0 } ;
	struct<3> Local_217 = { 0, 0, 0 } ;
	struct<3> Local_218 = { 0, 0, 0 } ;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	Local_216 = { 0f, 0f, 0f };
	Local_217 = { Local_216 };
	Local_218 = { Local_216 };
	iLocal_221 = 3;
	iLocal_226 = 24818;
	iLocal_229 = 24816;
	if (unk_0x96CFB880BAC634CE(178))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_82();
	while (true)
	{
		system::wait(0);
		if (!func_81())
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		if (func_80(0))
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		if (func_79(14))
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		if ((!BitTest(Global_113969.f_10052.f_99, 0) && func_73() == 1) && !func_72())
		{
			func_1();
		}
		else
		{
			unk_0xBBC29EBE6E1A48FA();
		}
	}
}

void func_1()
{
	switch (iLocal_219)
	{
		case 0:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (BitTest(Global_113969.f_10052.f_99, 1) && !bLocal_212)
			{
				iLocal_219++;
			}
			break;
		
		case 1:
			if (func_17(&uLocal_206) > 5f)
			{
				if (!BitTest(Global_113969.f_10052.f_99, 3))
				{
					func_14(28, iLocal_81[20], 1);
					func_7(28);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 3);
					func_5(63, 1);
					iLocal_219++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_219++;
			}
			break;
		
		case 3:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 0);
			func_2();
			break;
	}
}

int func_2()
{
	if (func_80(0))
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

bool func_3(int iParam0)
{
	return func_4(iParam0, 0);
}

int func_4(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)
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
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_13(iParam0);
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
		MemCopy(&Var3, {func_12(Global_45269[iVar4 /*12*/].f_1)}, 4);
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
		func_8(1, Global_45269[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45269[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xFD216000DC314A92())
	{
		return;
	}
	iVar0 = func_73();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
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
			func_9(unk_0x5C7E2225D7451992(&cVar2, &cVar2, 0, 2, unk_0xFACCDE46E24AD056(func_10(iParam1)), 0));
		}
		else
		{
			func_9(unk_0x5C7E2225D7451992("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFACCDE46E24AD056(func_10(iParam1)), 0));
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

void func_9(var uParam0)
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

char* func_10(int iParam0)
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

char* func_11(int iParam0, int iParam1)
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

struct<16> func_12(int iParam0)
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

int func_13(int iParam0)
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

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
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
			func_15(Global_54569[iVar0 /*203*/].f_4[iVar1], Global_54569[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		Var3 = { func_12(Global_45269[iVar5 /*12*/].f_1) };
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
			Var3 = { func_12(Global_45269[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54207[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)
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
	
	iVar0 = func_13(iParam0);
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

float func_17(var uParam0)
{
	if (func_20(uParam0))
	{
		if (func_19(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_18(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)
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

bool func_19(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_20(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_21()
{
	switch (iLocal_79)
	{
		case 0:
			if (bLocal_212)
			{
				if (!func_29())
				{
					uLocal_209 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
					while (!unk_0xA0C7B98BCF1EEF9E(uLocal_209))
					{
						system::wait(0);
					}
					unk_0x88F483FBD433696A(uLocal_209, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					unk_0x330108B080A2132F(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					unk_0x330108B080A2132F(func_26());
					unk_0xE6B753D52F4CA222();
					iLocal_220 = func_26();
					Global_33185 = iLocal_220;
					system::settimerb(0);
					unk_0xBF3D28CA44F3BE2D(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_79 = 1;
			}
			break;
		
		case 1:
			if ((((((system::timerb() > 7500 || unk_0x15CCE8886267624F()) || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) || func_29()) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || func_25()) || func_24())
			{
				unk_0x88F483FBD433696A(uLocal_209, "SHARD_ANIM_OUT");
				unk_0x330108B080A2132F(1);
				unk_0x74BF156C860580D4(0,33f);
				unk_0xE6B753D52F4CA222();
				system::settimerb(0);
				iLocal_79 = 2;
			}
			else
			{
				func_23();
				if (Global_33185 > iLocal_220)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((system::timerb() > 500 || unk_0x15CCE8886267624F()) || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) || func_29()) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || func_25()) || func_24())
			{
				iLocal_79 = 3;
			}
			else
			{
				func_23();
				if (Global_33185 > iLocal_220)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_212 = false;
			iLocal_79 = 0;
			break;
	}
}

void func_22()
{
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_209))
	{
		unk_0xD314260005F064BF(&uLocal_209);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (unk_0xA0C7B98BCF1EEF9E(uLocal_209))
		{
			unk_0x6D16B99FEB0AFFF1(uLocal_209, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()
{
	if (Global_44042 == 9 || Global_44042 == 10)
	{
		return Global_112616;
	}
	Global_112616 = 0;
	return 0;
}

int func_25()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 1);
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bVar1 > 3)
		{
			if (BitTest(Global_113969.f_10052.f_99, bVar1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

int func_29()
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

void func_30()
{
	if (func_31() && !iLocal_214)
	{
		iLocal_214 = 1;
		iLocal_77 = 7;
	}
	if (!func_31() && iLocal_214)
	{
		iLocal_214 = 0;
	}
}

int func_31()
{
	if (Global_20915)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (func_17(&uLocal_203) > 3f)
	{
		func_37(0);
		func_36(&uLocal_203, 0f);
		func_35(&uLocal_203);
	}
	if ((func_17(&uLocal_203) <= 3f && func_34(0)) && func_33(unk_0x4A8C381C258A124D()))
	{
		if ((unk_0x875A214D5EBCA509(0, 177) || (unk_0x875A214D5EBCA509(0, 24) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))) || (func_31() && !iLocal_214))
		{
			func_36(&uLocal_203, 0f);
			func_35(&uLocal_203);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0)
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

void func_35(var uParam0)
{
	if (func_20(uParam0))
	{
		if (!func_19(uParam0))
		{
			uParam0->f_2 = (func_18(BitTest(*uParam0, 4)) - uParam0->f_1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
		}
	}
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_18(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_40())
		{
			func_39(1, 1);
		}
		else
		{
			func_39(0, 0);
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
	if (!func_38())
	{
		Global_20930.f_1 = 3;
	}
}

int func_38()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
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

bool func_40()
{
	return BitTest(Global_1956920, 5);
}

bool func_41()
{
	return BitTest(Global_1956920, 19);
}

void func_42()
{
	if (iLocal_215)
	{
		if ((func_17(&uLocal_206) > 5f && func_45() >= 1) && !BitTest(Global_113969.f_10052.f_99, 1))
		{
			switch (iLocal_222)
			{
				case 0:
					func_14(28, iLocal_81[(20 - func_45())], 1);
					iLocal_223 = 0;
					iLocal_222++;
					break;
				
				case 1:
					if (iLocal_223 < 10)
					{
						func_43(28, func_44(iLocal_223));
						iLocal_223++;
					}
					else
					{
						iLocal_222++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_222++;
					break;
				
				case 3:
					func_36(&uLocal_206, 0f);
					func_35(&uLocal_206);
					iLocal_215 = 0;
					iLocal_222 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_43(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
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

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!BitTest(Global_113969.f_10052.f_99, 4) && !BitTest(Global_113969.f_10052.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 4) && !BitTest(Global_113969.f_10052.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 4) && BitTest(Global_113969.f_10052.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 4) && BitTest(Global_113969.f_10052.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!BitTest(Global_113969.f_10052.f_99, 5) && !BitTest(Global_113969.f_10052.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 5) && !BitTest(Global_113969.f_10052.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 5) && BitTest(Global_113969.f_10052.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 5) && BitTest(Global_113969.f_10052.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!BitTest(Global_113969.f_10052.f_99, 7) && !BitTest(Global_113969.f_10052.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 7) && !BitTest(Global_113969.f_10052.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 7) && BitTest(Global_113969.f_10052.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 7) && BitTest(Global_113969.f_10052.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!BitTest(Global_113969.f_10052.f_99, 9) && !BitTest(Global_113969.f_10052.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 9) && !BitTest(Global_113969.f_10052.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 9) && BitTest(Global_113969.f_10052.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 9) && BitTest(Global_113969.f_10052.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!BitTest(Global_113969.f_10052.f_99, 11) && !BitTest(Global_113969.f_10052.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 11) && !BitTest(Global_113969.f_10052.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 11) && BitTest(Global_113969.f_10052.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 11) && BitTest(Global_113969.f_10052.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!BitTest(Global_113969.f_10052.f_99, 16) && !BitTest(Global_113969.f_10052.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 16) && !BitTest(Global_113969.f_10052.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 16) && BitTest(Global_113969.f_10052.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 16) && BitTest(Global_113969.f_10052.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!BitTest(Global_113969.f_10052.f_99, 19) && !BitTest(Global_113969.f_10052.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 19) && !BitTest(Global_113969.f_10052.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 19) && BitTest(Global_113969.f_10052.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 19) && BitTest(Global_113969.f_10052.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!BitTest(Global_113969.f_10052.f_99, 22) && !BitTest(Global_113969.f_10052.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 22) && !BitTest(Global_113969.f_10052.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 22) && BitTest(Global_113969.f_10052.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 22) && BitTest(Global_113969.f_10052.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!BitTest(Global_113969.f_10052.f_99, 24) && !BitTest(Global_113969.f_10052.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 24) && !BitTest(Global_113969.f_10052.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 24) && BitTest(Global_113969.f_10052.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 24) && BitTest(Global_113969.f_10052.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!BitTest(Global_113969.f_10052.f_99, 26) && !BitTest(Global_113969.f_10052.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 26) && !BitTest(Global_113969.f_10052.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!BitTest(Global_113969.f_10052.f_99, 26) && BitTest(Global_113969.f_10052.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (BitTest(Global_113969.f_10052.f_99, 26) && BitTest(Global_113969.f_10052.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_45()
{
	return (20 - func_27());
}

void func_46()
{
	switch (iLocal_77)
	{
		case 0:
			if (func_71())
			{
				if ((!func_70() && Global_4541808 == 0) && Global_4541809 == 0)
				{
					iLocal_77 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_210 = func_65(&iLocal_211, 60f, uLocal_224, 0,8f, 0,7f, 0,25f, 8f, 0,333f, uLocal_225, iLocal_226);
			if (iLocal_210 == 0)
			{
				iLocal_210 = func_65(&iLocal_211, 60f, uLocal_227, 0,8f, 0,7f, 0,25f, 8f, 0,333f, uLocal_228, iLocal_229);
				if (iLocal_210 == 0)
				{
					iLocal_77 = 7;
				}
				else
				{
					iLocal_77 = 4;
				}
			}
			else
			{
				iLocal_77 = 4;
			}
			break;
		
		case 4:
			if (!func_64(iLocal_211))
			{
				func_63(1);
				iLocal_77 = 5;
			}
			else
			{
				if (!iLocal_213)
				{
				}
				else
				{
					iLocal_213 = 0;
				}
				iLocal_77 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_78)
			{
				case 0:
					func_62("PW_HELP_1", -1);
					if (func_61())
					{
						if (func_34(0))
						{
							func_60(99);
							if (func_59("PW_HELP_1"))
							{
								unk_0x4E8E15513E171E54("PW_HELP_1");
							}
							iLocal_78 = 1;
						}
					}
					if (unk_0x875A214D5EBCA509(0, 176) || unk_0x875A214D5EBCA509(0, 178))
					{
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_1"))
						{
							unk_0x4E8E15513E171E54("PW_HELP_1");
						}
						iLocal_77 = 7;
					}
					break;
				
				case 1:
					func_62("PW_HELP_2", -1);
					if (func_55(99))
					{
						iLocal_78 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							unk_0x4E8E15513E171E54("PW_HELP_2");
						}
						iLocal_77 = 6;
					}
					if (unk_0x875A214D5EBCA509(0, 177))
					{
						iLocal_78 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							unk_0x4E8E15513E171E54("PW_HELP_2");
						}
						iLocal_77 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_54(iLocal_211);
			func_51(iLocal_80);
			unk_0x1164A75E490C27B6(joaat("num_hidden_packages_7"), func_27(), 1);
			bLocal_212 = true;
			func_48(&uLocal_203);
			func_48(&uLocal_206);
			iLocal_215 = 1;
			iLocal_77 = 7;
			break;
		
		case 7:
			func_47();
			iLocal_77 = 8;
			break;
		
		case 8:
			if (!func_71())
			{
				iLocal_77 = 0;
			}
			break;
	}
}

void func_47()
{
	iLocal_78 = 0;
	iLocal_80 = 0;
	iLocal_210 = 0;
	iLocal_211 = 0;
	iLocal_213 = 0;
	Local_217 = { Local_216 };
	Local_218 = { Local_216 };
	func_63(0);
	func_57(99);
	if (func_59("PW_HELP_1"))
	{
		unk_0x4E8E15513E171E54("PW_HELP_1");
	}
	if (func_59("PW_HELP_2"))
	{
		unk_0x4E8E15513E171E54("PW_HELP_2");
	}
}

void func_48(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_50(uParam0);
	}
	else
	{
		func_49(uParam0);
	}
}

void func_49(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_50(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_49(uParam0);
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = func_53(92);
	Global_2645400[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645400[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645400[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_113969.f_10052.f_99, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 4);
				iLocal_80 = 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_113969.f_10052.f_99, 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 5);
				iLocal_80 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_113969.f_10052.f_99, 6))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 6);
				iLocal_80 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_113969.f_10052.f_99, 7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 7);
				iLocal_80 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_113969.f_10052.f_99, 8))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 8);
				iLocal_80 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_113969.f_10052.f_99, 9))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 9);
				iLocal_80 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_113969.f_10052.f_99, 10))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 10);
				iLocal_80 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_113969.f_10052.f_99, 11))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 11);
				iLocal_80 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_113969.f_10052.f_99, 14))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 14);
				iLocal_80 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_113969.f_10052.f_99, 16))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 16);
				iLocal_80 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_113969.f_10052.f_99, 18))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 18);
				iLocal_80 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_113969.f_10052.f_99, 19))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 19);
				iLocal_80 = 13;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_113969.f_10052.f_99, 21))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 21);
				iLocal_80 = 15;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_113969.f_10052.f_99, 22))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 22);
				iLocal_80 = 16;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_113969.f_10052.f_99, 23))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 23);
				iLocal_80 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_113969.f_10052.f_99, 24))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 24);
				iLocal_80 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_113969.f_10052.f_99, 25))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 25);
				iLocal_80 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_113969.f_10052.f_99, 26))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 26);
				iLocal_80 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_113969.f_10052.f_99, 29))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 29);
				iLocal_80 = 2;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_113969.f_10052.f_99, 31))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 31);
				iLocal_80 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_55(int iParam0)
{
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (func_56(iParam0) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_18;
}

int func_57(int iParam0)
{
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_58(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1)
{
	Global_2169[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_18 = iParam1;
	}
}

bool func_59(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_60(int iParam0)
{
	Global_21142 = iParam0;
}

int func_61()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 28);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 28);
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_113969.f_10052.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_113969.f_10052.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_113969.f_10052.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_113969.f_10052.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_113969.f_10052.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_113969.f_10052.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_113969.f_10052.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_113969.f_10052.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_113969.f_10052.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_113969.f_10052.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_113969.f_10052.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_113969.f_10052.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_113969.f_10052.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_113969.f_10052.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_113969.f_10052.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_113969.f_10052.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_113969.f_10052.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_113969.f_10052.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_113969.f_10052.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_113969.f_10052.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_213 = 1;
			break;
	}
	return 1;
}

int func_65(int iParam0, float fParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, var uParam8, int iParam9)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x00926C3C4443B915(fParam1, uParam2, fParam3, fParam4, fParam5, fParam6, fParam7, uParam8, iParam9);
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (unk_0x0DFE7358172FC006(iVar0) == 28)
		{
			if (!unk_0xF6C26AE940C14749(iVar0))
			{
				*iParam0 = unk_0x4B423FAA24E8ABF0(iVar0);
				if (func_69(iVar0, 31086))
				{
					fVar1 = func_68(unk_0x4A8C381C258A124D(), iVar0, 1);
					if (unk_0x300A997AE991C0A8(unk_0x4A8C381C258A124D(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_cat_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_poodle"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pug"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rabbit_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_westy"):
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

int func_69(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_218 = { unk_0x75DF72FC74EED046(iParam0, unk_0x72F7E39FB49FC0BA(iParam0, iParam1)) };
	if (iLocal_211 == joaat("a_c_rabbit_01") || iLocal_211 == joaat("a_c_rat"))
	{
		Local_217 = { unk_0x75DF72FC74EED046(iParam0, unk_0x72F7E39FB49FC0BA(iParam0, 24816)) };
	}
	else
	{
		Local_217 = { unk_0x75DF72FC74EED046(iParam0, unk_0x72F7E39FB49FC0BA(iParam0, 24818)) };
	}
	unk_0x2F8A75C70AF54208(Local_217, &fVar0, &fVar1);
	unk_0x2F8A75C70AF54208(Local_218, &fVar2, &fVar3);
	if ((((fVar0 >= 0,05f && fVar0 <= 0,95f) && (fVar2 >= 0,05f && fVar2 <= 0,95f)) && (fVar1 >= 0,05f && fVar1 <= 0,95f)) && (fVar3 >= 0,05f && fVar3 <= 0,95f))
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (BitTest(Global_8802, 3))
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	if (Global_23322)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	if (unk_0x486FF5D06E9659F1(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (unk_0x486FF5D06E9659F1(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	func_74();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_74()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_77(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_76(unk_0x4A8C381C258A124D());
			if (func_75(iVar0) && (!func_79(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_75(Global_113969.f_2366.f_539.f_4321))
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

bool func_75(int iParam0)
{
	return iParam0 < 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_78(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_79(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_80(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_81()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, 0);
					unk_0xED11291F7127888E(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	if (!BitTest(Global_113969.f_10052.f_99, 2))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_99), 2);
	}
	iLocal_219 = 0;
	iLocal_214 = func_31();
	iLocal_81[0] = 249;
	iLocal_81[1] = 250;
	iLocal_81[2] = 251;
	iLocal_81[3] = 252;
	iLocal_81[4] = 253;
	iLocal_81[5] = 254;
	iLocal_81[6] = 255;
	iLocal_81[7] = 256;
	iLocal_81[8] = 257;
	iLocal_81[9] = 258;
	iLocal_81[10] = 259;
	iLocal_81[11] = 260;
	iLocal_81[12] = 261;
	iLocal_81[13] = 262;
	iLocal_81[14] = 263;
	iLocal_81[15] = 264;
	iLocal_81[16] = 265;
	iLocal_81[17] = 266;
	iLocal_81[18] = 267;
	iLocal_81[19] = 268;
	iLocal_81[20] = 269;
}

