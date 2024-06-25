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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<3> Local_41 = { 0, 0, 0 } ;
	bool bLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	float fLocal_53 = 0f;
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	struct<5> Local_58[31];
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<5> Local_66[14];
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 16;
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
	struct<3> Local_271 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	bool bLocal_280 = 0;
	struct<33> Local_281 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_282 = 1;
	struct<2> Local_283 = { 0, 5 } ;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 5;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
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
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0,0375f;
	fLocal_25 = 0,17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_47 = -1;
	iLocal_50 = -1;
	fLocal_53 = 0,5f;
	fLocal_54 = 0f;
	iLocal_60 = 1;
	fLocal_67 = 160f;
	iLocal_71 = 55000;
	Local_74 = { 30f, 30f, 5f };
	iLocal_100 = -1;
	Local_271 = { -458,4085f, -984,6459f, 22,5892f };
	Local_272 = { -458,1934f, -995,4897f, 22,7427f };
	Local_72 = { ScriptParam_283.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_182();
	}
	if (unk_0x5295501D0862870D() > 18 || unk_0x5295501D0862870D() < 5)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_140(Local_72, -1, 0, 0, 0))
	{
		func_137(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x173751E886F8E9AB())
		{
			if (!func_136())
			{
				if (func_135())
				{
					func_182();
				}
			}
			unk_0xECF30459397D5190("RE_CA", 0);
			switch (iLocal_68)
			{
				case 0:
					if (func_123())
					{
						func_182();
					}
					func_117();
					func_114(&Local_281);
					break;
				
				case 1:
					func_23();
					func_114(&Local_281);
					func_14();
					break;
				
				case 2:
					if (((unk_0xFC8BFE4B41177C22(iLocal_76) && unk_0x89568FA9A6BC0B4A(iLocal_76, 1)) && iLocal_96 < 5) && !bLocal_93)
					{
						func_13();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_182();
		}
	}
}

void func_1()
{
	if (iLocal_278 && !iLocal_279)
	{
		unk_0x86A2BC11844DEEB3("RE14A_FAIL");
		iLocal_95 = 0;
		while (iLocal_95 < 11)
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_86[iLocal_95]))
			{
				unk_0x5D7CD709B34C90F0(uLocal_86[iLocal_95], 0);
			}
			iLocal_95++;
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
		{
			unk_0x2AEBE39F6BF7D6BC(iLocal_78, 0f);
			unk_0x5D7CD709B34C90F0(iLocal_78, 0);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_87))
		{
			unk_0x5D7CD709B34C90F0(iLocal_87, 0);
		}
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
		func_2(0, 1, 1, 0, 0, 0, 0);
		iLocal_90 = 1;
		unk_0xE6AC149D1121535D(1f);
		unk_0x268BE77F77533D03("re@construction");
		if (unk_0x78411E34CF90EA8C(uLocal_273))
		{
			unk_0x85E6A1E36B5E2E4D(uLocal_273, 0);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_82))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_82);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_83))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_83);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_84))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_84);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_85))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_85);
		}
		iLocal_279 = 1;
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_86[0]) || unk_0xFC8BFE4B41177C22(uLocal_86[1]))
	{
		if (!unk_0x7B780C491DEC834E(Local_73 + Vector(20f, 0f, 0f), 30f) && !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_73, 80f, 80f, 80f, 0, 1, 0))
		{
			func_182();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_12(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_11())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_10(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_12(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_10(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_8(unk_0x259BE71D8A81D4FA())) && !func_4(unk_0x259BE71D8A81D4FA(), 0)) && !func_3()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_8(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_3()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_7(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_5(-1, 0) == 8;
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

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1574926;
}

int func_7(var uParam0)
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

int func_8(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_9())
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

bool func_9()
{
	return BitTest(Global_2621446, 3);
}

int func_10(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_11()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
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

void func_13()
{
	if (iLocal_100 == -1)
	{
		iLocal_100 = unk_0x1DD05E817C89C737() + 5000;
	}
	if (unk_0x1DD05E817C89C737() > iLocal_100)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_78))
		{
			unk_0x5D7CD709B34C90F0(iLocal_78, 0);
			unk_0xE592D924D5438108(iLocal_78, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
			{
				unk_0xAE89444B15234CCE(iLocal_78, 1, 0);
			}
		}
	}
}

void func_14()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_22();
		func_21();
		func_18();
		func_15();
	}
}

void func_15()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_59 == 0)
	{
		if (unk_0xDDF99E38A910C346(&Var1, Local_66[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_66.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0xED977E2AE2CB16EE(Local_66[(iVar0 - 1) /*5*/], Local_66[iVar0 /*5*/], 1));
				}
				if (Local_66[iVar0 /*5*/].f_4)
				{
					if (unk_0xDDF99E38A910C346(&Var1, Local_66[iVar0 /*5*/]))
					{
						fVar4 = unk_0xED977E2AE2CB16EE(Local_66[iVar0 /*5*/], Var1, 1);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_53)
			{
				iVar3 = iVar3;
				iLocal_59 = 1;
				iLocal_61 = unk_0x1DD05E817C89C737();
				fVar6 = fVar6;
				Local_56 = { Local_66[iVar3 /*5*/] };
				iLocal_57 = iVar3;
				iLocal_62 = iVar3 * 2;
				iLocal_64 = iLocal_62;
				iLocal_65 = iLocal_62;
				if (iLocal_65 < 0)
				{
					iLocal_65 = 0;
				}
				if (iLocal_64 >= Local_66.f_0 * 2)
				{
					iLocal_64 = (Local_66.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		unk_0xAB03CF772B43A288();
		fVar7 = (system::to_float((unk_0x1DD05E817C89C737() - iLocal_61)) / fLocal_67);
		iVar8 = (system::floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_62 + iVar8);
		iVar10 = (iLocal_62 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_64)
		{
			iVar0 = iLocal_64 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_66.f_0)
				{
					if (Local_66[iVar11 /*5*/].f_4)
					{
						func_16(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_64 = iVar9;
		}
		if (iVar10 < iLocal_65)
		{
			iVar0 = (iLocal_65 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_66.f_0)
				{
					if (Local_66[iVar11 /*5*/].f_4)
					{
						func_16(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_65 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_58.f_0)
		{
			if ((unk_0x1DD05E817C89C737() - Local_58[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x726D5358D13D53BD(Local_58[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			if ((unk_0x1DD05E817C89C737() - Local_58[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0xCA60A45D232EEDDB(Local_58[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_17(Local_66[(iParam0 / 2) /*5*/] + Local_66[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_54, fLocal_54, fLocal_54), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_17(Local_66[(iParam0 / 2) /*5*/] + Vector(fLocal_54, fLocal_54, fLocal_54), iParam1);
		}
	}
}

void func_17(struct<3> Param0, int iParam1)
{
	if (iLocal_60 == 0)
	{
		iParam1 = 0;
	}
	unk_0xCA60A45D232EEDDB(Local_58[iLocal_63 /*5*/]);
	if (Local_58[iLocal_63 /*5*/].f_4 != 0)
	{
		unk_0x726D5358D13D53BD(Local_58[iLocal_63 /*5*/].f_1, 0,4f, 1f);
	}
	Local_58[iLocal_63 /*5*/].f_4 = unk_0x1DD05E817C89C737();
	Local_58[iLocal_63 /*5*/].f_1 = { Param0 };
	Local_58[iLocal_63 /*5*/] = unk_0xC86536B840EE3AB3(Param0, uLocal_51, iParam1);
	iLocal_63++;
	if (iLocal_63 >= 31)
	{
		iLocal_63 = 0;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_46)
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x6D05C5731A838CB3(0, 24) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				if (iLocal_52 == 0)
				{
					unk_0xA62957B100C8DE6D(2f, 8f, 4);
					iLocal_52 = unk_0x1DD05E817C89C737() + 250;
				}
				if (unk_0x1DD05E817C89C737() > iLocal_52)
				{
					if (!bLocal_42)
					{
						fVar4 = 9999,9f;
						Local_55 = { func_20() };
						iVar0 = 0;
						while (iVar0 < Local_66.f_0)
						{
							if (unk_0xC450B06E5AAA0985(Local_66[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xED977E2AE2CB16EE(Local_55, unk_0x3CF9D442F2C902BD(Local_66[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0xED977E2AE2CB16EE(Local_66[iVar0 /*5*/], unk_0x3CF9D442F2C902BD(Local_66[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_66[iVar0 /*5*/] = { Local_55 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_48 != -1)
							{
								if (unk_0x510D0699BE9C6D06((iLocal_49 - iVar5)) > 1)
								{
									iLocal_49 = -1;
								}
								if (iLocal_49 == -1)
								{
									iLocal_49 = iLocal_48;
								}
								if (unk_0x510D0699BE9C6D06((iLocal_49 - iVar5)) < 3 && unk_0x510D0699BE9C6D06((iLocal_49 - iVar5)) > 0)
								{
									if (iLocal_49 < iVar5)
									{
										iVar6 = iLocal_49;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xC450B06E5AAA0985(Local_66[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_66[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_66[iVar6 /*5*/].f_3, 0);
													Local_66[iVar6 /*5*/].f_4 = 1;
													iLocal_50 = (iLocal_50 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_49)
										{
											if (unk_0xC450B06E5AAA0985(Local_66[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_66[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_66[iVar6 /*5*/].f_3, 0);
													Local_66[iVar6 /*5*/].f_4 = 1;
													iLocal_50 = (iLocal_50 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_49 = iLocal_48;
								}
								if (iVar5 == 0)
								{
									if (unk_0xC450B06E5AAA0985(Local_66[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_66[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_66[iVar5 /*5*/].f_3, 0);
											Local_66[iVar5 /*5*/].f_4 = 1;
											iLocal_50 = (iLocal_50 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xC450B06E5AAA0985(Local_66[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_66[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_66[iVar5 /*5*/].f_3, 0);
											Local_66[iVar5 /*5*/].f_4 = 1;
											iLocal_50 = (iLocal_50 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_19(Local_66[iVar5 + 1 /*5*/]))
									{
										if (unk_0xC450B06E5AAA0985(Local_66[iVar5 /*5*/].f_3))
										{
											if (unk_0xF03FBAFA0284124E(Local_66[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xF42EBD7CD0682A8B(Local_66[iVar5 /*5*/].f_3, 0);
												Local_66[iVar5 /*5*/].f_4 = 1;
												iLocal_50 = (iLocal_50 - 1);
											}
										}
									}
								}
							}
							iLocal_48 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_48 = -1;
				iLocal_49 = -1;
				iLocal_52 = 0;
			}
		}
	}
}

int func_19(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_20()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = unk_0x484426882F80CACE(unk_0x4A8C381C258A124D(), 1);
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		iVar1 = unk_0x365DC1E8054AF31A(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0x75DF72FC74EED046(iVar0, iVar1) };
		Var2 = { unk_0xF10F2A2453AF1DFB(Var2, unk_0xCFC0C995455A6204(iVar0), 0,35f, 0f, -0,15f) };
		unk_0xB1EAADCB692D69CE(Var2, &uVar4, 0, 0);
		Var3 = { Var2.f_0, Var2.f_1, uVar4 };
	}
	return Var3;
}

void func_21()
{
	int iVar0;
	
	if (iLocal_44)
	{
		if (iLocal_59)
		{
			iVar0 = 0;
			while (iVar0 < Local_58.f_0)
			{
				unk_0xCA60A45D232EEDDB(Local_58[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_44 = 0;
		iLocal_59 = 1;
		iLocal_61 = unk_0x1DD05E817C89C737();
		iVar0 = 0;
		while (iVar0 < Local_66.f_0)
		{
			Local_66[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_47 != -1)
		{
			iLocal_65 = iLocal_47;
			iLocal_64 = iLocal_47;
			iLocal_62 = iLocal_47;
		}
		else
		{
			iLocal_65 = -1;
			iLocal_64 = -1;
			iLocal_62 = iLocal_47;
		}
		iLocal_63 = 1;
	}
}

void func_22()
{
	if (!iLocal_45)
	{
		iLocal_45 = 1;
	}
}

void func_23()
{
	switch (iLocal_69)
	{
		case 0:
			unk_0xD7E1DF759CD0FFF2("CONSTRUCTION_ACCIDENT_1", 0, -1);
			unk_0x80813AC549A1E8AE("re@construction");
			if (Local_281.f_32 <= 0)
			{
				Local_281.f_32 = unk_0x8034325BF6D6E41F();
			}
			func_113(&Local_281, joaat("s_m_m_dockwork_01"));
			func_113(&Local_281, joaat("prop_generator_01a"));
			func_113(&Local_281, joaat("p_amb_phone_01"));
			func_110(&Local_281);
			if ((unk_0xD7E1DF759CD0FFF2("CONSTRUCTION_ACCIDENT_1", 0, -1) && unk_0xE100DD4F82A51BDE("re@construction")) && func_106(&Local_281))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_78, 0))
				{
					iLocal_76 = unk_0x8728A378EF2B46B2(iLocal_78, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0xD1C578C204015E1F(iLocal_76, 0, 1, 0, 0);
					unk_0xD1C578C204015E1F(iLocal_76, 3, 1, 1, 0);
					unk_0xD1C578C204015E1F(iLocal_76, 4, 0, 1, 0);
					unk_0xD1C578C204015E1F(iLocal_76, 8, 0, 0, 0);
					unk_0x10425721983AE158(iLocal_76, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0,4f, 0, 0, 0);
					iLocal_88 = unk_0x4E55EAB577C13329(joaat("p_amb_phone_01"), -455,6561f, -985,8071f, 22,4868f, 1, 1, 0);
					unk_0x55098D9E9AD58806(joaat("p_amb_phone_01"));
					unk_0x4D306DD94DD6FDBA(iLocal_88, iLocal_76, unk_0x72F7E39FB49FC0BA(iLocal_76, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0xBE8796DB2B90A437(iLocal_76, 17, 1);
					unk_0x3CDDF07147FB8B6F(iLocal_76, 1);
					unk_0xAAA71DD7E9059338(iLocal_76, 1);
					unk_0x3F58BFCF656F0DF1(iLocal_76, 0);
					func_105(&uLocal_106, 3, iLocal_76, "RECONACWorker", 0, 1);
					unk_0x397CF4F4C8B17365(iLocal_76, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_77 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_dockwork_01"), -462,2982f, -978,3272f, 65f, 221,4041f, 1, 1);
					unk_0xAAA71DD7E9059338(uLocal_77, 1);
					unk_0x788F35D395511DFE(iLocal_77, 1, 1);
					unk_0x5D7CD709B34C90F0(iLocal_77, 1);
					unk_0x26FA2603829F9CF9(iLocal_76, joaat("empty"));
					unk_0x0A0952DE8943B17C(joaat("empty"), 24);
					unk_0x0A0952DE8943B17C(joaat("empty"), 47);
					unk_0x0A0952DE8943B17C(joaat("empty"), 62);
					unk_0x0A0952DE8943B17C(joaat("empty"), 138);
					unk_0x0A0952DE8943B17C(joaat("empty"), 56);
					iLocal_87 = unk_0x4E55EAB577C13329(joaat("prop_generator_01a"), Local_272.f_0, (Local_272.f_1 + 0,5f), (Local_272.f_2 - 0,25f), 1, 1, 0);
					unk_0x5C96CEA06531AB03(iLocal_87, 75f);
					unk_0xD0F1DB0E50B367AD(iLocal_87, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_277 = unk_0x62750FD2BDD8BD49("scr_sparking_generator", iLocal_87, 0f, 0f, 0,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0x5D7CD709B34C90F0(iLocal_87, 1);
					func_104(&uLocal_106, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_99 = unk_0x1DD05E817C89C737();
					iLocal_69 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_89)
			{
				func_99();
			}
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!iLocal_90)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_76))
					{
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -532,2208f, -849,2668f, 19,7038f, -531,6973f, -1065,341f, 60,7893f, 190,8125f, 0, 1, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
							{
								if (!unk_0xC450B06E5AAA0985(uLocal_83))
								{
									uLocal_83 = func_98(iLocal_78, 0, 0);
								}
							}
						}
						if (unk_0x9B3D4335E0EDB0BE(iLocal_76, unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_78, unk_0x4A8C381C258A124D(), 1))
						{
							unk_0x5D7CD709B34C90F0(iLocal_78, 0);
							unk_0x974022927CB47E68(iLocal_76);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_76, uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							func_97();
						}
						unk_0xEC9DAA34BBB4658C(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -473,1686f, -984,6405f, 22,487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) && func_96(1, 0, 1)) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_136())
							{
								if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
								{
									iLocal_81 = unk_0xDC8D5832207C2EAD();
								}
								func_86(1);
							}
							iLocal_89 = 1;
						}
					}
					else
					{
						func_97();
					}
				}
				else
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_76))
					{
						if (unk_0x7F420695E3F776FB(iLocal_76, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0) && !unk_0xC450B06E5AAA0985(uLocal_83))
							{
								uLocal_83 = func_98(iLocal_78, 0, 0);
							}
						}
						else if (!unk_0xC450B06E5AAA0985(uLocal_82))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_83))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_83);
							}
							uLocal_82 = func_83(iLocal_76, 0, 145);
						}
					}
					func_53();
					func_50();
					if (!unk_0x4FAFF4BCB7633475(iLocal_76))
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_76, Local_74, 0, 1, 0))
						{
							if (!bLocal_91)
							{
								func_49();
							}
						}
					}
					else
					{
						if (unk_0xC450B06E5AAA0985(uLocal_82))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_82);
						}
						if (unk_0xC450B06E5AAA0985(uLocal_83))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_83);
						}
						if (unk_0xC450B06E5AAA0985(uLocal_84))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_84);
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_76) || unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
						{
							func_97();
						}
					}
					if (!unk_0xD9F5E1FEFD1329E4(iLocal_79, 0))
					{
						if (unk_0xC450B06E5AAA0985(uLocal_84))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_84);
							if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0) && !unk_0xC450B06E5AAA0985(uLocal_83))
							{
								uLocal_83 = func_98(iLocal_78, 0, 0);
							}
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(iLocal_79, 0))
				{
					if (iLocal_101 >= 3)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_84))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_84);
								if (!unk_0x4FAFF4BCB7633475(iLocal_76) && !unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
								{
									if (unk_0x7F420695E3F776FB(iLocal_76, 0) && !unk_0xC450B06E5AAA0985(uLocal_83))
									{
										uLocal_83 = func_98(iLocal_78, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_76) && !unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
						{
							if (unk_0x7F420695E3F776FB(iLocal_76, 0) && unk_0xC450B06E5AAA0985(uLocal_83))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_83);
								if (!unk_0xC450B06E5AAA0985(uLocal_84))
								{
									uLocal_84 = func_98(iLocal_79, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_76))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
						{
							iLocal_95 = 0;
							while (iLocal_95 < 11)
							{
								if (unk_0xFC8BFE4B41177C22(uLocal_86[iLocal_95]))
								{
									unk_0x5D7CD709B34C90F0(uLocal_86[iLocal_95], 0);
								}
								iLocal_95++;
							}
						}
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
				{
					if (unk_0x5B702A5D1F2635BE(iLocal_78))
					{
						iLocal_95 = 0;
						while (iLocal_95 < 11)
						{
							if (unk_0xFC8BFE4B41177C22(uLocal_86[iLocal_95]))
							{
								unk_0x5D7CD709B34C90F0(uLocal_86[iLocal_95], 0);
							}
							iLocal_95++;
						}
						unk_0x5D7CD709B34C90F0(iLocal_78, 0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_76))
						{
							if (unk_0x7F420695E3F776FB(iLocal_76, 0))
							{
								unk_0xAAA71DD7E9059338(iLocal_76, 1);
								unk_0x0428AFDCAA63B06E(iLocal_76, 116, 0);
								unk_0x0428AFDCAA63B06E(iLocal_76, 29, 0);
								if (!bLocal_93)
								{
									func_47();
									system::wait(0);
									func_25(&uLocal_106, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_24())
									{
										system::wait(0);
									}
									bLocal_93 = true;
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_76))
								{
									unk_0xD25E9BDC14A0B649(iLocal_76, 99, 0, 0);
								}
								if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
								{
									unk_0x5D7CD709B34C90F0(iLocal_78, 0);
									unk_0xE592D924D5438108(iLocal_78, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0xAE89444B15234CCE(iLocal_78, 1, 0);
								}
								func_97();
							}
						}
					}
				}
			}
			break;
	}
}

int func_24()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_25(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_26(sParam2, iParam3, 0);
}

int func_26(char* sParam0, int iParam1, bool bParam2)
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
					func_45();
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
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_43();
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
				func_35();
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
				if (func_34())
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
			if (func_11())
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
			func_33();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_32();
		func_27();
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
		func_45();
	}
	return 0;
}

void func_27()
{
	if (!func_28())
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

int func_28()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_31())
	{
		return 0;
	}
	if (func_29(unk_0x259BE71D8A81D4FA()))
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

bool func_29(int iParam0)
{
	return func_30(iParam0, 20);
}

var func_30(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_31()
{
	return -1;
}

void func_32()
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

void func_33()
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

int func_34()
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

void func_35()
{
	if (func_42(14))
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
		Global_20930 = func_36();
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

int func_36()
{
	func_37();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_40(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_39(unk_0x4A8C381C258A124D());
			if (func_38(iVar0) && (!func_42(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_38(Global_113969.f_2366.f_539.f_4321))
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_42(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_43()
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

bool func_44(int iParam0, int iParam1)
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

void func_45()
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_47()
{
	Global_21152 = 0;
	func_48();
}

void func_48()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_49()
{
	switch (iLocal_101)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_99) > 3000)
				{
					func_25(&uLocal_106, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_103 = unk_0x1DD05E817C89C737();
					iLocal_99 = unk_0x1DD05E817C89C737();
					iLocal_101 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_99) > 3000)
				{
					iLocal_99 = unk_0x1DD05E817C89C737();
					iLocal_101++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_99) > 5000 && !func_24())
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iLocal_104 = unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0));
					}
					if (unk_0x7F420695E3F776FB(iLocal_76, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_79, 0))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (!unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
								{
									if (!unk_0xC450B06E5AAA0985(uLocal_84))
									{
										uLocal_84 = func_98(iLocal_79, 0, 0);
										if (unk_0xC450B06E5AAA0985(uLocal_83))
										{
											unk_0xFE54B8568B2ABD12(&uLocal_83);
										}
									}
								}
							}
							else if (!unk_0xC450B06E5AAA0985(uLocal_84))
							{
								uLocal_84 = func_98(iLocal_79, 0, 0);
								if (unk_0xC450B06E5AAA0985(uLocal_83))
								{
									unk_0xFE54B8568B2ABD12(&uLocal_83);
								}
							}
						}
					}
					if (iLocal_104 == joaat("bulldozer"))
					{
						func_25(&uLocal_106, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_25(&uLocal_106, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_99 = unk_0x1DD05E817C89C737();
					iLocal_101++;
				}
			}
			break;
		
		case 3:
			if (unk_0x1DD05E817C89C737() - iLocal_99) > unk_0xC5935DFB3F39785A(5000, 8000)
			{
				if (!func_24())
				{
					func_25(&uLocal_106, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_99 = unk_0x1DD05E817C89C737();
				}
			}
			break;
	}
}

void func_50()
{
	switch (iLocal_97)
	{
		case 0:
			unk_0x037E59D590865D5A(Local_272 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			system::wait(0);
			unk_0xE01851169F9A48A4(1f);
			unk_0x83993C32C04DE125(Local_271, 1f);
			system::wait(0);
			unk_0x83993C32C04DE125(Local_271 - Vector(0f, 4f, 0f), 1f);
			system::wait(0);
			unk_0x83993C32C04DE125(Local_271 - Vector(0f, 8f, 0f), 1f);
			system::wait(0);
			unk_0x83993C32C04DE125(Local_272, 1f);
			unk_0x28F49AC9C6000789();
			iLocal_103 = unk_0x1DD05E817C89C737();
			iLocal_97 = 2;
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iLocal_103) > iLocal_71 || func_52())
			{
				if (unk_0x9CFFB7009B578840(uLocal_277))
				{
					unk_0x182120534CCF9023(uLocal_277, 0);
				}
				func_51();
				if (!bLocal_93)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_76) && !unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
					{
						if (!unk_0x848DE0A81098ECCB(iLocal_76, iLocal_78, -1, 0, 0) && !unk_0x848DE0A81098ECCB(iLocal_76, iLocal_78, 0, 0, 0))
						{
							func_47();
							system::wait(0);
							func_25(&uLocal_106, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_93 = true;
						}
					}
				}
				unk_0xCC1C92F7E1A3CE9D(3, 1);
				unk_0x6625908717AE7808(80f);
				unk_0x5E08BBBF87BC4886(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 0, 1, 1);
				unk_0x70DA4F87B396F9F9(3, -539,4481f, -962,3162f, 22,4918f, 4, 0f, &uLocal_276, 0, 0);
				system::settimera(0);
				iLocal_97 = 3;
			}
			break;
		
		case 3:
			if (unk_0xFC8BFE4B41177C22(iLocal_78))
			{
				if (!unk_0x5B702A5D1F2635BE(iLocal_78))
				{
				}
			}
			if (iLocal_96 < 2)
			{
				if (system::timera() > 5000)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
					{
						unk_0x5D7CD709B34C90F0(iLocal_78, 0);
						unk_0xE592D924D5438108(iLocal_78, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xAE89444B15234CCE(iLocal_78, 1, 0);
					}
				}
			}
			break;
	}
}

void func_51()
{
	iLocal_44 = 1;
}

int func_52()
{
	if (iLocal_59 == 1)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	struct<3> Var0;
	
	switch (iLocal_96)
	{
		case 0:
			if (iLocal_101 >= 2)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_76) && !unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
				{
					if (!unk_0x7F420695E3F776FB(iLocal_76, 0))
					{
						iLocal_96++;
					}
					unk_0x51C8BEA2005931AB(&iLocal_88);
					if (unk_0x848DE0A81098ECCB(iLocal_76, iLocal_78, -1, 0, 0) || unk_0x848DE0A81098ECCB(iLocal_76, iLocal_78, 0, 0, 0))
					{
						if (unk_0x848DE0A81098ECCB(iLocal_76, iLocal_78, -1, 0, 0))
						{
							bLocal_92 = true;
							Local_75 = { unk_0xD1A6A821F5AC81DB(iLocal_78, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_75 = { unk_0xD1A6A821F5AC81DB(iLocal_78, 0) + Vector(0f, 1,5f, -3f) };
						}
						if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), Local_75, 4,2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_91)
							{
								func_47();
								system::wait(0);
								func_25(&uLocal_106, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_91 = true;
							}
						}
						else
						{
							bLocal_91 = true;
							iLocal_96++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76) && !unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_79, 0))
				{
					unk_0xD0F1DB0E50B367AD(iLocal_79, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0xD0F1DB0E50B367AD(iLocal_76, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x5D7CD709B34C90F0(iLocal_78, 0);
				unk_0xB5396F1FB088FE38(&uLocal_105);
				if (bLocal_92)
				{
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 0, 2);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0xA966E518B752B92A(0, -476,3904f, -986,836f, 22,5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 0, 2);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0xA966E518B752B92A(0, -476,3904f, -986,836f, 22,5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x93C0674FC00824D0(uLocal_105);
				unk_0x4BD42B0527065BB6(iLocal_76, uLocal_105);
				unk_0xD0557B139A542F12(&uLocal_105);
				unk_0x44FB298D6382876D(iLocal_76, 1);
				iLocal_99 = unk_0x1DD05E817C89C737();
				iLocal_96++;
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_99) > 500 && !unk_0x7F420695E3F776FB(iLocal_76, 0))
				{
					iLocal_71 = 0;
					if (unk_0xD9F5E1FEFD1329E4(iLocal_78, 0))
					{
					}
					func_47();
					system::wait(0);
					func_25(&uLocal_106, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_99 = unk_0x1DD05E817C89C737();
					iLocal_96++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if (unk_0x65FFA94B82A71741(iLocal_76, -464,7217f, -989,7214f, 22,4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0x1DD05E817C89C737() - iLocal_99) > 10000)
				{
					func_25(&uLocal_106, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_96++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if (unk_0x65FFA94B82A71741(iLocal_76, -472,7056f, -991,105f, 22,4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0x1DD05E817C89C737() - iLocal_99) > 10000)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
					{
						unk_0x5D7CD709B34C90F0(iLocal_78, 0);
						unk_0xE592D924D5438108(iLocal_78, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xAE89444B15234CCE(iLocal_78, 1, 0);
					}
					iLocal_96++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x1DD05E817C89C737() - iLocal_99) > 3000)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_78, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_78, 0);
					unk_0xE592D924D5438108(iLocal_78, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0xAE89444B15234CCE(iLocal_78, 1, 0);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_76))
				{
					unk_0x86A2BC11844DEEB3("RE14A_SAFE");
					if (!unk_0x1C2F771CDC87A3A5(iLocal_79, 0))
					{
						unk_0xD0F1DB0E50B367AD(iLocal_79, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0xD0F1DB0E50B367AD(iLocal_76, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x9FF00EA9A61211D2(iLocal_76, 1);
					unk_0x3F58BFCF656F0DF1(iLocal_76, 1);
					unk_0x3CDDF07147FB8B6F(iLocal_76, 0);
					unk_0xAAA71DD7E9059338(iLocal_76, 0);
					unk_0x26FA2603829F9CF9(iLocal_76, joaat("DEFAULT"));
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					unk_0xB5396F1FB088FE38(&uLocal_105);
					unk_0x10425721983AE158(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0xC58DD79B4CA8487F(uLocal_105, 1);
					unk_0x93C0674FC00824D0(uLocal_105);
					unk_0x4BD42B0527065BB6(iLocal_76, uLocal_105);
					unk_0xD0557B139A542F12(&uLocal_105);
				}
				unk_0x5E08BBBF87BC4886(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 0, 1, 1);
				unk_0x70DA4F87B396F9F9(3, -539,4481f, -962,3162f, 22,4918f, 4, 0f, &uLocal_276, 0, 0);
				iLocal_99 = unk_0x1DD05E817C89C737();
				iLocal_96++;
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_99) > 6400)
				{
					Var0 = { -477,2774f, -990,0638f, 23,5497f };
					if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
					{
						if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_81))
					{
						if (unk_0x65FFA94B82A71741(iLocal_81, -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_79))
					{
						if (unk_0x65FFA94B82A71741(iLocal_79, -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					unk_0xB5396F1FB088FE38(&uLocal_105);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 2052, 2);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x634E47EF112F3802(0, "WORLD_HUMAN_PICNIC", Var0, 304,8172f, 0, 1, 0);
					unk_0x93C0674FC00824D0(uLocal_105);
					unk_0x4BD42B0527065BB6(iLocal_76, uLocal_105);
					unk_0xD0557B139A542F12(&uLocal_105);
					func_25(&uLocal_106, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_54();
				}
			}
			else
			{
				func_97();
			}
			break;
	}
}

void func_54()
{
	while (!func_82())
	{
		system::wait(0);
	}
	func_77(func_36(), 4, 2);
	func_58(-1, 0);
	func_55();
	iLocal_68 = 2;
}

void func_55()
{
	func_56();
}

int func_56()
{
	if (func_57(0))
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

int func_57(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_58(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_74(iParam0))
	{
		func_73(iParam0, bParam1);
		if (!func_72(51))
		{
			func_68("RE_REWARD", 1, 0, 4000, 10000, func_71(), 0, 138, 0);
			func_67(51);
		}
		if (func_66(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_65(iParam0, bParam1) != 322)
		{
			func_60(func_65(iParam0, bParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_59(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_59(7);
			}
			else
			{
				func_59(1);
			}
		}
	}
}

void func_59(int iParam0)
{
	Global_113955 = iParam0;
}

void func_60(int iParam0, var uParam1, var uParam2)
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
		func_64((891 + iParam0), 1, -1);
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_61();
	}
}

void func_61()
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
		func_63(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_62() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_56();
				}
			}
		}
	}
}

int func_62()
{
	return Global_32948;
}

int func_63(int iParam0, int iParam1)
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

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_65(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_67(int iParam0)
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

void func_68(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_69(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_69(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_70();
	}
}

void func_70()
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

int func_71()
{
	func_37();
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

int func_72(int iParam0)
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

void func_73(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), bParam1);
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_75()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_76(Var0);
	return uVar1;
}

int func_76(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x70E57E9927B6BA58(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14835;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14835)
			{
				iVar0 = func_81(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_78(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_79(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_79(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_80(uParam1));
}

int func_80(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_79(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_82()
{
	return 1;
}

var func_83(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_84(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_84(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_85(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_85(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_85(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_85(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_86(int iParam0)
{
	if (func_90())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_66(Global_113958))
		{
			func_87(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_66(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_88(func_89(iParam0), -1);
					Global_113969.f_24998.f_2++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_88(func_89(iParam0), -1);
					Global_113969.f_24998.f_3++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_88(func_89(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_89(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_90()
{
	switch (func_91(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_91(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_95(0))
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
		if (!func_93(iParam2))
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
		Global_44003 = (Global_44003 + 1);
		if (iParam4 != 0)
		{
			func_92(uParam0, iParam4);
		}
	}
	return 2;
}

void func_92(var uParam0, int iParam1)
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

bool func_93(int iParam0)
{
	return func_94(iParam0, Global_44042);
}

int func_94(int iParam0, int iParam1)
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

int func_95(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_93(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0,95f || unk_0x032CEF99C0D59B73(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

void func_97()
{
	unk_0x86A2BC11844DEEB3("RE14A_FAIL");
	iLocal_68 = 2;
}

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	return func_84(iParam0, !bParam1, bParam2);
}

void func_99()
{
	if (func_102(1000))
	{
		func_47();
		unk_0x8F72AF14CE5AACE4(800);
		while (unk_0x78ABC1D11B34F324())
		{
			system::wait(0);
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
		{
			unk_0x2BDD547718FF1F1A(iLocal_78, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_280 = true;
		iLocal_70 = 8;
	}
	switch (iLocal_70)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0xAD01710361B8BCF5();
			unk_0x37B894853929BF1A(0);
			unk_0x747786364137DC63(0);
			unk_0x51E3279E9437131C(0);
			if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
			{
				unk_0xEE0BCDB1B5E36BCB(unk_0xDC8D5832207C2EAD(), 1, 0);
			}
			unk_0x55F7AC4B2B875901(Local_73, 50f, 0);
			unk_0x60040CDD28AA1BC3(Local_73, 30f, 0, 0, 0, 0, 0, 0, 0);
			unk_0xEC73DFE5CE55E19C(Local_73, 100f, 0);
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), Local_73, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_80 = unk_0xDC8D5832207C2EAD();
					unk_0xEE0BCDB1B5E36BCB(uLocal_80, 1, 0);
					unk_0x8C1F7D7A31B2A38E(&iLocal_80);
				}
			}
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -473,1686f, -984,6405f, 22,487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -477,3538f, -972,67f, 22,5494f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 237,4839f);
			}
			uLocal_274 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -462,711f, -992,5728f, 23,8729f, -0,1371f, -0,0346f, -29,6605f, 28f, 1, 2);
			uLocal_275 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -462,711f, -992,5728f, 23,8729f, 69,4831f, -0,0346f, -40,8884f, 28f, 1, 2);
			unk_0x2A09425009DAD0F5(uLocal_274, "HAND_SHAKE", 0,3f);
			unk_0x2A09425009DAD0F5(uLocal_275, "HAND_SHAKE", 0,3f);
			func_101();
			unk_0x4CBC5D1BC117616B(uLocal_274, 1);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			system::wait(500);
			unk_0xB56F35D8A770F80F(uLocal_275, uLocal_274, 3500, 1, 1);
			unk_0x86A2BC11844DEEB3("RE14A_START");
			iLocal_102 = unk_0x1DD05E817C89C737();
			iLocal_70 = 1;
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 3500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xBF3D28CA44F3BE2D(iLocal_98, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0x4B46E3AF872076CE(uLocal_86[0], 1);
				func_100(uLocal_274);
				func_100(uLocal_275);
				uLocal_274 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -455,4617f, -990,631f, 61,6885f, -89,0761f, -0,0146f, -49,881f, 80,5355f, 1, 2);
				uLocal_275 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -455,4543f, -990,6208f, 61,012f, -89,0759f, -0,0146f, -47,8226f, 80,5355f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_274, "HAND_SHAKE", 0,3f);
				unk_0x2A09425009DAD0F5(uLocal_275, "HAND_SHAKE", 0,3f);
				unk_0xB56F35D8A770F80F(uLocal_275, uLocal_274, 4000, 1, 0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_76))
				{
					unk_0x974022927CB47E68(iLocal_76);
					unk_0xE237FA90A8AFEE59(iLocal_76, -461,4785f, -984,8583f, 28,0809f, 30000, 2080, 2);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_88))
				{
					unk_0x837D67618BF89034(iLocal_88, 1, 1);
					unk_0x51C8BEA2005931AB(&iLocal_88);
				}
				iLocal_102 = unk_0x1DD05E817C89C737();
				iLocal_70 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 1500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_102 = unk_0x1DD05E817C89C737();
				iLocal_70 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 500)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_86[0]))
				{
					unk_0x5D7CD709B34C90F0(uLocal_86[0], 0);
					unk_0xE592D924D5438108(uLocal_86[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 11, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 18, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 19, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 23, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 9, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 12, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_86[0], 17, 0);
					unk_0xDD19F75405614D3C("scr_reconstruct_pipefall_debris", uLocal_86[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_102 = unk_0x1DD05E817C89C737();
				iLocal_70 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 2000)
			{
				func_100(uLocal_274);
				func_100(uLocal_275);
				uLocal_274 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -470,5648f, -976,951f, 24,2657f, 25,437f, -0,0087f, -118,3831f, 34f, 1, 2);
				uLocal_275 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -470,5648f, -976,951f, 24,2657f, 2,0695f, -0,0087f, -120,2811f, 34f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_274, "HAND_SHAKE", 0,3f);
				unk_0x2A09425009DAD0F5(uLocal_275, "HAND_SHAKE", 0,3f);
				unk_0xB56F35D8A770F80F(uLocal_275, uLocal_274, 1000, 3, 3);
				unk_0x8E4825CCACA34B58(iLocal_98);
				iLocal_102 = unk_0x1DD05E817C89C737();
				iLocal_70 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 500)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_78, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0x2BDD547718FF1F1A(iLocal_78, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_76))
					{
						unk_0x84B06A81C98DA4B8(iLocal_76);
					}
					unk_0x10425721983AE158(iLocal_76, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0xDD19F75405614D3C("scr_reconstruct_pipe_impact", iLocal_78, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_25(&uLocal_106, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x78411E34CF90EA8C(uLocal_274) && unk_0x78411E34CF90EA8C(uLocal_275))
					{
						unk_0x2A09425009DAD0F5(uLocal_274, "HAND_SHAKE", 1,5f);
						unk_0x2A09425009DAD0F5(uLocal_275, "HAND_SHAKE", 1,5f);
					}
					iLocal_102 = unk_0x1DD05E817C89C737();
					iLocal_70 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 500)
			{
				func_100(uLocal_274);
				func_100(uLocal_275);
				uLocal_274 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -459,2609f, -987,5602f, 24,2611f, 0,583f, 0,2617f, -32,7532f, 49,9914f, 1, 2);
				uLocal_275 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -459,0622f, -987,2584f, 24,2661f, 5,0301f, 0,2617f, -36,7308f, 49,9914f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_274, "HAND_SHAKE", 0,5f);
				unk_0x2A09425009DAD0F5(uLocal_275, "HAND_SHAKE", 0,5f);
				unk_0xB56F35D8A770F80F(uLocal_275, uLocal_274, 2500, 3, 3);
				if (!unk_0x4FAFF4BCB7633475(iLocal_76))
				{
					unk_0xE237FA90A8AFEE59(iLocal_76, unk_0xD1A6A821F5AC81DB(iLocal_76, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_102 = unk_0x1DD05E817C89C737();
				iLocal_70 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 2200 && !iLocal_94)
			{
				if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x3B5989D5DB08A155() == 4) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x655E58062EC2D269() == 4))
				{
					unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_94 = 1;
				}
			}
			if ((unk_0x1DD05E817C89C737() - iLocal_102) > 2500)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_78, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_78, 1);
				}
				iLocal_70 = 8;
			}
			break;
		
		case 8:
			unk_0x86A2BC11844DEEB3("RE14A_PIPES");
			if (unk_0xFC8BFE4B41177C22(uLocal_86[0]))
			{
				unk_0x51C8BEA2005931AB(&(uLocal_86[0]));
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_78, 0))
			{
				unk_0x2AEBE39F6BF7D6BC(iLocal_78, 250f);
				unk_0xB2BD5837A8D3CEDA(iLocal_78, Local_73, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_78, 80f);
				unk_0xBAAB54D57B40765E(Local_73, 50f, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				unk_0x974022927CB47E68(iLocal_76);
				unk_0x84B06A81C98DA4B8(iLocal_76);
				unk_0x10425721983AE158(iLocal_76, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0x4CBC5D1BC117616B(uLocal_274, 0);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x85E6A1E36B5E2E4D(uLocal_274, 0);
			unk_0x85E6A1E36B5E2E4D(uLocal_275, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0x37B894853929BF1A(1);
			unk_0x747786364137DC63(1);
			unk_0x51E3279E9437131C(1);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_99 = unk_0x1DD05E817C89C737();
			unk_0x55098D9E9AD58806(joaat("prop_pipe_stack_01"));
			uLocal_86[1] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -457,8815f, -988,9059f, 22,9554f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[1], -0,1939f, 105,0058f, 77,3964f, 2, 1);
			uLocal_86[2] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -451,5131f, -986,8079f, 24,6947f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[2], 24,3941f, 32,5423f, 80,6862f, 2, 1);
			uLocal_86[3] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -450,8099f, -985,9972f, 24,7104f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[3], 24,1841f, 110,287f, 78,4357f, 2, 1);
			uLocal_86[4] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456,6558f, -987,3979f, 22,9537f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[4], -0,0264f, 29,5754f, 79,1811f, 2, 1);
			uLocal_86[5] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456,1279f, -988,4162f, 22,9889f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[5], -0,6337f, 108,4339f, 77,9539f, 2, 1);
			uLocal_86[6] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -457,0807f, -987,3059f, 23,7564f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[6], 0,0929f, 74,2657f, 79,3839f, 2, 1);
			uLocal_86[7] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456,6558f, -983,7804f, 22,9712f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[7], -0,0264f, 29,5754f, 80,9061f, 2, 1);
			uLocal_86[8] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -455,3279f, -983,1712f, 22,9564f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[8], -0,1087f, 109,7339f, 80,9789f, 2, 1);
			uLocal_86[9] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456,1632f, -983,9359f, 23,7964f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[9], -0,3321f, 74,1907f, 81,6089f, 2, 1);
			uLocal_86[10] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -454,644f, -994,1709f, 23,3329f, 1, 1, 0, 0);
			unk_0xCF39804E8C88080E(uLocal_86[10], 5,7811f, 104,6058f, 104,6964f, 2, 1);
			iLocal_95 = 0;
			while (iLocal_95 < 11)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_86[iLocal_95]))
				{
					unk_0xC7D381E526A969D3(uLocal_86[iLocal_95], 1);
					unk_0x5D7CD709B34C90F0(uLocal_86[iLocal_95], 1);
				}
				iLocal_95++;
			}
			if (bLocal_280)
			{
				unk_0x10B228D2FDB7AF16(800);
				while (unk_0xDDED2C93E8FD5B69())
				{
					system::wait(0);
				}
			}
			iLocal_90 = 1;
			iLocal_89 = 0;
			break;
	}
}

void func_100(var uParam0)
{
	if (unk_0x78411E34CF90EA8C(uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0, 0);
	}
}

void func_101()
{
	unk_0x43D69D4AAC59FA8E();
	Global_23278 = 0;
}

int func_102(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		if ((unk_0x1DD05E817C89C737() - Global_29) > iParam0)
		{
			Global_28 = unk_0x1DD05E817C89C737();
		}
		Global_29 = unk_0x1DD05E817C89C737();
		if ((unk_0x1DD05E817C89C737() - Global_28) > iParam0)
		{
			if (func_103())
			{
				Global_28 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_23279 = 1;
	Global_23283 = 0;
	Global_23281 = iParam7;
	Global_2883585 = 0;
	return func_26(sParam2, iParam3, 0);
}

void func_105(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_106(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_107(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_107(var uParam0)
{
	return func_108(*uParam0, "NULL", uParam0->f_1);
}

int func_108(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_109(uParam0))
			{
				case 0:
					return unk_0x6252BC0DD8A320DB(uParam2);
					break;
				
				case 1:
					return unk_0xE100DD4F82A51BDE(sParam1);
					break;
				
				case 2:
					return unk_0x8175BC6D49412468(sParam1);
					break;
				
				case 3:
					return unk_0x38D063D8CF6D1967(sParam1);
					break;
				
				case 4:
					return unk_0x266D9DB5FCE4003B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xA08EEC7306CF6198(sParam1);
					break;
				
				case 6:
					return unk_0xD7E1DF759CD0FFF2(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x65F606616F48186B(iParam2);
					break;
				
				case 8:
					return unk_0xDCB78A15E5F495DC(iParam2);
					break;
				
				case 9:
					return unk_0x6F13318788EDDAD8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_110(var uParam0)
{
	func_111(uParam0, 9, -1, 0);
}

void func_111(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_112(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*2*/], bParam1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	func_111(uParam0, 0, iParam1, 0);
}

void func_114(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x8034325BF6D6E41F() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_101533.f_20, 2)) || BitTest(Global_101533.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_115(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x8034325BF6D6E41F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_115(var uParam0)
{
	func_116(uParam0, "NULL", uParam0->f_1);
}

void func_116(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_109(*uParam0))
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(uParam2);
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE(sParam1);
				break;
			
			case 2:
				unk_0x73DEEAB0747FB17C(sParam1);
				break;
			
			case 3:
				unk_0xD0D00ED689D6CA81(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xD772E6694B8472A6(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD04A772C411165F2(sParam1);
				break;
			
			case 6:
				unk_0xD7E1DF759CD0FFF2(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x625263BFD08AE230(iParam2);
				break;
			
			case 8:
				unk_0xF2CB0224D3BE0B42(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x8003D3C0115A1035();
				break;
			
			default:
				break;
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 29);
	}
}

void func_117()
{
	int iVar0;
	
	func_113(&Local_281, joaat("bulldozer"));
	func_113(&Local_281, joaat("utillitruck2"));
	func_113(&Local_281, joaat("prop_pipe_stack_01"));
	if (func_106(&Local_281))
	{
		unk_0xCCA6D8A84EE8C88A(joaat("utillitruck2"), 1);
		unk_0x425BBE19F25A57AB(0,1f);
		unk_0xCC1C92F7E1A3CE9D(3, 0);
		unk_0xA7B0B03284E7503C(Local_72 + Vector(50f, 50f, 50f), Local_72 - Vector(50f, 50f, 50f), 0, 1, 1, 1, 1);
		Local_73 = { -455,6561f, -985,8071f, 22,4868f };
		iLocal_78 = unk_0x5779387E956077A6(joaat("utillitruck2"), Local_73, 80f, 1, 1, 0);
		unk_0xC229299217554C78(iLocal_78, 0, 1, 0);
		unk_0x0B74F181ADFC39BF(iLocal_78, 3);
		unk_0xD772F6AA66750D2B(iLocal_78, 1, 1);
		unk_0xD772F6AA66750D2B(iLocal_78, 2, 1);
		unk_0xD772F6AA66750D2B(iLocal_78, 3, 0);
		unk_0xD772F6AA66750D2B(iLocal_78, 4, 1);
		unk_0xD772F6AA66750D2B(iLocal_78, 5, 1);
		unk_0xD772F6AA66750D2B(iLocal_78, 6, 0);
		unk_0xD772F6AA66750D2B(iLocal_78, 7, 1);
		unk_0x5D7CD709B34C90F0(iLocal_78, 1);
		unk_0xD0F1DB0E50B367AD(iLocal_78, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0xF88FC425EC7D675D(iLocal_78, 10000);
		unk_0xB344489A3C5FFBBB(iLocal_78, 5f);
		iLocal_79 = unk_0x5779387E956077A6(joaat("bulldozer"), -472,9444f, -966,671f, 22,5534f, 181,8365f, 1, 1, 0);
		unk_0x2094BC4B6731BA68(Local_73, 10f, 1, 0, 0, 0);
		uLocal_86[0] = unk_0x43AFC452F25F3A2F(joaat("prop_pipe_stack_01"), -453,2f, -986,1f, 59,45f, 1, 1, 0, 0);
		unk_0x5C96CEA06531AB03(uLocal_86[0], 90f);
		unk_0x5D7CD709B34C90F0(uLocal_86[0], 1);
		unk_0xD0F1DB0E50B367AD(uLocal_86[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0xF88FC425EC7D675D(uLocal_86[0], 10000000);
		Local_66[0 /*5*/] = { Local_272 };
		Local_66[1 /*5*/] = { Local_272 + Vector(0f, 0,5f, 0f) };
		Local_66[2 /*5*/] = { Local_272 + Vector(0f, 1f, 0f) };
		Local_66[3 /*5*/] = { Local_272 + Vector(0f, 2,5f, 0f) };
		Local_66[4 /*5*/] = { Local_272 + Vector(0f, 3f, 0f) };
		Local_66[5 /*5*/] = { Local_272 + Vector(0f, 3,5f, 0f) };
		Local_66[6 /*5*/] = { Local_272 + Vector(0f, 4f, 0f) };
		Local_66[7 /*5*/] = { Local_272 + Vector(0f, 4,5f, 0f) };
		Local_66[8 /*5*/] = { Local_272 + Vector(0f, 5f, 0f) };
		Local_66[9 /*5*/] = { Local_272 + Vector(0f, 5,5f, 0f) };
		Local_66[10 /*5*/] = { Local_272 + Vector(0f, 6f, 0f) };
		Local_66[11 /*5*/] = { Local_272 + Vector(0f, 6,5f, 0f) };
		Local_66[12 /*5*/] = { Local_272 + Vector(0f, 7f, 0f) };
		Local_66[13 /*5*/] = { Local_271 };
		iVar0 = 0;
		while (iVar0 < Local_66.f_0)
		{
			Local_66[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0xC450B06E5AAA0985(uLocal_85))
		{
		}
		func_118(&Local_281, 0);
		iLocal_278 = 1;
		iLocal_68 = 1;
	}
}

void func_118(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_120(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_119(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_119(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_120(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_121(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_121(var uParam0)
{
	func_122(*uParam0, "NULL", uParam0->f_1);
}

void func_122(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_109(uParam0))
		{
			case 0:
				unk_0x55098D9E9AD58806(uParam2);
				break;
			
			case 1:
				unk_0x268BE77F77533D03(sParam1);
				break;
			
			case 2:
				unk_0x9B64A44D0B8D7CF6(sParam1);
				break;
			
			case 3:
				unk_0x633E3833FB96BCCB(sParam1);
				break;
			
			case 4:
				unk_0x7821F942CAEEBEE1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x8943BF9E0F15EDA0(sParam1);
				break;
			
			case 6:
				unk_0x59E2E0637E7776F3();
				break;
			
			case 7:
				unk_0xD21650BDA0F10841(iParam2);
				break;
			
			case 8:
				unk_0xA790E8E6FD7393AC(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0xAE427DA16687F323();
				break;
			
			default:
				break;
		}
	}
}

int func_123()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (func_124(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_38(func_36()))
		{
			iVar5 = func_71();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_125(iVar1, &Var0);
					fVar4 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_125(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_126(uParam1, "Abigail1", func_128(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 1:
			func_126(uParam1, "Abigail2", func_128(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 2:
			func_126(uParam1, "Barry1", func_128(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 3:
			func_126(uParam1, "Barry2", func_128(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 4:
			func_126(uParam1, "Barry3", func_128(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 5:
			func_126(uParam1, "Barry3A", func_128(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 6:
			func_126(uParam1, "Barry3C", func_128(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 7:
			func_126(uParam1, "Barry4", func_128(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_127(iParam0), 0, 0);
			break;
		
		case 8:
			func_126(uParam1, "Dreyfuss1", func_128(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 9:
			func_126(uParam1, "Epsilon1", func_128(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 10:
			func_126(uParam1, "Epsilon2", func_128(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 11:
			func_126(uParam1, "Epsilon3", func_128(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 12:
			func_126(uParam1, "Epsilon4", func_128(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 13:
			func_126(uParam1, "Epsilon5", func_128(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 14:
			func_126(uParam1, "Epsilon6", func_128(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 15:
			func_126(uParam1, "Epsilon7", func_128(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 16:
			func_126(uParam1, "Epsilon8", func_128(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 17:
			func_126(uParam1, "Extreme1", func_128(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 18:
			func_126(uParam1, "Extreme2", func_128(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 19:
			func_126(uParam1, "Extreme3", func_128(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 20:
			func_126(uParam1, "Extreme4", func_128(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 21:
			func_126(uParam1, "Fanatic1", func_128(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 22:
			func_126(uParam1, "Fanatic2", func_128(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 23:
			func_126(uParam1, "Fanatic3", func_128(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_127(iParam0), 0, 1);
			break;
		
		case 24:
			func_126(uParam1, "Hao1", func_128(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_127(iParam0), 0, 1);
			break;
		
		case 25:
			func_126(uParam1, "Hunting1", func_128(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 26:
			func_126(uParam1, "Hunting2", func_128(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 27:
			func_126(uParam1, "Josh1", func_128(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 28:
			func_126(uParam1, "Josh2", func_128(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 29:
			func_126(uParam1, "Josh3", func_128(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 30:
			func_126(uParam1, "Josh4", func_128(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 31:
			func_126(uParam1, "Maude1", func_128(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 32:
			func_126(uParam1, "Minute1", func_128(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 33:
			func_126(uParam1, "Minute2", func_128(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 34:
			func_126(uParam1, "Minute3", func_128(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 35:
			func_126(uParam1, "MrsPhilips1", func_128(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 36:
			func_126(uParam1, "MrsPhilips2", func_128(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 37:
			func_126(uParam1, "Nigel1", func_128(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 38:
			func_126(uParam1, "Nigel1A", func_128(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 39:
			func_126(uParam1, "Nigel1B", func_128(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 40:
			func_126(uParam1, "Nigel1C", func_128(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 41:
			func_126(uParam1, "Nigel1D", func_128(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 42:
			func_126(uParam1, "Nigel2", func_128(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 43:
			func_126(uParam1, "Nigel3", func_128(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 44:
			func_126(uParam1, "Omega1", func_128(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 45:
			func_126(uParam1, "Omega2", func_128(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 46:
			func_126(uParam1, "Paparazzo1", func_128(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 47:
			func_126(uParam1, "Paparazzo2", func_128(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 48:
			func_126(uParam1, "Paparazzo3", func_128(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 49:
			func_126(uParam1, "Paparazzo3A", func_128(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 50:
			func_126(uParam1, "Paparazzo3B", func_128(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 51:
			func_126(uParam1, "Paparazzo4", func_128(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 52:
			func_126(uParam1, "Rampage1", func_128(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 54:
			func_126(uParam1, "Rampage3", func_128(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 55:
			func_126(uParam1, "Rampage4", func_128(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 56:
			func_126(uParam1, "Rampage5", func_128(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 53:
			func_126(uParam1, "Rampage2", func_128(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 57:
			func_126(uParam1, "TheLastOne", func_128(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 58:
			func_126(uParam1, "Tonya1", func_128(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 59:
			func_126(uParam1, "Tonya2", func_128(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 60:
			func_126(uParam1, "Tonya3", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 61:
			func_126(uParam1, "Tonya4", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 62:
			func_126(uParam1, "Tonya5", func_128(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_126(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_127(int iParam0)
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

struct<2> func_128(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_129(iParam0) };
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

struct<2> func_129(int iParam0)
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

int func_130()
{
	if (func_133() && !func_134())
	{
		return 1;
	}
	if (func_132() && func_131())
	{
		return 1;
	}
	return 0;
}

bool func_131()
{
	return Global_113687 > 0;
}

int func_132()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_134()
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

int func_135()
{
	if (!func_93(5))
	{
		return 1;
	}
	if (func_130())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_124(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	if ((Global_113958 == func_75() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_139(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_138();
}

void func_138()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0xCCA6D8A84EE8C88A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)), 1);
		}
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
}

void func_139(int iParam0)
{
	Global_113958 = iParam0;
}

int func_140(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_134())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_57(0))
		{
			return 0;
		}
		if (func_130())
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_124(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_179(iParam1))
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_178(func_36()) == 4 || func_178(func_36()) == 5)
			{
				return 0;
			}
		}
		if (func_38(func_36()))
		{
			if (!func_177(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_176(Global_113969.f_24998.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x1DD05E817C89C737() - Global_113960) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_175())
		{
			return 0;
		}
		if (unk_0x3D2EB53CF281A77E())
		{
			return 0;
		}
		if (unk_0x9FA91AA1AC724CD0())
		{
			return 0;
		}
		if (!func_166(4))
		{
			return 0;
		}
		if (!func_93(5))
		{
			return 0;
		}
		if (func_165(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_4 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
		{
			if ((unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(377,153f, -717,567f, 10,0536f) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(320,9934f, 265,2515f, 82,1221f)) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_165(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_179(30) && !func_165(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_38(func_36()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_164(iVar4))
				{
					if (func_142(iVar2))
					{
						if (!func_141(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_36() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_141(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_143(iVar0);
}

int func_143(int iParam0)
{
	return func_144(iParam0, 1);
}

int func_144(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_164(iParam0))
	{
		return 0;
	}
	func_145(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_146(func_157(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_146(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_155(iParam1);
		iVar1 = func_153(iParam0);
		iVar2 = (func_153(iParam0) - func_153(iParam1));
		iVar3 = (func_155(iParam0) - func_155(iParam1));
		iVar4 = (func_152(iParam0) - func_152(iParam1));
		iVar5 = (func_151(iParam0) - func_151(iParam1));
		iVar6 = (func_150(iParam0) - func_150(iParam1));
		iVar7 = (func_149(iParam0) - func_149(iParam1));
	}
	else
	{
		iVar0 = func_155(iParam0);
		iVar1 = func_153(iParam1);
		iVar2 = (func_153(iParam1) - func_153(iParam0));
		iVar3 = (func_155(iParam1) - func_155(iParam0));
		iVar4 = (func_152(iParam1) - func_152(iParam0));
		iVar5 = (func_151(iParam1) - func_151(iParam0));
		iVar6 = (func_150(iParam1) - func_150(iParam0));
		iVar7 = (func_149(iParam1) - func_149(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_148(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_147(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_147(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_150(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_151(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_152(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_153(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_154(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_154(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_155(int iParam0)
{
	return iParam0 & 15;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_164(iParam1) || !func_164(iParam0))
	{
		return 1;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	var uVar0;
	
	func_163(&uVar0, unk_0x4BA5A16068183C5E());
	func_162(&uVar0, unk_0x18E502A71E28968C());
	func_161(&uVar0, unk_0x5295501D0862870D());
	func_160(&uVar0, unk_0xB12880C92EA6EE15());
	func_159(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_158(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_158(var uParam0, int iParam1)
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

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_160(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_155(*uParam0);
	iVar1 = func_153(*uParam0);
	if (iParam1 < 1 || iParam1 > func_148(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_150(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_151(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_153(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_155(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_152(iParam0);
	if (iVar5 < 1 || iVar5 > func_148(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_36();
				if (!func_38(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_174()) || Global_113016) || Global_32951) || func_173()) || func_44(8, -1)) || func_172()) || func_171()) || func_170()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_174()) || Global_32951) || func_173()) || func_44(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_174()) || Global_113016) || Global_32951) || func_173()) || func_44(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_174()) || Global_113016) || Global_32951) || func_173()) || func_44(8, -1)) || func_172()) || func_171()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_174() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_44(8, -1)) || func_169()) || func_168()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_44(8, -1) || func_172()) || func_171()) || func_168()) || func_167())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_174()) || Global_32951) || func_173()) || func_44(8, -1)) || func_171()) || func_170()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_174()) || func_171()) || Global_113016) || Global_32951) || func_173()) || Global_45250) || func_44(8, -1)) || func_170()) || func_168()) || func_169()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_174()) || Global_113016) || Global_32951) || func_173()) || func_44(8, -1)) || func_170()) || func_168()) || func_172()) || func_171()) || func_169())
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

var func_167()
{
	return Global_101572.f_1;
}

int func_168()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_169()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
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

bool func_171()
{
	return Global_101585.f_394 > 0;
}

bool func_172()
{
	return Global_101585.f_393 > 0;
}

var func_173()
{
	return Global_1575083;
}

int func_174()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_175()
{
	func_35();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0)
{
	return func_156(func_157(), iParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_36();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_178(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_180()
{
	int iVar0;
	
	if (Global_33100)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181()
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

void func_182()
{
	if (iLocal_278)
	{
		if (!iLocal_279)
		{
			unk_0x86A2BC11844DEEB3("RE14A_FAIL");
			func_220();
			if (!unk_0x4FAFF4BCB7633475(iLocal_76))
			{
				unk_0x0428AFDCAA63B06E(iLocal_76, 317, 1);
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_81, 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_81, 0) && !unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_81, 50f, 50f, 50f, 0, 1, 0))
				{
					func_194(iLocal_81, 0, 145);
				}
			}
			iLocal_95 = 0;
			while (iLocal_95 < 11)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_86[iLocal_95]))
				{
					unk_0x5D7CD709B34C90F0(uLocal_86[iLocal_95], 0);
				}
				iLocal_95++;
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_78, 0))
			{
				unk_0x2AEBE39F6BF7D6BC(iLocal_78, 0f);
				unk_0x5D7CD709B34C90F0(iLocal_78, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_87))
			{
				unk_0x5D7CD709B34C90F0(iLocal_87, 0);
			}
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x37B894853929BF1A(1);
			unk_0x747786364137DC63(1);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_90 = 1;
			unk_0xE6AC149D1121535D(1f);
			unk_0x268BE77F77533D03("re@construction");
			if (unk_0x78411E34CF90EA8C(uLocal_273))
			{
				unk_0x85E6A1E36B5E2E4D(uLocal_273, 0);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_82))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_82);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_83))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_83);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_84))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_84);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_85))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_85);
			}
		}
		unk_0x2AF2D6F164BD6F5A(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 1);
		unk_0x425BBE19F25A57AB(1f);
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xD7186A4A316964F2();
		unk_0x830C51B62E7CD5B2();
	}
	func_118(&Local_281, 0);
	func_183(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_183(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_136())
	{
		func_187(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_186(30000);
		StringCopy(&cVar0, func_185(Global_113958, 1), 64);
		if (func_74(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		unk_0x3AF124228E3EAF07(&cVar0, Global_113955, (unk_0x1DD05E817C89C737() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_113965, 0);
	}
	func_184(&Global_33008);
	Global_113959 = 0;
	func_139(-1);
}

void func_184(var uParam0)
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

char* func_185(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_186(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_187(int iParam0)
{
	func_188(iParam0, 0, func_193(iParam0));
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_157();
	func_191(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_190(iParam0, &uVar0);
	Var1 = { func_189(&uVar0) };
}

struct<16> func_189(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_151(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_150(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_152(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_155(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_153(*uParam0), 64);
	return Var0;
}

void func_190(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_155(*uParam0);
	iVar2 = func_152(*uParam0);
	iVar3 = func_151(*uParam0);
	iVar4 = func_150(*uParam0);
	iVar5 = func_149(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_148(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_148(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_192(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_163(uParam0, iParam1);
	func_162(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_159(uParam0, iParam5);
	func_160(uParam0, iParam4);
	func_158(uParam0, iParam6);
}

int func_193(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_194(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xED22194AB8539910(iParam0, &uVar0);
		if (!unk_0xD6F9DEE4765092A9(uVar1))
		{
			if (unk_0x70E57E9927B6BA58(uVar1) == unk_0x70E57E9927B6BA58("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_195(iParam0, iParam2);
	return 1;
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_201(iParam0))
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
	func_196(iParam0, &(Global_113969.f_32753.f_5510));
}

void func_196(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_200(uParam1);
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
		if (uParam1->f_65 == -1 && !func_199(uParam1->f_66))
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
		func_198(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_197(iVar0 + 1));
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

int func_197(int iParam0)
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

int func_198(int iParam0, var uParam1, var uParam2)
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

int func_199(int iParam0)
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

void func_200(var uParam0)
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

int func_201(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_218(iParam0, 0, 0)) || func_218(iParam0, 1, 0)) || func_218(iParam0, 2, 0)) || func_217(iParam0) != 145) || func_216(iParam0)) || func_215(iParam0)) || func_214(iParam0)) || func_213(iParam0)) || !func_202(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_215(iParam0))
		{
		}
		if (func_215(iParam0))
		{
		}
		if (func_218(iParam0, 0, 0))
		{
		}
		if (func_218(iParam0, 1, 0))
		{
		}
		if (func_218(iParam0, 2, 0))
		{
		}
		if (func_217(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_203(iParam0, 0, -1))
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

int func_203(int iParam0, bool bParam1, int iParam2)
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
		if (!func_181())
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
					if ((((!func_212() && !func_211()) && !func_210()) && !func_209()) && !func_181())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_208() || unk_0x761778199FE1211C()) || func_207())
					{
					}
					else if (!func_210())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_206(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_204(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_204(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_205())
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

int func_205()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_206(int iParam0, int iParam1)
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

var func_207()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_208()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_209()
{
	return 0;
}

int func_210()
{
	return 1;
}

int func_211()
{
	return 1;
}

int func_212()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	uVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_203(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
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

int func_215(int iParam0)
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

int func_216(int iParam0)
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

int func_217(int iParam0)
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

int func_218(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_219(iParam1, iVar0, &sVar1, &iVar2))
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

int func_219(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_220()
{
	Global_21152 = 0;
	func_221();
}

void func_221()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

