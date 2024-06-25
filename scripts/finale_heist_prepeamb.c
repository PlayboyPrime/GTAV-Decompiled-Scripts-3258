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
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<9> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_43[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_44 = 0;
	var uLocal_45[2] = { 0, 0 };
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	struct<67> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_64[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_65 = 0;
	struct<261> Local_66[4];
	char* sLocal_67[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_68 = NULL;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	char* sLocal_77 = NULL;
	var uLocal_78 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
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
	iLocal_41 = 145;
	bLocal_44 = -1;
	fLocal_46 = 0f;
	Local_48 = { 0f, 0f, 0f };
	Local_50 = { 0f, 0f, 0f };
	fLocal_51 = 0f;
	iLocal_65 = 1;
	sLocal_68 = "";
	iLocal_71 = -1;
	iLocal_74 = -1;
	iLocal_76 = -1;
	if (!func_267(31))
	{
		iLocal_35 = Global_113969.f_10052.f_128;
		if (iLocal_35 == 2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 10);
			Local_50 = { func_266(25) };
			fLocal_51 = func_265(25);
			if (func_264(&Local_52, 25))
			{
				if (!BitTest(uLocal_47, 14))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 14);
				}
			}
		}
		else if (iLocal_35 == 1)
		{
		}
	}
	else
	{
		func_262("AM_H_PREP8", 2, 0, -1, 10000, 7, 0, 0, 0);
		Global_113969.f_10052.f_128 = iLocal_35;
	}
	if (unk_0x96CFB880BAC634CE(82))
	{
		if (unk_0x36E4BBBE16306470() == 2)
		{
			func_253(0);
			func_252();
			func_250(31, 1);
		}
		else
		{
			func_252();
			func_250(31, 0);
		}
	}
	func_245(2);
	Local_48 = { -166,1555f, -621,9833f, 31,4281f };
	while (true)
	{
		if (func_244(85))
		{
			func_240("AM_H_PREP8", 1);
			func_250(31, 0);
		}
		if (func_239(unk_0x4A8C381C258A124D()))
		{
			func_231();
			func_223();
			func_222();
			func_211();
			switch (iLocal_35)
			{
				case 0:
					func_172();
					break;
				
				case 1:
					func_139();
					break;
				
				case 2:
					func_138();
					break;
				
				case 3:
					func_131();
					break;
				
				case 4:
					func_16(34);
					break;
				
				case 5:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(46, 1);
		}
		system::wait(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_112606) && !BitTest(uLocal_47, 15))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
				unk_0x428C32CC68809A35(1);
			}
		}
		else if ((unk_0x4C705AAF75363287() && !Global_112606) && !BitTest(uLocal_47, 15))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_2(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_3(bool bParam0)
{
	return sLocal_43[bParam0];
}

void func_4(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_6(bParam0);
	unk_0x8744D2E3FC95740E(&(uLocal_45[func_5(bParam0)]), bVar0);
}

int func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()
{
	if (((BitTest(uLocal_47, 0) && !BitTest(uLocal_47, 1)) && !BitTest(uLocal_47, 14)) && func_13())
	{
		if (func_12(0, 172, 0) || func_12(0, 173, 0))
		{
			iLocal_76 = unk_0x1DD05E817C89C737();
		}
		if (iLocal_76 != -1)
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_76) < 200)
			{
				iLocal_41 = func_8();
			}
			else
			{
				iLocal_76 = -1;
			}
		}
	}
	else
	{
		iLocal_41 = 145;
		iLocal_76 = -1;
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_79389)
	{
		iVar3 = 145;
	}
	else if (unk_0xA0C7B98BCF1EEF9E(Global_20911) == 1)
	{
		if (func_11())
		{
			if (func_10())
			{
				iVar6 = 0;
				unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
				uVar0 = unk_0x6CA3F2B87712B6A4();
				iVar4 = unk_0x1DD05E817C89C737();
				while ((!unk_0xA6F779AA284EB20E(uVar0) && iVar6 == 0) && unk_0xA0C7B98BCF1EEF9E(Global_20911) == 1)
				{
					system::wait(0);
					iVar5 = unk_0x1DD05E817C89C737();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = unk_0x5DEF122A58D4F685(uVar0);
				if (iVar1 > func_9() || iVar1 < 0)
				{
					iVar1 = func_9();
				}
				iVar2 = Global_20936[iVar1];
				iVar3 = iVar2;
				if (unk_0xA0C7B98BCF1EEF9E(Global_20911) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

int func_10()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
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

int func_13()
{
	if (func_15(0) && func_14())
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

void func_16(int iParam0)
{
	func_111();
	if (iLocal_38 == 0)
	{
		switch (iLocal_39)
		{
			case 0:
				func_110(1);
				uLocal_72 = unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_73 = unk_0x1DD05E817C89C737() + 3000;
				if (!BitTest(uLocal_47, 10))
				{
					func_94();
				}
				func_93(iParam0, 1);
				iLocal_39 = 1;
				break;
			
			case 1:
				if (unk_0x1DD05E817C89C737() > iLocal_73)
				{
					if (unk_0xA0C7B98BCF1EEF9E(uLocal_72))
					{
						unk_0x88F483FBD433696A(uLocal_72, "SHOW_MISSION_PASSED_MESSAGE");
						func_92("M_FB4P3_P");
						func_92("M_FB4P3");
						unk_0x330108B080A2132F(100);
						unk_0x557F1E2300EF1A3E(1);
						unk_0x330108B080A2132F(0);
						unk_0x557F1E2300EF1A3E(1);
						unk_0xE6B753D52F4CA222();
						iLocal_73 = unk_0x1DD05E817C89C737() + 10000;
						func_90(0);
						iLocal_39 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xA0C7B98BCF1EEF9E(uLocal_72) && unk_0x1FC87F78B679BE3D())
				{
					if (unk_0x1DD05E817C89C737() < iLocal_73)
					{
						unk_0x6D16B99FEB0AFFF1(uLocal_72, 0,5f, 0,3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (unk_0x1DD05E817C89C737() < iLocal_73 + 100)
					{
						unk_0x88F483FBD433696A(uLocal_72, "TRANSITION_OUT");
						unk_0xE6B753D52F4CA222();
						iLocal_73 = (iLocal_73 - 100);
					}
					else if (unk_0x1DD05E817C89C737() < iLocal_73 + 500)
					{
						unk_0x6D16B99FEB0AFFF1(uLocal_72, 0,5f, 0,3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_39 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xA0C7B98BCF1EEF9E(uLocal_72))
				{
					unk_0xD314260005F064BF(&uLocal_72);
				}
				func_110(0);
				if (iLocal_40 == 2)
				{
					func_89(108, 0);
				}
				if (func_87(iLocal_49))
				{
					unk_0x0B74F181ADFC39BF(iLocal_49, 1);
				}
				func_83("M_FHPE", func_84());
				func_80(2, 0);
				break;
			}
	}
	func_17();
}

void func_17()
{
	int iVar0;
	
	if (!BitTest(uLocal_47, 2))
	{
		if (!func_79(0f, 0f, 0f, Local_50, 0))
		{
			if (func_78(unk_0x4A8C381C258A124D(), Local_50, 100f, 1) && !func_77())
			{
				if (func_87(func_76(25)))
				{
					iLocal_49 = func_76(25);
					unk_0xEE0BCDB1B5E36BCB(iLocal_49, 1, 1);
					if (func_87(iLocal_49))
					{
						if (!unk_0xD130E7CDEE903624(iLocal_49, "GetawayVehicleValid"))
						{
							if (unk_0xF46ECFD5526E8FF7(iLocal_49, "GetawayVehicleValid", 1))
							{
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, false);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 2);
					}
				}
				else if (!func_75(25, 0))
				{
					if (!func_87(func_76(25)))
					{
						func_70(1);
					}
				}
			}
			else if (func_87(iLocal_49))
			{
				if (!func_78(unk_0x4A8C381C258A124D(), Local_50, 100f, 1))
				{
				}
			}
		}
	}
	else
	{
		if (!func_79(0f, 0f, 0f, Local_50, 0))
		{
			if (!func_78(unk_0x4A8C381C258A124D(), Local_50, 100f, 1))
			{
				if (func_87(iLocal_49))
				{
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0))
					{
						func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
						unk_0x8744D2E3FC95740E(&uLocal_47, 2);
						unk_0xE8EF17ECD68C900D(iLocal_49, 0);
						func_20(&iLocal_49);
						unk_0x8744D2E3FC95740E(&uLocal_47, false);
					}
					else
					{
						func_70(0);
					}
				}
				else if (!func_75(25, 0))
				{
					func_70(1);
				}
			}
			else if (!func_75(25, 0))
			{
				if (!func_87(iLocal_49))
				{
					func_70(1);
				}
			}
			else if (!func_87(iLocal_49))
			{
				iVar0 = func_76(25);
				if (func_87(iVar0) && iVar0 != iLocal_49)
				{
					iLocal_49 = iVar0;
				}
			}
		}
		func_18();
	}
}

void func_18()
{
	if (BitTest(uLocal_47, 2) && BitTest(uLocal_47, 0))
	{
		if (func_87(iLocal_49))
		{
			if (func_19(unk_0x4A8C381C258A124D(), iLocal_49, 10f, 1))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_49, 1), Local_50) >= 100f)
				{
					func_70(0);
				}
			}
		}
		else if (!func_75(25, 0))
		{
			if (func_87(iLocal_49))
			{
				unk_0xE8EF17ECD68C900D(iLocal_49, 0);
			}
			func_20(&iLocal_49);
			func_70(1);
		}
	}
}

bool func_19(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), unk_0xD1A6A821F5AC81DB(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_20(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		unk_0x1C2F771CDC87A3A5(*iParam0, 0);
		if (unk_0x110821AE6C63DD4F(*iParam0) && unk_0x7C9905528EE2C3AB(*iParam0, 1))
		{
			unk_0x68298CA6191CDFDB(iParam0);
		}
	}
}

void func_21(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[25]) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[25], 0))
			{
				if (Global_78179.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9E20DC08879FF3FC(iParam0) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_69(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_64(iParam0, &Var0);
		if (func_79(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			fParam2 = unk_0xCFC0C995455A6204(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
			{
				Global_79167 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
			}
		}
		func_58(iParam3, &Var0, Param1, fParam2, func_63(iParam0));
		func_22(iParam3, iParam0, 0);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78179.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78179.f_555[0 /*21*/].f_4 != unk_0x4B423FAA24E8ABF0(iParam1))
		{
			return;
		}
	}
	if (Global_79086 != -1 && Global_79086 != iParam0)
	{
		return;
	}
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			if (!unk_0x110821AE6C63DD4F(iParam1))
			{
				unk_0xEE0BCDB1B5E36BCB(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113969.f_32753.f_4801 = func_43();
			}
			if (iParam1 != Global_78179.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_76(iParam0);
					if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) && iParam1 != iVar0)
					{
						func_23(iVar0, 145);
					}
				}
				Global_79085 = iParam1;
				Global_79086 = iParam0;
				Global_79087 = iParam2;
			}
		}
	}
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_24(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_64(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_24(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_41(iParam0, 0, 0)) || func_41(iParam0, 1, 0)) || func_41(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || !func_25(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_39(iParam0))
		{
		}
		if (func_39(iParam0))
		{
		}
		if (func_41(iParam0, 0, 0))
		{
		}
		if (func_41(iParam0, 1, 0))
		{
		}
		if (func_41(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_26(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_26(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_36())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_35() && !func_34()) && !func_33()) && !func_32()) && !func_36())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_31() || unk_0x761778199FE1211C()) || func_30())
					{
					}
					else if (!func_33())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_29(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_27(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_27(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_28())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_28()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1240172147:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -143587026:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case 1690421418:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case 258105345:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case 1249425552:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -986656474:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 1307736079:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1737348074:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case -223461503:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1121330119:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case -1628000569:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case -946047670:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 1579902654:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -773802025:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case 1968807591:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case -1958428933:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case 1881415402:
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case -999594302:
			iVar1 = Global_262145.f_35588[17];
			break;
		
		case -1896488056:
			iVar1 = Global_262145.f_35588[18];
			break;
		
		case 1452003510:
			iVar1 = Global_262145.f_35588[19];
			break;
		
		case -1444856003:
			iVar1 = Global_262145.f_35588[20];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_31()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_32()
{
	return 0;
}

int func_33()
{
	return 1;
}

int func_34()
{
	return 1;
}

int func_35()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_36()
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
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
					unk_0xED11291F7127888E(iVar0);
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

int func_37(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_26(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98844[iVar0], 0))
			{
				if (Global_98844[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_42(iParam1, iVar0, &sVar1, &iVar2))
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

int func_42(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_43()
{
	var uVar0;
	
	func_53(&uVar0, unk_0x4BA5A16068183C5E());
	func_52(&uVar0, unk_0x18E502A71E28968C());
	func_51(&uVar0, unk_0x5295501D0862870D());
	func_46(&uVar0, unk_0xB12880C92EA6EE15());
	func_45(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_44(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_44(var uParam0, int iParam1)
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

void func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(*uParam0);
	iVar1 = func_48(*uParam0);
	if (iParam1 < 1 || iParam1 > func_47(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_47(int iParam0, int iParam1)
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

var func_48(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_49(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_49(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_50(var uParam0)
{
	return uParam0 & 15;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_55(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_55(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_55(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_55(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_55(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_55(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_36())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_36())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_79(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_79(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_79(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_55(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_57(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_56(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_56(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
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

bool func_57(int iParam0)
{
	return iParam0 < 3;
}

void func_58(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
		{
			func_62(iParam0);
			func_61(uParam1, &(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 11))
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_75(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_32753[iParam0]), bParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), bParam1);
	}
}

void func_61(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_62(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_78179.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&(Global_78179.f_139[iParam0]));
			Global_78179.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

int func_63(int iParam0)
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

void func_64(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_68(uParam1);
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
		if (uParam1->f_65 == -1 && !func_67(uParam1->f_66))
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
		func_66(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_65(iVar0 + 1));
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

int func_65(int iParam0)
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

int func_66(int iParam0, var uParam1, var uParam2)
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

int func_67(int iParam0)
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

void func_68(var uParam0)
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

void func_69(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_62(iParam0);
	func_59(iParam0, 0);
}

void func_70(bool bParam0)
{
	if (BitTest(uLocal_47, 14))
	{
		if (func_72(unk_0x4A8C381C258A124D()) == 0)
		{
			if (bParam0)
			{
				func_71(10);
			}
			else
			{
				func_71(12);
			}
		}
		else if (bParam0)
		{
			func_71(11);
		}
		else
		{
			func_71(13);
		}
		if (iLocal_40 == 0)
		{
			func_93(45, 0);
		}
		else if (iLocal_40 == 1)
		{
			func_93(12, 0);
		}
		else if (iLocal_40 == 2)
		{
			func_93(34, 0);
		}
		if (iLocal_40 != 2)
		{
			Local_48 = { 0f, 0f, 0f };
		}
		iLocal_38 = 0;
		iLocal_39 = 0;
		unk_0x8744D2E3FC95740E(&uLocal_47, 6);
		unk_0x8744D2E3FC95740E(&uLocal_47, 7);
		unk_0x8744D2E3FC95740E(&uLocal_47, false);
		unk_0x8744D2E3FC95740E(&uLocal_47, true);
		unk_0x8744D2E3FC95740E(&uLocal_47, 8);
		unk_0x8744D2E3FC95740E(&uLocal_47, 12);
		unk_0x8744D2E3FC95740E(&uLocal_47, 2);
		unk_0x8744D2E3FC95740E(&uLocal_47, 14);
		if (iLocal_35 == 4)
		{
			if (unk_0xA0C7B98BCF1EEF9E(uLocal_72))
			{
				unk_0xD314260005F064BF(&uLocal_72);
			}
			func_110(0);
		}
		func_80(0, 0);
	}
}

void func_71(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_6(iParam0);
	unk_0x0B0C9A0F9AAEB7F0(&(uLocal_45[func_5(iParam0)]), bVar0);
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_57(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_75(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

int func_76(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78179.f_139[iParam0];
}

int func_77()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

bool func_78(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

bool func_79(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_80(int iParam0, bool bParam1)
{
	Global_113969.f_10052.f_128 = iParam0;
	iLocal_35 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_81();
}

int func_81()
{
	if (func_82(0))
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

int func_82(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_83(char* sParam0, var uParam1)
{
	unk_0xFE0BEB152470B0B8(joaat("sp_last_mission_name"), sParam0, 1);
	if (BitTest(uParam1, 0))
	{
		unk_0xFE0BEB152470B0B8(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (BitTest(uParam1, 1))
	{
		unk_0xFE0BEB152470B0B8(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (BitTest(uParam1, 2))
	{
		unk_0xFE0BEB152470B0B8(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_84()
{
	func_85();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_85()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_73(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_72(unk_0x4A8C381C258A124D());
			if (func_57(iVar0) && (!func_86(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_57(Global_113969.f_2366.f_539.f_4321))
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

bool func_86(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_87(int iParam0)
{
	if (func_88(iParam0))
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

int func_88(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

void func_90(bool bParam0)
{
	char* sVar0;
	
	unk_0x8E1F26D6742EC167(0);
	switch (func_91())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xFAE22BD3C12AEFB4(sVar0);
}

bool func_91()
{
	func_85();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_92(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_93(int iParam0, int iParam1)
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

void func_94()
{
	Global_113969.f_10019.f_21++;
	if (iLocal_40 == 0)
	{
		unk_0x1164A75E490C27B6(joaat("fl_co_fb4p3"), Global_113969.f_10019.f_21, 1);
		if (func_103())
		{
			if (func_244(74) || (func_244(75) && func_102()))
			{
				func_93(46, 1);
			}
		}
	}
	func_95();
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 10);
}

void func_95()
{
	if (iLocal_40 == 0)
	{
		func_96(23, 0, 0);
	}
	else if (iLocal_40 == 1)
	{
	}
	else if (iLocal_40 == 2)
	{
	}
}

void func_96(int iParam0, int iParam1, int iParam2)
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
		func_100((891 + iParam0), 1, -1);
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
		func_97();
	}
}

void func_97()
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
		func_99(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_98() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_81();
				}
			}
		}
	}
}

int func_98()
{
	return Global_32948;
}

int func_99(int iParam0, int iParam1)
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

void func_100(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_101();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_101()
{
	return Global_1574926;
}

int func_102()
{
	if ((func_244(41) && func_244(3)) && func_244(21))
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	if (iLocal_40 == 0)
	{
		return func_108();
	}
	else if (iLocal_40 == 1)
	{
		return func_107();
	}
	else if (iLocal_40 == 2)
	{
		return func_104();
	}
	return 0;
}

int func_104()
{
	if ((func_244(79) && func_244(83)) && func_105(func_106()))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_106()
{
	if (iLocal_40 == 0)
	{
		return 45;
	}
	else if (iLocal_40 == 1)
	{
		return 12;
	}
	else if (iLocal_40 == 2)
	{
		return 34;
	}
	return -1;
}

int func_107()
{
	if (func_244(68))
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (func_109(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_244(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_105(func_106()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_110(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_111()
{
	struct<6> Var0;
	
	if (iLocal_38 != 0)
	{
		Var0 = { func_130() };
		switch (iLocal_38)
		{
			case 1:
				if (iLocal_40 != 2)
				{
					if (!unk_0xD6F9DEE4765092A9(&Var0))
					{
						if (unk_0xE7365CC791D1E4EB() > 0)
						{
							func_129("LOCAUD", Local_42.f_7);
							func_128(1);
							iLocal_38 = 2;
						}
						else if (BitTest(uLocal_47, 10) && unk_0xE7365CC791D1E4EB() == 0)
						{
							func_129("LOCAUD", Local_42.f_7);
							func_128(1);
							iLocal_38 = 2;
						}
					}
				}
				else
				{
					iLocal_38 = 0;
				}
				if (func_127())
				{
					iLocal_38 = 3;
				}
				break;
			
			case 2:
				if (func_127())
				{
					iLocal_38 = 3;
				}
				if (!BitTest(uLocal_47, 10))
				{
					if (unk_0xE7365CC791D1E4EB() >= 0)
					{
						func_120(Var0);
					}
				}
				else
				{
					iLocal_38 = 3;
				}
				break;
			
			case 3:
				if (!func_119())
				{
					iLocal_38 = 4;
				}
				break;
			
			case 4:
				if (!func_15(0))
				{
					if (iLocal_40 == 1)
					{
						func_116(Local_42.f_8);
					}
					iLocal_38 = 5;
				}
				break;
			
			case 5:
				if (func_91() == 0)
				{
					if (iLocal_40 == 0)
					{
						if (func_103())
						{
							if ((func_244(74) || func_244(75)) && func_102())
							{
								func_112(1);
								iLocal_38 = 0;
							}
							else
							{
								func_112(0);
								iLocal_38 = 0;
							}
						}
						else
						{
							iLocal_38 = 0;
						}
					}
					else
					{
						iLocal_38 = 0;
					}
				}
				else
				{
					if (iLocal_40 == 0)
					{
						if (func_103())
						{
							if (!func_244(3))
							{
								func_89(50, 0);
							}
						}
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		func_113(1527885205, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_244(3))
	{
		func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_113(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_82(0))
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
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
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
		Var0.f_3 = func_115(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar1, bParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), false);
		unk_0x8744D2E3FC95740E(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 10);
		}
		Global_113969.f_7691[Global_113969.f_7691.f_136 /*15*/] = { Var0 };
		Global_113969.f_7691.f_136++;
		func_114(bParam2);
		return 1;
	}
	return 0;
}

void func_114(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_57(bParam0))
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

int func_115(int iParam0)
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

void func_116(int iParam0)
{
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_118(iParam0, 0, 0);
		func_118(iParam0, 1, 0);
		func_118(iParam0, 2, 0);
		func_117(iParam0, 0, 0);
		func_117(iParam0, 1, 0);
		func_117(iParam0, 2, 0);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_119()
{
	if (Global_22286 == 4)
	{
		if (unk_0xE87F28FD4128D063())
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

void func_120(struct<6> Param0)
{
	if (iLocal_40 == 0)
	{
		func_125(Param0);
	}
	else if (iLocal_40 == 1)
	{
		func_121(Param0);
	}
}

void func_121(struct<6> Param0)
{
	if (func_103())
	{
		func_122(Param0, 1);
	}
	else
	{
		func_122(Param0, 0);
	}
}

void func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!unk_0xD6F9DEE4765092A9(&uParam0))
	{
		if (unk_0x1B79E937E91F40C3(&uParam0, Local_42.f_7))
		{
			if (unk_0xE7365CC791D1E4EB() >= 0)
			{
				if (iLocal_40 == 0)
				{
					Var0 = { func_124(bParam6) };
					func_93(46, 1);
					func_129(sLocal_77, &Var0);
					func_128(1);
				}
				else if (iLocal_40 == 1)
				{
					Var0 = { func_123(bParam6) };
					func_129(sLocal_77, &Var0);
					func_128(1);
				}
				iLocal_38 = 3;
			}
		}
	}
}

struct<4> func_123(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_124(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_125(struct<6> Param0)
{
	if (func_103())
	{
		if (func_126())
		{
			if (func_91() != 0)
			{
				func_122(Param0, 1);
			}
			else
			{
				iLocal_38 = 3;
			}
		}
		else if (func_91() != 0)
		{
			func_122(Param0, 0);
		}
		else
		{
			iLocal_38 = 3;
		}
	}
	else
	{
		iLocal_38 = 3;
	}
}

int func_126()
{
	if (iLocal_40 == 0)
	{
		if ((func_244(74) || func_244(74)) && func_102())
		{
			return 1;
		}
	}
	else if (iLocal_40 == 1)
	{
		if (func_244(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	if (Global_22335 == 1 || Global_23302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_128(bool bParam0)
{
	unk_0x0F15249D24BC5ADA(bParam0);
	if (bParam0)
	{
	}
}

void func_129(char* sParam0, char* sParam1)
{
	if (unk_0xE87F28FD4128D063())
	{
		Global_22343 = 1;
		StringCopy(&Global_22350, sParam0, 24);
		StringCopy(&Global_22344, sParam1, 24);
	}
}

struct<6> func_130()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

void func_131()
{
	func_132();
}

void func_132()
{
	func_136();
	func_133();
}

void func_133()
{
	if (func_135() == 85)
	{
		if (func_134() && !func_75(25, 0))
		{
			if (Local_52.f_66 != 0)
			{
				func_58(25, &Local_52, Local_50, fLocal_51, 145);
			}
		}
	}
}

int func_134()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	return Global_79652;
}

void func_136()
{
	if (!func_79(Local_50, 0f, 0f, 0f, 0) && func_135() != func_137())
	{
		if (func_78(unk_0x4A8C381C258A124D(), Local_50, 60f, 1))
		{
			if (func_87(func_76(25)))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(func_76(25), 1), Local_50) >= 100f)
				{
					func_70(0);
				}
			}
			else if (!func_75(25, 0))
			{
				func_70(1);
			}
		}
	}
}

int func_137()
{
	if (iLocal_40 == 0)
	{
		return 38;
	}
	else if (iLocal_40 == 1)
	{
		return 69;
	}
	else if (iLocal_40 == 2)
	{
		return 85;
	}
	return -1;
}

void func_138()
{
	func_17();
	func_111();
}

void func_139()
{
	func_153();
	func_149();
	func_146();
	func_111();
	if (func_78(unk_0x4A8C381C258A124D(), Local_48, 150f, 1) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -176,9431f, -651,257f, 31,2136f, -150,9563f, -579,7476f, 35,4245f, 50f, 0, 1, 0))
	{
		unk_0x60040CDD28AA1BC3(Local_48, 6f, 0, 1, 0, 0, 0, 0, 0);
		unk_0xA63572E348CC4CFB(-169,4253f, -622,0479f, 31,42444f, -162,2762f, -620,509f, 35,42448f, 0, 1);
	}
	if (!BitTest(uLocal_47, 18))
	{
		if (!func_15(0) && !func_119())
		{
			func_145(sLocal_43[4], 7500, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 18);
		}
	}
	if (BitTest(uLocal_47, 0))
	{
		if (BitTest(uLocal_47, 1))
		{
			unk_0xAD69CF046AA50E85(0);
			func_144(&uLocal_243);
			if (!iLocal_245)
			{
				iLocal_245 = 1;
				if (!func_143("PRC_GETOUT", 0, 0))
				{
					func_145("PRC_GETOUT", 7500, 0);
				}
			}
			if (func_87(iLocal_49))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0))
				{
					if (unk_0x1CE980E99A2A6FB6(iLocal_49))
					{
						func_141();
						func_140(&uLocal_244);
						func_93(35, 0);
						if (func_143("PRC_GETOUT", 0, 0))
						{
							unk_0x406CBCEA35499884();
						}
						unk_0xA63572E348CC4CFB(-169,4253f, -622,0479f, 31,42444f, -162,2762f, -620,509f, 35,42448f, 1, 1);
						func_80(4, 0);
					}
				}
			}
		}
		else
		{
			if (func_143("PRC_GETOUT", 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
			iLocal_245 = 0;
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&uLocal_47, 18);
		func_140(&uLocal_244);
		unk_0xA63572E348CC4CFB(-169,4253f, -622,0479f, 31,42444f, -162,2762f, -620,509f, 35,42448f, 1, 1);
		func_80(0, 1);
	}
}

void func_140(var uParam0)
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

void func_141()
{
	if (!BitTest(uLocal_47, 6))
	{
		if (func_87(iLocal_49))
		{
			Local_50 = { unk_0xD1A6A821F5AC81DB(iLocal_49, 1) };
			fLocal_51 = unk_0xCFC0C995455A6204(iLocal_49);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 6);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 2);
			func_64(iLocal_49, &Local_52);
			func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 14);
			func_142(iLocal_49);
		}
	}
}

int func_142(int iParam0)
{
	if (!unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave"))
	{
		if (unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_143(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_144(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

void func_145(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_146()
{
	switch (iLocal_36)
	{
		case 0:
			if (((!unk_0xC450B06E5AAA0985(uLocal_243) && BitTest(uLocal_47, 0)) && !BitTest(uLocal_47, 1)) && BitTest(uLocal_47, 18))
			{
				uLocal_243 = func_147(Local_48, 1);
				unk_0xAD69CF046AA50E85(1);
			}
			break;
		
		case 1:
			func_144(&uLocal_243);
			unk_0xAD69CF046AA50E85(0);
			break;
		
		case 2:
			break;
	}
}

var func_147(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_148(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_148(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_149()
{
	if (func_105(35))
	{
		if (iLocal_36 == 0)
		{
			if (!BitTest(uLocal_47, 1))
			{
				if (func_87(iLocal_49))
				{
					unk_0x65FFA94B82A71741(iLocal_49, Local_48, 4f, 4f, 2f, 1, 1, 0);
					if (unk_0x5105BE70DEF1F5FB(iLocal_49, -168,8162f, -619,9002f, 31,42446f, -162,6423f, -622,0781f, 33,42446f, 4,14f, 0, 1, 0))
					{
						func_152(24, 46);
						if (func_151(iLocal_49))
						{
							if (func_150(1077936128, 1))
							{
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, true);
							}
						}
					}
				}
			}
			else if (BitTest(uLocal_47, 0))
			{
				if (!func_78(iLocal_49, Local_48, 10f, 1) || unk_0xD1F1A906BA9226BE(iLocal_49))
				{
					unk_0x8744D2E3FC95740E(&uLocal_47, true);
				}
			}
		}
	}
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (!unk_0x1CE980E99A2A6FB6(iVar0))
			{
				unk_0xE5EE5C9DDF05D925(iVar0, iParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xD9CCFCDF70474932(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (unk_0x1CE980E99A2A6FB6(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD1F1A906BA9226BE(iParam0))
	{
		func_71(39);
		return 0;
	}
	if (!unk_0x848DE0A81098ECCB(unk_0x4A8C381C258A124D(), iParam0, -1, 0, 0) && !unk_0x848DE0A81098ECCB(unk_0x4A8C381C258A124D(), iParam0, 0, 0, 0))
	{
		func_71(37);
		return 0;
	}
	if (unk_0x69799E0840A34AFB(iParam0))
	{
		func_71(36);
		return 0;
	}
	Var0 = { unk_0x88124E0D60FB8D11(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		func_71(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_71(43);
		return 0;
	}
	return 1;
}

void func_152(bool bParam0, bool bParam1)
{
	func_4(bParam0);
	if (func_2(func_3(bParam0)))
	{
		unk_0x428C32CC68809A35(1);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
	}
	if (bParam1 != 46)
	{
		func_4(bParam1);
		if (func_2(func_3(bParam1)))
		{
			unk_0x428C32CC68809A35(1);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
		}
	}
}

void func_153()
{
	int iVar0;
	int iVar1;
	
	if ((Global_44042 == 15 && !func_171()) || func_105(35))
	{
		if (iLocal_36 == 0)
		{
			if (!unk_0x3555462DB47B7AB1())
			{
				if (!BitTest(uLocal_47, 0))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (!BitTest(uLocal_47, 7))
						{
							iVar0 = unk_0xDC8D5832207C2EAD();
							if (func_87(iVar0))
							{
								if (!func_170(iVar0))
								{
									if (func_163(iVar0) && !func_162())
									{
										if (!unk_0x110821AE6C63DD4F(iVar0))
										{
											if (!BitTest(uLocal_47, 19))
											{
												func_71(9);
												unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 19);
											}
											else if (func_72(unk_0x4A8C381C258A124D()) == 0)
											{
												func_71(17);
											}
											else
											{
												func_71(18);
											}
											iLocal_49 = iVar0;
											if (unk_0xF46ECFD5526E8FF7(iLocal_49, "GetawayVehicleValid", 1))
											{
											}
											unk_0xEE0BCDB1B5E36BCB(iLocal_49, 1, 1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, false);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 8);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
											return;
										}
										else
										{
											func_20(&iLocal_49);
											unk_0x8744D2E3FC95740E(&uLocal_47, 7);
											unk_0x8744D2E3FC95740E(&uLocal_47, false);
											return;
										}
									}
									if (unk_0xF46ECFD5526E8FF7(iVar0, "GetawayVehicleValid", 0))
									{
									}
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
								}
								else if (func_161(iVar0))
								{
									iLocal_49 = iVar0;
									unk_0xEE0BCDB1B5E36BCB(iLocal_49, 1, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, false);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 8);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
									return;
								}
							}
							else
							{
								func_20(&iLocal_49);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
								unk_0x8744D2E3FC95740E(&uLocal_47, false);
							}
						}
						else if (BitTest(uLocal_47, 0))
						{
							if (!func_87(iLocal_49))
							{
								func_20(&iLocal_49);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, false);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 8);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
							}
						}
					}
					else if (BitTest(uLocal_47, 8))
					{
						iVar1 = unk_0xDC8D5832207C2EAD();
						if (func_87(iVar1))
						{
							if (func_19(unk_0x4A8C381C258A124D(), iVar1, 10f, 1) && !unk_0xD130E7CDEE903624(iVar1, "Getaway_Winched"))
							{
								iLocal_49 = iVar1;
								unk_0xEE0BCDB1B5E36BCB(iLocal_49, 1, 1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, false);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 7);
							}
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&uLocal_47, 7);
					}
				}
				else if (func_87(iLocal_49))
				{
					if (!func_19(unk_0x4A8C381C258A124D(), iLocal_49, 80f, 1))
					{
						func_71(5);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 8);
						func_20(&iLocal_49);
						unk_0x8744D2E3FC95740E(&uLocal_47, false);
						unk_0x8744D2E3FC95740E(&uLocal_47, 7);
						func_252();
					}
					else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_49)
						{
							func_20(&iLocal_49);
							func_152(17, 46);
							func_152(18, 46);
							func_152(14, 46);
							func_160();
							if (func_13())
							{
								func_155(0);
							}
							func_252();
						}
					}
					else if (!func_154(iLocal_49))
					{
						if (unk_0xF46ECFD5526E8FF7(iLocal_49, "GetawayVehicleValid", 0))
						{
						}
						func_152(17, 46);
						func_152(18, 46);
						func_20(&iLocal_49);
						func_252();
						func_160();
					}
				}
				else
				{
					func_20(&iLocal_49);
					func_160();
					func_252();
				}
			}
		}
	}
}

int func_154(int iParam0)
{
	if (unk_0x8D91ADE44AC79BC9(iParam0) < 300 || unk_0x4C7724D572378B05(iParam0) < 300f)
	{
		func_71(6);
		return 0;
	}
	return 1;
}

void func_155(int iParam0)
{
	if (func_159())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_158())
		{
			func_157(1, 1);
		}
		else
		{
			func_157(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(false);
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
	if (!func_156())
	{
		Global_20930.f_1 = 3;
	}
}

int func_156()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_157(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_158()
{
	return BitTest(Global_1956920, 5);
}

bool func_159()
{
	return BitTest(Global_1956920, 19);
}

void func_160()
{
	unk_0x8744D2E3FC95740E(&uLocal_47, false);
	unk_0x8744D2E3FC95740E(&uLocal_47, 8);
	unk_0x8744D2E3FC95740E(&uLocal_47, 7);
}

int func_161(int iParam0)
{
	if (unk_0xD130E7CDEE903624(iParam0, "GetawayVehicleValid"))
	{
		if (unk_0x3F40AE65F056B43D(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_162()
{
	if (unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
	{
		if ((unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0, 0) == unk_0x4A8C381C258A124D() || unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1, 0) == unk_0x4A8C381C258A124D()) || unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 2, 0) == unk_0x4A8C381C258A124D())
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if ((func_169() && func_165(iParam0)) && func_164(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2EEC0612337D20CE(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_71(15);
	return 0;
}

int func_165(int iParam0)
{
	if ((func_167(iParam0) && !func_166(iParam0)) && func_154(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	if (iVar0 == 0)
	{
		func_71(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_71(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_71(27);
		return 1;
	}
	if (func_38(iParam0))
	{
		func_71(14);
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (!func_168(iVar0))
	{
		if (unk_0x1C6BE134527C543C(iVar0) > 0,165f && unk_0xCF85F9C6CDF5D68E(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_71(14);
	return 0;
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_64[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_244(33))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 3);
			}
			else if (iVar0 == 1 && !func_244(34))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 3);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&uLocal_47, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_169()
{
	if ((((unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()) || unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D())) || unk_0x1BAABBB7277FCD90(unk_0x4A8C381C258A124D())) || unk_0x84F50401806477CE(unk_0x4A8C381C258A124D())) || unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()))
	{
		func_71(14);
		return 0;
	}
	return 1;
}

int func_170(int iParam0)
{
	if (unk_0xD130E7CDEE903624(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

void func_172()
{
	int iVar0;
	
	func_153();
	func_111();
	func_210();
	if (func_208())
	{
		if (func_202(&uLocal_244) && func_173(&iVar0))
		{
			func_253(0);
			if (iVar0 == 1)
			{
				func_80(iVar0, 0);
			}
			else
			{
				func_80(iVar0, 1);
			}
		}
	}
}

int func_173(var uParam0)
{
	var uVar0;
	
	if (BitTest(uLocal_47, 0))
	{
		func_191();
		if (func_174())
		{
			uVar0 = unk_0x1AF90EB93E0012D6();
			if (!unk_0xD6F9DEE4765092A9(uVar0))
			{
				if (iLocal_40 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_174()
{
	if (func_176(&uLocal_78, Local_42.f_8, sLocal_77, Local_42.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_38 = 1;
		func_175(192, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
		return 1;
	}
	return 0;
}

void func_175(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(Global_33328[iParam0 /*23*/].f_19))
	{
		unk_0xDABC73EF230B6665(Global_33328[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_33328[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_176(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_190(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam5 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 0;
	return func_177(sParam3, iParam4, bParam8);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x0F15249D24BC5ADA(false);
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
					func_189();
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
		if (func_188(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_187();
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
				func_186();
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
				if (func_185())
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
			if (func_156())
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
			func_184();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_183();
		func_178();
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
		func_189();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
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

int func_179()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_182())
	{
		return 0;
	}
	if (func_180(unk_0x259BE71D8A81D4FA()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 20);
}

var func_181(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_182()
{
	return -1;
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(false);
	Global_22286 = 1;
}

void func_184()
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

int func_185()
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

void func_186()
{
	if (func_86(14))
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
		Global_20930 = func_91();
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

void func_187()
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

bool func_188(int iParam0, int iParam1)
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

void func_189()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(true);
		Global_22286 = 6;
		return;
	}
}

void func_190(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = uParam1;
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

void func_191()
{
	bool bVar0;
	
	bVar0 = func_91();
	func_192(bVar0, func_201(bVar0));
}

void func_192(bool bParam0, var uParam1)
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0:
			Local_42.f_0 = 0;
			Local_42.f_1 = "MICHAEL";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 1;
				Local_42.f_3 = "FRANKLIN";
				Local_42.f_8 = 5;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 6;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_FRESP";
			func_199(bParam0);
			break;
		
		case 1:
			Local_42.f_0 = 1;
			Local_42.f_1 = "FRANKLIN";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 0;
				Local_42.f_3 = "MICHAEL";
				Local_42.f_8 = 9;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 7;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_MRESP";
			func_199(bParam0);
			break;
		
		case 2:
			Local_42.f_0 = 2;
			Local_42.f_1 = "TREVOR";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 0;
				Local_42.f_3 = "MICHAEL";
				Local_42.f_8 = 8;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 7;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_MRESP";
			func_199(bParam0);
			break;
	}
	if (iLocal_40 == 1)
	{
		if (bParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_194(Local_42.f_8, iVar0, 0);
	}
	func_193(&uLocal_78, Local_42.f_0, unk_0x4A8C381C258A124D(), Local_42.f_1, 0, 1);
	func_193(&uLocal_78, Local_42.f_2, 0, Local_42.f_3, 0, 1);
	Local_42.f_4 = uParam1;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_186();
		if (iParam1 == 4)
		{
			func_118(iParam0, 0, 1);
			func_118(iParam0, 1, 1);
			func_118(iParam0, 2, 1);
			func_117(iParam0, 0, 1);
			func_117(iParam0, 1, 1);
			func_117(iParam0, 2, 1);
		}
		else
		{
			if (func_198(iParam0, iParam1) == 1 && func_197(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_118(iParam0, iVar0, 1);
			func_117(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_196(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_196(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_195();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_196(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_195();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_196(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_195();
			}
		}
	}
}

void func_195()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFACCDE46E24AD056(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		StringCopy(&cVar1, unk_0xFACCDE46E24AD056(&(Global_9410[1 /*6*/])), 64);
		sVar2 = unk_0xFACCDE46E24AD056("CELL_253");
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255");
		unk_0xACF853FB3F6EA7D4(&(Global_9410[1 /*6*/]));
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x8744D2E3FC95740E(&Global_8800, false);
}

struct<4> func_196(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_197(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_198(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_199(int iParam0)
{
	Local_42.f_6 = unk_0xDAEDE051F3F4FD45(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
	func_200(iParam0);
}

void func_200(int iParam0)
{
	if (!unk_0xD6F9DEE4765092A9(Local_42.f_6))
	{
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F78";
			}
			else
			{
				Local_42.f_7 = "LOC_T78";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F1";
			}
			else
			{
				Local_42.f_7 = "LOC_T1";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F2";
			}
			else
			{
				Local_42.f_7 = "LOC_T2";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F49";
			}
			else
			{
				Local_42.f_7 = "LOC_T49";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F29";
			}
			else
			{
				Local_42.f_7 = "LOC_T29";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F3";
			}
			else
			{
				Local_42.f_7 = "LOC_T3";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F4";
			}
			else
			{
				Local_42.f_7 = "LOC_T4";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F5";
			}
			else
			{
				Local_42.f_7 = "LOC_T5";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F94";
			}
			else
			{
				Local_42.f_7 = "LOC_T94";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F8";
			}
			else
			{
				Local_42.f_7 = "LOC_T8";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F7";
			}
			else
			{
				Local_42.f_7 = "LOC_T7";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F9";
			}
			else
			{
				Local_42.f_7 = "LOC_T9";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F71";
			}
			else
			{
				Local_42.f_7 = "LOC_T71";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F11";
			}
			else
			{
				Local_42.f_7 = "LOC_T11";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F10";
			}
			else
			{
				Local_42.f_7 = "LOC_T10";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F12";
			}
			else
			{
				Local_42.f_7 = "LOC_T12";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F14";
			}
			else
			{
				Local_42.f_7 = "LOC_T14";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F97";
			}
			else
			{
				Local_42.f_7 = "LOC_T97";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F15";
			}
			else
			{
				Local_42.f_7 = "LOC_T15";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F13";
			}
			else
			{
				Local_42.f_7 = "LOC_T13";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F16";
			}
			else
			{
				Local_42.f_7 = "LOC_T16";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F17";
			}
			else
			{
				Local_42.f_7 = "LOC_T17";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F33";
			}
			else
			{
				Local_42.f_7 = "LOC_T33";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F20";
			}
			else
			{
				Local_42.f_7 = "LOC_T20";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F19";
			}
			else
			{
				Local_42.f_7 = "LOC_T19";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F42";
			}
			else
			{
				Local_42.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F21";
			}
			else
			{
				Local_42.f_7 = "LOC_T21";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F22";
			}
			else
			{
				Local_42.f_7 = "LOC_T22";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F25";
			}
			else
			{
				Local_42.f_7 = "LOC_T25";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F23";
			}
			else
			{
				Local_42.f_7 = "LOC_T23";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F26";
			}
			else
			{
				Local_42.f_7 = "LOC_T26";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F27";
			}
			else
			{
				Local_42.f_7 = "LOC_T27";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F28";
			}
			else
			{
				Local_42.f_7 = "LOC_T28";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F32";
			}
			else
			{
				Local_42.f_7 = "LOC_T32";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F30";
			}
			else
			{
				Local_42.f_7 = "LOC_T30";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F35";
			}
			else
			{
				Local_42.f_7 = "LOC_T35";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F36";
			}
			else
			{
				Local_42.f_7 = "LOC_T36";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F34";
			}
			else
			{
				Local_42.f_7 = "LOC_T34";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F38";
			}
			else
			{
				Local_42.f_7 = "LOC_T38";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F37";
			}
			else
			{
				Local_42.f_7 = "LOC_T37";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F39";
			}
			else
			{
				Local_42.f_7 = "LOC_T39";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F40";
			}
			else
			{
				Local_42.f_7 = "LOC_T40";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F98";
			}
			else
			{
				Local_42.f_7 = "LOC_T98";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F47";
			}
			else
			{
				Local_42.f_7 = "LOC_T47";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F6";
			}
			else
			{
				Local_42.f_7 = "LOC_T6";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F46";
			}
			else
			{
				Local_42.f_7 = "LOC_T46";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F45";
			}
			else
			{
				Local_42.f_7 = "LOC_T45";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F44";
			}
			else
			{
				Local_42.f_7 = "LOC_T44";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F";
			}
			else
			{
				Local_42.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F48";
			}
			else
			{
				Local_42.f_7 = "LOC_T48";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F41";
			}
			else
			{
				Local_42.f_7 = "LOC_T41";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F42";
			}
			else
			{
				Local_42.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F43";
			}
			else
			{
				Local_42.f_7 = "LOC_T43";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F";
			}
			else
			{
				Local_42.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F51";
			}
			else
			{
				Local_42.f_7 = "LOC_T51";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F53";
			}
			else
			{
				Local_42.f_7 = "LOC_T53";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F57";
			}
			else
			{
				Local_42.f_7 = "LOC_T57";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F54";
			}
			else
			{
				Local_42.f_7 = "LOC_T54";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F56";
			}
			else
			{
				Local_42.f_7 = "LOC_T56";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F55";
			}
			else
			{
				Local_42.f_7 = "LOC_T55";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F73";
			}
			else
			{
				Local_42.f_7 = "LOC_T73";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F58";
			}
			else
			{
				Local_42.f_7 = "LOC_T58";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F85";
			}
			else
			{
				Local_42.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F61";
			}
			else
			{
				Local_42.f_7 = "LOC_T61";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F31";
			}
			else
			{
				Local_42.f_7 = "LOC_T31";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F65";
			}
			else
			{
				Local_42.f_7 = "LOC_T65";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F67";
			}
			else
			{
				Local_42.f_7 = "LOC_T67";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F60";
			}
			else
			{
				Local_42.f_7 = "LOC_T60";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F62";
			}
			else
			{
				Local_42.f_7 = "LOC_T62";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F63";
			}
			else
			{
				Local_42.f_7 = "LOC_T63";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F64";
			}
			else
			{
				Local_42.f_7 = "LOC_T64";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F66";
			}
			else
			{
				Local_42.f_7 = "LOC_T66";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F69";
			}
			else
			{
				Local_42.f_7 = "LOC_T69";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F59";
			}
			else
			{
				Local_42.f_7 = "LOC_T59";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F72";
			}
			else
			{
				Local_42.f_7 = "LOC_T72";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F70";
			}
			else
			{
				Local_42.f_7 = "LOC_T70";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F75";
			}
			else
			{
				Local_42.f_7 = "LOC_T75";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F74";
			}
			else
			{
				Local_42.f_7 = "LOC_T74";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F76";
			}
			else
			{
				Local_42.f_7 = "LOC_T76";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F80";
			}
			else
			{
				Local_42.f_7 = "LOC_T80";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F88";
			}
			else
			{
				Local_42.f_7 = "LOC_T88";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F89";
			}
			else
			{
				Local_42.f_7 = "LOC_T89";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F24";
			}
			else
			{
				Local_42.f_7 = "LOC_T24";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F81";
			}
			else
			{
				Local_42.f_7 = "LOC_T81";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F82";
			}
			else
			{
				Local_42.f_7 = "LOC_T82";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F52";
			}
			else
			{
				Local_42.f_7 = "LOC_T52";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F83";
			}
			else
			{
				Local_42.f_7 = "LOC_T83";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F50";
			}
			else
			{
				Local_42.f_7 = "LOC_T50";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F85";
			}
			else
			{
				Local_42.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F86";
			}
			else
			{
				Local_42.f_7 = "LOC_T86";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F87";
			}
			else
			{
				Local_42.f_7 = "LOC_T87";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F100";
			}
			else
			{
				Local_42.f_7 = "LOC_T100";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F90";
			}
			else
			{
				Local_42.f_7 = "LOC_T90";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F93";
			}
			else
			{
				Local_42.f_7 = "LOC_T93";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F95";
			}
			else
			{
				Local_42.f_7 = "LOC_T95";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F96";
			}
			else
			{
				Local_42.f_7 = "LOC_T96";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F99";
			}
			else
			{
				Local_42.f_7 = "LOC_T99";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F77";
			}
			else
			{
				Local_42.f_7 = "LOC_T77";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F101";
			}
			else
			{
				Local_42.f_7 = "LOC_T101";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F79";
			}
			else
			{
				Local_42.f_7 = "LOC_T79";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F84";
			}
			else
			{
				Local_42.f_7 = "LOC_T84";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F18";
			}
			else
			{
				Local_42.f_7 = "LOC_T18";
			}
			return;
		}
		if (unk_0x1B79E937E91F40C3(Local_42.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F68";
			}
			else
			{
				Local_42.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_42.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_42.f_7 = "LOC_M";
		}
		else
		{
			Local_42.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_42.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_42.f_7 = "LOC_F";
	}
	else
	{
		Local_42.f_7 = "LOC_T";
	}
}

char* func_201(bool bParam0)
{
	char* sVar0;
	
	if (!BitTest(uLocal_47, 10))
	{
		if (iLocal_40 == 0)
		{
			sLocal_77 = "FBIPRAU";
		}
		else if (iLocal_40 == 1)
		{
			sLocal_77 = "AHFAUD";
		}
		else if (iLocal_40 == 2)
		{
			sLocal_77 = "FHFAUD";
		}
		if (iLocal_40 == 0)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_40 == 1)
		{
			if (bParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_40 == 2)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_77 = "FHFAUD";
		if (bParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (bParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (bParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_202(var uParam0)
{
	switch (func_203(uParam0, 1, 5, 0, 0))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			func_93(35, 0);
			func_155(0);
			return 0;
			break;
		
		case 2:
			func_93(35, 1);
			return 0;
			break;
	}
	return 0;
}

int func_203(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0))
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
		if (!func_205(iParam2))
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
			func_204(uParam0, iParam4);
		}
	}
	return 2;
}

void func_204(var uParam0, int iParam1)
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

bool func_205(int iParam0)
{
	return func_206(iParam0, Global_44042);
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_205(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_208()
{
	if (BitTest(uLocal_47, 0))
	{
		if (func_87(iLocal_49))
		{
			if (func_209(12))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (Global_23401 == 0)
	{
		return 0;
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
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
	return 0;
}

void func_210()
{
	if (BitTest(uLocal_47, 0))
	{
		if (!BitTest(uLocal_47, 11))
		{
			func_253(1);
		}
	}
	else if (BitTest(uLocal_47, 11))
	{
		func_253(0);
	}
}

void func_211()
{
	int iVar0;
	bool bVar1;
	
	if (((((((Global_44042 == 15 && iLocal_35 != 3) && BitTest(uLocal_47, 5)) && !func_171()) && Global_79386 == -1) && !func_221()) && !func_86(9)) || func_105(35))
	{
		func_220();
		func_219();
		switch (iLocal_37)
		{
			case 0:
				if (BitTest(uLocal_47, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_218(uLocal_45[0], &iVar0);
						}
					}
					unk_0x8744D2E3FC95740E(&uLocal_47, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_218(uLocal_45[1], &iVar0);
						}
					}
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_213(bLocal_44, 1);
				break;
		}
	}
	else if (((((((Global_44042 != 15 || Global_44042 != 0) || Global_44042 != 2) || Global_44042 != 4) || Global_44042 != 17) || func_171()) || Global_79386 == -1) || Global_113024)
	{
		bVar1 = false;
		if (func_212())
		{
			bVar1 = true;
		}
		else if (Global_113024)
		{
			bVar1 = 2;
		}
		if (BitTest(uLocal_45[func_5(bVar1)], bVar1))
		{
			func_213(bVar1, 0);
		}
	}
}

bool func_212()
{
	return unk_0xF40767E41852FB72(Global_113969.f_18106.f_395);
}

void func_213(bool bParam0, bool bParam1)
{
	switch (iLocal_37)
	{
		case 1:
			if ((!unk_0x4C705AAF75363287() && !func_216(func_91())) && !func_215())
			{
				func_214(func_3(bParam0), 15000);
				iLocal_37 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(bParam0)))
			{
				fLocal_46 = 0f;
				iLocal_37 = 3;
			}
			else
			{
				fLocal_46 = (fLocal_46 + unk_0x0B852B0BF94A8DC1());
				if (fLocal_46 >= 20f)
				{
					iLocal_37 = 4;
				}
				else if (BitTest(uLocal_47, 15))
				{
					func_4(bParam0);
					unk_0x8744D2E3FC95740E(&uLocal_47, 15);
					iLocal_37 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(bParam0)))
			{
				if (fLocal_46 >= 7,5f || BitTest(uLocal_47, 15))
				{
					func_4(bParam0);
					unk_0x8744D2E3FC95740E(&uLocal_47, 15);
					iLocal_37 = 4;
				}
				else if (bParam1)
				{
					iLocal_37 = 0;
				}
				else
				{
					iLocal_37 = 1;
					fLocal_46 = 0f;
				}
			}
			else
			{
				fLocal_46 = (fLocal_46 + unk_0x0B852B0BF94A8DC1());
			}
			break;
		
		case 4:
			fLocal_46 = 0f;
			iLocal_37 = 0;
			break;
	}
}

void func_214(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_215()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_216(bool bParam0)
{
	int iVar0;
	
	if (func_57(bParam0))
	{
		if (func_217(bParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_113969.f_7691.f_136)
			{
				if (Global_113969.f_7691[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_217(bool bParam0)
{
	int iVar0;
	
	if (!func_57(bParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_764)
	{
		if (BitTest(Global_113969.f_7691.f_651[iVar0 /*14*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_866)
	{
		if (BitTest(Global_113969.f_7691.f_765[iVar0 /*10*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_218(var uParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_6(*iParam1);
	if (BitTest(uParam0, bVar0))
	{
		if (!BitTest(uLocal_47, 3))
		{
			bLocal_44 = *iParam1;
			iLocal_37 = 1;
			fLocal_46 = 0f;
			func_4(44);
			func_4(45);
			iLocal_74 = unk_0x1DD05E817C89C737();
			*iParam1 = 46;
		}
		else if (14 == bVar0)
		{
			func_4(bVar0);
			*iParam1 = 46;
		}
		else
		{
			bLocal_44 = *iParam1;
			iLocal_37 = 1;
			fLocal_46 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_219()
{
	if (iLocal_35 == 0 || iLocal_35 == 1)
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_143(func_3(3), 0, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
					unk_0x428C32CC68809A35(1);
				}
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_212()) && !Global_112606)
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
						unk_0x428C32CC68809A35(1);
					}
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				if (BitTest(uLocal_47, 0))
				{
					if (iLocal_40 == 2)
					{
						if (iLocal_35 == 1)
						{
							if (func_87(iLocal_49))
							{
								func_71(3);
								func_1(3, 1);
							}
						}
						iLocal_36 = 2;
					}
					else
					{
						if (func_87(iLocal_49))
						{
							func_71(3);
							func_1(3, 1);
						}
						iLocal_36 = 2;
					}
				}
				else
				{
					iLocal_36 = 2;
				}
				break;
			
			case 2:
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					if (func_2(func_3(3)))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
						unk_0x428C32CC68809A35(1);
					}
					iLocal_36 = 0;
				}
				break;
			}
	}
}

void func_220()
{
	if ((((!func_105(func_106()) && !func_105(35)) && !func_216(func_91())) && !func_215()) && !func_119())
	{
		if (iLocal_75 < 2 && (unk_0x1DD05E817C89C737() - iLocal_74) > 480000)
		{
			if (iLocal_40 != 2)
			{
				func_71(44);
			}
			else
			{
				func_71(45);
			}
			iLocal_75++;
		}
	}
}

int func_221()
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

void func_222()
{
	if (func_77())
	{
		if (BitTest(uLocal_47, 2))
		{
			if (func_87(iLocal_49))
			{
				func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
				func_20(&iLocal_49);
			}
			unk_0x8744D2E3FC95740E(&uLocal_47, 2);
		}
		func_1(46, 1);
		func_253(0);
	}
}

void func_223()
{
	if (!func_228())
	{
		if (!func_221())
		{
			if (unk_0x9390801B06EE998F())
			{
				if (!unk_0xDDED2C93E8FD5B69())
				{
					func_225();
				}
			}
		}
	}
	else if (iLocal_35 != 3)
	{
		func_224();
	}
}

void func_224()
{
	if (iLocal_35 != 4)
	{
		if (iLocal_35 != 2)
		{
			if (unk_0x4C705AAF75363287() && !Global_112606)
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 15);
				unk_0x428C32CC68809A35(1);
			}
			if (BitTest(uLocal_47, 0))
			{
				if (func_87(iLocal_49))
				{
					unk_0xE8EF17ECD68C900D(iLocal_49, 0);
				}
				func_20(&iLocal_49);
				func_160();
				if (iLocal_40 != 2)
				{
					Local_48 = { 0f, 0f, 0f };
				}
				unk_0x8744D2E3FC95740E(&uLocal_47, 8);
			}
		}
		else if (BitTest(uLocal_47, 0))
		{
			func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
			if (func_87(iLocal_49))
			{
				unk_0xE8EF17ECD68C900D(iLocal_49, 0);
			}
			func_20(&iLocal_49);
			func_160();
		}
		if (unk_0xCC2EFE4B1D0EE422("GETAWY", 5))
		{
			unk_0xA790E8E6FD7393AC(5, 0);
			unk_0x8744D2E3FC95740E(&uLocal_47, 4);
			unk_0x8744D2E3FC95740E(&uLocal_47, 5);
			func_253(0);
			if (func_212())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_35 = 3;
	}
}

void func_225()
{
	func_227();
	if (BitTest(uLocal_47, 4))
	{
		if (!BitTest(uLocal_47, 5) && !BitTest(uLocal_47, 16))
		{
			unk_0xF2CB0224D3BE0B42("GETAWY", 5);
			if (unk_0xCC2EFE4B1D0EE422("GETAWY", 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 5);
			}
			if (BitTest(uLocal_47, 5))
			{
				func_226();
				iLocal_37 = 0;
				unk_0x8744D2E3FC95740E(&uLocal_47, 7);
				unk_0x8744D2E3FC95740E(&uLocal_47, false);
				unk_0x8744D2E3FC95740E(&uLocal_47, true);
				if (func_2(func_3(0)))
				{
					unk_0x428C32CC68809A35(1);
				}
				func_4(0);
				iLocal_35 = Global_113969.f_10052.f_128;
			}
		}
	}
}

void func_226()
{
	if (!func_105(func_106()))
	{
		if (!BitTest(uLocal_47, 12))
		{
			if (func_103())
			{
				if (iLocal_40 != 2)
				{
					func_71(44);
				}
				else
				{
					func_71(45);
				}
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 12);
			}
		}
	}
}

void func_227()
{
	if (!unk_0x134994A89C4A6F71(5))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&uLocal_47, 4);
	}
}

int func_228()
{
	if (iLocal_40 != 2)
	{
		if (iLocal_40 == 1 && func_91() == 2)
		{
			if (!BitTest(uLocal_47, 16))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 16);
			}
			return 1;
		}
		else if (BitTest(uLocal_47, 16))
		{
			unk_0x8744D2E3FC95740E(&uLocal_47, 16);
		}
		if (func_229())
		{
			return 0;
		}
	}
	else if (func_105(35))
	{
		return 0;
	}
	else if (func_229())
	{
		return 0;
	}
	return 1;
}

int func_229()
{
	if (((((Global_44042 == 15 && !func_171()) && Global_79386 == -1) && !func_212()) && !func_230(1112014848)) && !Global_113024)
	{
		return 1;
	}
	return 0;
}

int func_230(float fParam0)
{
	if (iLocal_40 == 1)
	{
		if (func_78(unk_0x4A8C381C258A124D(), Global_97459[1 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 2)
	{
		if (func_78(unk_0x4A8C381C258A124D(), Global_97459[0 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 0)
	{
		if (func_78(unk_0x4A8C381C258A124D(), Global_97459[3 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_231()
{
	if (!BitTest(uLocal_47, 13))
	{
		if (func_232())
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 13);
		}
	}
	else if (!func_232())
	{
		unk_0x8744D2E3FC95740E(&uLocal_47, 7);
		unk_0x8744D2E3FC95740E(&uLocal_47, false);
		unk_0x8744D2E3FC95740E(&uLocal_47, true);
		unk_0x8744D2E3FC95740E(&uLocal_47, 13);
	}
}

int func_232()
{
	if (((((func_233(39) || func_233(40)) || func_233(41)) || func_233(42)) || func_233(43)) || func_233(44))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	return func_234(iParam0, 6, 1);
}

int func_234(int iParam0, int iParam1, bool bParam2)
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
		if (func_98() == 0)
		{
			return BitTest(func_235(func_238(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_236(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_236(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_237(uParam1));
}

int func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_101();
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

int func_238(int iParam0)
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

int func_239(int iParam0)
{
	if (func_88(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_240(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_2(sParam0) && !unk_0xA5DAECD045AA8024())
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_243(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_242((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_241();
			return;
		}
		iVar0++;
	}
}

void func_241()
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

void func_242(int iParam0)
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_243(int iParam0, int iParam1)
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

int func_244(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_245(int iParam0)
{
	iLocal_40 = iParam0;
	if (iLocal_40 == 0)
	{
		sLocal_77 = "FBIPRAU";
	}
	else if (iLocal_40 == 1)
	{
		sLocal_77 = "AHFAUD";
	}
	else if (iLocal_40 == 2)
	{
		sLocal_77 = "FHFAUD";
	}
	iLocal_64[0] = joaat("trash");
	iLocal_64[1] = joaat("towtruck");
	iLocal_64[2] = joaat("ambulance");
	iLocal_64[3] = joaat("barracks2");
	iLocal_64[4] = joaat("stretch");
	iLocal_64[5] = joaat("phantom");
	iLocal_64[6] = joaat("packer");
	iLocal_64[7] = joaat("blazer");
	iLocal_64[8] = joaat("blazer2");
	if (iLocal_40 != 0)
	{
		iLocal_64[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_64[9] = 0;
	}
	func_248();
	func_246();
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 17);
	iLocal_74 = unk_0x1DD05E817C89C737();
}

void func_246()
{
	sLocal_43[0] = "AM_H_FBIC1A";
	sLocal_43[1] = "AM_H_FBIC1B";
	sLocal_43[2] = "AM_H_FBIC1C";
	sLocal_43[3] = "PRC_WANT";
	sLocal_43[4] = "PRC_DROPOFF";
	sLocal_43[5] = "PRC_INVALVEH";
	sLocal_43[6] = "PRC_HEALTH";
	sLocal_43[7] = func_247(7);
	sLocal_43[8] = func_247(8);
	sLocal_43[9] = "PRC_USEFIRST";
	sLocal_43[10] = func_247(10);
	sLocal_43[11] = func_247(11);
	sLocal_43[13] = func_247(13);
	sLocal_43[12] = func_247(12);
	sLocal_43[14] = "PRC_UNUSE";
	sLocal_43[15] = "PRC_SEATS";
	sLocal_43[16] = "PRC_CBOBVAL";
	sLocal_43[17] = func_247(17);
	sLocal_43[18] = func_247(18);
	sLocal_43[20] = func_247(20);
	sLocal_43[21] = "PRC_PUBAREA";
	sLocal_43[22] = "PRC_LAWAREA";
	sLocal_43[23] = "PRC_RESAREA";
	sLocal_43[24] = "PRC_STOP";
	sLocal_43[25] = "PRC_OWNEDM";
	sLocal_43[26] = "PRC_OWNEDF";
	sLocal_43[27] = "PRC_OWNEDT";
	sLocal_43[28] = "PRC_SECROUTE";
	sLocal_43[29] = "PRC_CLOSELOT";
	sLocal_43[30] = "PRC_CLOSELES";
	sLocal_43[31] = "PRC_CLSAGNT";
	sLocal_43[32] = "PRC_CLOSESAFE_M";
	sLocal_43[33] = "PRC_CLOSESAFE_F";
	sLocal_43[34] = "PRC_CLOSESAFE_T";
	sLocal_43[35] = "PRC_PEDS";
	sLocal_43[36] = "PRC_WATER";
	sLocal_43[37] = "PRC_OBST";
	sLocal_43[38] = "PRC_OBSTVEH";
	sLocal_43[39] = "PRC_UPDWN";
	sLocal_43[40] = "PRC_NEARROAD";
	sLocal_43[41] = "PRC_ONROAD";
	sLocal_43[19] = "PRC_PLAN";
	sLocal_43[42] = "PRC_TOOSTEEP";
	sLocal_43[43] = "PRC_UNEVEN";
	sLocal_43[44] = "PRC_REMIND";
	sLocal_43[45] = "PRC_REMINDA";
}

char* func_247(int iParam0)
{
	char* sVar0;
	
	if (iLocal_40 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_40 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_40 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_248()
{
	sLocal_67[0] = "ARMYB";
	sLocal_67[1] = "AIRP";
	sLocal_67[2] = "STAD";
	sLocal_67[3] = "TERMINA";
	sLocal_67[4] = "MOVIE";
	sLocal_67[5] = "JAIL";
	sLocal_67[6] = "OCEANA";
	sLocal_67[7] = "GOLF";
	sLocal_67[8] = "HORS";
	sLocal_67[9] = "MTCHIL";
	sLocal_67[10] = "MTGORDO";
	sLocal_67[11] = "SANCHIA";
	sLocal_67[12] = "TATAMO";
	Local_66[0 /*261*/][0 /*8*/] = { func_249("DELBE", -1615,257f, -952,5944f, 20,01716f, -2160,706f, -423f, -1,28679f, 327,8f) };
	Local_66[0 /*261*/][1 /*8*/] = { func_249("DELBE", -1521,716f, -914,5676f, 20,17247f, -1855,715f, -1325,784f, -44,79295f, 254,8f) };
	Local_66[0 /*261*/][2 /*8*/] = { func_249("BEACH", -1162,37f, -1815,008f, 15,33822f, -1553,207f, -1098,685f, 0,46467f, 253,91f) };
	Local_66[0 /*261*/][3 /*8*/] = { func_249("BEACH", -1464,219f, -1136,783f, 0,32167f, -2241,566f, -358,8849f, 20,32481f, 282,21f) };
	Local_66[0 /*261*/][4 /*8*/] = { func_249("PBOX", 156,4109f, -1042,641f, 22,31273f, 238,6382f, -821,1217f, 35,10069f, 176,96f) };
	Local_66[0 /*261*/][5 /*8*/] = { func_249("CHIL", 883,1121f, 534,7283f, 115,725f, 559,7425f, 644,602f, 150,5971f, 301,08f) };
	Local_66[0 /*261*/][6 /*8*/] = { func_249("EAST_V", 941,4531f, -329,4256f, 60,77003f, 727,7651f, -200,9519f, 75,59085f, 88,89f) };
	Local_66[0 /*261*/][7 /*8*/] = { func_249("EAST_V", 689,1177f, -273,1406f, 60,21559f, 834,7326f, -352,1655f, 50,92442f, 81,23f) };
	Local_66[0 /*261*/][8 /*8*/] = { func_249("MIRR", 1048,499f, -357,0332f, 60,92149f, 1401,581f, -783,8975f, 75,7477f, 325,93f) };
	Local_66[0 /*261*/][9 /*8*/] = { func_249("MIRR", 892,2836f, -461,5752f, 70,86029f, 1161,301f, -829,8299f, 45,90131f, 184,12f) };
	Local_66[0 /*261*/][10 /*8*/] = { func_249("VCANA", -1161,361f, -1143,716f, -5,71593f, -864,9714f, -981,1257f, 21,09691f, 328,65f) };
	Local_66[0 /*261*/][11 /*8*/] = { func_249("BAYTRE", 251,4011f, 1068,347f, 280,6663f, 189,6012f, 1272,352f, 143,8035f, 160,32f) };
	Local_66[0 /*261*/][13 /*8*/] = { func_249("OBSERV", -450,9835f, 1048,408f, 252,945f, -389,564f, 1244,504f, 370,2469f, 199,93f) };
	Local_66[0 /*261*/][14 /*8*/] = { func_249("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][15 /*8*/] = { func_249("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][16 /*8*/] = { func_249("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][17 /*8*/] = { func_249("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][18 /*8*/] = { func_249("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][19 /*8*/] = { func_249("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[0 /*261*/][20 /*8*/] = { func_249("PBOX", -28,39781f, -1071,245f, 50,21438f, -49,8352f, -1131,277f, 20,02555f, 55,12f) };
	Local_66[0 /*261*/][21 /*8*/] = { func_249("LOSSF", 843,1962f, 25,93548f, 65,16061f, 1138,687f, 363,0587f, 105,4128f, 61,11f) };
	Local_66[0 /*261*/][22 /*8*/] = { func_249("ROCKF", -992,5638f, -199,7673f, 30,74956f, -687,9904f, -43,23445f, 80,93306f, 80,53f) };
	Local_66[0 /*261*/][23 /*8*/] = { func_249("ROCKF", -251,8548f, -446,2141f, 29,5887f, -362,685f, -434,7425f, 90,931f, 50f) };
	Local_66[0 /*261*/][24 /*8*/] = { func_249("ALTA", 180,2637f, -404,9771f, 40,1713f, 289,9432f, -445,1485f, 124,3793f, 100f) };
	Local_66[0 /*261*/][25 /*8*/] = { func_249("ALTA", 343,8481f, -323,1273f, 80,7749f, 427,08f, -361,0469f, 45,3411f, 85f) };
	Local_66[0 /*261*/][26 /*8*/] = { func_249("RANCHO", 414,5057f, -2092,1f, 19,8533f, 350,8093f, -2158,395f, 12,3916f, 55f) };
	Local_66[0 /*261*/][27 /*8*/] = { func_249("RANCHO", 283,7474f, -2103,918f, 12,9242f, 391,8871f, -1983,204f, 33,0042f, 100f) };
	Local_66[0 /*261*/][28 /*8*/] = { func_249("PBOX", 85,038f, -670,3274f, 42,8642f, 227,8234f, -722,2458f, 274f, 175f) };
	Local_66[0 /*261*/][29 /*8*/] = { func_249("PBOX", -107,2516f, -906,36f, 28,2051f, -49,9007f, -752,925f, 330f, 125f) };
	Local_66[0 /*261*/][30 /*8*/] = { func_249("TEXTI", 456,8563f, -683,8335f, 32,2903f, 457,5504f, -819,4669f, 25,9553f, 14,4f) };
	Local_66[0 /*261*/][31 /*8*/] = { func_249("ROCKF", -699,7205f, -227,3646f, 67,818f, -645,1068f, -332,5107f, 30,9132f, 127,1f) };
	Local_66[0 /*261*/].f_260 = 0;
	Local_66[0 /*261*/].f_257 = 32;
	Local_66[2 /*261*/][0 /*8*/] = { func_249("PBOX", -25,50944f, -932,3846f, 20,41711f, 119,9406f, -523,4398f, 33,07988f, 363,4f) };
	Local_66[2 /*261*/][1 /*8*/] = { func_249("DOWNT", -25,50944f, -932,3846f, 20,41711f, 119,9406f, -523,4398f, 33,07988f, 363,4f) };
	Local_66[2 /*261*/][2 /*8*/] = { func_249("COSI", 1426,934f, 1225,115f, 90,76305f, 1429,982f, 1006,831f, 120,6643f, 259,89f) };
	Local_66[2 /*261*/][3 /*8*/] = { func_249("COSI", 3503,56f, 3546,403f, 20,18748f, 3513,955f, 3875,795f, 72,94806f, 393,78f) };
	Local_66[2 /*261*/][4 /*8*/] = { func_249("SKID", 403,5404f, -864,4694f, 20,33799f, 396,3441f, -1127,325f, 35,49262f, 325,93f) };
	Local_66[2 /*261*/][5 /*8*/] = { func_249("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[2 /*261*/][6 /*8*/] = { func_249("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[2 /*261*/].f_260 = 2;
	Local_66[2 /*261*/].f_257 = 7;
	Local_66[1 /*261*/][0 /*8*/] = { func_249("PALETO", -422,8618f, 6068,399f, 20,34662f, -282,7452f, 6206,324f, 50,46586f, 196,61f) };
	Local_66[1 /*261*/][1 /*8*/] = { func_249("ROCKF", -755,2506f, 147,4266f, 75,41048f, -1079,033f, 169,3806f, 50,46801f, 179,12f) };
	Local_66[1 /*261*/][2 /*8*/] = { func_249("ROCKF", -752,3674f, 90,76733f, 65,5171f, -938,798f, -15,91457f, 35,48347f, 205,78f) };
	Local_66[1 /*261*/][3 /*8*/] = { func_249("ROCKF", -890,4999f, 431,1449f, 90,29848f, -875,3576f, 232,3266f, 60,20724f, 263,82f) };
	Local_66[1 /*261*/][4 /*8*/] = { func_249("ROCKF", -752,3674f, 90,76733f, 65,5171f, -938,798f, -15,91457f, 35,48347f, 205,78f) };
	Local_66[1 /*261*/][5 /*8*/] = { func_249("ROCKF", -1198,183f, 638,6367f, 115,1066f, -444,509f, 750,9377f, 198,2971f, 473,88f) };
	Local_66[1 /*261*/][6 /*8*/] = { func_249("ROCKF", -844,4075f, 400,9413f, 80,433f, -109,5311f, 420,5014f, 120,2088f, 256,03f) };
	Local_66[1 /*261*/][7 /*8*/] = { func_249("ROCKF", -518,6213f, 648,8265f, 130,9352f, -64,0709f, 582,4504f, 215,3084f, 162,72f) };
	Local_66[1 /*261*/][8 /*8*/] = { func_249("RICHM", -934,9802f, 349,6101f, 85,77298f, -1432,451f, 269,9804f, 50,7303f, 185,03f) };
	Local_66[1 /*261*/][9 /*8*/] = { func_249("RICHM", -1633,813f, -69,53224f, 65,10236f, -1446,823f, 69,71544f, 48,23926f, 214,92f) };
	Local_66[1 /*261*/][10 /*8*/] = { func_249("RICHM", -1732,258f, 444,1353f, 130,1258f, -2065,69f, 412,2121f, 98,09863f, 175,17f) };
	Local_66[1 /*261*/][11 /*8*/] = { func_249("RICHM", -1618,036f, 50,95197f, 70,95364f, -1396,514f, 221,1004f, 50,84464f, 161,61f) };
	Local_66[1 /*261*/][12 /*8*/] = { func_249("RICHM", -1801,285f, 106,8786f, 72,12892f, -1541,74f, 263,3738f, 50,44112f, 155,88f) };
	Local_66[1 /*261*/][13 /*8*/] = { func_249("PELUFF", -2208,563f, 146,4101f, 150,9325f, -2350,122f, 486,6066f, 200,5952f, 299,18f) };
	Local_66[1 /*261*/][14 /*8*/] = { func_249("PELUFF", -1852,326f, 134,4172f, 70,06226f, -1994,387f, 299,6283f, 100,9652f, 182,04f) };
	Local_66[1 /*261*/][15 /*8*/] = { func_249("CHIL", -1982,67f, 505,9648f, 100,9364f, -1918,843f, 713,6382f, 150,7395f, 168,9f) };
	Local_66[1 /*261*/][16 /*8*/] = { func_249("CHIL", -1455,751f, 887,3351f, 191,9757f, -1663,207f, 767,3684f, 160,8108f, 239,65f) };
	Local_66[1 /*261*/][17 /*8*/] = { func_249("CHIL", -1570,222f, 508,2056f, 140,3884f, -808,9532f, 526,4333f, 90,18556f, 238,43f) };
	Local_66[1 /*261*/][18 /*8*/] = { func_249("CHIL", 242,6204f, 583,5905f, 159,4043f, 268,0424f, 827,4494f, 201,6953f, 105,09f) };
	Local_66[1 /*261*/][19 /*8*/] = { func_249("CHIL", -21,10285f, 706,8648f, 150,7263f, -210,4382f, 1056,276f, 280,3182f, 290,15f) };
	Local_66[1 /*261*/][20 /*8*/] = { func_249("RGLEN", -1837,538f, 774,2984f, 120,5629f, -1765,842f, 831,0044f, 160,3584f, 68,09f) };
	Local_66[1 /*261*/][21 /*8*/] = { func_249("DIVINE", -372,0849f, 372,7183f, 100,6043f, 390,2198f, 532,5167f, 180,538f, 305,88f) };
	Local_66[1 /*261*/].f_260 = 1;
	Local_66[1 /*261*/].f_257 = 22;
	Local_66[3 /*261*/][0 /*8*/] = { func_249("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[3 /*261*/][1 /*8*/] = { func_249("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[3 /*261*/][2 /*8*/] = { func_249("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[3 /*261*/][3 /*8*/] = { func_249("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_66[3 /*261*/][4 /*8*/] = { func_249("ELYSIAN", 531,2397f, -3019,267f, 50f, 530,1656f, -3393,623f, -22,4165f, 210f) };
	Local_66[3 /*261*/][5 /*8*/] = { func_249("ELYSIAN", 569,1023f, -2913,018f, 15,891f, 420,8226f, -2912,775f, -15,0372f, 25f) };
	Local_66[3 /*261*/][6 /*8*/] = { func_249("ELYSIAN", 495,1012f, -2833,175f, 5,164f, 460,1983f, -2813,528f, 0,4269f, 12f) };
	Local_66[3 /*261*/][7 /*8*/] = { func_249("ELYSIAN", 675,2973f, -2747,45f, 4,952f, 689,2358f, -2747,396f, 10,9001f, 4,3f) };
	Local_66[3 /*261*/][8 /*8*/] = { func_249("CYPRE", 533,437f, -2693,279f, 17,4952f, 588,6345f, -2693,462f, 5,3007f, 15f) };
	Local_66[3 /*261*/][9 /*8*/] = { func_249("CYPRE", 534,9656f, -2699,136f, 4,9004f, 560,1779f, -2662,192f, 9,0007f, 15f) };
	Local_66[3 /*261*/][10 /*8*/] = { func_249("CYPRE", 583,903f, -2689,207f, 16,9771f, 549,8469f, -2665,318f, 3,9007f, 17,3f) };
	Local_66[3 /*261*/][11 /*8*/] = { func_249("CYPRE", 683,428f, -2635,134f, 9,3367f, 694,4725f, -2679,66f, 4,7815f, 10f) };
	Local_66[3 /*261*/][12 /*8*/] = { func_249("CYPRE", 695,2171f, -2694,769f, 5,9815f, 695,5035f, -2679,168f, 4,8365f, 10f) };
	Local_66[3 /*261*/][13 /*8*/] = { func_249("CYPRE", 731,7991f, -2659,58f, 4,7713f, 732,5307f, -2678,4f, 10,5065f, 25f) };
	Local_66[3 /*261*/][14 /*8*/] = { func_249("ELYSIAN", 86,1885f, -2430,696f, -0,1888f, 119,1515f, -2453,121f, 2,8614f, 13f) };
	Local_66[3 /*261*/][15 /*8*/] = { func_249("ELYSIAN", 260,3166f, -2426,777f, 21,2819f, 313,7871f, -2433,656f, 6,5609f, 20,5f) };
	Local_66[3 /*261*/][16 /*8*/] = { func_249("ELYSIAN", 260,3166f, -2426,777f, 21,2819f, 313,7871f, -2433,656f, 6,5609f, 20,5f) };
	Local_66[3 /*261*/][17 /*8*/] = { func_249("ELYSIAN", 283,1514f, -2456,777f, 19,4609f, 290,2325f, -2403,611f, 4,2465f, 20,5f) };
	Local_66[3 /*261*/][18 /*8*/] = { func_249("ELYSIAN", 266,0341f, -2446,724f, 19,4623f, 308,3783f, -2414,544f, 4,5423f, 20,5f) };
	Local_66[3 /*261*/][19 /*8*/] = { func_249("ELYSIAN", 303,5269f, -2451,446f, 19,4091f, 270,9798f, -2409,452f, 4,4609f, 20,5f) };
	Local_66[3 /*261*/][20 /*8*/] = { func_249("RANCHO", 515,026f, -1653,54f, 37,2615f, 582,571f, -1577,825f, 26,3365f, 100f) };
	Local_66[3 /*261*/][21 /*8*/] = { func_249("BURTON", -150,7403f, -419,0541f, 28,6163f, -52,8669f, -453,5552f, 39,4051f, 100f) };
	Local_66[3 /*261*/][22 /*8*/] = { func_249("SanAnd", 50,2035f, -470,7132f, 36,9003f, 102,0394f, -322,0089f, 115f, 130f) };
	Local_66[3 /*261*/][23 /*8*/] = { func_249("ALTA", 499,1769f, -241,2495f, 47,3462f, 393,5317f, -205,7358f, 79,3132f, 120f) };
	Local_66[3 /*261*/][24 /*8*/] = { func_249("DTVINE", 422,3247f, 62,118f, 113,2905f, 478,494f, 43,322f, 83,4541f, 80f) };
	Local_66[3 /*261*/][25 /*8*/] = { func_249("DTVINE", 385,4908f, 56,1423f, 159,58f, 332,458f, -87,6805f, 63,3657f, 80f) };
	Local_66[3 /*261*/][26 /*8*/] = { func_249("DTVINE", 213,6192f, 90,2228f, 98,9357f, 203,3067f, 61,8088f, 86,9197f, 60f) };
	Local_66[3 /*261*/][27 /*8*/] = { func_249("DTVINE", 192,813f, -14,9451f, 85,3158f, 149,2689f, 0,6803f, 67,0343f, 40f) };
	Local_66[3 /*261*/][28 /*8*/] = { func_249("WVINE", 16,1659f, 61,8685f, 70,8467f, -17,1751f, 74,3771f, 76,88f, 4,5f) };
	Local_66[3 /*261*/][29 /*8*/] = { func_249("WVINE", -86,5425f, 84,8701f, 80,2147f, -50,4826f, 67,7335f, 70,297f, 20f) };
	Local_66[3 /*261*/][30 /*8*/] = { func_249("ELGORL", 3449,839f, 5173,981f, 0,0662f, 3412,309f, 5166,89f, 14,8342f, 33,7f) };
	Local_66[3 /*261*/].f_260 = 3;
	Local_66[3 /*261*/].f_257 = 31;
	if (func_239(unk_0x4A8C381C258A124D()))
	{
		sLocal_68 = unk_0xDAEDE051F3F4FD45(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
	}
}

struct<8> func_249(char* sParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param2 };
	Var0.f_7 = fParam3;
	return Var0;
}

void func_250(int iParam0, bool bParam1)
{
	if (func_87(iLocal_49))
	{
		func_20(&iLocal_49);
	}
	if (!bParam1)
	{
		func_251(iParam0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

int func_251(int iParam0)
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

void func_252()
{
	if (func_105(35))
	{
		func_93(35, 0);
		func_140(&uLocal_244);
	}
	func_144(&uLocal_243);
}

void func_253(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_40 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_261(sVar0);
		}
		else if (iLocal_40 == 0)
		{
			if (func_91() == 0)
			{
				func_260(sVar0);
				func_259(sVar0);
			}
			else if (func_91() == 1)
			{
				func_258(sVar0);
			}
			else
			{
				func_258(sVar0);
			}
		}
		else if (iLocal_40 == 1)
		{
			if (func_91() == 0)
			{
				func_260(sVar0);
				func_261(sVar0);
			}
			else if (func_91() == 1)
			{
				func_258(sVar0);
				func_261(sVar0);
			}
			else
			{
				func_258(sVar0);
				func_261(sVar0);
			}
		}
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_47, 11);
	}
	else if (BitTest(uLocal_47, 11))
	{
		func_257();
		func_256();
		func_255();
		func_254();
		unk_0x8744D2E3FC95740E(&uLocal_47, 11);
	}
}

void func_254()
{
	StringCopy(&(Global_8638[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_255()
{
	StringCopy(&(Global_8638[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_256()
{
	StringCopy(&(Global_8638[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_257()
{
	StringCopy(&(Global_8638[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_258(char* sParam0)
{
	StringCopy(&(Global_8638[0 /*16*/].f_8), sParam0, 32);
}

void func_259(char* sParam0)
{
	StringCopy(&(Global_8638[2 /*16*/].f_8), sParam0, 32);
}

void func_260(char* sParam0)
{
	StringCopy(&(Global_8638[1 /*16*/].f_8), sParam0, 32);
}

void func_261(char* sParam0)
{
	StringCopy(&(Global_8638[3 /*16*/].f_8), sParam0, 32);
}

void func_262(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_263(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_263(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_241();
	}
}

int func_264(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_61(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_265(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_78179.f_555[0 /*21*/].f_3;
}

Vector3 func_266(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_78179.f_555[0 /*21*/];
}

int func_267(int iParam0)
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

