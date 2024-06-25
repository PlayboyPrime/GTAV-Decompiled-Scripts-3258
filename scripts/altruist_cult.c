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
	var uLocal_43 = 0;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49[16];
	float fLocal_50[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	float fLocal_61 = 0f;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95[2] = { 0, 0 };
	int iLocal_96[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100[4] = { 0, 0, 0, 0 };
	int iLocal_101[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_102 = 0;
	var uLocal_103[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_130 = 8;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 4;
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
	var uLocal_149 = 4;
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
	var uLocal_164 = 4;
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
	var uLocal_179 = 4;
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
	var uLocal_194 = 4;
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
	var uLocal_209 = 4;
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
	var uLocal_224 = 4;
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
	var uLocal_239 = 4;
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
	int iLocal_258 = 0;
	char[] cLocal_259[8] = 0;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	var uLocal_268 = 0;
	var uLocal_269 = 16;
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
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
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
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
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
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	int iLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 5;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 5;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_44 = -1f;
	Local_51 = { -1109,213f, 4914,744f, 216,101f };
	Local_52 = { -1034,6f, 4918,6f, 205,9f };
	Local_53 = { -1066,963f, 4873,13f, 207,3281f };
	Local_54 = { -1112,946f, 4986,957f, 241,133f };
	fLocal_55 = 72,3125f;
	Local_56 = { -1138,386f, 4872,04f, 207,5488f };
	Local_57 = { -1091,959f, 4983,27f, 241,1698f };
	fLocal_58 = 57,8125f;
	Local_59 = { -1171,648f, 4888,658f, 211,0756f };
	Local_60 = { -1137,907f, 4926,572f, 240,999f };
	fLocal_61 = 17,9375f;
	Local_62 = { -1177,981f, 4903,231f, 212,477f };
	Local_63 = { -1153,398f, 4902,631f, 241,155f };
	fLocal_64 = 17,9375f;
	Local_65 = { -1175,693f, 4904,839f, 207,5207f };
	Local_66 = { -1142,08f, 4985,32f, 241,2887f };
	fLocal_67 = 36,375f;
	Local_68 = { -1106,212f, 4860,086f, 206,1207f };
	Local_69 = { -1105,016f, 4873,854f, 241,1453f };
	fLocal_70 = 11,5625f;
	Local_71 = { -1044,268f, 4916,587f, 209,8365f };
	Local_72 = { -1063,605f, 4972,88f, 241,1299f };
	fLocal_73 = 12,875f;
	iLocal_94 = 4;
	cLocal_259 = "REPLAY_TMG";
	sLocal_260 = "CMN_TDIED";
	if (unk_0x96CFB880BAC634CE(26))
	{
		func_196();
	}
	if (unk_0x7B42AC66804829CF())
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x173751E886F8E9AB() || iLocal_75)
		{
			unk_0x425BBE19F25A57AB(0f);
			switch (iLocal_48)
			{
				case 0:
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (Global_113969.f_24998.f_5 >= iLocal_94 && !func_195())
						{
							iLocal_48 = 2;
						}
						func_192();
						func_189();
					}
					break;
				
				case 1:
					unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (system::timera() > 2000)
						{
							if (iLocal_89 == 1)
							{
								func_188();
							}
							else if (iLocal_89 == 2)
							{
								func_160();
							}
						}
						if (system::timera() > 1300)
						{
							if (iLocal_91 < 3)
							{
								func_159();
							}
							else
							{
								func_158();
							}
						}
						if (iLocal_76)
						{
							func_145(26, 1);
							iLocal_76 = 0;
							iLocal_48 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						func_117();
					}
					unk_0xEBB2809684978887(Global_42738[9 /*31*/], 0, 0, 1);
					unk_0xEBB2809684978887(Global_42738[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						iLocal_48 = 3;
						break;
					}
					bLocal_77 = false;
					unk_0x425BBE19F25A57AB(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0x4FAFF4BCB7633475(iLocal_96[iVar0]))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_103[iVar0]))
							{
								unk_0xFE54B8568B2ABD12(&(uLocal_103[iVar0]));
							}
						}
						else
						{
							if (unk_0xCE6BB45648900227(iLocal_96[iVar0]))
							{
								if (unk_0xC450B06E5AAA0985(uLocal_103[iVar0]))
								{
									unk_0xFE54B8568B2ABD12(&(uLocal_103[iVar0]));
								}
							}
							else if (unk_0xFAA48325A90263BE(iLocal_96[iVar0], unk_0x4A8C381C258A124D(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_116())
								{
									if (iLocal_93 < unk_0x1DD05E817C89C737())
									{
										iVar1 = unk_0xC5935DFB3F39785A(0, 3);
										if (iVar1 == 0)
										{
											func_101(&uLocal_269, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_100(&uLocal_269, 1, iLocal_96[iVar0], "ACULTMember1", 0, 1);
											func_101(&uLocal_269, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_100(&uLocal_269, 2, iLocal_96[iVar0], "ACULTMember2", 0, 1);
											func_101(&uLocal_269, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_93 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4500, 6000));
									}
								}
							}
							bLocal_77 = true;
						}
						iVar0++;
					}
					if (!bLocal_77)
					{
						func_64();
					}
					break;
				
				case 3:
					if (!iLocal_75)
					{
						uLocal_107 = func_63();
						if (!unk_0xA0C7B98BCF1EEF9E(uLocal_107))
						{
							break;
						}
						func_62(&uLocal_112, 0);
						iLocal_75 = 1;
					}
					if (func_33(&uLocal_112, &uLocal_118, &uLocal_107, cLocal_259, sLocal_260, &bLocal_74, 78))
					{
						iLocal_92 = 0;
						unk_0x2B1BDC32466B40A9(uLocal_268);
						unk_0x2115305B42B198D2(uLocal_106);
						iVar0 = 0;
						while (iVar0 < iLocal_96)
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_96[iVar0]))
							{
								unk_0x734A9F4537A31459(&(iLocal_96[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_101)
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_101[iVar0]))
							{
								unk_0x51C8BEA2005931AB(&(iLocal_101[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x78411E34CF90EA8C(uLocal_104))
						{
							unk_0x4CBC5D1BC117616B(uLocal_104, 0);
						}
						if (unk_0xFC8BFE4B41177C22(uLocal_99))
						{
							unk_0x51C8BEA2005931AB(&uLocal_99);
						}
						if (unk_0xFC8BFE4B41177C22(uLocal_99))
						{
							unk_0x51C8BEA2005931AB(&uLocal_99);
						}
						if (bLocal_74)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_75 = 0;
							iLocal_48 = 2;
						}
						else
						{
							iLocal_75 = 0;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_79)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x40AC02FA167D4D0A(0);
		unk_0xD43B9D1692F5C06E(1);
		unk_0x31E8D1058586E006(0);
		func_2(1);
		Global_96771 = 1;
	}
	else
	{
		unk_0x40AC02FA167D4D0A(1);
		unk_0xD43B9D1692F5C06E(0);
		unk_0x31E8D1058586E006(1);
		func_2(0);
		Global_96771 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_44042 == 9 || Global_44042 == 10) || Global_44042 == 5)
	{
		Global_112615 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112615 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20930.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1956920, 5);
}

bool func_8()
{
	return BitTest(Global_1956920, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		unk_0xDCAFFD08A08087EB("DeathFailOut", 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_46, 1);
		func_13(1, 2, 0);
		unk_0x735D248F6CA672AE(2);
	}
	else
	{
		if (BitTest(iLocal_46, 1) || iParam1)
		{
			unk_0x21172E4DF035B893("DeathFailOut");
			func_13(0, 2, 1);
			unk_0x735D248F6CA672AE(0);
		}
		unk_0x8744D2E3FC95740E(&iLocal_46, true);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_46, 2);
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (iParam1 == 1)
			{
				unk_0xE6AC149D1121535D(0,2f);
			}
			else
			{
				unk_0xE6AC149D1121535D(0,075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_46, 2) || iParam2)
		{
			if (!unk_0x76CD105BCAC6EB9F())
			{
				unk_0xE6AC149D1121535D(1f);
			}
		}
		unk_0x8744D2E3FC95740E(&iLocal_46, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_46, 0) || iParam1)
		{
			unk_0xDCAFFD08A08087EB(sVar0, 0, 0);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_46, 0);
			func_13(1, 1, 0);
			unk_0x735D248F6CA672AE(1);
		}
	}
	else
	{
		if (BitTest(iLocal_46, 0) || iParam1)
		{
			unk_0x21172E4DF035B893(sVar0);
			func_13(0, 1, 1);
			unk_0x735D248F6CA672AE(0);
		}
		unk_0x8744D2E3FC95740E(&iLocal_46, false);
	}
}

int func_15()
{
	func_16();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_20(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_19(unk_0x4A8C381C258A124D());
			if (func_18(iVar0) && (!func_17(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_18(Global_113969.f_2366.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_22()
{
	iLocal_46 = 0;
	iLocal_47 = 0;
	func_23(0, 1, 1, 0, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_32(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_5())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_31(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_32(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_31(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_29(unk_0x259BE71D8A81D4FA())) && !func_25(unk_0x259BE71D8A81D4FA(), 0)) && !func_24()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_29(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_24()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1574926;
}

int func_28(var uParam0)
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

int func_29(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
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

bool func_30()
{
	return BitTest(Global_2621446, 3);
}

int func_31(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_32(int iParam0)
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

int func_33(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xCAC4020CCF361AC8("DEATH_SCENE");
			unk_0xBF3D28CA44F3BE2D(-1, "ScreenFlash", "WastedSounds", 1);
			func_61(&(uParam0->f_1));
			func_22();
			func_60(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x6FF322107B12B749(1);
			break;
		
		case 1:
			if (func_58() || unk_0x15CCE8886267624F())
			{
				*uParam0 = 2;
			}
			if (!func_57(uParam0->f_4, 4))
			{
				if (unk_0xD7E1DF759CD0FFF2("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "Bed", "WastedSounds", 1);
					func_55(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(system::timera()) > (1500f * 0,2f))
			{
				if (!func_57(uParam0->f_4, 2))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "TextHit", "WastedSounds", 1);
					func_55(&(uParam0->f_4), 2);
				}
				func_34(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_34(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					unk_0x72B1E2693AC30407(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x6FF322107B12B749(0);
				unk_0xD43B9D1692F5C06E(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x40AC02FA167D4D0A(1);
				func_14(0, 1);
				func_12(0, 1);
				unk_0xB43467C43086A6A1("DEATH_SCENE");
				unk_0x6FF322107B12B749(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x6FF322107B12B749(0);
			return 1;
			break;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(2500);
				unk_0xC0964AABD3C0CC7E();
			}
			if (bParam9)
			{
				unk_0x6FF322107B12B749(1);
			}
			unk_0xE6AC149D1121535D(0,2f);
			if (func_54(iParam5, 4))
			{
				if (unk_0xD7E1DF759CD0FFF2("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x88F483FBD433696A(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x882AEFD55B8D51FB("STRING");
			unk_0x4E5A3D96808F7F84(6);
			unk_0xACF853FB3F6EA7D4(uParam2);
			unk_0xCFAD3D478C87321A();
			func_53(sParam3);
			unk_0x330108B080A2132F(100);
			unk_0x557F1E2300EF1A3E(true);
			unk_0x6CA3F2B87712B6A4();
			if (func_54(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x88F483FBD433696A(*uParam0, "TRANSITION_UP");
					unk_0x74BF156C860580D4(uParam1->f_134);
					unk_0xE6B753D52F4CA222();
					uParam1->f_136 = 1;
				}
			}
			if (!func_54(iParam5, 1))
			{
				unk_0xD4510218399ED105(0);
			}
			func_52(&(uParam1->f_10), 0, 1, 1, 1);
			func_51(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_51(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_54(iParam5, 4))
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_54(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0xDCAFFD08A08087EB("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xDCAFFD08A08087EB("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xDCAFFD08A08087EB("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_50(&(uParam1->f_1)))
			{
				func_49(&(uParam1->f_1));
			}
			if (func_54(iParam5, 2))
			{
				if (!func_50(&(uParam1->f_4)))
				{
					func_49(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x6B91FA4E397DAB8D();
			if (func_54(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x88F483FBD433696A(*uParam0, "TRANSITION_UP");
					unk_0x74BF156C860580D4(uParam1->f_134);
					unk_0xE6B753D52F4CA222();
					uParam1->f_136 = 1;
				}
			}
			unk_0xA4F67CEB594AE064(iParam6);
			func_47(uParam0, 0, 0);
			if (!func_54(iParam5, 16) && (func_45(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x15CCE8886267624F()))
			{
				func_39(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xA6DB7FC56DBDFB82();
				if (unk_0x2645430E708CBFAC(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xBF3D28CA44F3BE2D(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_54(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x2645430E708CBFAC(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_54(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_54(iParam5, 2))
			{
				if (func_45(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_54(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_47(uParam0, 0, 0);
			unk_0xE6AC149D1121535D(1f);
			if (uParam1->f_138 || !((unk_0x1B79E937E91F40C3("stunt_plane_races", unk_0x1AF90EB93E0012D6()) || unk_0x1B79E937E91F40C3("pilot_school", unk_0x1AF90EB93E0012D6())) || (unk_0x1B79E937E91F40C3("bj", unk_0x1AF90EB93E0012D6()) && unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))))
			{
				unk_0x10B228D2FDB7AF16(2500);
			}
			if (func_54(iParam5, 64) && uParam1->f_138)
			{
				unk_0x8F72AF14CE5AACE4(500);
			}
			func_35(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x6FF322107B12B749(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_45(&(uParam1->f_4)) <= 0,1f)
			{
				func_47(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_35(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_37(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_37(bool bParam0)
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

void func_38(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xD314260005F064BF(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_39(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69()) || unk_0x15CCE8886267624F()) || unk_0x114ABA9988FF784B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_44(uParam0))
	{
		return;
	}
	unk_0x6B91FA4E397DAB8D();
	unk_0xA4F67CEB594AE064(uParam2);
	if (!func_54(uParam0->f_1, 256) || (func_54(uParam0->f_1, 8192) && unk_0x7811C74D5B749F76(2)))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_CLEAR_SPACE");
		unk_0x74BF156C860580D4(fParam1);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(fParam5);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE6B753D52F4CA222();
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(func_54(uParam0->f_1, 4096));
			unk_0xE6B753D52F4CA222();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xAE231F549813BBDF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xAE231F549813BBDF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x330108B080A2132F(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0xE934399D6F2C3AC5(uVar0, uVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0xF761D79754BC3043(uVar0, uVar1, iVar2);
						}
						if (!unk_0xD6F9DEE4765092A9(uVar3))
						{
							func_43(uVar3);
						}
						bVar7++;
					}
					if (!unk_0xD6F9DEE4765092A9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_53(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x761778199FE1211C())
					{
						if (func_54(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x557F1E2300EF1A3E(true);
								unk_0x330108B080A2132F(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x557F1E2300EF1A3E(false);
								unk_0x330108B080A2132F(-1);
							}
						}
					}
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar6++;
		}
		fVar8 = func_42(bParam4, func_42(func_54(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x74BF156C860580D4(fVar8);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(80f);
		unk_0xE6B753D52F4CA222();
		func_41(&(uParam0->f_1), 256);
		func_40(&(uParam0->f_1), 128);
	}
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 0, 0);
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_42(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_43(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

int func_44(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			func_41(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_45(var uParam0)
{
	if (func_50(uParam0))
	{
		if (func_46(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_37(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_46(var uParam0)
{
	return BitTest(*uParam0, 2);
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_50(&(uParam0->f_2)))
	{
		func_35(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	if (!bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_45(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_48(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_48(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_49(var uParam0)
{
	if (!func_50(uParam0))
	{
		func_35(uParam0);
	}
}

bool func_50(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_51(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5AF05959A6F22BB4("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_41(&(uParam0->f_1), 32);
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_41(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x2EE4366DBD59BB7A(*uParam0, 1);
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (bParam3)
		{
			func_41(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_41(&(uParam0->f_1), 8192);
	}
}

void func_53(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

bool func_54(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_58()
{
	if (!BitTest(iLocal_46, 0) && !BitTest(iLocal_46, 1))
	{
		system::settimera(0);
		func_14(1, 0);
	}
	if (!unk_0xFD216000DC314A92())
	{
		unk_0x406CBCEA35499884();
	}
	unk_0x66EFB3D6110055C4(2, 199, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x94D0F337C46797FB();
	if (IntToFloat(system::timera()) > (1500f * 0,2f))
	{
		if (!BitTest(iLocal_46, 1))
		{
			func_12(1, 0);
			system::settimerb(0);
		}
		else if (IntToFloat(system::timerb()) > (1500f * 0,075f) || unk_0x15CCE8886267624F())
		{
			if (!unk_0x15CCE8886267624F())
			{
				if (!unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(1500);
				}
			}
			else if (iLocal_47 == 0)
			{
				iLocal_47 = unk_0x1DD05E817C89C737() + 1000;
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				unk_0x7946F7681E9E1D79(0);
				unk_0x915FA95E87D33FF5(0);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				}
				func_14(0, 0);
				func_59(0);
			}
			else if (unk_0x1DD05E817C89C737() < iLocal_47)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_46, 3))
			{
				unk_0x98E393364463951A(1);
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_46, 3);
			}
		}
		else if (BitTest(iLocal_46, 3))
		{
			unk_0x98E393364463951A(0);
			unk_0x8744D2E3FC95740E(&iLocal_46, 3);
		}
	}
}

void func_60(var uParam0, float fParam1, float fParam2)
{
	if (func_50(&(uParam0->f_1)))
	{
		func_48(&(uParam0->f_1));
	}
	if (func_50(&(uParam0->f_4)))
	{
		func_48(&(uParam0->f_4));
	}
	func_38(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_61(var uParam0)
{
	if (!func_50(uParam0))
	{
		func_49(uParam0);
	}
	else
	{
		func_35(uParam0);
	}
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xD7E1DF759CD0FFF2("OFFMISSION_WASTED", 0, -1);
}

var func_63()
{
	return unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
}

void func_64()
{
	if (!iLocal_78)
	{
		unk_0xC897319696131088("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_113969.f_24998.f_5 = 1000;
		unk_0x5A0A1BD816B9AAB5(64);
		Global_113969.f_20567.f_472 = 54;
		uLocal_257 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
		func_99(1);
		while (!unk_0xA0C7B98BCF1EEF9E(uLocal_257))
		{
			system::wait(0);
		}
		unk_0x88F483FBD433696A(uLocal_257, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_53("CULT_PASS");
		unk_0x6CA3F2B87712B6A4();
		while (!func_98())
		{
			system::wait(0);
		}
		func_97();
		system::settimera(0);
		unk_0xBF3D28CA44F3BE2D(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_78 = 1;
	}
	unk_0xA91A4C18A2DB01BD(uLocal_257, 255, 255, 255, 255, 0);
	if (!iLocal_80)
	{
		if (system::timera() > 9500)
		{
			unk_0x88F483FBD433696A(uLocal_257, "SHARD_ANIM_OUT");
			unk_0x330108B080A2132F(1);
			unk_0x74BF156C860580D4(0,33f);
			unk_0xE6B753D52F4CA222();
			iLocal_80 = 1;
		}
	}
	if (system::timera() > 10000)
	{
		if (unk_0xA0C7B98BCF1EEF9E(uLocal_257))
		{
			unk_0xD314260005F064BF(&uLocal_257);
			func_99(0);
		}
		while (unk_0xED977E2AE2CB16EE(func_96(unk_0x259BE71D8A81D4FA()), Local_51, 1) < 209f && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			system::wait(0);
		}
		func_65(18);
		func_196();
	}
}

void func_65(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_94();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_93())
	{
		func_71(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_70(30000);
		StringCopy(&cVar0, func_69(Global_113958, 1), 64);
		if (func_68(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		unk_0x3AF124228E3EAF07(&cVar0, Global_113955, (unk_0x1DD05E817C89C737() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_113965, false);
	}
	func_67(&Global_33008);
	Global_113959 = 0;
	func_66(-1);
}

void func_66(int iParam0)
{
	Global_113958 = iParam0;
}

void func_67(var uParam0)
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

int func_68(int iParam0)
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

char* func_69(int iParam0, bool bParam1)
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

void func_70(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_71(int iParam0)
{
	func_72(iParam0, 0, func_92(iParam0));
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_91();
	func_82(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_81(iParam0, &uVar0);
	Var1 = { func_73(&uVar0) };
}

struct<16> func_73(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_80(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_79(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_78(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_74(*uParam0), 64);
	return Var0;
}

int func_74(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_75(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_75(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_76(var uParam0)
{
	return uParam0 & 15;
}

int func_77(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_78(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_79(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_80(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

void func_81(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_74(*uParam0);
	iVar1 = func_76(*uParam0);
	iVar2 = func_77(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_79(*uParam0);
	iVar5 = func_78(*uParam0);
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
	iVar6 = func_90(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_90(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_83(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_83(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_89(uParam0, iParam1);
	func_88(uParam0, iParam2);
	func_87(uParam0, iParam3);
	func_86(uParam0, iParam5);
	func_85(uParam0, iParam4);
	func_84(uParam0, iParam6);
}

void func_84(var uParam0, int iParam1)
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

void func_85(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_76(*uParam0);
	iVar1 = func_74(*uParam0);
	if (iParam1 < 1 || iParam1 > func_90(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_90(int iParam0, int iParam1)
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

var func_91()
{
	var uVar0;
	
	func_89(&uVar0, unk_0x4BA5A16068183C5E());
	func_88(&uVar0, unk_0x18E502A71E28968C());
	func_87(&uVar0, unk_0x5295501D0862870D());
	func_85(&uVar0, unk_0xB12880C92EA6EE15());
	func_86(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_84(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

int func_92(int iParam0)
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

int func_93()
{
	if ((Global_113958 == func_94() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_95(Var0);
	return uVar1;
}

int func_95(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_96(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_97()
{
	Global_33187 = 0;
	Global_33188 = 0;
	Global_33190 = 0;
	Global_33191 = 0;
	Global_33192 = 0;
}

int func_98()
{
	return 1;
}

void func_99(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_101(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_115(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_102(sParam2, iParam3, 0);
}

int func_102(char* sParam0, int iParam1, bool bParam2)
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
					func_114();
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
		if (func_113(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_112();
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
				func_111();
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
				if (func_110())
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
			if (func_5())
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
			func_109();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_108();
		func_103();
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
		func_114();
	}
	return 0;
}

void func_103()
{
	if (!func_104())
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

int func_104()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_107())
	{
		return 0;
	}
	if (func_105(unk_0x259BE71D8A81D4FA()))
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

bool func_105(int iParam0)
{
	return func_106(iParam0, 20);
}

var func_106(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_107()
{
	return -1;
}

void func_108()
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

void func_109()
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

int func_110()
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

void func_111()
{
	if (func_17(14))
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
		Global_20930 = func_15();
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

void func_112()
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

bool func_113(int iParam0, int iParam1)
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

void func_114()
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

void func_115(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_116()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_92)
	{
		case 0:
			unk_0xE0F4EA3A654155A3("THUNDER", 20f);
			if (!unk_0x0CB7695268A7F50F())
			{
				unk_0x839AD252B0708F35("ac_ig_3_p3_b", 8);
			}
			unk_0xEC9DAA34BBB4658C(joaat("a_m_o_acult_02"));
			unk_0xEC9DAA34BBB4658C(joaat("a_m_y_acult_02"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood03a"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood04a"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood05a"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_security_case_01"));
			while ((((((!func_144() || !unk_0x6252BC0DD8A320DB(joaat("a_m_o_acult_02"))) || !unk_0x6252BC0DD8A320DB(joaat("a_m_y_acult_02"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_box_wood03a"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_box_wood04a"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_box_wood05a"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_security_case_01")))
			{
				system::wait(0);
			}
			uLocal_434 = func_137(unk_0x4A8C381C258A124D(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xFC8BFE4B41177C22(uLocal_434))
			{
				unk_0xF293D66D4452C854(iLocal_434, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xF293D66D4452C854(0, "Rifle_Mag1^1", 3, unk_0xB39F6B1C186F538E(joaat("component_assaultrifle_clip_01")), 0);
			if (func_144() && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "TREVOR", 0, 0, 0);
				unk_0xF293D66D4452C854(iLocal_96[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xF293D66D4452C854(iLocal_96[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xF293D66D4452C854(iLocal_96[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xF293D66D4452C854(iLocal_96[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xF293D66D4452C854(iLocal_96[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xED65412F8B26ED99(0);
			}
			system::wait(0);
			if (!bLocal_74 && Global_113969.f_24998.f_5 != 1000)
			{
				func_136();
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_96[0]))
			{
				unk_0x734A9F4537A31459(&(iLocal_96[0]));
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_96[1]))
			{
				unk_0x734A9F4537A31459(&(iLocal_96[1]));
			}
			if (unk_0x78411E34CF90EA8C(uLocal_104))
			{
				unk_0x4CBC5D1BC117616B(uLocal_104, 0);
			}
			if (unk_0xFC8BFE4B41177C22(uLocal_99))
			{
				unk_0x51C8BEA2005931AB(&iLocal_99);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_99))
			{
				unk_0x51C8BEA2005931AB(&iLocal_99);
			}
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			if (unk_0xC450B06E5AAA0985(uLocal_102))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_102);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x428C32CC68809A35(1);
			unk_0x747786364137DC63(0);
			unk_0x37B894853929BF1A(0);
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 1);
			}
			unk_0x2094BC4B6731BA68(Local_51, 100f, 1, 0, 0, 0);
			unk_0xA7B0B03284E7503C(Local_51 - Vector(100f, 60f, 80f), Local_51 + Vector(100f, 60f, 80f), 0, 1, 1, 1, 1);
			unk_0x425BBE19F25A57AB(0f);
			unk_0xCC1C92F7E1A3CE9D(3, 0);
			unk_0xCC1C92F7E1A3CE9D(5, 0);
			uLocal_106 = unk_0xBE006B266746B58A(-1173,509f, 4924,365f, 222,21f, 277,2293f, 2, 0, 2, 1);
			unk_0xEC9DAA34BBB4658C(joaat("a_m_o_acult_01"));
			while (!unk_0x6252BC0DD8A320DB(joaat("a_m_o_acult_01")))
			{
				system::wait(0);
			}
			iLocal_92 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x2B60F53D06BC6971(0))
			{
				if (unk_0xD8FC13DA1BA1DBA2("CULT_MASTER", 0))
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_96[11]))
					{
						iLocal_96[11] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("CULT_MASTER", 0));
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("REAR_CULT", 0))
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_96[12]))
					{
						iLocal_96[12] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("REAR_CULT", 0));
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_96[13]))
					{
						iLocal_96[13] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("CARBINE_CULT", 0))
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_96[14]))
					{
						iLocal_96[14] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("CARBINE_CULT", 0));
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("SHOTGUN_CULT", 0))
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_96[15]))
					{
						iLocal_96[15] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("TREVOR", 0))
				{
					unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 0);
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1173,531f, 4924,357f, 222,2101f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 188,9369f);
					unk_0x994B4C04761C0AA0(unk_0x4A8C381C258A124D(), -1173,509f, 4924,365f, 222,21f, -1, 0, 0f, 1, 0, uLocal_106, 0);
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
				}
				if (unk_0xD8FC13DA1BA1DBA2("Trevors_weapon", 0))
				{
					unk_0x4693060C5049F4E3(iLocal_434, unk_0x4A8C381C258A124D());
				}
				unk_0x64BB72494B9DF6DC(91,3878f);
				unk_0xD815D4BD1AE9E85A(4,4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x747786364137DC63(1);
				unk_0x37B894853929BF1A(1);
				Local_49[0 /*3*/] = { -1044,632f, 4918,149f, 211,3315f };
				fLocal_50[0] = 254,8275f;
				Local_49[1 /*3*/] = { -1054,92f, 4915,155f, 210,8241f };
				fLocal_50[1] = 270,2025f;
				Local_49[2 /*3*/] = { -1051,859f, 4903,902f, 209,6199f };
				fLocal_50[2] = 299,8404f;
				Local_49[3 /*3*/] = { -1068,246f, 4899,532f, 213,2755f };
				fLocal_50[3] = 298,4257f;
				Local_49[4 /*3*/] = { -1083,322f, 4899,532f, 213,2755f };
				fLocal_50[4] = 283,5311f;
				Local_49[5 /*3*/] = { -1084,058f, 4933,805f, 228,2246f };
				fLocal_50[5] = 87,5233f;
				Local_49[6 /*3*/] = { -1081,976f, 4937,339f, 232,3275f };
				fLocal_50[6] = 109,6546f;
				Local_49[7 /*3*/] = { -1092,075f, 4939,958f, 217,3385f };
				fLocal_50[7] = 210,2433f;
				Local_49[8 /*3*/] = { -1101,798f, 4930,33f, 217,3544f };
				fLocal_50[8] = 203,732f;
				Local_49[9 /*3*/] = { -1070,675f, 4869,301f, 220,2917f };
				fLocal_50[9] = 39,1109f;
				Local_49[10 /*3*/] = { -1115,703f, 4878,439f, 225,8085f };
				fLocal_50[10] = 25,8472f;
				unk_0x06CD913C241C765E("rghCult", &uLocal_268);
				iVar1 = 0;
				while (iVar1 < iLocal_96)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_96[iVar1] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_01"), Local_49[iVar1 /*3*/], fLocal_50[iVar1], 1, 1);
						unk_0xC6E8E1D693021E9E(iLocal_96[iVar1], 0);
						unk_0xB41DEC3AAC1AA107(iLocal_96[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0xD0764B65C2DFEDCA(iLocal_96[iVar1], 0);
						unk_0x139711196A42A037(iLocal_96[iVar1], 2);
						unk_0xDC914F868C070C56(iLocal_96[iVar1], 50f, 20);
						unk_0xC652B7E19CE29859(iLocal_96[iVar1], 5);
						unk_0x35365D1E3ADB7109(iLocal_96[iVar1], 100f);
						unk_0x25DBF9F9C6BDFFEA(iLocal_96[iVar1], 100f);
						unk_0xD25E9BDC14A0B649(iLocal_96[iVar1], 150, 0, 0);
						unk_0x39256A89E9D7464A(iLocal_96[iVar1], unk_0xC5935DFB3F39785A(40, 60));
						unk_0x62A5310368A20EFA(iLocal_96[iVar1], unk_0x4A8C381C258A124D(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_96[iVar1] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), Local_49[iVar1 /*3*/], fLocal_50[iVar1], 1, 1);
						unk_0xC6E8E1D693021E9E(iLocal_96[iVar1], 0);
						unk_0xB41DEC3AAC1AA107(iLocal_96[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0xBE8796DB2B90A437(iLocal_96[iVar1], 50, 1);
						unk_0xD0764B65C2DFEDCA(iLocal_96[iVar1], 2);
						unk_0x139711196A42A037(iLocal_96[iVar1], 1);
						unk_0xDC914F868C070C56(iLocal_96[iVar1], 50f, 20);
						unk_0xC652B7E19CE29859(iLocal_96[iVar1], 5);
						unk_0x35365D1E3ADB7109(iLocal_96[iVar1], 100f);
						unk_0x25DBF9F9C6BDFFEA(iLocal_96[iVar1], 100f);
						unk_0x39256A89E9D7464A(iLocal_96[iVar1], unk_0xC5935DFB3F39785A(40, 60));
						unk_0x62A5310368A20EFA(iLocal_96[iVar1], unk_0x4A8C381C258A124D(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x4FAFF4BCB7633475(iLocal_96[iVar1]) && !unk_0x4FAFF4BCB7633475(iLocal_96[11])) && !unk_0x4FAFF4BCB7633475(iLocal_96[12])) && !unk_0x4FAFF4BCB7633475(iLocal_96[13])) && !unk_0x4FAFF4BCB7633475(iLocal_96[14])) && !unk_0x4FAFF4BCB7633475(iLocal_96[15]))
						{
							unk_0xB41DEC3AAC1AA107(iLocal_96[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0xB41DEC3AAC1AA107(iLocal_96[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xB41DEC3AAC1AA107(iLocal_96[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xB41DEC3AAC1AA107(iLocal_96[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0xB41DEC3AAC1AA107(iLocal_96[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0xBE8796DB2B90A437(iLocal_96[iVar1], 0, 1);
							unk_0xD0764B65C2DFEDCA(iLocal_96[iVar1], 3);
							unk_0x139711196A42A037(iLocal_96[iVar1], 0);
							unk_0xC652B7E19CE29859(iLocal_96[iVar1], 0);
							unk_0x0DB5B122A29E007B(iLocal_96[iVar1], 1f, 1f);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0xA68F93198FAC44EC(0, -1159,33f, 4924,412f, 221,6576f, unk_0x4A8C381C258A124D(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 6000, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_96[15], uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0xA68F93198FAC44EC(0, -1163,279f, 4932,933f, 222,541f, unk_0x4A8C381C258A124D(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x3D948B91131AF671(0, unk_0x4A8C381C258A124D(), 5000, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 7500, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_96[14], uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 2500, 0);
							unk_0x3D948B91131AF671(0, unk_0x4A8C381C258A124D(), 5000, 0);
							unk_0xA68F93198FAC44EC(0, -1156,175f, 4926,073f, 221,3447f, unk_0x4A8C381C258A124D(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 6500, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_96[13], uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 3000, 0);
							unk_0xA68F93198FAC44EC(0, -1157,962f, 4922,196f, 221,309f, unk_0x4A8C381C258A124D(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 5500, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_96[12], uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							unk_0xB5396F1FB088FE38(&uLocal_105);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x3D948B91131AF671(0, unk_0x4A8C381C258A124D(), 10000, 0);
							unk_0xA68F93198FAC44EC(0, -1161,475f, 4916,061f, 220,5658f, unk_0x4A8C381C258A124D(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), 4500, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_105);
							unk_0x4BD42B0527065BB6(iLocal_96[11], uLocal_105);
							unk_0xD0557B139A542F12(&uLocal_105);
							unk_0x44FB298D6382876D(iLocal_96[iVar1], 1);
							unk_0x0FB8E752BCC547A9(iLocal_96[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_96[iVar1] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), Local_49[iVar1 /*3*/], fLocal_50[iVar1], 1, 1);
						unk_0xC6E8E1D693021E9E(iLocal_96[iVar1], 0);
						unk_0xB41DEC3AAC1AA107(iLocal_96[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xBE8796DB2B90A437(iLocal_96[iVar1], 50, 1);
						unk_0xD0764B65C2DFEDCA(iLocal_96[iVar1], 2);
						unk_0x139711196A42A037(iLocal_96[iVar1], 0);
						unk_0xDC914F868C070C56(iLocal_96[iVar1], 50f, 20);
						unk_0x1090EAA386FB31A8(iLocal_96[iVar1], 1);
						unk_0xC652B7E19CE29859(iLocal_96[iVar1], 5);
						unk_0x35365D1E3ADB7109(iLocal_96[iVar1], 100f);
						unk_0x25DBF9F9C6BDFFEA(iLocal_96[iVar1], 100f);
						unk_0x39256A89E9D7464A(iLocal_96[iVar1], unk_0xC5935DFB3F39785A(40, 60));
						unk_0x62A5310368A20EFA(iLocal_96[iVar1], unk_0x4A8C381C258A124D(), 0, 16);
					}
					unk_0x3CEA1FD137ACE2D9(iLocal_96[iVar1], uLocal_268);
					unk_0x5C96CEA06531AB03(iLocal_96[iVar1], func_135(unk_0xD1A6A821F5AC81DB(iLocal_96[iVar1], 1), func_96(unk_0x259BE71D8A81D4FA())));
					unk_0xAAA71DD7E9059338(iLocal_96[iVar1], 1);
					unk_0x0428AFDCAA63B06E(iLocal_96[iVar1], 42, 1);
					uLocal_103[iVar1] = func_133(iLocal_96[iVar1], 1, 145);
					iVar1++;
				}
				func_100(&uLocal_269, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
				func_100(&uLocal_269, 3, iLocal_96[11], "ACULTMaster", 0, 1);
				func_100(&uLocal_269, 4, 0, "ACULTGroup", 0, 1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				if (!bLocal_74)
				{
					uLocal_100[0] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), -1074,165f, 4897,468f, 213,2754f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_100[1] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), -1094,671f, 4892,789f, 215,0707f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_100[2] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), -1113,95f, 4904,385f, 217,6001f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_100[3] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), -1145,273f, 4907,894f, 219,9734f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_100[0] = uLocal_100[0];
				uLocal_100[1] = uLocal_100[1];
				uLocal_100[2] = uLocal_100[2];
				uLocal_100[3] = uLocal_100[3];
				iLocal_101[0] = unk_0x4E55EAB577C13329(joaat("prop_box_wood04a"), -1158,69f, 4915,709f, 220,2644f, 1, 1, 0);
				iLocal_101[1] = unk_0x4E55EAB577C13329(joaat("prop_box_wood03a"), -1156,246f, 4918,6f, 220,5432f, 1, 1, 0);
				iLocal_101[2] = unk_0x4E55EAB577C13329(joaat("prop_box_wood04a"), -1145,802f, 4931,816f, 219,9683f, 1, 1, 0);
				iLocal_101[3] = unk_0x4E55EAB577C13329(joaat("prop_box_wood04a"), -1133,369f, 4919,067f, 218,8385f, 1, 1, 0);
				iLocal_101[4] = unk_0x4E55EAB577C13329(joaat("prop_box_wood05a"), -1132,025f, 4921,483f, 218,8244f, 1, 1, 0);
				iLocal_101[5] = unk_0x4E55EAB577C13329(joaat("prop_box_wood03a"), -1112,66f, 4929,268f, 217,1752f, 1, 1, 0);
				unk_0xCF39804E8C88080E(iLocal_101[0], 12,24288f, -0,014582f, 27,06056f, 2, 1);
				unk_0xCF39804E8C88080E(iLocal_101[1], 7,733739f, 9,432779f, -2,865618f, 2, 1);
				unk_0xCF39804E8C88080E(iLocal_101[2], 3,735082f, 4,551246f, 86,30917f, 2, 1);
				unk_0xCF39804E8C88080E(iLocal_101[3], 0,240341f, 1,095195f, 36,59031f, 2, 1);
				unk_0xCF39804E8C88080E(iLocal_101[4], 7,6772f, 1,232743f, 93,27483f, 2, 1);
				unk_0xCF39804E8C88080E(iLocal_101[5], 3,367802f, -5,14387f, 97,30567f, 2, 1);
				if (func_132() < 50)
				{
					unk_0x9AD14335D95C64BA(unk_0x259BE71D8A81D4FA(), 0,5f, 1, 0);
				}
				if (func_131() != 18)
				{
					func_129(18);
				}
				if (!func_93())
				{
					func_118(0);
				}
				func_1(1);
				bLocal_74 = false;
				iLocal_48 = 4;
			}
			break;
	}
}

int func_118(int iParam0)
{
	if (func_123())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_122(Global_113958))
		{
			func_119(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_122(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_120(func_121(iParam0), -1);
					Global_113969.f_24998.f_2++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_120(func_121(iParam0), -1);
					Global_113969.f_24998.f_3++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_120(func_121(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_120(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_121(int iParam0)
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

int func_122(int iParam0)
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

int func_123()
{
	switch (func_124(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_124(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_128(0))
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
		if (!func_126(iParam2))
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
			func_125(uParam0, iParam4);
		}
	}
	return 2;
}

void func_125(var uParam0, int iParam1)
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

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_44042);
}

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_129(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_94();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_66(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_130();
}

void func_130()
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

int func_131()
{
	return Global_113958;
}

int func_132()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_133(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_134(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_42(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_42(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_42(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

var func_135(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_136()
{
	Global_33188 = 1;
}

int func_137(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x66B90BA528CFEBCE(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			iVar3 = unk_0x1149D67DB429787A(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0xF4E66F9577F22476(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xACBE463290141D49(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_141(iVar2, iVar6) != 0)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0x5EDED4B3E1A48E68(iParam0, iVar2, func_141(iVar2, iVar6)))
			{
				if (func_140(func_141(iVar2, iVar6)))
				{
					iVar7 = unk_0xB39F6B1C186F538E(func_141(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	uVar1 = unk_0x8A3572575D91006C(iVar2, iVar3, Var5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_141(iVar2, iVar8) != 0)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0x5EDED4B3E1A48E68(iParam0, iVar2, func_141(iVar2, iVar8)))
			{
				unk_0x93A0B91D4456D7E9(uVar1, func_141(iVar2, iVar8));
				func_138(uVar1, func_141(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x66B90BA528CFEBCE(iParam0, iVar2, 0))
		{
			unk_0xFA3F484500EC0E85(uVar1, unk_0x6C81F95CADD1E6D0(iParam0, iVar2));
		}
	}
	return uVar1;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_139(iParam1);
	if (iVar0 != 0)
	{
		unk_0x93A0B91D4456D7E9(uParam0, iVar0);
	}
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo"):
			return joaat("component_pistol_mk2_camo_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_02"):
			return joaat("component_pistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_03"):
			return joaat("component_pistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_04"):
			return joaat("component_pistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_05"):
			return joaat("component_pistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_06"):
			return joaat("component_pistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_07"):
			return joaat("component_pistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_08"):
			return joaat("component_pistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_09"):
			return joaat("component_pistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_10"):
			return joaat("component_pistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_ind_01"):
			return joaat("component_pistol_mk2_camo_ind_01_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo"):
			return joaat("component_snspistol_mk2_camo_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_02"):
			return joaat("component_snspistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_03"):
			return joaat("component_snspistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_04"):
			return joaat("component_snspistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_05"):
			return joaat("component_snspistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_06"):
			return joaat("component_snspistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_07"):
			return joaat("component_snspistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_08"):
			return joaat("component_snspistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_09"):
			return joaat("component_snspistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_10"):
			return joaat("component_snspistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return joaat("component_snspistol_mk2_camo_ind_01_slide");
			break;
		
		case joaat("component_pistol_mk2_varmod_xm3"):
			return joaat("component_pistol_mk2_varmod_xm3_slide");
			break;
	}
	return 0;
}

int func_140(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade")) || iParam0 == joaat("component_appistol_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_security")) || iParam0 == joaat("component_microsmg_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_xm3"))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
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
				iVar1 = func_143(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_142(Var5.f_3))
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

int func_142(int iParam0)
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

int func_143(int iParam0, var uParam1)
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

bool func_144()
{
	bool bVar0;
	
	bVar0 = unk_0x0DDDD9D153BCF51F();
	if (!Global_79388)
	{
		if (!bVar0)
		{
			Global_79388 = 1;
		}
	}
	return bVar0;
}

int func_145(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_146(iParam0, iParam1);
}

int func_146(int iParam0, int iParam1)
{
	if (func_17(14) && !func_157(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_156(&Global_4543384))
	{
		if (func_154(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_147(&Global_4543384, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_157(iParam1))
	{
		return 0;
	}
	if (func_154(uParam0, iParam1))
	{
		return 0;
	}
	if (func_153(uParam0) < 0f)
	{
		func_152(uParam0, 0);
	}
	func_150(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_148(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_148(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_157(iParam1))
	{
		return 0;
	}
	if (func_154(uParam0, iParam1))
	{
		return 0;
	}
	if (func_153(uParam0) < 0f)
	{
		func_152(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_149(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_149(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_150(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_151(uParam0, iVar0);
		iVar0++;
	}
	func_152(uParam0, (Global_4543383 - 0,5f));
}

void func_151(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_152(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_153(var uParam0)
{
	return uParam0->f_80;
}

bool func_154(var uParam0, int iParam1)
{
	return func_155(uParam0, iParam1) != -1;
}

int func_155(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_156(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_158()
{
	if (fLocal_85 > 0f)
	{
		fLocal_85 = (fLocal_85 - (0,6f / (1f / unk_0x0B852B0BF94A8DC1())));
	}
	else
	{
		fLocal_85 = 0f;
	}
	if (fLocal_85 >= 0f)
	{
		unk_0x3A15B21067339E98(Global_42738[10 /*31*/], fLocal_85, 0, 1);
		unk_0xEBB2809684978887(Global_42738[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_84 < 0f)
	{
		fLocal_84 = (fLocal_84 + (0,6f / (1f / unk_0x0B852B0BF94A8DC1())));
	}
	else
	{
		fLocal_84 = 0f;
	}
	if (fLocal_84 <= 0f)
	{
		unk_0x3A15B21067339E98(Global_42738[9 /*31*/], fLocal_84, 0, 1);
		unk_0xEBB2809684978887(Global_42738[9 /*31*/], 4, 0, 1);
	}
}

void func_159()
{
	if (fLocal_85 < 1f)
	{
		fLocal_85 = (fLocal_85 + (0,6f / (1f / unk_0x0B852B0BF94A8DC1())));
	}
	else
	{
		fLocal_85 = 1f;
	}
	if (fLocal_85 <= 1f)
	{
		unk_0x3A15B21067339E98(Global_42738[10 /*31*/], fLocal_85, 0, 1);
		unk_0xEBB2809684978887(Global_42738[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_84 > -1f)
	{
		fLocal_84 = (fLocal_84 - (0,6f / (1f / unk_0x0B852B0BF94A8DC1())));
	}
	else
	{
		fLocal_84 = -1f;
	}
	if (fLocal_84 >= -1f)
	{
		unk_0x3A15B21067339E98(Global_42738[9 /*31*/], fLocal_84, 0, 1);
		unk_0xEBB2809684978887(Global_42738[9 /*31*/], 4, 0, 1);
	}
}

void func_160()
{
	switch (iLocal_91)
	{
		case 0:
			unk_0xEC9DAA34BBB4658C(joaat("a_m_o_acult_02"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_anim_cash_pile_02"));
			unk_0x80813AC549A1E8AE("random@altruist_cult");
			unk_0x16088CC55E7F218A("AC_DELIVERED");
			unk_0xA10F939489C3BE61(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x6252BC0DD8A320DB(joaat("a_m_o_acult_02")) && unk_0x6252BC0DD8A320DB(joaat("prop_anim_cash_pile_02"))) && unk_0xE100DD4F82A51BDE("random@altruist_cult")) && unk_0x16088CC55E7F218A("AC_DELIVERED")) && unk_0x92A65766A892EFC6(joaat("weapon_assaultrifle")))
			{
				if (Global_113969.f_24998.f_5 < 2)
				{
					if (Global_113969.f_24998.f_5 == 0)
					{
						sLocal_267 = "ACULT_HI";
					}
					else
					{
						sLocal_267 = "ACULT_LEAVE5";
					}
					sLocal_261 = "cult_p5_guard";
					sLocal_263 = "cult_p5_trv";
					sLocal_264 = "cult_p5_victim_01";
					sLocal_265 = "cult_p5_victim_02";
					sLocal_266 = "cult_p5_cam";
					fLocal_87 = 0,75f;
					fLocal_86 = 0,999f;
				}
				else if (Global_113969.f_24998.f_5 >= 2)
				{
					sLocal_267 = "ACULT_CAPT";
					sLocal_261 = "cult_p7_guard_01";
					sLocal_262 = "cult_p7_guard_02";
					sLocal_263 = "cult_p7_trv";
					sLocal_264 = "cult_p7_victim_01";
					sLocal_265 = "cult_p7_victim_02";
					sLocal_266 = "cult_p7_cam";
					fLocal_87 = 0,98f;
					fLocal_86 = 0,98f;
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood03a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood04a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood05a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_security_case_01"));
					if (!unk_0x0CB7695268A7F50F())
					{
						unk_0x839AD252B0708F35("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xC450B06E5AAA0985(uLocal_102))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_102);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x428C32CC68809A35(1);
				unk_0x747786364137DC63(0);
				unk_0x37B894853929BF1A(0);
				unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 1);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0x86A2BC11844DEEB3("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				system::wait(0);
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					uLocal_97 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xD9F5E1FEFD1329E4(uLocal_97, 0))
					{
						if (unk_0x1CE980E99A2A6FB6(uLocal_97))
						{
							iLocal_91++;
						}
					}
				}
				else
				{
					uLocal_97 = unk_0xDC8D5832207C2EAD();
					if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]) && !unk_0x4FAFF4BCB7633475(uLocal_95[1]))
					{
						unk_0x974022927CB47E68(uLocal_95[0]);
						unk_0x5C4B3034CCDA5270(uLocal_95[0]);
						unk_0x974022927CB47E68(uLocal_95[1]);
						unk_0x5C4B3034CCDA5270(uLocal_95[1]);
					}
					iLocal_91++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(uLocal_97))
			{
				if (!unk_0x110821AE6C63DD4F(iLocal_97))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_97, 1, 0);
				}
				if (unk_0x65FFA94B82A71741(iLocal_97, Local_52, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xB2BD5837A8D3CEDA(iLocal_97, -1028,415f, 4924,863f, 205,9386f, 0, 0, 0, 1);
					if (!unk_0x1C2F771CDC87A3A5(iLocal_97, 0))
					{
						unk_0x5C96CEA06531AB03(iLocal_97, 149,8882f);
						unk_0x1DE99C193C7EC64B(iLocal_97, 1084227584);
					}
				}
			}
			unk_0x2094BC4B6731BA68(Local_52, 12f, 1, 0, 0, 0);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1035,625f, 4915,152f, 205,5761f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 128,2065f);
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]) && !unk_0x4FAFF4BCB7633475(uLocal_95[1]))
			{
				unk_0xB2BD5837A8D3CEDA(uLocal_95[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_95[0], 128,2065f);
				unk_0xB2BD5837A8D3CEDA(uLocal_95[1], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_95[1], 128,2065f);
			}
			iLocal_96[0] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, 1);
			func_100(&uLocal_269, 1, iLocal_96[0], "ACULTMember1", 0, 1);
			if (Global_113969.f_24998.f_5 >= 2)
			{
				iLocal_96[1] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, 1);
				func_100(&uLocal_269, 2, iLocal_96[1], "ACULTMember2", 0, 1);
			}
			func_100(&uLocal_269, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
			func_100(&uLocal_269, 3, 0, "ACULTMaster", 0, 1);
			func_100(&uLocal_269, 4, 0, "ACULTGroup", 0, 1);
			func_101(&uLocal_269, "ACULTAU", sLocal_267, 4, 0, 0, 0);
			unk_0xAAA71DD7E9059338(iLocal_96[0], 1);
			iLocal_99 = unk_0x8A3572575D91006C(joaat("weapon_assaultrifle"), -1, unk_0xD1A6A821F5AC81DB(iLocal_96[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x4D306DD94DD6FDBA(iLocal_99, iLocal_96[0], unk_0x72F7E39FB49FC0BA(iLocal_96[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113969.f_24998.f_5 < 2)
			{
				uLocal_98 = unk_0x4E55EAB577C13329(joaat("prop_anim_cash_pile_02"), Local_51, 1, 1, 0);
				unk_0x4D306DD94DD6FDBA(uLocal_98, unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			}
			else if (Global_113969.f_24998.f_5 >= 2)
			{
				unk_0xB41DEC3AAC1AA107(iLocal_96[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_104 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_90 = unk_0x2EC137C692A52458(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_90, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3DA436E63AB0F541(iLocal_96[0], uLocal_90, "random@altruist_cult", sLocal_261, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113969.f_24998.f_5 >= 2)
			{
				unk_0x3DA436E63AB0F541(iLocal_96[1], uLocal_90, "random@altruist_cult", sLocal_262, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xF9B66DAE101B699C(uLocal_104, uLocal_90, sLocal_266, "random@altruist_cult");
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]) && !unk_0x4FAFF4BCB7633475(uLocal_95[1]))
			{
				unk_0x3DA436E63AB0F541(uLocal_95[0], uLocal_90, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(uLocal_95[1], uLocal_90, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_91++;
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[0]))
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[1]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[1]))
				{
					func_182(uLocal_95[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (unk_0xBD3B265153D3BA2D(uLocal_90) > fLocal_87)
			{
				iLocal_91++;
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[0]))
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[1]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[1]))
				{
					func_182(uLocal_95[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (unk_0xBD3B265153D3BA2D(uLocal_90) > fLocal_86)
			{
				iLocal_91++;
			}
			break;
		
		case 4:
			if (Global_113969.f_24998.f_5 < 2)
			{
				func_136();
				if (unk_0xFC8BFE4B41177C22(iLocal_96[0]))
				{
					unk_0x734A9F4537A31459(&(iLocal_96[0]));
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_96[1]))
				{
					unk_0x734A9F4537A31459(&(iLocal_96[1]));
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_98))
				{
					unk_0x51C8BEA2005931AB(&iLocal_98);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_99))
				{
					unk_0x51C8BEA2005931AB(&iLocal_99);
				}
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
				unk_0x4CBC5D1BC117616B(uLocal_104, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x747786364137DC63(1);
				unk_0x37B894853929BF1A(1);
				unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 0);
				unk_0x64BB72494B9DF6DC(0);
				func_161(func_15(), 1, 2000, 0, 0);
			}
			unk_0x86A2BC11844DEEB3("AC_DONE");
			Global_113969.f_24998.f_5 += 2;
			iLocal_76 = 1;
			break;
	}
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_162(func_181(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDF7F16323520B858(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x1164A75E490C27B6(iVar1, iVar0, 1);
	}
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_179(99, 1);
					func_178(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_173(5))
					{
						fVar0 = 0,9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_173(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_173(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_172(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_165(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_165(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_178(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_164(iParam0);
	if (Global_44042 == 15)
	{
		func_163(0);
	}
	return 1;
}

void func_163(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x1164A75E490C27B6(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x1164A75E490C27B6(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_165(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_171(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_171(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_171(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_171(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_168(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_168(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_168(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_168(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_168(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_168(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_167() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_167() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_166(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_166(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_167()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_169(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_169(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_170(uParam1));
}

int func_170(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_171(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_172(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

int func_173(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_175(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_175(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_175(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_175(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_174(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_174(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_174(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_174(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_174(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_174(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_167() /*5570*/].f_681.f_10, iParam0);
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_169(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_175(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_176(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_145(27, 1);
	return 1;
}

int func_177(int iParam0, int iParam1)
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

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59908[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_180()
{
	int iVar0;
	
	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_181(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_182(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_183(iParam3), iParam4);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_21152 = 0;
	func_185();
}

void func_185()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_186(int iParam0)
{
	Global_23297 = iParam0;
}

int func_187()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	switch (iLocal_91)
	{
		case 0:
			unk_0xEC9DAA34BBB4658C(joaat("a_m_o_acult_02"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_anim_cash_pile_02"));
			unk_0x80813AC549A1E8AE("random@altruist_cult");
			unk_0x16088CC55E7F218A("AC_DELIVERED");
			unk_0xA10F939489C3BE61(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x6252BC0DD8A320DB(joaat("a_m_o_acult_02")) && unk_0x6252BC0DD8A320DB(joaat("prop_anim_cash_pile_02"))) && unk_0xE100DD4F82A51BDE("random@altruist_cult")) && unk_0x16088CC55E7F218A("AC_DELIVERED")) && unk_0x92A65766A892EFC6(joaat("weapon_assaultrifle")))
			{
				if (Global_113969.f_24998.f_5 == 0)
				{
					sLocal_267 = "ACULT_HI";
					sLocal_261 = "cult_p2_guard";
					sLocal_263 = "cult_p2_trv";
					sLocal_264 = "cult_p2_victim";
					sLocal_266 = "cult_p2_cam";
					fLocal_87 = 0,8f;
					fLocal_86 = 0,968f;
				}
				else if (Global_113969.f_24998.f_5 == 1)
				{
					sLocal_267 = "ACULT_LEAVE3";
					sLocal_261 = "cult_p4_guard";
					sLocal_263 = "cult_p4_trv";
					sLocal_264 = "cult_p4_victim";
					sLocal_266 = "cult_p4_cam";
					fLocal_87 = 0,77f;
					fLocal_86 = 0,999f;
				}
				else if (Global_113969.f_24998.f_5 == 2)
				{
					sLocal_267 = "ACULT_LEAVE3";
					sLocal_261 = "cult_p4_guard";
					sLocal_263 = "cult_p4_trv";
					sLocal_264 = "cult_p4_victim";
					sLocal_266 = "cult_p4_cam";
					fLocal_87 = 0,77f;
					fLocal_86 = 0,999f;
				}
				else if (Global_113969.f_24998.f_5 >= 3)
				{
					sLocal_267 = "ACULT_CAPT";
					sLocal_261 = "cult_p7_guard_01";
					sLocal_262 = "cult_p7_guard_02";
					sLocal_263 = "cult_p7_trv";
					sLocal_264 = "cult_p7_victim_01";
					sLocal_266 = "cult_p7_cam";
					fLocal_87 = 0,98f;
					fLocal_86 = 0,98f;
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood03a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood04a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_box_wood05a"));
					unk_0xEC9DAA34BBB4658C(joaat("prop_security_case_01"));
					if (!unk_0x0CB7695268A7F50F())
					{
						unk_0x839AD252B0708F35("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xC450B06E5AAA0985(uLocal_102))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_102);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x428C32CC68809A35(1);
				unk_0x747786364137DC63(0);
				unk_0x37B894853929BF1A(0);
				unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 1);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0x86A2BC11844DEEB3("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				system::wait(0);
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_97 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_97, 0))
					{
						if (unk_0x1CE980E99A2A6FB6(iLocal_97))
						{
							iLocal_91++;
						}
					}
				}
				else
				{
					iLocal_97 = unk_0xDC8D5832207C2EAD();
					if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
					{
						unk_0x974022927CB47E68(uLocal_95[0]);
						unk_0x5C4B3034CCDA5270(uLocal_95[0]);
					}
					iLocal_91++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(iLocal_97))
			{
				if (!unk_0x110821AE6C63DD4F(iLocal_97))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_97, 1, 0);
				}
				if (unk_0x65FFA94B82A71741(iLocal_97, Local_52, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xB2BD5837A8D3CEDA(iLocal_97, -1028,415f, 4924,863f, 205,9386f, 0, 0, 0, 1);
					if (!unk_0x1C2F771CDC87A3A5(iLocal_97, 0))
					{
						unk_0x5C96CEA06531AB03(iLocal_97, 149,8882f);
						unk_0x1DE99C193C7EC64B(iLocal_97, 1084227584);
					}
				}
			}
			unk_0x2094BC4B6731BA68(Local_52, 12f, 1, 0, 0, 0);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1035,625f, 4915,152f, 205,5761f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 128,2065f);
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				unk_0xB2BD5837A8D3CEDA(uLocal_95[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_95[0], 128,2065f);
			}
			iLocal_96[0] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, 1);
			func_100(&uLocal_269, 1, iLocal_96[0], "ACULTMember1", 0, 1);
			if (Global_113969.f_24998.f_5 >= 3)
			{
				iLocal_96[1] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_o_acult_02"), -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, 1);
				func_100(&uLocal_269, 2, iLocal_96[1], "ACULTMember2", 0, 1);
			}
			func_100(&uLocal_269, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
			func_100(&uLocal_269, 3, 0, "ACULTMaster", 0, 1);
			func_100(&uLocal_269, 4, 0, "ACULTGroup", 0, 1);
			if (Global_113969.f_24998.f_5 != 1 && Global_113969.f_24998.f_5 != 2)
			{
				func_101(&uLocal_269, "ACULTAU", sLocal_267, 4, 0, 0, 0);
			}
			system::settimerb(0);
			unk_0xAAA71DD7E9059338(iLocal_96[0], 1);
			iLocal_98 = unk_0x4E55EAB577C13329(joaat("prop_anim_cash_pile_02"), Local_51, 1, 1, 0);
			iLocal_99 = unk_0x8A3572575D91006C(joaat("weapon_assaultrifle"), -1, unk_0xD1A6A821F5AC81DB(iLocal_96[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x4D306DD94DD6FDBA(iLocal_99, iLocal_96[0], unk_0x72F7E39FB49FC0BA(iLocal_96[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1, 0);
			if (Global_113969.f_24998.f_5 < 3)
			{
				if (Global_113969.f_24998.f_5 == 0)
				{
					unk_0x4D306DD94DD6FDBA(iLocal_98, unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
				else
				{
					unk_0x4D306DD94DD6FDBA(iLocal_98, unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				}
			}
			else if (Global_113969.f_24998.f_5 >= 3)
			{
				unk_0xB41DEC3AAC1AA107(iLocal_96[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_104 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_90 = unk_0x2EC137C692A52458(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_90, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3DA436E63AB0F541(iLocal_96[0], uLocal_90, "random@altruist_cult", sLocal_261, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_113969.f_24998.f_5 >= 3)
			{
				unk_0x3DA436E63AB0F541(iLocal_96[1], uLocal_90, "random@altruist_cult", sLocal_262, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xF9B66DAE101B699C(uLocal_104, uLocal_90, sLocal_266, "random@altruist_cult");
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				unk_0x3DA436E63AB0F541(uLocal_95[0], uLocal_90, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_91++;
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[0]))
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (system::timerb() > 2000 && system::timerb() < 2100)
			{
				if (Global_113969.f_24998.f_5 == 1 || Global_113969.f_24998.f_5 == 2)
				{
					if (!func_116())
					{
						func_101(&uLocal_269, "ACULTAU", sLocal_267, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0xBD3B265153D3BA2D(uLocal_90) > fLocal_87)
			{
				iLocal_91++;
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(uLocal_95[0]))
			{
				if (unk_0xB98B1A5B59BC5065(uLocal_95[0]))
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3, 0);
				}
				else
				{
					func_182(uLocal_95[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3, 0);
				}
			}
			if (Global_113969.f_24998.f_5 == 1 || Global_113969.f_24998.f_5 == 2)
			{
				if ((unk_0xBD3B265153D3BA2D(uLocal_90) > 0,9742857f && !iLocal_83) && unk_0x3B5989D5DB08A155() == 4)
				{
					unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_83 = 1;
				}
			}
			if (unk_0xBD3B265153D3BA2D(uLocal_90) > fLocal_86)
			{
				iLocal_91++;
			}
			break;
		
		case 4:
			if (Global_113969.f_24998.f_5 < 3)
			{
				if (Global_113969.f_24998.f_5 != 1 && Global_113969.f_24998.f_5 != 2)
				{
					func_136();
					if (unk_0xFC8BFE4B41177C22(iLocal_96[0]))
					{
						unk_0x734A9F4537A31459(&(iLocal_96[0]));
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_96[1]))
					{
						unk_0x734A9F4537A31459(&(iLocal_96[1]));
					}
				}
				else
				{
					system::settimerb(0);
					if (unk_0xFC8BFE4B41177C22(iLocal_96[0]))
					{
						unk_0x4285E11B28063EE0(iLocal_96[0], 0, 0);
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_96[1]))
					{
						unk_0x4285E11B28063EE0(iLocal_96[1], 0, 0);
					}
					if (unk_0xFC8BFE4B41177C22(uLocal_95[0]))
					{
						unk_0x4285E11B28063EE0(uLocal_95[0], 0, 0);
					}
					iLocal_91++;
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_98))
				{
					unk_0x51C8BEA2005931AB(&iLocal_98);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_99))
				{
					unk_0x51C8BEA2005931AB(&iLocal_99);
				}
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				if (Global_113969.f_24998.f_5 == 0)
				{
					unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 750, 0, 1, 0, 0);
				}
				if (unk_0x1B79E937E91F40C3(sLocal_266, "cult_p4_cam"))
				{
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
				}
				unk_0x4CBC5D1BC117616B(uLocal_104, 0);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x747786364137DC63(1);
				unk_0x37B894853929BF1A(1);
				unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 0);
				unk_0x64BB72494B9DF6DC(0);
				func_161(func_15(), 1, 1000, 0, 0);
			}
			if (Global_113969.f_24998.f_5 != 1 && Global_113969.f_24998.f_5 != 2)
			{
				unk_0x86A2BC11844DEEB3("AC_DONE");
				Global_113969.f_24998.f_5++;
				iLocal_76 = 1;
			}
			break;
		
		case 5:
			if (!func_116() || system::timerb() > 7000)
			{
				func_136();
				if (unk_0xFC8BFE4B41177C22(iLocal_96[0]))
				{
					unk_0x734A9F4537A31459(&(iLocal_96[0]));
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_96[1]))
				{
					unk_0x734A9F4537A31459(&(iLocal_96[1]));
				}
				unk_0x86A2BC11844DEEB3("AC_DONE");
				Global_113969.f_24998.f_5++;
				iLocal_76 = 1;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (unk_0xDC469CE2BE7CE722(func_190()))
			{
				unk_0xE6E9D3B5BEFF0EB3(func_190(), &uLocal_88, &iLocal_89);
				if (iLocal_89 == 1)
				{
					uLocal_95[0] = unk_0x619062CCF4C1D4D5(func_190(), 0);
					if (unk_0x65FFA94B82A71741(uLocal_95[0], Local_52, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
							{
								unk_0xE5EE5C9DDF05D925(unk_0xDC8D5832207C2EAD(), 10,5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_48 = 1;
					}
				}
				else if (iLocal_89 == 2)
				{
					uLocal_95[0] = unk_0x619062CCF4C1D4D5(func_190(), 0);
					uLocal_95[1] = unk_0x619062CCF4C1D4D5(func_190(), 1);
					if (unk_0x65FFA94B82A71741(uLocal_95[0], Local_52, 5f, 5f, 5f, 0, 1, 0) && unk_0x65FFA94B82A71741(uLocal_95[1], Local_52, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
							{
								unk_0xE5EE5C9DDF05D925(unk_0xDC8D5832207C2EAD(), 10,5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_48 = 1;
					}
				}
			}
		}
	}
}

var func_190()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

bool func_191()
{
	return Global_33187;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_258 == 0)
		{
			iLocal_258 = unk_0xA7B0B03284E7503C(Local_51 - Vector(100f, 60f, 80f), Local_51 + Vector(100f, 60f, 80f), 0, 1, 1, 1, 1);
		}
		while (unk_0xED977E2AE2CB16EE(func_96(unk_0x259BE71D8A81D4FA()), Local_51, 1) < 209f)
		{
			system::wait(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x048553DADAD2512F(2017343592, joaat("player")) != 5)
		{
			if (func_194())
			{
				unk_0xD414C47AFF81382A(5, 2017343592, joaat("player"));
			}
			else if (func_193())
			{
				unk_0xD414C47AFF81382A(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x048553DADAD2512F(2017343592, joaat("player")) != 5)
		{
			if (func_194())
			{
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) || (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()) && unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA())))
				{
					unk_0xD414C47AFF81382A(5, 2017343592, joaat("player"));
				}
			}
			else if (func_193())
			{
				unk_0xD414C47AFF81382A(5, 2017343592, joaat("player"));
			}
			else if (unk_0x048553DADAD2512F(2017343592, joaat("player")) != 1)
			{
				unk_0xD414C47AFF81382A(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_194())
	{
		if (iLocal_81)
		{
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 3))
			{
				unk_0x86A2BC11844DEEB3("AC_START");
			}
			unk_0x425BBE19F25A57AB(0f);
			unk_0xC897319696131088("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0xE10356B235A70E70(Global_42738[9 /*31*/].f_2, 6f, Global_42738[9 /*31*/].f_5, 0))
			{
				unk_0x1F3E4227575DF103(Global_42738[9 /*31*/].f_5, Global_42738[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0xE10356B235A70E70(Global_42738[10 /*31*/].f_2, 6f, Global_42738[10 /*31*/].f_5, 0))
			{
				unk_0x1F3E4227575DF103(Global_42738[10 /*31*/].f_5, Global_42738[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_82 = true;
			iLocal_81 = 0;
		}
	}
	else if (!iLocal_81)
	{
		if (unk_0x7507A74A3D963966())
		{
			unk_0x86A2BC11844DEEB3("AC_END");
		}
		unk_0x425BBE19F25A57AB(1f);
		unk_0xC897319696131088("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_82)
		{
			func_158();
		}
		iLocal_81 = 1;
	}
}

int func_193()
{
	if ((((((unk_0xF20EF02FBF173C32(Local_53, Local_54, fLocal_55, 1) || unk_0xF20EF02FBF173C32(Local_56, Local_57, fLocal_58, 1)) || unk_0xF20EF02FBF173C32(Local_59, Local_60, fLocal_61, 1)) || unk_0xF20EF02FBF173C32(Local_62, Local_63, fLocal_64, 1)) || unk_0xF20EF02FBF173C32(Local_65, Local_66, fLocal_67, 1)) || unk_0xF20EF02FBF173C32(Local_68, Local_69, fLocal_70, 1)) || unk_0xF20EF02FBF173C32(Local_71, Local_72, fLocal_73, 1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if ((((((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_53, Local_54, fLocal_55, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_56, Local_57, fLocal_58, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_59, Local_60, fLocal_61, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_62, Local_63, fLocal_64, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_65, Local_66, fLocal_67, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_68, Local_69, fLocal_70, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_71, Local_72, fLocal_73, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_113969.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	unk_0xD414C47AFF81382A(255, 2017343592, joaat("player"));
	if (Global_113969.f_24998.f_5 >= iLocal_94 && Global_113969.f_24998.f_5 != 1000)
	{
		if (bLocal_74)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_48 = 3;
		}
		else
		{
			func_197(&uLocal_107);
			Global_96770 = 0;
			Global_96771 = 0;
			Global_96772 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0x31E8D1058586E006(1);
			unk_0xD43B9D1692F5C06E(0);
			unk_0x72B1E2693AC30407(0);
			func_3(0);
			unk_0x425BBE19F25A57AB(1f);
			unk_0xCC1C92F7E1A3CE9D(3, 1);
			unk_0xCC1C92F7E1A3CE9D(5, 1);
			unk_0xA21EFB60FCA3D0F6();
			iLocal_81 = 0;
			func_97();
			Global_113969.f_24998.f_5 = (iLocal_94 - 1);
			unk_0xBBC29EBE6E1A48FA();
		}
	}
	else
	{
		unk_0x830C51B62E7CD5B2();
		func_197(&uLocal_107);
		Global_96770 = 0;
		Global_96771 = 0;
		Global_96772 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0x31E8D1058586E006(1);
		unk_0xD43B9D1692F5C06E(0);
		unk_0x72B1E2693AC30407(0);
		func_3(0);
		if (unk_0xA0C7B98BCF1EEF9E(uLocal_257))
		{
			unk_0xD314260005F064BF(&uLocal_257);
			func_99(0);
		}
		unk_0x425BBE19F25A57AB(1f);
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xCC1C92F7E1A3CE9D(5, 1);
		unk_0xA21EFB60FCA3D0F6();
		iLocal_81 = 0;
		unk_0xBBC29EBE6E1A48FA();
	}
}

void func_197(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0xD314260005F064BF(uParam0);
		*uParam0 = 0;
	}
}

