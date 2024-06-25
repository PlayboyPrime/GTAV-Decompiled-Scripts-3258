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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	var uLocal_100 = -1;
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
	struct<14> Local_116[6];
	struct<14> Local_117[8];
	struct<14> Local_118[4];
	struct<14> Local_119[5];
	struct<14> Local_120[6];
	struct<14> Local_121[6];
	struct<14> Local_122[4];
	struct<14> Local_123[10];
	struct<14> Local_124[4];
	struct<14> Local_125[6];
	struct<14> Local_126[3];
	struct<9> Local_127[8];
	struct<9> Local_128[6];
	struct<9> Local_129[8];
	struct<9> Local_130[2];
	struct<9> Local_131[4];
	struct<9> Local_132[2];
	struct<9> Local_133[6];
	struct<9> Local_134[6];
	struct<9> Local_135[4];
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	int iLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	struct<73> Local_166 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<16> Local_176 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	struct<7> Local_181 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_182 = 16;
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
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 17;
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
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 17;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	float fLocal_399 = 0f;
	float fLocal_400 = 0f;
	float fLocal_401 = 0f;
	float fLocal_402 = 0f;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	float fLocal_413 = 0f;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
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
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	bLocal_148 = true;
	iLocal_397 = -1;
	fLocal_399 = 3f;
	fLocal_400 = 0f;
	fLocal_401 = 2f;
	fLocal_402 = 100f;
	fLocal_413 = 0,5f;
	StringCopy(&Local_176, unk_0x1AF90EB93E0012D6(), 64);
	Local_176 = { Local_176 };
	if (!func_1023(&Global_1971648))
	{
		func_1011(&Global_1971648);
	}
	while (true)
	{
		system::wait(0);
		func_1010();
		func_1004(&Global_1971648);
		switch (func_1003())
		{
			case 0:
				if (func_495(&Global_1971648))
				{
					func_493();
					func_492(1);
				}
				break;
			
			case 1:
				func_300(&Global_1971648);
				func_134(&Global_1971648);
				func_1(&Global_1971648);
				break;
			
			case 2:
				func_1011(&Global_1971648);
				break;
		}
	}
}

void func_1(var uParam0)
{
	func_82(uParam0);
	func_63(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)
{
	func_27(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		if (((uParam0->f_732.f_5 && !iLocal_138) && uParam0->f_812 == 1) && !func_18(uParam0, 0))
		{
			if (func_15(unk_0x259BE71D8A81D4FA()))
			{
				if (!func_14("HIP_TOOMANY2"))
				{
					func_13("HIP_TOOMANY2");
				}
			}
			else if (!func_14("HIP_TOOMANY1"))
			{
				func_13("HIP_TOOMANY1");
			}
		}
		else if (func_14("HIP_TOOMANY1") || func_14("HIP_TOOMANY2"))
		{
			unk_0x428C32CC68809A35(1);
		}
		if ((BitTest(Local_181.f_3[(0 / 32)], (0 % 32)) && !func_12()) && !iLocal_149)
		{
			func_11("HIP_TIPTEXT", -1);
			iLocal_149 = 1;
		}
		if ((func_10(uParam0->f_812, 2) && !BitTest(uParam0->f_1093, 16)) && !unk_0x834C960822A4683F())
		{
			uVar0 = func_9(9511, -1);
			if (!BitTest(uVar0, 15))
			{
				func_11("HIF_FINALEINT", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 15);
				func_4(9511, uVar0, -1);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 16);
		}
	}
}

void func_4(int iParam0, int iParam1, int iParam2)
{
	func_5(iParam0, iParam1, iParam2, 1);
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_6(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_6(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_7(uParam1));
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574926;
}

int func_9(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_6(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_11(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_12()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_13(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_14(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_15(int iParam0)
{
	return func_16(iParam0, 1);
}

int func_16(int iParam0, int iParam1)
{
	if (func_17(iParam0))
	{
		if (func_17(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(var uParam0)
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

int func_18(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_22() + 1 > 5)
		{
			return 0;
		}
	}
	else if (func_19(uParam0->f_1092, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_20(iParam0, func_21(iParam1));
	}
	return 0;
}

int func_20(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_22()
{
	if (func_26() == func_25())
	{
		return 0;
	}
	return func_23(func_26());
}

int func_23(int iParam0)
{
	if (func_24(iParam0) == func_25())
	{
		return 0;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_19;
}

int func_24(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_25();
}

int func_25()
{
	return -1;
}

int func_26()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

void func_27(var uParam0)
{
	func_52();
	switch (iLocal_155)
	{
		case 0:
			break;
		
		case 1:
			unk_0x80813AC549A1E8AE(func_51());
			if (!unk_0xE100DD4F82A51BDE(func_51()))
			{
				return;
			}
			iLocal_156 = func_50();
			iLocal_155 = 2;
			break;
		
		case 2:
			unk_0xB5396F1FB088FE38(&uLocal_158);
			unk_0x63C8DCBEC1CF8225(0, func_49(iLocal_156), 0,5f, 20000, func_48(iLocal_156), 0,05f);
			unk_0x2280392018BC0DD3(0, func_48(iLocal_156), 0);
			unk_0x10425721983AE158(0, func_51(), func_47(), 1,5f, -8f, -1, 262152, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, func_51(), func_46(), 8f, -8f, -1, 262153, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_158);
			unk_0x4BD42B0527065BB6(iLocal_164, uLocal_158);
			iLocal_155 = 3;
			if (!func_45())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 15);
			}
			break;
		
		case 3:
			if (!unk_0x13CCB1AD131C1082(iLocal_164, func_51(), func_46(), 3) && !func_43(&uLocal_160, 6000, 0))
			{
				return;
			}
			if (unk_0x13CCB1AD131C1082(iLocal_164, func_51(), func_46(), 3))
			{
				unk_0x7ACB6964CC7261E4(iLocal_164, func_42(), func_51());
			}
			func_41(&uLocal_160);
			uParam0->f_732.f_5 = 1;
			func_37(uParam0, 14);
			iLocal_155 = 4;
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x10425721983AE158(iLocal_164, func_51(), func_28(), 8f, 1,5f, -1, 262152, 0, 0, 0, 0);
			if (func_45())
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 15);
			}
			uParam0->f_732.f_5 = 0;
			iLocal_155 = 6;
			break;
		
		case 6:
			if ((!iLocal_141 && unk_0x13CCB1AD131C1082(iLocal_164, func_51(), func_28(), 3)) && !func_43(&uLocal_160, 6000, 0))
			{
				return;
			}
			if (iLocal_141)
			{
				unk_0x974022927CB47E68(iLocal_164);
			}
			unk_0x268BE77F77533D03(func_51());
			unk_0xD0557B139A542F12(&uLocal_158);
			func_41(&uLocal_160);
			iLocal_155 = 0;
			iLocal_141 = 0;
			break;
	}
}

char* func_28()
{
	if (func_29(iLocal_164))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(uParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_35(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_31(iVar0, iVar1, 6, 4);
			iVar3 = func_30(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&Var0);
		iVar1 = (iParam1 - func_34(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x2DBB2D25D50A5392(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var3);
		iVar4 = (iParam1 - func_32(iParam0, func_33(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79322.f_26[iParam2] && iParam1 == Global_79322[iParam2]) && Global_79322.f_13[iParam2] != 0)
		{
			return Global_79322.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_33(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xD36906FE7BBBDB62(iVar4, &Var3);
		Global_79322.f_13[iParam2] = Var3.f_1;
		Global_79322[iParam2] = iParam1;
		Global_79322.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_35(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(uParam0))
	{
		return -99;
	}
	uVar0 = func_33(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(uParam0, uVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(uParam0, uVar0);
	return func_36(uParam0, iVar1, iVar2, iParam1);
}

int func_36(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = func_33(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(uParam0, uVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_37(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_40(iParam1);
	sVar1 = func_39(iParam1);
	if (!unk_0xD6F9DEE4765092A9(sVar0) && !unk_0xD6F9DEE4765092A9(sVar1))
	{
		if (!func_38(uParam0->f_738.f_6))
		{
			unk_0xF37CDE164C892195(-1, sVar0, uParam0->f_738.f_6, sVar1, 0, 0, 0);
		}
		else
		{
			unk_0xBF3D28CA44F3BE2D(-1, sVar0, sVar1, 1);
		}
	}
}

int func_38(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_39(int iParam0)
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		
		case 1:
			return "NAV_LEFT_RIGHT";
		
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		
		case 4:
			return "NAV_BLOCKED";
		
		case 5:
			return "SELECT";
		
		case 6:
			return "BACK";
		
		case 7:
			return "ERROR";
		
		case 8:
			return "DRAW_BOARD";
		
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		
		case 10:
			return "DRAW_TITLE_TEXT";
		
		case 11:
			return "PAY";
		
		case 12:
			return "INCREASE_LOOT_SHARE";
		
		case 13:
			return "DECREASE_LOOT_SHARE";
		
		case 14:
			return "USE";
		
		case 15:
			return "LAUNCH_MISSION";
		
		case 16:
			return "REMOTE_READY";
		
		case 17:
			return "REMOTE_UNREADY";
		
		case 18:
			return "BOOTUP";
		
		case 19:
			return "BACKGROUND";
		
		case 20:
			return "FINALE_AVAILABLE";
		
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		
		default:
	}
	return "";
}

void func_41(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_42()
{
	if (func_29(iLocal_164))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

int func_43(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_44(uParam0, bParam2, 0);
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

void func_44(var uParam0, bool bParam1, bool bParam2)
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

bool func_45()
{
	return BitTest(Global_1971648.f_1093, 15);
}

char* func_46()
{
	if (func_29(iLocal_164))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_47()
{
	if (func_29(iLocal_164))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		
		case 1:
			return 0f;
		
		default:
	}
	return 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561,054f, 385,9017f, -50,6854f;
		
		case 1:
			return 1561,096f, 383,769f, -50,6854f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_50()
{
	return 0;
}

char* func_51()
{
	if (func_29(iLocal_164))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_52()
{
	if (iLocal_155 == 0)
	{
		return;
	}
	if (func_62(0))
	{
		func_57(0);
	}
	if (func_56())
	{
		func_55();
	}
	if (unk_0x4D9174D8796EA622())
	{
		unk_0x6C978B200DAA54DE();
	}
	if (func_54())
	{
		func_53();
	}
}

void func_53()
{
	if (func_54())
	{
		Global_2672855.f_990.f_16 = 1;
	}
}

int func_54()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_55()
{
	Global_76501 = 1;
}

bool func_56()
{
	return Global_76498;
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_60())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_20930.f_1 = 3;
	}
}

int func_58()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_62(0))
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

bool func_60()
{
	return BitTest(Global_1956920, 5);
}

bool func_61()
{
	return BitTest(Global_1956920, 19);
}

int func_62(int iParam0)
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

void func_63(var uParam0)
{
	if (BitTest(uParam0->f_1093, 0))
	{
		if (BitTest(uParam0->f_1093, 14))
		{
			func_64(&(Global_2684504.f_783), -1, 0, 1, 1);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 10);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 11);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 8);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 9);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 14);
		}
	}
	else if (BitTest(uParam0->f_1093, 14))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 14);
	}
}

void func_64(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (unk_0x78411E34CF90EA8C(*uParam0))
		{
			unk_0x4CBC5D1BC117616B(*uParam0, 0);
			if (bParam4)
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 1, 0);
			}
			unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
			*uParam0 = 0;
			func_81();
			if (func_76())
			{
				unk_0xE3F88173F42C071B();
			}
			unk_0x0A83667A5D36A4FF(0);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				func_68(1, 0);
				func_68(1, 0);
			}
			if (!func_67())
			{
				if (func_66() || func_65())
				{
					if (!Global_2693440.f_7)
					{
						unk_0x65662724C6BC4810();
					}
				}
				else
				{
					unk_0x65662724C6BC4810();
				}
			}
		}
	}
}

var func_65()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_66()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

bool func_67()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 0);
}

void func_68(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_73(1, 0, 1);
	}
	else
	{
		func_69(iParam1);
	}
}

void func_69(int iParam0)
{
	func_72();
	if (iParam0 == 0)
	{
		if (unk_0xA7D416B098808337())
		{
			return;
		}
	}
	if (func_71() == 0 || unk_0x4D9174D8796EA622())
	{
		func_70(1);
		unk_0xDD98B34A4A3AFA89(0);
		unk_0xDD98B34A4A3AFA89(0);
	}
}

void func_70(int iParam0)
{
	if (Global_1574633.f_20 != iParam0)
	{
		Global_1574633.f_20 = iParam0;
	}
}

int func_71()
{
	return Global_1574633.f_20;
}

void func_72()
{
	Global_2698057 = 1;
}

void func_73(int iParam0, bool bParam1, bool bParam2)
{
	if (func_74())
	{
		return;
	}
	if ((func_71() == 1 || unk_0x4D9174D8796EA622()) || iParam0)
	{
		func_70(0);
		if (Global_2697540)
		{
			Global_2697540 = 0;
		}
		unk_0xDD98B34A4A3AFA89(1);
		if (!bParam1)
		{
			unk_0xDD98B34A4A3AFA89(1);
		}
		if (bParam2)
		{
			unk_0x063FC71162B675A0();
		}
	}
}

int func_74()
{
	if (func_75())
	{
		return Global_2696099;
	}
	return 0;
}

int func_75()
{
	if (Global_2696092)
	{
		return Global_2696091;
	}
	return 0;
}

int func_76()
{
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_829 != func_25())
		{
			if (func_78(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_829, 0, 1))
			{
				if (func_77(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_829, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_77(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, bool bParam2)
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

bool func_79(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_80(-1, 0) == 8;
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

int func_80(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

void func_81()
{
	unk_0x8744D2E3FC95740E(&Global_2684504, 15);
}

void func_82(var uParam0)
{
	func_132(uParam0);
	func_130(uParam0);
	func_129(uParam0);
	if (!func_117(uParam0))
	{
		func_116();
		func_115();
		func_114();
		func_113();
		return;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		if (!func_112())
		{
			func_110(0);
			return;
		}
	}
	else if (!func_109(uParam0))
	{
		if (!func_108(uParam0->f_1092))
		{
			func_110(1);
			return;
		}
	}
	if (func_107(uParam0))
	{
		if (func_106())
		{
			func_105();
		}
		else if (!func_104(uParam0))
		{
			func_101();
		}
		else
		{
			func_86(uParam0);
		}
		return;
	}
	if (func_85())
	{
		func_84(uParam0, 1);
		func_116();
		if (Local_166.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_2);
		}
		else
		{
			func_83(uParam0);
		}
	}
}

void func_83(var uParam0)
{
	uParam0->f_732.f_5 = 1;
}

void func_84(var uParam0, int iParam1)
{
	if (uParam0->f_826 != iParam1)
	{
	}
	uParam0->f_826 = iParam1;
}

bool func_85()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_166.f_1 != 0)
	{
		Call_Loc(Local_166.f_1);
		sVar0 = StackVal;
	}
	if (!func_14(sVar0))
	{
		func_13(sVar0);
	}
	return unk_0x875A214D5EBCA509(0, 51);
}

void func_86(var uParam0)
{
	char* sVar0;
	
	Call_Loc(Local_166.f_49.f_5);
	sVar0 = StackVal;
	if (!func_14(sVar0))
	{
		func_13(sVar0);
	}
	if (unk_0x875A214D5EBCA509(0, 51))
	{
		func_114();
		func_87(uParam0, 0);
		uParam0->f_1098 = 1;
	}
}

void func_87(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1100)
		{
			func_88(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
			uParam0->f_1100 = 0;
		}
	}
	else if (!uParam0->f_1100)
	{
		func_88(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
		uParam0->f_1100 = 1;
	}
}

void func_88(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_100())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_98())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_79(unk_0x259BE71D8A81D4FA(), 0) && !func_97()) && !func_96(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_93(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_92(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_91();
					func_90();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_92(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(uVar27, 1);
						}
					}
					if (func_89(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(uVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(uVar27) && !unk_0x7F420695E3F776FB(uVar27, 0))
					{
						unk_0x19626F992DC71FB9(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_89(int iParam0)
{
	return iParam0 == 17;
}

void func_90()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_91()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_92(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_95();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_79(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_94(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_95()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

int func_96(int iParam0)
{
	if (func_79(iParam0, 0))
	{
		return 1;
	}
	if (func_97())
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

bool func_97()
{
	return BitTest(Global_2621446, 3);
}

int func_98()
{
	if (func_99() == 0)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	return Global_1574633.f_18;
}

int func_100()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	var uVar0;
	var uVar1;
	
	if (Local_166.f_49.f_9 != 0 && Local_166.f_49.f_3 != 0)
	{
		Call_Loc(Local_166.f_49.f_9);
		uVar0 = StackVal;
		Call_Loc(Local_166.f_49.f_3);
		uVar1 = StackVal;
		if (!func_103(uVar0, uVar1))
		{
			func_102(uVar0, uVar1);
		}
	}
}

void func_102(char* sParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_103(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_104(var uParam0)
{
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		Stack.Push(Local_166.f_49.f_3 != 0);
		Call_Loc(Local_166.f_49.f_3);
		if (StackVal && unk_0x0AF5E4A6C74DC312(StackVal, 0, 1, 0, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()
{
	if (Local_166.f_49.f_7 != 0)
	{
		Call_Loc(Local_166.f_49.f_7);
		if (!func_14(StackVal))
		{
			Call_Loc(Local_166.f_49.f_7);
			func_13(StackVal);
		}
	}
}

int func_106()
{
	if (Local_166.f_49.f_6 != 0)
	{
		Call_Loc(Local_166.f_49.f_6);
		return StackVal;
	}
	return 0;
}

int func_107(var uParam0)
{
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		Call_Loc(Local_166.f_49.f_2);
		Call_Loc(Local_166.f_49);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_17(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	return 1;
}

void func_110(int iParam0)
{
	var uVar0;
	
	uVar0 = func_111(iParam0);
	func_11(uVar0, -1);
}

char* func_111(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (Local_166.f_46 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_166.f_46);
		sVar0 = StackVal;
	}
	if (!unk_0xD6F9DEE4765092A9(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS";
		
		case 1:
			return "NHPG_HELP_BGOON";
		
		default:
	}
	return sVar0;
}

bool func_112()
{
	return func_108(unk_0x259BE71D8A81D4FA());
}

void func_113()
{
	if (Local_166.f_49.f_9 != 0 && Local_166.f_49.f_3 != 0)
	{
		Call_Loc(Local_166.f_49.f_9);
		Call_Loc(Local_166.f_49.f_3);
		if (func_103(StackVal, StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_114()
{
	if (Local_166.f_49.f_5 != 0)
	{
		Call_Loc(Local_166.f_49.f_5);
		if (func_14(StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_115()
{
	if (Local_166.f_49.f_7 != 0)
	{
		Call_Loc(Local_166.f_49.f_7);
		if (func_14(StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_116()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_166.f_1 != 0)
	{
		Call_Loc(Local_166.f_1);
		sVar0 = StackVal;
	}
	if (func_14(sVar0))
	{
		unk_0x428C32CC68809A35(1);
	}
}

int func_117(var uParam0)
{
	if (uParam0->f_826.f_3)
	{
		return 0;
	}
	if (uParam0->f_1098 > 0)
	{
		return 0;
	}
	if (uParam0->f_1092 != -1 && Global_1972760[uParam0->f_1092 /*27*/].f_23)
	{
		return 0;
	}
	if (!func_78(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		return 0;
	}
	if (func_109(uParam0) && uParam0->f_1092 != unk_0x259BE71D8A81D4FA())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 7))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 8) || BitTest(uParam0->f_1093, 9))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (!func_128(unk_0x259BE71D8A81D4FA(), 2))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (func_126(unk_0x259BE71D8A81D4FA(), 0) && func_125(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (uParam0->f_732 != 3)
	{
		return 0;
	}
	if (func_124())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (func_121() == 2 || func_121() == 16)
	{
		return 0;
	}
	if (func_62(0))
	{
		return 0;
	}
	if (Local_166.f_0 != 0)
	{
		Call_Loc(Local_166.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (!func_119())
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	return 1;
}

int func_118()
{
	if (func_14("H4PREP_UNVLB"))
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (unk_0x65FFA94B82A71741(iLocal_164, 1561,149f, 386,0429f, -49,68533f, 1f, 0,65f, 1f, 0, 1, 0) && func_120(unk_0xCFC0C995455A6204(iLocal_164), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_120(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	return Global_1057440;
}

bool func_122()
{
	return Global_2684504.f_694;
}

bool func_123()
{
	return Global_2684504.f_693;
}

bool func_124()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

bool func_125(int iParam0)
{
	return func_128(iParam0, 20);
}

int func_126(int iParam0, int iParam1)
{
	if (func_17(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	bool bVar0;
	
	bVar0 = ((unk_0x6D05C5731A838CB3(2, 199) || unk_0x875A214D5EBCA509(2, 199)) || unk_0x2645430E708CBFAC(2, 199));
	if (bVar0)
	{
		iLocal_178 = 1;
		return 1;
	}
	else if (iLocal_178)
	{
		if (func_43(&uLocal_179, 1000, 0))
		{
			func_41(&uLocal_179);
			iLocal_178 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_128(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_129(var uParam0)
{
	if (uParam0->f_732.f_5)
	{
		if (Global_1972760[unk_0x383461852896D73D() /*27*/].f_25 != uParam0->f_1090)
		{
			Global_1972760[unk_0x383461852896D73D() /*27*/].f_25 = uParam0->f_1090;
		}
	}
	else if (Global_1972760[unk_0x383461852896D73D() /*27*/].f_25 != -1)
	{
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_25 = -1;
	}
}

void func_130(var uParam0)
{
	if (uParam0->f_826.f_4 && func_119())
	{
		func_131(0);
	}
}

void func_131(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_62(0))
		{
			func_57(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_132(var uParam0)
{
	bool bVar0;
	
	switch (uParam0->f_1098)
	{
		case 0:
			break;
		
		case 1:
			if (func_133(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1098 = 2;
				}
				else
				{
					uParam0->f_1098 = 0;
				}
				func_87(uParam0, 1);
			}
			break;
		
		case 2:
			Call_Loc(Local_166.f_49.f_8);
			if (StackVal)
			{
				uParam0->f_1098 = 3;
			}
			break;
		
		case 3:
			Call_Loc(Local_166.f_49);
			if (!StackVal)
			{
				Call_Loc(Local_166.f_49.f_1);
				uParam0->f_1098 = 4;
			}
			else
			{
				uParam0->f_1098 = 4;
			}
			break;
		
		case 4:
			if (Local_166.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_2);
			}
			else
			{
				func_83(uParam0);
			}
			uParam0->f_1098 = 0;
			break;
	}
}

int func_133(var uParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	char cVar1[64];
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	bool bVar5;
	int iVar6;
	int iVar7;
	
	bVar5 = false;
	iVar7 = 36;
	StringCopy(&cVar0, "HPWARN_CONF", 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_166.f_49.f_4);
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar4, "HEIST_WARN_2", 64);
			bVar5 = true;
			Call_Loc(Local_166.f_49.f_3);
			iVar6 = StackVal;
			break;
		
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT", 64);
			StringCopy(&cVar1, "FM_CSC_QUIT1", 64);
			break;
		
		case 2:
			if (Local_166.f_72 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_166.f_72.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_1);
				StringCopy(&cVar1, StackVal, 64);
			}
			if (Local_166.f_72.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_2);
				iVar7 = StackVal;
			}
			Stack.Push(Local_166.f_72.f_3 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_72.f_3);
			if (StackVal && !unk_0xD6F9DEE4765092A9(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_3);
				StringCopy(&cVar4, StackVal, 64);
			}
			if (Local_166.f_72.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_4);
				bVar5 = StackVal;
			}
			if (Local_166.f_72.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_5);
				iVar6 = StackVal;
			}
			Stack.Push(Local_166.f_72.f_6 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_72.f_6);
			if (StackVal && !unk_0xD6F9DEE4765092A9(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_6);
				StringCopy(&cVar2, StackVal, 64);
			}
			Stack.Push(Local_166.f_72.f_7 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_72.f_7);
			if (StackVal && !unk_0xD6F9DEE4765092A9(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_72.f_7);
				StringCopy(&cVar3, StackVal, 64);
			}
			break;
	}
	hud::set_warning_message_with_header(&cVar0, &cVar1, iVar7, &cVar4, bVar5, iVar6, &cVar2, &cVar3, true, 0);
	if (unk_0xAE231F549813BBDF(2))
	{
		unk_0x30EBBB1D4EDC8FE4(1);
	}
	if (unk_0x61C3701AD6D746B2(2, 202) || unk_0x2645430E708CBFAC(2, 202))
	{
		*uParam2 = 0;
		return 1;
	}
	if (unk_0x61C3701AD6D746B2(2, 201) || unk_0x2645430E708CBFAC(2, 201))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_134(var uParam0)
{
	if (BitTest(uParam0->f_1093, 8) && !BitTest(uParam0->f_1093, 9))
	{
		if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
		{
			if (func_299() || func_298())
			{
				func_297();
			}
			else if (!BitTest(uParam0->f_1093, 9))
			{
				if (func_135(uParam0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 9);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 10);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1093, 10))
	{
		if (!BitTest(uParam0->f_1093, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 11);
			func_68(0, 0);
			func_68(0, 0);
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 10);
	}
}

int func_135(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	var uVar7;
	
	if (Local_166.f_48 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_166.f_48);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794744.f_4[iVar0 /*89*/] };
	iVar2 = Global_794744.f_4[iVar0 /*89*/].f_65;
	uVar3 = Global_794744.f_4[iVar0 /*89*/].f_71;
	func_231(func_232(unk_0x259BE71D8A81D4FA()));
	func_88(unk_0x259BE71D8A81D4FA(), 0, 376832, 0);
	Global_2685444.f_3850 = 1;
	func_230(unk_0x259BE71D8A81D4FA(), 0);
	func_229();
	func_228();
	switch (uParam0->f_1090)
	{
		case 0:
			iVar2 = 260;
			func_227(67);
			func_226();
			func_225();
			break;
		
		case 1:
			iVar2 = 274;
			func_227(69);
			func_224();
			func_223();
			break;
	}
	if (func_299() || func_222())
	{
		func_297();
	}
	else
	{
		Global_1943520.f_539 = 1;
		func_221(iVar2);
		if (func_22() <= 3)
		{
			func_220();
		}
		func_217(func_219(unk_0x259BE71D8A81D4FA()));
		func_215(&Var1);
		func_214(uVar3);
		func_213();
		func_211();
		func_210();
		func_81();
		func_209();
		Var6 = { 0f, 0f, 0f };
		unk_0x0B0C9A0F9AAEB7F0(&uVar7, 6);
		func_136(&(Global_2684504.f_783), 0, 0, Var6, &uVar4, Var6, 1, 0, &uVar4, &iVar5, iVar5, 0, uVar7);
		func_68(0, 0);
		Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_96 = 8;
		return 1;
	}
	return 0;
}

void func_136(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, struct<3> Param5, bool bParam6, bool bParam7, var uParam8, var uParam9, int iParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_64(uParam0, iParam1, 1, iParam10, 1);
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (bParam7)
		{
			if (!unk_0x3555462DB47B7AB1())
			{
				if (!func_208() || bParam11)
				{
					func_197(0);
				}
			}
			return;
		}
	}
	if (!unk_0x78411E34CF90EA8C(*uParam0))
	{
		*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	Var1 = { Param5 };
	fVar2 = -1f;
	bVar3 = false;
	fVar4 = 0,2f;
	iVar5 = 1;
	if (func_196(iParam1))
	{
		*uParam4 = { func_195(iParam1, iParam2) };
		Var1 = { func_194(iParam1, iParam2) };
		fVar2 = func_193(iParam1, iParam2);
	}
	if (!func_38(*uParam4))
	{
		Var0 = { *uParam4 };
	}
	if (func_38(Var0))
	{
		if (!bParam6)
		{
			Var0 = { Param3 };
			if (unk_0x7830326EF9D54DBB(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_38(Var0))
		{
			if (func_79(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (unk_0xFC8BFE4B41177C22(func_190()) && !unk_0x1C2F771CDC87A3A5(func_190(), 0))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(func_190(), 1) };
					Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(func_190()) };
					if (func_77(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_829, 1, 0))
					{
						Var0 = { unk_0x02AF3EA0F67D2329() };
						Var1 = { unk_0x958849BB56EC0F07(2) };
					}
				}
				else
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
					Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
				}
			}
			else
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
			}
			if ((func_189(unk_0x259BE71D8A81D4FA()) || func_188(unk_0x259BE71D8A81D4FA())) && func_187())
			{
				Var0.f_2 = (Var0.f_2 + 1,5f);
			}
			else if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
			{
				if (func_189(unk_0x259BE71D8A81D4FA()))
				{
					Var0.f_2 = (Var0.f_2 + 0,4f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1,5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (BitTest(uParam12, 3))
	{
		Var0 = { 1124,745f, 263,6554f, -48,8552f };
		Var1 = { -22,4617f, 0f, -75,8431f };
		fVar2 = 50f;
	}
	else if (func_185(unk_0x259BE71D8A81D4FA()))
	{
		Var0 = { 488,6712f, -2623,074f, -48,1159f };
		Var1 = { -9,1167f, 0f, 130,9763f };
		fVar2 = 50f;
	}
	else if (func_184(Global_4718592.f_127178) || BitTest(uParam12, 2))
	{
		if (func_183(unk_0x259BE71D8A81D4FA()))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
			Var0.f_2 = (Var0.f_2 + 0,4f);
			fVar2 = unk_0xB99978989A0F4E57();
		}
		else
		{
			Var0 = { -194,2056f, -1853,75f, 70,3345f };
			Var1 = { -10,0011f, 0f, 131,0271f };
			fVar2 = 42,6052f;
		}
	}
	else if (func_182(Global_4718592.f_127178) || BitTest(uParam12, 1))
	{
		Var0 = { 347,2638f, 4867,324f, -59,2679f };
		Var1 = { 1,2933f, 0,0747f, -34,6934f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 4) || func_181(Global_4718592.f_127178))
	{
		Var0 = { 2709,332f, -366,5988f, -52,2786f };
		Var1 = { -19,962f, 0f, -121,3927f };
		fVar2 = 56,6574f;
	}
	else if (BitTest(uParam12, 5))
	{
		iVar6 = func_180(unk_0x259BE71D8A81D4FA());
		Var0 = { unk_0xF10F2A2453AF1DFB(func_179(iVar6), func_178(iVar6), 3,5688f, 7,9792f, 4,1641f) };
		Var1 = { -21,6791f, 0f, (func_178(iVar6) + 40,237f) };
		fVar2 = 70f;
	}
	else if (BitTest(uParam12, 6) || func_177())
	{
		if (BitTest(uParam12, 6))
		{
			Var0 = { Global_1971648.f_1081 };
			Var1 = { Global_1971648.f_1081.f_3 };
			fVar2 = Global_1971648.f_1081.f_6;
		}
		else
		{
			func_174(&Var0, &Var1, &fVar2);
		}
	}
	else if (BitTest(uParam12, 7))
	{
		Var0 = { -1381,784f, 38,8164f, 63,1614f };
		Var1 = { -19,0288f, 0f, -35,2577f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 8) || func_173(Global_4718592.f_127178))
	{
	}
	else if (BitTest(uParam12, 9) || (func_171() && func_170(249)))
	{
		Var0 = { -822,1176f, -198,5518f, 40,085f };
		Var1 = { 13,7424f, 0f, 145,7582f };
		fVar2 = 65,2994f;
		bVar3 = true;
		if (!func_122())
		{
			iVar5 = 0;
		}
	}
	else if (BitTest(uParam12, 10))
	{
	}
	else if (func_169(Global_4718592.f_127178))
	{
		Var0 = { 800,2757f, -3051,393f, 10,5728f };
		Var1 = { 3,1956f, 0f, -8,4268f };
		fVar2 = 50f;
	}
	else if (func_168(Global_4718592.f_127178))
	{
		Var0 = { -949,149f, -2754,621f, 19,6422f };
		Var1 = { -12,3116f, 0f, 170,9905f };
		fVar2 = 60f;
	}
	else if (BitTest(uParam12, 11))
	{
		Var0 = { 1403,907f, 3586,428f, 41,1676f };
		Var1 = { -8,8877f, 0f, 39,6448f };
		fVar2 = 62f;
	}
	else if (BitTest(uParam12, 12))
	{
		Var0 = { 622,9118f, -396,3098f, 31,0305f };
		Var1 = { -10,3971f, 0f, 133,29f };
		fVar2 = 60f;
	}
	else if (BitTest(uParam12, 13))
	{
		Var0 = { -1102,245f, -805,9605f, 24,6985f };
		Var1 = { -20,2647f, 0f, -101,329f };
		fVar2 = 62f;
	}
	else if (func_167(Global_4718592.f_127178))
	{
		Var0 = { -1587,15f, 2771,544f, 27,1587f };
		Var1 = { -19,4886f, 0f, 8,8248f };
		fVar2 = 60f;
	}
	else if (func_166(Global_4718592.f_127178))
	{
		func_165(&Var0, &Var1, &fVar2);
	}
	if (func_208() && !bParam11)
	{
		Var0 = { -213,5595f, 316,9778f, 96,9244f };
		Var1 = { -1,0483f, 0f, -127,3989f };
		fVar2 = 25,5102f;
	}
	if (iParam1 == 0 && bParam7)
	{
		func_159();
		func_158(&Var7, 144, Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35);
		if (!func_38(Var7))
		{
			Var0 = { Var7 };
		}
		func_152(&Var7, 144, Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35);
		Var1 = { Var7 };
	}
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0x1761457F86AD0EE2(*uParam0, Var0);
	unk_0x5E5CEC33463AD803(*uParam0, Var1, 2);
	if (fVar2 > 0f)
	{
		unk_0x58BDA5D9262F5D30(*uParam0, fVar2);
	}
	else
	{
		unk_0x58BDA5D9262F5D30(*uParam0, 40f);
	}
	if (bVar3)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", fVar4);
	}
	if (func_208() && !bParam11)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_151(unk_0x259BE71D8A81D4FA()))
			{
				func_88(unk_0x259BE71D8A81D4FA(), 0, 4, 0);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -209,434f, 305,016f, 95,9464f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 12,5f);
				unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), -209,867f, 306,969f, 95,9464f, 1f, 20000, 1193033728, 0,1f);
				unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
				unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
			}
		}
		unk_0x60040CDD28AA1BC3(-209,434f, 305,016f, 95,9464f, 30f, 0, 0, 0, 0, 0, 0, 0);
		func_150(1);
	}
	if (iVar5 && !unk_0x3555462DB47B7AB1())
	{
		if (!func_208() || bParam11)
		{
			func_197(0);
		}
	}
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	if ((((!func_149() && !func_148()) && !func_147()) && !func_146()) && !func_145())
	{
		func_144(0);
	}
	if (func_76())
	{
		unk_0xE3F88173F42C071B();
	}
	if (unk_0x3555462DB47B7AB1())
	{
		*uParam8 = { Var0 };
		*uParam9 = 1;
	}
	else
	{
		func_143(Var0);
	}
	unk_0x3AFFD31224BF9207(unk_0x259BE71D8A81D4FA(), 1);
	func_137(func_208(), ((BitTest(uParam12, 0) || BitTest(uParam12, 1)) || BitTest(uParam12, 2)));
}

void func_137(bool bParam0, bool bParam1)
{
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	if (!bParam1 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xA3736D76B0E93E93(unk_0x4A8C381C258A124D()))
			{
				unk_0x837D67618BF89034(unk_0x4A8C381C258A124D(), 1, 1);
			}
		}
	}
	if (!bParam0)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			if (func_140())
			{
				unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			}
			if (func_139(unk_0x259BE71D8A81D4FA()))
			{
				func_88(unk_0x259BE71D8A81D4FA(), 0, 32768, 0);
			}
			else if (func_138())
			{
				func_88(unk_0x259BE71D8A81D4FA(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_88(unk_0x259BE71D8A81D4FA(), 0, 319492, 0);
			}
		}
		else
		{
			func_88(unk_0x259BE71D8A81D4FA(), 0, 57348, 0);
		}
	}
}

bool func_138()
{
	return Global_2685444.f_6391;
}

int func_139(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1882632[iParam0 /*146*/].f_33, 31);
	}
	return 0;
}

int func_140()
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_142(uVar0, 1) && !func_141(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				if (unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle") == unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_143(struct<3> Param0)
{
	if (!func_76())
	{
		return;
	}
	unk_0x2D8D239B3F1D13F9(Param0, 0f, 0f, 0f);
	unk_0x0A83667A5D36A4FF(1);
}

void func_144(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return;
	}
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
	{
		unk_0x10B228D2FDB7AF16(iParam0);
	}
}

bool func_145()
{
	return BitTest(Global_2684504.f_3, 17);
}

bool func_146()
{
	return BitTest(Global_2684504.f_3, 14);
}

bool func_147()
{
	return BitTest(Global_2684504.f_3, 12);
}

bool func_148()
{
	return BitTest(Global_2684504.f_3, 9);
}

bool func_149()
{
	return BitTest(Global_2684504.f_3, 6);
}

void func_150(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144), 27);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144), 27);
	}
}

bool func_151(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_144, 27);
}

int func_152(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_153(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_153(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_153(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_153(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_153(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_153(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_157(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_157(iParam0, bParam4) };
	*uParam2 = { func_155(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_154(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_154(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_154(struct<3> Param0, float fParam1)
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

struct<6> func_155(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_156(iParam1, &uVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && unk_0xC557C842E425A746(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_157(int iParam0, bool bParam1)
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

int func_158(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_153(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_153(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_153(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_153(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_153(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_153(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_159()
{
	int iVar0;
	
	if (func_162())
	{
		return;
	}
	func_161(4, -1);
	if (func_160())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
		{
			if (unk_0xB23E0F9B63D009A8(iVar0) == unk_0x259BE71D8A81D4FA())
			{
				if (!func_170(48))
				{
					unk_0x903DAFB544C5CA0D(unk_0xB23E0F9B63D009A8(iVar0), 0);
				}
			}
			else
			{
				unk_0x903DAFB544C5CA0D(unk_0xB23E0F9B63D009A8(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_160()
{
	return BitTest(Global_2684504.f_43.f_4, 0);
}

void func_161(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668667.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_162()
{
	if (func_164() != 2)
	{
		return 0;
	}
	if (!func_160() && !((Global_1936862 || Global_1574972) && func_163()))
	{
		return 0;
	}
	return 1;
}

var func_163()
{
	return Global_2684504.f_43.f_57;
}

int func_164()
{
	return Global_2684504.f_43.f_40;
}

void func_165(var uParam0, var uParam1, float fParam2)
{
	switch (Global_262145.f_35462)
	{
		case 0:
			*uParam0 = { -1620,506f, -174,5112f, 60,3898f };
			*uParam1 = { -15,9519f, 0f, 76,8417f };
			*fParam2 = 60f;
			break;
	}
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6131[23])
		{
			if (iParam0 == Global_262145.f_4731[23 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6131[22])
		{
			if (iParam0 == Global_262145.f_4731[22 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6131[19])
		{
			if (iParam0 == Global_262145.f_4731[19 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6131[18])
		{
			if (iParam0 == Global_262145.f_4731[18 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 9)
	{
		return 0;
	}
	return BitTest(Global_2685444.f_1.f_2813[iVar0], iVar1);
}

int func_171()
{
	return func_172(Global_4718592.f_127178);
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_173(int iParam0)
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

void func_174(var uParam0, var uParam1, float fParam2)
{
	if (func_176(Global_4718592.f_127178))
	{
		if (unk_0x1D5CD3EAAA7422B0((unk_0x4AE9635532D92447(0) - 1,333333f)) < 0,1f)
		{
			*uParam0 = { 1561,161f, 384,824f, -48,6215f };
			*uParam1 = { -89,3034f, -0,1435f, 180f };
			*fParam2 = 69f;
		}
		else
		{
			*uParam0 = { 1561,16f, 384,8204f, -48,9135f };
			*uParam1 = { -89,5003f, -0,204f, 180f };
			*fParam2 = 69f;
		}
	}
	else if (func_175(Global_4718592.f_127178))
	{
		*uParam0 = { -1348,956f, 138,2791f, -94,7272f };
		*uParam1 = { -2,4593f, 0f, -164,9275f };
		*fParam2 = 70f;
	}
}

int func_175(int iParam0)
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

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29409[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_177()
{
	if (func_176(Global_4718592.f_127178))
	{
		return 1;
	}
	return 0;
}

float func_178(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

Vector3 func_179(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

var func_180(int iParam0)
{
	return Global_2652592[iParam0 /*3*/];
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6007[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(int iParam0)
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

bool func_183(int iParam0)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_201, 24);
}

int func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			if (Global_262145.f_6951[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6131[iVar1])
				{
					if (iParam0 == Global_262145.f_4731[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_25())
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 25;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)
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

var func_187()
{
	return BitTest(Global_2684504.f_3, 4);
}

int func_188(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_25())
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

var func_190()
{
	if (unk_0xFC8BFE4B41177C22(func_192()))
	{
		return func_192();
	}
	return func_191();
}

var func_191()
{
	return Global_2621446.f_2;
}

var func_192()
{
	return Global_2621446.f_3;
}

float func_193(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40,5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40,4324f;
				
				case 2:
					return 42,2709f;
				
				case 3:
					return 43,6444f;
				
				case 4:
					return 37,3862f;
				
				case 5:
					return 38,6952f;
				
				case 6:
					return 40,9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40,5238f;
				
				case 1:
					return 47,4321f;
				
				case 2:
					return 38,6571f;
				
				case 3:
					return 44,0641f;
				
				case 4:
					return 39,2991f;
				
				case 5:
					return 31,7484f;
				
				case 6:
					return 35,6342f;
				
				case 7:
					return 36,0072f;
				
				case 8:
					return 42,5782f;
				
				case 9:
					return 37,4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1,3773f, 0f, -88,827f;
		
		case 122:
			return -18,1605f, 2,6167f, 113,0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2,3039f, 0f, -19,6903f;
				
				case 1:
					return -5,9341f, 0f, -151,6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3,627f, 0f, 34,6935f;
				
				case 1:
					return -57,9221f, 0f, 58,3042f;
				
				case 2:
					return -15,4498f, 0f, 161,1361f;
				
				case 3:
					return -1,8386f, 0f, -135,0223f;
				
				case 4:
					return 0,5233f, 0f, -85,7377f;
				
				case 5:
					return -4,2364f, 0f, 173,6634f;
				
				case 6:
					return -3,74f, 0f, -30,7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4,1441f, 0f, 15,6909f;
				
				case 1:
					return 5,4815f, 0f, -127,6695f;
				
				case 2:
					return -4,1889f, 0f, -15,0654f;
				
				case 3:
					return 16,4433f, 0f, -60,3988f;
				
				case 4:
					return 7,8225f, 0f, 39,2409f;
				
				case 5:
					return 2,0405f, 0f, -122,3459f;
				
				case 6:
					return 7,3382f, 0f, 157,6388f;
				
				case 7:
					return 6,481f, 0f, 172,9874f;
				
				case 8:
					return 14,0573f, 0f, 5,0622f;
				
				case 9:
					return -10,1444f, 0f, -131,4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8,8196f, 0f, 57,5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297,855f, 84,6478f, 54,6519f;
		
		case 122:
			return -855,7661f, -2645,376f, 100,8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13,4678f, -1097,781f, 30,192f;
				
				case 1:
					return 816,6221f, -2160,659f, 30,3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172,111f, -1641,549f, 5,7494f;
				
				case 1:
					return 498,4758f, -226,4275f, 71,0569f;
				
				case 2:
					return -1217,632f, 364,4556f, 86,527f;
				
				case 3:
					return -2884,754f, 32,9823f, 15,1123f;
				
				case 4:
					return -948,1036f, -1260,249f, 8,228f;
				
				case 5:
					return -1614,216f, 302,0945f, 66,0158f;
				
				case 6:
					return -1380,721f, -107,9713f, 50,6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903,8763f, -192,214f, 74,6401f;
				
				case 1:
					return 1419,517f, -2216,034f, 61,8467f;
				
				case 2:
					return -83,9713f, -1331,635f, 29,8383f;
				
				case 3:
					return 364,6455f, -2441,897f, 6,2607f;
				
				case 4:
					return 1237,207f, 2715,999f, 37,6424f;
				
				case 5:
					return 1019,153f, 2680,427f, 41,2254f;
				
				case 6:
					return 269,5203f, 2617,41f, 44,7054f;
				
				case 7:
					return -194,2518f, 6295,688f, 31,0991f;
				
				case 8:
					return 1682,759f, 4954,088f, 42,6891f;
				
				case 9:
					return 2325,447f, 3145,91f, 58,4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993,697f, 3049,667f, 47,7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_197(int iParam0)
{
	if (!unk_0x47CB3D397940E783(func_198(0)))
	{
		unk_0xDCAFFD08A08087EB(func_198(iParam0), 0, 1);
	}
}

char* func_198(int iParam0)
{
	if (func_207(Global_4718592.f_127178))
	{
		return "MenuMGIslandHeistIn";
	}
	if (iParam0 || func_170(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_206())
	{
		return "MenuMGTournamentIn";
	}
	if (func_200(Global_4718592.f_185586))
	{
		return "MenuMGRemixIn";
	}
	if (func_199(Global_4718592.f_185586) && BitTest(Global_4718592.f_187011.f_3319, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_199(int iParam0)
{
	return iParam0 == 998;
}

int func_200(int iParam0)
{
	if ((((func_205(iParam0) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || func_201(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0)
{
	return iParam0 == 64;
}

bool func_202(int iParam0)
{
	return iParam0 == 65;
}

bool func_203(int iParam0)
{
	return iParam0 == 69;
}

bool func_204(int iParam0)
{
	return iParam0 == 67;
}

bool func_205(int iParam0)
{
	return iParam0 == 68;
}

bool func_206()
{
	return BitTest(Global_2685444.f_1.f_2809, 12);
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29409[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_208()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 2);
}

void func_209()
{
	Global_2684504.f_719 = 1;
}

void func_210()
{
	unk_0x8744D2E3FC95740E(&Global_2684504, 7);
}

void func_211()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684504, 5);
	func_212();
}

void func_212()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684504, 8);
}

void func_213()
{
	unk_0x8744D2E3FC95740E(&(Global_2684504.f_2), 14);
}

void func_214(var uParam0)
{
	Global_2684504.f_42 = uParam0;
}

void func_215(char* sParam0)
{
	StringCopy(&(Global_2684504.f_863), sParam0, 24);
	if (func_216())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_216()
{
	return BitTest(Global_2685444.f_1.f_2809, 5);
}

void func_217(struct<13> Param0)
{
	if (func_218(Param0))
	{
		Global_2685444.f_6641 = { Param0 };
	}
}

bool func_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

struct<13> func_219(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

void func_220()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_33), 12);
}

void func_221(int iParam0)
{
	Global_2684504.f_9 = iParam0;
}

var func_222()
{
	return Global_2684504.f_758;
}

void func_223()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_33), 28);
}

void func_224()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2684504.f_3), 13);
}

void func_225()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_33), 27);
}

void func_226()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2684504.f_3), 11);
}

void func_227(int iParam0)
{
	Global_1057440 = iParam0;
}

void func_228()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2684504.f_3), 2);
}

void func_229()
{
	Global_2693440.f_1 = 0;
}

void func_230(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset");
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam1);
	unk_0xEE8559BBFC27701B(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset", iVar0);
}

void func_231(struct<3> Param0)
{
	Global_2696159 = { Param0 };
}

Vector3 func_232(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xC450B06E5AAA0985(Global_2647061[iParam0]))
	{
		Var0 = { func_296(Global_2647061[iParam0]) };
	}
	else if (unk_0xC450B06E5AAA0985(Global_2647061.f_33[iParam0]) && !iParam0 == Global_2672855)
	{
		Var0 = { func_296(Global_2647061.f_33[iParam0]) };
	}
	if (system::vmag(Var0) > 0f)
	{
		return Var0;
	}
	return func_233(iParam0);
}

Vector3 func_233(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	if (Global_2644866)
	{
		if (func_295(iParam0))
		{
			Var1 = { func_294(iParam0) };
			if (system::vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657971[iParam0 /*465*/].f_74.f_11)
		{
			if (system::vmag(Global_2657971[iParam0 /*465*/].f_74.f_12) > 0f)
			{
				return Global_2657971[iParam0 /*465*/].f_74.f_12;
			}
		}
	}
	if (Global_1845281[iParam0 /*883*/].f_268.f_35 > 0)
	{
		Var1 = { func_292(func_293(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35)) };
		if (system::vmag(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_289(func_291(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_292(func_293(iVar0)) };
			if (system::vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_288(iParam0))
	{
		Var1 = { func_236(iParam0) };
		if (system::vmag(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_235(iParam0))
	{
		iVar2 = func_234(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1943520.f_573[iVar2 /*3*/] };
			if (system::vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2644866)
	{
		if (func_295(iParam0))
		{
			Var1 = { func_294(iParam0) };
			if (system::vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657971[iParam0 /*465*/].f_74.f_11)
		{
			if (system::vmag(Global_2657971[iParam0 /*465*/].f_74.f_12) > 0f)
			{
				return Global_2657971[iParam0 /*465*/].f_74.f_12;
			}
		}
	}
	return func_291(iParam0);
}

int func_234(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_2657971[iParam0 /*465*/].f_322.f_17;
	}
	return -1;
}

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_25() && (func_78(iParam0, 1, 1) || Global_2635563.f_2980))
	{
		iVar0 = BitTest(Global_2657971[iParam0 /*465*/].f_322, 1);
		return iVar0;
	}
	return 0;
}

Vector3 func_236(int iParam0)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam0 == func_25())
	{
	}
	if (func_189(iParam0))
	{
		iVar0 = func_287(iParam0);
		if (iVar0 != func_25())
		{
			if (!func_286(iVar0))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_264[iVar0 /*3*/][1]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_264[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2657971[func_287(iParam0) /*465*/].f_322.f_13;
				}
			}
			else
			{
				iVar1 = func_283(iVar0);
				if (iVar1 == -1)
				{
					iVar1 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar1 == -1)
				{
					return Global_1943520.f_573[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_185(iParam0))
	{
		iVar2 = func_282(iParam0);
		if (iVar2 != func_25())
		{
			if (!func_281(iVar2))
			{
				if (unk_0xFC8BFE4B41177C22(Global_1962069[iVar2]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_1962069[iVar2], 0);
				}
				else
				{
					return Global_2657971[func_287(iParam0) /*465*/].f_322.f_13;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1943520.f_573[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_188(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2738934.f_311))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2738934.f_311, 0);
		}
	}
	else if (func_280(iParam0) && !func_279(iParam0))
	{
		iVar4 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar4 != func_25())
		{
			iVar5 = func_283(iVar4);
			if (iVar5 == -1)
			{
				iVar5 = Global_2657971[iParam0 /*465*/].f_322.f_8;
			}
			if (!iVar5 == -1)
			{
				return Global_1943520.f_573[iVar5 /*3*/];
			}
		}
	}
	else if (func_278(iParam0) && !func_277(iParam0))
	{
		if (func_288(iParam0) && func_276())
		{
			return Global_1943520.f_573[Global_2657971[iParam0 /*465*/].f_322.f_8 /*3*/];
		}
		iVar6 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar6 != func_25())
		{
			if (func_275(iVar6))
			{
				iVar7 = func_272(iVar6);
				if (iVar7 == -1)
				{
					iVar7 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar7 != -1)
				{
					return Global_1943520.f_573[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_271(iParam0))
	{
		iVar8 = func_270(iParam0);
		if (iVar8 != func_25())
		{
			if (!func_269(iVar8) && !func_268(iVar8))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_361[iVar8]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_361[iVar8], 0);
				}
				else
				{
					return Global_2657971[func_270(iParam0) /*465*/].f_322.f_21;
				}
			}
			else if (func_275(iVar8) && func_269(iVar8))
			{
				iVar9 = func_272(iVar8);
				if (iVar9 == -1)
				{
					iVar9 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar9 == -1)
				{
					return Global_1943520.f_573[iVar9 /*3*/];
				}
			}
			else if (func_267(iVar8) && func_268(iVar8))
			{
				iVar10 = func_264(iVar8);
				if (iVar10 == -1)
				{
					iVar10 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar10 == -1)
				{
					return Global_1943520.f_573[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_263(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2738934.f_313))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2738934.f_313, 0);
		}
	}
	else if (func_262(iParam0) && !func_261(iParam0))
	{
		iVar11 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar11 != func_25())
		{
			if (func_260(iVar11))
			{
				iVar12 = func_257(iVar11);
				if (iVar12 == -1)
				{
					iVar12 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar12 != -1)
				{
					return func_256(iVar12);
				}
			}
		}
	}
	else if (func_255(iParam0) && !func_254(iParam0))
	{
		iVar13 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar13 != func_25())
		{
			if (func_253(iVar13))
			{
				iVar14 = func_250(iVar13);
				if (iVar14 == -1)
				{
					iVar14 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar14 != -1)
				{
					return Global_1943520.f_573[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_249(iParam0, 0))
	{
		iVar15 = func_248(iParam0);
		if (iVar15 != func_25())
		{
			if (!func_247(iVar15))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_394[iVar15]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_394[iVar15], 0);
				}
				else
				{
					return Global_1887305[func_248(iParam0) /*610*/].f_592;
				}
			}
			else
			{
				iVar16 = func_250(iVar15);
				if (iVar16 == -1)
				{
					iVar16 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar16 == -1)
				{
					return Global_1943520.f_573[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_246(iParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	else if (func_245(iParam0))
	{
		iVar17 = func_242(iParam0);
		if (iVar17 != func_25())
		{
			if (unk_0xFC8BFE4B41177C22(Global_2672855.f_427[iVar17]))
			{
				return unk_0xD1A6A821F5AC81DB(Global_2672855.f_427[iVar17], 0);
			}
			else
			{
				return Global_1906887[iVar17 /*304*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_262(iParam0))
	{
		return func_256(Global_2657971[iParam0 /*465*/].f_322.f_8);
	}
	if (func_237(iParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1943520.f_573[Global_2657971[iParam0 /*465*/].f_322.f_8 /*3*/];
}

int func_237(int iParam0)
{
	if (((func_241(iParam0) || func_240(iParam0)) || func_239(iParam0)) || func_238(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 19;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 16;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return iParam0;
	}
	if (func_244(iParam0) != -1)
	{
		iVar0 = func_186(func_244(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_243(iParam0, 0))
			{
				return func_24(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_25();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_25();
}

int func_243(int iParam0, bool bParam1)
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return func_17(Global_1887305[iParam0 /*610*/].f_10);
}

int func_244(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_78(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_245(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
			}
		}
		else if (((Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_1575083) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_78(iParam0, 1, 0))
		{
			return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
		}
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 13;
			}
		}
	}
	return 0;
}

int func_247(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 4);
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 == func_25())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_249(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_25())
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_25())
	{
		iVar0 = func_252(iParam0);
		if (iVar0 != 0)
		{
			return func_251(iVar0);
		}
	}
	return -1;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_252(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_315;
	}
	return 0;
}

int func_253(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (Global_1845281[iParam0 /*883*/].f_268.f_315 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_255(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_256(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750,5f, -1322,3f, 26,2802f;
		
		case 103:
			return 331,9f, -974,9f, 30f;
		
		case 104:
			return -146f, -1270f, 28,3088f;
		
		case 105:
			return -17,7f, 225,7f, 106,7566f;
		
		case 106:
			return 894,4f, -2106,4f, 29,4768f;
		
		case 107:
			return -668f, -2431,5f, 12,9444f;
		
		case 108:
			return 213,4f, -3166,6f, 4,7903f;
		
		case 109:
			return 366,6f, 237,6f, 104,9f;
		
		case 110:
			return -1275,3f, -666,8f, 25,6332f;
		
		case 111:
			return -1188,8f, -1156,9f, 4,6582f;
		
		default:
	}
	return Global_1943520.f_573[iParam0 /*3*/];
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_25())
	{
		iVar0 = func_259(iParam0);
		if (iVar0 != 0)
		{
			return func_258(iVar0);
		}
	}
	return -1;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_259(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_358;
	}
	return 0;
}

int func_260(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_358 != 0;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_262(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return -1;
	}
	iVar0 = func_266(iParam0);
	if (!iVar0 == 0)
	{
		return func_265(iVar0);
	}
	return -1;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_266(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_297;
}

int func_267(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297 != 0;
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_6, 16);
	}
	return 0;
}

int func_269(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_2, 6);
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 == func_25())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_271(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_25())
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return -1;
	}
	iVar0 = func_274(iParam0);
	if (!iVar0 == 0)
	{
		return func_273(iVar0);
	}
	return -1;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_274(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_304;
}

int func_275(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_304 != 0;
	}
	return 0;
}

int func_276()
{
	if (BitTest(Global_1943520.f_2, 13) || Global_1943520.f_3548)
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	if (func_278(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 9;
			}
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	if (func_280(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 4;
			}
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 26);
	}
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 == func_25())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_25())
	{
		return -1;
	}
	iVar0 = func_285(iParam0);
	if (!iVar0 == 0)
	{
		return func_284(iVar0);
	}
	return -1;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_285(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_197[5 /*13*/];
}

int func_286(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 6);
	}
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 == func_25())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_288(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_78(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

void func_289(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_290(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_290(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_290(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_290(Param0, iVar0, 0))
	{
		if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35 > 0)
		{
			*uParam1 = Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35;
		}
		else if (Global_2635149.f_1 > 0)
		{
			*uParam1 = Global_2635149.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_290(Param0, iVar0, 0))
	{
		if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35 > 0)
		{
			*uParam1 = Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35;
		}
		else if (Global_2635149.f_1 > 0)
		{
			*uParam1 = Global_2635149.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_290(struct<3> Param0, int iParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312298[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312298[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312298[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1)) || (Global_1312298[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312298[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1312298[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312298[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_290(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_290(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_290(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_291(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

Vector3 func_292(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773,4775f, 310,6321f, 84,6981f };
			break;
		
		case 2:
			Var0 = { -252,5713f, -949,9199f, 30,221f };
			break;
		
		case 3:
			Var0 = { -1443,094f, -544,7684f, 33,7424f };
			break;
		
		case 4:
			Var0 = { -913,85f, -455,1392f, 38,5999f };
			break;
		
		case 5:
			Var0 = { -47,3145f, -585,9766f, 36,9593f };
			break;
		
		case 6:
			Var0 = { -932,7474f, -383,9246f, 37,9613f };
			break;
		
		case 7:
			Var0 = { -619,1315f, 37,8841f, 42,5883f };
			break;
		
		case 8:
			Var0 = { 284,9614f, -159,9891f, 63,6221f };
			break;
		
		case 9:
			Var0 = { 2,8889f, 35,7762f, 70,5349f };
			break;
		
		case 10:
			Var0 = { 9,74f, 84,6906f, 77,3975f };
			break;
		
		case 11:
			Var0 = { -512,1465f, 111,2223f, 62,351f };
			break;
		
		case 12:
			Var0 = { -197,3405f, 88,1053f, 68,7422f };
			break;
		
		case 13:
			Var0 = { -628,3212f, 165,8364f, 60,1651f };
			break;
		
		case 14:
			Var0 = { -973,3757f, -1429,425f, 6,6791f };
			break;
		
		case 15:
			Var0 = { -829,1362f, -855,0104f, 18,6297f };
			break;
		
		case 16:
			Var0 = { -757,5739f, -755,5591f, 25,5697f };
			break;
		
		case 17:
			Var0 = { -45,1289f, -57,0925f, 62,2531f };
			break;
		
		case 18:
			Var0 = { -206,7293f, 184,142f, 79,3279f };
			break;
		
		case 19:
			Var0 = { -811,7045f, -984,1961f, 13,1538f };
			break;
		
		case 20:
			Var0 = { -664,0032f, -853,6744f, 23,4325f };
			break;
		
		case 21:
			Var0 = { -1534,025f, -324,5247f, 46,5237f };
			break;
		
		case 22:
			Var0 = { -1561,381f, -412,1974f, 41,389f };
			break;
		
		case 23:
			Var0 = { -1608,851f, -429,184f, 39,439f };
			break;
		
		case 24:
			Var0 = { 964,3583f, -1034,199f, 39,8303f };
			break;
		
		case 25:
			Var0 = { 894,2868f, -885,5679f, 26,1212f };
			break;
		
		case 26:
			Var0 = { 821,1741f, -924,1658f, 25,1998f };
			break;
		
		case 27:
			Var0 = { 759,7933f, -759,8209f, 25,759f };
			break;
		
		case 28:
			Var0 = { 844,7289f, -1164,1f, 24,2681f };
			break;
		
		case 29:
			Var0 = { 526,2521f, -1604,613f, 28,2625f };
			break;
		
		case 30:
			Var0 = { 572,0462f, -1570,736f, 27,4904f };
			break;
		
		case 31:
			Var0 = { 722,2852f, -1190,617f, 23,282f };
			break;
		
		case 32:
			Var0 = { 497,6212f, -1494,084f, 28,2893f };
			break;
		
		case 33:
			Var0 = { 480,3127f, -1549,937f, 28,2828f };
			break;
		
		case 34:
			Var0 = { -68,702f, 6426,148f, 30,439f };
			break;
		
		case 35:
			Var0 = { -247,4374f, 6240,294f, 30,4892f };
			break;
		
		case 36:
			Var0 = { 2554,165f, 4668,059f, 33,0233f };
			break;
		
		case 37:
			Var0 = { 2461,22f, 1589,255f, 32,0443f };
			break;
		
		case 38:
			Var0 = { -2203,335f, 4244,427f, 47,3305f };
			break;
		
		case 39:
			Var0 = { 218,0665f, 2601,817f, 44,7668f };
			break;
		
		case 40:
			Var0 = { 186,1719f, 2786,343f, 45,0144f };
			break;
		
		case 41:
			Var0 = { 642,0746f, 2791,729f, 40,9795f };
			break;
		
		case 42:
			Var0 = { -1130,938f, 2701,133f, 17,8004f };
			break;
		
		case 43:
			Var0 = { -10,944f, -1646,76f, 28,3125f };
			break;
		
		case 44:
			Var0 = { 1024,263f, -2398,404f, 29,1261f };
			break;
		
		case 45:
			Var0 = { 870,8577f, -2232,323f, 29,5508f };
			break;
		
		case 46:
			Var0 = { -663,8541f, -2380,389f, 12,9446f };
			break;
		
		case 47:
			Var0 = { -1088,616f, -2235,098f, 12,2182f };
			break;
		
		case 48:
			Var0 = { -342,5126f, -1468,675f, 29,6107f };
			break;
		
		case 49:
			Var0 = { -1241,54f, -259,8841f, 37,9445f };
			break;
		
		case 50:
			Var0 = { 899,8448f, -147,528f, 75,5674f };
			break;
		
		case 51:
			Var0 = { -1405,411f, 526,8572f, 122,8361f };
			break;
		
		case 52:
			Var0 = { 1341,552f, -1578,037f, 53,4443f };
			break;
		
		case 53:
			Var0 = { -105,7029f, 6528,539f, 29,1719f };
			break;
		
		case 54:
			Var0 = { -302,3985f, 6327,434f, 31,8918f };
			break;
		
		case 55:
			Var0 = { -15,258f, 6557,378f, 32,2454f };
			break;
		
		case 56:
			Var0 = { 1899,673f, 3773,178f, 31,8829f };
			break;
		
		case 57:
			Var0 = { 1662,121f, 4776,317f, 41,0075f };
			break;
		
		case 58:
			Var0 = { -178,2278f, 490,886f, 134,0466f };
			break;
		
		case 59:
			Var0 = { 339,5743f, 439,7083f, 145,5896f };
			break;
		
		case 60:
			Var0 = { -764,6163f, 618,3144f, 137,5536f };
			break;
		
		case 61:
			Var0 = { -679,5461f, 592,5162f, 139,693f };
			break;
		
		case 62:
			Var0 = { 124,4571f, 551,8877f, 181,658f };
			break;
		
		case 63:
			Var0 = { -563,7349f, 689,099f, 151,6596f };
			break;
		
		case 64:
			Var0 = { -743,0927f, 590,0371f, 140,9221f };
			break;
		
		case 65:
			Var0 = { -861,252f, 684,8923f, 146,2643f };
			break;
		
		case 66:
			Var0 = { -1292,456f, 440,9454f, 93,7572f };
			break;
		
		case 67:
			Var0 = { 369,5891f, 417,4813f, 136,8344f };
			break;
		
		case 68:
			Var0 = { -1581,501f, -558,2578f, 33,9528f };
			break;
		
		case 69:
			Var0 = { -1379,546f, -499,1783f, 32,1574f };
			break;
		
		case 70:
			Var0 = { -117,5296f, -605,7157f, 35,2857f };
			break;
		
		case 71:
			Var0 = { -67,0943f, -802,4415f, 43,2273f };
			break;
		
		case 72:
			Var0 = { 254,1892f, -1809,183f, 26,1805f };
			break;
		
		case 73:
			Var0 = { -1472,278f, -920,0677f, 8,9683f };
			break;
		
		case 74:
			Var0 = { 38,9478f, -1026,629f, 28,6354f };
			break;
		
		case 75:
			Var0 = { 46,903f, 2789,825f, 57,1124f };
			break;
		
		case 76:
			Var0 = { -342,3246f, 6065,316f, 30,4895f };
			break;
		
		case 77:
			Var0 = { 1737,878f, 3709,088f, 33,1348f };
			break;
		
		case 78:
			Var0 = { 939,7161f, -1459,204f, 30,467f };
			break;
		
		case 79:
			Var0 = { 189,7624f, 309,7488f, 104,4714f };
			break;
		
		case 80:
			Var0 = { -21,9593f, -191,3618f, 51,5599f };
			break;
		
		case 81:
			Var0 = { 2472,22f, 4110,493f, 36,9629f };
			break;
		
		case 82:
			Var0 = { -39,3286f, 6420,603f, 30,7017f };
			break;
		
		case 83:
			Var0 = { -1134,762f, -1568,848f, 3,4077f };
			break;
	}
	return Var0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_294(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_74.f_7;
}

int func_295(int iParam0)
{
	if (Global_2657971[iParam0 /*465*/].f_74.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_296(var uParam0)
{
	var uVar0;
	
	switch (unk_0x6AEAF32EC173BB39(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0xA143F1936B350BD0(uParam0);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				return unk_0xD1A6A821F5AC81DB(iVar0, 0);
			}
			break;
	}
	return unk_0x3CF9D442F2C902BD(uParam0);
}

void func_297()
{
	Global_2684504.f_758 = 1;
}

var func_298()
{
	return Global_2684504.f_737;
}

var func_299()
{
	return BitTest(Global_2684504.f_2, 11);
}

void func_300(var uParam0)
{
	if (!func_491(uParam0))
	{
		func_484(uParam0);
		func_483(uParam0);
	}
	func_310(uParam0);
	if (!func_309(uParam0))
	{
		func_302(uParam0);
		func_301(uParam0);
	}
}

void func_301(var uParam0)
{
	unk_0x8744D2E3FC95740E(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
}

void func_302(var uParam0)
{
	if (Local_166.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_4.f_1);
	}
	switch (uParam0->f_732.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (!unk_0x834C960822A4683F() && func_98())
			{
				func_307(uParam0, 1, 0);
			}
			func_306(uParam0, 0);
			func_305(uParam0);
			func_303(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_303(var uParam0)
{
	func_304(&(uParam0->f_747.f_1), 0, 1);
	unk_0xD7C0EA10993D3214(0, 0);
}

void func_304(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (bParam2)
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			unk_0x4CBC5D1BC117616B(*uParam0, 0);
		}
		unk_0x85E6A1E36B5E2E4D(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xF3E3EA936C653F22();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_305(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_718))
	{
		unk_0xD314260005F064BF(&(uParam0->f_718));
	}
}

void func_306(var uParam0, int iParam1)
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

void func_307(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((uParam0->f_1100 && !func_308(unk_0x259BE71D8A81D4FA())) || iParam2)
		{
			func_88(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
			uParam0->f_1100 = 0;
		}
	}
	else
	{
		func_88(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
		uParam0->f_1100 = 1;
	}
}

int func_308(int iParam0)
{
	if (iParam0 != func_25() && func_78(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

bool func_309(var uParam0)
{
	return !BitTest(uParam0->f_732.f_4, uParam0->f_732.f_1);
}

void func_310(var uParam0)
{
	if (Local_166.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_4.f_2);
	}
	switch (uParam0->f_732)
	{
		case 0:
			if (!uParam0->f_1099)
			{
				func_482(uParam0);
			}
			break;
		
		case 1:
			func_482(uParam0);
			break;
		
		case 2:
			if (func_481(uParam0) && func_480())
			{
				func_482(uParam0);
			}
			break;
		
		case 3:
			func_380(uParam0);
			if (func_379(uParam0))
			{
				func_482(uParam0);
			}
			break;
		
		case 4:
			func_378(uParam0);
			func_375(uParam0);
			func_380(uParam0);
			func_354(uParam0);
			func_353(uParam0);
			func_348(uParam0);
			func_317(uParam0);
			func_312(uParam0);
			func_84(uParam0, 0);
			if (!func_379(uParam0))
			{
				func_311(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_311(var uParam0)
{
	int iVar0;
	
	uParam0->f_732.f_1 = uParam0->f_732;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
	unk_0x8744D2E3FC95740E(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
	iVar0 = uParam0->f_732;
	iVar0 = (iVar0 - 1);
	uParam0->f_732 = iVar0;
	if (uParam0->f_732 == 0)
	{
		uParam0->f_732 = 1;
	}
}

void func_312(var uParam0)
{
	if (uParam0->f_732.f_5)
	{
		unk_0x0C9B2F8C2BD128C2();
		unk_0x4EB223432F8FA0A0(18);
		unk_0x43AE50D2A33F6E2A();
		func_131(0);
		unk_0x66EFB3D6110055C4(0, 199, 1);
		unk_0x513E63C787EE96A7();
		func_315();
		unk_0xD10838CEA97E4725(19);
		func_161(11, -1);
		func_314();
		func_313();
	}
}

void func_313()
{
	Global_2738934.f_4651 = 0;
}

void func_314()
{
	Global_23692.f_6 = 1;
}

void func_315()
{
	unk_0x903DAFB544C5CA0D(unk_0x259BE71D8A81D4FA(), 0);
	func_316();
}

void func_316()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
		{
			iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
			if (iVar1 != func_25() && iVar1 != unk_0x259BE71D8A81D4FA())
			{
				unk_0x903DAFB544C5CA0D(iVar1, 0);
			}
		}
		iVar0++;
	}
}

void func_317(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar3[24];
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_347(uParam0, iVar0) && !func_346(uParam0, iVar0))
		{
			if (func_320(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_346(uParam0, iVar0))
				{
					Var2 = { func_319() };
					StringCopy(&cVar3, func_318(iVar0), 24);
					if (!unk_0xD6F9DEE4765092A9(&Var2) && unk_0x1B79E937E91F40C3(&Var2, &cVar3))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_181.f_6 != iVar1)
					{
						Local_181.f_6 = iVar1;
						if (iVar1 != -1)
						{
							if (!Global_1972760[unk_0x383461852896D73D() /*27*/].f_26)
							{
								Global_1972760[unk_0x383461852896D73D() /*27*/].f_26 = 1;
							}
						}
						else if (Global_1972760[unk_0x383461852896D73D() /*27*/].f_26)
						{
							Global_1972760[unk_0x383461852896D73D() /*27*/].f_26 = 0;
						}
					}
				}

char* func_318(int iParam0)
{
	if (Local_166.f_59.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_166.f_59.f_1);
		return StackVal;
	}
	return "";
}

struct<6> func_319()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_320(var uParam0, int iParam1)
{
	struct<2> Var0;
	
	if (!func_12())
	{
		StringCopy(&Var0, func_318(iParam1), 16);
		if (!unk_0xD6F9DEE4765092A9(&Var0))
		{
			func_342(&(Local_181.f_7), func_345(iParam1), func_344(iParam1), func_343(iParam1), 0, 1);
			if (func_322(&(Local_181.f_7), func_341(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_321(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_321(var uParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Local_181.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_166.f_59.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_166.f_59.f_7);
	}
}

bool func_322(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_340(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_323(sParam2, iParam3, 0);
}

int func_323(char* sParam0, int iParam1, bool bParam2)
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
					func_339();
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
		if (func_338(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_337();
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
				func_329();
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
				if (func_328())
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
			if (func_58())
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
			func_327();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_326();
		func_324();
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
		func_339();
	}
	return 0;
}

void func_324()
{
	if (!func_325())
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

int func_325()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_25())
	{
		return 0;
	}
	if (func_125(unk_0x259BE71D8A81D4FA()))
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

void func_326()
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

void func_327()
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

int func_328()
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

void func_329()
{
	if (func_336(14))
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
		Global_20930 = func_330();
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

var func_330()
{
	func_331();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_331()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_334(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_333(unk_0x4A8C381C258A124D());
			if (func_332(iVar0) && (!func_336(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_332(Global_113969.f_2366.f_539.f_4321))
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

bool func_332(int iParam0)
{
	return iParam0 < 3;
}

int func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_334(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_334(int iParam0)
{
	if (func_332(iParam0))
	{
		return func_335(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_335(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_336(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_337()
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

bool func_338(int iParam0, int iParam1)
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

void func_339()
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

void func_340(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_341(var uParam0)
{
	if (Local_166.f_59.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_59.f_2);
		return StackVal;
	}
	return "";
}

void func_342(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(uParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(uParam2, 1);
			}
		}
	}
}

char* func_343(var uParam0)
{
	if (Local_166.f_59.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_59.f_5);
		return StackVal;
	}
	return "";
}

int func_344(var uParam0)
{
	if (Local_166.f_59.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_59.f_4);
		return StackVal;
	}
	return 0;
}

int func_345(var uParam0)
{
	if (Local_166.f_59.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_59.f_3);
		return StackVal;
	}
	return -1;
}

bool func_346(var uParam0, int iParam1)
{
	return BitTest(Local_181.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_347(var uParam0, int iParam1)
{
	return BitTest(Local_181[(iParam1 / 32)], (iParam1 % 32));
}

void func_348(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_351(uParam0);
	if (((uParam0->f_747.f_62 || func_350(uParam0)) || uParam0->f_1094 != -1) || uParam0->f_1101)
	{
		return;
	}
	if (Local_166.f_44 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_166.f_44);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_166.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_3);
		}
		else
		{
			func_349(uParam0);
		}
	}
}

void func_349(var uParam0)
{
	uParam0->f_732.f_5 = 0;
}

var func_350(var uParam0)
{
	return uParam0->f_826;
}

int func_351(var uParam0)
{
	if (unk_0xA43CD45F18522E3F())
	{
		return -1;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return -1;
	}
	if (unk_0x875A214D5EBCA509(2, 188) || func_352(uParam0, 0, 0))
	{
		return 0;
	}
	else if (unk_0x875A214D5EBCA509(2, 187) || func_352(uParam0, 0, 1))
	{
		return 1;
	}
	else if (unk_0x875A214D5EBCA509(2, 189) || func_352(uParam0, 0, 2))
	{
		return 2;
	}
	else if (unk_0x875A214D5EBCA509(2, 190) || func_352(uParam0, 0, 3))
	{
		return 3;
	}
	else if (unk_0x2645430E708CBFAC(2, 201))
	{
		return 4;
	}
	else if (unk_0x2645430E708CBFAC(2, 202))
	{
		return 5;
	}
	else if (unk_0x2645430E708CBFAC(2, 203))
	{
		return 6;
	}
	else if (unk_0x2645430E708CBFAC(2, 204))
	{
		return 7;
	}
	else if (unk_0x875A214D5EBCA509(2, 205))
	{
		return 8;
	}
	else if (unk_0x875A214D5EBCA509(2, 206))
	{
		return 9;
	}
	else if (unk_0x875A214D5EBCA509(2, 207))
	{
		return 10;
	}
	else if (unk_0x875A214D5EBCA509(2, 208))
	{
		return 11;
	}
	else if (unk_0x875A214D5EBCA509(2, 209))
	{
		return 12;
	}
	else if (unk_0x875A214D5EBCA509(2, 210))
	{
		return 13;
	}
	else if (unk_0x875A214D5EBCA509(2, 199))
	{
		return 14;
	}
	else if (unk_0x875A214D5EBCA509(2, 217))
	{
		return 15;
	}
	return -1;
}

int func_352(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = system::floor((unk_0xB504E1B50AA21FC5(2, 218) * 127f));
			iVar2 = system::floor((unk_0xB504E1B50AA21FC5(2, 219) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_1), bParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = system::floor((unk_0xB504E1B50AA21FC5(2, 220) * 127f));
			iVar2 = system::floor((unk_0xB504E1B50AA21FC5(2, 221) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_826.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_353(var uParam0)
{
	bool bVar0;
	
	if (uParam0->f_1094 == -1)
	{
		return;
	}
	if (func_133(uParam0, uParam0->f_1094, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1094)
			{
				case 1:
					Global_1972760[unk_0x383461852896D73D() /*27*/].f_21 = 1;
					break;
				
				case 2:
					if (Local_166.f_72.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_166.f_72.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1094)
			{
				case 2:
					if (Local_166.f_72.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_166.f_72.f_9);
					}
					break;
				
				default:
					break;
				}
		}
		uParam0->f_1094 = -1;
		uParam0->f_1095 = -1;
		func_84(uParam0, 1);
	}
}

void func_354(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (uParam0->f_747.f_32 != uParam0->f_747.f_33)
	{
		func_374(uParam0, uParam0->f_747.f_33);
		uParam0->f_747.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var1 = { 0f, 0f, 0f };
		uParam0->f_747.f_44 = { func_373(uParam0) };
		uParam0->f_747.f_47 = { func_372(uParam0) };
		uParam0->f_747.f_1.f_17 = func_371(uParam0);
		uParam0->f_747.f_38 = { unk_0xA452B06E281A9014(uParam0->f_747.f_1) };
		uParam0->f_747.f_41 = { unk_0x9DDBEF363FADFA4C(uParam0->f_747.f_1, 2) };
		uParam0->f_747.f_1.f_18 = unk_0x4A1D1AB55229AAF0(uParam0->f_747.f_1);
		uParam0->f_747.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_747.f_63 = 750;
		if (func_370(uParam0->f_747.f_33))
		{
			unk_0x2A09425009DAD0F5(uParam0->f_747.f_1, func_369(uParam0->f_747.f_33), func_368(uParam0->f_747.f_33));
		}
		unk_0xA3774254665BAA82(uParam0->f_747.f_1, uParam0->f_747.f_38, uParam0->f_747.f_41, uParam0->f_747.f_1.f_18, 0, 1, 1, 2);
		unk_0xA3774254665BAA82(uParam0->f_747.f_1, uParam0->f_747.f_44, uParam0->f_747.f_47, uParam0->f_747.f_1.f_17, uParam0->f_747.f_63, 1, 1, 2);
	}
	if (uParam0->f_747.f_62)
	{
		uParam0->f_747.f_1.f_18 = func_371(uParam0);
		if (!unk_0x323C4A67159DAD02(uParam0->f_747.f_1))
		{
			uParam0->f_747.f_38 = { uParam0->f_747.f_44 };
			uParam0->f_747.f_41 = { uParam0->f_747.f_47 };
			uParam0->f_747.f_1.f_1 = { uParam0->f_747.f_44 };
			uParam0->f_747.f_1.f_4 = { uParam0->f_747.f_47 };
			if (func_370(uParam0->f_747.f_33))
			{
				unk_0x2A09425009DAD0F5(uParam0->f_747.f_1, func_369(uParam0->f_747.f_33), func_368(uParam0->f_747.f_33));
			}
			uParam0->f_747.f_62 = 0;
			func_363(uParam0, uParam0->f_747.f_1.f_18);
			func_359(&(uParam0->f_747.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_359(&(uParam0->f_747.f_1), func_358(uParam0->f_747.f_33), func_357(uParam0->f_747.f_33), func_356(uParam0->f_747.f_33), 0, 1045220557, 0, 1065353216, func_355(uParam0->f_747.f_33));
	}
}

int func_355(var uParam0)
{
	if (Local_166.f_30.f_3.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_3.f_2);
		return StackVal;
	}
	return 1;
}

int func_356(var uParam0)
{
	if (Local_166.f_30.f_3.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_3.f_1);
		return StackVal;
	}
	return 0;
}

int func_357(var uParam0)
{
	if (Local_166.f_30.f_10 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_10);
		return StackVal;
	}
	return 1;
}

int func_358(var uParam0)
{
	if (Local_166.f_30.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_3);
		return StackVal;
	}
	return 1;
}

void func_359(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0xE0EEB603997F273F(2);
	func_362(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x660D0B8C8AE85314())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		fVar1 = unk_0x4AAE7492E7D81A57(2, 239);
		fVar2 = unk_0x4AAE7492E7D81A57(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -system::round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -system::round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = system::round(((unk_0x4AAE7492E7D81A57(2, 290) * fParam5) * 127f));
			iVar0[3] = system::round(((unk_0x4AAE7492E7D81A57(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_361((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_361((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x1DD05E817C89C737())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xAE231F549813BBDF(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(system::to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(system::to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * system::timestep());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xAE231F549813BBDF(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.f_0;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_360(((((Var6.f_0 - uParam0->f_14) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_360(((((Var6.f_1 - uParam0->f_14.f_1) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_360(((((Var6.f_2 - uParam0->f_14.f_2) * 0,05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_360(uParam0->f_14, system::to_float(-uParam0->f_21), system::to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_360(uParam0->f_14.f_1, system::to_float(-uParam0->f_22), system::to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_360(uParam0->f_14.f_2, system::to_float(-uParam0->f_20), system::to_float(uParam0->f_20));
	}
	if (unk_0xAE231F549813BBDF(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xAE231F549813BBDF(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xDEE3EFEA31A1F555(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xDEE3EFEA31A1F555(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_360(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_360(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x6C29A57AC29D7033(2, 207);
			iVar0[3] = unk_0x6C29A57AC29D7033(2, 208);
			if (bParam3)
			{
				if (system::to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (system::to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0,06f) * fVar5));
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			if (unk_0x8DE2438443E6A145(*uParam0))
			{
				unk_0x9D0B099EEAD74270();
			}
		}
	}
}

float func_360(float fParam0, float fParam1, float fParam2)
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

int func_361(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_362(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = system::floor((unk_0x4AAE7492E7D81A57(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x4AAE7492E7D81A57(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x4AAE7492E7D81A57(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x4AAE7492E7D81A57(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x5CCBA474776568B7(2, 218))
		{
			*uParam0 = system::floor((unk_0xC3B77DE416935168(2, 218) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 219))
		{
			*uParam1 = system::floor((unk_0xC3B77DE416935168(2, 219) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 220))
		{
			*uParam2 = system::floor((unk_0xC3B77DE416935168(2, 220) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 221))
		{
			*uParam3 = system::floor((unk_0xC3B77DE416935168(2, 221) * 127f));
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (bParam5)
		{
			if (unk_0x660D0B8C8AE85314())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xDD087A873D2E08F0())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_363(var uParam0, var uParam1)
{
	uParam0->f_747.f_1.f_7 = uParam1;
	uParam0->f_747.f_1.f_20 = func_367(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_21 = func_366(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_22 = func_365(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_19 = func_364(uParam0->f_747.f_33);
}

float func_364(var uParam0)
{
	if (Local_166.f_30.f_3.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_3.f_3);
		return StackVal;
	}
	return 10f;
}

int func_365(var uParam0)
{
	if (Local_166.f_30.f_10.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_10.f_3);
		return StackVal;
	}
	return 1;
}

int func_366(var uParam0)
{
	if (Local_166.f_30.f_10.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_10.f_2);
		return StackVal;
	}
	return 10;
}

int func_367(var uParam0)
{
	if (Local_166.f_30.f_10.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_10.f_1);
		return StackVal;
	}
	return 15;
}

float func_368(var uParam0)
{
	if (Local_166.f_30.f_7.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_369(var uParam0)
{
	if (Local_166.f_30.f_7.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_370(var uParam0)
{
	if (Local_166.f_30.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_30.f_7);
		return StackVal;
	}
	return 1;
}

var func_371(var uParam0)
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_166.f_30.f_2);
	return StackVal;
}

Vector3 func_372(var uParam0)
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_166.f_30.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_373(var uParam0)
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_166.f_30);
	return StackVal, StackVal, StackVal;
}

void func_374(var uParam0, var uParam1)
{
	uParam0->f_747.f_32 = uParam1;
}

void func_375(var uParam0)
{
	int iVar0;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	iVar0 = uParam0->f_1092;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_166.f_67 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_166.f_67);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!func_377(&(Global_1972760[iVar0 /*27*/].f_18)))
	{
		if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_67.f_1);
			if (StackVal)
			{
				func_44(&(Global_1972760[iVar0 /*27*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_166.f_67.f_2);
		uParam0->f_831.f_245 = (StackVal - func_376(&(Global_1972760[iVar0 /*27*/].f_18), 0, 0));
		if (uParam0->f_831.f_245 > 0)
		{
			if (uParam0->f_831.f_245 < (uParam0->f_831.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_166.f_67.f_3);
				uParam0->f_831.f_246 = uParam0->f_831.f_245;
			}
		}
		else
		{
			uParam0->f_831.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_67.f_4);
		}
	}
}

int func_376(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

bool func_377(var uParam0)
{
	return uParam0->f_1;
}

void func_378(var uParam0)
{
	if (Local_166.f_44.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_44.f_1);
	}
	else if (unk_0xAE231F549813BBDF(2))
	{
		unk_0x4CC1CF98851922CE(2, 202);
	}
}

bool func_379(var uParam0)
{
	return uParam0->f_732.f_5;
}

void func_380(var uParam0)
{
	if (func_479(uParam0))
	{
		if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_716))
		{
			unk_0xA66AC5949E305457(1);
			switch (func_478(uParam0))
			{
				case 0:
					break;
				
				case 2:
					unk_0x6CDCD138191E7A06(uParam0->f_716, 1);
					break;
				
				case 1:
					unk_0x32323864D97FCFF0(uParam0->f_716, 1);
					break;
			}
			if (func_477(uParam0))
			{
				unk_0xA91A4C18A2DB01BD(uParam0->f_716, 255, 255, 255, 255, 0);
				if (uParam0->f_709)
				{
				}
			}
			else
			{
				unk_0x61055542D9D877AE(uParam0->f_700);
				unk_0x6D16B99FEB0AFFF1(uParam0->f_716, func_476(uParam0), func_475(uParam0), func_474(uParam0), func_473(uParam0), 255, 255, 255, 255, 0);
				if (uParam0->f_709)
				{
				}
				unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
			}
			unk_0xA66AC5949E305457(0);
			uParam0->f_714 = 1;
		}
	}
	else if (func_472(uParam0))
	{
		if (Local_166.f_7.f_4.f_8 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_7.f_4.f_8);
		}
	}
	if (func_471(uParam0))
	{
		if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_717))
		{
			unk_0xA66AC5949E305457(1);
			unk_0x61055542D9D877AE(uParam0->f_701);
			switch (func_470(uParam0))
			{
				case 0:
					break;
				
				case 2:
					unk_0x6CDCD138191E7A06(uParam0->f_717, 1);
					break;
				
				case 1:
					unk_0x32323864D97FCFF0(uParam0->f_717, 1);
					break;
			}
			if (func_469(uParam0))
			{
				unk_0xA91A4C18A2DB01BD(uParam0->f_717, 255, 255, 255, 255, 0);
			}
			else
			{
				unk_0x6D16B99FEB0AFFF1(uParam0->f_717, func_468(uParam0), func_467(uParam0), func_466(uParam0), func_465(uParam0), 255, 255, 255, 255, 0);
			}
			unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
			unk_0xA66AC5949E305457(0);
			uParam0->f_715 = 1;
			if (uParam0->f_709)
			{
			}
		}
	}
	else if (func_464(uParam0))
	{
		if (Local_166.f_7.f_13.f_8 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_7.f_13.f_8);
		}
	}
	if (func_463(uParam0))
	{
		func_381(uParam0);
	}
}

void func_381(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_462() };
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (Local_181.f_6 != -1)
	{
		func_460(uParam0);
		return;
	}
	else if (iLocal_349)
	{
		func_459(uParam0, 1);
		iLocal_349 = 0;
	}
	if (!func_458(uParam0))
	{
		func_451(&(uParam0->f_718), &Var0, uParam0, 0);
		return;
	}
	if (!unk_0x485ADB2D2728D748() || unk_0x8608526719A575EE() == 10)
	{
		func_450(uParam0, 0,5f);
	}
	else
	{
		func_450(uParam0, 0,7f);
	}
	func_448(uParam0);
	func_382(uParam0);
	func_451(&(uParam0->f_718), &Var0, uParam0, uParam0->f_710);
	func_459(uParam0, 0);
}

void func_382(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = uParam0->f_1092 == unk_0x259BE71D8A81D4FA();
	if (func_377(&(Global_1972760[uParam0->f_1092 /*27*/].f_18)))
	{
		func_447("", "HEIST_IB_CONT", uParam0->f_831.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_812;
	bLocal_148 = true;
	if (iLocal_159 != 0)
	{
		if (((func_446(iLocal_159) || iLocal_159 == -2) || iLocal_159 == -3) || iLocal_159 == -4)
		{
			func_445(2, 201, "CH_INSTR_SEL", uParam0, 1, 365);
		}
		else if (iVar1 == 1002)
		{
			func_445(2, 201, "CH_INSTR_LM", uParam0, 1, 365);
		}
		else
		{
			func_445(2, 201, "CH_INSTR_SEL", uParam0, 1, 365);
		}
		func_445(2, 202, "CH_INSTR_BACK", uParam0, 1, 365);
		if ((iLocal_159 != -2 && iLocal_159 != -3) && iLocal_159 != -4)
		{
			func_444(2, 0, "HEIST_IB_NAV", uParam0);
		}
		return;
	}
	if (func_443(uParam0, iVar1))
	{
		func_445(2, 201, "H4P_INSTR_EQU", uParam0, 1, 365);
	}
	else if (func_442(uParam0, iVar1))
	{
		func_445(2, 201, "H4P_INSTR_REM", uParam0, 1, 365);
	}
	else if (func_441(uParam0, iVar1))
	{
		func_445(2, 201, "CH_INSTR_PREV", uParam0, 1, 365);
	}
	else if (func_440(uParam0, iVar1))
	{
		func_445(2, 201, "CH_INSTR_SEL", uParam0, 1, 365);
	}
	else if (bVar0 && func_439(uParam0, iVar1))
	{
		func_445(2, 201, "CH_INSTR_LM", uParam0, 1, 365);
	}
	else if (bVar0 && func_436(uParam0, iVar1))
	{
		func_445(2, 201, "H4P_INSTR_PUR", uParam0, 1, 365);
	}
	else if (!bVar0 && func_435(uParam0, iVar1))
	{
		func_445(2, 201, "HEIST_IB_RDY", uParam0, 1, 365);
	}
	else if (!bVar0 && func_433(uParam0, iVar1))
	{
		func_445(2, 201, "HEIST_IB_UNRDY", uParam0, 1, 365);
	}
	else
	{
		bLocal_148 = false;
	}
	if (func_432(iVar1))
	{
		func_445(2, 202, "CH_INSTR_QUIT", uParam0, 1, 365);
	}
	else
	{
		func_445(2, 202, "CH_INSTR_BACK", uParam0, 1, 365);
	}
	if (func_431(uParam0))
	{
		func_445(2, 203, "HP_MAP", uParam0, 1, 365);
	}
	if (func_386(uParam0, iVar1))
	{
		func_445(2, 204, "CH_INSTR_INFO", uParam0, 1, 365);
	}
	if (func_19(uParam0->f_1092, 0))
	{
		func_444(2, 14, "H4P_INSTR_SCR", uParam0);
	}
	if (func_19(uParam0->f_1092, 0) || func_385(uParam0->f_1092))
	{
		func_444(2, 0, "HEIST_IB_NAV", uParam0);
	}
	if (func_384(iVar1))
	{
		if ((unk_0x0BA1A956D36B210F() || func_65()) || unk_0x761778199FE1211C())
		{
			func_445(2, 217, "HEIST_IB_PSN", uParam0, 1, 365);
		}
		else if (unk_0x1226C55CA7D2269A() || func_66())
		{
			func_383(unk_0xE934399D6F2C3AC5(2, 217, 1), "HEIST_IB_XBL", uParam0, 0);
		}
		else
		{
			func_383(unk_0xE934399D6F2C3AC5(2, 217, 1), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

void func_383(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		
		default:
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_386(var uParam0, int iParam1)
{
	if (unk_0xD6F9DEE4765092A9(func_387(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_387(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I";
		
		case 2:
			return "H4P_INT0_LOOT_I";
		
		case 3:
			return "H4P_INT0_ENTR_I";
		
		case 4:
			return "H4P_INT0_EXIT_I";
		
		case 5:
			return "H4P_INT0_COMP_I";
		
		case 6:
			return "H4P_INT0_ITEM_I";
		
		case 7:
			return "H4P_INT2_CASH_I";
		
		case 8:
			return "H4P_INT2_WEED_I";
		
		case 9:
			return "H4P_INT2_COKE_I";
		
		case 10:
			return "H4P_INT2_GOLD_I";
		
		case 11:
			return "H4P_INT2_PAIN_I";
		
		case 12:
			return "H4P_INT3_AIRS_I";
		
		case 13:
			return "H4P_INT3_PARA_I";
		
		case 14:
			return "H4P_INT3_BEAC_I";
		
		case 15:
			return "H4P_INT3_MDCK_I";
		
		case 16:
			return "H4P_INT3_NDCK_I";
		
		case 17:
			return "H4P_INT3_NDRP_I";
		
		case 18:
			return "H4P_INT3_SDRP_I";
		
		case 19:
			return "H4P_INT3_DTUN_I";
		
		case 20:
			return "H4P_INT4_AIRS_I";
		
		case 21:
			return "H4P_INT4_MDCK_I";
		
		case 22:
			return "H4P_INT4_NDCK_I";
		
		case 23:
			return "H4P_INT4_SUBM_I";
		
		case 30:
			return func_429(func_430(uParam0->f_1092), "H4P_INT6_PWRS_I", "");
		
		case 31:
			return func_429(func_428(uParam0->f_1092), "H4P_INT6_CTOW_I", "");
		
		case 32:
			return func_429(func_422(uParam0->f_1092), "H4P_INT6_BCUT_I", "");
		
		case 33:
			return func_429(func_416(uParam0->f_1092), "H4P_INT6_GRAP_I", "");
		
		case 34:
			return func_429(func_410(uParam0->f_1092), "H4P_INT6_UNIF_I", "");
		
		case 35:
			return func_429(func_409(uParam0->f_1092), "H4P_INT6_TROJ_I", "");
		
		case 24:
			return "H4P_INT5_MGAT_I";
		
		case 25:
			return "H4P_INT5_NWAL_I";
		
		case 26:
			return "H4P_INT5_NSGT_I";
		
		case 27:
			return "H4P_INT5_SWAL_I";
		
		case 28:
			return "H4P_INT5_SSGT_I";
		
		case 29:
			return "H4P_INT5_DTUN_I";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "H4P_PRP1_SUBM_I";
		
		case 41:
			return "";
		
		case 42:
			return "H4P_PRP1_SPLA_I";
		
		case 43:
			return "";
		
		case 44:
			return "H4P_PRP1_PBOA_I";
		
		case 45:
			return "H4P_PRP1_SBOA_I";
		
		case 46:
			return "H4P_PRP1_BOM1_I";
		
		case 47:
			return "H4P_PRP1_BOM2_I";
		
		case 48:
			return "H4P_PRP1_HEL1_I";
		
		case 49:
			return "H4P_PRP1_HEL2_I";
		
		case 50:
			return "H4P_PRP2_DEMC_I";
		
		case 53:
			return "H4P_PRP2_ATOR_I";
		
		case 51:
			return func_429(func_408(uParam0->f_1092) == 11, "H4P_PRP2_TAR1_I", "H4P_PRP2_TAR2_I");
		
		case 52:
			return "H4P_PRP2_FING_I";
		
		case 54:
			return "H4P_PRP3_SHOT_I";
		
		case 55:
			return "H4P_PRP3_RIFL_I";
		
		case 56:
			return "H4P_PRP3_SNIP_I";
		
		case 57:
			return func_429(func_392(uParam0, iParam1), "H4P_PRP3_M2SM_2", "H4P_PRP3_M2SM_I");
		
		case 58:
			return func_429(func_392(uParam0, iParam1), "H4P_PRP3_M2RI_2", "H4P_PRP3_M2RI_I");
		
		case 59:
			return "H4P_PRP3_SUPP_I";
		
		case 60:
			return "H4P_PRP4_WEAP_I";
		
		case 61:
			return "H4P_PRP4_ARMR_I";
		
		case 62:
			return "H4P_PRP4_BRES_I";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "H4P_FIN1_SUBM_I";
		
		case 72:
			return "H4P_FIN1_BOMB_I";
		
		case 73:
			return "H4P_FIN1_SMPL_I";
		
		case 74:
			return "H4P_FIN1_SHEL_I";
		
		case 75:
			return "H4P_FIN1_PBOA_I";
		
		case 76:
			return "H4P_FIN1_SBOA_I";
		
		case 77:
			return "H4P_FIN2_AIRS_I";
		
		case 78:
			return "H4P_FIN2_PARA_I";
		
		case 79:
			return "H4P_FIN2_WBEA_I";
		
		case 80:
			return "H4P_FIN2_MDOC_I";
		
		case 81:
			return "H4P_FIN2_NDOC_I";
		
		case 82:
			return "H4P_FIN2_NDRP_I";
		
		case 83:
			return "H4P_FIN2_SDRP_I";
		
		case 84:
			return "H4P_FIN2_DTUN_I";
		
		case 85:
			return "H4P_FIN3_MGAT_I";
		
		case 86:
			return "H4P_FIN3_DTUN_I";
		
		case 87:
			return "H4P_FIN4_AIRS_I";
		
		case 88:
			return "H4P_FIN4_MDOC_I";
		
		case 89:
			return "H4P_FIN4_NDOC_I";
		
		case 90:
			return "H4P_FIN4_SUBM_I";
		
		case 91:
			return "H4P_FIN5_TDAY_I";
		
		case 92:
			return "H4P_FIN5_TNGT_I";
		
		case 93:
			return "H4P_FIN6_SHOT_I";
		
		case 94:
			return "H4P_FIN6_RIFL_I";
		
		case 95:
			return "H4P_FIN6_SNIP_I";
		
		case 96:
			return "H4P_FIN6_MKSM_I";
		
		case 97:
			return "H4P_FIN6_MKAR_I";
		
		case 98:
			return "H4P_FIN6_SUPP_I";
		
		case 99:
			return func_429(func_388(uParam0, iParam1), "H4P_FIN7_AIRS_I", "H4P_FIN7_AIRS_2");
		
		case 100:
			return "H4P_FIN7_WDRP_I";
		
		case 101:
			return "H4P_FIN7_SNIP_I";
		
		case 102:
			return "H4P_FIN7_HELI_I";
		
		case 103:
			return func_429(func_388(uParam0, iParam1), "H4P_FIN7_SPYD_I", "H4P_FIN7_SPYD_2");
		
		case 104:
			return "H4P_FIN7_WEAP_I";
		
		default:
	}
	return "";
}

int func_388(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return func_389(uParam0->f_1092, 0);
		
		case 103:
			return func_389(uParam0->f_1092, 3);
		
		default:
	}
	return 1;
}

int func_389(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_267(iParam0) || !func_391(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_390(iParam0) || !BitTest(Global_1969212[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_390(int iParam0)
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_178423.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_391, 31);
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_297.f_5;
}

int func_392(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return !func_407(uParam0->f_1092, 0, 0, 0);
		
		case 8:
			return !func_407(uParam0->f_1092, 1, 0, 0);
		
		case 9:
			return !func_407(uParam0->f_1092, 2, 0, 0);
		
		case 10:
			return !func_407(uParam0->f_1092, 3, 0, 0);
		
		case 11:
			return !func_407(uParam0->f_1092, 4, 0, 0);
		
		case 12:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 13:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 14:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 15:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 16:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 17:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 18:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 19:
			return !func_405(uParam0->f_1092, func_406(bParam1));
		
		case 20:
			return !func_403(uParam0->f_1092, func_404(bParam1));
		
		case 21:
			return !func_403(uParam0->f_1092, func_404(bParam1));
		
		case 22:
			return !func_403(uParam0->f_1092, func_404(bParam1));
		
		case 23:
			return !func_403(uParam0->f_1092, func_404(bParam1));
		
		case 30:
			return !func_430(uParam0->f_1092);
		
		case 31:
			return !func_428(uParam0->f_1092);
		
		case 32:
			return !func_422(uParam0->f_1092);
		
		case 33:
			return !func_416(uParam0->f_1092);
		
		case 34:
			return !func_410(uParam0->f_1092);
		
		case 35:
			return !func_409(uParam0->f_1092);
		
		case 24:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 25:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 26:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 27:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 28:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 29:
			return !func_401(uParam0->f_1092, func_402(bParam1));
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
		case 42:
			return 0;
		
		case 43:
			if (!func_405(uParam0->f_1092, 5) && !func_405(uParam0->f_1092, 6))
			{
				return 1;
			}
			return 0;
		
		case 44:
			return !(func_405(uParam0->f_1092, 3) || func_405(uParam0->f_1092, 4));
		
		case 45:
			return !(func_405(uParam0->f_1092, 3) || func_405(uParam0->f_1092, 4));
		
		case 46:
			return 0;
		
		case 47:
			if (func_19(uParam0->f_1092, 6))
			{
				return 0;
			}
			if (func_19(uParam0->f_1092, 1))
			{
				return 0;
			}
			return 1;
		
		case 48:
			return !(func_405(uParam0->f_1092, 5) || func_405(uParam0->f_1092, 6));
		
		case 49:
			if (!func_405(uParam0->f_1092, 5) && !func_405(uParam0->f_1092, 6))
			{
				return 1;
			}
			if (func_19(uParam0->f_1092, 6))
			{
				return 0;
			}
			if (func_19(uParam0->f_1092, 2))
			{
				return 0;
			}
			return 1;
		
		case 50:
			return 0;
		
		case 53:
			return !func_405(uParam0->f_1092, 7);
		
		case 51:
			return 0;
		
		case 52:
			return 0;
		
		case 54:
			return (func_19(uParam0->f_1092, 13) && func_400(uParam0->f_1092) != 1);
		
		case 55:
			return (func_19(uParam0->f_1092, 13) && func_400(uParam0->f_1092) != 2);
		
		case 56:
			return (func_19(uParam0->f_1092, 13) && func_400(uParam0->f_1092) != 3);
		
		case 57:
			if (func_19(uParam0->f_1092, 13) && func_400(uParam0->f_1092) != 4)
			{
				return 1;
			}
			if (func_399(uParam0->f_1092) && func_395(uParam0->f_1092, func_285(uParam0->f_1092)))
			{
				return 0;
			}
			if (func_394(uParam0->f_1092) && func_393(uParam0->f_1092))
			{
				return 0;
			}
			return 1;
		
		case 58:
			if (func_19(uParam0->f_1092, 13) && func_400(uParam0->f_1092) != 5)
			{
				return 1;
			}
			if (func_399(uParam0->f_1092) && func_395(uParam0->f_1092, func_285(uParam0->f_1092)))
			{
				return 0;
			}
			if (func_394(uParam0->f_1092) && func_393(uParam0->f_1092))
			{
				return 0;
			}
			return 1;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 0;
		
		case 99:
			return !func_388(uParam0, bParam1);
		
		case 103:
			return !func_388(uParam0, bParam1);
		
		default:
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_377.f_2, 13);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (Global_1845281[iParam0 /*883*/].f_268.f_377 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_398(iParam0, iParam1))
	{
		iVar0 = func_396(iParam0, iParam1);
		if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_4 > 0 && Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_397(iParam1) && iParam0 != func_25())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_397(int iParam0)
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_398(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_397(iParam1) && iParam0 != func_25())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_399(int iParam0)
{
	return func_285(iParam0) != 0;
}

int func_400(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

int func_402(bool bParam0)
{
	switch (bParam0)
	{
		case 24:
			return 0;
		
		case 25:
			return 1;
		
		case 26:
			return 2;
		
		case 27:
			return 3;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		default:
	}
	return 6;
}

int func_403(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_1, 0);
			
			case 1:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_1, 3);
			
			case 2:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_1, 4);
			
			case 3:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_1, 2);
			}
		
		default:
	}
	return 0;
}

int func_404(bool bParam0)
{
	switch (bParam0)
	{
		case 20:
		case 87:
			return 0;
		
		case 21:
		case 88:
			return 1;
		
		case 22:
		case 89:
			return 2;
		
		case 23:
		case 90:
			return 3;
		
		default:
	}
	return 4;
}

int func_405(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_406(bool bParam0)
{
	switch (bParam0)
	{
		case 12:
		case 77:
			return 0;
		
		case 13:
		case 78:
			return 1;
		
		case 14:
		case 79:
			return 2;
		
		case 15:
		case 80:
			return 3;
		
		case 16:
		case 81:
			return 4;
		
		case 17:
		case 82:
			return 5;
		
		case 18:
		case 83:
			return 6;
		
		case 19:
		case 84:
			return 7;
		
		default:
	}
	return 8;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != -1)
	{
		switch (Global_1973625[iParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			
			default:
		}
		return 10;
	}
	return -1;
}

int func_409(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_411(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_411(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_415(iParam0);
		
		case 1:
			return func_414(iParam0);
		
		case 2:
			return func_413(iParam0);
		
		case 3:
			return func_412(iParam0);
		
		default:
	}
	return 0;
}

int func_412(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_413(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_416(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_417(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_421(iParam0);
		
		case 1:
			return func_420(iParam0);
		
		case 2:
			return func_419(iParam0);
		
		case 3:
			return func_418(iParam0);
		
		default:
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_421(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_422(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_423(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_427(iParam0);
		
		case 1:
			return func_426(iParam0);
		
		case 2:
			return func_425(iParam0);
		
		case 3:
			return func_424(iParam0);
		
		default:
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

char* func_429(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_430(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

int func_431(var uParam0)
{
	if (!func_19(uParam0->f_1092, 0) && !func_385(uParam0->f_1092))
	{
		return 0;
	}
	return 1;
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_434(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
			{
				return uParam0->f_831.f_67[func_434(uParam0, unk_0x259BE71D8A81D4FA())] == 1;
			}
			break;
	}
	return 0;
}

int func_434(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_831.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_435(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_434(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
			{
				return uParam0->f_831.f_67[func_434(uParam0, unk_0x259BE71D8A81D4FA())] == 0;
			}
			break;
	}
	return 0;
}

int func_436(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return !func_438(uParam0->f_1092, 0);
		
		case 100:
			return !func_438(uParam0->f_1092, 4);
		
		case 101:
			return !func_438(uParam0->f_1092, 1);
		
		case 102:
			return !func_438(uParam0->f_1092, 2);
		
		case 103:
			return !func_438(uParam0->f_1092, 3);
		
		case 104:
			return !func_438(uParam0->f_1092, 5);
		
		case 59:
			if (unk_0x834C960822A4683F())
			{
				return 0;
			}
			return !func_437(uParam0->f_1092);
		
		default:
	}
	return 0;
}

int func_437(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5, 12);
	}
	return 0;
}

int func_438(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_45, bParam1);
	}
	return 0;
}

int func_439(var uParam0, int iParam1)
{
	if (func_392(uParam0, iParam1))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 40:
			return !func_19(uParam0->f_1092, 7);
		
		case 42:
			return !func_19(uParam0->f_1092, 5);
		
		case 44:
			return !func_19(uParam0->f_1092, 3);
		
		case 45:
			return !func_19(uParam0->f_1092, 4);
		
		case 46:
			return !func_19(uParam0->f_1092, 1);
		
		case 48:
			return !func_19(uParam0->f_1092, 2);
		
		case 47:
			return !func_19(uParam0->f_1092, 6);
		
		case 49:
			return !func_19(uParam0->f_1092, 6);
		
		case 50:
			return !func_19(uParam0->f_1092, 8);
		
		case 53:
			return !func_19(uParam0->f_1092, 9);
		
		case 51:
			return !func_19(uParam0->f_1092, 11);
		
		case 52:
			return !func_19(uParam0->f_1092, 12);
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_400(uParam0->f_1092) == 0 || !func_19(uParam0->f_1092, 13))
			{
				return 1;
			}
			break;
		
		case 60:
			return !func_19(uParam0->f_1092, 14);
		
		case 61:
			return !func_19(uParam0->f_1092, 15);
		
		case 62:
			return !func_19(uParam0->f_1092, 16);
	}
	return 0;
}

int func_440(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_392(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1092 != iLocal_165)
			{
				return 0;
			}
			return unk_0x834C960822A4683F();
		
		case 68:
		case 70:
			return unk_0x834C960822A4683F();
		
		case 91:
		case 92:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (unk_0x834C960822A4683F() && uParam0->f_1092 == iLocal_165);
		
		default:
	}
	return 0;
}

int func_441(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !unk_0x834C960822A4683F();
		
		default:
	}
	return 0;
}

int func_442(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((unk_0x834C960822A4683F() && uParam0->f_1092 == unk_0x259BE71D8A81D4FA()) && Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_443(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((unk_0x834C960822A4683F() && uParam0->f_1092 == unk_0x259BE71D8A81D4FA()) && !Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_444(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_445(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[bVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_691), bVar0);
		if (iParam5 < 365)
		{
		}
	}
	uParam3->f_693++;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

void func_447(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_686), iVar0);
	uParam3->f_694 = bVar0;
	uParam3->f_693++;
}

void func_448(var uParam0)
{
	func_449(uParam0);
	uParam0->f_692 = 1;
}

void func_449(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

void func_450(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

void func_451(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_457(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_456(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						uVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_455(unk_0xE934399D6F2C3AC5(uVar1, uVar2, 1));
						if (iVar3 < 365)
						{
							func_455(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_455(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_454(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_455(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_455(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_454(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(365);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_453(*uParam0, uParam1);
	}
	func_452();
}

void func_452()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_453(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_454(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_455(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_456(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_457(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

bool func_458(var uParam0)
{
	return uParam0->f_710;
}

void func_459(var uParam0, int iParam1)
{
	if (uParam0->f_710 != iParam1)
	{
	}
	uParam0->f_710 = iParam1;
}

void func_460(var uParam0)
{
	struct<9> Var0;
	int iVar1;
	
	if (!func_461(Local_181.f_6))
	{
		return;
	}
	Var0 = { func_462() };
	if (iLocal_349 && !uParam0->f_710)
	{
		func_451(&(uParam0->f_718), &Var0, uParam0, 0);
		return;
	}
	if (!unk_0x485ADB2D2728D748() || unk_0x8608526719A575EE() == 10)
	{
		func_450(uParam0, 0,5f);
	}
	else
	{
		func_450(uParam0, 0,7f);
	}
	func_448(uParam0);
	iVar1 = uParam0->f_812;
	if (func_441(uParam0, iVar1))
	{
		func_445(2, 201, "CH_INSTR_PREV", uParam0, 1, 365);
	}
	else if (func_440(uParam0, iVar1))
	{
		func_445(2, 201, "CH_INSTR_SEL", uParam0, 1, 365);
	}
	if (func_432(iVar1))
	{
		func_445(2, 202, "CH_INSTR_QUIT", uParam0, 1, 365);
	}
	else
	{
		func_445(2, 202, "CH_INSTR_BACK", uParam0, 1, 365);
	}
	if (func_431(uParam0))
	{
		func_445(2, 203, "HP_MAP", uParam0, 1, 365);
	}
	func_444(2, 0, "HEIST_IB_NAV", uParam0);
	func_451(&(uParam0->f_718), &Var0, uParam0, 1);
	if (!iLocal_349)
	{
		iLocal_349 = 1;
	}
	else if (uParam0->f_710)
	{
		uParam0->f_710 = 0;
	}
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		
		default:
	}
	return 0;
}

struct<9> func_462()
{
	struct<9> Var0;
	
	Var0.f_0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_463(var uParam0)
{
	return uParam0->f_707;
}

bool func_464(var uParam0)
{
	if (Local_166.f_7.f_13.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_7);
		return StackVal;
	}
	return uParam0->f_706;
}

float func_465(var uParam0)
{
	if (Local_166.f_7.f_13.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_6);
		return StackVal;
	}
	return 1f;
}

float func_466(var uParam0)
{
	if (Local_166.f_7.f_13.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_5);
		return StackVal;
	}
	return 1f;
}

float func_467(var uParam0)
{
	if (Local_166.f_7.f_13.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_4);
		return StackVal;
	}
	return 0,5f;
}

float func_468(var uParam0)
{
	if (Local_166.f_7.f_13.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_3);
		return StackVal;
	}
	return 0,5f;
}

int func_469(var uParam0)
{
	if (Local_166.f_7.f_13.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_2);
		return StackVal;
	}
	return 0;
}

int func_470(var uParam0)
{
	if (Local_166.f_7.f_13.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13.f_1);
		return StackVal;
	}
	return 2;
}

bool func_471(var uParam0)
{
	return uParam0->f_704;
}

bool func_472(var uParam0)
{
	if (Local_166.f_7.f_4.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_7);
		return StackVal;
	}
	return uParam0->f_705;
}

float func_473(var uParam0)
{
	if (Local_166.f_7.f_4.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_6);
		return StackVal;
	}
	return 1f;
}

float func_474(var uParam0)
{
	if (Local_166.f_7.f_4.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_5);
		return StackVal;
	}
	return 1f;
}

float func_475(var uParam0)
{
	if (Local_166.f_7.f_4.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_4);
		return StackVal;
	}
	return 0,5f;
}

float func_476(var uParam0)
{
	if (Local_166.f_7.f_4.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_3);
		return StackVal;
	}
	return 0,5f;
}

int func_477(var uParam0)
{
	if (Local_166.f_7.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_2);
		return StackVal;
	}
	return 0;
}

int func_478(var uParam0)
{
	if (Local_166.f_7.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4.f_1);
		return StackVal;
	}
	return 2;
}

bool func_479(var uParam0)
{
	return uParam0->f_703;
}

var func_480()
{
	return Global_2693440.f_6;
}

int func_481(var uParam0)
{
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_716))
	{
		return 0;
	}
	if (uParam0->f_717 != 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_717))
		{
			return 0;
		}
	}
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_718))
	{
		return 0;
	}
	return 1;
}

void func_482(var uParam0)
{
	int iVar0;
	
	uParam0->f_732.f_1 = uParam0->f_732;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
	unk_0x8744D2E3FC95740E(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
	iVar0 = uParam0->f_732;
	iVar0++;
	uParam0->f_732 = iVar0;
	if (uParam0->f_732 == 7)
	{
		uParam0->f_732 = 5;
	}
}

void func_483(var uParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_732.f_3), uParam0->f_732);
}

void func_484(var uParam0)
{
	if (Local_166.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_4);
	}
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			func_487(uParam0);
			break;
		
		case 3:
			uParam0->f_1104 = 0;
			uParam0->f_1105 = 0;
			break;
		
		case 4:
			func_485(uParam0);
			func_306(uParam0, 1);
			func_459(uParam0, 1);
			func_307(uParam0, 0, 0);
			break;
		
		case 5:
			break;
	}
}

void func_485(var uParam0)
{
	uParam0->f_747.f_35 = 0f;
	uParam0->f_747.f_35.f_1 = 0f;
	uParam0->f_747.f_35.f_2 = -180f;
	func_486(&(uParam0->f_747.f_1), func_373(uParam0), func_372(uParam0), func_371(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_370(uParam0->f_747.f_33))
	{
		unk_0x2A09425009DAD0F5(uParam0->f_747.f_1, func_369(uParam0->f_747.f_33), func_368(uParam0->f_747.f_33));
	}
	func_363(uParam0, func_371(uParam0));
	unk_0xD7C0EA10993D3214(1, 0);
	uParam0->f_747.f_38 = { func_373(uParam0) };
	uParam0->f_747.f_41 = { func_372(uParam0) };
	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
	{
		unk_0x10B228D2FDB7AF16(250);
	}
}

void func_486(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = uParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam3;
	uParam0->f_18 = uParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x3AAB5D3F3D4028CC(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0xCD1B743BDEC39145(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_487(var uParam0)
{
	uParam0->f_716 = unk_0x8DE4F68A9728925E(func_490(uParam0));
	if (!unk_0xD6F9DEE4765092A9(func_489(uParam0)))
	{
		uParam0->f_717 = unk_0x8DE4F68A9728925E(func_489(uParam0));
	}
	uParam0->f_718 = unk_0x8DE4F68A9728925E(func_488());
}

char* func_488()
{
	if (Local_166.f_7.f_22 != 0)
	{
		Call_Loc(Local_166.f_7.f_22);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_489(var uParam0)
{
	if (Local_166.f_7.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_13);
		return StackVal;
	}
	return "";
}

char* func_490(var uParam0)
{
	if (Local_166.f_7.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_4);
		return StackVal;
	}
	return "";
}

bool func_491(var uParam0)
{
	return BitTest(uParam0->f_732.f_3, uParam0->f_732);
}

void func_492(int iParam0)
{
	if (iLocal_177 != iParam0)
	{
	}
	iLocal_177 = iParam0;
}

void func_493()
{
	if (unk_0x834C960822A4683F() && func_494() == 25)
	{
		Global_1972760[unk_0x259BE71D8A81D4FA() /*27*/].f_20 = 1;
	}
}

int func_494()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193;
}

int func_495(var uParam0)
{
	if (!func_500(uParam0))
	{
		return 0;
	}
	if (!func_497(uParam0))
	{
		return 0;
	}
	if (!func_496())
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() != -1 && !Global_1972760[unk_0x259BE71D8A81D4FA() /*27*/].f_20)
	{
		Global_1972760[unk_0x259BE71D8A81D4FA() /*27*/].f_20 = 1;
	}
	return 1;
}

int func_496()
{
	return 1;
}

int func_497(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!BitTest(uParam0->f_1093, 3))
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7);
		uVar0 = StackVal;
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_1);
		iVar1 = StackVal;
		if (unk_0xD6F9DEE4765092A9(uVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_1093, 1))
		{
			if (!unk_0xC13AFEAFC3F7AD96(sVar0))
			{
				unk_0x106F99CDCDEED9A0(sVar0, 0);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), true);
			}
		}
		if (BitTest(uParam0->f_1093, 1) && !BitTest(uParam0->f_1093, 2))
		{
			if (!unk_0x4D05B3FECBCB8D97(iVar1))
			{
				unk_0xF1C26EB47E689774(iVar1);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 2);
			}
		}
		if (BitTest(uParam0->f_1093, 1) && BitTest(uParam0->f_1093, 2))
		{
			uParam0->f_700 = func_499(sVar0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 3);
		}
		else
		{
			if (!BitTest(uParam0->f_1093, 1))
			{
			}
			if (!BitTest(uParam0->f_1093, 2))
			{
			}
		}
	}
	if (!BitTest(uParam0->f_1093, 6))
	{
		if (func_498())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_7.f_2);
			sVar0 = StackVal;
			Stack.Push(uParam0);
			Call_Loc(Local_166.f_7.f_2.f_1);
			iVar1 = StackVal;
			if (unk_0xD6F9DEE4765092A9(sVar0))
			{
				return 0;
			}
			if (iVar1 == 0)
			{
				return 0;
			}
			if (!BitTest(uParam0->f_1093, 4))
			{
				if (!unk_0xC13AFEAFC3F7AD96(sVar0))
				{
					unk_0x106F99CDCDEED9A0(sVar0, 0);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 4);
				}
			}
			if (BitTest(uParam0->f_1093, 4) && !BitTest(uParam0->f_1093, 5))
			{
				if (!unk_0x4D05B3FECBCB8D97(iVar1))
				{
					unk_0xF1C26EB47E689774(iVar1);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 5);
				}
			}
			if (BitTest(uParam0->f_1093, 4) && BitTest(uParam0->f_1093, 5))
			{
				uParam0->f_701 = func_499(sVar0);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 6);
			}
			else
			{
				if (!BitTest(uParam0->f_1093, 4))
				{
				}
				if (!BitTest(uParam0->f_1093, 5))
				{
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 6);
		}
	}
	if (BitTest(uParam0->f_1093, 3) && BitTest(uParam0->f_1093, 6))
	{
		return 1;
	}
	return 0;
}

int func_498()
{
	if (Local_166.f_7.f_2 == 0 || Local_166.f_7.f_2.f_1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_499(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(uParam0))
	{
		return unk_0x08732C0099FA1813(sParam0);
	}
	return -1;
}

bool func_500(var uParam0)
{
	if (!BitTest(uParam0->f_1093, 0))
	{
		uParam0->f_1090 = func_1002();
		uParam0->f_738 = { func_1000() };
		uParam0->f_738.f_6 = { uParam0->f_738 };
		uParam0->f_747.f_33 = func_999();
		if (func_998() == 0)
		{
			uParam0->f_1081 = { 1561,161f, 384,824f, -48,6215f };
			uParam0->f_1081.f_3 = { -89,3034f, -0,1435f, 180f };
			uParam0->f_1081.f_6 = 69f;
		}
		else
		{
			uParam0->f_1081 = { 1561,16f, 384,8204f, -48,9135f };
			uParam0->f_1081.f_3 = { -89,5003f, -0,204f, 180f };
			uParam0->f_1081.f_6 = 69f;
		}
		if (!unk_0x834C960822A4683F())
		{
			uParam0->f_1092 = func_997();
		}
		Local_166.f_0 = 147849;
		Local_166.f_1 = 147805;
		Local_166.f_2 = 147786;
		Local_166.f_3 = 147767;
		Local_166.f_4 = 129064;
		Local_166.f_4.f_1 = 128979;
		Local_166.f_4.f_2 = 77719;
		Local_166.f_7 = 77707;
		Local_166.f_7.f_1 = 77694;
		Local_166.f_7.f_4 = 77682;
		Local_166.f_7.f_4.f_1 = 77673;
		Local_166.f_7.f_4.f_3 = 77660;
		Local_166.f_7.f_4.f_4 = 77647;
		Local_166.f_7.f_4.f_5 = 77634;
		Local_166.f_7.f_4.f_6 = 77621;
		Local_166.f_7.f_4.f_8 = 77494;
		Local_166.f_44 = 74567;
		Local_166.f_30 = 74499;
		Local_166.f_30.f_1 = 74431;
		Local_166.f_30.f_2 = 74401;
		Local_166.f_30.f_10 = 74392;
		Local_166.f_30.f_3 = 74383;
		Local_166.f_30.f_7.f_2 = 74370;
		Local_166.f_46 = 74306;
		Local_166.f_47 = 74173;
		Local_166.f_48 = 74083;
		Local_166.f_49.f_2 = 74070;
		Local_166.f_49 = 73993;
		Local_166.f_49.f_1 = 71096;
		Local_166.f_49.f_3 = 71081;
		Local_166.f_49.f_5 = 71069;
		Local_166.f_49.f_4 = 71029;
		Local_166.f_49.f_6 = 71013;
		Local_166.f_49.f_7 = 71001;
		Local_166.f_49.f_8 = 66870;
		Local_166.f_49.f_9 = 66858;
		Local_166.f_59 = 66846;
		Local_166.f_59.f_1 = 66138;
		Local_166.f_59.f_2 = 66126;
		Local_166.f_59.f_3 = 66117;
		Local_166.f_59.f_5 = 66105;
		Local_166.f_59.f_6 = 66060;
		Local_166.f_59.f_7 = 65954;
		Local_166.f_67 = 65945;
		Local_166.f_67.f_1 = 65807;
		Local_166.f_67.f_2 = 65795;
		Local_166.f_67.f_3 = 65781;
		Local_166.f_67.f_4 = 64961;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), false);
	}
	return BitTest(uParam0->f_1093, 0);
}

void func_501(var uParam0)
{
	func_503(uParam0);
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		func_502(uParam0);
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_22 = 1;
	}
}

void func_502(var uParam0)
{
	uParam0->f_831.f_67[0] = 1;
	Global_1972760[unk_0x383461852896D73D() /*27*/].f_7[0] = 1;
}

void func_503(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (uParam0->f_831.f_49)
	{
		case 1:
			if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
			{
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[0] = 100;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[1] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[2] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[3] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 100;
			uParam0->f_831.f_56[1] = 0;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
			{
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[0] = 85;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[1] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[2] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[3] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 85;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
			{
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[0] = 70;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[1] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[2] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[3] = 0;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 70;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
			{
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[0] = 55;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[1] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[2] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[3] = 15;
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 55;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 15;
			uParam0->f_831.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_831.f_51[iVar0] != unk_0x383461852896D73D())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2685444.f_6639 = uParam0->f_831.f_56[iVar1];
	Global_1941773.f_29 = Global_2685444.f_6639;
}

void func_504(var uParam0)
{
	uParam0->f_710 = 1;
}

int func_505()
{
	return 120000;
}

int func_506(var uParam0)
{
	if (((((uParam0->f_1092 == -1 || Global_1973625[uParam0->f_1092 /*53*/].f_5.f_39 == 0) || Global_1973625[uParam0->f_1092 /*53*/].f_5.f_40 == -1) || Global_1973625[uParam0->f_1092 /*53*/].f_5.f_41 == -1) || Global_1973625[uParam0->f_1092 /*53*/].f_5.f_42 == -1) || Global_1973625[uParam0->f_1092 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

int func_507(var uParam0)
{
	return 1;
}

void func_508(int iParam0)
{
	var uVar0;
	
	if (func_509(iParam0) != 14835)
	{
		uVar0 = func_9(func_509(iParam0), -1);
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, (iParam0 % 32));
		func_5(func_509(iParam0), uVar0, -1, 1);
	}
}

int func_509(int iParam0)
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9541;
		
		case 1:
			return 9542;
		
		default:
	}
	return 14835;
}

int func_510(int iParam0)
{
	if (func_509(iParam0) != 14835)
	{
		if (BitTest(func_9(func_509(iParam0), -1), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_511(var uParam0)
{
	return "HS4_PAVEL";
}

int func_512(var uParam0)
{
	return 2;
}

char* func_513(var uParam0)
{
	return "HS4PAAU";
}

char* func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		
		case 1:
			return "HS4PA_PS_2";
		
		case 2:
			return "HS4PA_PS_3";
		
		case 3:
			return "HS4PA_PS_49";
		
		case 4:
			return "HS4PA_PS_50";
		
		case 5:
			return "HS4PA_PS_4";
		
		case 6:
			return "HS4PA_PS_5";
		
		case 7:
			return "HS4PA_PS_6";
		
		case 8:
			return "HS4PA_PS_7";
		
		case 9:
			return "HS4PA_PS_8";
		
		case 10:
			return "HS4PA_PS_15";
		
		case 11:
			return "HS4PA_PS_9";
		
		case 12:
			return "HS4PA_PS_10";
		
		case 13:
			return "HS4PA_PS_11";
		
		case 14:
			return "HS4PA_PS_51";
		
		case 15:
			return "HS4PA_PS_12";
		
		case 16:
			return "HS4PA_PS_52";
		
		case 17:
			return "HS4PA_PS_13";
		
		case 18:
			return "HS4PA_PS_14";
		
		case 19:
			return "HS4PA_PS_16";
		
		case 20:
			return "HS4PA_PS_17";
		
		case 21:
			return "HS4PA_PS_18";
		
		case 22:
			return "HS4PA_PS_19";
		
		case 23:
			return "HS4PA_PS_20";
		
		case 24:
			return "HS4PA_PS_21";
		
		case 25:
			return "HS4PA_PS_22";
		
		case 26:
			return "HS4PA_PS_23";
		
		case 27:
			return "HS4PA_PS_24";
		
		case 28:
			return "HS4PA_PS_25";
		
		case 29:
			return "HS4PA_PS_53";
		
		case 30:
			return "HS4PA_PS_26";
		
		case 31:
			return "HS4PA_PS_27";
		
		case 32:
			return "HS4PA_PS_28";
		
		case 33:
			return "HS4PA_PS_29";
		
		case 34:
			return "HS4PA_PS_30";
		
		case 35:
			return "HS4PA_PS_31";
		
		case 36:
			return "HS4PA_PS_32";
		
		case 37:
			return "HS4PA_PS_33";
		
		case 38:
			return "HS4PA_PS_34";
		
		case 39:
			return "HS4PA_PS_35";
		
		case 40:
			return "HS4PA_PS_36";
		
		case 41:
			return "HS4PA_PS_37";
		
		case 42:
			return "HS4PA_PS_38";
		
		case 43:
			return "HS4PA_PS_39";
		
		case 44:
			return "HS4PA_PS_40";
		
		case 45:
			return "HS4PA_PS_41";
		
		case 46:
			return "HS4PA_PS_42";
		
		case 47:
			return "HS4PA_PS_43";
		
		case 48:
			return "HS4PA_PS_44";
		
		case 49:
			return "HS4PA_PS_45";
		
		case 50:
			return "HS4PA_PS_46";
		
		case 51:
			return "HS4PA_PS_47";
		
		case 52:
			return "HS4PA_PS_48";
		
		default:
	}
	return "";
}

var func_515()
{
	return Global_1579684;
}

char* func_516()
{
	return "HIP_SETUP_CASH";
}

int func_517()
{
	var uVar0;
	struct<10> Var1;
	
	if (func_532())
	{
		if (func_531())
		{
			func_519(joaat("service_spend_island_heist_replay"), Global_262145.f_29406, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			func_518(&Var1);
			Var1.f_7 = Global_262145.f_29406;
			unk_0xDCA98A271D0CC516(Global_262145.f_29406, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

void func_518(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

void func_519(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_531())
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
				func_520(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_520(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_520(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_520(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_520(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_531())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_8()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_527(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_526(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_521(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_521(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_522(iParam0);
	}
}

void func_522(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_531())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_525(iParam0))
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
		func_523(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_523(var uParam0)
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
	func_524(&(uParam0->f_14));
	func_524(&(uParam0->f_14.f_13));
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

void func_524(var uParam0)
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

int func_525(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_526(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_527(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_531())
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
				func_528(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_528(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_530(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_529();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_529()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_530(bool bParam0)
{
	var uVar0;
	
	if (func_17(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_531()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_532()
{
	var uVar0;
	var uVar1;
	
	if (unk_0x0189E96FAC892B16(&uVar0, &uVar1))
	{
		func_5(9571, uVar0, -1, 1);
		func_5(9572, uVar1, -1, 1);
		return 1;
	}
	return 0;
}

char* func_533()
{
	return "HIP_COOLDOWN";
}

var func_534()
{
	return BitTest(Global_1975322.f_10, 6);
}

struct<16> func_535()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HIP_WARN_SETUP", 64);
	if (BitTest(Global_1975322.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2", 64);
	}
	return Var0;
}

char* func_536()
{
	return "HIP_PROMPT_S";
}

var func_537()
{
	return Global_262145.f_29406;
}

void func_538()
{
	if (BitTest(Global_1975322.f_10, 7))
	{
		func_543(0);
		func_539(1, 1);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1971648.f_1093), 12);
		Global_1971648.f_1104 = 1;
	}
	else
	{
		func_543(1);
	}
}

void func_539(bool bParam0, bool bParam1)
{
	var uVar0;
	
	uVar0 = func_9(9511, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&uVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	func_4(9511, uVar0, -1);
	if (bParam1)
	{
		func_540(-1713398555, 18, 0);
	}
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_542(iParam1, iParam2))
	{
		iVar0 = func_541();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_541()
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

int func_542(int iParam0, var uParam1)
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

void func_543(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_9(9511, -1);
	unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), false);
	func_4(9511, uVar0, -1);
	func_555(6);
	func_554();
	func_550();
	func_545();
	func_544(1);
	if (bParam0)
	{
		func_540(-1713398555, 18, 0);
	}
}

void func_544(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_9(9511, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, 5);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&uVar0, 5);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	func_4(9511, uVar0, -1);
}

void func_545()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17[24];
	int iVar18[8];
	int iVar19[7];
	int iVar20;
	int iVar21;
	float fVar22;
	
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29226, Global_262145.f_29227);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar17[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 24);
		iVar20 = iVar17[bVar1];
		iVar17[bVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (iVar17[bVar1])
		{
			iVar21 = func_549(bVar1, 1);
			switch (iVar21)
			{
				case 0:
					unk_0x0B0C9A0F9AAEB7F0(&iVar3, bVar1);
					break;
				
				case 1:
					unk_0x0B0C9A0F9AAEB7F0(&iVar5, bVar1);
					break;
				
				case 2:
					unk_0x0B0C9A0F9AAEB7F0(&iVar7, bVar1);
					break;
				
				case 3:
					unk_0x0B0C9A0F9AAEB7F0(&iVar9, bVar1);
					break;
				}
		}
		bVar1++;
	}
	if (!func_385(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x8744D2E3FC95740E(&iVar3, 6);
		unk_0x8744D2E3FC95740E(&iVar3, 7);
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 6);
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 7);
		unk_0x8744D2E3FC95740E(&iVar7, 6);
		unk_0x8744D2E3FC95740E(&iVar7, 7);
		unk_0x8744D2E3FC95740E(&iVar9, 6);
		unk_0x8744D2E3FC95740E(&iVar9, 7);
		unk_0x8744D2E3FC95740E(&iVar3, 11);
		unk_0x8744D2E3FC95740E(&iVar3, 12);
		unk_0x8744D2E3FC95740E(&iVar5, 11);
		unk_0x8744D2E3FC95740E(&iVar5, 12);
		unk_0x8744D2E3FC95740E(&iVar7, 11);
		unk_0x8744D2E3FC95740E(&iVar7, 12);
		unk_0x8744D2E3FC95740E(&iVar9, 11);
		unk_0x8744D2E3FC95740E(&iVar9, 12);
	}
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29228, Global_262145.f_29229);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar18[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 8);
		iVar20 = iVar18[bVar1];
		iVar18[bVar1] = iVar18[iVar2];
		iVar18[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (iVar18[bVar1])
		{
			iVar21 = func_549(bVar1, 0);
			switch (iVar21)
			{
				case 0:
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, bVar1);
					break;
				
				case 1:
					unk_0x0B0C9A0F9AAEB7F0(&iVar6, bVar1);
					break;
				
				case 2:
					unk_0x0B0C9A0F9AAEB7F0(&iVar8, bVar1);
					break;
				
				case 3:
					unk_0x0B0C9A0F9AAEB7F0(&iVar10, bVar1);
					break;
				}
		}
		bVar1++;
	}
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29230, Global_262145.f_29231);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar19[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 7);
		iVar20 = iVar19[bVar1];
		iVar19[bVar1] = iVar19[iVar2];
		iVar19[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		if (iVar19[bVar1])
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar11, bVar1);
		}
		bVar1++;
	}
	iVar12 = unk_0xC5935DFB3F39785A(Global_262145.f_29232, Global_262145.f_29233 + 1);
	iVar13 = unk_0xC5935DFB3F39785A(Global_262145.f_29234, Global_262145.f_29235 + 1);
	iVar14 = unk_0xC5935DFB3F39785A(Global_262145.f_29236, Global_262145.f_29237 + 1);
	iVar15 = unk_0xC5935DFB3F39785A(Global_262145.f_29238, Global_262145.f_29239 + 1);
	iVar16 = unk_0xC5935DFB3F39785A(Global_262145.f_29240, Global_262145.f_29241 + 1);
	iVar12 = system::ceil((system::to_float(iVar12) / 100f)) * 100;
	iVar13 = system::ceil((system::to_float(iVar13) / 100f)) * 100;
	iVar14 = system::ceil((system::to_float(iVar14) / 100f)) * 100;
	iVar15 = system::ceil((system::to_float(iVar15) / 100f)) * 100;
	iVar16 = system::ceil((system::to_float(iVar16) / 100f)) * 100;
	fVar22 = func_546();
	if (fVar22 != 1f)
	{
		iVar12 = system::ceil((IntToFloat(iVar12) * fVar22));
		iVar13 = system::ceil((IntToFloat(iVar13) * fVar22));
		iVar14 = system::ceil((IntToFloat(iVar14) * fVar22));
		iVar15 = system::ceil((IntToFloat(iVar15) * fVar22));
		iVar16 = system::ceil((IntToFloat(iVar16) * fVar22));
	}
	func_5(9495, iVar3, -1, 1);
	func_5(9496, iVar4, -1, 1);
	func_5(9497, iVar12, -1, 1);
	func_5(9498, iVar5, -1, 1);
	func_5(9499, iVar6, -1, 1);
	func_5(9500, iVar13, -1, 1);
	func_5(9501, iVar7, -1, 1);
	func_5(9502, iVar8, -1, 1);
	func_5(9503, iVar14, -1, 1);
	func_5(9504, iVar9, -1, 1);
	func_5(9505, iVar10, -1, 1);
	func_5(9506, iVar15, -1, 1);
	func_5(9507, iVar11, -1, 1);
	func_5(9508, iVar16, -1, 1);
}

float func_546()
{
	switch (func_547(1))
	{
		case 0:
			return Global_262145.f_29383;
		
		case 1:
			return Global_262145.f_29384;
		
		case 2:
			return Global_262145.f_29385;
		
		case 3:
			return Global_262145.f_29386;
		
		case 4:
			return Global_262145.f_29387;
		
		case 5:
			return Global_262145.f_29388;
		
		default:
	}
	return 1f;
}

int func_547(bool bParam0)
{
	if (bParam0)
	{
		return func_9(9489, -1);
	}
	return func_548(unk_0x259BE71D8A81D4FA());
}

int func_548(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_9;
	}
	return -1;
}

int func_549(bool bParam0, bool bParam1)
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_29244[bParam0];
		uVar0[1] = Global_262145.f_29269[bParam0];
		uVar0[2] = Global_262145.f_29294[bParam0];
		uVar0[3] = Global_262145.f_29319[bParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_29344[bParam0];
		uVar0[1] = Global_262145.f_29353[bParam0];
		uVar0[2] = Global_262145.f_29362[bParam0];
		uVar0[3] = Global_262145.f_29371[bParam0];
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			iVar5 = iVar4;
			return iVar5;
		}
		iVar4++;
	}
	return -1;
}

void func_550()
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if (!func_553(0))
	{
		func_5(9489, 4, -1, 1);
		return;
	}
	if (Global_262145.f_29398 != 0)
	{
		if (func_552(9360, -1) != Global_262145.f_29398)
		{
			func_5(9489, 5, -1, 1);
			return;
		}
	}
	if (func_551())
	{
		uVar0[0] = Global_262145.f_29393;
		uVar0[1] = Global_262145.f_29394;
		uVar0[2] = Global_262145.f_29395;
		uVar0[3] = Global_262145.f_29396;
	}
	else
	{
		uVar0[0] = Global_262145.f_29389;
		uVar0[1] = Global_262145.f_29390;
		uVar0[2] = Global_262145.f_29391;
		uVar0[3] = Global_262145.f_29392;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			func_5(9489, iVar4, -1, 1);
			return;
		}
		iVar4++;
	}
}

int func_551()
{
	if (Global_262145.f_29397 == -1)
	{
		return 0;
	}
	if (BitTest(Global_1975322.f_10, 21))
	{
		return 0;
	}
	return 1;
}

int func_552(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

bool func_553(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_9(9511, -1), 1);
	}
	return func_385(unk_0x259BE71D8A81D4FA());
}

void func_554()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_5(9490, iVar1, -1, 1);
	iVar1 = 0;
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_5(9491, iVar1, -1, 1);
	iVar1 = 0;
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	if (!func_385(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = 6;
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_5(9492, iVar1, -1, 1);
}

void func_555(int iParam0)
{
	if (iParam0 == 6)
	{
		iParam0 = unk_0xC5935DFB3F39785A(0 + 1, 6);
	}
	func_5(9493, iParam0, -1, 1);
}

int func_556()
{
	return func_557(1);
}

int func_557(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_9(9511, -1), 0);
	}
	return func_558(unk_0x259BE71D8A81D4FA());
}

int func_558(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_559()
{
	return func_553(1);
}

int func_560(var uParam0)
{
	return func_561(0);
}

int func_561(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_562(iParam0);
	iVar1 = unk_0xEAA437DE2A801E8A(uVar0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_562(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_29409[iParam0];
}

int func_563()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_164) && func_78(iLocal_165, 1, 1))
	{
		if ((!func_124() && !func_123()) && !func_122())
		{
			if ((unk_0xAB74A6FE5E16479E(iLocal_164) != joaat("Rm_Command") && unk_0xAB74A6FE5E16479E(iLocal_164) != joaat("Rm_Stair1")) && unk_0xAB74A6FE5E16479E(iLocal_164) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	if (Global_1943520.f_3904 == 147)
	{
		return 1;
	}
	return 0;
}

char* func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_385(iLocal_165) && !func_19(iLocal_165, 0))
			{
				return "HIP_HELP_BBOSS2";
			}
			return "HIP_HELP_BBOSS";
		
		default:
	}
	return "";
}

float func_565(var uParam0)
{
	return 0,1f;
}

int func_566(var uParam0)
{
	return 0;
}

int func_567(var uParam0)
{
	return 0;
}

float func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		
		default:
	}
	return 0f;
}

Vector3 func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_998() == 0)
			{
				return -89,3034f, -0,1435f, 180f;
			}
			return -89,5003f, -0,204f, 180f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_998() == 0)
			{
				return 1561,161f, 384,824f, -48,6215f;
			}
			return 1561,16f, 384,8204f, -48,9135f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_571(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if ((iLocal_138 || iLocal_139) || (Local_181.f_6 != -1 && !func_461(Local_181.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_812;
	func_583(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_159 != 0)
			{
				return;
			}
			func_582(uParam0->f_716, 188);
			func_581(uParam0->f_716);
			break;
		
		case 1:
			if (iLocal_159 != 0)
			{
				return;
			}
			func_582(uParam0->f_716, 187);
			func_581(uParam0->f_716);
			break;
		
		case 2:
			if (func_384(iVar0))
			{
				func_578(uParam0, iVar0, iParam1);
			}
			else
			{
				func_582(uParam0->f_716, 189);
				func_581(uParam0->f_716);
			}
			break;
		
		case 3:
			if (func_384(iVar0))
			{
				func_578(uParam0, iVar0, iParam1);
			}
			else
			{
				func_582(uParam0->f_716, 190);
				func_581(uParam0->f_716);
			}
			break;
		
		case 8:
			if (Local_181.f_6 != -1)
			{
				return;
			}
			func_582(uParam0->f_716, 205);
			func_581(uParam0->f_716);
			break;
		
		case 9:
			if (Local_181.f_6 != -1)
			{
				return;
			}
			func_582(uParam0->f_716, 206);
			func_581(uParam0->f_716);
			break;
		
		case 4:
			if (func_577(uParam0, iVar0))
			{
				func_582(uParam0->f_716, 201);
				func_576(uParam0->f_716);
				func_581(uParam0->f_716);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_144)
				{
					bLocal_144 = true;
				}
			}
			break;
		
		case 5:
			if (iLocal_159 != 0)
			{
				func_574(uParam0);
			}
			else if (func_432(iVar0))
			{
				if (Local_181.f_6 == -1)
				{
					if (unk_0x834C960822A4683F())
					{
						uParam0->f_1094 = 1;
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam2, false);
					}
				}
			}
			else
			{
				func_582(uParam0->f_716, 202);
				func_581(uParam0->f_716);
				if (func_573(iVar0))
				{
					if (bLocal_144)
					{
						bLocal_144 = false;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_159 != 0)
			{
				return;
			}
			if (!func_431(uParam0))
			{
				return;
			}
			bLocal_144 = !bLocal_144;
			break;
		
		case 7:
			if (iLocal_159 != 0)
			{
				return;
			}
			if (Local_181.f_6 != -1)
			{
				return;
			}
			iLocal_142 = !iLocal_142;
			break;
		
		case 15:
			if (func_384(iVar0))
			{
				iVar1 = unk_0xB23E0F9B63D009A8(uParam0->f_831.f_51[func_572(iVar0)]);
				Var2 = { func_219(iVar1) };
				func_37(uParam0, 5);
				unk_0xAD9DEC6201018EA3(&Var2);
			}
			break;
	}
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		default:
	}
	return -1;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

void func_574(var uParam0)
{
	iLocal_159 = 0;
	uParam0->f_710 = 1;
	func_575(uParam0->f_716);
}

void func_575(var uParam0)
{
	unk_0xB750FE3C9F094356(uParam0, "HIDE_OVERLAY");
}

void func_576(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0, "REQUEST_CURRENT_SELECTION");
	uLocal_137 = unk_0x6CA3F2B87712B6A4();
	iLocal_139 = 1;
}

int func_577(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (unk_0x834C960822A4683F() && uParam0->f_1092 != iLocal_165)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_578(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1092 != unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (uParam0->f_831.f_49 == 1)
	{
		func_37(uParam0, 4);
		return;
	}
	if (func_580(3))
	{
		func_11("CUTS_LOCKED", -1);
		func_37(uParam0, 7);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		
		case 3:
			if (uParam0->f_831.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_572(iParam1);
	func_579(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_579(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_831.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_831.f_56[iParam1];
		if (iVar2 < unk_0x510D0699BE9C6D06(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_831.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_831.f_56[iParam1]);
			uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] + iVar3);
			func_37(uParam0, 4);
		}
		else if (uParam0->f_831.f_56[iParam1] == iVar0)
		{
			func_37(uParam0, 4);
		}
		else
		{
			if (uParam0->f_831.f_56[4] <= (100 - unk_0x510D0699BE9C6D06(iParam2)))
			{
				uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] + unk_0x510D0699BE9C6D06(iParam2));
				uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] - unk_0x510D0699BE9C6D06(iParam2));
			}
			if (iParam2 == 0)
			{
				func_37(uParam0, 4);
			}
			else
			{
				func_37(uParam0, 13);
			}
		}
		if (uParam0->f_831.f_56[iParam1] <= iVar0)
		{
			if (!func_14("HEIST_NOTE_6"))
			{
				unk_0x428C32CC68809A35(1);
				func_11("HEIST_NOTE_6", 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_831.f_56[4];
		if (iVar4 < unk_0x510D0699BE9C6D06(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_831.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_831.f_56[iParam1] - iVar1);
			uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] + iVar5);
			func_37(uParam0, 4);
		}
		else if (uParam0->f_831.f_56[iParam1] == iVar1)
		{
			func_37(uParam0, 4);
		}
		else
		{
			if (uParam0->f_831.f_56[4] >= unk_0x510D0699BE9C6D06(iParam2))
			{
				uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] - unk_0x510D0699BE9C6D06(iParam2));
				uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] + unk_0x510D0699BE9C6D06(iParam2));
			}
			if (iParam2 == 0)
			{
				func_37(uParam0, 4);
			}
			else
			{
				func_37(uParam0, 12);
			}
		}
		if (uParam0->f_831.f_56[iParam1] >= iVar1)
		{
			if (!func_14("HEIST_NOTE_5"))
			{
				unk_0x428C32CC68809A35(1);
				func_11("HEIST_NOTE_5", 5000);
			}
		}
	}
}

int func_580(int iParam0)
{
	if (Global_262145.f_33335 == -1)
	{
		return 0;
	}
	if (BitTest(Global_1979276, 4))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_1979276, 0);
		
		case 1:
			return BitTest(Global_1979276, 1);
		
		case 2:
			return BitTest(Global_1979276, 2);
		
		case 3:
			return BitTest(Global_1979276, 3);
		
		default:
	}
	return 0;
}

void func_581(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0, "REQUEST_CURRENT_ROLLOVER");
	uLocal_136 = unk_0x6CA3F2B87712B6A4();
	iLocal_138 = 1;
}

void func_582(var uParam0, int iParam1)
{
	unk_0xDBCE37B37A697642(uParam0, "SET_INPUT_EVENT", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_583(var uParam0, int iParam1, int iParam2)
{
	if (!func_19(uParam0->f_1092, 0) && !func_385(uParam0->f_1092))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_37(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_384(iParam2) && uParam0->f_831.f_49 == 1)
			{
				func_37(uParam0, 4);
				return;
			}
			if (iLocal_159 == 0)
			{
				func_37(uParam0, 0);
				if (!func_384(iParam2))
				{
					if (func_586(iParam2))
					{
						func_37(uParam0, 21);
					}
					else
					{
						func_37(uParam0, 22);
					}
				}
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		
		case 1:
			if (func_384(iParam2) && uParam0->f_831.f_49 == 1)
			{
				func_37(uParam0, 4);
				return;
			}
			if (iLocal_159 == 0)
			{
				func_37(uParam0, 0);
				if (!func_384(iParam2))
				{
					if (func_586(iParam2))
					{
						func_37(uParam0, 21);
					}
					else
					{
						func_37(uParam0, 22);
					}
				}
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		
		case 2:
			if (iLocal_159 == 0)
			{
				if (iParam2 == 1000)
				{
					func_37(uParam0, 1);
				}
				else if (!func_384(iParam2))
				{
					func_37(uParam0, 4);
				}
			}
			else if (iLocal_159 > 0)
			{
				if (iParam2 == 1002)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			break;
		
		case 3:
			if (iLocal_159 == 0)
			{
				if (unk_0x834C960822A4683F())
				{
					if ((func_10(iParam2, 2) && !func_384(iParam2)) && func_584(uParam0))
					{
						func_37(uParam0, 1);
					}
					else
					{
						func_37(uParam0, 4);
					}
				}
				else if (func_10(iParam2, 2) && iParam2 != 1000)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			else if (iLocal_159 > 0)
			{
				if (iParam2 == 1001)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			break;
		
		case 8:
			func_37(uParam0, 1);
			break;
		
		case 9:
			func_37(uParam0, 1);
			break;
		
		case 4:
			if (bLocal_148)
			{
				func_37(uParam0, 5);
			}
			else
			{
				func_37(uParam0, 7);
			}
			break;
		
		case 5:
			if (!func_432(iParam2))
			{
				func_37(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_431(uParam0) && iLocal_159 == 0)
			{
				func_37(uParam0, 8);
			}
			break;
		
		case 7:
			if (func_386(uParam0, iParam2) && iLocal_159 == 0)
			{
				func_37(uParam0, 9);
			}
			break;
	}
}

int func_584(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_812;
	if (func_585(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA() && unk_0x834C960822A4683F())
	{
		if (Global_1973625[uParam0->f_1092 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1973625[uParam0->f_1092 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1973625[uParam0->f_1092 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1973625[uParam0->f_1092 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1973625[uParam0->f_1092 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1972760[uParam0->f_1092 /*27*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_831.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_831.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_585(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 0;
	}
	else if (func_10(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		
		default:
	}
	return 1;
}

void func_587(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (BitTest(Global_1938203.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1938203.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	unk_0x61055542D9D877AE(uParam0->f_700);
	unk_0x9A122D542F2BB60E(73, 73);
	unk_0xA4F67CEB594AE064(4);
	unk_0xA66AC5949E305457(1);
	unk_0xF13626F74924F72A(sVar1, sVar0, 0,5f, 0,75f, 1f, 0,5f, 0f, 255, 255, 255, 255, 0);
	unk_0x90B531766063C5CD();
	unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
}

float func_588(var uParam0)
{
	return 0,5f;
}

float func_589(var uParam0)
{
	return 0,5f;
}

float func_590(var uParam0)
{
	return 0,75f;
}

float func_591(var uParam0)
{
	return 0,25f;
}

int func_592(var uParam0)
{
	return 2;
}

char* func_593(var uParam0)
{
	return "ISLAND_HEIST_BOARD";
}

int func_594(var uParam0)
{
	return joaat("h4_int_sub_command_table");
}

char* func_595(var uParam0)
{
	return "submarine_table";
}

void func_596(var uParam0)
{
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x834C960822A4683F() && !iLocal_150)
			{
				unk_0xD0D00ED689D6CA81("HS4F_INT", 0);
				iLocal_150 = 1;
			}
			func_882(uParam0);
			break;
		
		case 3:
			func_859(uParam0);
			break;
		
		case 4:
			func_855(uParam0);
			func_630(uParam0);
			func_859(uParam0);
			func_597(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_597(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	iVar3 = unk_0x383461852896D73D();
	iVar2 = uParam0->f_1092;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1972760[iVar3 /*27*/].f_12[4] != uParam0->f_831.f_56[4])
				{
					Global_1972760[iVar3 /*27*/].f_12[4] = uParam0->f_831.f_56[4];
				}
			}
			else
			{
				if (Global_1972760[iVar3 /*27*/].f_12[iVar0] != uParam0->f_831.f_56[iVar0])
				{
					Global_1972760[iVar3 /*27*/].f_12[iVar0] = uParam0->f_831.f_56[iVar0];
					if (uParam0->f_831.f_51[iVar0] == unk_0x383461852896D73D())
					{
						Global_2685444.f_6639 = Global_1972760[iVar3 /*27*/].f_12[iVar0];
						Global_1941773.f_29 = Global_2685444.f_6639;
					}
					iLocal_154 = 1;
				}
				if (Global_1972760[iVar3 /*27*/].f_2[iVar0] != uParam0->f_831.f_51[iVar0])
				{
					Global_1972760[iVar3 /*27*/].f_2[iVar0] = uParam0->f_831.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_831.f_51[iVar0] != iVar1 || uParam0->f_831.f_51[iVar0] == uParam0->f_1092)
					{
					}
					else if (uParam0->f_831.f_67[iVar0] != Global_1972760[iVar1 /*27*/].f_7[iVar0])
					{
						uParam0->f_831.f_67[iVar0] = Global_1972760[iVar1 /*27*/].f_7[iVar0];
						if (uParam0->f_831.f_67[iVar0] == 1)
						{
							func_37(uParam0, 16);
						}
						else
						{
							func_37(uParam0, 17);
						}
						Global_1972760[iVar3 /*27*/].f_7[iVar0] = uParam0->f_831.f_67[iVar0];
						iLocal_154 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_39)
		{
			func_625(uParam0, func_629(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_39));
		}
		if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_40)
		{
			func_608(uParam0, func_624(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_40));
		}
		if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_41)
		{
			func_605(uParam0, func_607(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_41));
		}
		if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_42)
		{
			func_602(uParam0, func_604(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_42));
		}
		if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_43)
		{
			func_598(uParam0, func_601(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_831.f_51[iVar0] != unk_0x383461852896D73D())
			{
			}
			else
			{
				Global_1972760[unk_0x383461852896D73D() /*27*/].f_7[iVar0] = uParam0->f_831.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1972760[iVar2 /*27*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_831.f_56[4] != Global_1972760[iVar2 /*27*/].f_12[4])
				{
					uParam0->f_831.f_56[4] = Global_1972760[iVar2 /*27*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_831.f_56[iVar0] != Global_1972760[iVar2 /*27*/].f_12[iVar0])
				{
					uParam0->f_831.f_56[iVar0] = Global_1972760[iVar2 /*27*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2685444.f_6639 = Global_1972760[iVar2 /*27*/].f_12[iVar0];
						Global_1941773.f_29 = Global_2685444.f_6639;
					}
					iLocal_154 = 1;
				}
				if (uParam0->f_831.f_51[iVar0] != Global_1972760[iVar2 /*27*/].f_2[iVar0])
				{
					uParam0->f_831.f_51[iVar0] = Global_1972760[iVar2 /*27*/].f_2[iVar0];
				}
				if (uParam0->f_831.f_67[iVar0] != Global_1972760[iVar2 /*27*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_831.f_67[iVar0] = Global_1972760[iVar2 /*27*/].f_7[iVar0];
						if (uParam0->f_831.f_67[iVar0] == 1)
						{
							func_37(uParam0, 16);
						}
						else
						{
							func_37(uParam0, 17);
						}
						iLocal_154 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_598(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_600(uParam0);
	func_599(uParam0->f_716, bParam1, 1);
	switch (bParam1)
	{
		case 91:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 = 1;
			break;
		
		case 92:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_599(var uParam0, bool bParam1, int iParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_ITEM_SELECTED");
	unk_0x330108B080A2132F(bParam1);
	unk_0x557F1E2300EF1A3E(iParam2);
	unk_0xE6B753D52F4CA222();
}

void func_600(var uParam0)
{
	func_599(uParam0->f_716, 91, 0);
	func_599(uParam0->f_716, 92, 0);
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 91;
		
		case 2:
			return 92;
		
		default:
	}
	return 0;
}

void func_602(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_603(uParam0);
	func_599(uParam0->f_716, bParam1, 1);
	switch (bParam1)
	{
		case 87:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 0;
			break;
		
		case 88:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 1;
			break;
		
		case 89:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 2;
			break;
		
		case 90:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_603(var uParam0)
{
	func_599(uParam0->f_716, 87, 0);
	func_599(uParam0->f_716, 88, 0);
	func_599(uParam0->f_716, 89, 0);
	func_599(uParam0->f_716, 90, 0);
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 88;
		
		case 2:
			return 89;
		
		case 3:
			return 90;
		
		default:
	}
	return 0;
}

void func_605(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_606(uParam0);
	func_599(uParam0->f_716, bParam1, 1);
	switch (bParam1)
	{
		case 85:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = 0;
			break;
		
		case 86:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_606(var uParam0)
{
	func_599(uParam0->f_716, 85, 0);
	func_599(uParam0->f_716, 86, 0);
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 85;
		
		case 5:
			return 86;
		
		default:
	}
	return 0;
}

void func_608(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_623(uParam0);
	func_599(uParam0->f_716, bParam1, 1);
	if (bParam1 == 84)
	{
		func_622(uParam0);
	}
	else
	{
		func_609(uParam0);
	}
	switch (bParam1)
	{
		case 77:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 0;
			break;
		
		case 78:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 1;
			break;
		
		case 79:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 2;
			break;
		
		case 80:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 3;
			break;
		
		case 81:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 4;
			break;
		
		case 82:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 5;
			break;
		
		case 83:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 6;
			break;
		
		case 84:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_609(var uParam0)
{
	struct<9> Var0;
	int iVar1;
	int iVar2;
	
	func_599(uParam0->f_716, 85, 0);
	func_621(uParam0->f_716, 85);
	func_599(uParam0->f_716, 86, 0);
	func_621(uParam0->f_716, 86);
	Local_130[0 /*9*/] = { Var0 };
	Local_130[1 /*9*/] = { Var0 };
	if (func_19(uParam0->f_1092, 8))
	{
		func_612(uParam0, &(Local_130[iVar1 /*9*/]), 65, 85);
		iVar1++;
	}
	if (func_19(uParam0->f_1092, 9))
	{
		func_612(uParam0, &(Local_130[iVar1 /*9*/]), 65, 86);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		func_610(uParam0->f_716, Local_130[iVar2 /*9*/], 0);
		iVar2++;
	}
	Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = -1;
}

void func_610(var uParam0, struct<9> Param1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_FINALE_ITEM");
	unk_0x330108B080A2132F(Param1.f_1);
	unk_0x330108B080A2132F(Param1.f_2);
	if (bParam2)
	{
		func_611(Param1.f_3);
	}
	else
	{
		func_454(Param1.f_3);
		unk_0x557F1E2300EF1A3E(Param1.f_4);
		func_454(Param1.f_5);
		unk_0x3585BEBEDC67FCC7(Param1.f_6);
		unk_0x330108B080A2132F(Param1.f_7);
		unk_0x557F1E2300EF1A3E(Param1.f_8);
	}
	unk_0xE6B753D52F4CA222();
}

void func_611(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_612(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = bParam3;
	uParam1->f_4 = func_620(uParam0, bParam3);
	uParam1->f_3 = func_619(uParam0, bParam3);
	uParam1->f_5 = func_617(uParam0, bParam3);
	uParam1->f_6 = func_615(uParam0, bParam3);
	if (func_392(uParam0, bParam3))
	{
		uParam1->f_7 = func_614(uParam0, bParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_613(bParam3);
}

int func_613(bool bParam0)
{
	switch (bParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

int func_614(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		
		case 47:
			return 1;
		
		case 49:
			if (!func_405(uParam0->f_1092, 5) && !func_405(uParam0->f_1092, 6))
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return 2;
}

char* func_615(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			return func_616(uParam0);
		
		case 2:
			return "ADDITIONAL_LOOT";
		
		case 3:
			return "INFILTRATION_POINTS";
		
		case 4:
			return "ESCAPE_POINTS";
		
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		
		case 6:
			return "POINTS_OF_INTEREST";
		
		case 7:
			return "CASH";
		
		case 8:
			return "WEED";
		
		case 9:
			return "COCAINE";
		
		case 10:
			return "GOLD";
		
		case 11:
			return "PAINTINGS";
		
		case 12:
			return "AIRSTRIP";
		
		case 13:
			return "PARACHUTING";
		
		case 14:
			return "WEST_BEACH";
		
		case 15:
			return "MAIN_DOCK";
		
		case 16:
			return "NORTH_DOCK";
		
		case 17:
			return "NORTH_DROP_ZONE";
		
		case 18:
			return "SOUTH_DROP_ZONE";
		
		case 19:
			return "DRAINAGE_TUNNEL";
		
		case 20:
			return "AIRSTRIP";
		
		case 21:
			return "MAIN_DOCK";
		
		case 22:
			return "NORTH_DOCK";
		
		case 23:
			return "SUBMARINE";
		
		case 30:
			return "POWER_STATION";
		
		case 31:
			return "CONTROL_TOWER";
		
		case 32:
			return "BOLT_CUTTERS";
		
		case 33:
			return "GRAPPLING_EQUIPMENT";
		
		case 34:
			return "GUARD_UNIFORM";
		
		case 35:
			return "GUARD_TRUCK";
		
		case 24:
			return "MAIN_GATE";
		
		case 25:
			return "NORTH_WALL";
		
		case 26:
			return "NORTH_SIDE_GATE";
		
		case 27:
			return "SOUTH_WALL";
		
		case 28:
			return "SOUTH_SIDE_GATE";
		
		case 29:
			return "DRAINAGE_TUNNEL";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "SUBMARINE";
		
		case 41:
			return "BOMBER";
		
		case 42:
			return "PLANE";
		
		case 43:
			return "HELICOPTER";
		
		case 44:
			return "PATROL_BOAT";
		
		case 45:
			return "SMUGGLER_BOAT";
		
		case 46:
			return "BOMBER";
		
		case 47:
			return "PILOT";
		
		case 48:
			return "HELICOPTER";
		
		case 49:
			return "PILOT";
		
		case 50:
			return "DEMOLITION_CHARGES";
		
		case 53:
			return "ACETYLENE_TORCH";
		
		case 51:
			return func_429(func_408(uParam0->f_1092) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		
		case 52:
			return "FINGERPRINT";
		
		case 54:
			return "SHOTGUN";
		
		case 55:
			return "BULLPUP_RIFLE";
		
		case 56:
			return "SNIPER";
		
		case 57:
			return "SMG";
		
		case 58:
			return "ASSAULT_RIFLE";
		
		case 59:
			return "SUPPRESSORS";
		
		case 60:
			return "WEAPONS";
		
		case 61:
			return "ARMOR";
		
		case 62:
			return "BACKUP";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "SUBMARINE";
		
		case 72:
			return "BOMBER";
		
		case 73:
			return "PLANE";
		
		case 74:
			return "HELICOPTER";
		
		case 75:
			return "PATROL_BOAT";
		
		case 76:
			return "SMUGGLER_BOAT";
		
		case 77:
			return "AIRSTRIP";
		
		case 78:
			return "PARACHUTING";
		
		case 79:
			return "WEST_BEACH";
		
		case 80:
			return "MAIN_DOCK";
		
		case 81:
			return "NORTH_DOCK";
		
		case 82:
			return "NORTH_DROP_ZONE";
		
		case 83:
			return "SOUTH_DROP_ZONE";
		
		case 84:
			return "DRAINAGE_TUNNEL";
		
		case 85:
			return "MAIN_GATE";
		
		case 86:
			return "DRAINAGE_TUNNEL";
		
		case 87:
			return "AIRSTRIP";
		
		case 88:
			return "MAIN_DOCK";
		
		case 89:
			return "NORTH_DOCK";
		
		case 90:
			return "SUBMARINE";
		
		case 91:
			return "";
		
		case 92:
			return "";
		
		case 93:
			return "SHOTGUN";
		
		case 94:
			return "BULLPUP_RIFLE";
		
		case 95:
			return "SNIPER";
		
		case 96:
			return "SMG";
		
		case 97:
			return "ASSAULT_RIFLE";
		
		case 98:
			return "SUPPRESSORS";
		
		case 99:
			return "AIRSTRIKE_SUPPORT";
		
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		
		case 101:
			return "SNIPER_SUPPORT";
		
		case 102:
			return "HELICOPTER_SUPPORT";
		
		case 103:
			return "SPY_DRONE_SUPPORT";
		
		case 104:
			return "WEAPON_STASH_SUPPORT";
		
		default:
	}
	return "";
}

char* func_616(var uParam0)
{
	if (func_19(uParam0->f_1092, 0))
	{
		switch (func_548(uParam0->f_1092))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			
			case 1:
				return "GATHER_INTEL_NECKLACE";
			
			case 2:
				return "GATHER_INTEL_BONDS";
			
			case 3:
				return "GATHER_INTEL_DIAMOND";
			
			case 4:
				return "GATHER_INTEL_FILES";
			
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		
		default:
	}
	return "GATHER_INTEL";
}

char* func_617(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			if (!func_385(uParam0->f_1092))
			{
				if (!func_19(uParam0->f_1092, 0))
				{
					return "H4P_INT0_GAT_D1";
				}
			}
			else if (!func_19(uParam0->f_1092, 0))
			{
				return "H4P_INT0_GAT_D2";
			}
			return "H4P_INT0_GAT_D3";
		
		case 2:
			return "H4P_INT0_LOOT_D";
		
		case 3:
			return "H4P_INT0_ENTR_D";
		
		case 4:
			return "H4P_INT0_EXIT_D";
		
		case 5:
			return "H4P_INT0_COMP_D";
		
		case 6:
			return "H4P_INT0_ITEM_D";
		
		case 7:
			return "H4P_INT2_CASH_D";
		
		case 8:
			return "H4P_INT2_WEED_D";
		
		case 9:
			return "H4P_INT2_COKE_D";
		
		case 10:
			return "H4P_INT2_GOLD_D";
		
		case 11:
			return "H4P_INT2_PAIN_D";
		
		case 12:
			return "H4P_INT3_AIRS_D";
		
		case 13:
			return "H4P_INT3_PARA_D";
		
		case 14:
			return "H4P_INT3_BEAC_D";
		
		case 15:
			return "H4P_INT3_MDCK_D";
		
		case 16:
			return "H4P_INT3_NDCK_D";
		
		case 17:
			return "H4P_INT3_NDRP_D";
		
		case 18:
			return "H4P_INT3_SDRP_D";
		
		case 19:
			return "H4P_INT3_DTUN_D";
		
		case 20:
			return "H4P_INT4_AIRS_D";
		
		case 21:
			return "H4P_INT4_MDCK_D";
		
		case 22:
			return "H4P_INT4_NDCK_D";
		
		case 23:
			return "H4P_INT4_SUBM_D";
		
		case 30:
			return "H4P_INT6_PWRS_D";
		
		case 31:
			return "H4P_INT6_CTOW_D";
		
		case 32:
			return "H4P_INT6_BCUT_D";
		
		case 33:
			return "H4P_INT6_GRAP_D";
		
		case 34:
			return "H4P_INT6_UNIF_D";
		
		case 35:
			return "H4P_INT6_TROJ_D";
		
		case 24:
			return "H4P_INT5_MGAT_D";
		
		case 25:
			return "H4P_INT5_NWAL_D";
		
		case 26:
			return "H4P_INT5_NSGT_D";
		
		case 27:
			return "H4P_INT5_SWAL_D";
		
		case 28:
			return "H4P_INT5_SSGT_D";
		
		case 29:
			return "H4P_INT5_DTUN_D";
		
		case 36:
			return "H4P_PRP0_APVH_D";
		
		case 37:
			return "H4P_PRP0_EQUI_D";
		
		case 38:
			return "H4P_PRP0_WEPL_D";
		
		case 39:
			return "H4P_PRP0_DISR_D";
		
		case 40:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 41:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 42:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 43:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 44:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 45:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 46:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 47:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 48:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 49:
			return func_429(func_618(uParam0->f_1092, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 50:
			return func_429(func_19(uParam0->f_1092, 9), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 53:
			return func_429(func_19(uParam0->f_1092, 8), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 51:
			return "H4P_PREP_MAND";
		
		case 52:
			return "H4P_PREP_MAND";
		
		case 54:
			return "H4P_PREP_MAND";
		
		case 55:
			return "H4P_PREP_MAND";
		
		case 56:
			return "H4P_PREP_MAND";
		
		case 57:
			if (!func_399(uParam0->f_1092) || !func_395(uParam0->f_1092, func_285(uParam0->f_1092)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 58:
			if (!func_399(uParam0->f_1092) || !func_395(uParam0->f_1092, func_285(uParam0->f_1092)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 59:
			return "H4P_PRP3_SUPP_D";
		
		case 60:
			return "H4P_PREP_OPT";
		
		case 61:
			return "H4P_PREP_OPT";
		
		case 62:
			return "H4P_PREP_OPT";
		
		case 63:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_APRV_2", "H4P_FIN0_APRV_D");
		
		case 64:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_INFI_2", "H4P_FIN0_INFI_D");
		
		case 65:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_CENT_2", "H4P_FIN0_CENT_D");
		
		case 66:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_ESCA_2", "H4P_FIN0_ESCA_D");
		
		case 67:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_TIMD_2", "H4P_FIN0_TIMD_D");
		
		case 68:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN0_WEAP_2", "H4P_FIN0_WEAP_D");
		
		case 69:
			return "H4P_FIN0_SUPP_D";
		
		case 70:
			return "H4P_FIN0_CREW_D";
		
		case 71:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_SUBM_D", "H4P_FIN1_APRV_D");
		
		case 72:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_BOMB_D", "H4P_FIN1_APRV_D");
		
		case 73:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_SMPL_D", "H4P_FIN1_APRV_D");
		
		case 74:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_SHEL_D", "H4P_FIN1_APRV_D");
		
		case 75:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_PBOA_D", "H4P_FIN1_APRV_D");
		
		case 76:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN1_SBOA_D", "H4P_FIN1_APRV_D");
		
		case 77:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_AIRS_D", "H4P_FIN2_INFI_D");
		
		case 78:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_PARA_D", "H4P_FIN2_INFI_D");
		
		case 79:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_WBEA_D", "H4P_FIN2_INFI_D");
		
		case 80:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_MDOC_D", "H4P_FIN2_INFI_D");
		
		case 81:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_NDOC_D", "H4P_FIN2_INFI_D");
		
		case 82:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_NDRP_D", "H4P_FIN2_INFI_D");
		
		case 83:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_SDRP_D", "H4P_FIN2_INFI_D");
		
		case 84:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN2_DTUN_D", "H4P_FIN2_INFI_D");
		
		case 85:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN3_MGAT_D", "H4P_FIN3_CENT_D");
		
		case 86:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN3_DTUN_D", "H4P_FIN3_CENT_D");
		
		case 87:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN4_AIRS_D", "H4P_FIN4_ESCA_D");
		
		case 88:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN4_MDOC_D", "H4P_FIN4_ESCA_D");
		
		case 89:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN4_NDOC_D", "H4P_FIN4_ESCA_D");
		
		case 90:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN4_SUBM_D", "H4P_FIN4_ESCA_D");
		
		case 91:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN5_TDAY_D", "H4P_FIN5_TIMD_D");
		
		case 92:
			return func_429(unk_0x834C960822A4683F(), "H4P_FIN5_TNGT_D", "H4P_FIN5_TIMD_D");
		
		case 93:
			return "H4P_FIN6_SHOT_D";
		
		case 94:
			return "H4P_FIN6_RIFL_D";
		
		case 95:
			return "H4P_FIN6_SNIP_D";
		
		case 96:
			return "H4P_FIN6_MKSM_D";
		
		case 97:
			return "H4P_FIN6_MKAR_D";
		
		case 98:
			return "H4P_FIN6_SUPP_D";
		
		case 99:
			return func_429(func_392(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_AIRS_D");
		
		case 100:
			return "H4P_FIN7_WDRP_D";
		
		case 101:
			return "H4P_FIN7_SNIP_D";
		
		case 102:
			return "H4P_FIN7_HELI_D";
		
		case 103:
			return func_429(func_392(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_SPYD_D");
		
		case 104:
			return "H4P_FIN7_WEAP_D";
		
		default:
	}
	return "";
}

int func_618(int iParam0, bool bParam1)
{
	if (((func_19(iParam0, 7) || func_19(iParam0, 5)) || func_19(iParam0, 3)) || func_19(iParam0, 4))
	{
		return 1;
	}
	if (func_19(iParam0, 1) || func_19(iParam0, 2))
	{
		if (bParam1)
		{
			return func_19(iParam0, 6);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_619(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T";
		
		case 2:
			return "H4P_INT0_LOOT_T";
		
		case 3:
			return "H4P_INT0_ENTR_T";
		
		case 4:
			return "H4P_INT0_EXIT_T";
		
		case 5:
			return "H4P_INT0_COMP_T";
		
		case 6:
			return "H4P_INT0_ITEM_T";
		
		case 7:
			return "H4P_INT2_CASH_T";
		
		case 8:
			return "H4P_INT2_WEED_T";
		
		case 9:
			return "H4P_INT2_COKE_T";
		
		case 10:
			return "H4P_INT2_GOLD_T";
		
		case 11:
			return "H4P_INT2_PAIN_T";
		
		case 12:
			return "H4P_INT3_AIRS_T";
		
		case 13:
			return "H4P_INT3_PARA_T";
		
		case 14:
			return "H4P_INT3_BEAC_T";
		
		case 15:
			return "H4P_INT3_MDCK_T";
		
		case 16:
			return "H4P_INT3_NDCK_T";
		
		case 17:
			return "H4P_INT3_NDRP_T";
		
		case 18:
			return "H4P_INT3_SDRP_T";
		
		case 19:
			return "H4P_INT3_DTUN_T";
		
		case 20:
			return "H4P_INT4_AIRS_T";
		
		case 21:
			return "H4P_INT4_MDCK_T";
		
		case 22:
			return "H4P_INT4_NDCK_T";
		
		case 23:
			return "H4P_INT4_SUBM_T";
		
		case 30:
			return "H4P_INT6_PWRS_T";
		
		case 31:
			return "H4P_INT6_CTOW_T";
		
		case 32:
			return "H4P_INT6_BCUT_T";
		
		case 33:
			return "H4P_INT6_GRAP_T";
		
		case 34:
			return "H4P_INT6_UNIF_T";
		
		case 35:
			return "H4P_INT6_TROJ_T";
		
		case 24:
			return "H4P_INT5_MGAT_T";
		
		case 25:
			return "H4P_INT5_NWAL_T";
		
		case 26:
			return "H4P_INT5_NSGT_T";
		
		case 27:
			return "H4P_INT5_SWAL_T";
		
		case 28:
			return "H4P_INT5_SSGT_T";
		
		case 29:
			return "H4P_INT5_DTUN_T";
		
		case 36:
			return "H4P_PRP0_APVH_T";
		
		case 37:
			return "H4P_PRP0_EQUI_T";
		
		case 38:
			return "H4P_PRP0_WEPL_T";
		
		case 39:
			return "H4P_PRP0_DISR_T";
		
		case 40:
			return "H4P_PRP1_SUBM_T";
		
		case 41:
			return "H4P_PRP1_SBOM_T";
		
		case 42:
			return "H4P_PRP1_SPLA_T";
		
		case 43:
			return "H4P_PRP1_SHEL_T";
		
		case 44:
			return "H4P_PRP1_PBOA_T";
		
		case 45:
			return "H4P_PRP1_SBOA_T";
		
		case 46:
			return "H4P_PRP1_BOM1_T";
		
		case 47:
			return "H4P_PRP1_BOM2_T";
		
		case 48:
			return "H4P_PRP1_HEL1_T";
		
		case 49:
			return "H4P_PRP1_HEL2_T";
		
		case 50:
			return "H4P_PRP2_DEMC_T";
		
		case 53:
			return "H4P_PRP2_ATOR_T";
		
		case 51:
			return func_429(func_408(uParam0->f_1092) == 11, "H4P_PRP2_TAR1_T", "H4P_PRP2_TAR2_T");
		
		case 52:
			return "H4P_PRP2_FING_T";
		
		case 54:
			return "H4P_PRP3_SHOT_T";
		
		case 55:
			return "H4P_PRP3_RIFL_T";
		
		case 56:
			return "H4P_PRP3_SNIP_T";
		
		case 57:
			return "H4P_PRP3_M2SM_T";
		
		case 58:
			return "H4P_PRP3_M2RI_T";
		
		case 59:
			return "H4P_PRP3_SUPP_T";
		
		case 60:
			return "H4P_PRP4_WEAP_T";
		
		case 61:
			return "H4P_PRP4_ARMR_T";
		
		case 62:
			return "H4P_PRP4_BRES_T";
		
		case 63:
			return "H4P_FIN0_APRV_T";
		
		case 64:
			return "H4P_FIN0_INFI_T";
		
		case 65:
			return "H4P_FIN0_CENT_T";
		
		case 66:
			return "H4P_FIN0_ESCA_T";
		
		case 67:
			return "H4P_FIN0_TIMD_T";
		
		case 68:
			return "H4P_FIN0_WEAP_T";
		
		case 69:
			return "H4P_FIN0_SUPP_T";
		
		case 70:
			return "H4P_FIN0_CREW_T";
		
		case 71:
			return "H4P_FIN1_SUBM_T";
		
		case 72:
			return "H4P_FIN1_BOMB_T";
		
		case 73:
			return "H4P_FIN1_SMPL_T";
		
		case 74:
			return "H4P_FIN1_SHEL_T";
		
		case 75:
			return "H4P_FIN1_PBOA_T";
		
		case 76:
			return "H4P_FIN1_SBOA_T";
		
		case 77:
			return "H4P_FIN2_AIRS_T";
		
		case 78:
			return "H4P_FIN2_PARA_T";
		
		case 79:
			return "H4P_FIN2_WBEA_T";
		
		case 80:
			return "H4P_FIN2_MDOC_T";
		
		case 81:
			return "H4P_FIN2_NDOC_T";
		
		case 82:
			return "H4P_FIN2_NDRP_T";
		
		case 83:
			return "H4P_FIN2_SDRP_T";
		
		case 84:
			return "H4P_FIN2_DTUN_T";
		
		case 85:
			return "H4P_FIN3_MGAT_T";
		
		case 86:
			return "H4P_FIN3_DTUN_T";
		
		case 87:
			return "H4P_FIN4_AIRS_T";
		
		case 88:
			return "H4P_FIN4_MDOC_T";
		
		case 89:
			return "H4P_FIN4_NDOC_T";
		
		case 90:
			return "H4P_FIN4_SUBM_T";
		
		case 91:
			return "H4P_FIN5_TDAY_T";
		
		case 92:
			return "H4P_FIN5_TNGT_T";
		
		case 93:
			return "H4P_FIN6_SHOT_T";
		
		case 94:
			return "H4P_FIN6_RIFL_T";
		
		case 95:
			return "H4P_FIN6_SNIP_T";
		
		case 96:
			return "H4P_FIN6_MKSM_T";
		
		case 97:
			return "H4P_FIN6_MKAR_T";
		
		case 98:
			return "H4P_FIN6_SUPP_T";
		
		case 99:
			return "H4P_FIN7_AIRS_T";
		
		case 100:
			return "H4P_FIN7_WDRP_T";
		
		case 101:
			return "H4P_FIN7_SNIP_T";
		
		case 102:
			return "H4P_FIN7_HELI_T";
		
		case 103:
			return "H4P_FIN7_SPYD_T";
		
		case 104:
			return "H4P_FIN7_WEAP_T";
		
		default:
	}
	return "";
}

int func_620(var uParam0, var uParam1)
{
	return 0;
}

void func_621(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "REMOVE_FINALE_ITEM");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

void func_622(var uParam0)
{
	struct<9> Var0;
	
	func_621(uParam0->f_716, 85);
	func_621(uParam0->f_716, 86);
	Local_130[0 /*9*/] = { Var0 };
	Local_130[1 /*9*/] = { Var0 };
	func_612(uParam0, &(Local_130[0 /*9*/]), 65, 86);
	func_599(uParam0->f_716, 86, 1);
	func_610(uParam0->f_716, Local_130[0 /*9*/], 0);
}

void func_623(var uParam0)
{
	func_599(uParam0->f_716, 77, 0);
	func_599(uParam0->f_716, 78, 0);
	func_599(uParam0->f_716, 79, 0);
	func_599(uParam0->f_716, 80, 0);
	func_599(uParam0->f_716, 81, 0);
	func_599(uParam0->f_716, 82, 0);
	func_599(uParam0->f_716, 83, 0);
	func_599(uParam0->f_716, 84, 0);
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 77;
		
		case 1:
			return 78;
		
		case 2:
			return 79;
		
		case 3:
			return 80;
		
		case 4:
			return 81;
		
		case 5:
			return 82;
		
		case 6:
			return 83;
		
		case 7:
			return 84;
		
		default:
	}
	return 0;
}

void func_625(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_628(uParam0);
	func_627(uParam0);
	func_621(uParam0->f_716, 90);
	func_609(uParam0);
	func_599(uParam0->f_716, bParam1, 1);
	switch (bParam1)
	{
		case 71:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 1;
			func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (func_405(uParam0->f_1092, 3))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_405(uParam0->f_1092, 4))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (func_405(uParam0->f_1092, 7))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_626(uParam0);
			break;
		
		case 72:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 2;
			func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 73:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 3;
			func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 74:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 4;
			if (func_405(uParam0->f_1092, 5))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (func_405(uParam0->f_1092, 6))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 75:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 5;
			if (func_405(uParam0->f_1092, 3))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_405(uParam0->f_1092, 4))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 76:
			Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 6;
			if (func_405(uParam0->f_1092, 3))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_405(uParam0->f_1092, 4))
			{
				func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_610(uParam0->f_716, Local_129[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_626(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_621(uParam0->f_716, 87);
	func_621(uParam0->f_716, 88);
	func_621(uParam0->f_716, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_403(uParam0->f_1092, func_404(iVar2)))
		{
			func_612(uParam0, &(Local_131[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_131.f_0)
	{
		if (Local_131[iVar1 /*9*/])
		{
			func_610(uParam0->f_716, Local_131[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_627(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	
	func_621(uParam0->f_716, 77);
	func_621(uParam0->f_716, 78);
	func_621(uParam0->f_716, 79);
	func_621(uParam0->f_716, 80);
	func_621(uParam0->f_716, 81);
	func_621(uParam0->f_716, 82);
	func_621(uParam0->f_716, 83);
	func_621(uParam0->f_716, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_129[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = -1;
}

void func_628(var uParam0)
{
	func_599(uParam0->f_716, 71, 0);
	func_599(uParam0->f_716, 72, 0);
	func_599(uParam0->f_716, 73, 0);
	func_599(uParam0->f_716, 74, 0);
	func_599(uParam0->f_716, 75, 0);
	func_599(uParam0->f_716, 76, 0);
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 71;
		
		case 2:
			return 72;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 6:
			return 76;
		
		default:
	}
	return 0;
}

void func_630(var uParam0)
{
	int iVar0;
	
	if (!iLocal_139)
	{
		return;
	}
	iVar0 = -1;
	if (func_854(&iVar0))
	{
		uParam0->f_812.f_3 = uParam0->f_812.f_2;
		uParam0->f_812.f_2 = iVar0;
		uParam0->f_710 = 1;
		func_631(uParam0);
		iLocal_139 = 0;
	}
}

void func_631(var uParam0)
{
	bool bVar0;
	
	bVar0 = uParam0->f_812.f_2;
	if (uParam0->f_1092 != unk_0x259BE71D8A81D4FA() && bVar0 != 1000)
	{
		return;
	}
	switch (bVar0)
	{
		case 1:
			if (Local_181.f_6 != -1)
			{
				return;
			}
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			if (func_392(uParam0, bVar0))
			{
				return;
			}
			if (func_19(uParam0->f_1092, 0))
			{
				func_843(uParam0);
				return;
			}
			func_659(uParam0, bVar0);
			break;
		
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			if (func_392(uParam0, bVar0))
			{
				return;
			}
			if (Local_181.f_6 != -1)
			{
				return;
			}
			func_659(uParam0, bVar0);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_392(uParam0, bVar0))
			{
				return;
			}
			if (Local_181.f_6 != -1)
			{
				return;
			}
			func_656(uParam0, bVar0);
			break;
		
		case 59:
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			func_654(uParam0);
			break;
		
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_625(uParam0, bVar0);
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_608(uParam0, bVar0);
			break;
		
		case 85:
		case 86:
			func_605(uParam0, bVar0);
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_602(uParam0, bVar0);
			break;
		
		case 91:
		case 92:
			func_598(uParam0, bVar0);
			break;
		
		case 98:
			func_653(uParam0, bVar0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_392(uParam0, bVar0))
			{
				return;
			}
			func_647(uParam0, bVar0);
			break;
		
		case 1000:
			if (Local_181.f_6 != -1)
			{
				return;
			}
			if (!unk_0x834C960822A4683F())
			{
				if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
				{
					func_646(uParam0);
				}
			}
			else if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
			{
				func_502(uParam0);
			}
			else
			{
				func_643(uParam0);
			}
			break;
		
		case 1002:
			func_632(uParam0);
			break;
		
		case 1001:
			func_574(uParam0);
			break;
	}
}

void func_632(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var4;
	
	switch (iLocal_159)
	{
		case -2:
			func_642(uParam0, 0);
			iVar2 = func_9(9511, -1);
			unk_0x0B0C9A0F9AAEB7F0(&iVar2, 16);
			func_4(9511, iVar2, -1);
			break;
		
		case -3:
			iVar2 = func_9(9511, -1);
			unk_0x0B0C9A0F9AAEB7F0(&iVar2, 14);
			func_4(9511, iVar2, -1);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_641(iLocal_159);
			if (func_531())
			{
				func_519(func_640(iLocal_159), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				func_518(&Var3);
				func_639(&Var3, iLocal_159, iVar0);
				unk_0xDCA98A271D0CC516(iVar0, 0, 1, &Var3);
			}
			func_637(func_638(iLocal_159), 1);
			func_599(uParam0->f_716, iLocal_159, 1);
			func_37(uParam0, 11);
			func_44(&uLocal_162, 0, 0);
			break;
		
		case 1:
			func_659(uParam0, iLocal_159);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_635(func_636(iLocal_159));
			func_659(uParam0, iLocal_159);
			break;
		
		case 59:
			if (func_531())
			{
				func_519(joaat("service_spend_island_heist_suppressors"), Global_262145.f_29405, &uVar1, 0, 1, 0);
			}
			else
			{
				Var4 = -1;
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_5 = -1;
				Var4.f_6 = -1;
				Var4.f_7 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = -1;
				func_518(&Var4);
				Var4.f_6 = Global_262145.f_29405;
				unk_0xDCA98A271D0CC516(Global_262145.f_29405, 0, 1, &Var4);
			}
			func_634(1);
			func_633(uParam0->f_716, 59, 1);
			func_599(uParam0->f_716, 98, 1);
			func_37(uParam0, 11);
			func_44(&uLocal_162, 0, 0);
			break;
	}
	iLocal_159 = 0;
	uParam0->f_710 = 1;
	func_575(uParam0->f_716);
}

void func_633(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0xE6B753D52F4CA222();
}

void func_634(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_9(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	func_5(9482, iVar0, -1, 1);
}

void func_635(int iParam0)
{
	func_5(9485, iParam0, -1, 1);
}

int func_636(bool bParam0)
{
	switch (bParam0)
	{
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		default:
	}
	return 0;
}

void func_637(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_9(9484, -1);
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_45), bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, bParam0);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_45), bParam0);
	}
	func_5(9484, iVar0, -1, 1);
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return 0;
		
		case 100:
			return 4;
		
		case 101:
			return 1;
		
		case 102:
			return 2;
		
		case 103:
			return 3;
		
		case 104:
			return 5;
		
		default:
	}
	return 6;
}

void func_639(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		
		case 100:
			uParam0->f_1 = iParam2;
			break;
		
		case 101:
			uParam0->f_2 = iParam2;
			break;
		
		case 102:
			uParam0->f_3 = iParam2;
			break;
		
		case 103:
			uParam0->f_4 = iParam2;
			break;
		
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return joaat("service_spend_island_heist_support_airstrike");
		
		case 100:
			return joaat("service_spend_island_heist_support_heavy_weapon");
		
		case 101:
			return joaat("service_spend_island_heist_support_sniper");
		
		case 102:
			return joaat("service_spend_island_heist_support_air_support");
		
		case 103:
			return joaat("service_spend_island_heist_support_drone");
		
		case 104:
			return joaat("service_spend_island_heist_support_weapon_stash");
		
		default:
	}
	return -2085313189;
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_29399;
		
		case 100:
			return Global_262145.f_29400;
		
		case 101:
			return Global_262145.f_29401;
		
		case 102:
			return Global_262145.f_29402;
		
		case 103:
			return Global_262145.f_29403;
		
		case 104:
			return Global_262145.f_29404;
		
		default:
	}
	return 0;
}

void func_642(var uParam0, int iParam1)
{
	if (uParam0->f_1092 != unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (Local_166.f_59.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_166.f_59.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_181[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_181[(iParam1 / 32)]), (iParam1 % 32));
}

void func_643(var uParam0)
{
	int iVar0;
	
	iVar0 = func_434(uParam0, unk_0x259BE71D8A81D4FA());
	if (iVar0 != -1)
	{
		if (uParam0->f_831.f_67[iVar0] == 0)
		{
			uParam0->f_831.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_831.f_67[iVar0] = 0;
		}
		func_644(uParam0->f_716, 1, func_645(uParam0));
		iLocal_154 = 1;
	}
}

void func_644(var uParam0, int iParam1, var uParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_LAUNCH_BUTTON");
	unk_0x557F1E2300EF1A3E(iParam1);
	func_454(uParam2);
	unk_0xE6B753D52F4CA222();
}

char* func_645(var uParam0)
{
	if (unk_0x834C960822A4683F())
	{
		if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
		{
			return "H4_FINALE_CONT";
		}
		else if (func_434(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
		{
			if (uParam0->f_831.f_67[func_434(uParam0, unk_0x259BE71D8A81D4FA())] == 0)
			{
				return "H4_FINALE_RDY";
			}
			else
			{
				return "H4_FINALE_NRDY";
			}
		}
	}
	return "CH_FINALE_LBS";
}

void func_646(var uParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1093), 8);
	uParam0->f_732.f_5 = 0;
	iLocal_155 = 6;
	iLocal_141 = 1;
	uParam0->f_707 = 0;
	func_37(uParam0, 15);
}

void func_647(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_638(bParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_438(unk_0x259BE71D8A81D4FA(), iVar0))
	{
		return;
	}
	if (!unk_0x0AF5E4A6C74DC312(func_641(bParam1), 0, 1, 0, -1, 0))
	{
		return;
	}
	func_648(uParam0->f_716, func_652(bParam1), func_651(bParam1), func_650(), func_649());
	uParam0->f_710 = 1;
	iLocal_159 = bParam1;
}

void func_648(var uParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4)
{
	unk_0x88F483FBD433696A(uParam0, "SHOW_OVERLAY");
	func_454(sParam1);
	func_454(sParam2);
	func_454(uParam3);
	func_454(sParam4);
	unk_0xE6B753D52F4CA222();
}

char* func_649()
{
	return "H4P_OVERLAY_CAN";
}

char* func_650()
{
	return "H4P_OVERLAY_CON";
}

char* func_651(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M";
		
		case 100:
			return "H4P_OVR_SC2_M";
		
		case 101:
			return "H4P_OVR_SC3_M";
		
		case 102:
			return "H4P_OVR_SC4_M";
		
		case 103:
			return "H4P_OVR_SC5_M";
		
		case 104:
			return "H4P_OVR_SC6_M";
		
		default:
	}
	return "";
}

char* func_652(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T";
		
		case 100:
			return "H4P_OVR_SC2_T";
		
		case 101:
			return "H4P_OVR_SC3_T";
		
		case 102:
			return "H4P_OVR_SC4_T";
		
		case 103:
			return "H4P_OVR_SC5_T";
		
		case 104:
			return "H4P_OVR_SC6_T";
		
		default:
	}
	return "";
}

void func_653(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	if (Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
	{
		Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44 = 0;
		func_599(uParam0->f_716, bParam1, 0);
	}
	else
	{
		Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44 = 1;
		func_599(uParam0->f_716, bParam1, 1);
	}
}

void func_654(var uParam0)
{
	if (func_437(uParam0->f_1092))
	{
		return;
	}
	if (!unk_0x0AF5E4A6C74DC312(Global_262145.f_29405, 0, 1, 0, -1, 0))
	{
		return;
	}
	func_648(uParam0->f_716, "H4P_OVR_SUP_T", "H4P_OVR_SUP_M", func_655(), func_649());
	uParam0->f_710 = 1;
	iLocal_159 = 59;
}

char* func_655()
{
	return "H4P_OVERLAY_ACC";
}

void func_656(var uParam0, int iParam1)
{
	if (func_400(uParam0->f_1092) == 0)
	{
		func_648(uParam0->f_716, func_658(iParam1), func_657(iParam1), func_655(), func_649());
		uParam0->f_710 = 1;
		iLocal_159 = iParam1;
	}
	else if (!func_19(uParam0->f_1092, 13))
	{
		func_659(uParam0, iParam1);
	}
}

char* func_657(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M";
		
		case 55:
			return "H4P_OVR_WL2_M";
		
		case 56:
			return "H4P_OVR_WL3_M";
		
		case 57:
			return "H4P_OVR_WL4_M";
		
		case 58:
			return "H4P_OVR_WL5_M";
		
		default:
	}
	return "";
}

char* func_658(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T";
		
		case 55:
			return "H4P_OVR_WL2_T";
		
		case 56:
			return "H4P_OVR_WL3_T";
		
		case 57:
			return "H4P_OVR_WL4_T";
		
		case 58:
			return "H4P_OVR_WL5_T";
		
		default:
	}
	return "";
}

void func_659(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_842(uParam0, bParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_18(uParam0, iVar0))
	{
		return;
	}
	if (func_841(iLocal_165, 0))
	{
		return;
	}
	iVar1 = func_678(unk_0x259BE71D8A81D4FA(), 256, 0);
	if (iVar1 != -1)
	{
		func_675(uParam0, bParam1, iVar1);
		return;
	}
	func_660(iVar0);
	Global_1972760[unk_0x383461852896D73D() /*27*/].f_23 = 1;
	Global_1972760[unk_0x383461852896D73D() /*27*/].f_24 = 0;
	iLocal_155 = 5;
	func_37(uParam0, 15);
}

void func_660(int iParam0)
{
	func_661(-1, iParam0);
}

void func_661(int iParam0, var uParam1)
{
	if (!func_112())
	{
		return;
	}
	if (!func_674(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_673(iParam0);
	}
	func_672(uParam1);
	func_662(256, -1);
}

void func_662(int iParam0, int iParam1)
{
	if ((func_112() || !func_671(1)) || func_670(iParam0) == 3)
	{
		if (!func_669(unk_0x259BE71D8A81D4FA(), 0) && !func_669(unk_0x259BE71D8A81D4FA(), 3))
		{
			func_668(iParam0);
			func_663(iParam0, func_667(1, 1), func_666(), func_665(), func_664(), iParam1);
		}
	}
}

void func_663(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<8> Var0;
	
	Var0.f_0 = 1613825825;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	Var0.f_4 = uParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = uParam4;
	Var0.f_7 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 8, iParam1, Var0.f_0);
	}
}

var func_664()
{
	return Global_2738934.f_5249.f_349;
}

var func_665()
{
	return Global_2738934.f_5249.f_348;
}

var func_666()
{
	return Global_2738934.f_5249.f_347;
}

int func_667(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_78(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_79(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

void func_668(int iParam0)
{
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_32 = iParam0;
}

int func_669(int iParam0, int iParam1)
{
	if (func_126(iParam0, 0))
	{
		return func_670(Global_1887305[iParam0 /*610*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
		case 337:
		case 338:
		case 339:
		case 340:
			return 0;
		
		case 276:
		case 267:
		case 318:
		case 314:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_671(bool bParam0)
{
	return func_243(unk_0x259BE71D8A81D4FA(), bParam0);
}

void func_672(var uParam0)
{
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_310 = uParam0;
}

void func_673(int iParam0)
{
	if (Global_2738934.f_5249.f_347 != iParam0)
	{
		Global_2738934.f_5249.f_347 = iParam0;
	}
}

bool func_674(int iParam0)
{
	return func_9(9517, iParam0) != 0;
}

void func_675(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 15:
			if (func_15(iLocal_165))
			{
				func_11("GENERAL_MLF_G1", -1);
			}
			else if (func_677(iLocal_165))
			{
				func_11("GENERAL_MLF_G2", -1);
			}
			else
			{
				func_11("GENERAL_MLF_G3", -1);
			}
			break;
		
		case 16:
			if (func_15(iLocal_165))
			{
				func_11("GENERAL_MLF_G4", -1);
			}
			else if (func_677(iLocal_165))
			{
				func_11("GENERAL_MLF_G5", -1);
			}
			else
			{
				func_11("GENERAL_MLF_G6", -1);
			}
			break;
		
		default:
			if (func_676(func_842(uParam0, iParam1)))
			{
				func_11("CSH_LAUNCHF_0", -1);
			}
			else
			{
				func_11("CSH_LAUNCHF_1", -1);
			}
			break;
	}
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_677(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

int func_678(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_710(func_813(iParam1, -1, -1, -1), func_770(iParam1, -1, 1, -1, -1, iParam0), func_719(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_15(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_708(iParam1) >= func_707(iVar0))
	{
		return 5;
	}
	if (func_706(iParam0))
	{
		return 6;
	}
	if (func_705(iParam0))
	{
		return 14;
	}
	if (func_704(iParam0) && !func_703(iParam0))
	{
		return 17;
	}
	iVar1 = func_698(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_670(iParam1) == 1)
	{
		if ((func_697() || func_696()) || ((!bParam2 && func_695() != 0) && func_670(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_670(iParam1) == 2)
	{
		if (!func_692(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1887305[iParam0 /*610*/].f_10.f_34 != func_25())
			{
				return 9;
			}
		}
		if (func_691(iParam0))
		{
			return 10;
		}
	}
	else if (func_689(iParam1))
	{
		if (func_23(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_688(iParam1))
	{
		if (func_687())
		{
			return 13;
		}
		if (func_684())
		{
			return 12;
		}
	}
	if (func_23(iParam0) + 1 < func_683(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_680(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_679(iParam0, 21) || func_679(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_679(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_680(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if (!func_681(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_128(iVar1, 31))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_681(int iParam0, int iParam1, bool bParam2)
{
	if (func_17(iParam1))
	{
		if (!bParam2)
		{
			if (func_682(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1887305[iParam0 /*610*/].f_10 != func_25())
		{
			return iParam1 == Global_1887305[iParam0 /*610*/].f_10;
		}
	}
	return 0;
}

int func_682(int iParam0, int iParam1)
{
	if (iParam1 != func_25())
	{
		if (iParam0 != func_25())
		{
			if (Global_1887305[iParam0 /*610*/].f_10 != func_25())
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18459;
		
		case 183:
			return Global_262145.f_18467;
		
		case 185:
			return Global_262145.f_18476;
		
		case 182:
			return Global_262145.f_18487;
		
		case 186:
			return Global_262145.f_18496;
		
		case 195:
			return Global_262145.f_18514;
		
		case 198:
			return Global_262145.f_18524;
		
		case 197:
			return Global_262145.f_18536;
		
		case 207:
			return Global_262145.f_18544;
		
		case 209:
			return Global_262145.f_18556;
		
		case 208:
			return Global_262145.f_18564;
		
		case 201:
			return Global_262145.f_18593;
		
		case 211:
			return Global_262145.f_18654;
		
		case 193:
			return Global_262145.f_18676;
		
		case 205:
			return Global_262145.f_18693;
		
		case 189:
			return Global_262145.f_18660;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_684()
{
	if (Global_1943381)
	{
		return 0;
	}
	return func_685();
}

int func_685()
{
	if (func_686())
	{
		return 1;
	}
	return Global_2684504.f_746;
}

bool func_686()
{
	return Global_1575036 == 10;
}

bool func_687()
{
	return Global_262145.f_15623;
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_690(iParam0, 0);
	return 0;
}

int func_690(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_691(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if ((Global_1887305[iParam0 /*610*/].f_10.f_34 != func_25() && Global_1887305[iParam0 /*610*/].f_10.f_34 == iVar1) && Global_1887305[iVar1 /*610*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_694() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_693() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_693() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_693()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_108(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_694()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_695()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_103;
}

bool func_696()
{
	return Global_1916617.f_11.f_144 != -1;
}

bool func_697()
{
	return Global_1916617.f_11.f_143 != -1;
}

int func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_700())
	{
		iVar1 = Global_1887305[iParam0 /*610*/].f_10.f_11[iVar0];
		if (iVar1 != func_25())
		{
			if (unk_0x762604C40829DB72(iVar1))
			{
				if (func_706(iVar1))
				{
					return 7;
				}
				if (func_705(iVar1))
				{
					return 15;
				}
				if (func_699(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_699(int iParam0)
{
	if (iParam0 == func_25())
	{
		return 0;
	}
	if (((((BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 2) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 3)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 5)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 6)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 7)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_700()
{
	return (func_701() - 1);
}

int func_701()
{
	return func_702(unk_0x259BE71D8A81D4FA());
}

int func_702(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_17(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == 1)
	{
		return 8;
	}
	return 4;
}

int func_703(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_186(Global_2657971[iParam0 /*465*/].f_322.f_8) == 23;
			}
		}
	}
	return 0;
}

int func_704(int iParam0)
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2708056;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_706(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13019;
		
		case 155:
			return Global_262145.f_13044;
		
		case 153:
			return Global_262145.f_13008;
		
		case 163:
			return Global_262145.f_12984;
		
		case 160:
			return Global_262145.f_12997;
		
		case 154:
			return Global_262145.f_13054;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15454;
		
		case 172:
			return Global_262145.f_15472;
		
		case 148:
			return Global_262145.f_18572;
		
		case 179:
			return Global_262145.f_18578;
		
		case 201:
			return Global_262145.f_18590;
		
		case 200:
			return Global_262145.f_18628;
		
		case 211:
			return Global_262145.f_18652;
		
		case 194:
			return Global_262145.f_18664;
		
		case 193:
			return Global_262145.f_18674;
		
		case 210:
			return Global_262145.f_18686;
		
		case 205:
			return Global_262145.f_18691;
		
		case 199:
			return Global_262145.f_18704;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_708(int iParam0)
{
	return Global_1916617.f_11.f_147[func_709(iParam0)];
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		case 267:
			return 80;
		
		case 291:
			return 81;
		
		case 292:
			return 82;
		
		case 293:
			return 83;
		
		case 294:
			return 84;
		
		case 295:
			return 85;
		
		case 296:
			return 86;
		
		case 297:
			return 87;
		
		case 298:
			return 88;
		
		case 299:
			return 89;
		
		case 300:
			return 90;
		
		case 301:
			return 91;
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		case 312:
			return 98;
		
		case 313:
			return 99;
		
		case 314:
			return 100;
		
		case 315:
			return 101;
		
		case 316:
			return 102;
		
		case 317:
			return 103;
		
		case 318:
			return 104;
		
		case 322:
			return 105;
		
		case 323:
			return 106;
		
		case 324:
			return 107;
		
		case 325:
			return 108;
		
		case 326:
			return 109;
		
		case 327:
			return 110;
		
		case 328:
			return 111;
		
		case 329:
			return 112;
		
		case 330:
			return 113;
		
		case 331:
			return 114;
		
		case 332:
			return 115;
		
		case 333:
			return 116;
		
		case 337:
			return 117;
		
		case 338:
			return 118;
		
		case 339:
			return 119;
		
		case 340:
			return 120;
		
		default:
	}
	return -1;
}

int func_710(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_718(iParam0, bParam3, bParam4) || func_717(iParam1, bParam3, bParam4)) || func_711(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_711(int iParam0, bool bParam1, bool bParam2)
{
	return func_712(2, iParam0, 0, bParam1, bParam2);
}

int func_712(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_716(iParam0) - func_715(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_715(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_716(iParam0) - func_714(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_715(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_716(iParam0) - func_715(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_713(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_713(int iParam0)
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

int func_714(int iParam0)
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

int func_715(int iParam0, bool bParam1)
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

int func_716(int iParam0)
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

int func_717(int iParam0, bool bParam1, bool bParam2)
{
	return func_712(1, iParam0, 0, bParam1, bParam2);
}

int func_718(int iParam0, bool bParam1, bool bParam2)
{
	return func_712(0, iParam0, 0, bParam1, bParam2);
}

int func_719(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_769(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_767(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_761(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_749(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 233:
			return func_742(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_735(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_732(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_731(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_727(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 158:
			return func_723(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 181:
			return func_720(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_722(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_721(iParam0, iParam2));
	return iVar0;
}

int func_721(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_722(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_723(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_726(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_724(iParam0, iParam2));
	return iVar0;
}

int func_724(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_243(iParam1, 1))
			{
				Var0 = { func_725(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_725(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_10.f_307;
}

int func_726(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_727(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_730(iParam0, iParam1, iParam3);
	if (!func_729(iParam0))
	{
		iVar0 = (iVar0 + func_728(iParam0, iParam2));
	}
	return iVar0;
}

int func_728(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_23(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_729(int iParam0)
{
	return 0;
}

int func_730(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_732(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_734(iParam0, iParam1);
	if (func_733(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_733(int iParam0)
{
	return 1;
}

int func_734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_735(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_741(iParam0, iParam1);
	if (!func_740(iParam0))
	{
		iVar0 = (iVar0 + func_736(iParam0, func_22() + 1));
	}
	if (iParam0 == 14 || ((((func_740(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_736(iParam0, func_22() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_736(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_739(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_738(iParam0, iParam1);
			iVar2 = func_737(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_740(iParam0))
		{
			if (iVar0 > Global_262145.f_18231)
			{
				iVar0 = Global_262145.f_18231;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18230)
			{
				iVar0 = Global_262145.f_18230;
			}
			if (iVar0 > Global_262145.f_18229)
			{
				iVar0 = Global_262145.f_18229;
			}
		}
	}
	return iVar0;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18268;
		
		case 10:
			return Global_262145.f_18293;
		
		default:
	}
	return 1;
}

int func_738(int iParam0, int iParam1)
{
	if (func_740(iParam0))
	{
		if (iParam1 >= Global_262145.f_18232)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18269;
		
		case 10:
			return Global_262145.f_18294;
		
		default:
	}
	return 8;
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_748(iParam0, iParam1, iParam2, iParam4);
	if (!func_747(iParam0))
	{
		if (iParam3 != func_25())
		{
			iVar0 = (iVar0 + func_744(iParam0, func_23(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_743(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_744(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_747(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_746(iParam0))
	{
		iVar0 = func_746(iParam0);
	}
	else if (iVar0 < func_745(iParam0))
	{
		iVar0 = func_745(iParam0);
	}
	return iVar0;
}

int func_745(int iParam0)
{
	return 1;
}

int func_746(int iParam0)
{
	return 4;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_748(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_749(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_760(iParam0, iParam1, iParam2, iParam4);
	if (!func_759(iParam0))
	{
		if (iParam3 != func_25())
		{
			iVar0 = (iVar0 + func_751(iParam0, func_23(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_750(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_751(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_758(iParam0))
	{
		iVar1 = func_757(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_756(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_755(iParam2))
		{
			iVar0 = func_755(iParam2);
		}
	}
	if (iVar0 > func_753(iParam0))
	{
		iVar0 = func_753(iParam0);
	}
	else if (iVar0 < func_752(iParam0))
	{
		iVar0 = func_752(iParam0);
	}
	return iVar0;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_753(int iParam0)
{
	if (!func_758(iParam0))
	{
		if (func_759(iParam0))
		{
			if (func_754(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_755(int iParam0)
{
	if (iParam0 == func_25() || Global_1845281[iParam0 /*883*/].f_268.f_297 == 0)
	{
		return 50;
	}
	return (50 - Global_1845281[iParam0 /*883*/].f_268.f_297.f_3);
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_757(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_758(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_759(int iParam0)
{
	if (func_758(iParam0) || func_756(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_760(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_761(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_766(iParam0, iParam1, iParam2, iParam3);
	if (!func_765(iParam0))
	{
		iVar0 = (iVar0 + func_763(iParam0, func_22() + 1, -1, iParam2));
	}
	if (func_762(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_763(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_764(iParam0))
	{
		if (iParam2 <= Global_262145.f_21393)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21394)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_765(iParam0))
	{
		if (iParam1 < Global_262145.f_21353)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_766(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_767(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_768(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_768(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_770(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_812(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_808(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_804(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_798(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(iParam5), 0, 0, 0);
		
		case 233:
			return func_792(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(bParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_791(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_790(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_789(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_783(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 158:
			return func_777(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 181:
			return func_771(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_771(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_776(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_775(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_774(func_23(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_773(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_772(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_772(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_773(int iParam0, int iParam1)
{
	return func_772(iParam0, iParam1) > 0;
}

int func_774(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_775(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_782(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_781(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_780(func_23(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_779(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_778(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_778(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_779(int iParam0, int iParam1)
{
	return func_778(iParam0, iParam1) > 0;
}

int func_780(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_25())
			{
				if (func_243(iParam2, 1))
				{
					Var0 = { func_725(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_781(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_782(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_783(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_729(iParam0))
		{
			iVar0 = (iVar0 + func_728(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_788(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_787(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_786(func_23(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_785(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_784(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_784(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_785(int iParam0, int iParam1)
{
	return func_784(iParam0, iParam1) > 0;
}

int func_786(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_787(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_788(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_790(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_733(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_791(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_740(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_736(iParam0, func_22() + 1));
	}
	return iVar0;
}

int func_792(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_747(iParam0))
		{
			if (iParam3 != func_25())
			{
				iVar0 = (iVar0 + func_744(iParam0, func_23(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_25())
		{
			iVar0 = (iVar0 + func_797(iParam0, func_23(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_796(0, iParam1) != -1)
		{
			if (iParam3 != func_25())
			{
				iVar0 = (iVar0 + func_795(func_23(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_794(iParam0))
		{
			iVar0 = (iVar0 + func_793(iParam0));
		}
	}
	return iVar0;
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_794(int iParam0)
{
	return func_793(iParam0) > 0;
}

int func_795(var uParam0, int iParam1)
{
	return 2;
}

int func_796(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_797(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_9(5329, -1);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_798(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_759(iParam0))
		{
			if (iParam3 != func_25())
			{
				iVar0 = (iVar0 + func_751(iParam0, func_23(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_25())
		{
			iVar0 = (iVar0 + func_803(iParam0, func_23(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_802(0, iParam1) != -1)
		{
			if (iParam3 != func_25())
			{
				iVar0 = (iVar0 + func_801(func_23(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_800(iParam0))
		{
			iVar0 = (iVar0 + func_799(iParam0));
		}
	}
	return iVar0;
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_800(int iParam0)
{
	return func_799(iParam0) > 0;
}

int func_801(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_754(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_754(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_754(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_802(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_803(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return system::ceil((IntToFloat(iParam1) / 2f));
}

int func_804(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_763(iParam0, func_22() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_765(iParam0))
		{
			iVar0 = (iVar0 + func_763(iParam0, func_22() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_807(iParam0, func_22() + 1));
	}
	if (!bParam3)
	{
		if (func_806(iParam0))
		{
			iVar0 = (iVar0 + func_805(iParam0));
		}
	}
	return iVar0;
}

int func_805(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_806(int iParam0)
{
	return func_805(iParam0) > 0;
}

int func_807(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return system::floor((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return system::floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_808(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_811(iParam0, func_22() + 1, iParam2));
	iVar0 = (iVar0 + func_809(iParam0));
	return iVar0;
}

int func_809(int iParam0)
{
	if (func_810(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_811(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_813(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_840(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_837(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_834(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_831(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_828(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_827(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_826();
		
		case 218:
			return func_825();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_824(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_823(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_820(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_817(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_814(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_814(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_773(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_815(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_815(int iParam0, var uParam1)
{
	if (func_773(iParam0, uParam1))
	{
		return (func_772(iParam0, uParam1) + func_816(iParam0, uParam1));
	}
	return 0;
}

int func_816(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_817(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_779(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_818(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_818(int iParam0, int iParam1)
{
	if (func_779(iParam0, iParam1))
	{
		return (func_778(iParam0, iParam1) + func_819(iParam0, iParam1));
	}
	return 0;
}

int func_819(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_820(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_785(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_821(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_821(int iParam0, int iParam1)
{
	if (func_785(iParam0, iParam1))
	{
		return (func_784(iParam0, iParam1) + func_822(iParam0, iParam1));
	}
	return 0;
}

int func_822(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_823(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_824(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_825()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_826()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_827(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_736(iParam0, func_22() + 1));
	}
	return iVar0;
}

int func_828(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_794(iParam0))
		{
			iVar0 = (iVar0 + func_829(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_829(int iParam0, var uParam1)
{
	if (func_794(iParam0))
	{
		return (func_793(iParam0) + func_830(iParam0, uParam1));
	}
	return 0;
}

int func_830(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_831(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_800(iParam0))
		{
			iVar0 = (iVar0 + func_832(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_832(int iParam0, int iParam1)
{
	if (func_800(iParam0))
	{
		return (func_799(iParam0) + func_833(iParam0, iParam1));
	}
	return 0;
}

int func_833(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_834(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_806(iParam0))
		{
			iVar0 = (iVar0 + func_835(iParam0));
		}
	}
	return iVar0;
}

int func_835(int iParam0)
{
	if (func_806(iParam0))
	{
		return (func_805(iParam0) + func_836(iParam0));
	}
	return 0;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_837(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_838(iParam0));
	return iVar0;
}

int func_838(int iParam0)
{
	if (func_810(iParam0))
	{
		if (func_839(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_841(int iParam0, int iParam1)
{
	if (func_17(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_32 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_842(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 40:
			return 7;
		
		case 42:
			return 5;
		
		case 44:
			return 3;
		
		case 45:
			return 4;
		
		case 46:
			return 1;
		
		case 48:
			return 2;
		
		case 47:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 8;
		
		case 53:
			return 9;
		
		case 51:
			return func_408(uParam0->f_1092);
		
		case 52:
			return 12;
		
		case 54:
			return 13;
		
		case 55:
			return 13;
		
		case 56:
			return 13;
		
		case 57:
			return 13;
		
		case 58:
			return 13;
		
		case 59:
			return 13;
		
		case 60:
			return 14;
		
		case 61:
			return 15;
		
		case 62:
			return 16;
		
		default:
	}
	return -1;
}

void func_843(var uParam0)
{
	func_648(uParam0->f_716, "H4P_OVR_GAT_T", func_844(uParam0), func_655(), func_649());
	uParam0->f_710 = 1;
	iLocal_159 = 1;
}

char* func_844(var uParam0)
{
	if (func_845(uParam0->f_1092))
	{
		return "H4P_OVR_GAT_2";
	}
	return "H4P_OVR_GAT_M";
}

int func_845(int iParam0)
{
	if (((func_852(iParam0) && func_851(iParam0)) && func_850(iParam0)) && func_846(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0)
{
	if (iParam0 != -1)
	{
		if (((((func_849(iParam0) && func_848(iParam0)) && func_847(iParam0)) && func_409(iParam0)) && func_430(iParam0)) && func_428(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_847(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_411(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_848(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_417(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_849(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_423(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_850(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_401(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_851(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_405(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_852(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((func_853(iParam0, 0) && func_853(iParam0, 1)) && func_853(iParam0, 2)) && func_853(iParam0, 3)) && func_853(iParam0, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_853(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1973625[iParam0 /*53*/].f_5.f_10.f_1 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_5 && Global_1973625[iParam0 /*53*/].f_5.f_10.f_9 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Global_1973625[iParam0 /*53*/].f_5.f_10.f_2 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_6 && Global_1973625[iParam0 /*53*/].f_5.f_10.f_10 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_1973625[iParam0 /*53*/].f_5.f_10.f_3 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_7 && Global_1973625[iParam0 /*53*/].f_5.f_10.f_11 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_1973625[iParam0 /*53*/].f_5.f_10.f_4 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_8 && Global_1973625[iParam0 /*53*/].f_5.f_10.f_12 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Global_1973625[iParam0 /*53*/].f_5.f_10.f_17 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_854(int iParam0)
{
	if (unk_0xA6F779AA284EB20E(uLocal_137))
	{
		*iParam0 = unk_0x5DEF122A58D4F685(uLocal_137);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_855(var uParam0)
{
	int iVar0;
	
	if (!iLocal_138)
	{
		return;
	}
	iVar0 = -1;
	if (func_858(&iVar0))
	{
		uParam0->f_812.f_8 = uParam0->f_812;
		uParam0->f_812 = iVar0;
		Global_1973625[unk_0x383461852896D73D() /*53*/].f_4 = iVar0;
		uParam0->f_710 = 1;
		if (func_446(uParam0->f_812) && uParam0->f_1106)
		{
			func_857(uParam0);
			uParam0->f_1106 = 0;
		}
		func_856(uParam0, uParam0->f_812);
		iLocal_138 = 0;
		iLocal_142 = 0;
	}
}

void func_856(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 36:
			if (!unk_0x834C960822A4683F())
			{
				func_642(uParam0, 19);
			}
			break;
		
		case 63:
			if (!unk_0x834C960822A4683F())
			{
				func_642(uParam0, 37);
			}
			break;
		
		case 1000:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 52);
			}
			else
			{
				func_642(uParam0, 50);
			}
			break;
		
		case 105:
		case 106:
		case 107:
		case 108:
			func_642(uParam0, 51);
			break;
	}
	if (unk_0x834C960822A4683F())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_642(uParam0, 40);
				break;
			
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_642(uParam0, 38);
				break;
			
			case 85:
			case 86:
				func_642(uParam0, 42);
				break;
			
			case 87:
			case 88:
			case 89:
			case 90:
				func_642(uParam0, 39);
				break;
			
			case 91:
			case 92:
				func_642(uParam0, 41);
				break;
			}
	}
}

void func_857(var uParam0)
{
	func_648(uParam0->f_716, "H4P_OVR_CRE_T", "H4P_OVR_CRE_M", func_650(), "");
	uParam0->f_710 = 1;
	uParam0->f_812 = 1002;
	iLocal_159 = -4;
}

int func_858(int iParam0)
{
	if (unk_0xA6F779AA284EB20E(uLocal_136))
	{
		*iParam0 = unk_0x5DEF122A58D4F685(uLocal_136);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_859(var uParam0)
{
	if (iLocal_151 && !func_881(uParam0))
	{
		iLocal_151 = 0;
		return;
	}
	if (unk_0x834C960822A4683F())
	{
		func_879(uParam0);
		func_874(uParam0);
		func_871(uParam0);
	}
	func_870(uParam0);
	func_866(uParam0);
	func_864(uParam0);
	func_861(uParam0);
	func_860(uParam0);
	iLocal_151 = 1;
}

void func_860(var uParam0)
{
	if (func_881(uParam0))
	{
		unk_0x0EE2019295C31BBA(3);
		unk_0x0EE2019295C31BBA(4);
		unk_0x0EE2019295C31BBA(13);
	}
}

void func_861(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (iLocal_157 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1973625[uParam0->f_1092 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_157, bVar0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_157, bVar0);
				func_599(uParam0->f_716, func_863(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_146 != func_437(uParam0->f_1092))
	{
		bLocal_146 = func_437(uParam0->f_1092);
		func_633(uParam0->f_716, 59, 1);
	}
	if (iLocal_147 != Global_1973625[uParam0->f_1092 /*53*/].f_5.f_44)
	{
		iLocal_147 = Global_1973625[uParam0->f_1092 /*53*/].f_5.f_44;
		func_599(uParam0->f_716, 98, iLocal_147);
	}
	if (unk_0x834C960822A4683F())
	{
		return;
	}
	if (uParam0->f_812 != Global_1973625[uParam0->f_1092 /*53*/].f_4)
	{
		uParam0->f_812 = Global_1973625[uParam0->f_1092 /*53*/].f_4;
		bVar1 = uParam0->f_812;
		if (bVar1 != 1002 && bVar1 != 1001)
		{
			func_862(uParam0->f_716, bVar1);
		}
	}
	if (iLocal_142 != Global_1973625[uParam0->f_1092 /*53*/].f_51)
	{
		iLocal_142 = Global_1973625[uParam0->f_1092 /*53*/].f_51;
	}
	if (bLocal_144 != Global_1973625[uParam0->f_1092 /*53*/].f_52)
	{
		bLocal_144 = Global_1973625[uParam0->f_1092 /*53*/].f_52;
	}
}

void func_862(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CURRENT_SELECTION");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_863(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 99;
		
		case 1:
			return 101;
		
		case 2:
			return 102;
		
		case 3:
			return 103;
		
		case 4:
			return 100;
		
		case 5:
			return 104;
		
		default:
	}
	return 0;
}

void func_864(var uParam0)
{
	if (bLocal_144)
	{
		if (!iLocal_145)
		{
			func_865(uParam0->f_716, 1);
			iLocal_145 = 1;
		}
	}
	else if (iLocal_145)
	{
		func_865(uParam0->f_716, 0);
		iLocal_145 = 0;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA() && Global_1973625[unk_0x383461852896D73D() /*53*/].f_52 != iLocal_145)
	{
		Global_1973625[unk_0x383461852896D73D() /*53*/].f_52 = iLocal_145;
	}
}

void func_865(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_MAP_VIEW");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

void func_866(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_812;
	if (iLocal_142)
	{
		if (!iLocal_143)
		{
			if (func_386(uParam0, iVar0))
			{
				func_869(uParam0->f_716, func_387(uParam0, iVar0));
				func_868(uParam0, iVar0);
				iLocal_143 = 1;
			}
			else
			{
				iLocal_142 = 0;
			}
		}
	}
	else if (iLocal_143)
	{
		func_867(uParam0->f_716);
		iLocal_143 = 0;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA() && Global_1973625[unk_0x383461852896D73D() /*53*/].f_51 != iLocal_143)
	{
		Global_1973625[unk_0x383461852896D73D() /*53*/].f_51 = iLocal_143;
	}
}

void func_867(var uParam0)
{
	unk_0xB750FE3C9F094356(uParam0, "HIDE_TIP_TEXT");
}

void func_868(var uParam0, int iParam1)
{
	if (func_392(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (func_19(uParam0->f_1092, 0))
			{
				func_642(uParam0, 5);
			}
			break;
		
		case 2:
			func_642(uParam0, 8);
			break;
		
		case 3:
			func_642(uParam0, 6);
			break;
		
		case 4:
			func_642(uParam0, 7);
			break;
		
		case 5:
			func_642(uParam0, 10);
			break;
		
		case 6:
			func_642(uParam0, 9);
			break;
		
		case 30:
			func_642(uParam0, 18);
			break;
		
		case 31:
			func_642(uParam0, 17);
			break;
		
		case 32:
			func_642(uParam0, 11);
			break;
		
		case 33:
			func_642(uParam0, 12);
			break;
		
		case 34:
			if (func_409(uParam0->f_1092))
			{
				func_642(uParam0, 14);
			}
			else
			{
				func_642(uParam0, 13);
			}
			break;
		
		case 35:
			if (func_410(uParam0->f_1092))
			{
				func_642(uParam0, 16);
			}
			else
			{
				func_642(uParam0, 15);
			}
			break;
		
		case 40:
			func_642(uParam0, 20);
			break;
		
		case 44:
			func_642(uParam0, 22);
			break;
		
		case 45:
			func_642(uParam0, 23);
			break;
		
		case 42:
			func_642(uParam0, 24);
			break;
		
		case 46:
		case 47:
			func_642(uParam0, 25);
			break;
		
		case 48:
		case 49:
			func_642(uParam0, 21);
			break;
		
		case 50:
			func_642(uParam0, 26);
			break;
		
		case 53:
			func_642(uParam0, 27);
			break;
		
		case 51:
			if (func_408(uParam0->f_1092) == 11)
			{
				if (!func_385(uParam0->f_1092))
				{
					func_642(uParam0, 28);
				}
				else
				{
					func_642(uParam0, 29);
				}
			}
			else
			{
				func_642(uParam0, 30);
			}
			break;
		
		case 52:
			func_642(uParam0, 31);
			break;
		
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_642(uParam0, 32);
			break;
		
		case 59:
			func_642(uParam0, 33);
			break;
		
		case 60:
			func_642(uParam0, 34);
			break;
		
		case 61:
			func_642(uParam0, 35);
			break;
		
		case 62:
			func_642(uParam0, 36);
			break;
		
		case 64:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 38);
			}
			break;
		
		case 66:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 39);
			}
			break;
		
		case 63:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 40);
			}
			break;
		
		case 67:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 41);
			}
			break;
		
		case 65:
			if (unk_0x834C960822A4683F())
			{
				func_642(uParam0, 42);
			}
			break;
		
		case 69:
			func_642(uParam0, 43);
			break;
		
		case 99:
			func_642(uParam0, 44);
			break;
		
		case 100:
			func_642(uParam0, 45);
			break;
		
		case 101:
			func_642(uParam0, 46);
			break;
		
		case 102:
			func_642(uParam0, 47);
			break;
		
		case 103:
			func_642(uParam0, 48);
			break;
		
		case 104:
			func_642(uParam0, 49);
			break;
	}
}

void func_869(var uParam0, var uParam1)
{
	unk_0x4A536D06AFED1D5B(uParam0, "SHOW_TIP_TEXT", uParam1, 0, 0, 0, 0);
}

void func_870(var uParam0)
{
	if (func_584(uParam0))
	{
		if (!iLocal_153)
		{
			func_644(uParam0->f_716, 1, func_645(uParam0));
			iLocal_153 = 1;
		}
	}
	else if (iLocal_153)
	{
		func_644(uParam0->f_716, 0, func_645(uParam0));
		iLocal_153 = 0;
	}
}

void func_871(var uParam0)
{
	if (func_873(uParam0))
	{
		if (!iLocal_152)
		{
			func_872(uParam0->f_716, 1);
			iLocal_152 = 1;
		}
	}
	else if (iLocal_152)
	{
		func_872(uParam0->f_716, 0);
		iLocal_152 = 0;
	}
}

void func_872(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CREW_CUTS_VISIBLE");
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0xE6B753D52F4CA222();
}

bool func_873(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_812;
	if (func_585(iVar0) != 2)
	{
		return 0;
	}
	return unk_0x834C960822A4683F();
}

void func_874(var uParam0)
{
	int iVar0;
	
	if (!iLocal_154)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_831.f_49)
	{
		if (uParam0->f_831.f_51[iVar0] != -1)
		{
			func_875(uParam0->f_716, func_878(iVar0), func_877(uParam0, iVar0), uParam0->f_831.f_56[iVar0], uParam0->f_831.f_239[iVar0], func_876(uParam0->f_831.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_154 = 0;
}

void func_875(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CREW_MEMBER");
	unk_0x330108B080A2132F(bParam1);
	func_611(unk_0xBD6CA019F46AB947(iParam2));
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x557F1E2300EF1A3E(iParam5);
	unk_0xE6B753D52F4CA222();
}

bool func_876(int iParam0)
{
	return iParam0 == 1;
}

int func_877(var uParam0, int iParam1)
{
	if (iParam1 != -1 && uParam0->f_831.f_51[iParam1] != -1)
	{
		return unk_0xB23E0F9B63D009A8(uParam0->f_831.f_51[iParam1]);
	}
	return func_25();
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		
		case 1:
			return 106;
		
		case 2:
			return 107;
		
		case 3:
			return 108;
		
		default:
	}
	return 0;
}

void func_879(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_831.f_49)
	{
		if (uParam0->f_831.f_51[iVar0] != -1)
		{
			iVar1 = func_880(func_877(uParam0, iVar0));
			if (uParam0->f_831.f_239[iVar0] != iVar1)
			{
				uParam0->f_831.f_239[iVar0] = iVar1;
				iLocal_154 = 1;
			}
		}
		iVar0++;
	}
}

int func_880(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_25() && unk_0x762604C40829DB72(iParam0))
	{
		Var0 = { func_219(iParam0) };
		if (func_218(Var0))
		{
			if (unk_0xC9D8BDF3564325CA(&Var0))
			{
				if (unk_0x6E171E077926FBF7(&Var0))
				{
					return 2;
				}
				else if (unk_0x73038C255039CB0A(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x73038C255039CB0A(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_881(var uParam0)
{
	switch (iLocal_159)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (func_377(&uLocal_162))
	{
		if (func_43(&uLocal_162, 4000, 0))
		{
			func_41(&uLocal_162);
		}
		return 1;
	}
	return 0;
}

void func_882(var uParam0)
{
	int iVar0;
	
	uParam0->f_831.f_49 = func_883(uParam0);
	switch (uParam0->f_831.f_49)
	{
		case 1:
			uParam0->f_831.f_56[0] = 100;
			uParam0->f_831.f_56[1] = 0;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 2:
			uParam0->f_831.f_56[0] = 85;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 3:
			uParam0->f_831.f_56[0] = 70;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 4:
			uParam0->f_831.f_56[0] = 55;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 15;
			uParam0->f_831.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[4] = uParam0->f_831.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
		{
			Global_1972760[unk_0x383461852896D73D() /*27*/].f_12[iVar0] = uParam0->f_831.f_56[iVar0];
		}
		if (uParam0->f_831.f_51[iVar0] == unk_0x383461852896D73D())
		{
			Global_2685444.f_6639 = uParam0->f_831.f_56[iVar0];
			Global_1941773.f_29 = Global_2685444.f_6639;
		}
		iVar0++;
	}
	iLocal_154 = 1;
}

int func_883(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x834C960822A4683F())
	{
		uParam0->f_831.f_51[0] = uParam0->f_1092;
		uParam0->f_831.f_51[1] = -1;
		uParam0->f_831.f_51[2] = -1;
		uParam0->f_831.f_51[3] = -1;
		return 1;
	}
	iVar0 = func_25();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_831.f_51[iVar1] = -1;
		uParam0->f_831.f_67[iVar1] = 0;
		uParam0->f_831.f_239[iVar1] = 0;
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_78(iVar0, 1, 1))
		{
			if (iVar0 != func_25())
			{
				if (!func_884(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_831.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

int func_884(int iParam0)
{
	if (func_79(iParam0, 0) || func_885(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_885(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_97.f_32, 5);
}

void func_886(var uParam0)
{
	switch (uParam0->f_732.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (unk_0x834C960822A4683F())
			{
				unk_0x80F87A4A3B930613();
			}
			break;
		
		case 5:
			break;
	}
}

void func_887(var uParam0)
{
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!iLocal_140)
			{
				func_991(uParam0);
				func_970(uParam0);
				func_969(uParam0);
				func_967(uParam0);
				func_925(uParam0);
				func_892(uParam0);
				iLocal_140 = 1;
			}
			break;
		
		case 4:
			iLocal_138 = 0;
			iLocal_139 = 0;
			func_891(uParam0);
			if (unk_0x834C960822A4683F())
			{
				unk_0x80F87A4A3B930613();
				unk_0x5C483F4653DC993C("h4_sub_commandroom_BloomRedux");
			}
			func_888();
			break;
		
		case 5:
			break;
	}
}

void func_888()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			func_889(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_889(var uParam0, int iParam1)
{
	func_890(uParam0, iParam1);
}

void func_890(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_891(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
	}
	if ((uParam0->f_1092 == iLocal_165 && !func_385(iLocal_165)) && !func_19(iLocal_165, 0))
	{
		iVar0 = func_9(9511, -1);
		if (!BitTest(iVar0, 13))
		{
			func_11("HIF_INTROVIBE", -1);
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 13);
			func_4(9511, iVar0, -1);
		}
	}
}

void func_892(var uParam0)
{
	bool bVar0;
	
	if (func_19(uParam0->f_1092, 0))
	{
		func_910(uParam0->f_716, 1, func_921(uParam0), func_913(uParam0), func_912(uParam0), func_911());
		func_909(uParam0->f_716, 99, func_641(99));
		func_909(uParam0->f_716, 100, func_641(100));
		func_909(uParam0->f_716, 101, func_641(101));
		func_909(uParam0->f_716, 102, func_641(102));
		func_909(uParam0->f_716, 103, func_641(103));
		func_909(uParam0->f_716, 104, func_641(104));
		if (unk_0x834C960822A4683F())
		{
			func_908(uParam0->f_716, 67, 63, 64, 66, 68, 69, 70, 65);
			func_644(uParam0->f_716, 1, func_645(uParam0));
			iLocal_153 = 1;
		}
		else
		{
			func_908(uParam0->f_716, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_906(uParam0->f_716, func_907(uParam0));
	}
	else
	{
		if (func_905(uParam0->f_1092))
		{
			func_642(uParam0, 2);
		}
		else if (func_385(uParam0->f_1092))
		{
			func_642(uParam0, 1);
		}
		if (func_904(uParam0->f_1092))
		{
			func_642(uParam0, 4);
		}
	}
	func_903(uParam0->f_716, func_904(uParam0->f_1092));
	func_900(uParam0->f_716, func_902(0), func_901(uParam0, 0), func_902(1), func_901(uParam0, 1), func_902(2), func_901(uParam0, 2));
	func_898(uParam0->f_716, func_899());
	func_865(uParam0->f_716, 0);
	bVar0 = func_897(uParam0);
	func_896(uParam0->f_716, bVar0);
	if (func_899() == 0)
	{
		uParam0->f_812 = 1;
	}
	else
	{
		uParam0->f_812 = 63;
	}
	if (uParam0->f_1092 == iLocal_165)
	{
		Global_1973625[unk_0x383461852896D73D() /*53*/].f_4 = uParam0->f_812;
	}
	else if (unk_0x834C960822A4683F())
	{
		uParam0->f_812 = 1000;
		func_862(uParam0->f_716, 1000);
	}
	else if (Global_1972760[uParam0->f_1092 /*27*/].f_20)
	{
		uParam0->f_812 = Global_1973625[unk_0x383461852896D73D() /*53*/].f_4;
		func_862(uParam0->f_716, uParam0->f_812);
	}
	if (bVar0 == 0)
	{
		func_37(uParam0, 18);
	}
	func_895(uParam0);
	func_893(uParam0);
}

void func_893(var uParam0)
{
	int iVar0;
	
	if (unk_0x834C960822A4683F() || uParam0->f_1092 != iLocal_165)
	{
		return;
	}
	iVar0 = func_9(9511, -1);
	if (func_19(uParam0->f_1092, 0) && !BitTest(iVar0, 16))
	{
		func_648(uParam0->f_716, "H4P_OVR_INT_T", "H4P_OVR_INT_M", func_655(), "");
		uParam0->f_710 = 1;
		uParam0->f_812 = 1002;
		iLocal_159 = -2;
		return;
	}
	if (func_894(uParam0->f_1092) && !BitTest(iVar0, 14))
	{
		func_648(uParam0->f_716, "H4P_OVR_MAN_T", "H4P_OVR_MAN_M", func_655(), "");
		uParam0->f_710 = 1;
		uParam0->f_812 = 1002;
		iLocal_159 = -3;
	}
}

int func_894(int iParam0)
{
	if (!func_618(iParam0, 1))
	{
		return 0;
	}
	if (!func_19(iParam0, 8) && !func_19(iParam0, 9))
	{
		return 0;
	}
	if (!func_20(iParam0, 10))
	{
		return 0;
	}
	if (!func_19(iParam0, 13))
	{
		return 0;
	}
	if (!func_19(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

void func_895(var uParam0)
{
	if (!uParam0->f_1088)
	{
		uParam0->f_1088.f_1 = unk_0xCA369FBC0DE29517();
		if (uParam0->f_1088.f_1 != -1)
		{
			unk_0xF37CDE164C892195(uParam0->f_1088.f_1, func_40(19), uParam0->f_738.f_6, func_39(19), 0, 0, 0);
			uParam0->f_1088 = 1;
		}
	}
}

void func_896(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SHOW_SCREEN");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_897(var uParam0)
{
	if (((unk_0x834C960822A4683F() || uParam0->f_1104) || (uParam0->f_1092 != iLocal_165 && Global_1972760[uParam0->f_1092 /*27*/].f_20)) || uParam0->f_1105)
	{
		return 1;
	}
	return 0;
}

void func_898(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_INITIAL_TAB_VIEW");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_899()
{
	if (unk_0x834C960822A4683F())
	{
		return 2;
	}
	return 0;
}

void func_900(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, var uParam5, bool bParam6)
{
	unk_0x88F483FBD433696A(uParam0, "SET_TABS");
	func_454(uParam1);
	unk_0x557F1E2300EF1A3E(bParam2);
	func_454(uParam3);
	unk_0x557F1E2300EF1A3E(bParam4);
	func_454(uParam5);
	unk_0x557F1E2300EF1A3E(bParam6);
	unk_0xE6B753D52F4CA222();
}

int func_901(var uParam0, int iParam1)
{
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_19(uParam0->f_1092, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_894(uParam0->f_1092))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB";
		
		case 1:
			return "H4P_PREP_TAB";
		
		case 2:
			return "H4P_FINALE_TAB";
		
		default:
	}
	return "";
}

void func_903(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_IS_HARD_MODE");
	unk_0x557F1E2300EF1A3E(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_904(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_905(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

void func_906(var uParam0, var uParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_LIST_TITLE");
	func_454(uParam1);
	unk_0xE6B753D52F4CA222();
}

char* func_907(var uParam0)
{
	if (!unk_0x834C960822A4683F() || uParam0->f_1092 != unk_0x259BE71D8A81D4FA())
	{
		return "H4P_LIST_PREV";
	}
	return "H4P_LIST_MAKE";
}

void func_908(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_MENU_IDS");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x330108B080A2132F(bParam5);
	unk_0x330108B080A2132F(bParam6);
	unk_0x330108B080A2132F(bParam7);
	unk_0x330108B080A2132F(bParam8);
	unk_0xE6B753D52F4CA222();
}

void func_909(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_COST");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0xE6B753D52F4CA222();
}

void func_910(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, var uParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_PAYOUTS");
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	func_454(uParam4);
	func_454(uParam5);
	unk_0xE6B753D52F4CA222();
}

char* func_911()
{
	return "H4_LOOT_ADD";
}

char* func_912(var uParam0)
{
	switch (func_548(uParam0->f_1092))
	{
		case 0:
			return "H4_LOOT_TEQ";
		
		case 1:
			return "H4_LOOT_NKLC";
		
		case 2:
			return "H4_LOOT_BONDS";
		
		case 3:
			return "H4_LOOT_DIAM";
		
		case 4:
			return "H4_LOOT_FILES";
		
		case 5:
			return "H4_LOOT_STAT";
		
		default:
	}
	return "";
}

int func_913(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (func_915(uParam0->f_1092, iVar1) * func_914(uParam0->f_1092, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_914(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_915(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_920(iParam0);
		
		case 1:
			return func_919(iParam0);
		
		case 2:
			return func_918(iParam0);
		
		case 3:
			return func_917(iParam0);
		
		case 4:
			return func_916(iParam0);
		
		default:
	}
	return 0;
}

int func_916(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_917(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_918(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_919(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_920(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

int func_921(var uParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_924(func_548(uParam0->f_1092));
	fVar1 = func_922(func_923(func_904(uParam0->f_1092), 2, 1));
	iVar0 = system::round((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

float func_922(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_29464;
		
		case 2:
			return Global_262145.f_29465;
		
		default:
	}
	return 1f;
}

int func_923(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_924(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_29458;
		
		case 1:
			return Global_262145.f_29459;
		
		case 2:
			return Global_262145.f_29460;
		
		case 3:
			return Global_262145.f_29461;
		
		case 4:
			return Global_262145.f_29462;
		
		case 5:
			return Global_262145.f_29463;
		
		default:
	}
	return 0;
}

void func_925(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_19(uParam0->f_1092, 0) && !func_385(uParam0->f_1092))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (func_966(uParam0->f_1092, bVar0) && func_965(uParam0->f_1092, bVar0))
		{
			iVar3 = func_964(uParam0->f_1092, bVar0);
			func_960(uParam0->f_716, func_963(iVar3), -1, func_962(iVar3), 0, func_961(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (func_959(uParam0->f_1092, bVar1) && func_958(uParam0->f_1092, bVar1))
		{
			iVar3 = func_957(uParam0->f_1092, bVar1);
			func_960(uParam0->f_716, func_963(iVar3), -1, func_962(iVar3), 1, func_956(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (func_955(uParam0->f_1092, iVar2) && func_954(uParam0->f_1092, iVar2))
		{
			func_960(uParam0->f_716, 11, -1, 7, 1, func_953(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_417(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, 33, -1, 2, 0, func_947(func_948(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_411(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, 34, -1, 2, 0, func_941(func_942(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_423(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, 32, -1, 2, 0, func_935(func_936(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (func_405(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, func_934(iVar4, 0), func_934(iVar4, 1), func_933(iVar4), 0, func_932(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_403(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, func_931(iVar4, 0), func_931(iVar4, 1), 1, 0, func_930(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_401(uParam0->f_1092, iVar4))
		{
			func_960(uParam0->f_716, func_929(iVar4, 0), func_929(iVar4, 1), 0, 1, func_928(iVar4));
		}
		iVar4++;
	}
	if (func_428(uParam0->f_1092))
	{
		func_960(uParam0->f_716, 31, -1, 2, 0, 4367,82f, -4579f, 23,06f);
	}
	if (func_430(uParam0->f_1092))
	{
		func_960(uParam0->f_716, 30, -1, 2, 0, 4480,7f, -4588,52f, 4,56f);
	}
	func_960(uParam0->f_716, 5, -1, 8, 0, 5020,635f, -5746,534f, 31,93707f);
	if (func_409(uParam0->f_1092))
	{
		func_960(uParam0->f_716, 35, -1, 2, 0, func_926(func_927(uParam0->f_1092)));
	}
}

Vector3 func_926(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4527,591f, -4526,633f, 3,211f;
		
		case 2:
			return 5152,974f, -4619,487f, 1,752f;
		
		case 3:
			return 5155,974f, -5132,699f, 1,312f;
		
		case 4:
			return 4900,456f, -5210,057f, 1,512f;
		
		case 5:
			return 4970,79f, -5695,73f, 18,888f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_927(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_928(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4982,59f, -5711,01f, 18,86f;
		
		case 1:
			return 5031,86f, -5685,84f, 23,87f;
		
		case 2:
			return 5085,03f, -5732,67f, 14,8f;
		
		case 3:
			return 4992,24f, -5807,17f, 24,87f;
		
		case 4:
			return 4960,13f, -5785,66f, 19,96f;
		
		case 5:
			return 5045,17f, -5817,24f, -12,7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_929(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			
			case 5:
				return 86;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 25;
			
			case 2:
				return 26;
			
			case 3:
				return 27;
			
			case 4:
				return 28;
			
			case 5:
				return 29;
			}
		
		default:
	}
	return -1;
}

Vector3 func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052,4f, -4655,79f, 3,18f;
		
		case 1:
			return 4799,21f, -5157,77f, -4,34f;
		
		case 2:
			return 5176,88f, -4752,2f, -4,11f;
		
		case 3:
			return 4533,25f, -4278,35f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_931(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			
			case 1:
				return 88;
			
			case 2:
				return 89;
			
			case 3:
				return 90;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			
			case 1:
				return 21;
			
			case 2:
				return 22;
			
			case 3:
				return 23;
			}
		
		default:
	}
	return -1;
}

Vector3 func_932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052,4f, -4655,79f, 3,18f;
		
		case 3:
			return 4799,21f, -5157,77f, -4,34f;
		
		case 4:
			return 5176,88f, -4752,2f, -4,11f;
		
		case 2:
			return 4891,13f, -4925,02f, 9,31f;
		
		case 5:
			return 4820,73f, -4302,71f, 4,24f;
		
		case 6:
			return 5478,63f, -5847,74f, 19,54f;
		
		case 7:
			return 5045,17f, -5817,24f, -12,7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 9;
		
		default:
	}
	return 0;
}

int func_934(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			
			case 1:
				return 78;
			
			case 2:
				return 79;
			
			case 3:
				return 80;
			
			case 4:
				return 81;
			
			case 5:
				return 82;
			
			case 6:
				return 83;
			
			case 7:
				return 84;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			
			case 1:
				return 13;
			
			case 2:
				return 14;
			
			case 3:
				return 15;
			
			case 4:
				return 16;
			
			case 5:
				return 17;
			
			case 6:
				return 18;
			
			case 7:
				return 19;
			}
		
		default:
	}
	return -1;
}

Vector3 func_935(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4534,709f, -4543,447f, 4,53f;
		
		case 1:
			return 4523,664f, -4511,79f, 4,184f;
		
		case 2:
			return 4076,849f, -4667,305f, 4,163f;
		
		case 3:
			return 4505,6f, -4653,089f, 10,456f;
		
		case 4:
			return 4805,025f, -4315,458f, 6,514f;
		
		case 5:
			return 5180,197f, -4670,979f, 6,231f;
		
		case 6:
			return 5098,02f, -4621,306f, 2,594f;
		
		case 7:
			return 5070,327f, -4638,299f, 2,902f;
		
		case 8:
			return 4955,743f, -5181,93f, 4,512f;
		
		case 9:
			return 5216,539f, -5126,448f, 5,984f;
		
		case 10:
			return 4879,029f, -5112,622f, 1,995f;
		
		case 11:
			return 4901,985f, -5348,011f, 9,409f;
		
		case 12:
			return 5362,94f, -5437,508f, 48,491f;
		
		case 13:
			return 5466,287f, -5232,051f, 27,065f;
		
		case 14:
			return 4754,99f, -5541,311f, 18,056f;
		
		case 15:
			return 5326,267f, -5266,071f, 32,237f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_936(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_940(iParam0);
			
			case 1:
				return func_939(iParam0);
			
			case 2:
				return func_938(iParam0);
			
			case 3:
				return func_937(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_937(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_938(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_939(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_940(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5163,384f, -4995,56f, 11,682f;
		
		case 1:
			return 4765,362f, -4778,338f, 2,781f;
		
		case 2:
			return 4502,198f, -4523,357f, 3,396f;
		
		case 3:
			return 4528,522f, -4536,311f, 6,558f;
		
		case 4:
			return 5098,933f, -4609,03f, 1,369f;
		
		case 5:
			return 5060,167f, -4589,7f, 1,9f;
		
		case 6:
			return 5148,113f, -4616,131f, 1,387f;
		
		case 7:
			return 5170,703f, -4675,337f, 1,439f;
		
		case 8:
			return 5116,664f, -5130,588f, 1,143f;
		
		case 9:
			return 5002,533f, -5125,336f, 1,955f;
		
		case 10:
			return 4949,935f, -5321,81f, 7,085f;
		
		case 11:
			return 5012,355f, -5203,456f, 1,516f;
		
		case 12:
			return 4923,873f, -5273,464f, 4,65f;
		
		case 13:
			return 5263,995f, -5435,548f, 64,881f;
		
		case 14:
			return 4886,995f, -5454,333f, 29,731f;
		
		case 15:
			return 5106,183f, -5524,682f, 53,239f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_942(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_946(iParam0);
			
			case 1:
				return func_945(iParam0);
			
			case 2:
				return func_944(iParam0);
			
			case 3:
				return func_943(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_943(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_944(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_945(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_946(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_947(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4896,678f, -4791,297f, 2,59f;
		
		case 1:
			return 4529,568f, -4703,347f, 3,134f;
		
		case 2:
			return 4493,661f, -4733,618f, 10,01f;
		
		case 3:
			return 3895,499f, -4695,022f, 5,547f;
		
		case 4:
			return 5103,035f, -4681,288f, 7,702f;
		
		case 5:
			return 5130,433f, -4610,441f, 11,724f;
		
		case 6:
			return 5109,232f, -4578,338f, 28,711f;
		
		case 7:
			return 4879,964f, -4487,782f, 9,922f;
		
		case 8:
			return 4901,395f, -5331,422f, 28,64f;
		
		case 9:
			return 4862,909f, -5158,419f, 2,283f;
		
		case 10:
			return 5124,89f, -5097,902f, 2,192f;
		
		case 11:
			return 4867,519f, -4642,129f, 13,571f;
		
		case 12:
			return 5568,438f, -5185,942f, 10,22f;
		
		case 13:
			return 5406,297f, -5170,91f, 31,198f;
		
		case 14:
			return 5265,993f, -5430,593f, 140,566f;
		
		case 15:
			return 5611,286f, -5654,516f, 9,051f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_948(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_952(iParam0);
			
			case 1:
				return func_951(iParam0);
			
			case 2:
				return func_950(iParam0);
			
			case 3:
				return func_949(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_949(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_950(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_951(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_952(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1973625[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5081,14f, -5758,794f, 15,981f;
		
		case 1:
			return 5027,032f, -5738,977f, 18,027f;
		
		case 2:
			return 5008,773f, -5783,208f, 17,99f;
		
		case 3:
			return 5014,587f, -5751,069f, 29,006f;
		
		case 4:
			return 5004,83f, -5755,521f, 29,006f;
		
		case 5:
			return 4995,553f, -5748,032f, 15,002f;
		
		case 6:
			return 4997,112f, -5745,52f, 15,001f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_954(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_955(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_956(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 5081,753f, -5754,63f, 15,764f;
		
		case 1:
			return 5082,945f, -5758,447f, 15,765f;
		
		case 2:
			return 5029,346f, -5733,933f, 17,81f;
		
		case 3:
			return 5029,777f, -5737,731f, 17,808f;
		
		case 4:
			return 5012,031f, -5788,325f, 17,773f;
		
		case 5:
			return 5006,233f, -5785,789f, 17,771f;
		
		case 6:
			return 4998,106f, -5752,379f, 14,783f;
		
		case 7:
			return 5003,947f, -5748,77f, 14,787f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_957(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_958(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_957(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_13, bParam1);
			
			case 1:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_14, bParam1);
			
			case 2:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_15, bParam1);
			
			case 3:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_16, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_959(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_960(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, struct<2> Param5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_WORLD_MAP_ICON");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x74BF156C860580D4(Param5.f_0);
	unk_0x74BF156C860580D4(Param5.f_1);
	unk_0xE6B753D52F4CA222();
}

Vector3 func_961(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 4447,822f, -4442,135f, 7,175f;
		
		case 1:
			return 4448,821f, -4444,858f, 7,182f;
		
		case 2:
			return 4435,688f, -4446,595f, 4,25f;
		
		case 3:
			return 4438,332f, -4445,811f, 4,267f;
		
		case 4:
			return 4506,064f, -4555,47f, 4,095f;
		
		case 5:
			return 4503,678f, -4556,323f, 4,096f;
		
		case 6:
			return 5064,635f, -4589,759f, 2,801f;
		
		case 7:
			return 5067,557f, -4590,849f, 2,795f;
		
		case 8:
			return 5092,602f, -4680,137f, 2,35f;
		
		case 9:
			return 5093,195f, -4683,354f, 2,35f;
		
		case 10:
			return 5091,02f, -4685,678f, 2,351f;
		
		case 11:
			return 5136,102f, -4613,863f, 2,401f;
		
		case 12:
			return 5131,834f, -4612,648f, 2,404f;
		
		case 13:
			return 5329,472f, -5272,372f, 33,13f;
		
		case 14:
			return 5328,096f, -5270,587f, 33,129f;
		
		case 15:
			return 5196,664f, -5133,933f, 3,284f;
		
		case 16:
			return 5196,121f, -5136,333f, 3,285f;
		
		case 17:
			return 5000,313f, -5163,344f, 2,697f;
		
		case 18:
			return 5001,3f, -5165,434f, 2,697f;
		
		case 19:
			return 4959,845f, -5107,064f, 2,911f;
		
		case 20:
			return 4962,675f, -5106,771f, 2,913f;
		
		case 21:
			return 4963,856f, -5109,32f, 2,912f;
		
		case 22:
			return 4926,316f, -5244,514f, 2,461f;
		
		case 23:
			return 4924,385f, -5245,882f, 2,461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_962(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 3;
		
		case 2:
			return 6;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_964(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_965(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_964(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_5, bParam1);
			
			case 1:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_6, bParam1);
			
			case 2:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_7, bParam1);
			
			case 3:
				return BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_8, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_966(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_967(var uParam0)
{
	int iVar0;
	
	if (!func_19(uParam0->f_1092, 0) && !func_385(uParam0->f_1092))
	{
		func_968(uParam0->f_716, Local_116[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_116.f_0)
	{
		if (Local_116[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_116[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_117.f_0)
	{
		if (Local_117[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_117[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_118.f_0)
	{
		if (Local_118[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_118[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if (Local_119[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_119[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121.f_0)
	{
		if (Local_121[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_121[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_120.f_0)
	{
		if (Local_120[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_120[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_122.f_0)
	{
		if (Local_122[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_122[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_123.f_0)
	{
		if (Local_123[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_123[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_124.f_0)
	{
		if (Local_124[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_124[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_125.f_0)
	{
		if (Local_125[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_125[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_126.f_0)
	{
		if (Local_126[iVar0 /*14*/])
		{
			func_968(uParam0->f_716, Local_126[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_127.f_0)
	{
		if (Local_127[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_127[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_128.f_0)
	{
		if (Local_128[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_128[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_129.f_0)
	{
		if (Local_129[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_129[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (Local_130[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_130[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (Local_131[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_131[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_132.f_0)
	{
		if (Local_132[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_132[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_133.f_0)
	{
		if (Local_133[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_133[iVar0 /*9*/], 0);
			if (Local_133[iVar0 /*9*/].f_2 != 98 || func_437(uParam0->f_1092))
			{
				func_599(uParam0->f_716, Local_133[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_134.f_0)
	{
		if (Local_134[iVar0 /*9*/])
		{
			func_610(uParam0->f_716, Local_134[iVar0 /*9*/], 0);
			if (func_438(uParam0->f_1092, func_638(Local_134[iVar0 /*9*/].f_2)))
			{
				func_599(uParam0->f_716, Local_134[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x834C960822A4683F() && uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		iVar0 = 0;
		while (iVar0 < Local_135.f_0)
		{
			if (Local_135[iVar0 /*9*/])
			{
				func_610(uParam0->f_716, Local_135[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_968(var uParam0, struct<14> Param1)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_SETUP_ITEM");
	unk_0x330108B080A2132F(Param1.f_1);
	unk_0x330108B080A2132F(Param1.f_2);
	unk_0x330108B080A2132F(Param1.f_3);
	func_454(Param1.f_4);
	unk_0x330108B080A2132F(Param1.f_5);
	unk_0x330108B080A2132F(Param1.f_6);
	unk_0x330108B080A2132F(Param1.f_7);
	unk_0x557F1E2300EF1A3E(Param1.f_8);
	func_454(Param1.f_9);
	unk_0x3585BEBEDC67FCC7(Param1.f_10);
	unk_0x557F1E2300EF1A3E(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		unk_0x330108B080A2132F(Param1.f_12);
		unk_0x330108B080A2132F(Param1.f_13);
	}
	unk_0xE6B753D52F4CA222();
}

void func_969(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_901(uParam0, 2))
	{
		return;
	}
	func_612(uParam0, &(Local_127[0 /*9*/]), 0, 63);
	func_612(uParam0, &(Local_127[1 /*9*/]), 0, 64);
	func_612(uParam0, &(Local_127[2 /*9*/]), 0, 65);
	func_612(uParam0, &(Local_127[3 /*9*/]), 0, 66);
	func_612(uParam0, &(Local_127[4 /*9*/]), 0, 67);
	func_612(uParam0, &(Local_127[5 /*9*/]), 0, 68);
	func_612(uParam0, &(Local_127[6 /*9*/]), 0, 69);
	if (unk_0x834C960822A4683F() && uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		func_612(uParam0, &(Local_127[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (func_19(uParam0->f_1092, 7))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 1) && func_19(uParam0->f_1092, 6))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 5))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 2) && func_19(uParam0->f_1092, 6))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 3))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 4))
	{
		func_612(uParam0, &(Local_128[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		bVar2 = (77 + iVar1);
		if (func_405(uParam0->f_1092, func_406(bVar2)))
		{
			func_612(uParam0, &(Local_129[iVar0 /*9*/]), 64, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (func_19(uParam0->f_1092, 8))
	{
		func_612(uParam0, &(Local_130[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 9))
	{
		func_612(uParam0, &(Local_130[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar2 = (87 + iVar1);
		if (func_403(uParam0->f_1092, func_404(bVar2)))
		{
			func_612(uParam0, &(Local_131[iVar0 /*9*/]), 66, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_612(uParam0, &(Local_132[0 /*9*/]), 67, 91);
	func_612(uParam0, &(Local_132[1 /*9*/]), 67, 92);
	if (func_400(uParam0->f_1092) == 1)
	{
		func_612(uParam0, &(Local_133[0 /*9*/]), 68, 93);
	}
	else if (func_400(uParam0->f_1092) == 2)
	{
		func_612(uParam0, &(Local_133[0 /*9*/]), 68, 94);
	}
	else if (func_400(uParam0->f_1092) == 3)
	{
		func_612(uParam0, &(Local_133[0 /*9*/]), 68, 95);
	}
	else if (func_400(uParam0->f_1092) == 4)
	{
		func_612(uParam0, &(Local_133[0 /*9*/]), 68, 96);
	}
	else if (func_400(uParam0->f_1092) == 5)
	{
		func_612(uParam0, &(Local_133[0 /*9*/]), 68, 97);
	}
	func_612(uParam0, &(Local_133[1 /*9*/]), 68, 98);
	bLocal_146 = func_437(uParam0->f_1092);
	func_612(uParam0, &(Local_134[0 /*9*/]), 69, 99);
	func_612(uParam0, &(Local_134[1 /*9*/]), 69, 100);
	func_612(uParam0, &(Local_134[2 /*9*/]), 69, 101);
	func_612(uParam0, &(Local_134[3 /*9*/]), 69, 102);
	func_612(uParam0, &(Local_134[4 /*9*/]), 69, 103);
	func_612(uParam0, &(Local_134[5 /*9*/]), 69, 104);
	if (unk_0x834C960822A4683F() && uParam0->f_1092 == unk_0x259BE71D8A81D4FA())
	{
		func_612(uParam0, &(Local_135[0 /*9*/]), 70, 105);
		func_612(uParam0, &(Local_135[1 /*9*/]), 70, 106);
		func_612(uParam0, &(Local_135[2 /*9*/]), 70, 107);
		func_612(uParam0, &(Local_135[3 /*9*/]), 70, 108);
	}
}

void func_970(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_901(uParam0, 1))
	{
		return;
	}
	func_971(uParam0, &(Local_122[0 /*14*/]), 1, 0, 36, 0);
	func_971(uParam0, &(Local_122[1 /*14*/]), 1, 0, 37, 0);
	func_971(uParam0, &(Local_122[2 /*14*/]), 1, 0, 38, 0);
	func_971(uParam0, &(Local_122[3 /*14*/]), 1, 0, 39, 0);
	func_971(uParam0, &(Local_123[0 /*14*/]), 1, 36, 40, 0);
	func_971(uParam0, &(Local_123[1 /*14*/]), 1, 36, 41, 0);
	func_971(uParam0, &(Local_123[2 /*14*/]), 1, 36, 42, 0);
	func_971(uParam0, &(Local_123[3 /*14*/]), 1, 36, 43, 0);
	func_971(uParam0, &(Local_123[4 /*14*/]), 1, 36, 44, 0);
	func_971(uParam0, &(Local_123[5 /*14*/]), 1, 36, 45, 0);
	func_971(uParam0, &(Local_123[6 /*14*/]), 1, 41, 46, 0);
	func_971(uParam0, &(Local_123[7 /*14*/]), 1, 41, 47, 0);
	func_971(uParam0, &(Local_123[8 /*14*/]), 1, 43, 48, 0);
	func_971(uParam0, &(Local_123[9 /*14*/]), 1, 43, 49, 0);
	func_971(uParam0, &(Local_124[0 /*14*/]), 1, 37, 50, 0);
	func_971(uParam0, &(Local_124[1 /*14*/]), 1, 37, 51, 0);
	func_971(uParam0, &(Local_124[2 /*14*/]), 1, 37, 52, 0);
	func_971(uParam0, &(Local_124[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		bVar2 = (54 + iVar1);
		if (!func_19(uParam0->f_1092, 13) || func_400(uParam0->f_1092) == func_636(bVar2))
		{
			func_971(uParam0, &(Local_125[iVar0 /*14*/]), 1, 38, bVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_971(uParam0, &(Local_125[iVar0 /*14*/]), 1, 38, 59, 0);
	func_971(uParam0, &(Local_126[0 /*14*/]), 1, 39, 60, 0);
	func_971(uParam0, &(Local_126[1 /*14*/]), 1, 39, 61, 0);
	func_971(uParam0, &(Local_126[2 /*14*/]), 1, 39, 62, 0);
}

void func_971(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = bParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK";
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK";
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_619(uParam0, bParam4);
		uParam1->f_5 = func_989(uParam0, bParam4);
		uParam1->f_6 = func_988(uParam0, bParam4);
		if (func_392(uParam0, bParam4))
		{
			uParam1->f_7 = func_614(uParam0, bParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_987(uParam0, bParam4);
		uParam1->f_9 = func_617(uParam0, bParam4);
		uParam1->f_10 = func_615(uParam0, bParam4);
		uParam1->f_11 = func_613(bParam4);
		if (func_975(uParam0, bParam4) != -2)
		{
			uParam1->f_12 = func_975(uParam0, bParam4);
			uParam1->f_13 = func_972(uParam0, bParam4);
		}
	}
}

int func_972(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_852(uParam0->f_1092))
			{
				return func_974(uParam0->f_1092);
			}
			return -1;
		
		case 3:
			return 8;
		
		case 4:
			return 4;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 7:
			if (func_973(uParam0->f_1092, 0, 0, 0) > 0 && func_914(uParam0->f_1092, 0, 0, 0) == func_973(uParam0->f_1092, 0, 0, 0))
			{
				return func_973(uParam0->f_1092, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_973(uParam0->f_1092, 1, 0, 0) > 0 && func_914(uParam0->f_1092, 1, 0, 0) == func_973(uParam0->f_1092, 1, 0, 0))
			{
				return func_973(uParam0->f_1092, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_973(uParam0->f_1092, 2, 0, 0) > 0 && func_914(uParam0->f_1092, 2, 0, 0) == func_973(uParam0->f_1092, 2, 0, 0))
			{
				return func_973(uParam0->f_1092, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_973(uParam0->f_1092, 3, 0, 0) > 0 && func_914(uParam0->f_1092, 3, 0, 0) == func_973(uParam0->f_1092, 3, 0, 0))
			{
				return func_973(uParam0->f_1092, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_973(uParam0->f_1092, 4, 0, 0) > 0 && func_914(uParam0->f_1092, 4, 0, 0) == func_973(uParam0->f_1092, 4, 0, 0))
			{
				return func_973(uParam0->f_1092, 4, 0, 0);
			}
			break;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 33:
			return 4;
		
		case 34:
			return 4;
		
		case 32:
			return 4;
		
		case 35:
			return 1;
		
		case 36:
			if (func_405(uParam0->f_1092, 5) || func_405(uParam0->f_1092, 6))
			{
				return 6;
			}
			return 5;
		
		case 37:
			if (!func_405(uParam0->f_1092, 7))
			{
				return 3;
			}
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 3;
	}
	return -2;
}

int func_973(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1973625[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_974(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + func_973(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + func_973(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + func_973(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + func_973(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + func_973(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_975(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_852(uParam0->f_1092))
			{
				return func_974(uParam0->f_1092);
			}
			return -1;
		
		case 3:
			return func_986(uParam0);
		
		case 4:
			return func_985(uParam0);
		
		case 5:
			return func_984(uParam0);
		
		case 6:
			return func_983(uParam0);
		
		case 7:
			if (func_973(uParam0->f_1092, 0, 0, 0) > 0 && func_914(uParam0->f_1092, 0, 0, 0) == func_973(uParam0->f_1092, 0, 0, 0))
			{
				return func_973(uParam0->f_1092, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_973(uParam0->f_1092, 1, 0, 0) > 0 && func_914(uParam0->f_1092, 1, 0, 0) == func_973(uParam0->f_1092, 1, 0, 0))
			{
				return func_973(uParam0->f_1092, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_973(uParam0->f_1092, 2, 0, 0) > 0 && func_914(uParam0->f_1092, 2, 0, 0) == func_973(uParam0->f_1092, 2, 0, 0))
			{
				return func_973(uParam0->f_1092, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_973(uParam0->f_1092, 3, 0, 0) > 0 && func_914(uParam0->f_1092, 3, 0, 0) == func_973(uParam0->f_1092, 3, 0, 0))
			{
				return func_973(uParam0->f_1092, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_973(uParam0->f_1092, 4, 0, 0) > 0 && func_914(uParam0->f_1092, 4, 0, 0) == func_973(uParam0->f_1092, 4, 0, 0))
			{
				return func_973(uParam0->f_1092, 4, 0, 0);
			}
			break;
		
		case 30:
			return func_982(func_430(uParam0->f_1092));
		
		case 31:
			return func_982(func_428(uParam0->f_1092));
		
		case 33:
			return func_981(uParam0);
		
		case 34:
			return func_980(uParam0);
		
		case 32:
			return func_979(uParam0);
		
		case 35:
			return func_982(func_409(uParam0->f_1092));
		
		case 36:
			return func_978(uParam0);
		
		case 37:
			return func_977(uParam0);
		
		case 38:
			if (func_19(uParam0->f_1092, 13))
			{
				return 1;
			}
			return 0;
		
		case 39:
			return func_976(uParam0);
	}
	return -2;
}

int func_976(var uParam0)
{
	int iVar0;
	
	if (func_19(uParam0->f_1092, 14))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 15))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_977(var uParam0)
{
	int iVar0;
	
	if (func_19(uParam0->f_1092, 8))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 9))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 11))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_978(var uParam0)
{
	int iVar0;
	
	if (func_19(uParam0->f_1092, 7))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 1) && func_19(uParam0->f_1092, 6))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 5))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 2) && func_19(uParam0->f_1092, 6))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 3))
	{
		iVar0++;
	}
	if (func_19(uParam0->f_1092, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_979(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_423(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_980(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_411(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_981(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_417(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_982(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_983(var uParam0)
{
	int iVar0;
	
	if (func_849(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_848(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_847(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_409(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_430(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_428(uParam0->f_1092))
	{
		iVar0++;
	}
	return iVar0;
}

int func_984(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_401(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_985(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_403(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_986(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_405(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_987(var uParam0, bool bParam1)
{
	if (func_392(uParam0, bParam1))
	{
		return 0;
	}
	switch (bParam1)
	{
		case 37:
		case 38:
			return 1;
		
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!func_618(uParam0->f_1092, 1))
			{
				return 1;
			}
			break;
		
		case 50:
		case 53:
			if (!func_19(uParam0->f_1092, 8) && !func_19(uParam0->f_1092, 9))
			{
				return 1;
			}
			break;
		
		case 51:
		case 52:
			return 1;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!func_19(uParam0->f_1092, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_988(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 53:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		default:
	}
	return 0;
}

int func_989(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return func_982(func_853(uParam0->f_1092, 0));
		
		case 8:
			return func_982(func_853(uParam0->f_1092, 1));
		
		case 9:
			return func_982(func_853(uParam0->f_1092, 2));
		
		case 10:
			return func_982(func_853(uParam0->f_1092, 3));
		
		case 11:
			return func_982(func_990(uParam0->f_1092));
		
		case 12:
			return func_982(func_405(uParam0->f_1092, 0));
		
		case 13:
			return func_982(func_405(uParam0->f_1092, 1));
		
		case 14:
			return func_982(func_405(uParam0->f_1092, 2));
		
		case 15:
			return func_982(func_405(uParam0->f_1092, 3));
		
		case 16:
			return func_982(func_405(uParam0->f_1092, 4));
		
		case 17:
			return func_982(func_405(uParam0->f_1092, 5));
		
		case 18:
			return func_982(func_405(uParam0->f_1092, 6));
		
		case 19:
			return func_982(func_405(uParam0->f_1092, 7));
		
		case 20:
			return func_982(func_403(uParam0->f_1092, 0));
		
		case 21:
			return func_982(func_403(uParam0->f_1092, 1));
		
		case 22:
			return func_982(func_403(uParam0->f_1092, 2));
		
		case 23:
			return func_982(func_403(uParam0->f_1092, 3));
		
		case 30:
			return func_982(func_430(uParam0->f_1092));
		
		case 31:
			return func_982(func_428(uParam0->f_1092));
		
		case 32:
			return func_982(func_849(uParam0->f_1092));
		
		case 33:
			return func_982(func_848(uParam0->f_1092));
		
		case 34:
			return func_982(func_847(uParam0->f_1092));
		
		case 35:
			return func_982(func_409(uParam0->f_1092));
		
		case 24:
			return func_982(func_401(uParam0->f_1092, 0));
		
		case 25:
			return func_982(func_401(uParam0->f_1092, 1));
		
		case 26:
			return func_982(func_401(uParam0->f_1092, 2));
		
		case 27:
			return func_982(func_401(uParam0->f_1092, 3));
		
		case 28:
			return func_982(func_401(uParam0->f_1092, 4));
		
		case 29:
			return func_982(func_401(uParam0->f_1092, 5));
		
		case 36:
			if (func_618(uParam0->f_1092, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (((func_20(uParam0->f_1092, 8) || func_20(uParam0->f_1092, 9)) && func_20(uParam0->f_1092, 10)) && func_20(uParam0->f_1092, 11))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_20(uParam0->f_1092, 12))
			{
				return 1;
			}
			break;
		
		case 39:
			if ((func_20(uParam0->f_1092, 13) && func_20(uParam0->f_1092, 14)) && func_20(uParam0->f_1092, 15))
			{
				return 1;
			}
			break;
		
		case 40:
			return func_982(func_20(uParam0->f_1092, 1));
		
		case 41:
			if (func_20(uParam0->f_1092, 2) && func_20(uParam0->f_1092, 7))
			{
				return 1;
			}
			break;
		
		case 42:
			return func_982(func_20(uParam0->f_1092, 3));
		
		case 43:
			if (func_20(uParam0->f_1092, 4) && func_20(uParam0->f_1092, 7))
			{
				return 2;
			}
			break;
		
		case 44:
			return func_982(func_20(uParam0->f_1092, 5));
		
		case 45:
			return func_982(func_20(uParam0->f_1092, 6));
		
		case 46:
			return func_982(func_20(uParam0->f_1092, 2));
		
		case 47:
			return func_982(func_20(uParam0->f_1092, 7));
		
		case 48:
			return func_982(func_20(uParam0->f_1092, 4));
		
		case 49:
			return func_982(func_20(uParam0->f_1092, 7));
		
		case 50:
			return func_982(func_20(uParam0->f_1092, 8));
		
		case 53:
			return func_982(func_20(uParam0->f_1092, 9));
		
		case 51:
			return func_982(func_20(uParam0->f_1092, 10));
		
		case 52:
			return func_982(func_20(uParam0->f_1092, 11));
		
		case 54:
			return func_982((func_20(uParam0->f_1092, 12) && func_400(uParam0->f_1092) == 1));
		
		case 55:
			return func_982((func_20(uParam0->f_1092, 12) && func_400(uParam0->f_1092) == 2));
		
		case 56:
			return func_982((func_20(uParam0->f_1092, 12) && func_400(uParam0->f_1092) == 3));
		
		case 57:
			return func_982((func_20(uParam0->f_1092, 12) && func_400(uParam0->f_1092) == 4));
		
		case 58:
			return func_982((func_20(uParam0->f_1092, 12) && func_400(uParam0->f_1092) == 5));
		
		case 59:
			return func_982(func_437(uParam0->f_1092));
		
		case 60:
			return func_982(func_20(uParam0->f_1092, 13));
		
		case 61:
			return func_982(func_20(uParam0->f_1092, 14));
		
		case 62:
			return func_982(func_20(uParam0->f_1092, 15));
	}
	return 0;
}

int func_990(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1973625[iParam0 /*53*/].f_5.f_10.f_17 == Global_1973625[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_991(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_971(uParam0, &(Local_116[0 /*14*/]), 0, 0, 1, 0);
	if (!func_19(uParam0->f_1092, 0) && !func_385(uParam0->f_1092))
	{
		return;
	}
	func_971(uParam0, &(Local_116[1 /*14*/]), 0, 0, 2, 0);
	func_971(uParam0, &(Local_116[2 /*14*/]), 0, 0, 3, 0);
	func_971(uParam0, &(Local_116[3 /*14*/]), 0, 0, 4, 0);
	func_971(uParam0, &(Local_116[4 /*14*/]), 0, 0, 5, 0);
	func_971(uParam0, &(Local_116[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar2 = (7 + iVar0);
		if (func_407(uParam0->f_1092, func_992(bVar2), 0, 0))
		{
			func_971(uParam0, &(Local_119[iVar1 /*14*/]), 0, 2, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_971(uParam0, &(Local_119[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar2 = (12 + iVar0);
		if (func_405(uParam0->f_1092, func_406(bVar2)))
		{
			func_971(uParam0, &(Local_117[iVar1 /*14*/]), 0, 3, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar2 = (20 + iVar0);
		if (func_403(uParam0->f_1092, func_404(bVar2)))
		{
			func_971(uParam0, &(Local_118[iVar1 /*14*/]), 0, 4, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		bVar2 = (24 + iVar0);
		if (func_401(uParam0->f_1092, func_402(bVar2)))
		{
			func_971(uParam0, &(Local_121[iVar1 /*14*/]), 0, 5, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_430(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (func_428(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_422(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_416(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_410(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (func_409(uParam0->f_1092))
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_971(uParam0, &(Local_120[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_992(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return -1;
}

void func_993(var uParam0)
{
	if (iLocal_155 == 4)
	{
		iLocal_155 = 5;
	}
}

void func_994(var uParam0)
{
	if (iLocal_155 == 0)
	{
		iLocal_155 = 1;
	}
}

char* func_995()
{
	if (!func_385(iLocal_165) && !func_19(iLocal_165, 0))
	{
		return "HIP_PROMPT2";
	}
	return "HIP_PROMPT";
}

int func_996()
{
	if (iLocal_155 > 0)
	{
		return 0;
	}
	return 1;
}

int func_997()
{
	return func_242(unk_0x259BE71D8A81D4FA());
}

int func_998()
{
	if (unk_0x1D5CD3EAAA7422B0((unk_0x4AE9635532D92447(0) - 1,333333f)) < 0,1f)
	{
		return 0;
	}
	return 1;
}

int func_999()
{
	return 0;
}

Vector3 func_1000()
{
	return func_1001();
}

Vector3 func_1001()
{
	return 1561,054f, 385,9017f, -50,6854f;
}

int func_1002()
{
	return 0;
}

int func_1003()
{
	return iLocal_177;
}

void func_1004(var uParam0)
{
	if (func_1007(uParam0) || func_1006())
	{
		if (!uParam0->f_1099 && !func_1006())
		{
			func_1005(uParam0, 5);
			uParam0->f_1099 = 1;
		}
		else if (uParam0->f_732 == 5 || func_1006())
		{
			func_492(2);
			uParam0->f_1099 = 0;
		}
	}
}

void func_1005(var uParam0, int iParam1)
{
	if (uParam0->f_732 != iParam1)
	{
		uParam0->f_732.f_1 = uParam0->f_732;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
		unk_0x8744D2E3FC95740E(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
		uParam0->f_732 = iParam1;
		if (uParam0->f_732 == 7)
		{
			uParam0->f_732 = 5;
		}
	}
}

int func_1006()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	if (func_123() && func_71() == 1)
	{
		return 1;
	}
	if (Global_1971648.f_1103)
	{
		return 1;
	}
	return 0;
}

int func_1007(var uParam0)
{
	if (BitTest(uParam0->f_1093, 12))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1093, 13))
	{
		return 1;
	}
	if (func_1009())
	{
		return 1;
	}
	if (Local_166.f_47 != 0)
	{
		Call_Loc(Local_166.f_47);
		if (StackVal)
		{
			return 1;
		}
	}
	if (func_1008() && !BitTest(uParam0->f_1093, 20))
	{
		return 1;
	}
	return 0;
}

var func_1008()
{
	return Global_2672852;
}

bool func_1009()
{
	return Global_2684504.f_698;
}

void func_1010()
{
	iLocal_164 = unk_0x4A8C381C258A124D();
	iLocal_165 = unk_0x259BE71D8A81D4FA();
}

void func_1011(var uParam0)
{
	func_1022(uParam0);
	func_1020(uParam0);
	func_1013();
	func_116();
	func_1012();
	if (unk_0x259BE71D8A81D4FA() != -1 && Global_1972760[unk_0x259BE71D8A81D4FA() /*27*/].f_20)
	{
		Global_1972760[unk_0x259BE71D8A81D4FA() /*27*/].f_20 = 0;
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_1012()
{
	if (Global_1972757)
	{
		Global_1972757 = 0;
	}
	if (iLocal_150)
	{
		unk_0x633E3833FB96BCCB("HS4F_INT");
	}
}

void func_1013()
{
	func_1019(&Global_1971648);
	func_1018(&(Global_1971648.f_732));
	func_1017(&(Global_1971648.f_738));
	func_1016(&(Global_1971648.f_747));
	func_1015(&(Global_1971648.f_812));
	func_1014(&(Global_1971648.f_826));
	Global_1971648.f_1090 = -1;
	Global_1971648.f_1092 = func_25();
	Global_1971648.f_1093 = 0;
	Global_1971648.f_1102 = 0;
	Global_1971648.f_1091 = -1;
	Global_1971648.f_1103 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_25 = -1;
		Global_1972760[unk_0x383461852896D73D() /*27*/].f_26 = 0;
	}
}

void func_1014(var uParam0)
{
	struct<5> Var0;
	
	Var0.f_4 = 1;
	*uParam0 = { Var0 };
}

void func_1015(var uParam0)
{
	struct<14> Var0;
	
	*uParam0 = { Var0 };
}

void func_1016(var uParam0)
{
	struct<65> Var0;
	
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_1017(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_1018(var uParam0)
{
	struct<6> Var0;
	
	*uParam0 = { Var0 };
}

void func_1019(var uParam0)
{
	struct<732> Var0;
	
	if (uParam0->f_716 != 0 && unk_0xA0C7B98BCF1EEF9E(uParam0->f_716))
	{
		unk_0xD314260005F064BF(&(uParam0->f_716));
	}
	if (uParam0->f_717 != 0 && unk_0xA0C7B98BCF1EEF9E(uParam0->f_717))
	{
		unk_0xD314260005F064BF(&(uParam0->f_717));
	}
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_702 = 1;
	Var0.f_703 = 1;
	*uParam0 = { Var0 };
}

void func_1020(var uParam0)
{
	if (Local_166.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7);
		func_1021(StackVal);
	}
	if (Local_166.f_7.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_166.f_7.f_2);
		func_1021(StackVal);
	}
}

void func_1021(char* sParam0)
{
	if (unk_0xC13AFEAFC3F7AD96(uParam0))
	{
		unk_0xF8211BE23F0D0552(sParam0);
	}
}

void func_1022(var uParam0)
{
	if (uParam0->f_1088)
	{
		if (uParam0->f_1088.f_1 != -1)
		{
			unk_0x8E4825CCACA34B58(uParam0->f_1088.f_1);
			unk_0x394AFAC073E1F277(uParam0->f_1088.f_1);
			uParam0->f_1088.f_1 = -1;
			uParam0->f_1088 = 0;
		}
	}
}

int func_1023(var uParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 13))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 13);
	}
	if (BitTest(uParam0->f_1093, 14))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1093), 14);
	}
	unk_0x51CC1333A10C4E09();
	func_1024();
	return 1;
}

void func_1024()
{
	if (!Global_1972757)
	{
		Global_1972757 = 1;
	}
}

