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
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
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
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72[1] = { 0 };
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 16;
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
	var uLocal_264 = 1097859072;
	var uLocal_265 = 1500;
	var uLocal_266 = 45;
	var uLocal_267 = 1103626240;
	var uLocal_268 = 5;
	var uLocal_269[1] = { 0 };
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	var uLocal_272 = 1;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276[1] = { 0 };
	var uLocal_277[4] = { 0, 0, 0, 0 };
	struct<9> Local_278 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	int iLocal_295 = 0;
	var uLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	struct<5> Local_306 = { 1, 0, 0, 0, 0 } ;
	var uLocal_307 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_61 = { 500f, 500f, 500f };
	fLocal_294 = -1f;
	iLocal_297 = -1;
	bLocal_301 = true;
	unk_0xFD49725F3FE7EE13("stripperhome");
	unk_0x925970A93719CADE(1);
	unk_0x8D76C231AB0E62A1(unk_0x259BE71D8A81D4FA(), 1);
	if (unk_0x96CFB880BAC634CE(75))
	{
		func_306();
	}
	bLocal_302 = ScriptParam_306.f_5;
	if (bLocal_302)
	{
		unk_0xDB2434E51017FFCC(32, 0, -1);
		func_301(0, -1, 0);
		unk_0x17C7D9B3979F5759(1);
		unk_0xAECC5FA98C879D67(0);
	}
	uLocal_72[0] = ScriptParam_306[0];
	Global_112993.f_1 = uLocal_72[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x5295501D0862870D();
	if (func_300() && ScriptParam_306.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_271(&ScriptParam_306, bVar0) && iLocal_70 != 6) && iLocal_70 != 5) && (iLocal_70 != -1 || !func_270(uLocal_298, 1024)))
	{
		func_262(0);
		system::wait(0);
	}
	unk_0x55098D9E9AD58806(func_261(0, 0));
	unk_0x55098D9E9AD58806(func_261(1, 0));
	if (!bVar1)
	{
		iLocal_70 = 2;
	}
	while (true)
	{
		system::wait(0);
		if (iLocal_300 > 0)
		{
			func_259();
			iLocal_300 = (iLocal_300 - system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
		}
		switch (iLocal_70)
		{
			case -1:
				func_258();
				break;
			
			case 0:
				func_217(1);
				break;
			
			case 1:
				func_110();
				break;
			
			case 2:
				func_217(0);
				break;
			
			case 3:
				func_92();
				break;
			
			case 4:
				func_39(bLocal_301);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_256))
				{
					func_7(&uLocal_256);
				}
				else if (func_1(&uLocal_256, 7,5f))
				{
					func_306();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_11()
{
	if (!func_270(uLocal_298, 8192))
	{
		if (func_38())
		{
			func_27();
		}
		else
		{
			iLocal_70 = 6;
		}
	}
	if (func_270(uLocal_298, 16384))
	{
		if (func_12())
		{
			iLocal_70 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
	{
		return 1;
	}
	if (func_270(uLocal_298, 8192))
	{
		unk_0x0FB8E752BCC547A9(uLocal_269[0], 60, 1);
		if (unk_0x65FFA94B82A71741(uLocal_269[0], 96,8033f, -1287,597f, 28,2688f, 5f, 5f, 2f, 0, 1, 1) || func_26(unk_0x4A8C381C258A124D(), 96,8033f, -1287,597f, 28,2688f, 1) > 100f)
		{
			if (unk_0xE10356B235A70E70(96,12f, -1284,91f, 29,43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x1F3E4227575DF103(joaat("prop_magenta_door"), 96,12f, -1284,91f, 29,43f, 1, 0f, 0);
			}
			if (unk_0x78411E34CF90EA8C(uLocal_277[0]))
			{
				if (unk_0x8DE2438443E6A145(uLocal_277[0]))
				{
					func_13(1, 1, 0);
					unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
					unk_0x85E6A1E36B5E2E4D(uLocal_277[0], 1);
				}
			}
			unk_0x734A9F4537A31459(&(uLocal_269[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), true, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_25(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_24())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_23(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_25(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_23(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_21(unk_0x259BE71D8A81D4FA())) && !func_17(unk_0x259BE71D8A81D4FA(), 0)) && !func_16()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_21(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_16()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
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

int func_21(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()
{
	return BitTest(Global_2621446, 3);
}

int func_23(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_24()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)
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

float func_26(int iParam0, struct<3> Param1, int iParam2)
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

void func_27()
{
	var uVar0;
	
	func_30();
	if (unk_0xE10356B235A70E70(96,12f, -1284,91f, 29,43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x1F3E4227575DF103(joaat("prop_magenta_door"), 96,12f, -1284,91f, 29,43f, 0, 0f, 0);
	}
	func_28(&uLocal_298, 16384);
	unk_0x5D7CD709B34C90F0(uLocal_269[0], 0);
	unk_0x0428AFDCAA63B06E(uLocal_269[0], 104, 1);
	unk_0xB5396F1FB088FE38(&uVar0);
	unk_0xA966E518B752B92A(0, 98,2041f, -1291,252f, 28,2688f, 1f, -1, 0,25f, 1, 1193033728);
	unk_0xA966E518B752B92A(0, 107,6303f, -1304,742f, 27,7688f, 1f, -1, 0,25f, 0, 1193033728);
	unk_0x10425721983AE158(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x93C0674FC00824D0(uVar0);
	unk_0x4BD42B0527065BB6(uLocal_269[0], uVar0);
	unk_0xD0557B139A542F12(&uVar0);
	func_28(&uLocal_298, 8192);
}

void func_28(var uParam0, int iParam1)
{
	func_29(uParam0, iParam1);
}

void func_29(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_30()
{
	if (!unk_0xF6C26AE940C14749(uLocal_269[0]) && func_37(1, 0, 1))
	{
		func_31(0, 0, 0);
		uLocal_277[0] = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", 90,1007f, -1281,573f, 28,6661f, 2,4422f, 0f, -113,4013f, 45f, 1, 2);
		unk_0xE37AF9002E782BA0(true, 0, 3000, 1, 0, 0);
	}
}

void func_31(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), false, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_32(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_14(23, 1);
}

void func_32(int iParam0)
{
	if (func_36())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_35())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_24())
	{
		Global_20930.f_1 = 3;
	}
}

void func_33(bool bParam0, bool bParam1)
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

bool func_35()
{
	return BitTest(Global_1956920, 5);
}

bool func_36()
{
	return BitTest(Global_1956920, 19);
}

int func_37(bool bParam0, bool bParam1, bool bParam2)
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

int func_38()
{
	if ((uLocal_72[0] == 8 || uLocal_72[0] == 9) || func_26(uLocal_269[0], 96,12f, -1284,91f, 29,43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_39(bool bParam0)
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	
	func_67();
	if (bParam0)
	{
		Var0 = { Local_285 };
	}
	else
	{
		func_66(&Var0, &uVar1, 0);
	}
	func_63(Var0);
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(uLocal_269[0], 0))
		{
			iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xFC8BFE4B41177C22(iVar2) && !unk_0x1C2F771CDC87A3A5(iVar2, 0))
			{
				if (iLocal_303)
				{
					if (func_60(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_59();
						unk_0x092B9247AF00F5CF(uLocal_269[0], 0, 16777216);
						func_40();
					}
				}
				else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_303 = 1;
				}
			}
		}
	}
}

void func_40()
{
	func_58();
	func_51(295, 0, 0);
	func_41(0);
	func_306();
}

void func_41(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_48())
	{
		return;
	}
	if (!iLocal_65)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_46(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0x3573EC2255786C32(131, func_45(), 0f);
		unk_0x3573EC2255786C32(108, func_44(), 0f);
		unk_0x3573EC2255786C32(102, func_43(), 0f);
		unk_0x3573EC2255786C32(8, func_42(), 0f);
	}
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
}

int func_42()
{
	return iLocal_63;
}

int func_43()
{
	return iLocal_64;
}

int func_44()
{
	return iLocal_62;
}

int func_45()
{
	return 0;
}

int func_46(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x261E3728EE56B3AC())
	{
	}
	if ((!unk_0xB10D024D4A098884() && (unk_0xD25970CBEE074E07() || !unk_0xB0DF27929B02C57E())) && unk_0xAE6B753124318E29())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x7260716F2E4D7661())
			{
				Var2 = { func_47(unk_0x259BE71D8A81D4FA()) };
				if (unk_0xE582BF3EDDBB1A68(&Var2))
				{
					if (unk_0xC07B1AA6155EC337(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x76CD105BCAC6EB9F() && Global_2693440.f_3)
			{
				unk_0xFFC169CFE58B4AE2(&Var0, &(Global_1928632.f_10));
			}
			else
			{
				unk_0x41B592D7008A639E(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xB10D024D4A098884())
	{
	}
	if (!unk_0xD25970CBEE074E07())
	{
	}
	if (unk_0xB0DF27929B02C57E())
	{
	}
	if (!unk_0xAE6B753124318E29())
	{
	}
	return 0;
}

struct<13> func_47(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_48()
{
	if ((unk_0x261E3728EE56B3AC() && unk_0x5F9F81C08516558E()) && func_49())
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	if (func_50())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_50()
{
	return Global_2696683;
}

void func_51(int iParam0, int iParam1, int iParam2)
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
		func_57((891 + iParam0), 1, -1);
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
		func_52();
	}
}

void func_52()
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
		func_56(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_55() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_53();
				}
			}
		}
	}
}

int func_53()
{
	if (func_54(0))
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

int func_54(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_55()
{
	return Global_32948;
}

int func_56(int iParam0, int iParam1)
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

void func_57(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_58()
{
	iLocal_64++;
	iLocal_65 = 1;
}

void func_59()
{
	if (unk_0xFC8BFE4B41177C22(uLocal_269[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
	{
		unk_0xFD61BB3B8F1CDB6D(uLocal_269[0], 1);
		if (unk_0x133460AD0F183CC9(uLocal_269[0]))
		{
			unk_0x5C4B3034CCDA5270(uLocal_269[0]);
		}
	}
}

int func_60(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_62(bParam5, bParam6);
	func_61(iParam0);
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

void func_61(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
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

void func_62(bool bParam0, bool bParam1)
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

void func_63(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(uLocal_275))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_275);
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		if (unk_0x7F420695E3F776FB(uLocal_269[0], 0))
		{
			if (unk_0xCECDBB848D53DEB2(uLocal_269[0], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_274))
				{
					uLocal_274 = func_64(Param0, 1);
				}
			}
		}
	}
}

var func_64(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_65(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(var uParam0, var uParam1, bool bParam2)
{
	Local_288 = { Local_288 };
	switch (uLocal_72[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92,8829f, -1281,123f, 28,1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_287 };
				*uParam1 = fLocal_291;
			}
			Local_288 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615,991f, 187,4827f, 59,1337f };
				*uParam1 = 217,5474f;
			}
			else
			{
				*uParam0 = { Local_287 };
				*uParam1 = fLocal_291;
			}
			Local_288 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538,432f, 3776,85f, 33,5178f };
				*uParam1 = 225,8821f;
			}
			else
			{
				*uParam0 = { Local_287 };
				*uParam1 = fLocal_291;
			}
			Local_288 = { *uParam0 };
			break;
	}
}

void func_67()
{
	if (unk_0x4FAFF4BCB7633475(uLocal_269[0]))
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_269[0]))
		{
		}
		else if (unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
		{
		}
		func_68(0);
	}
}

void func_68(int iParam0)
{
	if ((uLocal_72[0] > -1 && uLocal_72[0] < 10) && iParam0 != 2)
	{
		func_90(uLocal_72[0], (func_91(uLocal_72[0]) / 2));
	}
	func_88();
	switch (iParam0)
	{
		case 0:
			func_86("SCLUB_HOME_D", uLocal_72[0]);
			func_90(uLocal_72[0], 0);
			func_74(uLocal_72[0], 1);
			iLocal_70 = 6;
			break;
		
		case 1:
			unk_0x406CBCEA35499884();
			func_69("SCLUB_HOME_A", uLocal_72[0], 0);
			iLocal_70 = 5;
			break;
		
		case 2:
			iLocal_70 = 5;
			break;
		
		case 4:
			func_86("SCLUB_HOME_D3", uLocal_72[0]);
			iLocal_70 = 6;
			break;
		
		case 3:
			if (func_26(uLocal_269[0], 92,5861f, -1282,86f, 28,2548f, 1) < 10f)
			{
				iLocal_70 = 5;
			}
			else
			{
				iLocal_70 = 6;
			}
			break;
	}
}

void func_69(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_73(iParam1)}, 6);
	if (!func_72(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_71(sParam0, &uVar0, -1);
		}
		else
		{
			func_70(sParam0, &uVar0);
		}
	}
}

void func_70(var uParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_71(var uParam0, var uParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
}

bool func_72(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

struct<4> func_73(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_28(&(Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_75(&(Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_75(var uParam0, int iParam1)
{
	func_76(uParam0, iParam1);
}

void func_76(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_77()
{
	int iVar0;
	
	iVar0 = func_79();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_78(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
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

int func_79()
{
	func_80();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_80()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_84(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_83(unk_0x4A8C381C258A124D());
			if (func_82(iVar0) && (!func_81(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_82(Global_113969.f_2366.f_539.f_4321))
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

bool func_81(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_82(int iParam0)
{
	return iParam0 < 3;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)
{
	if (func_82(iParam0))
	{
		return func_85(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_85(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_86(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_73(iParam1)}, 6);
	func_87(sParam0, &uVar0, 7500, 1);
}

void func_87(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

void func_88()
{
	if (unk_0xC450B06E5AAA0985(uLocal_275))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_275);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_274))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_274);
	}
	func_89();
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_276[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_276[iVar0]));
		}
		iVar0++;
	}
}

void func_90(int iParam0, int iParam1)
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_91(int iParam0)
{
	return Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/];
}

void func_92()
{
	func_67();
	func_88();
	switch (iLocal_75)
	{
		case 0:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(uLocal_269[0], 0))
				{
					if (!func_109("SCLUB_SECLUDED"))
					{
						func_108("SCLUB_SECLUDED");
					}
					if (func_107() && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) == 0f)
					{
						unk_0x428C32CC68809A35(1);
						unk_0x80813AC549A1E8AE(func_102(uLocal_269[0], 0, 0));
						iLocal_75 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_95())
			{
				iLocal_75 = 2;
			}
			break;
		
		case 2:
			if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_perform_sequence")) != 1)
			{
				func_259();
				if (unk_0x5295501D0862870D() > 20 || unk_0x5295501D0862870D() < 4)
				{
					bLocal_301 = false;
				}
				unk_0xF20AB5C13902BB8A(iLocal_43);
				func_93(bLocal_301);
				iLocal_70 = 4;
			}
			break;
	}
}

void func_93(bool bParam0)
{
	switch (uLocal_72[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_86("SCLUB_HOME_GO", uLocal_72[0]);
			}
			else
			{
				func_94("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_94("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_94(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_95()
{
	if (unk_0xE100DD4F82A51BDE(func_102(uLocal_269[0], 0, 0)))
	{
		func_96(uLocal_269[0], 0, 1, -1, 1);
		func_96(unk_0x4A8C381C258A124D(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 1);
	if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		return;
	}
	iLocal_43 = unk_0x3B5989D5DB08A155();
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && func_101(0, 1))
	{
		if (iLocal_43 != 4)
		{
			unk_0xF20AB5C13902BB8A(4);
		}
	}
	bVar1 = func_100(iVar0);
	sVar2 = func_102(iParam0, 0, 0);
	if (!unk_0xE100DD4F82A51BDE(sVar2))
	{
		unk_0x80813AC549A1E8AE(sVar2);
	}
	else
	{
		unk_0xB5396F1FB088FE38(&uVar3);
		unk_0x10425721983AE158(0, sVar2, func_97(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x10425721983AE158(0, sVar2, func_97(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x10425721983AE158(0, sVar2, func_97(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x10425721983AE158(0, sVar2, func_97(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x10425721983AE158(0, sVar2, func_97(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x93C0674FC00824D0(uVar3);
		unk_0x4BD42B0527065BB6(iParam0, uVar3);
		if (bParam4)
		{
			unk_0xD0557B139A542F12(&uVar3);
		}
	}
}

char* func_97(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(18);
					}
					else
					{
						sVar0 = func_99(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(8);
				}
				else
				{
					sVar0 = func_99(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(18);
				}
				else
				{
					sVar0 = func_98(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(8);
			}
			else
			{
				sVar0 = func_98(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(19);
					}
					else
					{
						sVar0 = func_99(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(9);
				}
				else
				{
					sVar0 = func_99(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(19);
				}
				else
				{
					sVar0 = func_98(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(9);
			}
			else
			{
				sVar0 = func_98(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(20);
					}
					else
					{
						sVar0 = func_99(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(10);
				}
				else
				{
					sVar0 = func_99(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(20);
				}
				else
				{
					sVar0 = func_98(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(10);
			}
			else
			{
				sVar0 = func_98(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(21);
					}
					else
					{
						sVar0 = func_99(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(11);
				}
				else
				{
					sVar0 = func_99(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(21);
				}
				else
				{
					sVar0 = func_98(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(11);
			}
			else
			{
				sVar0 = func_98(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(22);
					}
					else
					{
						sVar0 = func_99(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(12);
				}
				else
				{
					sVar0 = func_99(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(22);
				}
				else
				{
					sVar0 = func_98(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(12);
			}
			else
			{
				sVar0 = func_98(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_99(3);
				}
				else
				{
					sVar0 = func_99(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(3);
			}
			else
			{
				sVar0 = func_98(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_98(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_99(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_100(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x58428BC502F48C75(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_101(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xBCF87EE3DC296C2A(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xBCF87EE3DC296C2A(1) == 4;
		}
	}
	return bVar0;
}

char* func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 1);
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (func_100(iVar0))
			{
				if ((!func_101(0, 1) || iParam2) && !bParam1)
				{
					return func_106();
				}
				else
				{
					return func_105();
				}
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_101(0, 1) || iParam2) && !bParam1)
	{
		return func_104();
	}
	return func_103();
}

char* func_103()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_105()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_106()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_66(&Var5, &uVar6, 0);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
		Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		if (unk_0x8E942EABE97448C2(Var3, &Var7, 1077936128, 0))
		{
			fVar8 = system::vdist(Var3, Var7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (system::vdist(Var3, Local_285) < 20f || system::vdist(Var3, Var5) < 20f)
		{
			return 0;
		}
		if (unk_0x00CC36CA06DD06AD(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x02E029D1D9614563(Var3, fVar4, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xAD915B5E38F323E5(iVar0, unk_0x4A8C381C258A124D(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x66D94742BB3D032F(Var3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
					{
						iVar0 = unk_0xFD5C5BBD1FE92BB7(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_108(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_109(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_71 < 12 && iLocal_71 >= 2)
	{
		if (func_215(3000))
		{
			unk_0x8F72AF14CE5AACE4(1000);
			iLocal_71 = 12;
		}
	}
	if (!bLocal_67 && iLocal_71 >= 5)
	{
		iVar0 = unk_0x1D25F777D0165BF3();
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("blimp2"))
			{
				bLocal_67 = false;
			}
			else if (unk_0x9E20DC08879FF3FC(unk_0x1D25F777D0165BF3()) && uLocal_72[0] == 5)
			{
				bLocal_67 = func_212(&uLocal_66, -865f, 516,3f, 90f, 1, 15f);
			}
			else if (func_211(unk_0x1D25F777D0165BF3()))
			{
				bLocal_67 = func_212(&uLocal_66, Local_290, 1, fLocal_292);
			}
			else
			{
				bLocal_67 = func_212(&uLocal_66, Local_285, 1, fLocal_292);
			}
		}
	}
	if (iLocal_71 > 0 && iLocal_71 < 13)
	{
		unk_0x43AE50D2A33F6E2A();
	}
	switch (iLocal_71)
	{
		case 0:
			unk_0x428C32CC68809A35(1);
			unk_0x406CBCEA35499884();
			func_88();
			unk_0xD7E1DF759CD0FFF2("TIME_LAPSE", 0, -1);
			func_31(56, 1, 0);
			if (!func_270(uLocal_298, 131072))
			{
				func_28(&uLocal_298, 131072);
			}
			if (!func_270(uLocal_298, 256))
			{
				func_210();
				func_28(&uLocal_298, 256);
			}
			if (!func_270(uLocal_298, 32768))
			{
				unk_0x80813AC549A1E8AE(func_209());
				func_28(&uLocal_298, 32768);
			}
			if (!func_270(uLocal_298, 256))
			{
				unk_0x80813AC549A1E8AE(func_208());
				func_28(&uLocal_298, 256);
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iLocal_305 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				func_207(unk_0x4A8C381C258A124D(), iLocal_305);
				iLocal_71 = 1;
			}
			else
			{
				func_59();
				func_205(unk_0x4A8C381C258A124D(), Local_283);
				func_205(uLocal_269[0], Local_284);
				iLocal_71 = 2;
			}
			func_203();
			break;
		
		case 1:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_305, 1), Local_285) < 2f)
				{
					func_59();
					func_205(unk_0x4A8C381C258A124D(), Local_283);
					func_205(uLocal_269[0], Local_284);
					unk_0x6981C3213B841071();
					iLocal_71 = 2;
				}
				else if (unk_0x1DD05E817C89C737() >= 10000)
				{
					iLocal_71 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0x8DE2438443E6A145(uLocal_277[0]))
			{
				unk_0x4CBC5D1BC117616B(uLocal_277[0], 1);
				unk_0xE37AF9002E782BA0(true, 0, 3000, 1, 0, 0);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
				{
					if (unk_0x4B423FAA24E8ABF0(iLocal_305) == joaat("blimp2"))
					{
						unk_0x4285E11B28063EE0(iLocal_305, 0, 0);
					}
				}
				func_8(&uLocal_250);
				iLocal_71 = 3;
			}
			break;
		
		case 3:
			if (func_202(&uLocal_250) > 1f)
			{
				unk_0xB56F35D8A770F80F(uLocal_277[1], uLocal_277[0], 6000, 1, 1);
				func_201(&Local_278, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x5295501D0862870D();
				iLocal_295 = iVar1 + 8;
				if (iLocal_295 > 23)
				{
					iLocal_295 = (iLocal_295 - 24);
				}
				Local_278.f_7 = iVar1;
				Local_278.f_8 = iLocal_295;
				func_2(&uLocal_250);
				iLocal_71 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x323C4A67159DAD02(uLocal_277[1]) && unk_0x8DE2438443E6A145(uLocal_277[1]))
			{
				if (!func_270(uLocal_296, 512))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_305) && !unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
					{
						unk_0xC3680B85B2D7086A(iLocal_305, 1);
					}
					func_198(unk_0x4A8C381C258A124D(), func_200());
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), func_197());
					func_174();
					func_28(&uLocal_296, 512);
				}
				else if (!func_270(uLocal_296, 2048))
				{
					if (unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
					{
					}
					if (!func_173() && !unk_0x912159A05BE6B52E(uLocal_269[0]))
					{
						func_174();
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							unk_0xDCD95AE65EFC28CE(unk_0x4A8C381C258A124D());
							unk_0x04C016145CE6A18B(unk_0x4A8C381C258A124D(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_28(&uLocal_296, 2048);
						func_8(&uLocal_250);
						sLocal_271 = func_172();
						iLocal_71 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_202(&uLocal_250) > 1f)
			{
				if (func_147(iLocal_295, 0, sLocal_271, "", &Local_278, (func_202(&uLocal_250) * 0,2f), 0))
				{
					if (!func_173())
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_305))
						{
							if (unk_0x4B423FAA24E8ABF0(iLocal_305) != joaat("blimp2"))
							{
								unk_0x2094BC4B6731BA68(Local_284, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x2094BC4B6731BA68(Local_284, 20f, 1, 0, 0, 0);
						}
						if (unk_0xFC8BFE4B41177C22(uLocal_269[0]))
						{
							unk_0x4285E11B28063EE0(uLocal_269[0], 0, 0);
						}
						unk_0x5514EB508DD5A132(unk_0x4A8C381C258A124D(), 0);
						func_8(&uLocal_250);
						iLocal_71 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
			if (func_202(&uLocal_250) > 1,5f)
			{
				if (bLocal_67)
				{
					func_145(&uLocal_66);
				}
				func_8(&uLocal_250);
				iLocal_71 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x8DE2438443E6A145(uLocal_277[2]))
			{
				unk_0x714097CFC7878BD0();
				unk_0x9EFA902715EB835D(1);
				unk_0x70F19143E4E40117(1);
				unk_0xB56F35D8A770F80F(uLocal_277[2], uLocal_277[1], 6000, 1, 1);
				func_8(&uLocal_250);
				iLocal_71 = 8;
			}
			break;
		
		case 8:
			if (!func_270(uLocal_298, 262144))
			{
				if (func_202(&uLocal_250) >= 1,25f)
				{
					func_144();
				}
			}
			if (func_202(&uLocal_250) > 6f)
			{
				unk_0x4CBC5D1BC117616B(uLocal_277[3], 1);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
				{
					if (unk_0x4B423FAA24E8ABF0(iLocal_305) == joaat("blimp2"))
					{
						unk_0x4285E11B28063EE0(iLocal_305, 1, 0);
					}
					unk_0xEE0BCDB1B5E36BCB(iLocal_305, 1, 1);
					unk_0x2AEBE39F6BF7D6BC(iLocal_305, 1000f);
					unk_0xDF9DC0584881B7AF(iLocal_305, 1000f);
					unk_0xF698038C13845696(iLocal_305);
				}
				func_8(&uLocal_250);
				iLocal_71 = 10;
			}
			break;
		
		case 10:
			if (func_202(&uLocal_250) > 2f)
			{
				unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
				iLocal_71 = 13;
			}
			break;
		
		case 12:
			if (unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
			{
				if (!func_270(uLocal_298, 262144))
				{
					unk_0xCB7327FDCE6757E1(unk_0x259BE71D8A81D4FA(), Local_287, fLocal_291, 0, 1, 1);
					func_144();
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
				{
					if (unk_0x4B423FAA24E8ABF0(iLocal_305) == joaat("blimp2"))
					{
						unk_0x4285E11B28063EE0(iLocal_305, 1, 0);
					}
				}
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_305, 1, 1);
					unk_0x2AEBE39F6BF7D6BC(iLocal_305, 1000f);
					unk_0xDF9DC0584881B7AF(iLocal_305, 1000f);
					unk_0xF698038C13845696(iLocal_305);
				}
				func_8(&uLocal_250);
				iLocal_71 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x78ABC1D11B34F324() && func_202(&uLocal_250) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D()), 0, 0);
				unk_0x7CCB2F844CA7C337(unk_0x259BE71D8A81D4FA(), 30, 1, 0);
				if (unk_0x700C28A639389477(unk_0x4A8C381C258A124D(), func_84(0)))
				{
					func_143();
				}
				unk_0x2AF2D6F164BD6F5A(Local_285 - Vector(3f, 3f, 3f), Local_285 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_305, 0))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_305, 1, 1);
					if (unk_0x4B423FAA24E8ABF0(iLocal_305) != joaat("blimp2"))
					{
						unk_0xB2BD5837A8D3CEDA(iLocal_305, Local_285, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(iLocal_305, fLocal_292);
						if (unk_0x9E20DC08879FF3FC(iLocal_305) && uLocal_72[0] == 5)
						{
							unk_0xB2BD5837A8D3CEDA(iLocal_305, -865f, 516,3f, 90f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(iLocal_305, 15f);
						}
						else if (func_211(iLocal_305))
						{
							unk_0xB2BD5837A8D3CEDA(iLocal_305, Local_290, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(iLocal_305, fLocal_293);
						}
						unk_0x1DE99C193C7EC64B(iLocal_305, 1084227584);
					}
				}
				if (!unk_0x15CCE8886267624F())
				{
					func_201(&Local_278, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x2C9A2F8762B95F5C(8, 0, 0);
					func_141(system::to_float(8));
					unk_0x10B228D2FDB7AF16(2000);
					unk_0x64BB72494B9DF6DC(0);
					unk_0xD815D4BD1AE9E85A(0, 1065353216);
					func_201(&Local_278, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0xFC8BFE4B41177C22(uLocal_269[0]))
				{
					unk_0x734A9F4537A31459(&(uLocal_269[0]));
				}
				if (!func_140(uLocal_72[0], -1))
				{
					if (uLocal_72[0] == 5)
					{
						func_69("SCLUB_PHON_HELP_ALT", uLocal_72[0], 0);
					}
					else
					{
						func_69("SCLUB_PHON_HELP", uLocal_72[0], 0);
					}
					func_121(uLocal_72[0], 1, -1);
					system::wait(4000);
				}
				func_119(uLocal_72[0]);
				iVar2 = func_118(uLocal_72[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_117(uLocal_72[0]);
					iVar4 = func_116(iVar2);
					func_111(-384575792, iVar3, iVar4, 3, func_115(), func_114(uLocal_72[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_40();
			}
			break;
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_54(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_113(iParam3);
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x8744D2E3FC95740E(&(Var0.f_1), 0);
		Global_113969.f_7691.f_651[Global_113969.f_7691.f_764 /*14*/] = { Var0 };
		Global_113969.f_7691.f_764++;
		func_112(0);
		func_112(1);
		func_112(2);
		return 1;
	}
	return 0;
}

void func_112(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_82(bParam0))
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

int func_113(int iParam0)
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

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_115()
{
	func_80();
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

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_118(int iParam0)
{
	return Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_119(int iParam0)
{
	if (func_118(iParam0) < 0)
	{
		func_120(iParam0, 0);
	}
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_120(int iParam0, int iParam1)
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_121(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_77();
	}
	if (func_139(iParam2) == 4)
	{
	}
	bVar0 = Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			if (!func_138(func_114(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_138(func_114(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_137(iParam0, 0);
			func_131(func_114(iParam0), func_139(iParam2), 1);
			iVar1 = unk_0xC5935DFB3F39785A(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_130() /*5570*/].f_681.f_1273), iParam0);
					func_127(-60084924, 15, 0);
					break;
			}
			func_126(iVar1);
			func_125(iParam0, iVar1);
			Global_112962.f_15[iParam0] = unk_0x1DD05E817C89C737();
		}
	}
	else if (bVar0)
	{
		func_122(func_114(iParam0), func_139(iParam2));
	}
}

void func_122(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_118[bParam0 /*10*/].f_8 != 181)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_124(bParam0, iVar0, 0);
			func_123(bParam0, iVar0, 0);
		}
	}
}

void func_123(int iParam0, int iParam1, int iParam2)
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

void func_124(int iParam0, int iParam1, int iParam2)
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

void func_125(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_112962.f_4[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
	}
	else
	{
		Global_112962.f_4[iParam0] = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(1200000, 2100000));
	}
}

void func_126(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_112962.f_3 = (unk_0x1DD05E817C89C737() + iParam0);
	}
	else
	{
		Global_112962.f_3 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(21600000, 25200000));
	}
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_129(iParam1, iParam2))
	{
		iVar0 = func_128();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_128()
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

int func_129(int iParam0, var uParam1)
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

int func_130()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_131(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = bParam0;
	if (Global_118[bParam0 /*10*/].f_8 != 181)
	{
		func_136();
		if (iParam1 == 4)
		{
			func_124(bParam0, 0, 1);
			func_124(bParam0, 1, 1);
			func_124(bParam0, 2, 1);
			func_123(bParam0, 0, 1);
			func_123(bParam0, 1, 1);
			func_123(bParam0, 2, 1);
		}
		else
		{
			if (func_135(bParam0, iParam1) == 1 && func_134(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_124(bParam0, iVar0, 1);
			func_123(bParam0, iVar0, 1);
			if (bParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
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
						Global_9459[iParam1 /*4*/] = { func_133(bParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_133(bParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_132();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_133(bParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_132();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_133(bParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_132();
			}
		}
	}
}

void func_132()
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
	unk_0x8744D2E3FC95740E(&Global_8800, 0);
}

struct<4> func_133(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_134(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_135(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_136()
{
	if (func_81(14))
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
		Global_20930 = func_79();
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

void func_137(int iParam0, int iParam1)
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_138(bool bParam0, int iParam1)
{
	if (func_135(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_140(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_77();
	}
	return Global_113969.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_141(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5)))
		{
			func_142(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_113969.f_18106.f_362[iVar1 /*3*/])))
		{
			func_142(&(Global_113969.f_18106.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xDB57B7ED2C49BEAD();
}

void func_142(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_97975[iVar0] = Global_97975[iVar0 + 1];
		}
		else
		{
			Global_97975[iVar0] = unk_0x1DD05E817C89C737();
		}
		iVar0++;
	}
}

void func_144()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xE100DD4F82A51BDE(sLocal_270))
	{
	}
	else
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 50000);
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		unk_0xB5396F1FB088FE38(&uVar1);
		unk_0xA966E518B752B92A(0, Local_287, 1f, -1, 0,25f, 0, fLocal_291);
		if (iVar0 < 15000)
		{
			unk_0x10425721983AE158(0, sLocal_270, "fidget_rub_hands", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x10425721983AE158(0, sLocal_270, "fidget_rub_chin", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x10425721983AE158(0, sLocal_270, "fidget_arm_swing", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x93C0674FC00824D0(uVar1);
		unk_0x4BD42B0527065BB6(unk_0x4A8C381C258A124D(), uVar1);
		unk_0xD0557B139A542F12(&uVar1);
		func_28(&uLocal_298, 262144);
	}
}

void func_145(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xFC8BFE4B41177C22(uVar0))
	{
		if (!func_146(iVar0))
		{
			unk_0x44C48AC14D3C09ED(iVar0, 1, 0);
			unk_0x4285E11B28063EE0(iVar0, 1, 0);
			unk_0x5D7CD709B34C90F0(iVar0, 0);
		}
	}
}

int func_146(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_171();
			iVar4 = func_171();
			func_170(&iVar4, iParam0);
			func_169(&iVar4, iParam1);
			func_168(&iVar4, 0);
			if (func_166(*uParam4, iVar4))
			{
				func_161(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_158(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_141((system::to_float(uParam4->f_11) / 3600f));
			unk_0xD1EDF428E9679161(0,6f);
			unk_0x70F19143E4E40117(0);
			unk_0x9EFA902715EB835D(0);
			func_157();
			uParam4->f_10 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xCAC4020CCF361AC8("TOD_SHIFT_SCENE");
			func_156();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0,5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x70E57E9927B6BA58(sParam2) != 0)
					{
						unk_0xE0F4EA3A654155A3(sParam2, 1f);
					}
					if (unk_0x70E57E9927B6BA58(sParam3) != 0)
					{
						unk_0xB7C3B23648284A54();
						unk_0xEE3C332799057645(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0,99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_161(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xCBE10A13619B9FAA(func_155(iVar4), func_154(iVar4), func_153(iVar4));
				unk_0x8E4825CCACA34B58(uParam4->f_10);
				unk_0x48FA483FE4F18CFE("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0,1f;
			fVar9 = 0,9f;
			fVar11 = func_152(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = system::round((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_161(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xCBE10A13619B9FAA(func_155(iVar4), func_154(iVar4), func_153(iVar4));
			if (func_151(iVar4) != unk_0xB12880C92EA6EE15())
			{
				unk_0xF13E285EDAB2D255(func_151(iVar4), func_150(iVar4), func_148(iVar4));
			}
			func_259();
			unk_0xE3349610A15FA0D0(6);
			break;
	}
	return 0;
}

int func_148(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_149(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_149(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_150(int iParam0)
{
	return iParam0 & 15;
}

int func_151(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

float func_152(float fParam0, float fParam1, float fParam2)
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

int func_153(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_154(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_155(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xFE3A52C5B7AE3101(Global_113969.f_14144[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_157()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	unk_0x38911F7BA2D48F10(iVar0, "OFF");
	return 1;
}

void func_158(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_166(iParam0, iParam1))
	{
		iVar0 = func_150(iParam1);
		iVar1 = func_148(iParam0);
		iVar2 = (func_148(iParam0) - func_148(iParam1));
		iVar3 = (func_150(iParam0) - func_150(iParam1));
		iVar4 = (func_151(iParam0) - func_151(iParam1));
		iVar5 = (func_155(iParam0) - func_155(iParam1));
		iVar6 = (func_154(iParam0) - func_154(iParam1));
		iVar7 = (func_153(iParam0) - func_153(iParam1));
	}
	else
	{
		iVar0 = func_150(iParam0);
		iVar1 = func_148(iParam1);
		iVar2 = (func_148(iParam1) - func_148(iParam0));
		iVar3 = (func_150(iParam1) - func_150(iParam0));
		iVar4 = (func_151(iParam1) - func_151(iParam0));
		iVar5 = (func_155(iParam1) - func_155(iParam0));
		iVar6 = (func_154(iParam1) - func_154(iParam0));
		iVar7 = (func_153(iParam1) - func_153(iParam0));
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
		iVar4 = (iVar4 + func_160(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_159(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_159(float fParam0, float fParam1, float fParam2)
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

int func_160(int iParam0, int iParam1)
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

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_148(*iParam0);
	iVar1 = func_150(*iParam0);
	iVar2 = func_151(*iParam0);
	iVar3 = func_155(*iParam0);
	iVar4 = func_154(*iParam0);
	iVar5 = func_153(*iParam0);
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
	iVar6 = func_160(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_160(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_168(uParam0, iParam1);
	func_169(uParam0, iParam2);
	func_170(uParam0, iParam3);
	func_165(uParam0, iParam5);
	func_164(uParam0, iParam4);
	func_163(uParam0, iParam6);
}

void func_163(var uParam0, int iParam1)
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

void func_164(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(*uParam0);
	iVar1 = func_148(*uParam0);
	if (iParam1 < 1 || iParam1 > func_160(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_167(iParam1) || !func_167(iParam0))
	{
		return 1;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
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
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
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
	iVar0 = func_153(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_154(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_155(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_148(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_150(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_151(iParam0);
	if (iVar5 < 1 || iVar5 > func_160(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 20));
}

void func_169(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 14));
}

void func_170(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 9));
}

int func_171()
{
	var uVar0;
	
	func_168(&uVar0, unk_0x4BA5A16068183C5E());
	func_169(&uVar0, unk_0x18E502A71E28968C());
	func_170(&uVar0, unk_0x5295501D0862870D());
	func_164(&uVar0, unk_0xB12880C92EA6EE15());
	func_165(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_163(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

char* func_172()
{
	char* sVar0;
	
	switch (uLocal_72[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_173()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	if (!unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
	{
		if (uLocal_72[0] == 8 || uLocal_72[0] == 9)
		{
			func_195(&uLocal_76, 1, 0, func_196(uLocal_72[0]), 0, 1);
			func_177("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_175(uLocal_269[0], "SEX_ORAL", 10);
		}
	}
}

void func_175(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_176(iParam2), 1);
}

int func_176(int iParam0)
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

int func_177(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_194())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_193(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_192(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_178(&uLocal_76, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_178(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_191(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_179(sParam2, iParam3, 0);
}

int func_179(char* sParam0, int iParam1, bool bParam2)
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
					func_190();
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
		if (func_189(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_188();
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
				func_136();
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
				if (func_187())
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
			if (func_24())
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
			func_186();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_185();
		func_180();
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
		func_190();
	}
	return 0;
}

void func_180()
{
	if (!func_181())
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

int func_181()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_184())
	{
		return 0;
	}
	if (func_182(unk_0x259BE71D8A81D4FA()))
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

bool func_182(int iParam0)
{
	return func_183(iParam0, 20);
}

var func_183(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_184()
{
	return -1;
}

void func_185()
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

void func_186()
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

int func_187()
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

void func_188()
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

bool func_189(int iParam0, int iParam1)
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

void func_190()
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

void func_191(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_192(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_72[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_193(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_79() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_79() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_79() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_192(*sParam0) };
	}
}

int func_194()
{
	if ((unk_0xFBA523E6F8ACE541() || unk_0x1F9EB85925C3ECD7()) || Global_22286 != 0)
	{
		return 0;
	}
	return 1;
}

void func_195(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_197()
{
	switch (uLocal_72[0])
	{
		case 1:
			return 325,6f;
			break;
		
		case 0:
			return 52,89f;
			break;
		
		case 4:
			return 14,5f;
			break;
		
		case 5:
			return 43,85f;
			break;
		
		case 8:
			return 193,5f;
			break;
		
		case 9:
			return 233,2f;
			break;
	}
	return 0f;
}

Vector3 func_198(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0,15f);
	if (unk_0xB1EAADCB692D69CE(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_199(iParam0))
	{
		unk_0xB2BD5837A8D3CEDA(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_199(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

Vector3 func_200()
{
	switch (uLocal_72[0])
	{
		case 1:
			return 130,7462f, -1896,513f, 22,3246f;
			break;
		
		case 0:
			return -162,4315f, -1635,107f, 32,6529f;
			break;
		
		case 4:
			return -197,6542f, 92,3329f, 68,5846f;
			break;
		
		case 5:
			return -848,9675f, 510,048f, 89,8218f;
			break;
		
		case 8:
			return -28,5266f, -1565,793f, 28,918f;
			break;
		
		case 9:
			return 3315,045f, 5174,08f, 17,6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()), 64);
	}
	if (!unk_0xFD216000DC314A92())
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
	}
	else
	{
		unk_0xE37AF9002E782BA0(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x428C32CC68809A35(1);
	}
	else
	{
		if (unk_0x78411E34CF90EA8C(uParam0->f_4))
		{
			if (unk_0xBC886554B5888A64(uParam0->f_4))
			{
				unk_0x4CBC5D1BC117616B(uParam0->f_4, 0);
			}
			unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 1);
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
		}
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			unk_0x4285E11B28063EE0(iVar0, 1, 0);
		}
		unk_0x48FA483FE4F18CFE("TIME_LAPSE");
		if (unk_0xBC2EE32DE886BD08("TOD_SHIFT_SCENE"))
		{
			unk_0x8E4825CCACA34B58(uParam0->f_10);
			unk_0x48FA483FE4F18CFE("TIME_LAPSE");
			unk_0xB43467C43086A6A1("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0, 0);
	func_156();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x15CCE8886267624F())
		{
			unk_0x10B228D2FDB7AF16(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113969.f_32753.f_4801 != -15)
		{
			Global_113969.f_32753.f_4801 = func_171();
		}
	}
}

float func_202(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_203()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2[4];
	var uVar3[4];
	
	func_204(&Var1, &Var2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x78411E34CF90EA8C(uLocal_277[iVar0]))
		{
			uLocal_277[iVar0] = unk_0x96A32328480B485C(26379945, Var1[iVar0 /*3*/], Var2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			unk_0x2A09425009DAD0F5(uLocal_277[iVar0], "HAND_SHAKE", 0,3f);
		}
		iVar0++;
	}
	Local_278.f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
	unk_0xC606B0B9BA3D6036(Local_278.f_4, Var1[0 /*3*/], Var2[0 /*3*/], 6000, 3, 2);
	unk_0xC606B0B9BA3D6036(Local_278.f_4, Var1[1 /*3*/], Var2[1 /*3*/], 6000, 3, 2);
	unk_0x58BDA5D9262F5D30(Local_278.f_4, uVar3[0]);
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_72[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140,9085f, -1885,527f, 25,6959f };
			*(uParam1[0 /*3*/]) = { -9,0308f, 0f, 126,3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141,712f, -1884,935f, 30,7241f };
			*(uParam1[1 /*3*/]) = { 4,7025f, 0f, 129,5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139,1899f, -1885,865f, 24,96737f };
			*(uParam1[2 /*3*/]) = { -3,535496f, 0,081819f, 135,1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133,9669f, -1893,292f, 23,9573f };
			*(uParam1[3 /*3*/]) = { -1,8669f, -0,0329f, -5,5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186,5408f, -1629,328f, 35,8275f };
			*(uParam1[0 /*3*/]) = { -1,5588f, 0f, -118,8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186,1923f, -1629,505f, 48,7132f };
			*(uParam1[1 /*3*/]) = { -1,2745f, 0f, -116,9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184,9595f, -1632,193f, 36,32303f };
			*(uParam1[2 /*3*/]) = { -3,262451f, 0,073971f, -100,6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164,7078f, -1632,25f, 34,0944f };
			*(uParam1[3 /*3*/]) = { -3,7303f, 0,0222f, 108,1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208,6886f, 112,8581f, 73,0855f };
			*(uParam1[0 /*3*/]) = { -0,1055f, 0f, -156,0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208,9068f, 113,3747f, 85,2889f };
			*(uParam1[1 /*3*/]) = { 3,8438f, 0f, -157,0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206,2357f, 106,941f, 72,07555f };
			*(uParam1[2 /*3*/]) = { -11,58381f, 0,084975f, -158,9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197,6886f, 94,7063f, 69,814f };
			*(uParam1[3 /*3*/]) = { 0,5155f, -0,0266f, 48,8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871,6285f, 520,8466f, 93,1945f };
			*(uParam1[0 /*3*/]) = { -0,1377f, -1,3933f, -105,9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871,5255f, 521,1066f, 104,6356f };
			*(uParam1[1 /*3*/]) = { 3,1118f, -1,3933f, -105,9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866,6436f, 514,6121f, 92,90275f };
			*(uParam1[2 /*3*/]) = { -5,957637f, -1,324997f, -101,9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849,5522f, 514,2322f, 91,0095f };
			*(uParam1[3 /*3*/]) = { -1,626f, -1,3198f, 92,3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27,698f, -1584,646f, 31,1034f };
			*(uParam1[0 /*3*/]) = { 0,0044f, 0f, -1,9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27,698f, -1584,646f, 40,4849f };
			*(uParam1[1 /*3*/]) = { 7,981f, 0f, -1,9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28,63904f, -1579,74f, 30,82423f };
			*(uParam1[2 /*3*/]) = { -7,527712f, 0,030218f, -14,33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28,6719f, -1568,09f, 29,7492f };
			*(uParam1[3 /*3*/]) = { -1,5414f, 0f, -168,6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323,631f, 5148,861f, 20,9592f };
			*(uParam1[0 /*3*/]) = { 1,1547f, 1,0064f, 21,8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323,844f, 5148,672f, 28,2303f };
			*(uParam1[1 /*3*/]) = { 11,4168f, 1,0064f, 22,8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328,904f, 5157,818f, 20,5799f };
			*(uParam1[2 /*3*/]) = { -3,634001f, 1,039937f, 30,44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315,368f, 5171,771f, 18,9066f };
			*(uParam1[3 /*3*/]) = { -2,8773f, 1,0064f, -103,0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_205(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		unk_0x5514EB508DD5A132(iParam0, 1);
		if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			unk_0xD0557B139A542F12(&uLocal_304);
			unk_0xB5396F1FB088FE38(&uLocal_304);
			if (unk_0x7F420695E3F776FB(iParam0, 0))
			{
				unk_0x092B9247AF00F5CF(0, 0, 16777216);
			}
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				fVar0 = system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), Local_283);
				fVar1 = system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), Local_284);
				if (fVar1 < fVar0)
				{
					unk_0x0E95B96CFEFE7B61(0, uLocal_269[0], 0);
				}
				else if (!unk_0xD6F9DEE4765092A9(func_206()))
				{
					unk_0x7FD62C74ABB26599(0, func_206(), 0, 552, -1);
				}
				else
				{
					unk_0xA966E518B752B92A(0, Local_283, 1f, -1, 0,25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0x4A8C381C258A124D())
			{
				if (!unk_0xD6F9DEE4765092A9(func_206()))
				{
					unk_0x7FD62C74ABB26599(0, func_206(), 0, 546, -1);
				}
				else
				{
					unk_0xA966E518B752B92A(0, Param1, 1f, -1, 0,25f, 1, 1193033728);
				}
				if (func_26(iParam0, Param1, 1) > 5f)
				{
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x10425721983AE158(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(3000, 6000));
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x10425721983AE158(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(3000, 6000));
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x10425721983AE158(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x93C0674FC00824D0(uLocal_304);
			unk_0x4BD42B0527065BB6(iParam0, uLocal_304);
		}
	}
}

char* func_206()
{
	char* sVar0;
	
	if (uLocal_72[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_207(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		unk_0x2D864CC37DDFA963(iParam0, iParam1, Local_285, fLocal_292, 3, 1092616192, 0);
	}
}

char* func_208()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_209()
{
	if (func_79() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_79() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_79() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_210()
{
	sLocal_270 = "move_p_m_one_idles@generic";
	unk_0x80813AC549A1E8AE(sLocal_270);
}

int func_211(int iParam0)
{
	if (unk_0x2E6A27037F1DC473(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x2E6A27037F1DC473(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0, struct<3> Param1, bool bParam2, float fParam3)
{
	if (func_214(uParam0))
	{
		unk_0xC9BBB26582F3058A(*uParam0);
		if (!func_213(Param1))
		{
			unk_0xB2BD5837A8D3CEDA(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam2)
			{
				unk_0x5C96CEA06531AB03(*uParam0, fParam3);
			}
			unk_0x1DE99C193C7EC64B(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_213(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!func_146(iVar0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iVar0, unk_0x4A8C381C258A124D(), Local_61, 0, 1, 0))
			{
				unk_0xC9BBB26582F3058A(iVar0);
				unk_0x44C48AC14D3C09ED(iVar0, 0, 0);
				unk_0x4285E11B28063EE0(iVar0, 0, 0);
				unk_0x5D7CD709B34C90F0(iVar0, 1);
				unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
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
			if (func_216())
			{
				Global_28 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_216()
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

void func_217(bool bParam0)
{
	struct<4> Var0;
	float fVar1;
	
	func_67();
	if (unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
	{
		return;
	}
	unk_0xA63572E348CC4CFB(Local_285 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_285 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar1 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uLocal_269[0], 1));
	if (iLocal_73 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_194()) && !func_270(uLocal_298, 2)) || func_257(uLocal_269[0], 0))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_275))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_275);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_274))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_274);
			}
			func_254(0);
			func_86("SCLUB_HOME_R", uLocal_72[0]);
			iLocal_73 = 9;
		}
	}
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (iLocal_73 != 8)
		{
			if (unk_0xC450B06E5AAA0985(uLocal_275))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_275);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_274))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_274);
			}
			iLocal_73 = 8;
		}
	}
	if (func_243(uLocal_269[0], &uLocal_262, &uLocal_259))
	{
		func_68(4);
	}
	if (iLocal_73 <= 1)
	{
		func_262(1);
	}
	switch (iLocal_73)
	{
		case 0:
			iLocal_74 = 0;
			if (func_194())
			{
				if (!func_270(uLocal_298, 1))
				{
					unk_0x5D7CD709B34C90F0(uLocal_269[0], 1);
					func_86("SCLUB_HOME_MEET", uLocal_72[0]);
					func_254(0);
					func_28(&uLocal_298, 1);
				}
				iLocal_73 = 1;
			}
			break;
		
		case 1:
			iLocal_74 = 1;
			Var0 = { func_73(uLocal_72[0]) };
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iLocal_305 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				uLocal_299 = unk_0x8D91ADE44AC79BC9(iLocal_305);
			}
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(uLocal_269[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0xD9F5E1FEFD1329E4(iLocal_305, 0) && func_242(iLocal_305, uLocal_269[0], 1) <= 10f))
			{
				unk_0x5D7CD709B34C90F0(uLocal_269[0], 0);
				if (unk_0xFC8BFE4B41177C22(iLocal_305) && (unk_0x2EEC0612337D20CE(iLocal_305) < 1 || (!bParam0 && !unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iLocal_305)))))
				{
					if (!func_72("SCLUB_SMALL_CAR", &Var0))
					{
						func_69("SCLUB_SMALL_CAR", uLocal_72[0], 0);
						func_175(uLocal_269[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x428C32CC68809A35(1);
					unk_0x974022927CB47E68(uLocal_269[0]);
					func_240();
					if (!func_270(uLocal_298, 2))
					{
						func_28(&uLocal_298, 2);
					}
					func_239();
					func_88();
					func_231(39, 1);
					func_231(40, 1);
					func_231(41, 1);
					func_231(42, 1);
					func_231(43, 1);
					func_231(44, 1);
					iLocal_73 = 2;
				}
			}
			else if (func_72("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x428C32CC68809A35(1);
			}
			break;
		
		case 2:
			iLocal_74 = 2;
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(uLocal_269[0], 0))
				{
					iLocal_73 = 3;
				}
			}
			else
			{
				func_175(uLocal_269[0], "NEED_A_VEHICLE", 10);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			iLocal_74 = 3;
			func_228();
			if (!func_173())
			{
				if (func_194())
				{
					unk_0xD1B0AF388B711EBC(Local_285 - Vector(3f, 3f, 3f), Local_285 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xA63572E348CC4CFB(Local_285 - Vector(3f, 3f, 3f), Local_285 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x60040CDD28AA1BC3(Local_285, 10f, 0, 0, 0, 0, 0, 0, 0);
					unk_0x55F7AC4B2B875901(Local_285, 10f, 0);
					uLocal_282 = unk_0xA7B0B03284E7503C(Local_285 - Vector(35f, 35f, 35f), Local_285 + Vector(35f, 35f, 35f), 0, 1, 1, 1, 1);
					func_8(&uLocal_241);
					if (bParam0)
					{
						func_93(1);
						func_227();
					}
					else
					{
						iLocal_70 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_74 = 4;
			func_224(fVar1, Local_286);
			func_218();
			if ((func_4(&uLocal_253) > 45f || system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_289) > (100f * 100f)) && func_26(unk_0x4A8C381C258A124D(), Local_286, 1) > 100f)
			{
				if (uLocal_72[0] == 8)
				{
					func_177("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_175(uLocal_269[0], "GENERIC_FUCK_YOU", 10);
				}
				func_68(3);
			}
			else if (func_257(uLocal_269[0], 1))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_275))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_275);
				}
				if (unk_0xC450B06E5AAA0985(uLocal_274))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_274);
				}
				func_254(0);
				func_86("SCLUB_HOME_R", uLocal_72[0]);
				iLocal_73 = 9;
			}
			else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_285, 3f, 3f, 2f, 1, 1, 2) || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_284, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_37(1, 0, 1))
				{
					iLocal_70 = 1;
				}
			}
			else if (!unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
			{
				func_227();
			}
			break;
		
		case 5:
			iLocal_74 = 5;
			func_224(fVar1, Local_285);
			func_218();
			func_240();
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_285, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_73 = 6;
			}
			else
			{
				if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
				{
					func_227();
				}
				else
				{
					func_63(Local_285);
				}
				if (func_109("SCLUB_HOME_WALK"))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					if (func_60(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 3f, 2, 0,5f, 0, 1, 0))
					{
						func_59();
						func_205(uLocal_269[0], Local_284);
						if (uLocal_72[0] == 9 || uLocal_72[0] == 8)
						{
							func_177("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_177("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_73 = 7;
					}
				}
			}
			else if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
			{
				unk_0x19626F992DC71FB9(uLocal_269[0]);
				func_227();
				unk_0x428C32CC68809A35(1);
			}
			break;
		
		case 7:
			iLocal_74 = 7;
			if ((!func_173() && !unk_0xFBA523E6F8ACE541()) && !func_270(uLocal_298, 2048))
			{
				Var0 = { func_73(uLocal_72[0]) };
				func_87("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_88();
				func_254(0);
				func_28(&uLocal_298, 2048);
			}
			if ((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_286, 5f, 5f, 2f, 0, 1, 1) || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_284, 5f, 5f, 2f, 0, 1, 1)) && unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
			{
				if (func_37(1, 0, 1))
				{
					iLocal_70 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_270(uLocal_296, 4096) && !func_173()) && !unk_0x912159A05BE6B52E(uLocal_269[0]))
			{
				if (iLocal_74 > 1 || system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uLocal_269[0], 1)) < (3f * 3f))
				{
					func_175(uLocal_269[0], "GENERIC_FRIGHTENED_MED", 10);
					func_28(&uLocal_296, 4096);
				}
			}
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				iLocal_73 = iLocal_74;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_68(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_257(uLocal_269[0], 1))
			{
				unk_0x406CBCEA35499884();
				iLocal_73 = iLocal_74;
				if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
				{
					func_227();
				}
			}
			break;
	}
}

void func_218()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_270(uLocal_298, 16))
	{
		if (func_219())
		{
			func_28(&uLocal_298, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_102(uLocal_269[0], 0, 0);
	if (!func_270(uLocal_298, 8))
	{
		if (!func_270(uLocal_298, 4))
		{
			if (!func_270(uLocal_296, 256))
			{
				if (uLocal_72[0] == 8 || uLocal_72[0] == 9)
				{
					func_177("SC_BJ", 0, 0, 0);
				}
				func_28(&uLocal_296, 256);
			}
			else
			{
				unk_0x80813AC549A1E8AE(sVar0);
				func_28(&uLocal_298, 4);
			}
		}
		else if (unk_0xE100DD4F82A51BDE(sVar0))
		{
			func_96(uLocal_269[0], 1, 1, -1, 1);
			unk_0x44FB298D6382876D(uLocal_269[0], 1);
			func_7(&uLocal_250);
			func_28(&uLocal_298, 8);
		}
	}
	else if (func_270(uLocal_298, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x13CCB1AD131C1082(uLocal_269[0], sVar0, func_97(4, 1, 1, func_100(iLocal_305)), 3);
		bVar3 = unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D());
		bVar4 = unk_0x9B5C1660CCDF7189(uLocal_269[0], joaat("script_task_perform_sequence")) == 7;
		bVar5 = unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
			{
				bVar6 = (unk_0x14E25ED5E75102C8(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) && unk_0xDF93B3CFAC96698F(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) > 5f);
			}
		}
		if ((((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || func_4(&uLocal_250) > 35f) || system::vdist(Local_285, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x10425721983AE158(uLocal_269[0], sVar0, func_97(4, 1, 1, func_100(iLocal_305)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_300 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_259();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), (unk_0x8D91ADE44AC79BC9(unk_0x4A8C381C258A124D()) - system::ceil((IntToFloat(unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D())) * 0,1f))), 0, 0);
					func_175(unk_0x4A8C381C258A124D(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_175(unk_0x4A8C381C258A124D(), "SEX_CLIMAX", 10);
				}
				func_28(&uLocal_296, 128);
			}
			unk_0x268BE77F77533D03(sVar0);
			func_75(&uLocal_298, 4);
		}
		if (!func_270(uLocal_296, 64))
		{
			if (func_4(&uLocal_250) > 10f)
			{
				func_175(unk_0x4A8C381C258A124D(), "SEX_GENERIC", 10);
				func_175(uLocal_269[0], "SEX_ORAL", 10);
				func_28(&uLocal_296, 64);
			}
		}
		unk_0x48392085C5B52584();
		func_259();
	}
}

int func_219()
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_194())
	{
		return 0;
	}
	func_66(&Var0, &uVar1, 0);
	if (((system::vdist(Local_285, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > (75f * 2f) && system::vdist(Var0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > (75f / 2f)) && func_118(uLocal_72[0]) > 1) && func_220())
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
		if (func_223(iVar1, 0) && func_221(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (func_222(unk_0x4B423FAA24E8ABF0(iParam0)))
		{
			return 0;
		}
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 16);
						iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0x5318DF85BEB6B95F(iParam0, 2) && !unk_0x5318DF85BEB6B95F(iParam0, 3)) && !unk_0x5318DF85BEB6B95F(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0x5318DF85BEB6B95F(iParam0, 2) && !unk_0x5318DF85BEB6B95F(iParam0, 3)) && !unk_0x5318DF85BEB6B95F(iParam0, 4)) && !unk_0x5318DF85BEB6B95F(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0x5318DF85BEB6B95F(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case -1958428933:
				if (!unk_0x5318DF85BEB6B95F(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0x94C9CD3D66808551(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0x5318DF85BEB6B95F(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (unk_0x94C9CD3D66808551(iParam0, 10) == -1 || unk_0x94C9CD3D66808551(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
			
			case joaat("entity3"):
				if (unk_0x94C9CD3D66808551(iParam0, 10) == 0)
				{
					return 0;
				}
				break;
		}
		switch (unk_0x58428BC502F48C75(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
			case 252076350:
			case 1974176673:
			case 1969797967:
			case -695803320:
			case 117747890:
			case -708773194:
			case 1395235285:
			case -669515817:
			case -1354494188:
			case 234171168:
			case 1433728330:
			case 823386486:
				return 1;
				break;
		}
		if (unk_0x58428BC502F48C75(iParam0) == 931866387 && unk_0x4B423FAA24E8ABF0(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0x58428BC502F48C75(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x4B423FAA24E8ABF0(iParam0) == joaat("weevil")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (unk_0x58428BC502F48C75(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x4B423FAA24E8ABF0(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
		
		case joaat("polgauntlet"):
		case joaat("pranger"):
		case joaat("police5"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
			return 1;
			break;
	}
	return 0;
}

int func_223(int iParam0, bool bParam1)
{
	if ((((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0)) || unk_0x78B050AFBA6D1517(iParam0))
	{
		return 0;
	}
	if (func_222(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722")) || iParam0 == joaat("broadway"))
	{
		return 0;
	}
	return 1;
}

void func_224(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_270(uLocal_296, 262144))
	{
		if (func_226(uLocal_269[0]))
		{
			if (uLocal_72[0] == 8)
			{
				func_177("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_175(uLocal_269[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_244);
			func_28(&uLocal_296, 262144);
		}
	}
	else if (func_4(&uLocal_244) > 10f)
	{
		func_75(&uLocal_296, 262144);
		func_8(&uLocal_244);
	}
	if ((fParam0 > 5f || !func_194()) || func_270(uLocal_298, 4))
	{
		return;
	}
	if (!func_270(uLocal_296, 1) && !func_270(uLocal_296, 128))
	{
		if (system::vdist(Param1, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 75f)
		{
			if (uLocal_72[0] == 8 || uLocal_72[0] == 9)
			{
				if (func_177("SC_NEAR", 0, 0, 0))
				{
					func_28(&uLocal_296, 1);
				}
			}
			else
			{
				func_28(&uLocal_296, 1);
			}
			unk_0x60040CDD28AA1BC3(Local_285, 5f, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (!func_270(uLocal_296, 16))
		{
			func_175(uLocal_269[0], "NEED_A_VEHICLE", 10);
			func_28(&uLocal_296, 16);
			func_8(&uLocal_241);
		}
		if (!func_270(uLocal_296, 4))
		{
			func_75(&uLocal_296, 4);
		}
		if (!func_270(uLocal_296, 8))
		{
			func_75(&uLocal_296, 8);
		}
	}
	else
	{
		fVar1 = unk_0xDF93B3CFAC96698F(iVar0);
		fVar2 = unk_0x66C1D6E6DBF7AC9B(iVar0);
		if (fVar1 < (fVar2 * 0,9f) || fVar1 > (fVar2 * 0,1f))
		{
			func_8(&uLocal_247);
		}
		if (!func_270(uLocal_296, 4))
		{
			if (func_4(&uLocal_241) > 15f && func_4(&uLocal_247) > 5f)
			{
				func_175(uLocal_269[0], "DRIVEN_FAST", 10);
				func_28(&uLocal_296, 4);
				func_8(&uLocal_241);
			}
		}
		else if (func_4(&uLocal_241) < 5f)
		{
			func_75(&uLocal_296, 4);
			func_8(&uLocal_241);
		}
		if (!func_270(uLocal_296, 8))
		{
			if (func_4(&uLocal_241) > 15f && func_4(&uLocal_247) > 5f)
			{
				func_175(uLocal_269[0], "DRIVEN_SLOW", 10);
				func_28(&uLocal_296, 4);
				func_8(&uLocal_241);
			}
		}
		else if (func_4(&uLocal_241) < 5f)
		{
			func_75(&uLocal_296, 8);
			func_8(&uLocal_241);
		}
		if (!func_270(uLocal_296, 131072))
		{
			if (func_225(uLocal_269[0], &uLocal_299))
			{
				if (func_4(&uLocal_244) > 5f)
				{
					func_175(uLocal_269[0], "CRASH_GENERIC_DRIVEN", 10);
					func_28(&uLocal_296, 131072);
					func_8(&uLocal_241);
				}
			}
		}
		else if (func_4(&uLocal_244) > 5f)
		{
			func_75(&uLocal_296, 131072);
			func_8(&uLocal_244);
		}
		if (!func_270(uLocal_296, 65536))
		{
			if (func_4(&uLocal_241) > 30f || (func_4(&uLocal_241) > 10f && !func_270(uLocal_296, 32)))
			{
				func_175(uLocal_269[0], "BOOTY_FLIRT", 10);
				func_28(&uLocal_296, 32);
				func_28(&uLocal_296, 524288);
				func_8(&uLocal_241);
			}
			else if (func_270(uLocal_296, 524288))
			{
				if (!unk_0x912159A05BE6B52E(uLocal_269[0]) && func_4(&uLocal_241) > 4f)
				{
					func_175(unk_0x4A8C381C258A124D(), "BOOTY_FLIRT_RESP", 10);
					func_75(&uLocal_296, 524288);
				}
			}
		}
	}
}

int func_225(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (unk_0xF4244288C3EF3306(uParam0, iVar0))
		{
			if (unk_0x14E25ED5E75102C8(iVar0))
			{
				iVar1 = unk_0x8D91ADE44AC79BC9(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0xE4DC7B3DD712372B(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xD633AC6AD3D4D297(110, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f) && unk_0x300A997AE991C0A8(iParam0, unk_0x4A8C381C258A124D()))
		{
			return 1;
		}
	}
	return 0;
}

void func_227()
{
	func_89();
	func_8(&uLocal_241);
	if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xC450B06E5AAA0985(uLocal_274))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_274);
		}
		if (!unk_0xC450B06E5AAA0985(uLocal_275))
		{
			uLocal_275 = func_64(Local_286, 0);
		}
		func_8(&uLocal_253);
		Local_289 = { unk_0xD1A6A821F5AC81DB(uLocal_269[0], 1) };
		iLocal_73 = 4;
	}
	else
	{
		func_8(&uLocal_244);
		func_63(Local_285);
		iLocal_73 = 5;
	}
}

void func_228()
{
	if (!func_270(uLocal_296, 1024))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (func_229(uLocal_72[0]))
			{
				if (!func_173())
				{
					func_175(uLocal_269[0], "NICE_CAR", 10);
					func_28(&uLocal_296, 1024);
				}
			}
		}
	}
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
		if (func_230(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_238(iParam0, 2, 1))
		{
			func_237(iParam0, 2, 1);
		}
	}
	else if (func_238(iParam0, 2, 1))
	{
		func_232(iParam0, 2, 1);
	}
}

void func_232(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_55() == 0)
		{
			uVar0 = func_235(func_236(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, iParam1);
			func_233(func_236(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_234(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

var func_234(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_78(uParam1));
}

int func_235(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_234(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_236(int iParam0)
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

void func_237(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_55() == 0)
		{
			uVar0 = func_235(func_236(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_233(func_236(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_238(int iParam0, int iParam1, bool bParam2)
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
		if (func_55() == 0)
		{
			return BitTest(func_235(func_236(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_239()
{
	if (uLocal_72[0] == 8)
	{
		func_177("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_175(uLocal_269[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_240()
{
	if (!unk_0x133460AD0F183CC9(uLocal_269[0]) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uLocal_269[0], 1)) < 10f)
	{
		unk_0x03AB73582A77DBD3(uLocal_269[0], func_241());
		unk_0x412B9F2CF0E60079(uLocal_269[0], 0);
	}
}

int func_241()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

float func_242(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
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

int func_243(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
		if (func_246(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_244(&uVar0);
			if (unk_0xFC8BFE4B41177C22(iParam0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
				{
					if (!unk_0xB2AE1A67479A5AF3(iLocal_68))
					{
						unk_0x06CD913C241C765E("BootyCall", &iLocal_68);
					}
					unk_0xD414C47AFF81382A(2, iLocal_68, joaat("player"));
					unk_0xD414C47AFF81382A(2, joaat("player"), iLocal_68);
					unk_0x3CEA1FD137ACE2D9(iParam0, iLocal_68);
					unk_0xD844F5E50DAB6FF7(iParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 0);
				}
			}
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_245(1);
			break;
		
		case 2:
			break;
	}
}

void func_245(bool bParam0)
{
	Global_112962 = 0;
	Global_112962.f_1 = -1;
	Global_112962.f_2 = -1;
	if (bParam0)
	{
		func_126(-1);
	}
}

int func_246(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_270(*uParam2, 1))
		{
			if (func_253(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_270(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_270(*uParam2, 4))
		{
			if (func_251(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_270(*uParam2, 8))
		{
			if (func_250(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_270(*uParam2, 128);
		if (bParam4)
		{
			if (func_247(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_270(*uParam2, 16))
		{
			if (func_247(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (iParam7 && unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_57)
		{
			iLocal_58 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_57 = true;
		}
		iLocal_59 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_60 = (iLocal_58 - iLocal_59);
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_60) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_57)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_60) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0xA6534E6C7AE314D6(iParam0))
			{
				if (unk_0xC1089D3918F03D33(iParam0) == unk_0x4A8C381C258A124D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x65FFA94B82A71741(iParam0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x729CB628AF931FC1(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x5BDFCAB88CC62A9B(iParam0))
		{
			return 1;
		}
	}
	if (func_249(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_248(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), unk_0x6EF03BE64E058E2F(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_248(int iParam0, int iParam1)
{
	return func_242(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x65F146FF416F109F(iParam0))
		{
			if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(iParam1, 1)) < 2,5f)
			{
				if (unk_0x3644984C9D7B57EF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x11552FA9DCB8E126(iParam0, 4))
	{
		if (unk_0x65F146FF416F109F(iParam0) && !unk_0x3C2402675D8FFADA(iParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	if (unk_0x398315D0C90DE6F6(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA646A9FF47E2E515(Var0, system::to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x11552FA9DCB8E126(iParam0, 2))
	{
		if (unk_0x65F146FF416F109F(iParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x7F420695E3F776FB(unk_0xBD545F8729E9F413(iParam1), 0))
			{
				iVar1 = unk_0x6EF03BE64E058E2F(unk_0xBD545F8729E9F413(iParam1), 0);
			}
			if (unk_0x74CD4FE549433E92(iParam0) || func_252(iVar1))
			{
				if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xE94C7FA27FEB00DD((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0) != 0)
			{
				if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_242(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
						{
							if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &iVar1))
							{
								if ((unk_0x55B80B6E7AB61270(iVar1) && unk_0xE93EDE86BBB66532(iVar1) == iParam0) || (unk_0x0101C509A6E67F99(iVar1) && unk_0xBD545F8729E9F413(iVar1) == unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0)))
								{
									if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x6D05C5731A838CB3(0, 24)) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x6D05C5731A838CB3(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_253(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_248(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - uParam1->f_1) > uParam1->f_3)
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

void func_254(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xC450B06E5AAA0985(uLocal_276[iParam0]))
	{
		unk_0xFE54B8568B2ABD12(&(uLocal_276[iParam0]));
	}
	uLocal_276[iParam0] = func_255(uLocal_269[iParam0], 0, 145);
	Var0 = { func_73(uLocal_72[iParam0]) };
	unk_0x594D5D0D7071B0DE(uLocal_276[iParam0], &Var0);
}

var func_255(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_256(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_256(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_65(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_65(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_65(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

int func_257(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	float fVar3;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0x26B246D60FABB3E2(iParam0) == func_241())
		{
			if (unk_0xD9F5E1FEFD1329E4(uVar2, 0))
			{
				if (!unk_0xCECDBB848D53DEB2(iParam0, iVar2, 0) && system::vdist(Var0, Var1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_270(uLocal_298, 2))
	{
		fVar3 = unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_258()
{
	if (!unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
	{
		if (!unk_0x787F8EE1F6FBDC6D())
		{
			func_198(uLocal_269[0], unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), 0f, 2f, 0f));
			iLocal_70 = 1;
			iLocal_71 = 0;
		}
	}
}

void func_259()
{
	unk_0xC0964AABD3C0CC7E();
	func_260();
}

void func_260()
{
	Global_23692.f_134 = 1;
}

int func_261(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_262(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_167(iLocal_69))
	{
		iLocal_69 = func_171();
		func_161(&iLocal_69, 0, 0, unk_0xC5935DFB3F39785A(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_270(uLocal_298, 512))
		{
			if (func_269(iLocal_69) && unk_0xF6C26AE940C14749(uLocal_269[0]))
			{
				if (uLocal_72[0] == 8 || uLocal_72[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_72[0], 64);
					func_195(&uLocal_76, 1, 0, func_196(uLocal_72[0]), 0, 1);
					func_268(&uLocal_76, func_114(uLocal_72[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_266();
				}
				func_265(uLocal_269[0]);
				func_28(&uLocal_298, 512);
			}
		}
		else if (func_264())
		{
			func_75(&uLocal_298, 512);
		}
		else if ((!func_173() && func_263()) && !func_264())
		{
			func_245(1);
			func_68(2);
		}
	}
}

int func_263()
{
	if (Global_22286 == 0)
	{
		return 1;
	}
	return 0;
}

int func_264()
{
	if (Global_22335 == 1 || Global_23302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		unk_0x5514EB508DD5A132(iParam0, 1);
		if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			unk_0xD0557B139A542F12(&uLocal_304);
			unk_0xB5396F1FB088FE38(&uLocal_304);
			unk_0xE69B8FE2F4FD0178(0, 8000);
			unk_0xA966E518B752B92A(0, Local_284, 1,5f, -1, 0,25f, 0, 1193033728);
			unk_0x93C0674FC00824D0(uLocal_304);
			unk_0x4BD42B0527065BB6(iParam0, uLocal_304);
		}
	}
}

void func_266()
{
	int iVar0;
	
	if (func_267())
	{
		return;
	}
	iVar0 = func_117(uLocal_72[0]);
	func_111(-384575792, iVar0, 6, 3, func_115(), func_114(uLocal_72[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_267()
{
	if (func_55() == 0)
	{
		return 1;
	}
	return 0;
}

int func_268(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_191(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
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
	return func_179(sParam3, iParam4, bParam7);
}

bool func_269(int iParam0)
{
	return func_166(func_171(), iParam0);
}

bool func_270(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_271(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_299();
	func_66(&Var0, &uVar1, bParam1);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (fLocal_294 == -1f)
		{
			fLocal_294 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0);
		}
		if (iLocal_297 == -1)
		{
			iLocal_297 = uParam0->f_3;
		}
		if (!func_270(uLocal_298, 32))
		{
			func_295(&uLocal_272, func_297((*uParam0)[0], 0));
			func_294(&uLocal_272);
			func_28(&uLocal_298, 32);
			unk_0x80813AC549A1E8AE("mini@strip_club@idles@stripper");
			unk_0x80813AC549A1E8AE("gestures@f@standing@casual");
			func_293();
			return 0;
		}
		else if ((!func_292(&uLocal_272) || !unk_0xE100DD4F82A51BDE("mini@strip_club@idles@stripper")) || !func_291())
		{
			return 0;
		}
		if (bLocal_302)
		{
			if (!unk_0xADCE9BCAFCB83364(1))
			{
				return 0;
			}
		}
		if (!func_270(uLocal_298, 1024))
		{
			uLocal_72[0] = (*uParam0)[0];
			uLocal_269[0] = unk_0xB1DBFEB95C0EFB88(26, func_297((*uParam0)[0], 0), Var0, uVar1, 1, 1);
			func_285(uLocal_269[0], uLocal_72[0], 0);
			unk_0xAAA71DD7E9059338(uLocal_269[iVar2], 1);
			unk_0x44FB298D6382876D(uLocal_269[0], 1);
			unk_0x9E6CC93E007219AC(uLocal_269[0], 1);
			func_281(uLocal_269[0]);
			unk_0x10425721983AE158(uLocal_269[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1,5f, -1, 1, 0, 0, 0, 0);
			unk_0xE67051907958B5EB(uLocal_269[iVar2], unk_0x4A8C381C258A124D(), -1, 2048, 4);
			unk_0x412B9F2CF0E60079(uLocal_269[0], 0);
			unk_0x397CF4F4C8B17365(uLocal_269[0], func_196((*uParam0)[0]));
			func_195(&uLocal_76, 1, uLocal_269[0], func_196((*uParam0)[0]), 0, 1);
			func_28(&uLocal_298, 1024);
		}
		if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0) > 100f)
		{
			if (func_194())
			{
				if (!func_270(uLocal_298, 1))
				{
					func_280(bParam1);
					func_254(0);
					func_28(&uLocal_298, 1);
				}
			}
			if (!func_270(uLocal_298, 64) && !func_270(uLocal_298, 512))
			{
				if (func_279(func_114((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_79() == 2)
					{
						func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_79() == 0)
					{
						func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_79() == 1)
					{
						func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_195(&uLocal_76, 3, 0, func_196((*uParam0)[0]), 0, 1);
					Var4 = { func_278() };
					func_273(&uLocal_76, func_114((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_28(&uLocal_298, 64);
				}
				if (func_167(iLocal_69))
				{
					if (func_269(iLocal_69))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_195(&uLocal_76, 1, 0, func_196((*uParam0)[0]), 0, 1);
							func_268(&uLocal_76, func_114((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_266();
						}
						func_28(&uLocal_298, 512);
					}
				}
			}
			else if (func_264())
			{
				func_75(&uLocal_298, 64);
				func_75(&uLocal_298, 512);
			}
			else if ((!func_173() && func_263()) && !func_264())
			{
				func_272((*uParam0)[0]);
				func_245(1);
				func_68(2);
			}
			if (!func_270(uLocal_298, 128))
			{
				if (!func_34(0))
				{
					func_69("SCLUB_HOME_C_H", uLocal_72[0], 0);
					func_28(&uLocal_298, 128);
				}
			}
			if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0) > (fLocal_294 + (200f * 3f)))
			{
				func_68(1);
			}
			else if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0) < fLocal_294)
			{
				fLocal_294 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_79() == 2)
	{
		func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	else if (func_79() == 0)
	{
		func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	else if (func_79() == 1)
	{
		func_195(&uLocal_76, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_272(int iParam0)
{
	if (Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_273(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_191(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_277();
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
	func_275(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_274(&uVar0, &uVar1, iParam7, bParam11);
}

int func_274(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_190();
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
		if (func_189(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_188();
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
				func_136();
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
				if (func_187())
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
			if (func_24())
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
			func_186();
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
		func_185();
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
		func_190();
	}
	return 0;
}

void func_275(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_276(iParam0);
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

void func_276(var uParam0)
{
	Global_22283 = uParam0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
}

void func_277()
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

struct<16> func_278()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_72[0], 64);
	return Var0;
}

int func_279(int iParam0)
{
	if ((Global_23400 || Global_23399) || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
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

void func_280(bool bParam0)
{
	switch (uLocal_72[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_86("SCLUB_HOME_MEE4", uLocal_72[0]);
			}
			else
			{
				func_86("SCLUB_HOME_MEET", uLocal_72[0]);
			}
			break;
		
		case 8:
			func_86("SCLUB_HOME_LIZ", uLocal_72[0]);
			break;
		
		case 9:
			func_86("SCLUB_HOME_HITCH", uLocal_72[0]);
			break;
	}
}

void func_281(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_284(iParam0, 2, unk_0xC5935DFB3F39785A(0, 3));
		func_283(iParam0, 2, unk_0xC5935DFB3F39785A(0, 3));
		func_282(iParam0, 0, 0);
	}
}

void func_282(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 6, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_283(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 3, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_284(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 8, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		unk_0x77EFA99E6A8FFC43(iParam0);
		bVar0 = false;
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 1);
					func_289(iParam0, 2, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_282(iParam0, 4, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 1);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 1);
					func_289(iParam0, 1, 1);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 1);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 1);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 1);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 2, 0);
					func_283(iParam0, 0, 2);
					func_288(iParam0, 1, 1);
					func_282(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 2, 1);
					func_283(iParam0, 1, 2);
					func_288(iParam0, 0, 2);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 1, 2);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 1);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 2);
					func_282(iParam0, 2, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 1);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 0, 1);
					func_287(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 1);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 0, 2);
					func_283(iParam0, 1, 1);
					func_288(iParam0, 0, 1);
					func_282(iParam0, 0, 0);
					func_284(iParam0, 1, 0);
					func_287(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0xD1C578C204015E1F(iParam0, 3, 2, 0, 0);
				unk_0xD1C578C204015E1F(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0xD1C578C204015E1F(iParam0, 0, 0, 1, 0);
				unk_0xD1C578C204015E1F(iParam0, 2, 0, 1, 0);
				unk_0xD1C578C204015E1F(iParam0, 3, 0, 0, 0);
				unk_0xD1C578C204015E1F(iParam0, 4, 0, 1, 0);
				unk_0xD1C578C204015E1F(iParam0, 8, 1, 0, 0);
				unk_0xD1C578C204015E1F(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 11, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (iVar0 == func_261(0, 0) || iVar0 == func_261(0, 1))
	{
		if (bParam1)
		{
			func_283(iParam0, 2, 0);
			func_284(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_261(1, 0) || iVar0 == func_261(1, 1))
	{
		if (bParam1)
		{
			func_283(iParam0, 0, iParam2);
			func_282(iParam0, iParam3, 0);
			func_284(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_284(iParam0, 1, 0);
		}
	}
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 4, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 2, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xE91CD2B3CF8A106C(uParam0, 0, iParam1, iParam2))
	{
		unk_0xD1C578C204015E1F(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_291()
{
	if (unk_0xD6F9DEE4765092A9(func_206()))
	{
		return 1;
	}
	else if (unk_0xA08EEC7306CF6198(func_206()))
	{
		return 1;
	}
	return 0;
}

int func_292(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
			{
				if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_293()
{
	if (!unk_0xD6F9DEE4765092A9(func_206()))
	{
		unk_0xD04A772C411165F2(func_206());
	}
}

void func_294(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_295(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_296(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_297(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_114(iParam0);
	if (iVar0 != 145)
	{
		return func_298(iVar0);
	}
	return func_261(0, 0);
}

int func_298(int iParam0)
{
	if (!func_82(iParam0))
	{
		return func_85(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_299()
{
	switch (uLocal_72[0])
	{
		case 1:
			Local_283 = { 128,1002f, -1895,001f, 22,4811f };
			Local_284 = { 128,1059f, -1896,819f, 22,6792f };
			Local_285 = { 133,9411f, -1881,89f, 22,5257f };
			Local_286 = { 130,1663f, -1893,057f, 22,3748f };
			Local_287 = { 133,4958f, -1891,641f, 22,4252f };
			fLocal_291 = 330,5705f;
			fLocal_292 = 244f;
			Local_290 = { 146,293f, -1888,049f, 22,2193f };
			fLocal_293 = fLocal_292;
			break;
		
		case 0:
			Local_283 = { -161,9628f, -1636,501f, 33,0339f };
			Local_284 = { -159,9415f, -1637,307f, 33,0339f };
			Local_285 = { -178,6316f, -1629,522f, 32,1789f };
			Local_286 = { -166,1453f, -1633,102f, 32,6574f };
			Local_287 = { -166,6636f, -1633,229f, 32,6567f };
			fLocal_291 = 108,072f;
			fLocal_292 = 180,9811f;
			Local_290 = { Local_285 };
			fLocal_293 = fLocal_292;
			break;
		
		case 4:
			Local_283 = { -198,3824f, 87,8785f, 68,7436f };
			Local_284 = { -197,2292f, 86,3497f, 68,7561f };
			Local_285 = { -200,9078f, 113,537f, 68,5518f };
			Local_286 = { -200,1384f, 96,9809f, 68,5203f };
			Local_287 = { -199,5068f, 95,7042f, 68,5193f };
			fLocal_291 = 48,99f;
			fLocal_292 = 64,3f;
			Local_290 = { Local_285 };
			fLocal_293 = fLocal_292;
			break;
		
		case 5:
			Local_283 = { -849,0348f, 510,6906f, 89,8218f };
			Local_284 = { -849,0408f, 508,5767f, 89,8218f };
			Local_285 = { -846,1005f, 520,2202f, 89,6217f };
			Local_286 = { -851,8972f, 512,73f, 89,6217f };
			Local_287 = { -851,8746f, 513,6746f, 89,6217f };
			fLocal_291 = 92,365f;
			fLocal_292 = 293f;
			Local_290 = { -860,4819f, 514,2496f, 88,1473f };
			fLocal_293 = fLocal_292;
			break;
		
		case 8:
			Local_283 = { -28,2427f, -1555,892f, 29,6918f };
			Local_284 = { -24,8589f, -1556,846f, 29,6819f };
			Local_285 = { -41,8174f, -1575,609f, 28,2831f };
			Local_286 = { -25,3404f, -1556,341f, 29,6919f };
			Local_287 = { -27,7382f, -1570,572f, 29,3f };
			fLocal_291 = 181,352f;
			fLocal_292 = 47,9206f;
			Local_290 = { Local_285 };
			fLocal_293 = fLocal_292;
			break;
		
		case 9:
			Local_283 = { 3313,487f, 5175,831f, 18,619f };
			Local_284 = { 3310,816f, 5176,331f, 18,619f };
			Local_285 = { 3334,321f, 5161,122f, 17,2996f };
			Local_286 = { 3317,788f, 5171,707f, 17,4471f };
			Local_287 = { 3318,076f, 5171,805f, 17,4385f };
			fLocal_291 = 236,4579f;
			Local_290 = { 3322,927f, 5148,607f, 17,3141f };
			fLocal_293 = 310,8648f;
			break;
	}
}

int func_300()
{
	switch (uLocal_72[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_302)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_305();
			}
			else
			{
				return 0;
			}
		}
		if (!func_304(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_305();
					}
					else
					{
						return 0;
					}
				}
				if (func_303())
				{
					if (!bParam2)
					{
						func_305();
					}
					else
					{
						return 0;
					}
				}
				if (func_302(157))
				{
					if (!bParam2)
					{
						func_305();
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
					func_305();
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
				func_305();
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
			func_305();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_302(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_303()
{
	return Global_2684504.f_695;
}

bool func_304(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_305()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_306()
{
	unk_0x9C091F2E9354854A(0);
	unk_0x5A65DF56B098A5F1();
	func_88();
	unk_0x406CBCEA35499884();
	unk_0xD7B6A43ACC36D868(uLocal_282, 0);
	unk_0xA63572E348CC4CFB(Local_285 - Vector(3f, 3f, 3f), Local_285 + Vector(3f, 3f, 3f), 1, 1);
	unk_0x2AF2D6F164BD6F5A(Local_285 - Vector(3f, 3f, 3f), Local_285 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
	}
	unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
	if (unk_0xFC8BFE4B41177C22(uLocal_269[0]))
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_269[0], 0))
		{
			if (!func_270(uLocal_298, 8192))
			{
				unk_0x761F56E633460973(uLocal_269[0], 1193033728, 0);
			}
			unk_0x44FB298D6382876D(uLocal_269[0], 1);
			if (!unk_0xB2AE1A67479A5AF3(iLocal_68))
			{
				unk_0x06CD913C241C765E("BootyCall", &iLocal_68);
			}
			unk_0xD414C47AFF81382A(2, iLocal_68, joaat("player"));
			unk_0xD414C47AFF81382A(2, joaat("player"), iLocal_68);
			unk_0x3CEA1FD137ACE2D9(uLocal_269[0], iLocal_68);
		}
		unk_0xF09E30AF1B8FB379(&(uLocal_269[0]));
	}
	if (iLocal_297 != -1)
	{
		func_308(&iLocal_297);
	}
	if (bLocal_67)
	{
		func_145(&uLocal_66);
	}
	unk_0x8D76C231AB0E62A1(unk_0x259BE71D8A81D4FA(), 0);
	func_125(uLocal_72[0], -1);
	Global_112962 = 0;
	func_307(0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_307(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_231(iVar0, bParam0);
		iVar0++;
	}
}

void func_308(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_44004)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

