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
	bool bLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	struct<27> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	struct<11> Local_43[2];
	struct<25> Local_44[21];
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = -1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 1000;
	var uLocal_64 = 1000;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<8> Local_71[3];
	var uLocal_72 = 15;
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
	var uLocal_124 = 15;
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
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	char* sLocal_178 = NULL;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	struct<14> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_196 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_197 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	char[] cLocal_202[8] = 0;
	var uLocal_203 = 16;
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
	var uLocal_282 = 0;
	var uLocal_283 = 0;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	char[] cLocal_368[8] = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	int iLocal_372[3] = { 0, 0, 0 };
	int iLocal_373 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 21;
	fLocal_45 = -1f;
	Local_52 = { 0f, 0f, 0f };
	iLocal_53 = -1;
	sLocal_178 = "FBIPRA";
	Local_183 = { 0f, 0f, 0f };
	Local_184 = { 1381,472f, -2072,245f, 50,9981f };
	cLocal_202 = "FIBP1AU";
	iLocal_373 = -1;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(19))
	{
		sLocal_177 = 0;
		func_391();
		func_379();
	}
	func_362();
	if (func_361())
	{
		func_360(918,8851f, -269,789f, 67,2145f, 68,2149f, 1, 0);
	}
	func_345();
	while (true)
	{
		unk_0xECF30459397D5190("M_TrT", 0);
		if (func_344(unk_0x4A8C381C258A124D()))
		{
			func_340();
			func_336();
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
			unk_0xA0265306DFF63938(0,8f);
			switch (iLocal_66)
			{
				case 0:
					func_271();
					break;
				
				case 1:
					func_240();
					break;
				
				case 2:
					func_222();
					break;
				
				case 3:
					func_109();
					break;
				
				case 4:
					func_39();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_66 != 5)
			{
				if (iLocal_66 >= 0 && !bLocal_26)
				{
				}
			}
		}
		system::wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_67)
	{
		case 0:
			unk_0x406CBCEA35499884();
			unk_0x428C32CC68809A35(1);
			func_38();
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_37(iVar0) && unk_0x4B423FAA24E8ABF0(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!unk_0xD6F9DEE4765092A9(sLocal_177))
			{
				func_34(sLocal_177);
			}
			else
			{
				func_18(0);
			}
			iLocal_67 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 30f, 1, 0, 0, 0);
				func_379();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_197);
	func_9(&uLocal_199);
	func_9(&iLocal_198);
	func_8(&Local_195);
	func_8(&Local_196);
	func_9(&uLocal_200);
	func_3();
}

void func_3()
{
	func_7(&(Local_43[0 /*11*/].f_4));
	func_7(&(Local_43[1 /*11*/].f_4));
	func_6(&iLocal_41);
	func_5(&(Local_43[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_43[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_44[iLocal_46 /*25*/].f_17), 0);
	unk_0x2B1BDC32466B40A9(uLocal_38);
	unk_0x268BE77F77533D03("missfbi4prepp1");
	unk_0x13F0C01028B5EE7C("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
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

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
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
				unk_0xAAA71DD7E9059338(*uParam0, false);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

void func_6(var uParam0)
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

void func_7(int iParam0)
{
	if (unk_0xC450B06E5AAA0985(*iParam0))
	{
		unk_0xBC64B805EE071A37(*iParam0, 0);
		unk_0xFE54B8568B2ABD12(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*iParam0, 0))
		{
			unk_0x788F35D395511DFE(*iParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*iParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*iParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		if (func_37(*uParam0))
		{
			if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
			{
				if (func_10(unk_0x4A8C381C258A124D()))
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
			if (func_10(unk_0x4A8C381C258A124D()))
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

int func_10(int iParam0)
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

void func_11()
{
	func_14(918,8851f, -269,789f, 67,2145f, 325,9081f);
	func_12(917,5291f, -263,8595f, 67,3489f, 188,0605f);
}

void func_12(struct<3> Param0, float fParam1)
{
	func_13(&(Global_107514.f_2890), Param0, fParam1);
}

void func_13(var uParam0, struct<3> Param1, var uParam2)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam2;
}

void func_14(struct<3> Param0, float fParam1)
{
	if (func_15(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam1;
	}
}

bool func_15(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_16()
{
	if (Global_101533 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_20(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 25);
	}
}

bool func_25()
{
	func_26();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_30(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_29(unk_0x4A8C381C258A124D());
			if (func_28(iVar0) && (!func_27(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_28(Global_113969.f_2366.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_33(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_79622, sParam0, 16);
			StringCopy(&Global_79626, "", 16);
			if (unk_0xE7585CE3CDD6F47E())
			{
				unk_0x98188EDB7446A033();
			}
		}
	}
}

void func_36(int iParam0, int iParam1)
{
	Global_101533.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
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

void func_38()
{
	func_7(&iLocal_180);
}

void func_39()
{
	bool bVar0;
	
	switch (iLocal_67)
	{
		case 0:
			iLocal_67 = 1;
			break;
		
		case 1:
			if (!func_108(unk_0x4A8C381C258A124D(), Local_184, 270f, 1))
			{
				iLocal_67 = 2;
			}
			else if (!func_107("PRA_LEVAREA", 0, 0))
			{
				func_106("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			bVar0 = func_25();
			if (func_107("PRA_LEVAREA", 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
			if (bVar0 == 0)
			{
				if (func_68(&uLocal_70, &cLocal_368, &uLocal_203))
				{
					func_64();
					func_59();
				}
			}
			else
			{
				func_54(func_58(bVar0), -621899663, -621899663, 5, 0, bVar0, func_57(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_64();
				func_59();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_67 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
	{
		if (!unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9390801B06EE998F())
		{
			system::wait(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xB6B621402486C3E4();
	unk_0x3AFFD31224BF9207(uVar0, 0);
	unk_0x4686BC3BFDBB5348(uVar0, iParam3, 0);
	func_43(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
	}
	unk_0x428C32CC68809A35(1);
	if (iParam0 == 1)
	{
		unk_0xD7C0EA10993D3214(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), iLocal_35, 0))
				{
					unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), iLocal_35, 0);
				}
			}
		}
	}
	if (func_344(unk_0x4A8C381C258A124D()))
	{
		unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_53(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_52())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_51(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_53(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_51(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_49(unk_0x259BE71D8A81D4FA())) && !func_45(unk_0x259BE71D8A81D4FA(), 0)) && !func_44()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_49(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_44()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_48(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1574926;
}

int func_48(var uParam0)
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

int func_49(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_50())
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

bool func_50()
{
	return BitTest(Global_2621446, 3);
}

int func_51(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_52()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0)
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

int func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_113969.f_7691.f_911 == Var0.f_0)
		{
			Global_113969.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_56(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar1, bParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), false);
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 13);
		unk_0x8744D2E3FC95740E(&(Var0.f_1), true);
		if (iParam4 == 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 10);
		}
		Global_113969.f_7691[Global_113969.f_7691.f_136 /*15*/] = { Var0 };
		Global_113969.f_7691.f_136++;
		func_55(bParam5);
		return 1;
	}
	return 0;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(bParam0))
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

int func_56(int iParam0)
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

int func_57(bool bParam0)
{
	if (bParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_58(bool bParam0)
{
	if (bParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_59()
{
	unk_0x406CBCEA35499884();
	func_62();
	func_60(0, 0);
	func_379();
}

void func_60(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_33(0) && Global_79636.f_1 == 1) && func_61(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_33(0))
	{
		iVar0 = func_32();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79638, true);
		Global_79654 = uVar2;
		Global_79655 = unk_0x1DD05E817C89C737();
	}
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_62()
{
	Global_21152 = 0;
	func_63();
}

void func_63()
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

void func_64()
{
	func_67(0, -1);
	func_66(0, 318);
	func_65(1, 320);
}

void func_65(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_64174)
	{
	}
	Global_64174 = 0;
	if (bParam0)
	{
		Global_64175 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_76262[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] > 0)
			{
				if (Global_76262[iVar0 /*9*/] == iParam1)
				{
					Global_76262[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	Global_64177 = iParam0;
	Global_64178 = iParam1;
}

int func_68(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_104())
			{
				if ((func_103(74) || func_103(75)) && func_102())
				{
					if (func_25() == 0)
					{
						func_101(1);
						func_100(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_99(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_83(uParam2, func_98(), func_25(), "FBIPRAU", func_97(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_82(1) };
							func_100(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_101(0);
					*uParam0 = 4;
				}
				else
				{
					func_99(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_83(uParam2, func_98(), func_25(), "FBIPRAU", func_97(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_82(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_75();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_74())
			{
				if (unk_0xE7365CC791D1E4EB() >= 0)
				{
					func_73("FBIPRAU", sParam1);
					func_72(1);
					*uParam0 = 3;
				}
			}
			if (func_71())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_74())
			{
				if (!func_70(0))
				{
					if (!func_103(3) && func_104())
					{
						func_69(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_69(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

int func_70(int iParam0)
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

int func_71()
{
	if (Global_22335 == 1 || Global_23302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_72(bool bParam0)
{
	unk_0x0F15249D24BC5ADA(bParam0);
	if (bParam0)
	{
	}
}

void func_73(char* sParam0, char* sParam1)
{
	if (unk_0xE87F28FD4128D063())
	{
		Global_22343 = 1;
		StringCopy(&Global_22350, sParam0, 24);
		StringCopy(&Global_22344, sParam1, 24);
	}
}

int func_74()
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

void func_75()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_80(iVar0);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (func_79(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_76(func_77(), 0, func_25(), func_98(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_76(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
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
		Var0.f_3 = func_56(iParam1);
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
		func_55(bParam2);
		return 1;
	}
	return 0;
}

int func_77()
{
	switch (func_78())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_78()
{
	return Global_79652;
}

int func_79(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_97366, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0x4A8C381C258A124D();
	}
	return Global_98991[func_81(iParam0)];
}

int func_81(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_82(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
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
		switch (func_25())
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

bool func_83(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_96(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_8118 = bParam2;
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22300 = 0;
	Global_22291 = 1;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam6 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 0;
	return func_84(sParam4, iParam5, bParam9);
}

int func_84(char* sParam0, int iParam1, bool bParam2)
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
					func_63();
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
		if (func_95(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_94();
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
				func_93();
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
				if (func_92())
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
			if (func_52())
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
			func_91();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_90();
		func_85();
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
		func_63();
	}
	return 0;
}

void func_85()
{
	if (!func_86())
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

int func_86()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_89())
	{
		return 0;
	}
	if (func_87(unk_0x259BE71D8A81D4FA()))
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

bool func_87(int iParam0)
{
	return func_88(iParam0, 20);
}

var func_88(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_89()
{
	return -1;
}

void func_90()
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

void func_91()
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

int func_92()
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

void func_93()
{
	if (func_27(14))
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
		Global_20930 = func_25();
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

void func_94()
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

bool func_95(int iParam0, int iParam1)
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

void func_96(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_97()
{
	char* sVar0;
	
	switch (func_78())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_98()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_100(int iParam0, int iParam1)
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

void func_101(bool bParam0)
{
	if (bParam0)
	{
		func_76(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_103(3))
	{
		func_76(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_76(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_102()
{
	if ((func_103(41) && func_103(3)) && func_103(21))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

int func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_103(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_105(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
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

void func_106(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

bool func_107(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

bool func_108(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

void func_109()
{
	func_216(&iLocal_198, &uLocal_199, &iLocal_69, &iLocal_181, &iLocal_180, Local_184, Local_197.f_0, 0, 1090519040);
	func_215();
	func_156();
	switch (iLocal_67)
	{
		case 0:
			if (func_123(iLocal_66, bLocal_26))
			{
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					if (func_37(iLocal_198))
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_198, 0))
						{
							func_122("PRA_LEVVEH", &iLocal_179);
						}
					}
				}
				iLocal_67 = 1;
			}
			break;
		
		case 1:
			func_121(&iLocal_180, Local_184, &iLocal_68, iLocal_69, &iLocal_179, &iLocal_193);
			if (func_114(iLocal_198, Local_184, &iLocal_180, iLocal_69, iLocal_68, &iLocal_191, &iLocal_194, &iLocal_190, &iLocal_189, &iLocal_179, 1090519040))
			{
				if (!func_113())
				{
					if (func_68(&uLocal_70, &cLocal_368, &uLocal_203))
					{
						func_64();
						func_59();
					}
				}
				else
				{
					func_100(46, 1);
					func_64();
					func_111(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_197.f_0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_197.f_0, 0))
				{
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_197.f_0, -1);
				}
				else
				{
					func_110(Local_197.f_0, Local_184, 126,0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_67 = 1;
				}
			}
			break;
	}
}

int func_110(int iParam0, struct<3> Param1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xB1EAADCB692D69CE(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xB2BD5837A8D3CEDA(iParam0, Param1, 1, 0, 0, iParam4);
		unk_0x5C96CEA06531AB03(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_111(bool bParam0)
{
	func_112(iLocal_66);
	iLocal_176 = iLocal_66;
	if (!bParam0)
	{
		iLocal_66 = iLocal_176 + 1;
	}
	else if (iLocal_176 > 0)
	{
		iLocal_66 = (iLocal_176 - 1);
	}
	iLocal_179 = 0;
	iLocal_67 = 0;
}

void func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_113()
{
	if (func_104())
	{
		if ((func_103(74) || func_103(75)) && func_102())
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_37(iParam0))
			{
				if (!unk_0xD1F1A906BA9226BE(iParam0))
				{
					func_122(func_120(func_78()), iParam9);
				}
			}
			if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, fParam10, fParam10, 2f, 0, 1, 2))
			{
				unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, fParam10, fParam10, 2f, 1, 1, 2);
				if (func_107(func_120(func_78()), 0, 0))
				{
					unk_0x4E8E15513E171E54(func_120(func_78()));
				}
				*iParam5 = 1;
				func_118(iParam2, Param1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_108(unk_0x4A8C381C258A124D(), Param1, fVar0, 1))
					{
						*iParam5 = 0;
						func_117(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (unk_0x65FFA94B82A71741(iParam0, Param1, fParam10, fParam10, 2f, 0, 1, 2))
	{
		if (*iParam7 == -1)
		{
			unk_0x0B74F181ADFC39BF(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_107(func_120(func_78()), 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
			*iParam7 = unk_0x1DD05E817C89C737();
			*iParam8 = 1;
			unk_0x0B74F181ADFC39BF(iParam0, 2);
		}
		else if ((unk_0x1DD05E817C89C737() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x38A100E16C95161B(iParam0) == 2)
		{
			unk_0x0B74F181ADFC39BF(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_107(func_116(func_78(), 0), 0, 0))
			{
				unk_0x4E8E15513E171E54(func_116(func_78(), 0));
			}
			if (!func_107(func_115(func_78()), 0, 0))
			{
				func_106(func_115(func_78()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_115(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_116(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_117(float fParam0, int iParam1)
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
				unk_0xE5EE5C9DDF05D925(iVar0, fParam0, iParam1, 0);
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

void func_118(int iParam0, struct<3> Param1, int iParam2)
{
	if (!unk_0xC450B06E5AAA0985(*iParam0))
	{
		*iParam0 = func_119(Param1, 5, iParam2);
	}
}

int func_119(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x1456FD5C0C438B19(iVar0, iParam1);
	unk_0x5D3946F818C6B331(iVar0, 1f);
	unk_0xBC64B805EE071A37(iVar0, iParam2);
	return iVar0;
}

char* func_120(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_121(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (*iParam2)
	{
		case 0:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				unk_0x406CBCEA35499884();
				func_106("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				unk_0x406CBCEA35499884();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_122(func_116(func_78(), 0), iParam4);
					func_118(iParam0, Param1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_106(func_115(func_78()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_122(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_106(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_123(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_26 = false;
				func_40(1, 1, 1);
			}
			else if (func_150(1, Local_183, 0))
			{
				if (func_149())
				{
					func_148(33);
					unk_0xCCA6D8A84EE8C88A(joaat("trash"), 1);
					unk_0xCCA6D8A84EE8C88A(joaat("towtruck"), 1);
					unk_0xCCA6D8A84EE8C88A(joaat("s_m_y_garbage"), 1);
					iLocal_66 = 2;
					func_7(&iLocal_180);
					func_146(&uLocal_54, 0, 0);
					func_145(190, 1244,338f, -339,3197f, 68,0823f);
					func_143();
					unk_0x470041F66BF345BA("DRIVE", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_150(2, Local_197.f_1, Local_197.f_4) && func_150(3, Local_195.f_1, Local_195.f_4)) && func_150(4, Local_196.f_1, Local_196.f_4)) && func_142(0))
				{
					func_143();
					func_148(33);
					if (func_344(Local_195.f_0))
					{
						func_141(Local_195.f_0);
					}
					if (func_344(Local_196.f_0))
					{
						func_140(Local_196.f_0);
					}
					func_139(Local_197.f_0);
					if (func_344(Local_196.f_0) && func_344(Local_195.f_0))
					{
						func_128(iLocal_185, 1, 0, 1);
					}
					unk_0xCCA6D8A84EE8C88A(joaat("trash"), 1);
					unk_0xCCA6D8A84EE8C88A(joaat("towtruck"), 1);
					unk_0xCCA6D8A84EE8C88A(joaat("s_m_y_garbage"), 1);
					if (unk_0xCA048D064CB64920(Local_197.f_0) != 0)
					{
						iVar0 = unk_0xCA048D064CB64920(Local_197.f_0);
						unk_0x9F83BF77C7204C05(1);
						func_7(&iVar0);
						unk_0x9F83BF77C7204C05(0);
					}
					func_126(&iLocal_180, Local_197.f_0, 1);
					func_145(190, 1244,338f, -339,3197f, 68,0823f);
					unk_0x470041F66BF345BA("DRIVE", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_150(2, Local_197.f_1, Local_197.f_4) && func_150(3, Local_195.f_1, Local_195.f_4)) && func_150(4, Local_196.f_1, Local_196.f_4))
				{
					func_125(unk_0x4A8C381C258A124D(), 1197,861f, -353,011f, 68,0929f, 278,9647f);
					func_124();
					bLocal_26 = false;
					unk_0x470041F66BF345BA("DRIVE", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_143();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_150(2, Local_197.f_1, Local_197.f_4))
				{
					func_124();
					func_143();
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_197.f_0, -1);
					bLocal_26 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_150(2, Local_184, Local_197.f_4))
				{
					func_124();
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_197.f_0, -1);
					func_143();
					bLocal_26 = false;
					func_40(1, 1, 1);
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

void func_124()
{
	if (iLocal_66 == 1)
	{
		func_141(Local_195.f_0);
		func_140(Local_196.f_0);
		func_139(Local_197.f_0);
		func_128(iLocal_185, 1, 0, 1);
	}
	iLocal_201 = 0;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_189 = 0;
	iLocal_190 = 0;
	iLocal_191 = 0;
}

void func_125(int iParam0, struct<3> Param1, float fParam2)
{
	if (func_344(uParam0))
	{
		unk_0x974022927CB47E68(uParam0);
	}
	func_110(iParam0, Param1, fParam2, 0, 1);
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xC450B06E5AAA0985(*iParam0))
	{
		*iParam0 = func_127(iParam1, iParam2, 5);
	}
}

int func_127(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0x18E23E031A9B798F(uParam0);
		unk_0x6A52036D51C7E18E(iVar0, uParam1);
		unk_0x1456FD5C0C438B19(iVar0, iParam2);
		unk_0x5D3946F818C6B331(iVar0, 1f);
	}
	return iVar0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_39 = iParam0;
	bLocal_48 = iParam1;
	bLocal_47 = iParam2;
	bLocal_49 = iParam3;
	Local_43[0 /*11*/].f_1 = 0;
	Local_43[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_39 - 1))
	{
		Local_44[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_45 = 0f;
	func_130();
	Local_43[1 /*11*/].f_7 = 3;
	Local_43[1 /*11*/].f_5 = 0;
	Local_43[1 /*11*/].f_10 = 1;
	Local_43[1 /*11*/].f_2 = 1500;
	Local_43[1 /*11*/].f_3 = 500;
	Local_43[0 /*11*/].f_5 = 0;
	Local_43[0 /*11*/].f_10 = 0;
	Local_43[0 /*11*/].f_2 = 1000;
	Local_43[0 /*11*/].f_3 = 100;
	unk_0x06CD913C241C765E("Enemies", &uLocal_38);
	unk_0x3CEA1FD137ACE2D9(Local_43[0 /*11*/], uLocal_38);
	unk_0x3CEA1FD137ACE2D9(Local_43[1 /*11*/], uLocal_38);
	unk_0x87EDE48547CC8942(Local_43[0 /*11*/], 1, 0);
	unk_0x87EDE48547CC8942(Local_43[1 /*11*/], 1, 0);
	func_129(1,9f, 1,9f, 8f, 0f, 0f, 0f);
}

void func_129(struct<3> Param0, struct<3> Param1)
{
	Local_40.f_8 = { Param0 };
	Local_40.f_11 = { Param1 };
	Local_40.f_1 = 4;
}

void func_130()
{
	if (!unk_0xCECDBB848D53DEB2(Local_43[0 /*11*/], iLocal_41, 0))
	{
		unk_0xA966E518B752B92A(Local_43[0 /*11*/], unk_0x0D1381B6E0F3987D(iLocal_41, func_138(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_43[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_131(1);
	}
}

void func_131(bool bParam0)
{
	if (!unk_0xC39AE5D390581AD5(iLocal_41, 0, 0))
	{
		func_132(bParam0);
		if (iLocal_46 != (iLocal_39 - 1))
		{
			if (iLocal_46 == 4)
			{
				unk_0x3114F582B6F4FD2C(Local_43[0 /*11*/], iLocal_41, Local_44[iLocal_46 /*25*/], 15f, 2883755, Local_44[iLocal_46 /*25*/].f_6);
			}
			else
			{
				unk_0xCF6CC9EA0D2EFE23(Local_43[0 /*11*/], iLocal_41, Local_44[iLocal_46 /*25*/], 15f, 0, 0, 2883755, Local_44[iLocal_46 /*25*/].f_6, Local_44[iLocal_46 /*25*/].f_7);
			}
			Local_43[0 /*11*/].f_8 = Local_43[0 /*11*/].f_7;
			Local_43[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x7C8E9DE09D4AD3FF(Local_43[0 /*11*/], iLocal_41, 15f, 786599);
			Local_43[0 /*11*/].f_8 = Local_43[0 /*11*/].f_7;
			Local_43[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_43[0 /*11*/].f_8 = Local_43[0 /*11*/].f_7;
		Local_43[0 /*11*/].f_7 = 7;
	}
}

void func_132(bool bParam0)
{
	if (iLocal_46 != -1)
	{
		if (!func_137(Local_44[iLocal_46 /*25*/].f_11) && !func_137(Local_44[iLocal_46 /*25*/].f_14))
		{
			unk_0xA63572E348CC4CFB(Local_44[iLocal_46 /*25*/].f_11 - Local_44[iLocal_46 /*25*/].f_14, Local_44[iLocal_46 /*25*/].f_11 + Local_44[iLocal_46 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_135();
	}
	else
	{
		iLocal_46 = func_133();
	}
	if (iLocal_46 != -1)
	{
		if (!func_137(Local_44[iLocal_46 /*25*/].f_11) && !func_137(Local_44[iLocal_46 /*25*/].f_14))
		{
			unk_0xA63572E348CC4CFB(Local_44[iLocal_46 /*25*/].f_11 - Local_44[iLocal_46 /*25*/].f_14, Local_44[iLocal_46 /*25*/].f_11 + Local_44[iLocal_46 /*25*/].f_14, 0, 1);
		}
	}
}

int func_133()
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_37(iLocal_41))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_41, 1) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_39 - 1))
		{
			fVar5 = unk_0xED977E2AE2CB16EE(Var1, Local_44[iVar2 /*25*/], 1);
			if (!func_137(Local_44[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_39 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_134(Local_44[iVar0 /*25*/] - Var1, unk_0x90D0E0397D3F7690(iLocal_41));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_41, 1) };
			fVar7 = func_134(Local_44[iVar3 /*25*/] - Var1, unk_0x90D0E0397D3F7690(iLocal_41));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_39 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_134(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_135()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_48)
	{
		while (Local_44[iLocal_46 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_46++;
			if (iLocal_46 >= (iLocal_39 - 1))
			{
				iVar0 = -1;
				iLocal_46 = (iLocal_39 - 1);
			}
		}
		if (iLocal_46 == (iLocal_39 - 1))
		{
			if (bLocal_47)
			{
				iLocal_46 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_39 - 1))
				{
					Local_44[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_46 = (iLocal_39 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_39 - 1))
		{
			if (Local_44[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_39 - 1))
		{
			iLocal_46 = (iLocal_39 - 1);
		}
		else if (iVar1 == iLocal_39)
		{
			if (bLocal_47)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_39 - 1))
				{
					Local_44[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_46 = func_136();
			}
			else
			{
				iLocal_46 = -1;
				return;
			}
		}
		else
		{
			iLocal_46 = func_136();
		}
	}
}

int func_136()
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, (iLocal_39 - 1));
	while (Local_44[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, (iLocal_39 - 1));
	}
	return iVar0;
}

int func_137(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (!bParam0)
	{
		uVar1 = unk_0x365DC1E8054AF31A(iLocal_41, "wheel_rf");
	}
	else
	{
		uVar1 = unk_0x365DC1E8054AF31A(iLocal_41, "wheel_lf");
	}
	Var0 = { unk_0x75DF72FC74EED046(iLocal_41, uVar1) };
	Var0 = { unk_0xAD8278DAEC2CC059(iLocal_41, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0,5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0,5f, 0f, -1f) };
	}
	return Var0;
}

void func_139(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_41 = iParam0;
	}
}

void func_140(var uParam0)
{
	if (func_344(uParam0))
	{
		Local_43[1 /*11*/] = uParam0;
	}
}

void func_141(var uParam0)
{
	if (func_344(uParam0))
	{
		Local_43[0 /*11*/] = uParam0;
	}
}

int func_142(bool bParam0)
{
	unk_0x80813AC549A1E8AE("missfbi4prepp1");
	unk_0xA336AFF285251641("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xE100DD4F82A51BDE("missfbi4prepp1") && !unk_0x60C643DC13B0C72B("missfbi4prepp1_garbageman"))
		{
			system::wait(0);
		}
		return 1;
	}
	else if (unk_0xE100DD4F82A51BDE("missfbi4prepp1") && unk_0x60C643DC13B0C72B("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_143()
{
	func_144(&uLocal_203);
}

void func_144(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_99(uParam0, iVar0, unk_0x4A8C381C258A124D(), sVar1, 0, 1);
}

void func_145(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_33328[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_33328[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_33328[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
	Global_33328[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_39378 = 1;
}

void func_146(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2738934.f_4712, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_147(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_147(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_147(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_148(int iParam0)
{
	if (Global_98435 != -1)
	{
		if (iParam0 == Global_98435)
		{
			Global_98439 = 1;
			return;
		}
	}
}

int func_149()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("trash")))
		{
			unk_0xEE0BCDB1B5E36BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1, 0);
			iLocal_198 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (func_37(iLocal_198))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150(int iParam0, struct<3> Param1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			if (func_155(Param1, Local_183, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xF2CB0224D3BE0B42(sLocal_178, 0);
			if (unk_0xDCB78A15E5F495DC(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_98010[0]))
			{
				unk_0xEE0BCDB1B5E36BCB(Global_98010[0], 1, 1);
				Local_197.f_0 = Global_98010[0];
				if (func_37(Local_197.f_0))
				{
					func_36(Local_197.f_0, 0);
					unk_0x5FE0938FDE9B0958(Local_197.f_0, 1);
					unk_0x11C125313CB8ADA2(Local_197.f_0, 1);
					return 1;
				}
			}
			else if (func_154(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1))
			{
				func_36(Local_197.f_0, 0);
				unk_0x5FE0938FDE9B0958(Local_197.f_0, 1);
				unk_0x11C125313CB8ADA2(Local_197.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[0]))
			{
				if (!unk_0x89568FA9A6BC0B4A(Global_98010.f_9[0], 1))
				{
					unk_0xEE0BCDB1B5E36BCB(Global_98010.f_9[0], 1, 1);
					Local_195.f_0 = Global_98010.f_9[0];
					if (func_344(Local_195.f_0))
					{
						unk_0xAAA71DD7E9059338(Local_195.f_0, true);
						unk_0x0428AFDCAA63B06E(Local_195.f_0, 170, 0);
						unk_0x1CA08719184AFC6F(Local_195.f_0, 65536, 1);
						unk_0xBE8796DB2B90A437(Local_195.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_151(&Local_195, Local_195.f_5, Local_195.f_1, Local_195.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_197.f_0))
				{
					unk_0x73CAFD2038E812B3(Local_195.f_0, Local_197.f_0, -1);
					unk_0xAAA71DD7E9059338(Local_195.f_0, true);
					unk_0x0428AFDCAA63B06E(Local_195.f_0, 170, 0);
					unk_0x1CA08719184AFC6F(Local_195.f_0, 65536, 1);
					unk_0xBE8796DB2B90A437(Local_195.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[1]))
			{
				if (!unk_0x89568FA9A6BC0B4A(Global_98010.f_9[1], 1))
				{
					unk_0xEE0BCDB1B5E36BCB(Global_98010.f_9[1], 1, 1);
					Local_196.f_0 = Global_98010.f_9[1];
					if (func_344(Local_196.f_0))
					{
						unk_0x0428AFDCAA63B06E(Local_196.f_0, 170, 0);
						unk_0x1CA08719184AFC6F(Local_196.f_0, 65536, 1);
						unk_0xBE8796DB2B90A437(Local_196.f_0, 50, 1);
						unk_0xAAA71DD7E9059338(Local_196.f_0, true);
						unk_0x788F35D395511DFE(Local_196.f_0, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_151(&Local_196, Local_196.f_5, Local_196.f_1, Local_196.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_197.f_0))
				{
					unk_0x73CAFD2038E812B3(Local_196.f_0, Local_197.f_0, 0);
					unk_0x0428AFDCAA63B06E(Local_196.f_0, 170, 0);
					unk_0x1CA08719184AFC6F(Local_196.f_0, 65536, 1);
					unk_0xBE8796DB2B90A437(Local_196.f_0, 50, 1);
					unk_0xAAA71DD7E9059338(Local_196.f_0, true);
					unk_0x788F35D395511DFE(Local_196.f_0, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_151(var uParam0, var uParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (func_153(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, uParam1, Param2, uParam3, 1, 1);
			if (func_344(*uParam0))
			{
				if (bParam5)
				{
					unk_0x5D7CD709B34C90F0(*uParam0, 1);
				}
				if (bParam6)
				{
					unk_0xAAA71DD7E9059338(*uParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0x3F58BFCF656F0DF1(*uParam0, bParam7);
				}
				if (bParam4)
				{
					func_152(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_344(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x6252BC0DD8A320DB(uParam0))
		{
			unk_0x55098D9E9AD58806(uParam0);
		}
	}
	else
	{
		unk_0x55098D9E9AD58806(uParam0);
	}
}

int func_153(var uParam0, char* sParam1, int iParam2)
{
	unk_0xEC9DAA34BBB4658C(uParam0);
	if (!unk_0xD6F9DEE4765092A9(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x6252BC0DD8A320DB(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (func_153(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				if (!unk_0x110821AE6C63DD4F(*uParam0))
				{
					unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
				}
				unk_0x1DE99C193C7EC64B(*uParam0, 1084227584);
				if (bParam4)
				{
					func_152(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*uParam0))
		{
			unk_0xB2BD5837A8D3CEDA(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(*uParam0, fParam3);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_155(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_157(&(Local_43[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_157(var uParam0, int iParam1)
{
	if (func_344(*uParam0))
	{
		func_203(uParam0, iParam1, 0);
		if (unk_0x13CCB1AD131C1082(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x82E64DE58A6B84A8(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0,172f)
			{
				if (func_10(Local_44[iLocal_46 /*25*/].f_17) && unk_0xA3736D76B0E93E93(Local_44[iLocal_46 /*25*/].f_17))
				{
					unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
					unk_0xC935F6A2D1890729(*uParam0);
					if (iLocal_46 <= 20 && iLocal_46 != -1)
					{
						Local_44[iLocal_46 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0x837D67618BF89034(Local_44[iLocal_46 /*25*/].f_17, 1, 0);
					unk_0x96CCECDBC57DA984(Local_44[iLocal_46 /*25*/].f_17, 1, unk_0x90D0E0397D3F7690(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_200();
					func_199(uParam0);
				}
				func_186(uParam0);
				break;
			
			case 1:
				func_159(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_44[iLocal_46 /*25*/].f_17))
		{
			if (unk_0xA3736D76B0E93E93(Local_44[iLocal_46 /*25*/].f_17))
			{
				unk_0x837D67618BF89034(Local_44[iLocal_46 /*25*/].f_17, 1, 0);
				unk_0x96CCECDBC57DA984(Local_44[iLocal_46 /*25*/].f_17, 1, unk_0x90D0E0397D3F7690(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0xFC8BFE4B41177C22(*uParam0))
		{
			if (!func_158(unk_0x4A8C381C258A124D(), *uParam0, 150f, 1) && !bLocal_50)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_158(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), unk_0xD1A6A821F5AC81DB(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_159(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_185(*uParam0, joaat("script_task_combat")))
				{
					unk_0x974022927CB47E68(*uParam0);
				}
				unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 21:
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				if (func_178(*uParam0, unk_0x4A8C381C258A124D(), 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 1);
					return;
				}
			}
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x7F420695E3F776FB(*uParam0, 0))
				{
					unk_0x849ABF0CBD8EE0D6(*uParam0, unk_0x4A8C381C258A124D(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x93C0674FC00824D0(uVar0);
					unk_0x4BD42B0527065BB6(*uParam0, uVar0);
					unk_0xD0557B139A542F12(&uVar0);
				}
				if (!unk_0xC450B06E5AAA0985(uParam0->f_4))
				{
					uParam0->f_4 = func_174(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 10:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x7F420695E3F776FB(*uParam0, 0))
				{
					unk_0x0FB8E752BCC547A9(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else if (!func_185(*uParam0, joaat("script_task_cower")))
				{
					if (func_185(*uParam0, joaat("script_task_combat")))
					{
						unk_0x974022927CB47E68(*uParam0);
					}
					unk_0xAFC7A89C990C4339(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0x0974B2530CABDF56(*uParam0, 1, 1);
				unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_173(uParam0);
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > 5000)
			{
				if (!func_185(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
				{
					if (unk_0xFC8BFE4B41177C22(Local_43[func_172(uParam0->f_10) /*11*/]))
					{
						unk_0xA966E518B752B92A(*uParam0, Local_52, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_185(*uParam0, joaat("script_task_play_anim")))
			{
				unk_0xB5396F1FB088FE38(&uVar1);
				if (func_171(unk_0xD1A6A821F5AC81DB(*uParam0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 1,5f)
				{
					unk_0xCD76801E1106CABE(0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 0);
				}
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x93C0674FC00824D0(uVar1);
				unk_0x4BD42B0527065BB6(*uParam0, uVar1);
				unk_0xD0557B139A542F12(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 19:
			func_173(uParam0);
			if (!func_185(*uParam0, joaat("script_task_play_anim")))
			{
				unk_0x21B9EFA4B4AA3A5B(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 1:
			if (!unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
			{
				func_169(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x27E68848F0E5D7D9(*uParam0) && (unk_0x1DD05E817C89C737() - uParam0->f_1) > 3000)
			{
				func_169(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > 8000)
			{
				unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 0);
				if (!iLocal_51)
				{
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
					{
						unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						iLocal_51 = 1;
					}
				}
				unk_0x0974B2530CABDF56(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_6 = 8;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 1)
			{
				unk_0x0974B2530CABDF56(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 7:
			if (unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_167())
					{
						if (func_344(*uParam0))
						{
							unk_0x974022927CB47E68(*uParam0);
							unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 120f, 1))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_169(uParam0);
			}
			break;
		
		case 8:
			if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 120f, 1))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xA6534E6C7AE314D6(*uParam0))
			{
				func_177(uParam0, 1);
				return;
			}
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) > uParam0->f_2 || !func_185(*uParam0, joaat("script_task_drive_by")))
			{
				func_164(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x0FB8E752BCC547A9(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else if (func_178(Local_43[func_172(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 0);
				}
				else
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 15:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else if (func_178(Local_43[func_172(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 0);
				}
				else
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 16:
			if (unk_0xA6534E6C7AE314D6(*uParam0))
			{
				func_177(uParam0, 1);
				return;
			}
			if ((unk_0x1DD05E817C89C737() - iLocal_53) >= 9000)
			{
				if (!func_162(uParam0))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else
				{
					uParam0->f_1 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0x1DD05E817C89C737() - iLocal_53) >= 5000 && (unk_0x1DD05E817C89C737() - iLocal_53) <= 5500)
			{
				if (unk_0x7F420695E3F776FB(*uParam0, 0))
				{
					if (unk_0x10BAD2FED582B598(*uParam0))
					{
						unk_0x827783BAD5CBE95D(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else if (func_178(Local_43[func_172(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 0);
				}
				else
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 17:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
				else if (func_178(Local_43[func_172(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 0);
				}
				else
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 20:
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (func_178(*uParam0, unk_0x4A8C381C258A124D(), 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 1);
					return;
				}
			}
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x5105BE70DEF1F5FB(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, 5f, 0f, -2f), unk_0xD1A6A821F5AC81DB(iLocal_41, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_164(uParam0);
				}
				else
				{
					func_169(uParam0);
					func_169(&(Local_43[func_172(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
			func_173(uParam0);
			break;
		
		case 22:
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				if (func_178(*uParam0, unk_0x4A8C381C258A124D(), 1126825984, 1, 250, 7))
				{
					func_177(uParam0, 1);
					return;
				}
			}
			if ((unk_0x1DD05E817C89C737() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_158(*uParam0, unk_0x4A8C381C258A124D(), 15f, 1))
				{
					func_164(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
					return;
				}
				else
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
		
		case 23:
			func_203(uParam0, uParam0->f_10, 1);
			func_173(uParam0);
			if (func_108(*uParam0, Local_52, 2f, 1))
			{
				if (func_160(*uParam0, Local_52, 1126825984, 0))
				{
					unk_0x974022927CB47E68(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0x1DD05E817C89C737();
				}
			}
			break;
	}
}

int func_160(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_161(Param1 - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
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
		Var1 = { func_161(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_134(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_161(struct<3> Param0)
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

int func_162(var uParam0)
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_41, 0f, 10f, -2f), unk_0x0D1381B6E0F3987D(iLocal_41, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0xD9CCFCDF70474932(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_163(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_37(iVar0))
		{
			if (!unk_0x848DE0A81098ECCB(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
		}
	}
}

void func_164(var uParam0)
{
	unk_0xD414C47AFF81382A(2, uLocal_38, joaat("player"));
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_130();
			break;
		
		case 3:
			if (!func_185(*uParam0, joaat("script_task_perform_sequence")))
			{
				if (iLocal_46 <= 20 && iLocal_46 != -1)
				{
					Local_44[iLocal_46 /*25*/].f_18 = 1;
				}
				if (!unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_44[iLocal_46 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_165(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0x1DD05E817C89C737();
	uParam0->f_5 = 0;
}

void func_165(var uParam0)
{
	if (!func_185(*uParam0, joaat("script_task_put_ped_directly_into_melee")))
	{
		if (Local_44[iLocal_46 /*25*/].f_23 != 0)
		{
			if (func_10(Local_44[iLocal_46 /*25*/].f_17))
			{
				unk_0xF3812FC874B9C273(*uParam0, Local_44[iLocal_46 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0xA966E518B752B92A(*uParam0, Local_44[iLocal_46 /*25*/].f_19, 1f, 20000, -1f, 0, func_166(Local_44[iLocal_46 /*25*/].f_19, unk_0xD1A6A821F5AC81DB(*uParam0, 1), 1));
		}
		if (func_37(iLocal_41))
		{
			unk_0xBFE60A5CC0C835D8(iLocal_41, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_166(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x4964D7A2BFD2F9A3(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_167()
{
	if (func_37(iLocal_41) && func_344(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_41, unk_0x4A8C381C258A124D(), 1))
		{
			unk_0xE4DC7B3DD712372B(iLocal_41);
			if (func_168() || unk_0x8D91ADE44AC79BC9(iLocal_41) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x548F6F43A7CB6F45(iLocal_41, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_169(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_170(uParam0);
		uParam0->f_1 = unk_0x1DD05E817C89C737();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_170(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x4FAFF4BCB7633475(*uParam0))
			{
				unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
				unk_0xC935F6A2D1890729(*uParam0);
				unk_0x10425721983AE158(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_171(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_173(var uParam0)
{
	if (func_37(iLocal_41) && (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_41, 0) && !unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0)))
	{
		if (unk_0xDF93B3CFAC96698F(iLocal_41) > 0f)
		{
			uParam0->f_1 = unk_0x1DD05E817C89C737();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_174(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_175(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_175(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(iVar0, func_176(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(iVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(iVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(iVar0, func_176(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(iVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(iVar0, func_176(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_176(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_177(var uParam0, int iParam1)
{
	func_170(uParam0);
	if ((unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_158(unk_0x4A8C381C258A124D(), *uParam0, 10f, 1))
		{
			if (!func_185(*uParam0, joaat("script_task_smart_flee_ped")))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0x1DD05E817C89C737();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x1DD05E817C89C737();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_185(*uParam0, joaat("script_task_combat")) && !func_185(*uParam0, joaat("script_task_put_ped_directly_into_melee")))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0x1DD05E817C89C737();
		}
	}
}

bool func_178(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_184(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_183(&(Local_36[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_182(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_181();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_36[iVar2 /*4*/].f_1 = iParam0;
		Local_36[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_179(&(Local_36[iVar2 /*4*/]), Var1, iParam1, &(Local_36[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1DD05E817C89C737() - Local_36[iVar2 /*4*/].f_3) < iParam4);
}

int func_179(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_180(iParam2, iParam5) };
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
		func_10(iVar3);
		if (unk_0xBD545F8729E9F413(iVar3) == iParam2)
		{
			if (bLocal_37)
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
		func_10(iVar3);
		if (unk_0x7F420695E3F776FB(iParam2, 0))
		{
			if (unk_0xE93EDE86BBB66532(iVar3) == unk_0x6EF03BE64E058E2F(iParam2, 0))
			{
				if (bLocal_37)
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

Vector3 func_180(int iParam0, int iParam1)
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

int func_181()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36.f_0)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_182(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_161(unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
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
		Var1 = { func_161(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_134(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_183(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36.f_0)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_185(int iParam0, int iParam1)
{
	if (func_344(uParam0))
	{
		if (unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_186(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_41, 1))
			{
				func_177(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_197(uParam0, 1);
			}
			else
			{
				func_197(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0xF4244288C3EF3306(*uParam0, iLocal_41))
			{
				if (!func_185(*uParam0, joaat("script_task_enter_vehicle")))
				{
					if (uParam0->f_10 == 0)
					{
						func_131(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_41, 1))
			{
				func_177(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_41, 1))
			{
				func_177(uParam0, 0);
				return;
			}
			if (bLocal_49)
			{
				if (iLocal_46 <= 20 && iLocal_46 != -1)
				{
					if (!Local_44[iLocal_46 /*25*/].f_18)
					{
						if (func_108(*uParam0, Local_44[iLocal_46 /*25*/], 20f, 1))
						{
							if (Local_44[iLocal_46 /*25*/].f_9 && unk_0x1CE980E99A2A6FB6(iLocal_41))
							{
								func_196();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_108(*uParam0, Local_44[iLocal_46 /*25*/], 25f, 1))
			{
				if (Local_44[iLocal_46 /*25*/].f_9)
				{
					func_195(uParam0);
				}
				else
				{
					Local_44[iLocal_46 /*25*/].f_18 = 1;
					func_131(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_41))
			{
				unk_0xE5EE5C9DDF05D925(iLocal_41, 25f, 10, 0);
				fVar0 = unk_0xDF93B3CFAC96698F(iLocal_41);
				if (fVar0 < 8f)
				{
					func_195(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_185(*uParam0, joaat("script_task_perform_sequence")) && unk_0x1CE980E99A2A6FB6(iLocal_41))
			{
				if (bLocal_49)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x092B9247AF00F5CF(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_344(Local_43[1 /*11*/]))
			{
				if (unk_0xCECDBB848D53DEB2(Local_43[1 /*11*/], iLocal_41, 0) && Local_43[1 /*11*/].f_7 == 3)
				{
					func_131(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
			{
				func_165(uParam0);
			}
			break;
		
		case 9:
			func_187(uParam0);
			break;
	}
}

void func_187(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_185(*uParam0, joaat("script_task_goto_entity_offset")))
			{
				unk_0xB5396F1FB088FE38(&uVar0);
				if (func_171(unk_0xD1A6A821F5AC81DB(*uParam0, 1), Local_44[iLocal_46 /*25*/].f_19) > 1,5f)
				{
					unk_0xCD76801E1106CABE(0, Local_44[iLocal_46 /*25*/].f_19, 0);
				}
				unk_0x10425721983AE158(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uVar0);
				unk_0x4BD42B0527065BB6(*uParam0, uVar0);
				unk_0xD0557B139A542F12(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_192(Local_44[iLocal_46 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_191(uParam0);
				return;
			}
			unk_0x04FC75A7251431C6(*uParam0, 0,2f);
			break;
		
		case 2:
			if (func_185(*uParam0, joaat("script_task_perform_sequence")))
			{
				if (unk_0x13CCB1AD131C1082(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x82E64DE58A6B84A8(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0,333f)
					{
						unk_0x4669032A1DFBB449(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xC806A20F4C5AC6AF(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_44[iLocal_46 /*25*/].f_17) && !unk_0xA3736D76B0E93E93(Local_44[iLocal_46 /*25*/].f_17))
						{
							unk_0x4D306DD94DD6FDBA(Local_44[iLocal_46 /*25*/].f_17, *uParam0, unk_0x72F7E39FB49FC0BA(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
						}
					}
				}
				if (func_192(Local_44[iLocal_46 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_191(uParam0);
					return;
				}
			}
			else if (!func_185(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
			{
				if (func_37(iLocal_41))
				{
					unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, 0f, -4,8f, 0f), 1f, -1, 0,25f, 0, unk_0xCFC0C995455A6204(iLocal_41));
				}
				uParam0->f_9 = 3;
			}
			unk_0x04FC75A7251431C6(*uParam0, 0,2f);
			break;
		
		case 3:
			if (func_37(iLocal_41))
			{
				if (!func_192(unk_0x0D1381B6E0F3987D(iLocal_41, 0f, -5,5f, 0f), iLocal_41, 1,9f, 1,9f, 8f))
				{
					if (unk_0x65FFA94B82A71741(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, 0f, -5,5f, 0f), 0,9f, 0,9f, 2f, 0, 1, 0))
					{
						if (!func_185(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
						{
							unk_0xB5396F1FB088FE38(&uVar1);
							if (func_171(unk_0xD1A6A821F5AC81DB(*uParam0, 1), unk_0xD1A6A821F5AC81DB(iLocal_41, 1)) > 3f)
							{
								unk_0x2280392018BC0DD3(0, unk_0xCFC0C995455A6204(iLocal_41), 0);
							}
							unk_0x10425721983AE158(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x93C0674FC00824D0(uVar1);
							unk_0x4BD42B0527065BB6(*uParam0, uVar1);
							unk_0xD0557B139A542F12(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_185(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
					{
						unk_0xA966E518B752B92A(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, 0f, -4,8f, 0f), 1f, -1, 0,25f, 0, unk_0xCFC0C995455A6204(iLocal_41));
					}
				}
				else
				{
					func_189(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_192(unk_0x0D1381B6E0F3987D(iLocal_41, 0f, -5,5f, 0f), *uParam0, 1,9f, 1,9f, 8f))
			{
				if (func_185(*uParam0, joaat("script_task_perform_sequence")))
				{
					if (unk_0x13CCB1AD131C1082(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x82E64DE58A6B84A8(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0,391f)
						{
							if (func_10(Local_44[iLocal_46 /*25*/].f_17))
							{
								if (unk_0xA3736D76B0E93E93(Local_44[iLocal_46 /*25*/].f_17))
								{
									unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
									unk_0xC935F6A2D1890729(*uParam0);
									unk_0x837D67618BF89034(Local_44[iLocal_46 /*25*/].f_17, 1, 0);
									unk_0x2493F314750274C9(Local_44[iLocal_46 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0x96CCECDBC57DA984(Local_44[iLocal_46 /*25*/].f_17, 1, unk_0x90D0E0397D3F7690(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x685171EED42BC4DF(Local_44[iLocal_46 /*25*/].f_17, iLocal_41))
								{
									func_188(&(Local_44[iLocal_46 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_41))
					{
						unk_0x6515021478088FBC(iLocal_41, 5, 0);
						func_188(&(Local_44[iLocal_46 /*25*/].f_17));
					}
					func_164(uParam0);
				}
			}
			else
			{
				func_189(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_188(var uParam0)
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

void func_189(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xD414C47AFF81382A(5, uLocal_38, joaat("player"));
	func_170(uParam0);
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x7F420695E3F776FB(*uParam0, 0))
		{
			unk_0x849ABF0CBD8EE0D6(*uParam0, unk_0x4A8C381C258A124D(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, 0);
			unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(*uParam0, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
	}
	else
	{
		unk_0xB5396F1FB088FE38(&uVar1);
		unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
		unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
		unk_0x93C0674FC00824D0(uVar1);
		unk_0x4BD42B0527065BB6(*uParam0, uVar1);
		unk_0xD0557B139A542F12(&uVar1);
	}
	unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
	unk_0xC935F6A2D1890729(*uParam0);
	func_190();
	if (!unk_0xC450B06E5AAA0985(uParam0->f_4))
	{
		uParam0->f_4 = func_174(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x1DD05E817C89C737();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_190()
{
	Local_40.f_0 = 0;
	Local_40.f_26 = 0;
	Local_40.f_18 = 0;
}

void func_191(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xD414C47AFF81382A(5, uLocal_38, joaat("player"));
	func_170(uParam0);
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x7F420695E3F776FB(*uParam0, 0))
		{
			unk_0x849ABF0CBD8EE0D6(*uParam0, unk_0x4A8C381C258A124D(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, 0);
			unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(*uParam0, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
	}
	else
	{
		unk_0xB5396F1FB088FE38(&uVar1);
		unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
		unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
		unk_0x93C0674FC00824D0(uVar1);
		unk_0x4BD42B0527065BB6(*uParam0, uVar1);
		unk_0xD0557B139A542F12(&uVar1);
	}
	unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
	unk_0xC935F6A2D1890729(*uParam0);
	func_190();
	if (!unk_0xC450B06E5AAA0985(uParam0->f_4))
	{
		uParam0->f_4 = func_174(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x1DD05E817C89C737();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_192(struct<3> Param0, int iParam1, struct<3> Param2)
{
	Local_40.f_2 = { Param0 };
	Local_40.f_8 = { Param2 };
	func_193(&Local_40, iParam1);
	if (Local_40.f_26)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x55B80B6E7AB61270(Local_40.f_18))
			{
				if (func_10(Local_40.f_18))
				{
					if (unk_0xE93EDE86BBB66532(Local_40.f_18) == unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x0101C509A6E67F99(Local_40.f_18))
		{
			if (func_10(Local_40.f_18))
			{
				if (unk_0xBD545F8729E9F413(Local_40.f_18) == unk_0x4A8C381C258A124D())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_193(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_194(uParam0, uParam1);
	}
}

void func_194(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0x120E577522852984(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0x09132751EA3609EE(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x33B15CA8B699DF5B(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0xA86260972774CF88(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x26C582EF5CD8A3A2(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_195(var uParam0)
{
	var uVar0;
	
	if (func_37(iLocal_41))
	{
		unk_0xB5396F1FB088FE38(&uVar0);
		unk_0xCF6CC9EA0D2EFE23(0, iLocal_41, Local_44[iLocal_46 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0x2D864CC37DDFA963(0, iLocal_41, Local_44[iLocal_46 /*25*/].f_3, Local_44[iLocal_46 /*25*/].f_8, Local_44[iLocal_46 /*25*/].f_10, 5f, 1);
		unk_0x93C0674FC00824D0(uVar0);
		unk_0x4BD42B0527065BB6(*uParam0, uVar0);
		unk_0xD0557B139A542F12(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_196()
{
	func_165(&(Local_43[1 /*11*/]));
}

void func_197(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_192(unk_0x0D1381B6E0F3987D(iLocal_41, func_138(bParam1)), iLocal_41, 1,9f, 1,9f, 8f))
	{
		if (unk_0x5105BE70DEF1F5FB(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, 5f, 0f, -2f), unk_0xD1A6A821F5AC81DB(iLocal_41, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_41, 5f, 0f, -2f), unk_0xD1A6A821F5AC81DB(iLocal_41, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_198(uParam0);
		}
		else if (!func_185(*uParam0, joaat("script_task_go_to_entity")) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_41, 5f, 0f, -2f), unk_0xD1A6A821F5AC81DB(iLocal_41, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0x974022927CB47E68(*uParam0);
			unk_0xAB3658A740EED98E(*uParam0, unk_0x4A8C381C258A124D(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_108(*uParam0, unk_0x0D1381B6E0F3987D(iLocal_41, func_138(bParam1)), 5f, 1))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0xEBA229B2E0BB05E0(*uParam0, iLocal_41, -1, iVar0, 1f, 8388609, 0, 0);
		uParam0->f_7 = 2;
	}
}

void func_198(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xD414C47AFF81382A(5, uLocal_38, joaat("player"));
	func_170(uParam0);
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x7F420695E3F776FB(*uParam0, 0))
		{
			unk_0x849ABF0CBD8EE0D6(*uParam0, unk_0x4A8C381C258A124D(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, 0);
			unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(*uParam0, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
	}
	else
	{
		unk_0xB5396F1FB088FE38(&uVar1);
		unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
		unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
		unk_0x93C0674FC00824D0(uVar1);
		unk_0x4BD42B0527065BB6(*uParam0, uVar1);
		unk_0xD0557B139A542F12(&uVar1);
	}
	unk_0x4A46A67DB6AC487D(*uParam0, 1048576000);
	unk_0xC935F6A2D1890729(*uParam0);
	func_190();
	uParam0->f_1 = unk_0x1DD05E817C89C737();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_199(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_41) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!func_185(*uParam0, joaat("script_task_drive_by")) && unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
			{
				if (func_158(unk_0x4A8C381C258A124D(), iLocal_41, 10f, 1))
				{
					if (unk_0x685171EED42BC4DF(iLocal_41, unk_0x4A8C381C258A124D()))
					{
						unk_0xD83588CA24829967(*uParam0, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0x1DD05E817C89C737();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_39 - 1))
	{
		if (Local_44[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_44[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_46 && func_10(Local_44[iVar0 /*25*/].f_17)) && func_202(Local_44[iVar0 /*25*/].f_17, unk_0x4A8C381C258A124D(), 1) > 200f)
				{
					unk_0x51C8BEA2005931AB(&(Local_44[iVar0 /*25*/].f_17));
					Local_44[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_44[iVar0 /*25*/].f_23 != 0)
			{
				if (func_108(unk_0x4A8C381C258A124D(), Local_44[iVar0 /*25*/], 100f, 1) || func_108(Local_43[0 /*11*/], Local_44[iVar0 /*25*/], 120f, 1))
				{
					Local_44[iVar0 /*25*/].f_24 = func_201(&(Local_44[iVar0 /*25*/].f_17), Local_44[iVar0 /*25*/].f_23, Local_44[iVar0 /*25*/].f_19, Local_44[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_201(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (func_153(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x4E55EAB577C13329(uParam1, Param2, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x5C96CEA06531AB03(*uParam0, uParam3);
				unk_0x79B52EC5A9AB6229(*uParam0);
				if (bParam4)
				{
					func_152(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_202(int iParam0, int iParam1, int iParam2)
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

void func_203(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_344(Local_43[func_172(iParam1) /*11*/]))
		{
			if (!bLocal_50)
			{
				if (unk_0xFC8BFE4B41177C22(Local_43[func_172(iParam1) /*11*/]))
				{
					if (func_182(*uParam0, Local_43[func_172(iParam1) /*11*/], 140f, 0) || func_158(Local_43[func_172(iParam1) /*11*/], *uParam0, 3f, 1))
					{
						func_177(uParam0, 0);
						bLocal_50 = true;
						return;
					}
					else
					{
						Local_52 = { unk_0xD1A6A821F5AC81DB(Local_43[func_172(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0x1DD05E817C89C737();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_177(uParam0, 0);
				}
			}
		}
		else if (Local_43[func_172(iParam1) /*11*/].f_6 == 22)
		{
			if (func_182(*uParam0, Local_43[func_172(iParam1) /*11*/], 140f, 0) && func_158(Local_43[func_172(iParam1) /*11*/], unk_0x4A8C381C258A124D(), 15f, 1))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_43[func_172(iParam1) /*11*/].f_6 == 5 || Local_43[func_172(iParam1) /*11*/].f_6 == 7)
		{
			if (func_158(Local_43[func_172(iParam1) /*11*/], *uParam0, 10f, 1))
			{
				func_177(uParam0, 0);
			}
		}
		if (func_214(*uParam0))
		{
			func_170(uParam0);
			uParam0->f_1 = unk_0x1DD05E817C89C737();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_162(uParam0))
			{
				if (unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
				{
					unk_0xD83588CA24829967(*uParam0, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x0E054C79B87C8FB2(iLocal_41, 2000f);
					iLocal_53 = unk_0x1DD05E817C89C737();
					uParam0->f_1 = unk_0x1DD05E817C89C737();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_205(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_204(uParam0))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				if (func_37(iLocal_41))
				{
					if (unk_0xCECDBB848D53DEB2(*uParam0, iLocal_41, 0))
					{
						if (unk_0xDF93B3CFAC96698F(iLocal_41) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x13DE13EA38996410(*uParam0, iLocal_41, unk_0x4A8C381C258A124D(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0xAFC7A89C990C4339(Local_43[func_172(iParam1) /*11*/], -1);
								Local_43[func_172(iParam1) /*11*/].f_6 = 10;
								Local_43[func_172(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x1DD05E817C89C737();
								Local_43[func_172(iParam1) /*11*/].f_1 = unk_0x1DD05E817C89C737();
							}
							else
							{
								unk_0xAFC7A89C990C4339(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0x13DE13EA38996410(Local_43[func_172(iParam1) /*11*/], iLocal_41, unk_0x4A8C381C258A124D(), 8, 30f, 786469, 300f, 2f, 1);
								Local_43[func_172(iParam1) /*11*/].f_6 = 5;
								Local_43[func_172(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x1DD05E817C89C737();
								Local_43[func_172(iParam1) /*11*/].f_1 = unk_0x1DD05E817C89C737();
							}
						}
						else
						{
							func_177(uParam0, 0);
							if (unk_0xFC8BFE4B41177C22(Local_43[func_172(iParam1) /*11*/]))
							{
								if (func_182(Local_43[func_172(iParam1) /*11*/], unk_0x4A8C381C258A124D(), 1126825984, 0))
								{
									func_177(&(Local_43[func_172(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0xE4DC7B3DD712372B(*uParam0);
					}
					else
					{
						func_177(uParam0, 0);
						if (unk_0xFC8BFE4B41177C22(Local_43[func_172(iParam1) /*11*/]))
						{
							if (func_178(Local_43[func_172(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_177(&(Local_43[func_172(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0xE4DC7B3DD712372B(*uParam0);
				if (func_178(Local_43[func_172(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_43[func_172(iParam1) /*11*/].f_1 = unk_0x1DD05E817C89C737();
					Local_43[func_172(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_43[func_172(iParam1) /*11*/].f_5 = 1;
					Local_43[func_172(iParam1) /*11*/].f_6 = 21;
					unk_0xE4DC7B3DD712372B(Local_43[func_172(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0xA6534E6C7AE314D6(*uParam0))
		{
			func_170(uParam0);
			unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x1DD05E817C89C737();
		}
		if (unk_0x8BF5256C439DF778(*uParam0))
		{
			if (func_10(Local_44[iLocal_46 /*25*/].f_17))
			{
				if (unk_0xA3736D76B0E93E93(Local_44[iLocal_46 /*25*/].f_17))
				{
					unk_0x837D67618BF89034(Local_44[iLocal_46 /*25*/].f_17, 1, 0);
					unk_0x96CCECDBC57DA984(Local_44[iLocal_46 /*25*/].f_17, 1, unk_0x90D0E0397D3F7690(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_344(Local_43[func_172(iParam1) /*11*/]))
		{
			if (unk_0xA6534E6C7AE314D6(Local_43[func_172(iParam1) /*11*/]))
			{
				func_170(uParam0);
				unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0x1DD05E817C89C737();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_204(var uParam0)
{
	if ((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && unk_0xC2BF1F6F84E31EB2(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0x4A8C381C258A124D()) && func_10(iParam0))
	{
		if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
		if (func_210(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_209(unk_0x4A8C381C258A124D(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_206(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0x4A8C381C258A124D()) && func_10(iParam0))
	{
		if (func_208(iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
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
				if (func_207(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_207(int iParam0, float fParam1)
{
	return func_178(iParam0, unk_0x4A8C381C258A124D(), fParam1, 1, 250, 7);
}

int func_208(int iParam0)
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x90D0E0397D3F7690(iParam0) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / system::vdist(Var1, 0f, 0f, 0f)) > system::cos(fParam2);
}

int func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(unk_0x4A8C381C258A124D()) && func_10(iParam0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_213(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_211(iParam0, fVar1, bParam3, bParam4))
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
					if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fVar0, 1))
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
				if (func_213(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_211(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
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
				if (func_212(iParam0, fParam1))
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
			if (func_212(iParam0, fParam1))
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

int func_212(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF67924A428A734EC(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_160(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
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

int func_214(int iParam0)
{
	if (func_158(uParam0, unk_0x4A8C381C258A124D(), 6f, 1))
	{
		if (!unk_0x7F420695E3F776FB(uParam0, 0))
		{
			if (unk_0x685171EED42BC4DF(iParam0, unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_215()
{
	if (func_37(Local_197.f_0))
	{
		if (func_158(unk_0x4A8C381C258A124D(), Local_197.f_0, 100f, 1) && !iLocal_192)
		{
			unk_0x7991957B46F22F47(joaat("trash"), 3);
			if (!unk_0x16CFE70936BA84C7(joaat("trash")))
			{
				iLocal_192 = 1;
			}
		}
		else if (!func_158(unk_0x4A8C381C258A124D(), Local_197.f_0, 120f, 1) && iLocal_192)
		{
			unk_0xCE41CD0179F8640B(joaat("trash"));
			iLocal_192 = 0;
		}
	}
}

void func_216(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam6, bool bParam7, int iParam8)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_107(func_115(func_78()), 0, 0))
					{
						unk_0x4E8E15513E171E54(func_115(func_78()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_221(*iParam0) || func_220(*iParam0))
				{
					func_7(iParam3);
					if (func_107(func_115(func_78()), 0, 0))
					{
						unk_0x4E8E15513E171E54(func_115(func_78()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_107(func_116(func_78(), bParam7), 0, 0))
					{
						unk_0x4E8E15513E171E54(func_116(func_78(), bParam7));
					}
					if (func_78() != 33)
					{
						func_218(iParam0);
					}
					else
					{
						func_217(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *iParam0, 0) && !func_221(*iParam0)) && !func_220(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x65FFA94B82A71741(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_126(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_221(*iParam0) && !func_220(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x65FFA94B82A71741(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_126(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_78() != 33)
	{
		func_218(iParam0);
	}
	else
	{
		func_217(iParam0, uParam1);
	}
}

void func_217(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_26)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_36(*uParam0, 1);
						func_36(*uParam1, 3);
						if (!unk_0x110821AE6C63DD4F(*uParam0))
						{
							unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0xE93EDE86BBB66532(uVar2);
							if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_36(*uParam0, 1);
								func_36(*uParam1, 3);
								if (!unk_0x110821AE6C63DD4F(*uParam0))
								{
									unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_218(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_37(iVar0))
			{
				if (unk_0x4B423FAA24E8ABF0(iVar0) == func_219(func_78()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_36(*uParam0, 1);
					unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_219(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_344(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x93EBA5A2C85D82E7(iVar0))
				{
					if (unk_0x4160C3716329E630(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_344(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x4A64AADF9B40D2AF(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_222()
{
	func_216(&iLocal_198, &uLocal_199, &iLocal_69, &iLocal_181, &iLocal_180, Local_184, Local_197.f_0, 0, 1090519040);
	func_156();
	func_239();
	func_215();
	switch (iLocal_67)
	{
		case 0:
			if (func_123(iLocal_66, bLocal_26))
			{
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && !func_238())
				{
					func_118(&iLocal_180, Local_184, 1);
					func_122("PRA_TAKBACK", &iLocal_179);
				}
				iLocal_67 = 1;
			}
			break;
		
		case 1:
			func_121(&iLocal_180, Local_184, &iLocal_68, iLocal_69, &iLocal_179, &iLocal_193);
			func_228();
			if (func_226(iLocal_198, Local_184, &iLocal_180, iLocal_68, iLocal_69, &iLocal_179, &iLocal_194, 0, 0, 1086324736))
			{
				unk_0xA62957B100C8DE6D(8f, 5f, 4);
				iLocal_67 = 2;
			}
			break;
		
		case 2:
			func_223();
			func_7(&iLocal_180);
			func_7(&iLocal_181);
			if (func_117(1077936128, 1))
			{
				func_111(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_198))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_198, 0))
				{
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_198, -1);
				}
				else
				{
					func_110(iLocal_198, Local_184, 146,5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_67 = 1;
				}
			}
			break;
	}
}

void func_223()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_80(iVar0);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (func_225(iVar1))
			{
				func_224(iVar1);
			}
		}
		iVar0++;
	}
}

int func_224(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_97367, bVar0))
		{
			return 0;
		}
		unk_0x8744D2E3FC95740E(&Global_97367, bVar0);
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_118(iParam2, Param1, 1);
			if (!bParam8)
			{
				if (func_37(iParam0))
				{
					if (unk_0x65FFA94B82A71741(iParam0, Param1, fParam9, fParam9, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, fParam9, fParam9, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_107(func_115(func_78()), 0, 0))
			{
				unk_0x4E8E15513E171E54(func_115(func_78()));
			}
			if (!func_227())
			{
				func_122(func_116(func_78(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_107(func_116(func_78(), 0), 0, 0))
			{
				unk_0x4E8E15513E171E54(func_116(func_78(), 0));
			}
			func_106(func_115(func_78()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_227()
{
	return Global_101585.f_393 > 0;
}

void func_228()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_80(iVar0);
		if (!unk_0x4FAFF4BCB7633475(iVar2))
		{
			if (func_79(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_158(unk_0x4A8C381C258A124D(), iVar2, 5f, 1))
					{
						if (!func_238())
						{
							func_233(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_372[iVar0])
				{
					if (iVar0 == 0)
					{
						func_99(&uLocal_203, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_99(&uLocal_203, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_99(&uLocal_203, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_372[iVar0] = 1;
				}
			}
			if (!func_225(iVar2))
			{
				if (func_79(iVar2, 0))
				{
					if (func_232(iVar2) || func_230(iVar2))
					{
						if (func_229(iVar2, 0))
						{
							unk_0xEE0BCDB1B5E36BCB(iVar2, 1, 1);
							unk_0xAAA71DD7E9059338(iVar2, true);
							unk_0x974022927CB47E68(iVar2);
						}
					}
				}
			}
			else if (unk_0x7C9905528EE2C3AB(iVar2, 1))
			{
				if (func_232(iVar2))
				{
					if (unk_0x9B5C1660CCDF7189(iVar2, joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(iVar2, joaat("script_task_vehicle_mission")) != 0)
					{
						if (unk_0xFFEB5F24B372DFF6(623,3781f, -172,26f, 1700,732f, -2115,843f))
						{
							unk_0xCF6CC9EA0D2EFE23(iVar2, unk_0x6EF03BE64E058E2F(iVar2, 0), Local_184, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x693ACD1AA0BDB375(623,3781f, -172,26f, 1700,732f, -2115,843f);
						}
					}
				}
				else if (func_230(iVar2))
				{
					if (func_37(Local_197.f_0))
					{
						if (!func_158(iVar2, Local_197.f_0, 17f, 1))
						{
							if (unk_0x9B5C1660CCDF7189(iVar2, joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(iVar2, joaat("script_task_vehicle_mission")) != 0)
							{
								unk_0xB3DA477F44309390(iVar2, unk_0x6EF03BE64E058E2F(iVar2, 0), Local_197.f_0, 3, 20f, 786468, 2f, 0,5f, 1);
							}
						}
					}
				}
				else
				{
					func_224(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_229(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_97366, bVar0))
		{
			unk_0xA83DA0A0DF32920C(iParam0, 0, 0);
			unk_0x788F35D395511DFE(iParam0, 0, 1);
			unk_0x0B0C9A0F9AAEB7F0(&Global_97367, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	if (!func_231())
	{
		if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (func_37(iVar0))
			{
				if (unk_0x2E6A27037F1DC473(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0xCECDBB848D53DEB2(iParam0, iVar0, 0) && unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_232(int iParam0)
{
	if (!func_231())
	{
		if ((unk_0xFC8BFE4B41177C22(Local_197.f_0) && unk_0xD9F5E1FEFD1329E4(Local_197.f_0, 0)) && !unk_0x65FFA94B82A71741(Local_197.f_0, Local_184, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_197.f_0, 0)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				if (unk_0xCECDBB848D53DEB2(iParam0, Local_197.f_0, 0) && unk_0xFD5C5BBD1FE92BB7(Local_197.f_0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_233(int iParam0)
{
	if (iLocal_66 > 1)
	{
		if (iLocal_68 > 0)
		{
			if (!BitTest(Local_71[iParam0 /*8*/].f_7, 0) && iLocal_69 == 1)
			{
				if (!unk_0xFBA523E6F8ACE541())
				{
					if (func_237(&uLocal_203, cLocal_202, Local_71[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_71[iParam0 /*8*/].f_7), false);
					}
				}
			}
		}
		else
		{
			if ((BitTest(Local_71[iParam0 /*8*/].f_7, 0) && !BitTest(Local_71[iParam0 /*8*/].f_7, 1)) && iLocal_69 == 1)
			{
				if (!unk_0xFBA523E6F8ACE541())
				{
					if (func_237(&uLocal_203, cLocal_202, Local_71[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_71[iParam0 /*8*/].f_7), true);
					}
				}
			}
			if (!BitTest(Local_71[iParam0 /*8*/].f_7, 5))
			{
				if (func_236(iLocal_198, Local_184, 1) < 15f && iLocal_69 == 1)
				{
					if (!unk_0xFBA523E6F8ACE541())
					{
						if (func_237(&uLocal_203, cLocal_202, Local_71[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_71[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0x4A8C381C258A124D()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_235(2))
						{
							func_234(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_235(4))
						{
							func_234(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_235(2))
						{
							func_234(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_235(3))
						{
							func_234(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_235(3))
						{
							func_234(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_235(4))
						{
							func_234(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_234(int iParam0, bool bParam1)
{
	if (!BitTest(Local_71[iParam0 /*8*/].f_7, bParam1))
	{
		if (iLocal_373 != -1)
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (func_237(&uLocal_203, cLocal_202, Local_71[iParam0 /*8*/][bParam1], 7, 0, 0, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_71[iParam0 /*8*/].f_7), bParam1);
				}
			}
		}
		else if (!func_238() && !unk_0xFBA523E6F8ACE541())
		{
			iLocal_373 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iLocal_373 = -1;
		}
	}
}

int func_235(int iParam0)
{
	if ((BitTest(Local_71[0 /*8*/].f_7, iParam0) || BitTest(Local_71[1 /*8*/].f_7, iParam0)) || BitTest(Local_71[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_236(int iParam0, struct<3> Param1, int iParam2)
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

bool func_237(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_96(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_84(sParam2, iParam3, 0);
}

int func_238()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_239()
{
	if (func_108(unk_0x4A8C381C258A124D(), Local_184, 220f, 1))
	{
		if (!iLocal_201 && !func_108(unk_0x4A8C381C258A124D(), Local_184, 100f, 1))
		{
			iLocal_201 = func_154(&uLocal_200, joaat("cavalcade2"), 1370,912f, -2060,055f, 50,9983f, 312,8686f, 1);
		}
	}
	else if (func_108(unk_0x4A8C381C258A124D(), Local_184, 240f, 1))
	{
		if (iLocal_201)
		{
			func_6(&uLocal_200);
			iLocal_201 = 0;
		}
	}
}

void func_240()
{
	func_216(&iLocal_198, &uLocal_199, &iLocal_69, &iLocal_181, &iLocal_180, Local_184, Local_197.f_0, 0, 1090519040);
	func_215();
	func_156();
	switch (iLocal_67)
	{
		case 0:
			if (func_123(iLocal_66, bLocal_26))
			{
				func_126(&iLocal_180, Local_197.f_0, 1);
				func_122("PRA_GOVAN", &iLocal_179);
				iLocal_67 = 1;
			}
			break;
		
		case 1:
			func_228();
			if (func_37(Local_197.f_0))
			{
				func_243(&uLocal_54, Local_197.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_188)
			{
				if (func_344(Local_195.f_0) && unk_0xA6534E6C7AE314D6(Local_195.f_0))
				{
					func_242();
				}
				if (func_344(Local_196.f_0) && unk_0xA6534E6C7AE314D6(Local_196.f_0))
				{
					func_242();
				}
			}
			if (func_37(iLocal_198))
			{
				if ((iLocal_69 == 1 || iLocal_69 == 2) || iLocal_69 == 3)
				{
					unk_0xA62957B100C8DE6D(5f, 5f, 4);
					iLocal_67 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_180);
			func_146(&uLocal_54, 0, 0);
			func_111(0);
			break;
		
		case 3:
			func_8(&Local_195);
			func_8(&Local_196);
			if (func_37(Local_197.f_0))
			{
				unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_197.f_0, -1);
			}
			func_241(1);
			func_40(1, 1, 1);
			iLocal_67 = 1;
			break;
	}
}

void func_241(bool bParam0)
{
	unk_0xCC1C92F7E1A3CE9D(1, bParam0);
	unk_0xCC1C92F7E1A3CE9D(2, bParam0);
	unk_0xCC1C92F7E1A3CE9D(3, bParam0);
	unk_0xCC1C92F7E1A3CE9D(4, bParam0);
	unk_0xCC1C92F7E1A3CE9D(5, bParam0);
	if (bParam0)
	{
		unk_0x425BBE19F25A57AB(1f);
		unk_0xDAE61414743C8D1D(5);
	}
	else
	{
		unk_0xDAE61414743C8D1D(0);
		unk_0x425BBE19F25A57AB(0f);
	}
}

void func_242()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_188 = func_237(&uLocal_203, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_188)
	{
		unk_0xA62957B100C8DE6D(8f, 8f, 4);
	}
}

void func_243(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_244(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_244(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_245(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_146(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_246(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_246(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_147(iVar0))
	{
		func_270();
	}
	if (func_269(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_264(uParam0, bParam5, bParam7, 0))
			{
				func_261(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_251(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_147(iVar0))
							{
								func_250(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_249(1);
								}
							}
						}
					}
				}
			}
			else if (func_251(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_147(iVar0))
						{
							func_250(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_249(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam3))
			{
				if (func_147(sParam3))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			if (!func_264(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_248(uParam0))
				{
					func_247(uParam0);
				}
			}
		}
	}
	else
	{
		func_146(uParam0, iVar0, 0);
	}
}

void func_247(var uParam0)
{
	if (func_269(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_248(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_249(bool bParam0)
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_250(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_251(char* sParam0)
{
	if (!func_252(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_147(sParam0)) || func_147("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_249(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_249(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_249(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_252(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_70(0))
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_259() || func_258(Global_4718592.f_185586)) || func_257())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_256(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_255(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_253(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_254(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_254(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_254(int iParam0, bool bParam1, bool bParam2)
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

int func_255(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_257()
{
	return Global_2684504.f_19;
}

bool func_258(int iParam0)
{
	return iParam0 == 51;
}

var func_259()
{
	return Global_2684504.f_18;
}

bool func_260()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

void func_261(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		func_146(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_262())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_262()
{
	return func_263(unk_0x259BE71D8A81D4FA());
}

int func_263(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_268(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_248(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_268(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_267(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_268(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_266(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_248(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_252(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_270();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_252(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_252(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_252(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_268(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_252(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_269(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_270()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_271()
{
	switch (iLocal_67)
	{
		case 0:
			if (func_123(iLocal_66, 0))
			{
				func_285();
				func_283(33);
				unk_0xDAE61414743C8D1D(2);
				unk_0x425BBE19F25A57AB(0,1f);
				if (func_361())
				{
					func_280(0, -1, 1);
					func_41(500, 1);
					iLocal_67 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_125(unk_0x4A8C381C258A124D(), 1228,635f, -348,4277f, 68,0929f, 86,7244f);
						func_273(1228,635f, -348,4277f, 68,0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_272();
					if (iLocal_66 == 2)
					{
						iLocal_67 = 0;
					}
					else
					{
						iLocal_67 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_111(0);
			break;
	}
}

void func_272()
{
}

void func_273(struct<3> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xE9D3D741E2195673(Param0, iParam1, iParam2, 127);
	if (unk_0x5561E31B168FA823(uVar0))
	{
		iVar1 = (unk_0x1DD05E817C89C737() + iParam3);
		while (!unk_0xE945B67B28139DA2(uVar0) && unk_0x1DD05E817C89C737() < iVar1)
		{
			if (bParam5)
			{
				func_275(0);
			}
			if (bParam4)
			{
				func_274();
			}
			system::wait(0);
		}
		if (unk_0x1DD05E817C89C737() < iVar1)
		{
		}
		unk_0x6C730FCE8A68AF6F(uVar0);
	}
}

void func_274()
{
	Global_23692.f_6 = 1;
}

void func_275(int iParam0)
{
	if (func_279())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_70(0))
		{
			func_276(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_276(int iParam0)
{
	if (func_279())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_278())
		{
			func_277(1, 1);
		}
		else
		{
			func_277(0, 0);
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
	if (!func_52())
	{
		Global_20930.f_1 = 3;
	}
}

void func_277(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_70(0))
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

bool func_278()
{
	return BitTest(Global_1956920, 5);
}

bool func_279()
{
	return BitTest(Global_1956920, 19);
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	if (func_361() && func_282())
	{
		while (Global_101528 != 6)
		{
			system::wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_281(0);
	}
}

void func_281(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 13);
	}
}

var func_282()
{
	return BitTest(Global_101533.f_20, 13);
}

void func_283(int iParam0)
{
	Global_97368 = 0;
	switch (iParam0)
	{
		case 72:
			func_284(2);
			func_284(4);
			break;
		
		case 73:
			func_284(0);
			func_284(1);
			func_284(7);
			break;
		
		case 92:
			func_284(10);
			func_284(9);
			func_284(13);
			func_284(6);
			break;
		
		case 68:
			func_284(11);
			break;
		
		case 78:
			func_284(14);
			break;
		
		case 79:
			func_284(3);
			break;
		
		default:
			break;
	}
}

void func_284(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_97368, iParam0);
}

void func_285()
{
	int iVar0;
	
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			func_286(iVar0, unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xCFC0C995455A6204(iVar0), 24, 0);
		}
	}
}

void func_286(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
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
		func_335(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_330(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			uParam2 = unk_0xCFC0C995455A6204(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
			{
				Global_79167 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
			}
		}
		func_323(iParam3, &Var0, Param1, uParam2, func_329(iParam0));
		func_287(iParam3, iParam0, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_320(&(Global_78179.f_555[0 /*21*/]), iParam0))
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
				Global_113969.f_32753.f_4801 = func_309();
			}
			if (iParam1 != Global_78179.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_308(iParam0);
					if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) && iParam1 != iVar0)
					{
						func_288(iVar0, 145);
					}
				}
				Global_79085 = iParam1;
				Global_79086 = iParam0;
				Global_79087 = iParam2;
			}
		}
	}
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_289(iParam0))
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
	func_330(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_289(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_306(iParam0, 0, 0)) || func_306(iParam0, 1, 0)) || func_306(iParam0, 2, 0)) || func_329(iParam0) != 145) || func_305(iParam0)) || func_304(iParam0)) || func_303(iParam0)) || func_302(iParam0)) || !func_290(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_304(iParam0))
		{
		}
		if (func_304(iParam0))
		{
		}
		if (func_306(iParam0, 0, 0))
		{
		}
		if (func_306(iParam0, 1, 0))
		{
		}
		if (func_306(iParam0, 2, 0))
		{
		}
		if (func_329(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_290(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_291(iParam0, 0, -1))
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

int func_291(int iParam0, bool bParam1, int iParam2)
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
		if (!func_301())
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
					if ((((!func_300() && !func_299()) && !func_298()) && !func_297()) && !func_301())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_296() || unk_0x761778199FE1211C()) || func_295())
					{
					}
					else if (!func_298())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_294(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_292(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_292(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_293())
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

int func_293()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
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

var func_295()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_296()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_297()
{
	return 0;
}

int func_298()
{
	return 1;
}

int func_299()
{
	return 1;
}

int func_300()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_301()
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
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
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

int func_302(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_291(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)
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

int func_304(int iParam0)
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

int func_305(int iParam0)
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

int func_306(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_307(iParam1, iVar0, &sVar1, &iVar2))
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

int func_307(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_308(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78179.f_139[iParam0];
}

var func_309()
{
	var uVar0;
	
	func_319(&uVar0, unk_0x4BA5A16068183C5E());
	func_318(&uVar0, unk_0x18E502A71E28968C());
	func_317(&uVar0, unk_0x5295501D0862870D());
	func_312(&uVar0, unk_0xB12880C92EA6EE15());
	func_311(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_310(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_310(var uParam0, int iParam1)
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

void func_311(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_312(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_316(*uParam0);
	iVar1 = func_314(*uParam0);
	if (iParam1 < 1 || iParam1 > func_313(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_313(int iParam0, int iParam1)
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

var func_314(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_315(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_315(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_316(var uParam0)
{
	return uParam0 & 15;
}

void func_317(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_319(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_320(var uParam0, int iParam1)
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
			uParam0->f_4 = func_321(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_321(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_321(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_321(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_321(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_321(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_321(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_321(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_321(2, 1);
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
			if (func_301())
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
			if (func_301())
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
		if (!func_15(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_15(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_15(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_321(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_322(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_322(int iParam0, var uParam1, int iParam2)
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

void func_323(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_320(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
		{
			func_328(iParam0);
			func_327(uParam1, &(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 11))
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_324(iParam0, 1);
		}
	}
}

void func_324(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_326(iParam0, 0))
		{
			func_325(iParam0, 1, 0);
			func_325(iParam0, 2, 0);
			func_325(iParam0, 3, 0);
			func_325(iParam0, 4, 0);
			func_325(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_325(iParam0, 0, 0);
	}
}

void func_325(int iParam0, bool bParam1, bool bParam2)
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

int func_326(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_327(var uParam0, var uParam1)
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

void func_328(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_320(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_78179.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&(Global_78179.f_139[iParam0]));
			Global_78179.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			func_324(iParam0, 0);
		}
	}
}

int func_329(int iParam0)
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

void func_330(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_334(uParam1);
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
		if (uParam1->f_65 == -1 && !func_333(uParam1->f_66))
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
		func_332(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_331(iVar0 + 1));
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

int func_331(int iParam0)
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

int func_332(int iParam0, var uParam1, var uParam2)
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

int func_333(int iParam0)
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

void func_334(var uParam0)
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

void func_335(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_328(iParam0);
	func_324(iParam0, 0);
}

void func_336()
{
	func_339();
	func_337();
}

void func_337()
{
	if (!iLocal_186)
	{
		if (func_37(iLocal_198))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_198, 0))
			{
				func_67(iLocal_198, -1);
				func_66(iLocal_198, 318);
				iLocal_186 = 1;
			}
		}
	}
	if (!iLocal_187)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
		{
			func_338(320, 0);
			iLocal_187 = 1;
		}
	}
	else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
	{
		func_65(0, 320);
		iLocal_187 = 0;
	}
}

void func_338(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64176 = iParam0;
	if (!Global_64174)
	{
		Global_64174 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] == iParam0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_339()
{
}

void func_340()
{
	if (!bLocal_26 && iLocal_66 != 5)
	{
		if (iLocal_66 > 0)
		{
			func_341();
		}
	}
}

void func_341()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_198))
	{
		if (!func_37(uLocal_199) && !func_37(Local_197.f_0))
		{
			func_343(1);
			return;
		}
		if (func_37(Local_197.f_0) && !func_158(unk_0x4A8C381C258A124D(), Local_197.f_0, fVar0, 1))
		{
			func_343(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_158(unk_0x4A8C381C258A124D(), iLocal_198, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(uLocal_199))
		{
			if (!func_158(unk_0x4A8C381C258A124D(), uLocal_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_197.f_0))
		{
			if (!func_158(unk_0x4A8C381C258A124D(), Local_197.f_0, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_343(2);
			return;
		}
		iVar1 = 0;
		if (func_342(iLocal_198))
		{
			iVar1++;
		}
		if (func_37(uLocal_199))
		{
			if (func_342(uLocal_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_197.f_0))
		{
			if (func_342(Local_197.f_0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_343(3);
			return;
		}
	}
}

int func_342(var uParam0)
{
	if (func_37(uParam0))
	{
		if (((unk_0xA24B9FF9863A909D(uParam0, 0, 7000) || unk_0xA24B9FF9863A909D(uParam0, 3, 30000)) || unk_0xA24B9FF9863A909D(uParam0, 2, 30000)) || unk_0xA24B9FF9863A909D(uParam0, 1, 40000))
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

void func_343(int iParam0)
{
	unk_0x406CBCEA35499884();
	func_62();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_177 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_177 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_177 = "PRA_FSTUCK";
			break;
	}
	iLocal_66 = 5;
	iLocal_67 = 0;
}

int func_344(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_345()
{
	if (!func_103(36))
	{
		func_346(21, 0, 0);
	}
}

void func_346(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_359(iParam0, 0, 0))
		{
			if (iParam2 && Global_101585.f_18[iParam0])
			{
				if (func_358(iParam0) == 3 && !func_357(iParam0))
				{
					func_356(iParam0);
					func_355(iParam0, 0, 0);
					func_348(iParam0, 1, 0);
					func_347(iParam0);
				}
				else
				{
					func_355(iParam0, 1, 0);
					func_347(iParam0);
				}
			}
			else
			{
				func_355(iParam0, 0, 0);
				func_348(iParam0, 1, 0);
				func_347(iParam0);
			}
		}
		else
		{
			func_348(iParam0, 1, 0);
			func_347(iParam0);
		}
	}
	else if (func_359(iParam0, 0, 0))
	{
		func_348(iParam0, 0, 0);
		func_348(iParam0, 1, 0);
		func_347(iParam0);
	}
}

void func_347(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_348(int iParam0, bool bParam1, bool bParam2)
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
		if (func_354() == 0)
		{
			uVar0 = func_352(func_353(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_349(func_353(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_349(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_350(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

var func_350(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_351(uParam1));
}

int func_351(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_352(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_350(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_353(int iParam0)
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

int func_354()
{
	return Global_32948;
}

void func_355(int iParam0, bool bParam1, bool bParam2)
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
		if (func_354() == 0)
		{
			uVar0 = func_352(func_353(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam1);
			func_349(func_353(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_356(int iParam0)
{
	if (Global_101585.f_18[iParam0])
	{
		func_355(iParam0, 10, 1);
		func_355(iParam0, 19, 1);
	}
}

bool func_357(int iParam0)
{
	return func_359(iParam0, 5, 1);
}

int func_358(int iParam0)
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

int func_359(int iParam0, int iParam1, bool bParam2)
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
		if (func_354() == 0)
		{
			return BitTest(func_352(func_353(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_360(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_361())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam1;
		Global_101528 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 24);
		}
		func_281(1);
	}
}

int func_361()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_362()
{
	func_377();
	func_375();
	func_368();
	func_365();
	func_363();
}

void func_363()
{
	iLocal_372[0] = 0;
	iLocal_372[1] = 0;
	iLocal_372[2] = 0;
	Local_71[0 /*8*/] = { func_364("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_71[1 /*8*/] = { func_364("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_71[2 /*8*/] = { func_364("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_364(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_365()
{
	Local_44[0 /*25*/] = { func_367(1203,146f, -337,3543f, 67,9314f, 1245,118f, -348,5059f, 68,2099f, 253,1908f, 0) };
	func_366(&(Local_44[0 /*25*/]), Local_183, 0, 15f, 5f, 270f, 3, 1192,006f, -631,4703f, 61,6972f, 10f, 10f, 5f);
	Local_44[1 /*25*/] = { func_367(1215,084f, -339,3139f, 68,1323f, 964,9214f, -555,212f, 58,0211f, 39,645f, 0) };
	func_366(&(Local_44[1 /*25*/]), Local_183, 0, 15f, 10f, 270f, 3, 1103,29f, -764,532f, 56,633f, 10f, 10f, 5f);
	Local_44[2 /*25*/] = { func_367(1179,533f, -361,3286f, 67,4559f, 929,8701f, -619,4534f, 56,4632f, 164,3631f, 0) };
	func_366(&(Local_44[2 /*25*/]), Local_183, 0, 15f, 10f, 270f, 3, 933,3745f, -615,9453f, 56,3041f, 10f, 10f, 5f);
	Local_44[3 /*25*/] = { func_367(1107,674f, -364,0569f, 65,9581f, 1099,266f, -775,0809f, 57,3525f, 178,2038f, 0) };
	func_366(&(Local_44[3 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_44[4 /*25*/] = { func_367(1069,279f, -393,5795f, 66,0262f, 1065,364f, -389,9561f, 66,1504f, 220,1611f, 0) };
	func_366(&(Local_44[4 /*25*/]), Local_183, 0, 5f, 30f, 128,1732f, 3, 1069,718f, -393,9912f, 66,0261f, 10f, 10f, 5f);
	Local_44[5 /*25*/] = { func_367(1031,673f, -424,599f, 64,5439f, 1027,179f, -420,6656f, 64,6268f, 178,2038f, joaat("p_binbag_01_s")) };
	func_366(&(Local_44[5 /*25*/]), 1028,201f, -428,3677f, 64,3571f, 1, 15f, 2f, 128,3915f, 1, 1027,179f, -420,6656f, 64,6268f, 10f, 10f, 5f);
	Local_44[6 /*25*/] = { func_367(942,1528f, -488,8956f, 59,3129f, 932,0198f, -489,3886f, 58,9212f, 202,5785f, joaat("p_binbag_01_s")) };
	func_366(&(Local_44[6 /*25*/]), 930,7186f, -494,9253f, 58,616f, 1, 15f, 2f, 119,6518f, 1, 952,9781f, -482,5082f, 60,0003f, 10f, 10f, 5f);
	Local_44[7 /*25*/] = { func_367(868,2734f, -529,5473f, 56,2071f, 865,0042f, -522,4746f, 56,3363f, 241,9711f, joaat("p_binbag_01_s")) };
	func_366(&(Local_44[7 /*25*/]), 865,2349f, -535,8759f, 56,1574f, 1, 15f, 2f, 162,7219f, 1, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_44[8 /*25*/] = { func_367(874,8076f, -571,2073f, 56,2987f, 983,125f, -541,9902f, 58,5929f, 49,7653f, 0) };
	func_366(&(Local_44[8 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_44[9 /*25*/] = { func_367(931,5218f, -614,2144f, 56,3119f, 928,6471f, -620,711f, 56,4611f, -108,06f, joaat("p_binbag_01_s")) };
	func_366(&(Local_44[9 /*25*/]), 940,4086f, -622,1787f, 56,3003f, 1, 15f, 2f, 228,1176f, 1, 918,6716f, -602,9258f, 56,3395f, 10f, 10f, 5f);
	Local_44[10 /*25*/] = { func_367(964,9758f, -645,9614f, 56,4465f, 927,1033f, -575,4162f, 56,5329f, 55,9317f, 0) };
	func_366(&(Local_44[10 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_44[11 /*25*/] = { func_367(983,4438f, -683,1442f, 56,4087f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_366(&(Local_44[11 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_44[12 /*25*/] = { func_367(1016,261f, -731,546f, 56,555f, 1011,801f, -733,0652f, 56,7435f, 314,5626f, joaat("p_binbag_01_s")) };
	func_366(&(Local_44[12 /*25*/]), 1020,251f, -736,815f, 56,6235f, 1, 15f, 2f, 220,7804f, 1, 1011,238f, -724,7085f, 56,5183f, 10f, 10f, 5f);
	Local_44[13 /*25*/] = { func_367(1164,126f, -762,2866f, 56,6656f, 1099,342f, -775,4273f, 57,3525f, 177,5729f, 0) };
	func_366(&(Local_44[13 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_44[14 /*25*/] = { func_367(1199,339f, -678,0995f, 59,9051f, 1205,415f, -672,1282f, 60,1445f, 105,2374f, 0) };
	func_366(&(Local_44[14 /*25*/]), Local_183, 0, 15f, 2f, 12,1103f, 3, 1199,339f, -678,0995f, 59,9051f, 10f, 10f, 5f);
	Local_44[15 /*25*/] = { func_367(1183,445f, -582,9476f, 63,0962f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_366(&(Local_44[15 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_44[16 /*25*/] = { func_367(1192,479f, -485,1086f, 64,7195f, 1264,359f, -719,084f, 63,328f, 65,0519f, 0) };
	func_366(&(Local_44[16 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_44[17 /*25*/] = { func_367(1212,693f, -400,0532f, 67,0971f, 1284,109f, -676,728f, 65,0225f, 69,9898f, 0) };
	func_366(&(Local_44[17 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_44[18 /*25*/] = { func_367(1114,573f, -232,3706f, 68,0949f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_366(&(Local_44[18 /*25*/]), Local_183, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	iLocal_185 = 19;
}

void func_366(var uParam0, struct<3> Param1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, struct<3> Param7, struct<3> Param8)
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = { Param7 };
	uParam0->f_14 = { Param8 };
}

struct<25> func_367(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param1 };
	Var0.f_22 = fParam2;
	Var0.f_23 = iParam3;
	return Var0;
}

void func_368()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251,308f, -400,6231f, 68,0926f };
	Var0[1 /*3*/] = { 1183,993f, -403,3443f, 66,8734f };
	Var0[2 /*3*/] = { 1161,54f, -372,6073f, 66,6034f };
	Var0[3 /*3*/] = { 1167,644f, -273,7987f, 67,9705f };
	Var0[4 /*3*/] = { 1252,362f, -247,353f, 77,5631f };
	Var0[5 /*3*/] = { 1330,062f, -341,0342f, 100,3476f };
	func_369(&Var0, 6);
}

void func_369(var uParam0, int iParam1)
{
	int iVar0;
	
	func_374(&uLocal_72);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_373(&uLocal_72, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_372(&uLocal_72);
	func_370(&uLocal_124, &uLocal_72, 50f);
}

void func_370(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(system::sqrt(((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)))) };
		Var4 = { Var4 / FtoV(system::sqrt(((Var4.f_0 * Var4.f_0) + (Var4.f_1 * Var4.f_1)))) };
		Var5 = { Var3 - Var4 };
		Var5 = { Var5 / FtoV(system::sqrt(((Var5.f_0 * Var5.f_0) + (Var5.f_1 * Var5.f_1)))) };
		if (func_371(uParam1, *(uParam1[iVar1 /*3*/]) + Var5))
		{
			Var5 = { -Var5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_371(var uParam0, struct<2> Param1, Vector3 vParam2)
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

void func_372(var uParam0)
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

void func_373(var uParam0, struct<3> Param1)
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

void func_374(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_375()
{
	Local_195 = { func_376(1200,61f, -344,2721f, 68,0424f, 269,2015f, joaat("s_m_y_garbage")) };
	Local_196 = { func_376(1202,42f, -341,6034f, 67,9378f, 273,1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_376(struct<3> Param0, float fParam1, int iParam2)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_377()
{
	Local_197 = { func_378(1203,146f, -337,3543f, 67,9314f, 189,7047f, joaat("trash")) };
}

struct<6> func_378(struct<3> Param0, float fParam1, int iParam2)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_379()
{
	func_241(1);
	func_390(1);
	unk_0xCCA6D8A84EE8C88A(joaat("trash"), 0);
	unk_0xCCA6D8A84EE8C88A(joaat("towtruck"), 0);
	unk_0xCCA6D8A84EE8C88A(joaat("s_m_y_garbage"), 0);
	func_64();
	func_389();
	func_388();
	func_380(0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_380(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x470041F66BF345BA("DRIVE", 1);
	unk_0x470041F66BF345BA("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_38();
	func_387();
	func_386();
	func_385();
	func_384();
	func_223();
	if (bParam0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_198))
		{
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_198, 0))
					{
						Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_382();
		unk_0x406CBCEA35499884();
		func_2();
	}
	else
	{
		func_381();
	}
	unk_0x0F20DD0DCEB2959F(0);
	func_146(&uLocal_54, 0, 0);
	if (unk_0x78411E34CF90EA8C(uLocal_182))
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x85E6A1E36B5E2E4D(uLocal_182, 0);
	}
}

void func_381()
{
	func_3();
	func_6(&Local_197);
	func_6(&uLocal_199);
	func_6(&iLocal_198);
	func_5(&Local_195, 1, 0, 1);
	func_5(&Local_196, 1, 0, 1);
	func_6(&uLocal_200);
}

void func_382()
{
	Global_21152 = 0;
	func_383();
}

void func_383()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(false);
		Global_22286 = 6;
	}
}

void func_384()
{
}

void func_385()
{
	if (iLocal_192)
	{
		unk_0xCE41CD0179F8640B(joaat("trash"));
	}
}

void func_386()
{
}

void func_387()
{
	unk_0x55098D9E9AD58806(Local_197.f_5);
}

void func_388()
{
	func_346(21, 1, 0);
}

void func_389()
{
	Global_97368 = 0;
}

void func_390(int iParam0)
{
	Global_98819 = iParam0;
}

void func_391()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_33(0))
	{
		if (!func_392())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_392()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

