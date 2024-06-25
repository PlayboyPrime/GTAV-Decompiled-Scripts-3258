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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	struct<22> Local_90 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	struct<15> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_95[32];
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	struct<2> Local_110 = { 0, 0 } ;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	char* sLocal_282 = NULL;
	struct<21> Local_283 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	func_403(ScriptParam_283);
	while (true)
	{
		func_402();
		if (func_394() || !func_393(unk_0x259BE71D8A81D4FA(), 0, 1))
		{
			func_391();
		}
		switch (func_390(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_389() == 2)
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 2;
				}
				else if (func_389() == 6)
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_389() == 2)
				{
					func_382();
					func_55();
				}
				else if (func_389() == 6)
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 5;
				}
				if (((func_52(unk_0x259BE71D8A81D4FA(), 1, 0) || func_49(unk_0x259BE71D8A81D4FA())) || BitTest(uLocal_98, 8)) || BitTest(uLocal_98, 16))
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_48(&(Local_90.f_19));
				if (func_47(&(Local_90.f_19)))
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_1 = 6;
			
			case 6:
				func_391();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_389())
			{
				case 0:
					func_46(&(Local_90.f_17), 0, 0);
					Local_90.f_1 = 2;
					break;
				
				case 2:
					func_42();
					func_40();
					func_3();
					if (func_1())
					{
						Local_90.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return BitTest(Local_90.f_0, 6);
}

void func_3()
{
	if (unk_0x93E08E0F531E2C35())
	{
		switch (Local_90.f_2)
		{
			case 0:
				if (!BitTest(Local_90.f_0, 10))
				{
					if (func_39(&(Local_90.f_17), 300000, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 10);
					}
				}
				if (!BitTest(Local_90.f_0, 10))
				{
					if (BitTest(Local_90.f_0, 0))
					{
						Local_90.f_5 = func_38();
						Local_90.f_2 = 1;
						Local_90.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0x0B0C9A0F9AAEB7F0(&Local_90, 3);
					unk_0x8744D2E3FC95740E(&Local_90, 13);
					func_46(&(Local_90.f_21), 0, 0);
					Local_90.f_2 = 2;
				}
				break;
			
			case 2:
				if (BitTest(Local_90.f_0, 4))
				{
					func_4(Local_90.f_5);
					Local_90.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_90.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_90.f_9[0]));
			func_5(&(Local_90.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

int func_6()
{
	if (Local_90.f_5 == 0)
	{
		if (!BitTest(Local_90.f_0, 1))
		{
			bLocal_106 = false;
			iLocal_107 = unk_0xC5935DFB3F39785A(0, 5);
			iLocal_93 = 0;
			Local_90.f_3 = -1;
			Local_90.f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&Local_90, true);
		}
		if (!BitTest(Local_90.f_0, 2))
		{
			if (func_37())
			{
				unk_0x0B0C9A0F9AAEB7F0(&Local_90, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	
	iVar0 = func_36();
	iVar1 = func_35();
	if (!unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
	{
		if (Local_90.f_15 == 0)
		{
			unk_0x552B3BADB43FF551(1);
			Local_90.f_15 = 1;
		}
		if (!BitTest(Local_90.f_0, 13))
		{
			if (unk_0x2E9F58AD6FE93DFF(1))
			{
				if (unk_0xADCE9BCAFCB83364(1))
				{
					if (func_34(1, 1, 1))
					{
						if (func_28(1, 1, 1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_90, 13);
						}
					}
				}
			}
		}
		if (BitTest(Local_90.f_0, 13))
		{
			if (func_27(iVar1))
			{
				if (func_27(iVar0))
				{
					if (func_14(&Var2, &uVar3))
					{
						if (func_11(&(Local_90.f_12[0]), iVar1, Var2, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x1F7539C841C2A71F(unk_0xE38610F405049F71(Local_90.f_12[0]), 1);
							if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_90.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_90.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
		{
			if (Local_90.f_16 == 0)
			{
				unk_0x17C7D9B3979F5759(1);
				Local_90.f_16 = 1;
			}
			if (unk_0xADCE9BCAFCB83364(1))
			{
				if (func_27(iVar0))
				{
					if (func_9(Local_90.f_12[0]))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_90.f_12[0]))
						{
							if (func_8(&(Local_90.f_9[0]), Local_90.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x1F7539C841C2A71F(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1);
								unk_0x87EDE48547CC8942(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1, 0);
								unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1);
								unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), Global_1837312);
								unk_0x87EDE48547CC8942(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1, 0);
								unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), system::round((200f * Global_262145.f_156)), 0, 0);
								Local_90.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]) || !unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_10(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
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

int func_11(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_12(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_13(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam3 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam2) && system::vdist(Global_2635563.f_3230[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = uParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_13(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (system::vdist(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_14(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!func_26(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_107)
	{
		case 0:
			if (BitTest(Local_90.f_4, iLocal_107))
			{
				Var0 = { -1232,842f, -1095,003f, 2,2331f };
				Var1 = { -1226,248f, -1089,819f, 10,1513f };
				Var2 = { func_25(0, 0) };
				fVar3 = 19,7853f;
			}
			break;
		
		case 1:
			if (BitTest(Local_90.f_4, iLocal_107))
			{
				Var0 = { -622,0966f, 250,3288f, 75,7075f };
				Var1 = { -614,8635f, 255,2288f, 88,7755f };
				Var2 = { func_25(0, 1) };
				fVar3 = 266,4686f;
			}
			break;
		
		case 2:
			if (BitTest(Local_90.f_4, iLocal_107))
			{
				Var0 = { 794,4784f, -2034,339f, 25,2469f };
				Var1 = { 798,8026f, -2026,004f, 33,2793f };
				Var2 = { func_25(0, 2) };
				fVar3 = 355,9428f;
			}
			break;
		
		case 3:
			if (BitTest(Local_90.f_4, iLocal_107))
			{
				Var0 = { -1623,919f, 1249,831f, 135,2495f };
				Var1 = { -1621,554f, 1257,98f, 145,2376f };
				Var2 = { func_25(0, 3) };
				fVar3 = 353,7463f;
			}
			break;
		
		case 4:
			if (BitTest(Local_90.f_4, iLocal_107))
			{
				Var0 = { 1118,077f, 1875,035f, 60,3776f };
				Var1 = { 1127,638f, 1883,083f, 70,1053f };
				Var2 = { func_25(0, 4) };
				fVar3 = 201,3967f;
			}
			break;
	}
	if (iLocal_107 < 5)
	{
		if (!func_26(Var0, 0f, 0f, 0f, 0))
		{
			if (Local_90.f_3 == -1)
			{
				Local_90.f_3 = unk_0x132F0517E3CE528A(Var0, Var1);
			}
			else if (unk_0x8256312AC2E5471D(Local_90.f_3))
			{
				if (unk_0x31B34E18DE46CC94(Local_90.f_3))
				{
					if (!unk_0xF8EEEE15D7483100(Local_90.f_3))
					{
						if (!func_15(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							unk_0x0C2A05549FF0EB55(Local_90.f_3);
							return 1;
						}
						else
						{
							iLocal_107++;
							unk_0x0C2A05549FF0EB55(Local_90.f_3);
							Local_90.f_3 = -1;
						}
					}
					else
					{
						iLocal_107++;
						unk_0x0C2A05549FF0EB55(Local_90.f_3);
						Local_90.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_107++;
		}
	}
	else
	{
		iLocal_107 = 0;
	}
	return 0;
}

int func_15(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_393(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_21(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_393(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_16(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_21(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_21(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1574926;
}

int func_20(var uParam0)
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

Vector3 func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_24() && Global_1845281[iVar0 /*883*/].f_860) && !func_23(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_22(iParam0);
}

Vector3 func_22(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_23(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_24()
{
	return Global_2684504.f_19;
}

Vector3 func_25(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { -1228,99f, -1092,231f, 7,0465f };
			}
			else if (iParam1 == 1)
			{
				Var0 = { -618,6293f, 252,6611f, 80,5897f };
			}
			else if (iParam1 == 2)
			{
				Var0 = { 796,6768f, -2029,602f, 28,1346f };
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1622,881f, 1253,516f, 139,6713f };
			}
			else if (iParam1 == 4)
			{
				Var0 = { 1123,27f, 1878,917f, 65,7957f };
			}
			break;
	}
	return Var0;
}

bool func_26(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

bool func_28(int iParam0, bool bParam1, bool bParam2)
{
	return func_29(0, iParam0, 1, bParam1, bParam2);
}

int func_29(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_33(iParam0) - func_32(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_31(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_32(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_30(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

bool func_34(int iParam0, bool bParam1, bool bParam2)
{
	return func_29(1, iParam0, 1, bParam1, bParam2);
}

int func_35()
{
	return joaat("cavalcade");
}

int func_36()
{
	return joaat("a_m_y_business_03");
}

int func_37()
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	
	if (BitTest(Local_90.f_0, 1))
	{
		if (iLocal_93 >= 32)
		{
			if (bLocal_106 < 5)
			{
				bLocal_106++;
			}
			iLocal_93 = 0;
		}
		if (iLocal_93 == 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, true);
		}
		if (bLocal_106 < 5)
		{
			iVar5 = iLocal_93;
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar5)))
			{
				iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar5));
				if (func_393(iVar0, 1, 1))
				{
					uVar1 = unk_0x56E414973C2A8C0E(iVar0);
					if (BitTest(uLocal_98, 1))
					{
						Var2 = { func_25(Local_90.f_5, bLocal_106) };
						Var3 = { unk_0xD1A6A821F5AC81DB(uVar1, 0) };
						fVar4 = unk_0xED977E2AE2CB16EE(Var2, Var3, 1);
						if (fVar4 < 300f)
						{
							unk_0x8744D2E3FC95740E(&uLocal_98, true);
						}
					}
				}
			}
			iLocal_93++;
			if (iLocal_93 == 32)
			{
				if (BitTest(uLocal_98, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_90.f_4), bLocal_106);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	return 0;
}

int func_39(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_46(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	if (unk_0x93E08E0F531E2C35())
	{
		switch (Local_90.f_6)
		{
			case 0:
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]) && unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
				{
					Local_90.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
						{
							if (func_9(Local_90.f_12[0]))
							{
								if (unk_0xF4244288C3EF3306(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0xE38610F405049F71(Local_90.f_12[0])))
								{
									if (BitTest(Local_90.f_0, 7))
									{
										unk_0x0B0C9A0F9AAEB7F0(&Local_90, 9);
										Local_90.f_6 = 2;
									}
									else if (BitTest(Local_90.f_0, 14))
									{
										unk_0x0B0C9A0F9AAEB7F0(&Local_90, 9);
										Local_90.f_6 = 2;
									}
									else if (BitTest(Local_90.f_0, 19))
									{
										Local_90.f_6 = 3;
									}
								}
								else
								{
									Local_90.f_6 = 4;
								}
							}
							else
							{
								Local_90.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (!unk_0x27E68848F0E5D7D9(unk_0xC35A3A4C05A4831B(Local_90.f_9[0])))
						{
							Local_90.f_6 = 4;
						}
						else if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
						{
							if (!func_9(Local_90.f_12[0]))
							{
								Local_90.f_6 = 3;
							}
							else if (BitTest(Local_90.f_0, 19))
							{
								Local_90.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (!unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 0))
						{
							Local_90.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_41(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_42()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	if (unk_0x93E08E0F531E2C35())
	{
		if (iLocal_92 >= 32)
		{
			iLocal_92 = 0;
			iLocal_105 = 0;
			unk_0x8744D2E3FC95740E(&uLocal_98, false);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 5);
			unk_0x8744D2E3FC95740E(&Local_90, 5);
			unk_0x8744D2E3FC95740E(&Local_90, 17);
			unk_0x8744D2E3FC95740E(&uLocal_98, 14);
			unk_0x8744D2E3FC95740E(&uLocal_98, 19);
			if (!BitTest(Local_90.f_0, 16))
			{
				if (BitTest(Local_90.f_0, 18))
				{
					if (!BitTest(Local_90.f_0, 4))
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 16);
					}
				}
			}
			if (func_45(&(Local_90.f_21)))
			{
				if (!BitTest(Local_90.f_0, 12))
				{
					if (func_39(&(Local_90.f_21), 360000, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 12);
					}
					if (!BitTest(Local_90.f_0, 15))
					{
						if (func_39(&(Local_90.f_21), 240000, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_90, 15);
						}
					}
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 9);
				}
			}
		}
		iVar0 = iLocal_92;
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			uVar3 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			bVar2 = uVar3;
			if (BitTest(uLocal_98, 5))
			{
				if (Local_95[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x8744D2E3FC95740E(&uLocal_98, 5);
				}
			}
			if (!BitTest(Local_90.f_0, 0))
			{
				if (BitTest(Local_95[iVar0 /*3*/], 0))
				{
					iLocal_105++;
				}
			}
			else if (BitTest(Local_95[iVar0 /*3*/], 2))
			{
				if (!BitTest(Local_90.f_0, 17))
				{
					if (!BitTest(Local_90.f_7, bVar2))
					{
						if (Local_95[iVar0 /*3*/].f_2 > 4)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_90.f_7), bVar2);
							unk_0x0B0C9A0F9AAEB7F0(&Local_90, 17);
						}
					}
				}
				if (!BitTest(Local_90.f_0, 5))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Local_90, 5);
				}
				if (!BitTest(Local_90.f_0, 4))
				{
					if (BitTest(Local_95[iVar0 /*3*/], 1))
					{
						Local_90.f_8 = uVar3;
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 4);
						unk_0x8744D2E3FC95740E(&uLocal_98, 15);
						unk_0x8744D2E3FC95740E(&Local_90, 18);
					}
				}
				if (!BitTest(Local_90.f_0, 4))
				{
					if (!BitTest(Local_90.f_0, 18))
					{
						if (BitTest(Local_95[iVar0 /*3*/], 7))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_90, 18);
						}
					}
				}
				if (BitTest(uLocal_98, 9))
				{
					if (BitTest(Local_95[iVar0 /*3*/], 5))
					{
						unk_0x8744D2E3FC95740E(&uLocal_98, 9);
					}
				}
				if (!BitTest(uLocal_98, 14))
				{
					if (BitTest(Local_95[iVar0 /*3*/], 6))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 14);
					}
				}
				if (!BitTest(uLocal_98, 20))
				{
					if (BitTest(Local_95[iVar0 /*3*/], 8))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
			{
				func_44(iVar1);
			}
			iVar1++;
		}
		iLocal_92++;
		if (iLocal_92 >= 32)
		{
			if (!BitTest(Local_90.f_0, 16))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
				{
					if (func_41(Local_90.f_9[0]))
					{
						if (!BitTest(Local_90.f_0, 4))
						{
							if (BitTest(uLocal_98, 15))
							{
								if (!func_45(&uLocal_103))
								{
									func_46(&uLocal_103, 0, 0);
								}
								else if (func_39(&uLocal_103, 2000, 0))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Local_90, 16);
								}
							}
						}
					}
				}
			}
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, false);
			if (!BitTest(Local_90.f_0, 0))
			{
				if (iLocal_105 >= 1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&Local_90, false);
				}
			}
			if (!BitTest(Local_90.f_0, 14))
			{
				if (BitTest(uLocal_98, 14))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Local_90, 14);
				}
			}
			if (!BitTest(Local_90.f_0, 19))
			{
				if (BitTest(uLocal_98, 20))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Local_90, 19);
				}
			}
			if (!BitTest(Local_90.f_0, 6))
			{
				if (BitTest(uLocal_98, 5))
				{
					if (Local_90.f_2 > 1 && Local_90.f_2 <= 7)
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 6);
					}
					else if (BitTest(Local_90.f_0, 10))
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 6);
					}
				}
			}
			if (BitTest(Local_90.f_0, 17))
			{
				unk_0x8744D2E3FC95740E(&Local_90, 17);
				unk_0x8744D2E3FC95740E(&Local_90, 15);
				unk_0x8744D2E3FC95740E(&Local_90, 12);
				func_43(&(Local_90.f_21));
				func_46(&(Local_90.f_21), 0, 0);
			}
			if (!BitTest(Local_90.f_0, 11))
			{
				if (BitTest(Local_90.f_0, 12))
				{
					if (BitTest(uLocal_98, 9))
					{
						unk_0x0B0C9A0F9AAEB7F0(&Local_90, 11);
					}
				}
			}
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_44(int iParam0)
{
	if (unk_0x93E08E0F531E2C35())
	{
		if (!BitTest(Local_90.f_0, 7))
		{
			if (BitTest(Local_95[iParam0 /*3*/], 3))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Local_90, 7);
			}
		}
	}
}

bool func_45(var uParam0)
{
	return uParam0->f_1;
}

void func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

int func_47(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_48(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_46(uParam0, 0, 0);
		}
	}
}

int func_49(int iParam0)
{
	if (func_51(iParam0))
	{
		if (!func_50(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_51(int iParam0)
{
	if (Global_2657971[iParam0 /*465*/].f_219 == 0)
	{
		return 0;
	}
	return 1;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_53(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_53(int iParam0)
{
	return func_54(iParam0);
}

var func_54(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

void func_55()
{
	func_373();
	func_370();
	if (BitTest(Local_90.f_0, 10))
	{
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6)
		{
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_90.f_0, 4))
	{
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 <= 6)
		{
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_90.f_0, 16))
	{
		if (!BitTest(Local_90.f_0, 4))
		{
			if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 <= 6)
			{
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
				Local_94.f_3 = 1141680977;
				func_368(Local_94, func_369(1));
			}
		}
	}
	if (BitTest(Local_90.f_0, 11))
	{
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 <= 6)
		{
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
			Local_94.f_3 = 1141680977;
			func_368(Local_94, func_369(1));
		}
	}
	if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 > 0)
	{
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6)
		{
			if ((((func_52(unk_0x259BE71D8A81D4FA(), 1, 0) || func_367()) || func_366() > 0) || func_50(unk_0x259BE71D8A81D4FA(), 1)) || func_365())
			{
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 > 0)
	{
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6)
		{
			if (func_363(unk_0x259BE71D8A81D4FA()))
			{
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
	{
		case 0:
			if (BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 0))
			{
				if (BitTest(Local_90.f_0, 3))
				{
					if (!BitTest(Local_90.f_0, 15))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 2);
						func_362(11, 1);
						Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 3;
					}
					else
					{
						Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_361(Local_90.f_5))
			{
				func_360(Local_90.f_5);
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_359())
			{
				if (func_235())
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
					func_233(88, 1);
					func_232();
				}
				else if (BitTest(uLocal_98, 8))
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
				}
			}
			else if (func_221())
			{
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
			}
			else
			{
				if (BitTest(uLocal_98, 8))
				{
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
				}
				if (BitTest(Local_90.f_0, 15))
				{
					func_207(12, 116);
					Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 6;
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
				}
			}
			break;
		
		case 5:
			if (Local_90.f_5 == 0)
			{
				func_64();
			}
			break;
		
		case 6:
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
			unk_0x8744D2E3FC95740E(&uLocal_98, 3);
			unk_0x8744D2E3FC95740E(&uLocal_98, 4);
			iLocal_97 = 0;
			func_207(12, 116);
			if (unk_0xC450B06E5AAA0985(Global_1928409))
			{
				unk_0xFE54B8568B2ABD12(&Global_1928409);
			}
			func_63(&Local_110);
			func_56();
			func_362(11, 0);
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_90.f_2 == 0 && !BitTest(Local_90.f_0, 10))
			{
				Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_56()
{
	if (!func_62())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574765.f_9)
	{
		return;
	}
	func_57();
}

void func_57()
{
	func_59();
	func_58(0);
}

void func_58(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x76CD105BCAC6EB9F();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = unk_0x7E3F74F641EE6B27();
		Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_59()
{
	if (!func_61())
	{
	}
	if (func_62())
	{
		unk_0x7C59282918D59E1B(&(Global_1574765.f_12));
		func_60();
		unk_0xD4C961FBE468D19D();
	}
}

void func_60()
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x511D14ED2DA887E1(Global_1574765.f_52);
			return;
		
		case 2:
			unk_0x511D14ED2DA887E1(Global_1574765.f_52);
			unk_0x511D14ED2DA887E1(Global_1574765.f_53);
			return;
		
		case 3:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 4:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 5:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 6:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 7:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 8:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 9:
			unk_0xB993F5B7A74B2A85(&(Global_1574765.f_16));
			return;
		
		case 10:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			return;
		
		case 12:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 13:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 11:
			unk_0xB993F5B7A74B2A85(&(Global_1574765.f_16));
			return;
		
		case 14:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 15:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 17:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_48));
			return;
		
		case 16:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 19:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 18:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_48));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

int func_61()
{
	if (!func_62())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574765.f_12));
	func_60();
	return unk_0x96DEE7666C9409E5();
}

int func_62()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

void func_63(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_64()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
	{
		if (!func_41(Local_90.f_9[0]))
		{
			if (unk_0xC450B06E5AAA0985(Global_1928409))
			{
				if (func_206() || func_205())
				{
					unk_0xF55F62DA99DB0C2F(Global_1928409, 0);
				}
				else
				{
					unk_0xF55F62DA99DB0C2F(Global_1928409, 4);
				}
			}
			else
			{
				Global_1928409 = unk_0x18E23E031A9B798F(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]));
				unk_0x61183D6239A9D7B8(Global_1928409, 1);
				unk_0x5D3946F818C6B331(Global_1928409, 0f);
			}
			if (unk_0xC450B06E5AAA0985(Local_110.f_0))
			{
				if (func_206() || func_205())
				{
					unk_0xF55F62DA99DB0C2F(Local_110.f_0, 0);
				}
				else
				{
					unk_0xF55F62DA99DB0C2F(Local_110.f_0, 4);
				}
				if (!BitTest(uLocal_98, 10))
				{
					unk_0x594D5D0D7071B0DE(Local_110.f_0, "FM_GDM_BLP");
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 10);
				}
			}
			if (unk_0xC450B06E5AAA0985(Local_110.f_1))
			{
				if (func_206() || func_205())
				{
					unk_0xF55F62DA99DB0C2F(Local_110.f_1, 0);
				}
				else
				{
					unk_0xF55F62DA99DB0C2F(Local_110.f_1, 4);
				}
				if (!BitTest(uLocal_98, 12))
				{
					unk_0x594D5D0D7071B0DE(Local_110.f_1, "FM_GDM_BLP");
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 12);
				}
			}
			if (!BitTest(uLocal_98, 6))
			{
				if (!BitTest(Global_2621446, 7) && !func_201(unk_0x259BE71D8A81D4FA(), 0, -1))
				{
					if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
					{
						if (!func_206())
						{
							func_195("FM_GDM_KIL", 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 6);
					}
				}
			}
			else if (BitTest(Global_2621446, 7))
			{
				func_56();
				unk_0x8744D2E3FC95740E(&uLocal_98, 6);
			}
			else if (func_194())
			{
				func_56();
				unk_0x8744D2E3FC95740E(&uLocal_98, 6);
			}
			else if (func_201(unk_0x259BE71D8A81D4FA(), 0, -1))
			{
				func_56();
				unk_0x8744D2E3FC95740E(&uLocal_98, 6);
			}
		}
		else if (BitTest(uLocal_98, 6))
		{
			func_56();
			unk_0x8744D2E3FC95740E(&uLocal_98, 6);
		}
		if (!BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 1))
		{
			iVar1 = unk_0x7B8DC32252146679(Local_90.f_9[0], &uVar0);
			if (iVar1 == unk_0x259BE71D8A81D4FA())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), true);
				iVar2 = func_191(func_193(unk_0x259BE71D8A81D4FA(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = system::round((Global_262145.f_3932 * IntToFloat(iVar3)));
				func_148(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2406 != 0f)
				{
					iVar4 = system::round(Global_262145.f_2406);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2402 != 0f)
				{
					iVar5 = system::round(Global_262145.f_2402);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0xC5935DFB3F39785A(iVar6, iVar7 + 1) * 100;
				iVar8 = func_147(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_81(&iVar8, 1);
				if (func_80())
				{
					if (iVar8 > 0)
					{
						func_68(joaat("service_earn_lester_target_kill"), iVar8, &iVar9, 0, 0, 0);
						Global_4535950[iVar9 /*85*/] = -1146479277;
					}
				}
				else
				{
					unk_0x830CE9F43780AC92(iVar8, -1146479277);
				}
				func_66(5, iVar8);
			}
			else if (iVar1 != func_65())
			{
				if (unk_0x762604C40829DB72(iVar1))
				{
					if (!BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 7))
					{
						if (!unk_0xCCD470854FB0E643(iVar1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_65()
{
	return -1;
}

void func_66(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 != -1)
		{
			if (func_67())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119)
				{
					iParam1 = Global_262145.f_7119;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_67()
{
	if (unk_0x761778199FE1211C() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_80())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_69(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_69(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_69(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_69(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_19()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_76(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_75(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_70(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_71(iParam0);
	}
}

void func_71(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_74(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_72(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_72(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_73(&(uParam0->f_14));
	func_73(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_73(var uParam0)
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

int func_74(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_75(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_76(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_80())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_77(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_77(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_79(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_78();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_78()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_79(bool bParam0)
{
	var uVar0;
	
	if (func_20(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_80()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_146())
		{
			if (func_145(0))
			{
				if (!func_141(0))
				{
					if (unk_0x762604C40829DB72(func_140()))
					{
						if (func_139() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_139());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_137(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_86("GB_BCUT_TICK1", func_140(), iVar0, 0, 0, 1);
						}
						func_85(20);
						func_82(func_140(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_82(bool bParam0, int iParam1, int iParam2)
{
	struct<9> Var0;
	
	if (func_393(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = unk_0x259BE71D8A81D4FA();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_84(bParam0);
		func_83(&(Var0.f_7), &(Var0.f_8));
		unk_0x71A6F836422FDD2B(1, &Var0, 9, func_79(bParam0), Var0.f_0);
	}
}

void func_83(var uParam0, var uParam1)
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_84(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_512;
}

void func_85(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5249.f_7[iVar0]), bVar1);
}

int func_86(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(iParam1), 64);
		}
		if (unk_0xD6F9DEE4765092A9(&Var1))
		{
		}
		unk_0xCCDB0041859B85A6(sParam0);
		unk_0x4E5A3D96808F7F84(func_93(iParam1, -2, 1, 0, 0));
		unk_0x60D332F23943B34F(func_91(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x4E5A3D96808F7F84(iParam3);
		}
		unk_0x511D14ED2DA887E1(iParam2);
		iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
		func_87(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_87(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_90() || !unk_0x834C960822A4683F()) || !func_17(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_88(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_89(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_90()
{
	return unk_0x087611B922B50F13(-1762644250);
}

var func_91(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_92(&cVar0);
}

var func_92(char[4] cParam0)
{
	return cParam0;
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (!func_20(iParam0))
	{
		return 1;
	}
	if (func_363(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_363(unk_0x259BE71D8A81D4FA()) || (func_136() && func_135())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		uVar1 = func_134();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_393(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_132(iParam1, iParam0, 0);
							}
							else
							{
								return func_108(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_108(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_132(iParam1, iParam0, 0);
				}
				else
				{
					return func_94(0, -1, 0);
				}
			}
			else
			{
				return func_94(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_132(iParam1, iParam0, 0);
		}
		else
		{
			return func_108(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_108(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_94(bool bParam0, int iParam1, bool bParam2)
{
	return func_95(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_95(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(iParam0);
	if ((func_107() || (func_106() && func_104())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_103(iParam2, iVar0);
		}
		else
		{
			return func_103(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_100(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_99(1);
				}
				else
				{
					return func_99(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_96(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_96(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_99(1);
	}
	return func_99(0);
}

int func_96(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_98(iParam0, iParam1, iParam3);
	if (func_97(Global_4718592.f_127178, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_100(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_99(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_393(iVar1, 1, 1) || func_17(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_102(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(uVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_102(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_98(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_104()
{
	if (func_105())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_105()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_106()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_107()
{
	if (func_105() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_117())
			{
				iVar3 = func_113(iParam0);
				if (!iVar3 == -1)
				{
					return func_111(iVar3);
				}
			}
			if ((func_110(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_100(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_99(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_109(1);
			}
			else
			{
				return func_95(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_99(1);
			}
			else
			{
				return func_95(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_113(iParam0);
	if (!iVar4 == -1)
	{
		return func_111(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_109(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_112(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_112(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_113(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_115(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_114(iParam0)];
		}
	}
	return -1;
}

int func_114(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_65();
}

int func_115(int iParam0, bool bParam1)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_116(iParam0))
		{
			return 0;
		}
	}
	return func_20(Global_1887305[iParam0 /*610*/].f_10);
}

int func_116(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_117()
{
	if ((((((((func_131() || func_130()) || func_24()) || func_129()) || func_128()) || func_126()) || func_124()) || func_121()) || func_118())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	return func_119(Global_4718592.f_127178);
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_120(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_121()
{
	return func_122(Global_4718592.f_127178);
}

int func_122(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_123(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_124()
{
	return func_125(Global_4718592.f_127178);
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_126()
{
	return func_127(Global_4718592.f_127178);
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_128()
{
	return Global_2684504.f_24;
}

var func_129()
{
	return Global_2684504.f_21;
}

var func_130()
{
	return Global_2684504.f_18;
}

var func_131()
{
	return Global_2684504.f_17;
}

int func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_117())
	{
		iVar2 = func_113(iParam1);
		if (!iVar2 == -1)
		{
			return func_111(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_95(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_133(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_100(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_109(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_134()
{
	return Global_2621446.f_2;
}

var func_135()
{
	return BitTest(Global_2621446, 4);
}

var func_136()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_138(1);
	}
	else
	{
		iVar1 = func_138(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_138(bool bParam0)
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_12843;
}

int func_139()
{
	return Global_262145.f_12842;
}

bool func_140()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

bool func_141(bool bParam0)
{
	return func_142(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_142(int iParam0, bool bParam1)
{
	return func_143(iParam0, bParam1, 1);
}

int func_143(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_144(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_20(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_145(bool bParam0)
{
	return func_115(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_146()
{
	return func_116(unk_0x259BE71D8A81D4FA());
}

int func_147(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (system::to_float(iParam0) * Global_262145);
				iParam0 = system::round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_149(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_150(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_181();
	if (func_180(sParam2))
	{
	}
	if (func_179())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_176(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_175(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_173(0, &iVar1);
					break;
				
				case 3:
					func_173(1, &iVar1);
					break;
				
				case 1:
					func_170(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_169(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_159((func_168(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_2 != -1)
				{
					func_169(1166, iVar1, -1);
				}
				func_155(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_151((func_153(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_151((func_153(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_151(int iParam0)
{
	if (func_179())
	{
		Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_5 = iParam0;
		func_152(joaat("mpply_globalxp"), iParam0);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_153(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_393(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_154(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_154(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_155(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_158(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_156(func_157(&Var0));
			if (iVar1 == 0)
			{
				func_152(joaat("mpply_crew_local_xp_0"), (func_154(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar1 == 1)
			{
				func_152(joaat("mpply_crew_local_xp_1"), (func_154(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar1 == 2)
			{
				func_152(joaat("mpply_crew_local_xp_2"), (func_154(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar1 == 3)
			{
				func_152(joaat("mpply_crew_local_xp_3"), (func_154(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar1 == 4)
			{
				func_152(joaat("mpply_crew_local_xp_4"), (func_154(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_156(int iParam0)
{
	if (iParam0 == func_154(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_154(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_154(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_154(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_154(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_157(var uParam0)
{
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

struct<13> func_158(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	if (func_179())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_167(640, -1))
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_167(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_166(unk_0x259BE71D8A81D4FA()))
		{
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_6 = func_191(iParam0, 1);
		}
		func_163(640, iParam0, -1, 1);
		func_163(641, func_191(iParam0, 1), -1, 1);
		func_160(-1109644434, 7, 0);
	}
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_162(iParam1, iParam2))
	{
		iVar0 = func_161();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_162(int iParam0, var uParam1)
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_164(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_164(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_165(uParam1));
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_166(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_167(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_164(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_167(640, -1);
			}
			else if (func_166(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_167(640, -1);
	}
	return 0;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_167(iParam0, func_165(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_163(iParam0, iVar0, iParam2, 1);
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		iVar4 = unk_0xF0C9E5565CB32F4B(iVar0);
		if (unk_0x7206AEB20960CCC8(iVar4))
		{
			iVar5 = unk_0x4470BE79F5771783(iVar4);
			if (unk_0x1864096A95E36EBA(iVar5) != -1)
			{
				if (unk_0x1864096A95E36EBA(iVar5) == iVar1 || func_100(unk_0x1864096A95E36EBA(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_172(unk_0x259BE71D8A81D4FA(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_171(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_171(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_171(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_172(int iParam0, int iParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_158(iParam0) };
		Global_2707320 = { func_158(iParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2707307))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2707320))
			{
				unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307);
				unk_0xC07B1AA6155EC337(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_173(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x95C7A22DBE7AEF4C())
		{
			iVar3 = iVar0;
			if (unk_0x7206AEB20960CCC8(iVar3))
			{
				iVar4 = unk_0x4470BE79F5771783(iVar3);
				if (func_393(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_172(unk_0x259BE71D8A81D4FA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_393(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_174(unk_0x259BE71D8A81D4FA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_172(unk_0x259BE71D8A81D4FA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_171(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_171(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_174(int iParam0, int iParam1)
{
	return system::vdist(func_22(iParam0), func_22(iParam1));
	return 0f;
}

int func_175(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_171(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_176(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_168(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_168(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_177(8000, 0, 0) > 0)
	{
		if (func_177(8000, 0, 0) < (iParam0 + func_168(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_177(8000, 0, 0) - func_168(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_177(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_178(iParam0);
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_179()
{
	return 1;
}

int func_180(char* sParam0)
{
	if (unk_0xFF692AB7350A74D7(sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(sParam0, "") || unk_0x1B79E937E91F40C3(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	int iVar0;
	
	if (func_190(unk_0x259BE71D8A81D4FA()) || func_189(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_10125 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125;
		}
	}
	else if (func_187() || func_183(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_22930 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930;
		}
	}
	else if (func_182(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169;
		}
	}
	else if (Global_262145.f_7168 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168;
	}
	return iVar0;
}

bool func_182(int iParam0)
{
	return iParam0 == 89;
}

int func_183(int iParam0)
{
	return func_184(func_185(iParam0));
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_186(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_186(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_187()
{
	if (unk_0x834C960822A4683F())
	{
		return func_24();
	}
	return func_188(Global_4718592.f_127178);
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_189(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_190(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

int func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_192(iParam0, 0);
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_178(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_178(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_168(iParam0);
}

bool func_194()
{
	return Global_76498;
}

void func_195(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_199(sParam0))
	{
		return;
	}
	func_57();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574765.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_198();
	func_197(bParam1);
	func_196();
}

void func_196()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), true);
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574765.f_59), false);
}

void func_198()
{
	Global_1574765.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
}

bool func_199(char* sParam0)
{
	if (!func_62())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_200(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12));
}

bool func_200(char* sParam0)
{
	if (!func_62())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
}

int func_201(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1845281[iParam0 /*883*/].f_268.f_35 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
	{
		if (iParam2 == -1 || func_204(Global_2657971[iParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
			{
				return func_202(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return iParam0;
	}
	if (func_203(iParam0) != -1)
	{
		iVar0 = func_204(func_203(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_115(iParam0, 0))
			{
				return func_114(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_65();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_65();
}

int func_203(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_393(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_393(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

var func_205()
{
	return Global_2647061.f_1870;
}

int func_206()
{
	return 1;
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_220(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2624658[iVar0 /*46*/].f_4 && Global_2624658[iVar0 /*46*/])
	{
		Global_2624658[iVar0 /*46*/].f_4 = 1;
		func_211();
	}
	func_208(iVar0);
}

void func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1680128)
	{
		return;
	}
	if (Global_2624658[iParam0 /*46*/].f_26 != -1)
	{
		unk_0xFE3A52C5B7AE3101(Global_2624658[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1680128)
	{
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_210(iVar0);
	Global_1680128 = (Global_1680128 - 1);
	if (Global_1680099)
	{
		if (Global_1680097 > 0)
		{
			func_209();
		}
	}
}

void func_209()
{
	Global_1680099 = 0;
}

void func_210(int iParam0)
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_65();
	Global_2624658[iParam0 /*46*/].f_6 = 145;
	Global_2624658[iParam0 /*46*/].f_7 = 1;
	Global_2624658[iParam0 /*46*/].f_8 = -1;
	Global_2624658[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_10), "", 64);
	Global_2624658[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_27), "", 32);
	Global_2624658[iParam0 /*46*/].f_35 = -1;
	Global_2624658[iParam0 /*46*/].f_36 = -1;
	Global_2624658[iParam0 /*46*/].f_37 = 0;
	Global_2624658[iParam0 /*46*/].f_39 = 0;
	Global_2624658[iParam0 /*46*/].f_40 = -1;
	Global_2624658[iParam0 /*46*/].f_41 = 0;
	Global_2624658[iParam0 /*46*/].f_42 = 0;
	Global_2624658[iParam0 /*46*/].f_43 = 0;
	Global_2624658[iParam0 /*46*/].f_45 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		Global_2624658[iParam0 /*46*/].f_38 = unk_0x7E3F74F641EE6B27();
	}
}

void func_211()
{
	Global_23349 = (Global_23349 - 1);
	if (Global_23349 < 0)
	{
		func_219("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_212();
}

void func_212()
{
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_213(int iParam0)
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
	func_217();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_216(14))
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
								func_215(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
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
								func_215(&(Global_8807[iVar1 /*15*/]));
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
								func_215(&(Global_8807[iVar1 /*15*/]));
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
								func_215(&(Global_8807[iVar1 /*15*/]));
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
								func_215(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_214(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_214(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xD6F9DEE4765092A9(uParam7))
	{
		func_215(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_215(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_215(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_215(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_215(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_215(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

bool func_216(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_217()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_218(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_219(char* sParam0)
{
	if (Global_23349 != 0)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam0))
		{
		}
		Global_23349 = 0;
	}
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680128)
	{
		if (!Global_2624658[iVar0 /*46*/].f_7)
		{
			if (Global_2624658[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_221()
{
	if (!BitTest(uLocal_98, 17))
	{
		func_223(12, 116, "", 1, 0, 1, 0);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 17);
	}
	else if (!BitTest(uLocal_98, 18))
	{
		if (func_222(12, 116))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_220(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2624658[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_208(iVar0);
	Global_2625824 = unk_0x1DD05E817C89C737() + 1500;
	return 1;
}

void func_223(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_220(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_208(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_224(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_224(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_65();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_231())
		{
			return;
		}
	}
	iVar2 = Global_1680128;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2624658[iVar2 /*46*/] = { Global_2624658[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1680128++;
	if (Global_1680128 > 12)
	{
		Global_1680128 = 12;
	}
	iVar4 = 0;
	if (Global_2624658[1 /*46*/].f_1)
	{
		Global_2624658[0 /*46*/] = { Global_2624658[1 /*46*/] };
		Global_2624658[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2624658[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2624658[iVar4 /*46*/].f_1 = 0;
	}
	Global_2624658[iVar4 /*46*/] = 0;
	Global_2624658[iVar4 /*46*/].f_2 = 0;
	Global_2624658[iVar4 /*46*/].f_3 = 0;
	Global_2624658[iVar4 /*46*/].f_4 = 0;
	Global_2624658[iVar4 /*46*/].f_5 = iVar0;
	Global_2624658[iVar4 /*46*/].f_6 = iVar1;
	Global_2624658[iVar4 /*46*/].f_7 = bParam2;
	Global_2624658[iVar4 /*46*/].f_8 = iParam0;
	Global_2624658[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2624658[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2624658[iVar4 /*46*/].f_35 = iParam6;
	Global_2624658[iVar4 /*46*/].f_36 = iParam7;
	Global_2624658[iVar4 /*46*/].f_37 = 0;
	Global_2624658[iVar4 /*46*/].f_38 = unk_0x7E3F74F641EE6B27();
	Global_2624658[iVar4 /*46*/].f_39 = uParam5;
	Global_2624658[iVar4 /*46*/].f_40 = Global_2625823;
	Global_2624658[iVar4 /*46*/].f_44 = iParam8;
	Global_2624658[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2624658[iVar4 /*46*/].f_9 = func_227();
	}
	else if (iParam0 == 272)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2625823++;
	func_226();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_225())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_158(iVar0) };
				iVar8 = unk_0x9E0B6B766CF810E5(&Var7);
				if (iVar8 != -1)
				{
					Global_2624658[iVar4 /*46*/].f_41 = iVar8;
					Global_2624658[iVar4 /*46*/].f_42 = 1;
					Global_2624658[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_225()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_226()
{
	Global_1680101 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 30000);
}

int func_227()
{
	char cVar0[24];
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_230() };
	if (unk_0xD6F9DEE4765092A9(&cVar0) || unk_0x1B79E937E91F40C3(".", &cVar0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_228(135, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_228(136, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_228(137, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_228(138, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_228(139, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_228(140, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_228(141, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(&cVar0) && !unk_0x1B79E937E91F40C3(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0)
	{
		return -1;
	}
	uVar3 = func_167(12480, -1);
	bVar4 = false;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		bVar4 = iVar1 * 3;
		if (bVar4 != -1)
		{
			if (!BitTest(uVar3, bVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

var func_228(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_229(iParam0, iParam1);
	return unk_0xCEA81DACD6DA3ADB(uVar0, -1);
}

var func_229(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_165(uParam1));
}

struct<6> func_230()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD6F9DEE4765092A9(&(Global_1934536.f_10)))
	{
		iVar2 = func_167(12481, -1);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = unk_0xEAA437DE2A801E8A(iVar2);
			if (iVar1 != -1)
			{
				Var0 = { Global_794744.f_154855[Global_794744.f_135107[iVar1 /*13*/].f_10 /*6*/] };
			}
			if (unk_0xD6F9DEE4765092A9(&Var0))
			{
			}
		}
		Global_1934536.f_10 = { Var0 };
		return Var0;
	}
	return Global_1934536.f_10;
}

bool func_231()
{
	return Global_1575036 == 10;
}

void func_232()
{
	var uVar0;
	
	uVar0 = func_167(1304, -1);
	unk_0x0B0C9A0F9AAEB7F0(&uVar0, 8);
	func_163(1304, uVar0, -1, 1);
}

void func_233(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_234() /*5570*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_234() /*5570*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_234() /*5570*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_234() /*5570*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_234() /*5570*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_234() /*5570*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_234() /*5570*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_234() /*5570*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_234() /*5570*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_234() /*5570*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_234() /*5570*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_234() /*5570*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_234() /*5570*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_234() /*5570*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_234() /*5570*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_234() /*5570*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_234() /*5570*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_234() /*5570*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_234()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_235()
{
	if (!BitTest(uLocal_98, 4))
	{
		if (!BitTest(uLocal_98, 8) || (BitTest(uLocal_98, 8) && func_39(&uLocal_101, 600000, 0)))
		{
			if (func_241(Local_90.f_5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 4);
				unk_0x8744D2E3FC95740E(&uLocal_98, 8);
			}
		}
	}
	else if (!func_240())
	{
		if (!BitTest(uLocal_98, 19))
		{
			if (func_239())
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 19);
			}
			else if (!func_238() && !func_236())
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 8);
				unk_0x8744D2E3FC95740E(&uLocal_98, 4);
				func_46(&uLocal_101, 0, 0);
				iLocal_97 = 0;
			}
		}
		else if (!func_236())
		{
			if (func_238())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 8);
		unk_0x8744D2E3FC95740E(&uLocal_98, 4);
		func_46(&uLocal_101, 0, 0);
		iLocal_97 = 0;
	}
	return 0;
}

bool func_236()
{
	return func_237();
}

bool func_237()
{
	return Global_1663588.f_40 == 3;
}

bool func_238()
{
	return Global_1663588.f_57.f_1;
}

int func_239()
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

int func_240()
{
	if (Global_23302)
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	switch (iLocal_97)
	{
		case 0:
			if (func_352(0, 1, 1, 1))
			{
				if (!func_351(12, -1))
				{
					func_343(iParam0);
					iLocal_97++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_342(iParam0);
			func_341(iParam0);
			if (func_242(&uLocal_117, iVar0, "FM_1AU", sLocal_282, 0, 0))
			{
				unk_0x8744D2E3FC95740E(&uLocal_98, 11);
				iLocal_97++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_242(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_339())
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_243(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_243(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD6F9DEE4765092A9(sParam2))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam3))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
	iVar1 = func_337(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		iVar2 = unk_0x70E57E9927B6BA58(sParam7);
	}
	if (func_336(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_331(uParam6))
	{
		return 0;
	}
	if (func_328(iVar0, iVar1, iVar2))
	{
		if (func_327())
		{
			return 0;
		}
		func_326();
		return func_250(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_249(iParam4))
	{
		return 0;
	}
	func_244(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_244(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_245(iParam4);
	func_326();
	Global_1663588.f_40.f_13 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 7000);
}

void func_245(int iParam0)
{
	if (func_248(iParam0))
	{
		func_247();
		return;
	}
	func_246();
}

void func_246()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_247()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_249(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_250(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_325();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_322(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_319(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_322(uParam0, sParam3, sParam4);
		}
		return func_302(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_301(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_289(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_288(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_251(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_251(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_287();
	bVar0 = true;
	if (func_253(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_252(120000);
		return 1;
	}
	return 0;
}

void func_252(int iParam0)
{
	Global_1663588.f_40.f_11 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_253(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_65();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_281(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_280(sParam5, bParam6, &iVar3);
	uVar5 = func_278(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_277(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_257(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_256();
	}
	func_287();
	func_255();
	func_254();
	return 1;
}

void func_254()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_255()
{
	Global_1663588.f_40 = 3;
}

void func_256()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 8);
}

int func_257(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_258(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_258(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_270();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_4543069 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_269() == 0)
	{
		func_267();
		return 0;
	}
	func_266(Global_4543068);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/]), sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}
	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = uParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = uParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = uParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = uParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	func_270();
	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
		
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case 0:
				func_265(0);
				break;
			
			case 1:
				func_265(1);
				break;
			
			case 2:
				func_265(2);
				break;
			
			case 3:
				func_265(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
			
			case 0:
				Global_4543069 = 1;
				break;
			
			case 2:
				Global_4543069 = 1;
				break;
			
			case 1:
				Global_4543069 = 1;
				break;
			}
	}
	Global_23355[Global_4543068] = 0;
	if (bParam10)
	{
		func_270();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_264())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_259(iParam0, sParam1, bVar1, func_263(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_259(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_260())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	unk_0x7114D68882DD5DFB(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_260()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_65())
	{
		return 0;
	}
	if (func_261(unk_0x259BE71D8A81D4FA()))
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

bool func_261(int iParam0)
{
	return func_262(iParam0, 20);
}

var func_262(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_263(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

bool func_264()
{
	return Global_1575083;
}

void func_265(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_266(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_4541819[iParam0 /*104*/].f_18 = uVar0;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_267()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_268(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_268(struct<6> Param0, struct<6> Param1)
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

int func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0)
		{
			Global_4543068 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0 || Global_4541819[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_268(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			{
				Global_4543068 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4543068 == 11)
	{
		return 0;
	}
	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

void func_270()
{
	if (func_216(14))
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
		Global_20930 = func_271();
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

var func_271()
{
	func_272();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_272()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_275(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_274(unk_0x4A8C381C258A124D());
			if (func_273(iVar0) && (!func_216(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_273(Global_113969.f_2366.f_539.f_4321))
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

bool func_273(int iParam0)
{
	return iParam0 < 3;
}

int func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_275(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_275(int iParam0)
{
	if (func_273(iParam0))
	{
		return func_276(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_276(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_277(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_258(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_278(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_279(2, iParam1);
	return iParam0;
}

void func_279(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_280(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return sLocal_16;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_279(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFACCDE46E24AD056(sParam0);
}

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		func_282(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_282(int iParam0, bool bParam1)
{
	if (!func_393(iParam0, 0, 1))
	{
		return;
	}
	if (func_284(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_283(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (!func_393(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1681225[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_285(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_285(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (unk_0xCF3FA9D6B87D2277(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x008C0EB38E4459EE(Global_1681225[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x697995B2B26B6CD4(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1681386)
	{
		Global_1681225[iVar2 /*5*/] = { Global_1681225[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_286(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

void func_287()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_288(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_287();
	bVar0 = false;
	return func_253(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_290(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_290(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_65();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_281(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23347 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_280(sParam5, bParam6, &iVar3);
	uVar5 = func_278(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_300(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_292(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_256();
	}
	func_291();
	func_255();
	func_254();
	return 1;
}

void func_291()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_292(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x8744D2E3FC95740E(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_294(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_293(iParam0) };
			Global_9487 = iParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_293(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_294(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_270();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_299() == 0)
	{
		func_297();
		return 0;
	}
	func_296(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_265(0);
		func_265(2);
		func_265(1);
	}
	else
	{
		func_270();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_265(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_265(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_265(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_265(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_270();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_264())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_295(iParam0, sParam1, bVar1, func_263(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_295(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_260())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	unk_0x7114D68882DD5DFB(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

void func_296(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = uVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_298(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_298(struct<6> Param0, struct<6> Param1)
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

int func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_298(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

int func_300(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 10);
	iVar0 = 3;
	if (func_294(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_293(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	func_291();
	bVar0 = true;
	if (func_290(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_252(120000);
		return 1;
	}
	return 0;
}

int func_302(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_318(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_308(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_307(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_306(1);
		}
		func_305();
		func_255();
		func_304();
		func_303();
		return 1;
	}
	return 0;
}

void func_303()
{
	Global_2749372 = 0;
}

void func_304()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_305()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_306(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8802, false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8802, false);
	}
}

void func_307(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 20);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 20);
	}
}

int func_308(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_317(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam7);
}

int func_309(char* sParam0, int iParam1, bool bParam2)
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
					func_316();
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
		if (func_351(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_315();
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
				func_270();
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
				if (func_314())
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
			if (func_313())
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
			func_312();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_311();
		func_310();
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
		func_316();
	}
	return 0;
}

void func_310()
{
	if (!func_260())
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

void func_311()
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

void func_312()
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

int func_313()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_314()
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

void func_315()
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

void func_316()
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

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_318(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_317(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam7);
}

int func_319(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (func_321(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_320();
		func_305();
		func_255();
		func_304();
		func_303();
		return 1;
	}
	return 0;
}

void func_320()
{
	Global_23304 = 0;
}

bool func_321(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_317(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	StringCopy(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam8);
}

int func_322(var uParam0, char* sParam1, char* sParam2)
{
	if (func_324(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_323();
		func_255();
		func_304();
		return 1;
	}
	return 0;
}

void func_323()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_324(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_317(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_309(sParam2, iParam3, 0);
}

void func_325()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_326()
{
	Global_1663588.f_40 = 1;
}

bool func_327()
{
	return Global_1663588.f_40 == 1;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	if (!func_329(iParam0))
	{
		return 0;
	}
	if (Global_1663588.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663588.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_329(int iParam0)
{
	if (!func_330())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_331(var uParam0)
{
	if (func_335())
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (func_334(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_333())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_332())
		{
			return 0;
		}
	}
	return 1;
}

bool func_332()
{
	return unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1680101);
}

int func_333()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0)
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

bool func_335()
{
	return func_313();
}

int func_336(int iParam0, int iParam1, int iParam2)
{
	if (!func_237())
	{
		return 0;
	}
	return func_328(iParam0, iParam1, iParam2);
}

int func_337(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

bool func_338()
{
	return Global_2746025.f_1;
}

int func_339()
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_340();
}

bool func_340()
{
	return func_335();
}

void func_341(int iParam0)
{
	if (!BitTest(uLocal_98, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_282 = "FMA_KIL1";
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 11);
				break;
			}
	}
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_345(12, 3, 0);
			func_344(&uLocal_117, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_344(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_345(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_270();
		if (iParam1 == 4)
		{
			func_350(iParam0, 0, 1);
			func_350(iParam0, 1, 1);
			func_350(iParam0, 2, 1);
			func_349(iParam0, 0, 1);
			func_349(iParam0, 1, 1);
			func_349(iParam0, 2, 1);
		}
		else
		{
			if (func_348(iParam0, iParam1) == 1 && func_347(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_350(iParam0, iVar0, 1);
			func_349(iParam0, iVar0, 1);
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
						Global_9459[iParam1 /*4*/] = { func_293(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_293(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_346();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_293(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_346();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_293(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_346();
			}
		}
	}
}

void func_346()
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

int func_347(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_348(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_349(int iParam0, int iParam1, int iParam2)
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

void func_350(int iParam0, int iParam1, int iParam2)
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

bool func_351(int iParam0, int iParam1)
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

int func_352(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (func_358())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_52(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_51(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_356())
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (Global_1836444)
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (func_354())
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (Global_2749856)
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	return 1;
}

bool func_353()
{
	return Global_2708056;
}

bool func_354()
{
	return Global_2684504.f_693;
}

bool func_355()
{
	return Global_2684504.f_848;
}

bool func_356()
{
	return Global_2672855.f_2881.f_582;
}

bool func_357()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_358()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_359()
{
	var uVar0;
	
	uVar0 = func_167(1304, -1);
	if (BitTest(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
			{
				Global_2672855.f_3604.f_1[0] = unk_0xE38610F405049F71(Local_90.f_12[0]);
			}
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				Global_2672855.f_3604.f_4[0] = unk_0xC35A3A4C05A4831B(Local_90.f_9[0]);
			}
			break;
	}
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]) && unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_362(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219, bParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219), bParam0);
	}
}

int func_363(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_364())
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

bool func_364()
{
	return BitTest(Global_2621446, 3);
}

bool func_365()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

int func_366()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_194;
}

bool func_367()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

void func_368(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_369(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			bVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (func_393(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_370()
{
	if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 >= 5 && Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6)
	{
		if (BitTest(Local_90.f_0, 4))
		{
			if (!BitTest(uLocal_98, 3))
			{
				if (func_393(Local_90.f_8, 0, 1))
				{
					func_371("FM_TGDM_KIL", Local_90.f_8, 0, 0, 0, 1, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 3);
			}
		}
	}
}

int func_371(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x1864096A95E36EBA(iParam1);
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam1) || iParam3)
	{
		if (func_20(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, unk_0xBD6CA019F46AB947(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, unk_0xBD6CA019F46AB947(iParam1), 64);
			}
			if (unk_0xD6F9DEE4765092A9(&Var2))
			{
			}
			unk_0xCCDB0041859B85A6(sParam0);
			if ((iVar1 != -1 && unk_0x834C960822A4683F()) && iVar1 < 4)
			{
				if (Global_4718592.f_121471[iVar1] != -1)
				{
					unk_0x4E5A3D96808F7F84(func_132(iVar1, iParam1, 0));
				}
				else
				{
					unk_0x4E5A3D96808F7F84(func_93(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				unk_0x4E5A3D96808F7F84(func_93(iParam1, -2, 1, 0, 0));
			}
			unk_0x60D332F23943B34F(func_91(&Var2));
			if (!bParam4)
			{
				iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
			}
			else
			{
				Global_2707307 = { func_158(iParam1) };
				if (unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307))
				{
					iVar3 = 0;
					if (unk_0x1B79E937E91F40C3(&(Global_2707237.f_22), "Leader") && Global_2707237.f_30 == 0)
					{
						iVar3 = 1;
					}
					if (Global_2707237.f_21 > 0)
					{
						iVar4 = 0;
					}
					else
					{
						iVar4 = 1;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_372(&Var2) };
						}
						iVar0 = unk_0x4252EAF1B00ED825(iVar4, unk_0xF05A19B508A1ECF0(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, iVar3, 0, Global_2707237, &Var2, Global_1576240, Global_1576241, Global_1576242);
					}
					else
					{
						iVar0 = unk_0xB262204BCFF28FCC(iVar4, unk_0xF05A19B508A1ECF0(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, iVar3, 0, Global_2707237, Global_1576240, Global_1576241, Global_1576242);
					}
				}
				else
				{
					iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
				}
			}
			func_87(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

struct<16> func_372(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_373()
{
	int iVar0;
	
	iVar0 = unk_0xAE032CEDCF23C6D5();
	if (iLocal_108 != Local_90.f_15)
	{
		iLocal_108 = Local_90.f_15;
		unk_0x552B3BADB43FF551(iLocal_108);
	}
	if (iLocal_109 != Local_90.f_16)
	{
		iLocal_109 = Local_90.f_16;
		unk_0x17C7D9B3979F5759(iLocal_109);
	}
	if (func_393(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		if (!BitTest(Local_95[iVar0 /*3*/], 0))
		{
			if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 0)
			{
				if (func_366() == 0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_95[iVar0 /*3*/]), false);
				}
			}
		}
		else if (BitTest(Local_95[iVar0 /*3*/], 0))
		{
			if ((func_52(unk_0x259BE71D8A81D4FA(), 1, 0) || func_49(unk_0x259BE71D8A81D4FA())) || func_366() > 0)
			{
				func_43(&uLocal_99);
				unk_0x8744D2E3FC95740E(&(Local_95[iVar0 /*3*/]), false);
			}
			else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (!BitTest(uLocal_98, 7))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 7);
						func_381();
					}
				}
				else if (BitTest(uLocal_98, 7))
				{
					unk_0x8744D2E3FC95740E(&uLocal_98, 7);
					if (!func_50(unk_0x259BE71D8A81D4FA(), 0))
					{
						func_379();
					}
				}
			}
		}
		if (!BitTest(Local_95[iVar0 /*3*/], 3))
		{
			if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 > 3 && Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6)
			{
				if (BitTest(Global_2672855.f_3604, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_95[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 > 3)
		{
			if (!BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 5))
			{
				if (func_378(Local_90.f_5))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 5);
				}
			}
			else if (!func_378(Local_90.f_5))
			{
				unk_0x8744D2E3FC95740E(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 5);
			}
			if (!BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 6))
			{
				if (func_375(Local_90.f_5))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 6);
				}
			}
			if (!BitTest(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/], 8))
			{
				if (func_374())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_95[unk_0xAE032CEDCF23C6D5() /*3*/]), 8);
				}
			}
		}
		if (!BitTest(uLocal_98, 13))
		{
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					unk_0x87EDE48547CC8942(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 13);
				}
			}
		}
	}
}

int func_374()
{
	if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
	{
		if (func_9(Local_90.f_12[0]))
		{
			if (unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_90.f_12[0]), 0, 7000) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_90.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (func_376(unk_0xC35A3A4C05A4831B(Local_90.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_376(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), uParam0))
	{
		return 1;
	}
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uParam0))
	{
		return 1;
	}
	if (func_377())
	{
		if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uVar0))
		{
			if (unk_0x0101C509A6E67F99(uVar0))
			{
				uVar1 = unk_0xBD545F8729E9F413(uVar0);
				if (unk_0xFC8BFE4B41177C22(uVar1))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
					{
						if (unk_0x7F420695E3F776FB(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_377()
{
	return Global_1836674;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_379()
{
	if (!Global_1574755)
	{
		return;
	}
	func_380();
}

void func_380()
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_381()
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574755.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574755.f_1));
}

void func_382()
{
	switch (Local_90.f_6)
	{
		case 1:
			if (unk_0x93E08E0F531E2C35())
			{
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
				{
					if (func_9(Local_90.f_12[0]))
					{
						if (!func_41(Local_90.f_9[0]))
						{
							if (unk_0xF4244288C3EF3306(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0xE38610F405049F71(Local_90.f_12[0])))
							{
								if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0)
								{
									unk_0x7C8E9DE09D4AD3FF(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0xE38610F405049F71(Local_90.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x93E08E0F531E2C35())
			{
				if (unk_0x93BF17E19A9F0E9B(Local_90.f_12[0]))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
					{
						if (func_9(Local_90.f_12[0]))
						{
							if (!func_41(Local_90.f_9[0]))
							{
								if (unk_0xF4244288C3EF3306(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0xE38610F405049F71(Local_90.f_12[0])))
								{
									if ((unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0) || BitTest(Local_90.f_0, 9))
									{
										unk_0x7C8E9DE09D4AD3FF(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0xE38610F405049F71(Local_90.f_12[0]), 30f, 786469);
										if (BitTest(Local_90.f_0, 9))
										{
											unk_0x8744D2E3FC95740E(&Local_90, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_leave_any_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_leave_any_vehicle")) != 0)
					{
						if (func_386(Local_90.f_9[0]))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_90.f_9[0]))
							{
								unk_0x092B9247AF00F5CF(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_smart_flee_ped")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), joaat("script_task_smart_flee_ped")) != 0)
						{
							if (func_386(Local_90.f_9[0]))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_90.f_9[0]))
								{
									unk_0xD844F5E50DAB6FF7(unk_0xC35A3A4C05A4831B(Local_90.f_9[0]), unk_0x4A8C381C258A124D(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_90.f_9[0]))
	{
		if ((Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 >= 5 && Local_95[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 < 6) && !func_201(unk_0x259BE71D8A81D4FA(), 0, -1))
		{
			func_383(Local_90.f_9[0], &Local_110, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
		}
		else
		{
			func_63(&Local_110);
		}
	}
}

void func_383(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		if (func_385(0))
		{
			Global_2672855 = unk_0x259BE71D8A81D4FA();
		}
		if (bParam3)
		{
			func_384(unk_0xC35A3A4C05A4831B(uParam0), uParam1, 1, Global_2672855, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_384(unk_0xC35A3A4C05A4831B(uParam0), uParam1, -1, Global_2672855, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (unk_0xC450B06E5AAA0985(*uParam1))
	{
		func_63(uParam1);
	}
}

int func_384(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(iParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x8B185FD7C0308117(iParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(iParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(iParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(iParam0, uParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, uParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(uParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(sParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(sParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(sParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(sParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(sParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_385(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_386(var uParam0)
{
	if (unk_0xB0AB1F334666E337(uParam0))
	{
		return 1;
	}
	if (func_387(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_387(var uParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(uParam0))
	{
		return 0;
	}
	if (func_388(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_388(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

int func_389()
{
	return Local_90.f_1;
}

int func_390(int iParam0)
{
	return Local_95[iParam0 /*3*/].f_1;
}

void func_391()
{
	func_56();
	func_362(11, 0);
	func_207(12, 116);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3604), false);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3604), true);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0xAE032CEDCF23C6D5() > -1)
		{
			Local_95[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x93E08E0F531E2C35())
		{
			if (unk_0x8256312AC2E5471D(Local_90.f_3))
			{
				unk_0x0C2A05549FF0EB55(Local_90.f_3);
			}
			Local_90.f_3 = -1;
		}
	}
	if (unk_0xC450B06E5AAA0985(Global_1928409))
	{
		unk_0xFE54B8568B2ABD12(&Global_1928409);
	}
	unk_0x8744D2E3FC95740E(&uLocal_98, 3);
	unk_0x8744D2E3FC95740E(&uLocal_98, 4);
	iLocal_97 = 0;
	if (unk_0xC450B06E5AAA0985(Local_110.f_0))
	{
		unk_0xFE54B8568B2ABD12(&Local_110);
	}
	func_392();
}

void func_392()
{
	unk_0xBBC29EBE6E1A48FA();
}

int func_393(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_394()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_401())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_399(159))
	{
		if (!func_398())
		{
			return 1;
		}
	}
	if (func_399(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_395() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_395()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_395()
{
	switch (func_397())
	{
		case 0:
			return func_396();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_396()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_397()
{
	return Global_32948;
}

bool func_398()
{
	return Global_2684504.f_700;
}

int func_399(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_400()
{
	return Global_2696172;
}

bool func_401()
{
	return Global_2684504.f_695;
}

void func_402()
{
	system::wait(0);
}

void func_403(struct<21> Param0)
{
	func_406(func_407(Param0.f_0), Param0);
	func_405(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_90, 23, 0);
	unk_0x7B13DC83218D9AF5(&Local_95, 97, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_404())
	{
		func_391();
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3604), false);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3604), true);
}

int func_404()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_401())
		{
			return 0;
		}
		if (func_399(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_405(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_392();
			}
			else
			{
				return 0;
			}
		}
		if (!func_385(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_401())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_399(157))
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_392();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_392();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_392();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_406(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_392();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_408(func_409(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_409(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

