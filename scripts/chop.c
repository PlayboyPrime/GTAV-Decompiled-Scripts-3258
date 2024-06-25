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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	char* sLocal_78[3] = { NULL, NULL, NULL };
	char* sLocal_79 = NULL;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82[4];
	float fLocal_83[4] = { 0f, 0f, 0f, 0f };
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<4> Local_86 = { 0, 0, 0, 0 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 15;
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
	var uLocal_146 = 16;
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
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315[5] = { 0, 0, 0, 0, 0 };
	float fLocal_316[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_317[5];
	struct<3> Local_318[5];
	int iLocal_319 = 0;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_321 = { 0, 0, 0 } ;
	float fLocal_322 = 0f;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	bool bLocal_325 = 0;
	int iLocal_326 = 0;
	struct<3> Local_327 = { 0, 0, 0 } ;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	float fLocal_339 = 0f;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	struct<3> Local_343 = { 0, 0, 0 } ;
	var uLocal_344 = 0;
	struct<3> Local_345 = { 0, 0, 0 } ;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	struct<3> Local_349 = { 0, 0, 0 } ;
	struct<3> Local_350 = { 0, 0, 0 } ;
	var uLocal_351 = 0;
	struct<3> Local_352 = { 0, 0, 0 } ;
	struct<3> Local_353 = { 0, 0, 0 } ;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	struct<3> Local_356[8];
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	var uLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	struct<2> Local_385 = { 0, 5 } ;
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
	var uLocal_401 = 5;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	iLocal_52 = -1;
	sLocal_79 = "null";
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_92 = 1;
	fLocal_322 = 200f;
	iLocal_341 = unk_0x1DD05E817C89C737();
	iLocal_342 = 10000;
	iLocal_358 = -1;
	iLocal_367 = joaat("LAYOUT_STANDARD");
	sLocal_368 = "std_ds_open_door_for_chop";
	sLocal_369 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_377 = unk_0x1DD05E817C89C737();
	iLocal_380 = unk_0x1DD05E817C89C737();
	uLocal_382 = unk_0xCA369FBC0DE29517();
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_181();
	}
	while (!unk_0x9390801B06EE998F())
	{
		system::wait(0);
	}
	iLocal_384 = unk_0xE37AC296E66C33AF();
	Local_343 = { ScriptParam_385.f_1[0 /*3*/] };
	if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1)
	{
		func_181();
	}
	if (!func_180(63))
	{
		func_181();
	}
	if (!func_179(5) && !func_179(6))
	{
		func_181();
	}
	if (func_179(6) && func_178(Local_343, 1, 0) == 5)
	{
		func_181();
	}
	if (!func_171(1))
	{
		func_181();
	}
	if (Global_33096 == 1)
	{
		func_181();
	}
	if (Global_98433 == 1)
	{
		func_181();
	}
	if (func_168(0))
	{
		if (unk_0x486FF5D06E9659F1(joaat("sh_intro_f_hills")) == 0 && unk_0x486FF5D06E9659F1(joaat("martin1")) == 0)
		{
			func_181();
		}
	}
	if ((((func_167() == 206 || func_167() == 207) || func_167() == 204) || func_167() == 205) || func_167() == 203)
	{
		iLocal_323 = 1;
	}
	else if (func_167() == 47)
	{
		iLocal_324 = 1;
	}
	else
	{
		if ((unk_0xED977E2AE2CB16EE(Local_343, 154,0731f, 765,5721f, 209,6901f, 1) <= 50f || unk_0xED977E2AE2CB16EE(Local_343, -268,139f, 415,2881f, 109,7258f, 1) <= 50f) || unk_0xED977E2AE2CB16EE(Local_343, 314,4171f, 965,207f, 208,4024f, 1) <= 50f)
		{
			func_181();
		}
		iLocal_323 = 0;
		iLocal_324 = 0;
		if (Global_79387 == 1)
		{
			func_181();
		}
	}
	while (true)
	{
		if (!func_164())
		{
			switch (iLocal_48)
			{
				case 0:
					func_155();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_181();
		}
		system::wait(0);
	}
}

void func_1()
{
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	if (unk_0x4FAFF4BCB7633475(iLocal_67))
	{
		return;
	}
	func_153();
	func_152();
	if (iLocal_49 != 11)
	{
		func_151();
		func_150();
		func_130();
		func_129();
		func_127();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	switch (iLocal_49)
	{
		case 11:
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_126(iLocal_67))
					{
						unk_0x10425721983AE158(iLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_125(iLocal_67, Local_327.f_5, Local_327.f_8, 0, 1);
					}
					iLocal_334 = unk_0x1DD05E817C89C737();
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_124())
				{
					unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@sleep_in_kennel@") && func_126(iLocal_67))
					{
						unk_0x10425721983AE158(iLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_123("WHINE");
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_play_anim")) == 7)
				{
					unk_0x268BE77F77533D03("creatures@rottweiler@amb@sleep_in_kennel@");
					func_123("PLAYFUL");
					func_122(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_336 == 0 && func_119(unk_0x4A8C381C258A124D(), 1))
			{
				func_122(18, 1);
			}
			else
			{
				func_118();
				func_117();
				func_116();
			}
			break;
		
		case 17:
			func_118();
			func_117();
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE(sLocal_78[0]);
				unk_0x80813AC549A1E8AE(sLocal_78[1]);
				unk_0x80813AC549A1E8AE(sLocal_78[2]);
				if ((unk_0xE100DD4F82A51BDE(sLocal_78[0]) && unk_0xE100DD4F82A51BDE(sLocal_78[1])) && unk_0xE100DD4F82A51BDE(sLocal_78[2]))
				{
					unk_0x10425721983AE158(iLocal_67, sLocal_78[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if ((!func_114(iLocal_67, joaat("script_task_play_anim")) || (unk_0x13CCB1AD131C1082(iLocal_67, sLocal_78[0], "enter", 3) && unk_0x82E64DE58A6B84A8(iLocal_67, sLocal_78[0], "enter") > 0,98f)) || (unk_0x13CCB1AD131C1082(iLocal_67, sLocal_78[1], sLocal_79, 3) && unk_0x82E64DE58A6B84A8(iLocal_67, sLocal_78[1], sLocal_79) > 0,98f))
				{
					if (iLocal_51 == 0)
					{
						if (iLocal_77 == 1)
						{
							unk_0x10425721983AE158(iLocal_67, sLocal_78[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_79 = "base";
							iLocal_50++;
						}
						else
						{
							func_113();
							if (unk_0xC5935DFB3F39785A(0, 4) == 0)
							{
								iLocal_50++;
							}
						}
					}
					else
					{
						if (iLocal_51 != 5)
						{
							func_109("CHOP_WAIT", 0);
						}
						unk_0x10425721983AE158(iLocal_67, sLocal_78[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_50 = 3;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (!func_114(iLocal_67, joaat("script_task_play_anim")) || (unk_0x13CCB1AD131C1082(iLocal_67, sLocal_78[1], sLocal_79, 3) && unk_0x82E64DE58A6B84A8(iLocal_67, sLocal_78[1], sLocal_79) > 0,98f))
				{
					unk_0x10425721983AE158(iLocal_67, sLocal_78[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 3)
			{
				if (!func_114(iLocal_67, joaat("script_task_play_anim")))
				{
					iLocal_346 = 0;
					if (iLocal_51 == 0)
					{
						func_122(1, 1);
					}
					else
					{
						func_122(iLocal_51, 1);
					}
				}
			}
			break;
		
		case 18:
			func_117();
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0xAB3658A740EED98E(iLocal_67, unk_0x4A8C381C258A124D(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (iLocal_51 == 0)
				{
					if (!func_114(iLocal_67, joaat("script_task_go_to_entity")))
					{
						if ((unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0xB5396F1FB088FE38(&uLocal_93);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_93);
							unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
							unk_0xD0557B139A542F12(&uLocal_93);
							iLocal_50++;
						}
					}
				}
				else
				{
					func_122(iLocal_51, 1);
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					iLocal_336 = 1;
					if (iLocal_51 == 0)
					{
						func_122(1, 1);
					}
					else
					{
						func_122(iLocal_51, 1);
					}
				}
			}
			break;
		
		case 2:
			func_103();
			if (iLocal_50 == 0)
			{
				if ((func_126(iLocal_67) && !unk_0x7F420695E3F776FB(iLocal_67, 0)) && !unk_0x133460AD0F183CC9(iLocal_67))
				{
					unk_0x974022927CB47E68(iLocal_67);
				}
				func_101();
				func_100(0, 0, 0);
				func_99(1);
				iLocal_58 = -1;
				iLocal_314 = unk_0x1DD05E817C89C737();
				iLocal_60 = unk_0x1DD05E817C89C737();
				iLocal_61 = (unk_0x1DD05E817C89C737() - 10000);
				Local_74 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
				unk_0x80813AC549A1E8AE("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				func_84();
				func_55();
				func_54();
				func_45();
				func_44();
				func_41();
				func_118();
			}
			break;
		
		case 3:
			if (iLocal_50 == 0)
			{
				func_123("WHINE");
				func_109("CHOP_GOHOME", 0);
				func_40(0);
				unk_0x268BE77F77533D03("creatures@rottweiler@melee@streamed_taunts@");
				if (func_126(unk_0x4A8C381C258A124D()) && unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_ball"), 0))
				{
					unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("weapon_ball"));
				}
				if (unk_0x133460AD0F183CC9(iLocal_67))
				{
					unk_0x5C4B3034CCDA5270(iLocal_67);
				}
				if (func_119(iLocal_67, 1))
				{
					func_122(1, 1);
				}
				else if (func_39(iLocal_67, Local_327, 1) < 100f)
				{
					unk_0x974022927CB47E68(iLocal_67);
					if (func_39(iLocal_67, Local_327, 1) < 20f)
					{
						unk_0xA966E518B752B92A(iLocal_67, Local_327, 1f, 20000, 0,25f, 32, Local_327.f_3);
					}
					else
					{
						unk_0xA966E518B752B92A(iLocal_67, Local_327, 3f, 60000, 0,25f, 32, Local_327.f_3);
					}
					iLocal_50++;
				}
				else
				{
					func_122(4, 1);
				}
			}
			else if (iLocal_50 == 1)
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")) == 7)
				{
					if (unk_0x65FFA94B82A71741(iLocal_67, Local_327, 2,5f, 2,5f, 4f, 0, 1, 0))
					{
						func_122(1, 1);
					}
					else
					{
						func_122(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_114(iLocal_67, joaat("script_task_smart_flee_ped")))
			{
				unk_0xD844F5E50DAB6FF7(iLocal_67, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_50 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0x133460AD0F183CC9(iLocal_67))
						{
							unk_0x5C4B3034CCDA5270(iLocal_67);
						}
						unk_0x974022927CB47E68(iLocal_67);
						iLocal_54 = unk_0x1DD05E817C89C737();
						iLocal_56 = 1000;
						iLocal_337 = 0;
						iLocal_65 = -1;
						func_34();
						iLocal_50++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_50 == 1)
			{
				if (((!func_24() || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !func_22())) || (iLocal_65 > -1 && (unk_0x1DD05E817C89C737() - iLocal_65) > 30000)) || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_320, 1f, 1f, 1f, 0, 1, 0))
				{
					iLocal_50++;
				}
				else if (unk_0x65FFA94B82A71741(iLocal_67, Local_321, 3f, 3f, 4f, 0, 1, 0))
				{
					func_20();
					if (iLocal_65 == -1)
					{
						iLocal_65 = unk_0x1DD05E817C89C737();
					}
				}
				else
				{
					func_17();
					if (func_114(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")))
					{
						iVar0 = unk_0x32ABB6392C917150(iLocal_67, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_337++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_337 != 0)
							{
								iLocal_337 = 0;
							}
						}
						if (iLocal_337 > 9)
						{
							func_32();
						}
					}
					else
					{
						unk_0xA966E518B752B92A(iLocal_67, Local_321, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				unk_0x974022927CB47E68(iLocal_67);
				unk_0x268BE77F77533D03("creatures@rottweiler@indication@");
				func_122(2, 1);
			}
			func_103();
			break;
		
		case 6:
			if (iLocal_50 == 0)
			{
				if (unk_0x133460AD0F183CC9(iLocal_67))
				{
					unk_0x5C4B3034CCDA5270(iLocal_67);
				}
				unk_0xAAA71DD7E9059338(iLocal_67, 0);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (func_126(unk_0x4A8C381C258A124D()))
				{
					if ((!func_114(iLocal_67, joaat("script_task_combat")) && !unk_0x1B32E388988DD296(iLocal_67, 0)) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						iLocal_60 = unk_0x1DD05E817C89C737();
						func_122(2, 1);
					}
				}
			}
			func_103();
			break;
		
		case 7:
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					if (!unk_0x3644984C9D7B57EF(iLocal_67, unk_0x4A8C381C258A124D(), 10f))
					{
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					}
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 8:
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					if (!unk_0x3644984C9D7B57EF(iLocal_67, unk_0x4A8C381C258A124D(), 10f))
					{
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					}
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 9:
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					if (!unk_0x3644984C9D7B57EF(iLocal_67, unk_0x4A8C381C258A124D(), 10f))
					{
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					}
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 10:
			unk_0x66EFB3D6110055C4(0, 32, 1);
			unk_0x66EFB3D6110055C4(0, 34, 1);
			unk_0x66EFB3D6110055C4(0, 35, 1);
			unk_0x66EFB3D6110055C4(0, 33, 1);
			unk_0x66EFB3D6110055C4(0, 31, 1);
			unk_0x66EFB3D6110055C4(0, 30, 1);
			unk_0x66EFB3D6110055C4(0, 22, 1);
			unk_0x66EFB3D6110055C4(0, 36, 1);
			unk_0x66EFB3D6110055C4(0, 44, 1);
			unk_0x66EFB3D6110055C4(0, 141, 1);
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 263, 1);
			unk_0x66EFB3D6110055C4(0, 264, 1);
			unk_0x66EFB3D6110055C4(0, 143, 1);
			unk_0x66EFB3D6110055C4(0, 24, 1);
			unk_0x66EFB3D6110055C4(0, 257, 1);
			unk_0x66EFB3D6110055C4(0, 262, 1);
			unk_0x66EFB3D6110055C4(0, 261, 1);
			unk_0x66EFB3D6110055C4(0, 37, 1);
			unk_0x66EFB3D6110055C4(0, 21, 1);
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				unk_0x0E95B96CFEFE7B61(unk_0x4A8C381C258A124D(), iLocal_67, 0);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_turn_ped_to_face_entity")) == 7)
				{
					unk_0x974022927CB47E68(iLocal_67);
					Var3 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 1f, 1f) };
					unk_0xB1EAADCB692D69CE(Var3, &(Var3.f_2), 0, 0);
					if (func_39(iLocal_67, Var3, 0) > 0,3f)
					{
						unk_0xA966E518B752B92A(iLocal_67, Var3, 1f, 5000, 0,25f, 0, 1193033728);
					}
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 2)
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")) == 7 || func_39(iLocal_67, Var3, 0) < 0,3f)
				{
					if (!unk_0x3644984C9D7B57EF(iLocal_67, unk_0x4A8C381C258A124D(), 15f))
					{
						unk_0x0E95B96CFEFE7B61(iLocal_67, unk_0x4A8C381C258A124D(), 0);
						iLocal_374 = 0;
					}
					else
					{
						iLocal_374 = 1;
					}
					if (!unk_0x3644984C9D7B57EF(unk_0x4A8C381C258A124D(), iLocal_67, 15f))
					{
						unk_0x0E95B96CFEFE7B61(unk_0x4A8C381C258A124D(), iLocal_67, 0);
						iLocal_375 = 0;
					}
					else
					{
						iLocal_375 = 1;
					}
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 3)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				if (((iLocal_374 == 1 || unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_turn_ped_to_face_entity")) == 7) && (iLocal_375 == 1 || unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_turn_ped_to_face_entity")) == 7)) && unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
				{
					unk_0x10425721983AE158(iLocal_67, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 4)
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_play_anim")) == 7)
				{
					func_109("CHOP_RETURN1", 0);
					unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 12:
			if (iLocal_50 == 0)
			{
				if (unk_0x133460AD0F183CC9(iLocal_67))
				{
					unk_0x5C4B3034CCDA5270(iLocal_67);
				}
				unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!func_15())
				{
					unk_0x80813AC549A1E8AE("creatures@rottweiler@tricks@");
					if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@tricks@"))
					{
						unk_0x974022927CB47E68(iLocal_67);
						unk_0x10425721983AE158(iLocal_67, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_109("CHOP_WALK", 0);
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_play_anim")) == 7)
				{
					unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
					iLocal_60 = unk_0x1DD05E817C89C737();
					func_122(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_50 == 0)
			{
				if (unk_0x133460AD0F183CC9(iLocal_67))
				{
					unk_0x5C4B3034CCDA5270(iLocal_67);
				}
				unk_0x80813AC549A1E8AE("creatures@rottweiler@move");
				unk_0x8003D3C0115A1035();
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@move") && unk_0x6F13318788EDDAD8())
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					unk_0x10425721983AE158(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					func_123("AGITATED");
					iLocal_62 = unk_0x1DD05E817C89C737();
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					if (unk_0x9CFFB7009B578840(uLocal_75))
					{
						unk_0x182120534CCF9023(uLocal_75, 0);
					}
					if (func_119(iLocal_67, 0))
					{
						func_122(1, 1);
					}
					else
					{
						func_122(2, 1);
					}
				}
				else if (!unk_0x9CFFB7009B578840(uLocal_75))
				{
					if (iLocal_62 > -1 && (unk_0x1DD05E817C89C737() - iLocal_62) > 4000)
					{
						uLocal_75 = unk_0x62750FD2BDD8BD49("ent_anim_dog_poo", iLocal_67, 0f, -0,15f, -0,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					}
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_62) > 10000)
				{
					unk_0x182120534CCF9023(uLocal_75, 0);
					iLocal_62 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_50 == 0)
			{
				unk_0x8003D3C0115A1035();
				if (unk_0x6F13318788EDDAD8())
				{
					if (unk_0x133460AD0F183CC9(iLocal_67))
					{
						unk_0x5C4B3034CCDA5270(iLocal_67);
					}
					func_123("AGITATED");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@move");
				if (!func_114(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")))
				{
					unk_0xA966E518B752B92A(iLocal_67, unk_0xD1A6A821F5AC81DB(iLocal_347, 1), 2f, 20000, 0,25f, 36, 1193033728);
				}
				if (func_39(iLocal_67, unk_0xD1A6A821F5AC81DB(iLocal_347, 1), 1) < 2f)
				{
					if ((!BitTest(Global_113969.f_10052.f_94, 10) && !unk_0x4C705AAF75363287()) && !unk_0x3555462DB47B7AB1())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 10);
					}
					unk_0x974022927CB47E68(iLocal_67);
					if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@move") && unk_0xDF93B3CFAC96698F(iLocal_67) < 1f)
					{
						Local_349 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
						iLocal_348 = unk_0xC5935DFB3F39785A(0, 2);
						uLocal_351 = func_14(Local_349, unk_0xD1A6A821F5AC81DB(iLocal_347, 1));
						if (iLocal_348 == 0)
						{
							Local_350 = { unk_0xF10F2A2453AF1DFB(Local_349, uLocal_351, -0,5f, 1f, 0f) };
						}
						else
						{
							Local_350 = { unk_0xF10F2A2453AF1DFB(Local_349, uLocal_351, 0,5f, 1f, 0f) };
						}
						unk_0xB5396F1FB088FE38(&uLocal_93);
						unk_0xCD76801E1106CABE(0, Local_350, 0);
						if (iLocal_348 == 0)
						{
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x93C0674FC00824D0(uLocal_93);
						unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
						unk_0xD0557B139A542F12(&uLocal_93);
						iLocal_62 = unk_0x1DD05E817C89C737();
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					if (unk_0x9CFFB7009B578840(uLocal_75))
					{
						unk_0x182120534CCF9023(uLocal_75, 0);
					}
					func_123("BARK");
					func_122(2, 1);
				}
				else if (!unk_0x9CFFB7009B578840(uLocal_75))
				{
					if (iLocal_62 > -1 && (unk_0x1DD05E817C89C737() - iLocal_62) > 7000)
					{
						if (iLocal_348 == 0)
						{
							uLocal_75 = unk_0x62750FD2BDD8BD49("ent_anim_dog_peeing", iLocal_67, 0,1f, -0,32f, -0,04f, 0f, 0f, 30f, 1065353216, 0, 0, 0);
						}
						else
						{
							uLocal_75 = unk_0x62750FD2BDD8BD49("ent_anim_dog_peeing", iLocal_67, -0,1f, -0,32f, -0,04f, 0f, 0f, 150f, 1065353216, 0, 0, 0);
						}
					}
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_62) > 16000)
				{
					unk_0x182120534CCF9023(uLocal_75, 0);
					iLocal_62 = -1;
				}
			}
			break;
		
		case 15:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				func_40(0);
				iLocal_60 = unk_0x1DD05E817C89C737();
				func_122(2, 1);
			}
			else
			{
				if (iLocal_50 == 0)
				{
					func_40(1);
					if (unk_0xF67924A428A734EC(unk_0x4A8C381C258A124D(), iLocal_365, 50f, &uLocal_360, &iLocal_359, 0))
					{
						func_6(294, 0, 0);
						unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
						iLocal_363 = 0;
						iLocal_364 = 0;
						iLocal_338 = 0;
						if (unk_0x133460AD0F183CC9(iLocal_67))
						{
							unk_0x5C4B3034CCDA5270(iLocal_67);
						}
						iLocal_366 = unk_0x1DD05E817C89C737();
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 1)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_359))
					{
						if (!unk_0x69799E0840A34AFB(iLocal_359))
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_366) > 500)
							{
								if (func_5())
								{
									unk_0x80813AC549A1E8AE("creatures@rottweiler@move");
									if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@move"))
									{
										unk_0xB5396F1FB088FE38(&uLocal_93);
										if (iLocal_365 == joaat("weapon_ball"))
										{
											unk_0x10425721983AE158(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), 20000, 4f, 3f, 1073741824, 0);
										unk_0x93C0674FC00824D0(uLocal_93);
										unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
										unk_0xD0557B139A542F12(&uLocal_93);
										if (iLocal_365 == joaat("weapon_ball"))
										{
											iLocal_363 = 1;
										}
										iLocal_50++;
									}
								}
								else if (!func_114(iLocal_67, joaat("script_task_go_to_entity")))
								{
									unk_0xAB3658A740EED98E(iLocal_67, iLocal_359, 30000, 0,5f, 3f, 1073741824, 0);
									iLocal_338++;
									iLocal_337 = 0;
									if (iLocal_338 > 3)
									{
										unk_0xAB3658A740EED98E(iLocal_67, unk_0x4A8C381C258A124D(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_50++;
									}
								}
								else
								{
									iVar0 = unk_0x32ABB6392C917150(iLocal_67, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_339 = unk_0x2399A6E4929050EE(iLocal_359);
										if (fLocal_339 < 1f)
										{
											iLocal_337++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_364 == 0)
										{
											func_123("BARK");
											if (iLocal_365 == joaat("weapon_ball"))
											{
												func_109("CHOP_FETCH", 0);
											}
											iLocal_364 = 1;
										}
									}
									if (iLocal_337 > 9)
									{
										unk_0xAB3658A740EED98E(iLocal_67, unk_0x4A8C381C258A124D(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_50++;
									}
								}
							}
						}
						else
						{
							unk_0xAB3658A740EED98E(iLocal_67, unk_0x4A8C381C258A124D(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_50++;
						}
					}
					else
					{
						unk_0xAB3658A740EED98E(iLocal_67, unk_0x4A8C381C258A124D(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 2)
				{
					if (iLocal_363 == 1)
					{
						if ((unk_0xFC8BFE4B41177C22(iLocal_359) && unk_0x13CCB1AD131C1082(iLocal_67, "creatures@rottweiler@move", "fetch_pickup", 3)) && unk_0x82E64DE58A6B84A8(iLocal_67, "creatures@rottweiler@move", "fetch_pickup") > 0,25f)
						{
							unk_0x4D306DD94DD6FDBA(iLocal_359, iLocal_67, 28, 0,2042f, 0f, -0,0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							unk_0xCFBD89D2F1F18961("DisableBarks", 1);
							iLocal_50++;
						}
					}
					else
					{
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 3)
				{
					if (func_4(unk_0x4A8C381C258A124D(), iLocal_67, 1) < 5f)
					{
						if (iLocal_365 == joaat("weapon_ball"))
						{
							if (iLocal_363 == 1)
							{
								unk_0x80813AC549A1E8AE("creatures@rottweiler@move");
								if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@move"))
								{
									unk_0xB5396F1FB088FE38(&uLocal_93);
									unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
									unk_0x10425721983AE158(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									unk_0x93C0674FC00824D0(uLocal_93);
									unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
									unk_0xD0557B139A542F12(&uLocal_93);
									func_109("CHOP_RETURN1", 0);
									unk_0xCFBD89D2F1F18961("DisableBarks", 0);
									iLocal_50++;
								}
							}
							else
							{
								func_123("BREATH_AGITATED");
								func_109("CHOP_RETURN2", 0);
								func_122(2, 1);
							}
						}
						else
						{
							func_123("BARK_WHINE");
							func_40(1);
							func_122(2, 1);
						}
					}
				}
				else if (iLocal_50 == 4)
				{
					if (!func_114(iLocal_67, joaat("script_task_perform_sequence")) && !unk_0xFC8BFE4B41177C22(iLocal_359))
					{
						if (func_3(0))
						{
							func_100(0, 1, 0);
						}
						else if (unk_0x3B5989D5DB08A155() == 4)
						{
							func_100(0, 1, 1);
						}
						else
						{
							func_100(1, 1, 1);
						}
						iLocal_60 = unk_0x1DD05E817C89C737();
						func_122(2, 1);
					}
					else if (unk_0xFC8BFE4B41177C22(iLocal_359))
					{
						if (unk_0xA3736D76B0E93E93(iLocal_359))
						{
							if (unk_0x13CCB1AD131C1082(iLocal_67, "creatures@rottweiler@move", "fetch_drop", 3) && unk_0x82E64DE58A6B84A8(iLocal_67, "creatures@rottweiler@move", "fetch_drop") > 0,4f)
							{
								unk_0x837D67618BF89034(iLocal_359, 1, 1);
							}
						}
						else
						{
							if ((func_4(unk_0x4A8C381C258A124D(), iLocal_359, 1) < 1,5f || func_4(unk_0x4A8C381C258A124D(), iLocal_359, 1) > 20f) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								func_40(1);
							}
							if (!func_114(iLocal_67, joaat("script_task_perform_sequence")))
							{
								func_101();
							}
						}
					}
				}
				func_103();
			}
			break;
		
		case 16:
			if (iLocal_50 == 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0x133460AD0F183CC9(iLocal_67))
					{
						unk_0x5C4B3034CCDA5270(iLocal_67);
					}
					unk_0x4D306DD94DD6FDBA(iLocal_67, unk_0xAD0F9A0F639285AA(unk_0x4A8C381C258A124D()), 0, 0f, 0f, -6,1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
					unk_0x10425721983AE158(iLocal_67, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!unk_0xA3736D76B0E93E93(unk_0x4A8C381C258A124D()))
				{
					fVar4 = 99999f;
					iVar6 = 0;
					while (iVar6 < 4)
					{
						fVar5 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_82[iVar6 /*3*/], 1);
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar7 = iVar6;
						}
						iVar6++;
					}
					if (unk_0xA3736D76B0E93E93(iLocal_67))
					{
						unk_0x837D67618BF89034(iLocal_67, 1, 1);
					}
					func_125(iLocal_67, Local_82[iVar7 /*3*/], fLocal_83[iVar7], 0, 1);
					unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
					iLocal_60 = unk_0x1DD05E817C89C737();
					func_122(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, int iParam2)
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

int func_5()
{
	struct<3> Var0;
	float fVar1;
	
	if (func_4(iLocal_67, iLocal_359, 1) < (0,5f + 0,25f))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_359, 1) };
		if (unk_0xB1EAADCB692D69CE(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar1, 0, 0))
		{
			if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - fVar1)) < 0,1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
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
		func_12((891 + iParam0), 1, -1);
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
		func_7();
	}
}

void func_7()
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
		func_11(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_10() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0))
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

int func_9(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_10()
{
	return Global_32948;
}

int func_11(int iParam0, int iParam1)
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

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_13()
{
	return Global_1574926;
}

var func_14(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

bool func_15()
{
	return Global_101585.f_393 > 0;
}

void func_16()
{
	iLocal_60 = unk_0x1DD05E817C89C737();
	if (iLocal_73 == 0)
	{
		func_122(1, 1);
	}
	else
	{
		func_122(2, 1);
	}
}

void func_17()
{
	float fVar0;
	
	if ((unk_0x1DD05E817C89C737() - iLocal_54) > iLocal_56)
	{
		fVar0 = func_39(iLocal_67, Local_321, 1);
		if (fVar0 < 10f)
		{
			func_123("BARK_SEQ");
		}
		else
		{
			func_123("BARK");
		}
		iLocal_54 = unk_0x1DD05E817C89C737();
		if (fVar0 < 20f)
		{
			iLocal_56 = unk_0xC5935DFB3F39785A(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_56 = unk_0xC5935DFB3F39785A(5000, 6000);
		}
		else
		{
			iLocal_56 = unk_0xC5935DFB3F39785A(8000, 12000);
		}
		if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 1)) && !func_19()) && !unk_0x3555462DB47B7AB1())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 1);
			func_18("CHOP_H_HUNT", -1);
		}
	}
}

void func_18(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_19()
{
	int iVar0;
	
	if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_67) || (iLocal_49 == 10 && unk_0x6D05C5731A838CB3(2, 25)))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (!func_114(iLocal_67, joaat("script_task_perform_sequence")))
	{
		unk_0x80813AC549A1E8AE("creatures@rottweiler@indication@");
		if (unk_0xE100DD4F82A51BDE("creatures@rottweiler@indication@"))
		{
			unk_0x974022927CB47E68(iLocal_67);
			unk_0xB5396F1FB088FE38(&uLocal_93);
			unk_0xCD76801E1106CABE(0, Local_320, 0);
			unk_0x10425721983AE158(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_93);
			unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
			unk_0xD0557B139A542F12(&uLocal_93);
		}
	}
}

char* func_21()
{
	char* sVar0;
	struct<3> Var1;
	
	if (func_126(iLocal_67))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
		if ((Var1.f_2 + 1f) < Local_320.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_320.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
	{
		if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == unk_0x70E57E9927B6BA58("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (iLocal_312)
	{
		case 2:
			if (!func_27(2))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_319))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_319))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113969.f_10052.f_125, iParam0);
	}
	return BitTest(Global_113969.f_10052.f_125.f_1, (iParam0 - 32));
}

int func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113969.f_10052.f_122, iParam0);
	}
	return BitTest(Global_113969.f_10052.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_319);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()
{
	return Global_33196;
}

int func_29()
{
	if (Global_33193 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_33193 == 0)
	{
		Global_33193 = 1;
		Global_33194 = iParam0;
		Global_33195 = iParam1;
	}
}

int func_31()
{
	if (Global_33193 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
	func_33(Var0);
	func_123("WHINE");
	func_109("CHOP_NONEAR", 0);
	func_16();
}

void func_33(struct<3> Param0)
{
	if (system::vdist(Param0, Param0) > 1f)
	{
	}
}

void func_34()
{
	Global_33193 = 3;
}

int func_35()
{
	iLocal_319 = -1;
	Local_320 = { 0f, 0f, 0f };
	Local_321 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_319 == -1)
	{
		func_36(1);
	}
	if (iLocal_319 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_315[iVar1] > -1 && fLocal_316[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_316[iVar1];
			iLocal_319 = iLocal_315[iVar1];
			iLocal_312 = iVar1;
			Local_320 = { Local_317[iVar1 /*3*/] };
			Local_321 = { Local_318[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && unk_0x8D91ADE44AC79BC9(unk_0x4A8C381C258A124D()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0xE5E6F6EFCE07789A(unk_0x4A8C381C258A124D()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()
{
	if (iLocal_313 == 5)
	{
		iLocal_313 = 0;
	}
	switch (iLocal_313)
	{
		case 0:
			if (iLocal_315[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_315[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_315[0] = -1;
					}
					func_34();
					iLocal_313 = 1;
				}
			}
			else
			{
				iLocal_313 = 1;
			}
			break;
		
		case 1:
			if (iLocal_315[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_315[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_315[1] = -1;
					}
					func_34();
					iLocal_313 = 2;
				}
			}
			else
			{
				iLocal_313 = 2;
			}
			break;
		
		case 2:
			if (iLocal_315[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_315[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_315[2] = -1;
					}
					func_34();
					iLocal_313 = 3;
				}
			}
			else
			{
				iLocal_313 = 3;
			}
			break;
		
		case 3:
			if (iLocal_315[3] > -1)
			{
				if (func_26(iLocal_315[3]))
				{
					iLocal_315[3] = -1;
				}
			}
			if (iLocal_315[4] > -1)
			{
				if (func_25(iLocal_315[4]))
				{
					iLocal_315[4] = -1;
				}
			}
			iLocal_313 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, struct<3> Param1, int iParam2)
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

void func_40(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_359))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_359, 1) };
		if (unk_0x5B9219522937741D(iLocal_359))
		{
			unk_0x837D67618BF89034(iLocal_359, 1, 1);
		}
		unk_0x76AD45C3946F87DD(&iLocal_359);
		if (iParam0 == 1 && iLocal_365 == joaat("weapon_ball"))
		{
			unk_0xEC73DFE5CE55E19C(Var0, 0,1f, 0);
		}
	}
}

void func_41()
{
	struct<3> Var0;
	
	if ((((((func_43() != 1 && (unk_0x1DD05E817C89C737() - iLocal_60) > 10000) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && iLocal_84 == 0) && iLocal_365 != joaat("weapon_ball")) && unk_0xF483865E4C02C371(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f) == 0) && unk_0xF483865E4C02C371(iLocal_67, unk_0xD1A6A821F5AC81DB(iLocal_67, 1), 100f) == 0)
	{
		unk_0x8003D3C0115A1035();
		if (unk_0x6F13318788EDDAD8())
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
			if (unk_0xED977E2AE2CB16EE(Var0, Local_74, 0) < 1f)
			{
				if (unk_0xED977E2AE2CB16EE(Var0, Local_353, 0) > 20f)
				{
					func_42(&iLocal_347, 0);
					iLocal_347 = unk_0x8366ABB82B1ABC59(Var0, 10f, joaat("prop_streetlight_01"), 1, 0, 1);
					if (unk_0xFC8BFE4B41177C22(iLocal_347))
					{
						Local_353 = { unk_0xD1A6A821F5AC81DB(iLocal_347, 1) };
						func_122(14, 1);
					}
				}
				else if (unk_0xED977E2AE2CB16EE(Var0, Local_352, 0) > 20f)
				{
					Local_352 = { Var0 };
					func_122(13, 1);
				}
			}
			Local_74 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
			iLocal_60 = unk_0x1DD05E817C89C737();
		}
	}
}

void func_42(var uParam0, bool bParam1)
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

int func_43()
{
	if (Global_113969.f_20121.f_254.f_5)
	{
		if (Global_113969.f_20121.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_113969.f_20121.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!BitTest(Global_113969.f_10052.f_94, 7) && !unk_0x4C705AAF75363287()) && !func_19()) && !unk_0x3555462DB47B7AB1())
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 7);
		func_18("CHOP_H_BALL", -1);
	}
	if (((func_126(unk_0x4A8C381C258A124D()) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) && func_126(iLocal_67)) && !unk_0x7F420695E3F776FB(iLocal_67, 1))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iLocal_365, 1);
		if (((((iLocal_365 == joaat("weapon_ball") || iLocal_365 == joaat("weapon_grenade")) || iLocal_365 == joaat("weapon_smokegrenade")) || iLocal_365 == joaat("weapon_stickybomb")) || iLocal_365 == joaat("weapon_molotov")) || iLocal_365 == joaat("weapon_flare"))
		{
			if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				func_122(15, 1);
			}
			else if (((unk_0x1DD05E817C89C737() - iLocal_61) > 10000 && unk_0xDF93B3CFAC96698F(iLocal_67) < 1f) && func_4(unk_0x4A8C381C258A124D(), iLocal_67, 1) < 5f)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x80813AC549A1E8AE("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xE100DD4F82A51BDE("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0x974022927CB47E68(iLocal_67);
					unk_0xB5396F1FB088FE38(&uLocal_93);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_93);
					unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
					unk_0xD0557B139A542F12(&uLocal_93);
					iLocal_61 = unk_0x1DD05E817C89C737();
				}
			}
		}
	}
}

void func_45()
{
	if (func_15() && !func_46(4))
	{
		if ((func_126(iLocal_67) && iLocal_84 == 0) && unk_0x133460AD0F183CC9(iLocal_67))
		{
			unk_0x5C4B3034CCDA5270(iLocal_67);
		}
		func_122(12, 1);
	}
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (func_15())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_53(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			return BitTest(func_49(func_52(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_50(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
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
		iVar1 = func_13();
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

int func_52(int iParam0)
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

int func_53(int iParam0)
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

void func_54()
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		if (iLocal_58 == -1)
		{
			iLocal_58 = unk_0x1DD05E817C89C737();
			iLocal_59 = unk_0xC5935DFB3F39785A(4000, 6000);
		}
		if ((unk_0x1DD05E817C89C737() - iLocal_58) > iLocal_59)
		{
			func_123("SNARL");
			iLocal_58 = -1;
		}
	}
}

void func_55()
{
	if (func_126(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_84 > 1 && iLocal_84 < 8)
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 309, 1);
		}
		if (iLocal_91 == 1 && iLocal_84 == 1)
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 313, 1);
		}
	}
	switch (iLocal_84)
	{
		case 0:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_370 = unk_0x1DD05E817C89C737();
				iLocal_63 = -1;
				iLocal_64 = -1;
				iLocal_55 = unk_0x1DD05E817C89C737();
				func_83();
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
				iLocal_383 = 1;
				iLocal_84 = 1;
			}
			else
			{
				if (iLocal_367 != 0)
				{
					iLocal_367 = 0;
				}
				iLocal_311 = 0;
				iLocal_57 = -1;
				if (func_82())
				{
					func_122(3, 1);
				}
			}
			break;
		
		case 1:
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_84 = 15;
			}
			else if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				if (func_81())
				{
					if (unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -1, 0) != unk_0x4A8C381C258A124D())
					{
						func_122(3, 1);
					}
					else
					{
						if (!func_126(iLocal_76))
						{
							iLocal_76 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
							func_80();
							func_79();
						}
						unk_0x80813AC549A1E8AE(sLocal_369);
						if (unk_0xE100DD4F82A51BDE(sLocal_369) && func_126(iLocal_76))
						{
							if (unk_0x133460AD0F183CC9(iLocal_67))
							{
								unk_0x5C4B3034CCDA5270(iLocal_67);
							}
							if (func_78())
							{
								if (iLocal_63 == -1)
								{
									iLocal_63 = unk_0x1DD05E817C89C737();
								}
								if (func_77())
								{
									func_76(1);
									iLocal_84 = 6;
								}
								else
								{
									func_75();
								}
							}
							else if (unk_0x848DE0A81098ECCB(unk_0x4A8C381C258A124D(), iLocal_76, 0, 0, 0))
							{
								if (unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92) || unk_0x7BFB76C576628F3D(iLocal_76, 1) > 0,9f)
								{
									iLocal_84 = 4;
								}
								else
								{
									iLocal_84 = 2;
								}
							}
							else
							{
								func_76(1);
								iLocal_84 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_84 = 14;
				}
				else
				{
					if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 3)) && !func_19()) && !unk_0x3555462DB47B7AB1())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 3);
						func_18("CHOP_H_NOVEH", -1);
					}
					func_122(3, 1);
				}
			}
			else
			{
				if (func_81())
				{
					unk_0x80813AC549A1E8AE("misschop_vehicleenter_exit");
					func_75();
				}
				if (iLocal_311 == 0 && unk_0xD9F5E1FEFD1329E4(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()), 0))
				{
					unk_0x0428AFDCAA63B06E(iLocal_67, 185, 0);
					if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()))) && !func_23())
					{
						if (unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())) == joaat("taxi"))
						{
						}
						else if (unk_0x2EEC0612337D20CE(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())) >= 1 && unk_0xC39AE5D390581AD5(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()), 0, 0))
						{
							if (!func_74())
							{
								func_109("CHOP_RIDE", 0);
							}
						}
					}
					else if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()))) || func_23())
					{
						func_109("CHOP_FOLLOW", 0);
					}
					iLocal_311 = 1;
				}
			}
			break;
		
		case 2:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				iLocal_84 = 15;
			}
			else
			{
				unk_0x80813AC549A1E8AE("misschop_vehicleenter_exit");
				if (unk_0xE100DD4F82A51BDE("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_84 = 3;
				}
			}
			break;
		
		case 3:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				iLocal_84 = 15;
			}
			else if (func_126(iLocal_76) && func_71())
			{
				if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
				{
					unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
				}
				iLocal_381 = unk_0x1DD05E817C89C737();
				iLocal_63 = unk_0x1DD05E817C89C737();
				iLocal_84 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				iLocal_84 = 15;
			}
			else
			{
				unk_0x80813AC549A1E8AE(sLocal_369);
				if (func_126(iLocal_76))
				{
					if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92) && unk_0x7BFB76C576628F3D(iLocal_76, iLocal_92) < 0,95f)
					{
						unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
						iLocal_381 = unk_0x1DD05E817C89C737();
					}
					if (func_77() && unk_0x1DD05E817C89C737() >= iLocal_381 + 300)
					{
						if (!func_114(unk_0x4A8C381C258A124D(), joaat("script_task_play_anim")) && unk_0xE100DD4F82A51BDE(sLocal_369))
						{
							func_73();
							func_70(1, 1);
							unk_0x19626F992DC71FB9(iLocal_67);
							uLocal_85 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uLocal_85, iLocal_76, unk_0x365DC1E8054AF31A(iLocal_76, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(iLocal_67, uLocal_85, sLocal_369, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
							iLocal_84 = 5;
						}
					}
					else
					{
						func_75();
					}
				}
			}
			break;
		
		case 5:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				if (unk_0x78411E34CF90EA8C(uLocal_378))
				{
					unk_0xB6387DEFC12580A6();
				}
				unk_0x80813AC549A1E8AE(sLocal_369);
				if (((unk_0xE100DD4F82A51BDE(sLocal_369) && unk_0x5266F1D2AEF6F73A(uLocal_85)) && unk_0xBD3B265153D3BA2D(uLocal_85) > 0,99f) && func_126(iLocal_76))
				{
					func_70(0, 1);
					func_76(0);
					iLocal_84 = 6;
				}
			}
			break;
		
		case 6:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x80813AC549A1E8AE("misschop_vehicleenter_exit");
				if (unk_0xE100DD4F82A51BDE("misschop_vehicleenter_exit") && func_126(iLocal_76))
				{
					if ((!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92) && unk_0x7BFB76C576628F3D(iLocal_76, 1) > 0,1f) && !func_78())
					{
						func_72();
					}
					iLocal_84 = 7;
				}
			}
			break;
		
		case 7:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (func_126(iLocal_76) && func_71())
			{
				if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
				{
					unk_0x6515021478088FBC(iLocal_76, iLocal_92, 0);
				}
				iLocal_84 = 8;
			}
			break;
		
		case 8:
			func_73();
			func_68(&uLocal_68);
			func_40(1);
			if (iLocal_52 == -1)
			{
				iLocal_52 = unk_0x1DD05E817C89C737();
				iLocal_53 = 7000;
			}
			if (func_126(iLocal_76))
			{
				if (func_67())
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (unk_0x5B702A5D1F2635BE(iLocal_76))
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xDF93B3CFAC96698F(iLocal_76) < 5f)
					{
						if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
						{
							unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
						}
						iLocal_84 = 12;
					}
				}
				else if (unk_0xDEE3EFEA31A1F555(2, 75))
				{
					if (unk_0xD1F1A906BA9226BE(iLocal_76))
					{
						func_69(2f, 0f, 0f, 1);
					}
					else if (func_78())
					{
						iLocal_84 = 9;
					}
					else if (unk_0x848DE0A81098ECCB(unk_0x4A8C381C258A124D(), iLocal_76, 0, 0, 0))
					{
						unk_0xE5EE5C9DDF05D925(iLocal_76, 10f, 1, 0);
						if (unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
						{
							iLocal_84 = 12;
						}
						else
						{
							iLocal_84 = 10;
						}
					}
					else if (unk_0x848DE0A81098ECCB(unk_0x4A8C381C258A124D(), iLocal_76, -1, 0, 0))
					{
						unk_0xE5EE5C9DDF05D925(iLocal_76, 10f, 1, 0);
						func_69(-2f, 0f, 0f, 0);
					}
					else
					{
						unk_0xE5EE5C9DDF05D925(iLocal_76, 10f, 1, 0);
						func_69(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_66();
					func_64();
					func_63();
					if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 2)) && !func_19()) && !unk_0x3555462DB47B7AB1())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 2);
						func_18("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_69(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_73();
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !func_114(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
			}
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				func_69(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x80813AC549A1E8AE("misschop_vehicleenter_exit");
				if (unk_0xE100DD4F82A51BDE("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_84 = 11;
				}
			}
			break;
		
		case 11:
			func_73();
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (func_126(iLocal_76) && func_71())
			{
				if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
				{
					unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
				}
				iLocal_84 = 12;
			}
			break;
		
		case 12:
			func_73();
			unk_0x80813AC549A1E8AE(sLocal_369);
			if ((!func_114(unk_0x4A8C381C258A124D(), joaat("script_task_play_anim")) && unk_0xE100DD4F82A51BDE(sLocal_369)) && func_126(iLocal_76))
			{
				unk_0x19626F992DC71FB9(iLocal_67);
				uLocal_85 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x2DCB8CA1FE6895AB(uLocal_85, iLocal_76, unk_0x365DC1E8054AF31A(iLocal_76, "seat_pside_f"));
				unk_0x3DA436E63AB0F541(iLocal_67, uLocal_85, sLocal_369, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
				iLocal_84 = 13;
			}
			break;
		
		case 13:
			func_73();
			if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && (unk_0x1DD05E817C89C737() - iLocal_371) > 1500) && !func_114(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
			}
			if (!unk_0x5266F1D2AEF6F73A(uLocal_85) || (unk_0x5266F1D2AEF6F73A(uLocal_85) && unk_0xBD3B265153D3BA2D(uLocal_85) > 0,99f))
			{
				unk_0x3713EFBC9B9F5150(iLocal_67, iLocal_67, 0f, 5f, 0f, 1f, 20000);
				iLocal_84 = 15;
			}
			break;
		
		case 14:
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iLocal_84 = 15;
			}
			else
			{
				func_66();
				if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 5)) && !func_19()) && !unk_0x3555462DB47B7AB1())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 5);
					func_18("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_73();
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				func_58();
				func_100(0, 0, 0);
				unk_0x268BE77F77533D03("misschop_vehicleenter_exit");
				unk_0x268BE77F77533D03(sLocal_369);
				iLocal_60 = unk_0x1DD05E817C89C737();
				func_57();
				func_56(&iLocal_76);
				iLocal_76 = 0;
				iLocal_52 = -1;
				unk_0x974022927CB47E68(iLocal_67);
				unk_0x935364B4448CD584(iLocal_67, 0);
				unk_0x0428AFDCAA63B06E(iLocal_67, 185, 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
				func_122(2, 1);
			}
			else if (!func_114(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")))
			{
				unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
			}
			break;
	}
}

void func_56(int iParam0)
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

void func_57()
{
	if (((iLocal_383 == 1 && func_126(unk_0x1D25F777D0165BF3())) && unk_0x2EEC0612337D20CE(unk_0x1D25F777D0165BF3()) > 1) && !unk_0xAD830DCD82C63F31(unk_0x1D25F777D0165BF3(), iLocal_92))
	{
		unk_0xC1FE4FCB32785633(unk_0x1D25F777D0165BF3(), iLocal_92, 0, 1, 0);
	}
}

void func_58()
{
	if ((!unk_0xC450B06E5AAA0985(uLocal_68) && func_126(iLocal_67)) && !unk_0x7F420695E3F776FB(iLocal_67, 1))
	{
		if (func_180(126))
		{
			func_62(139, 0, 0);
		}
		else
		{
			func_62(138, 0, 0);
		}
		uLocal_68 = func_59(iLocal_67, 0, 145);
		unk_0x4C905FB262965D5D(uLocal_68, 273);
	}
}

var func_59(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_60(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_61(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_61(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_61(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33328[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
		if (Global_33325 == 1)
		{
			Global_33326 = 1;
		}
		Global_33325 = 1;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 15);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 0);
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xC450B06E5AAA0985(Global_33328[iVar0 /*23*/].f_19))
		{
			unk_0x9F83BF77C7204C05(1);
			unk_0xFE54B8568B2ABD12(&(Global_33328[iVar0 /*23*/].f_19));
			unk_0x9F83BF77C7204C05(0);
		}
	}
}

void func_63()
{
	if (func_126(iLocal_67) && func_126(iLocal_76))
	{
		if (iLocal_370 > -1)
		{
			if (((unk_0x1DD05E817C89C737() - iLocal_370) > 500 && unk_0xDF93B3CFAC96698F(iLocal_76) > 5f) && unk_0x14E25ED5E75102C8(iLocal_76))
			{
				unk_0x10425721983AE158(iLocal_67, sLocal_369, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
				func_123("GROWL");
				iLocal_370 = -1;
				iLocal_55 = unk_0x1DD05E817C89C737();
			}
		}
		else if (!unk_0x13CCB1AD131C1082(iLocal_67, sLocal_369, "shunt_from_back", 3) || (unk_0x13CCB1AD131C1082(iLocal_67, sLocal_369, "shunt_from_back", 3) && unk_0x82E64DE58A6B84A8(iLocal_67, sLocal_369, "shunt_from_back") > 0,98f))
		{
			unk_0x10425721983AE158(iLocal_67, sLocal_369, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
			iLocal_370 = unk_0x1DD05E817C89C737();
			iLocal_55 = unk_0x1DD05E817C89C737();
		}
	}
}

void func_64()
{
	if (iLocal_370 > -1 && (unk_0x1DD05E817C89C737() - iLocal_52) > iLocal_53)
	{
		if (((unk_0x3BB0DC333050E9BD() == 7 || unk_0x3BB0DC333050E9BD() == 8) || unk_0x3BB0DC333050E9BD() == 9) || unk_0x3BB0DC333050E9BD() == 13)
		{
			func_65();
			iLocal_52 = unk_0x1DD05E817C89C737();
			iLocal_53 = unk_0xC5935DFB3F39785A(6000, 8000);
		}
	}
}

void func_65()
{
	if ((unk_0x1DD05E817C89C737() - iLocal_55) > 500)
	{
		iLocal_55 = unk_0x1DD05E817C89C737();
		if (func_126(iLocal_67) && unk_0x7F420695E3F776FB(iLocal_67, 0))
		{
			unk_0xB5396F1FB088FE38(&uLocal_93);
			unk_0x10425721983AE158(0, sLocal_369, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, sLocal_369, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_93);
			unk_0x4BD42B0527065BB6(iLocal_67, uLocal_93);
			unk_0xD0557B139A542F12(&uLocal_93);
			unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
		}
	}
}

void func_66()
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && bLocal_325 == 1)
	{
		if (iLocal_57 == -1)
		{
			iLocal_57 = unk_0x1DD05E817C89C737();
		}
		if (((unk_0x1DD05E817C89C737() - iLocal_57) > 10000 && iLocal_370 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_126(iLocal_67))
				{
					if (unk_0x7F420695E3F776FB(iLocal_67, 0))
					{
						func_65();
					}
					else
					{
						func_123("BARK");
					}
				}
			}
			iLocal_57 = unk_0x1DD05E817C89C737();
		}
	}
}

int func_67()
{
	float fVar0;
	struct<3> Var1;
	
	if (func_126(iLocal_76))
	{
		if (unk_0x69799E0840A34AFB(iLocal_76))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_76, 1) };
			if (iLocal_66 == -1)
			{
				iLocal_66 = unk_0x1DD05E817C89C737();
			}
			if (unk_0xF85C2BE613AD7903(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_66) > 3000)
				{
					func_123("AGITATED");
					iLocal_66 = unk_0x1DD05E817C89C737();
				}
			}
		}
		else
		{
			iLocal_66 = -1;
		}
	}
	return 0;
}

void func_68(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

void func_69(struct<3> Param0, int iParam1)
{
	if (func_126(unk_0x4A8C381C258A124D()) && func_126(iLocal_67))
	{
		if (func_126(iLocal_76))
		{
			if ((iParam1 == 1 && !unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92)) && unk_0x7BFB76C576628F3D(iLocal_76, 1) < 0,9f)
			{
				unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
			}
			if (unk_0x5266F1D2AEF6F73A(uLocal_85))
			{
				unk_0x83E8210E2B5723F2(uLocal_85);
			}
			unk_0x19626F992DC71FB9(iLocal_67);
			func_125(iLocal_67, unk_0x0D1381B6E0F3987D(iLocal_76, Param0), unk_0xCFC0C995455A6204(iLocal_67), 1, 0);
			unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
			func_70(0, 0);
			iLocal_84 = 15;
		}
		else
		{
			if (unk_0x5266F1D2AEF6F73A(uLocal_85))
			{
				unk_0x83E8210E2B5723F2(uLocal_85);
			}
			unk_0x19626F992DC71FB9(iLocal_67);
			func_125(iLocal_67, unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), unk_0xCFC0C995455A6204(iLocal_67), 1, 0);
			unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
			func_70(0, 0);
			iLocal_84 = 15;
		}
	}
}

void func_70(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (iParam0 == 1)
	{
		if (!unk_0x78411E34CF90EA8C(uLocal_378) && func_126(iLocal_76))
		{
			iVar2 = unk_0xC5935DFB3F39785A(0, 4);
			if (iVar2 == 0)
			{
				Var0 = { 1,11573f, -1,40338f, 0,555789f };
				Var1 = { 0,5f, 0f, 0,3f };
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1,15872f, 1,75252f, 0,761228f };
				Var1 = { 0f, 0f, 0,3f };
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1,89975f, 0,339287f, 0,661881f };
				Var1 = { 0f, 0f, 0,3f };
			}
			else
			{
				Var0 = { 1,38134f, -0,1248f, 0,580783f };
				Var1 = { 0f, 0f, 0,3f };
			}
			uLocal_378 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
			Var3 = { unk_0x75DF72FC74EED046(iLocal_76, unk_0x365DC1E8054AF31A(iLocal_76, "seat_pside_f")) };
			Var4 = { unk_0xAD8278DAEC2CC059(iLocal_76, Var3) };
			Var5 = { Var0 + Var4 };
			unk_0x03F10D56CCA2C055(uLocal_378, iLocal_76, Var5, 1);
			unk_0xD6B4D02A102485DC(uLocal_378, iLocal_76, Var4 + Var1, 1);
			unk_0x58BDA5D9262F5D30(uLocal_378, 50f);
			unk_0x2A09425009DAD0F5(uLocal_378, "HAND_SHAKE", 0,3f);
			unk_0x75C0D0B8F3E221F1(uLocal_378, 0f, 0f, 100000f, 100000f);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		}
	}
	else if (unk_0x78411E34CF90EA8C(uLocal_378))
	{
		if (iParam1 == 1)
		{
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x64BB72494B9DF6DC(0f);
		}
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x3AA8CFEBC938A945(0);
	}
}

int func_71()
{
	if (func_126(iLocal_76))
	{
		if (((unk_0x1DD05E817C89C737() - iLocal_371) > 500 || unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92)) || func_78())
		{
			return 1;
		}
	}
	return 0;
}

void func_72()
{
	unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "misschop_vehicleenter_exit", sLocal_368, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_371 = unk_0x1DD05E817C89C737();
}

void func_73()
{
	unk_0x66EFB3D6110055C4(0, 75, 1);
	unk_0x66EFB3D6110055C4(0, 23, 1);
}

int func_74()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_75()
{
	if (!func_114(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")) && func_4(unk_0x4A8C381C258A124D(), iLocal_67, 1) > 1f)
	{
		unk_0xA966E518B752B92A(iLocal_67, unk_0x0D1381B6E0F3987D(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1), 2f, 0f, 0f), 2f, 20000, 0,25f, 0, 1193033728);
	}
}

void func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
	}
	func_68(&uLocal_68);
	unk_0x935364B4448CD584(iLocal_67, 1);
	unk_0x73CAFD2038E812B3(iLocal_67, iLocal_76, 0);
	unk_0x10425721983AE158(iLocal_67, sLocal_369, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
}

int func_77()
{
	float fVar0;
	
	if (func_126(iLocal_76) && func_126(iLocal_67))
	{
		if (iLocal_64 == -1)
		{
			fVar0 = func_4(iLocal_76, iLocal_67, 1);
			iLocal_64 = system::floor((fVar0 * 1000f));
			if (iLocal_64 < 5000)
			{
				iLocal_64 = 5000;
			}
		}
		if (((func_39(iLocal_67, unk_0x0D1381B6E0F3987D(iLocal_76, 2f, 0f, 0f), 0) < 1f || unk_0x6D05C5731A838CB3(0, 71)) || unk_0x6D05C5731A838CB3(0, 72)) || (iLocal_63 > -1 && (unk_0x1DD05E817C89C737() - iLocal_63) > iLocal_64))
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	int iVar0;
	
	if (func_126(iLocal_76))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == unk_0x70E57E9927B6BA58("monster")) || iVar0 == unk_0x70E57E9927B6BA58("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_79()
{
	int iVar0;
	
	if (func_126(iLocal_76))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(iLocal_76);
		if (iVar0 == joaat("coach"))
		{
			iLocal_92 = 0;
		}
		else
		{
			iLocal_92 = 1;
		}
	}
}

void func_80()
{
	if (func_126(iLocal_76))
	{
		iLocal_367 = unk_0x58428BC502F48C75(iLocal_76);
		switch (iLocal_367)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_369 = "creatures@rottweiler@in_vehicle@van";
				sLocal_368 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_369 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_368 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
			case 1663892749:
				sLocal_369 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_368 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_369 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_368 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x4B423FAA24E8ABF0(iLocal_76) == joaat("brawler"))
		{
			sLocal_369 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_368 = "std_ds_open_door_for_chop";
		}
	}
}

int func_81()
{
	if ((((((((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && !unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D())) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) && !unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) && !unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D())) && unk_0x2EEC0612337D20CE(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) >= 1) && unk_0xC39AE5D390581AD5(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0, 0)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
	{
		if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(-14,5f, -1437,2f, 31,1f))
		{
			return 1;
		}
		if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(7,6f, 537,3f, 176f))
		{
			return 1;
		}
		if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(130,2632f, -1295,035f, 28,2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	Var1 = { unk_0x0D1381B6E0F3987D(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1), 2f, 0f, 0f) };
	Var3 = { Var1 - Var0 };
	Var2 = { unk_0x0D1381B6E0F3987D(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1), -2f, 0f, 0f) };
	Var4 = { Var2 - Var0 };
	if (system::vmag(Var3) < system::vmag(Var4))
	{
		iLocal_91 = 1;
	}
	else
	{
		iLocal_91 = 0;
	}
}

void func_84()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if ((iLocal_313 != 5 || (unk_0x1DD05E817C89C737() - iLocal_314) < 1000) || bLocal_325 == 0)
	{
		return;
	}
	func_98();
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 102)
	{
		if (func_97(iVar2))
		{
			Var0 = { func_96(iVar2, 1) };
			if (!func_95(Var0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), Var0, 1);
				if (fVar1 < fLocal_316[2] && fVar1 < fLocal_322)
				{
					iLocal_315[2] = iVar2;
					fLocal_316[2] = fVar1;
					Local_317[2 /*3*/] = { func_96(iVar2, 0) };
					Local_318[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 76)
	{
		if (func_94(iVar2))
		{
			Var0 = { func_93(iVar2, 1) };
			if (!func_95(Var0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), Var0, 1);
				if (fVar1 < fLocal_316[1] && fVar1 < fLocal_322)
				{
					iLocal_315[1] = iVar2;
					fLocal_316[1] = fVar1;
					Local_317[1 /*3*/] = { func_93(iVar2, 0) };
					Local_318[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 45)
	{
		if (func_92(iVar2))
		{
			Var0 = { func_91(iVar2, 1) };
			if (!func_95(Var0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), Var0, 1);
				if (fVar1 < fLocal_316[0] && fVar1 < fLocal_322)
				{
					iLocal_315[0] = iVar2;
					fLocal_316[0] = fVar1;
					Local_317[0 /*3*/] = { func_91(iVar2, 0) };
					Local_318[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	if (func_90())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_26(iVar2) && func_89(iVar2))
			{
				Var0 = { func_88(iVar2, 1) };
				if (!func_95(Var0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), Var0, 1);
					if (fVar1 < fLocal_316[3] && fVar1 < fLocal_322)
					{
						iLocal_315[3] = iVar2;
						fLocal_316[3] = fVar1;
						Local_317[3 /*3*/] = { func_88(iVar2, 0) };
						Local_318[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	if (func_87())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_25(iVar2) && func_86(iVar2))
			{
				Var0 = { func_85(iVar2, 1) };
				if (!func_95(Var0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), Var0, 1);
					if (fVar1 < fLocal_316[4] && fVar1 < fLocal_322)
					{
						iLocal_315[4] = iVar2;
						fLocal_316[4] = fVar1;
						Local_317[4 /*3*/] = { func_85(iVar2, 0) };
						Local_318[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	iLocal_314 = unk_0x1DD05E817C89C737();
}

Vector3 func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495,9f, 12,9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606,8925f, -3250,188f, 5,06951f;
			}
			else
			{
				return 634,5865f, -3232,79f, -16,5774f;
			}
			break;
		
		case 2:
			return 1590,6f, -2810,174f, 3,4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327,99f, -2757,61f, 4,99f;
			}
			else
			{
				return 338,4039f, -2762,106f, 42,6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134,422f, -2607,024f, 14,77071f;
			}
			else
			{
				return 1133,688f, -2605,073f, 14,9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368,9316f, -2118,533f, 15,40341f;
			}
			else
			{
				return 369,945f, -2116,756f, 16,1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741,82f, -1623,85f, 111,41f;
			}
			else
			{
				return 1742,024f, -1618,777f, 111,8313f;
			}
			break;
		
		case 7:
			return 287,7294f, -1444,4f, 45,5095f;
			break;
		
		case 8:
			return 17,5926f, -1213,207f, 28,3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910,0172f, -1147,44f, 1,06785f;
			}
			else
			{
				return -900,3597f, -1165,551f, 31,8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237,728f, -1099,15f, 37,52579f;
			}
			else
			{
				return 1231,973f, -1102,308f, 34,4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87,69075f, 810,3736f, 210,1258f;
			}
			else
			{
				return 81,2213f, 814,0283f, 213,2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900,951f, 1389,582f, 218,1509f;
			}
			else
			{
				return -1907,515f, 1388,69f, 217,9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467,369f, -730,7552f, 26,36373f;
			}
			else
			{
				return 469,8529f, -730,8f, 26,3985f;
			}
			break;
		
		case 14:
			return 202,1081f, -569,7198f, 128,18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163,0531f, -566,3394f, 21,029f;
			}
			else
			{
				return 159,39f, -563,82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183,152f, -518,5386f, 38,53018f;
			}
			else
			{
				return -1182,538f, -525,5859f, 39,9114f;
			}
			break;
		
		case 17:
			return -228,0476f, -236,4184f, 49,1361f;
			break;
		
		case 18:
			return -407,7026f, -151,7918f, 63,5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169,397f, -56,76701f, 44,45705f;
			}
			else
			{
				return -1175,488f, -65,4649f, 44,6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679,056f, 39,44059f, 160,7736f;
			}
			else
			{
				return 1684,664f, 40,7142f, 153,4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964,25f, 553,68f, 160,72f;
			}
			else
			{
				return 1965,58f, 555,99f, 160,79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24,21706f, 637,1212f, 206,3897f;
			}
			else
			{
				return 22,4492f, 638,8155f, 189,6085f;
			}
			break;
		
		case 23:
			return 2901,204f, 796,1192f, 3,3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531,895f, 870,3203f, 180,6775f;
			}
			else
			{
				return -1529,722f, 871,4257f, 180,6421f;
			}
			break;
		
		case 25:
			return -404,3191f, 1100,889f, 331,535f;
			break;
		
		case 26:
			return -2809,354f, 1449,643f, 99,928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			else
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			break;
		
		case 28:
			return 815,7574f, 1850,879f, 120,1796f;
			break;
		
		case 29:
			return -1944,24f, 1941,07f, 162,8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452,23f, 2127,41f, 42,84f;
			}
			else
			{
				return -1436,87f, 2130,22f, 26,78f;
			}
			break;
		
		case 31:
			return 1367,413f, 2180,632f, 96,6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170,1652f, 2217,637f, 89,30811f;
			}
			else
			{
				return 172,1426f, 2220,131f, 89,7842f;
			}
			break;
		
		case 33:
			return 889,3209f, 2870,052f, 55,2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980,2f, 2914,79f, 45,48f;
			}
			else
			{
				return 1963,55f, 2922,81f, 57,76f;
			}
			break;
		
		case 35:
			return -390,384f, 2963,26f, 18,2713f;
			break;
		
		case 36:
			return 71,6642f, 3279,368f, 30,3918f;
			break;
		
		case 37:
			return 1924,186f, 3471,256f, 50,3238f;
			break;
		
		case 38:
			return -583,1569f, 3580,375f, 266,2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514,302f, 3789,519f, 52,077f;
			}
			else
			{
				return 2516,98f, 3789,35f, 53,79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517,613f, 3803,926f, 30,95605f;
			}
			else
			{
				return 1486,047f, 3857,217f, 22,2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530,2739f, 4474,358f, 59,45993f;
			}
			else
			{
				return -528,8246f, 4440,644f, 31,7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815,055f, 4447,343f, 2,06631f;
			}
			else
			{
				return 3820,813f, 4441,683f, 1,8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946,95f, 4584,36f, 56,06f;
			}
			else
			{
				return -1943,055f, 4585,194f, 46,6362f;
			}
			break;
		
		case 44:
			return 2437,545f, 4779,959f, 33,5101f;
			break;
		
		case 45:
			return -1441,495f, 5414,888f, 23,3f;
			break;
		
		case 46:
			return 2196,251f, 5599,034f, 52,7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503,95f, 5673,55f, 51,24f;
			}
			else
			{
				return -503,2193f, 5665,61f, 48,8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378,4192f, 6080,782f, 30,44296f;
			}
			else
			{
				return -381,291f, 6086,949f, 38,6147f;
			}
			break;
		
		case 49:
			return 440,9546f, 6459,642f, 27,7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (BitTest(Global_33108, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_87()
{
	return Global_113969.f_10052.f_125.f_2;
}

Vector3 func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034,274f, -3026,275f, 4,90197f;
			}
			else
			{
				return 1026,705f, -3026,052f, 13,3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040,979f, -2743,509f, 12,94983f;
			}
			else
			{
				return -1048,604f, -2734,218f, 12,8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93,9012f, -2711,314f, 5,01752f;
			}
			else
			{
				return -81,1199f, -2726,511f, 7,74f;
			}
			break;
		
		case 3:
			return -917,6909f, -2527,384f, 22,3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746,45f, -2310,32f, 26,03f;
			}
			else
			{
				return 748,922f, -2298,114f, 19,624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509,742f, -2126,038f, 75,21973f;
			}
			else
			{
				return 1509,099f, -2120,551f, 75,61f;
			}
			break;
		
		case 6:
			return 76,0032f, -1970,475f, 20,1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1,82327f, -1732,614f, 28,29367f;
			}
			else
			{
				return 0,067f, -1734,027f, 30,606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377,766f, -1409,837f, 4,63205f;
			}
			else
			{
				return -1380,491f, -1404,374f, 1,7273f;
			}
			break;
		
		case 9:
			return 2864,808f, -1372,84f, 1,3151f;
			break;
		
		case 10:
			return -1035,812f, -1273,077f, 0,8919f;
			break;
		
		case 11:
			return -1821,136f, -1201,36f, 18,1698f;
			break;
		
		case 12:
			return 643,0116f, -1035,65f, 35,8891f;
			break;
		
		case 13:
			return -119,0616f, -977,2228f, 303,23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243,104f, -507,8057f, 30,10775f;
			}
			else
			{
				return -1238,766f, -506,7138f, 37,6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83,79993f, -431,9302f, 36,55315f;
			}
			else
			{
				return 86,4f, -433,9f, 36f;
			}
			break;
		
		case 16:
			return 1095,953f, -210,4642f, 54,9477f;
			break;
		
		case 17:
			return -1724,522f, -196f, 57,2387f;
			break;
		
		case 18:
			return 265,374f, -199,546f, 60,795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020,475f, 36,55431f, 9,11777f;
			}
			else
			{
				return -3021,4f, 38f, 10,2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347,5277f, 53,37161f, 52,97814f;
			}
			else
			{
				return -347,3f, 54,865f, 53,921f;
			}
			break;
		
		case 21:
			return 1052,248f, 167,611f, 87,7406f;
			break;
		
		case 22:
			return -2303,798f, 217,4301f, 166,6017f;
			break;
		
		case 23:
			return -138,9423f, 868,3885f, 231,6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688,1073f, 1204,671f, 323,3438f;
			}
			else
			{
				return 682,4505f, 1204,928f, 344,3322f;
			}
			break;
		
		case 25:
			return -1548,763f, 1380,173f, 125,3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432,14f, 1598,46f, 355,73f;
			}
			else
			{
				return -432,0034f, 1597,129f, 356,613f;
			}
			break;
		
		case 27:
			return 3081,93f, 1648,29f, 2,42f;
			break;
		
		case 28:
			return -594,38f, 2092f, 130,57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069,213f, 2160,988f, 1,1327f;
			}
			else
			{
				return 3063,583f, 2212,63f, 2,5863f;
			}
			break;
		
		case 30:
			return 180,21f, 2263,83f, 91,87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926,96f, 2445,36f, 49,09f;
			}
			else
			{
				return 929,6946f, 2444,115f, 48,43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380,212f, 2655,176f, 0,832f;
			}
			else
			{
				return -2379,948f, 2656,953f, 1,4906f;
			}
			break;
		
		case 33:
			return -861,38f, 2753,3f, 12,867f;
			break;
		
		case 34:
			return -289,0195f, 2848,853f, 53,331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288,8409f, 2871,912f, 42,6422f;
			}
			else
			{
				return 265,7415f, 2866,416f, 73,19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297,378f, 2988,71f, 40,11787f;
			}
			else
			{
				return 1294,2f, 3001,9f, 57,7f;
			}
			break;
		
		case 37:
			return 1568,65f, 3572,8f, 32,294f;
			break;
		
		case 38:
			return -1608,62f, 4274,25f, 102,95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3,51812f, 4332,451f, 31,21602f;
			}
			else
			{
				return -1,9585f, 4334,787f, 32,3702f;
			}
			break;
		
		case 40:
			return 1336,737f, 4307,2f, 37,1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007,103f, 4836,936f, 268,5488f;
			}
			else
			{
				return -1001,48f, 4851,322f, 273,6112f;
			}
			break;
		
		case 42:
			return 1877,09f, 5078,98f, 50,49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366,099f, 5182,461f, 0,68317f;
			}
			else
			{
				return 3436,453f, 5176,911f, 6,386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576,12f, 5472,24f, 59,28f;
			}
			else
			{
				return -578,8057f, 5470,164f, 59,0295f;
			}
			break;
		
		case 45:
			return 444,6518f, 5571,781f, 780,1888f;
			break;
		
		case 46:
			return -402,9948f, 6319,279f, 31,2256f;
			break;
		
		case 47:
			return 1439,599f, 6335,208f, 22,9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466,109f, 6552,266f, 12,95773f;
			}
			else
			{
				return 1469,632f, 6552,174f, 13,6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66,19278f, 6668,888f, 30,80633f;
			}
			else
			{
				return 66,7136f, 6663,198f, 30,7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (BitTest(Global_33108, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_90()
{
	return Global_113969.f_10052.f_122.f_2;
}

Vector3 func_91(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473,1829f, -2643,184f, 4,7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291,41f, -2090,78f, 16,29f;
			}
			else
			{
				return 289,2062f, -2091,221f, 16,0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173,839f, -1499,781f, 33,84875f;
			}
			else
			{
				return 1173,566f, -1495,763f, 34,1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461,7139f, -1699,202f, 17,85122f;
			}
			else
			{
				return -462f, -1701f, 18,8f;
			}
			break;
		
		case 4:
			return -1384,628f, -521,0416f, 30,084f;
			break;
		
		case 5:
			return -521,5692f, -601,7532f, 29,4482f;
			break;
		
		case 6:
			return -664,5f, 165,4552f, 58,3821f;
			break;
		
		case 7:
			return 329,3609f, -190,5986f, 53,2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477,44f, -1052,99f, 39,81f;
			}
			else
			{
				return -478,7744f, -1051,079f, 40,93f;
			}
			break;
		
		case 9:
			return -1268,071f, -1917,408f, 4,8583f;
			break;
		
		case 10:
			return -1221,908f, -2771,762f, 13,0545f;
			break;
		
		case 11:
			return -3088,668f, 652,9629f, 0,989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629,3048f, 2036,067f, 157,3307f;
			}
			else
			{
				return -627,2166f, 2035,032f, 157,5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071,903f, 3411,504f, 30,36414f;
			}
			else
			{
				return -2048,483f, 3406,162f, 31,1504f;
			}
			break;
		
		case 14:
			return -424,0321f, 4012,767f, 80,4744f;
			break;
		
		case 15:
			return 1983,1f, 5174,5f, 47,6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341,1f, 2576f, 45,7f;
			}
			else
			{
				return 2340,17f, 2573,89f, 45,77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663,9f, -25,91945f, 172,7747f;
			}
			else
			{
				return 1663,96f, -24,1101f, 172,7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614,451f, 1695,127f, 26,59907f;
			}
			else
			{
				return 2617,729f, 1693,417f, 30,8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187,31f, 1545,16f, 314,07f;
			}
			else
			{
				return -187,0338f, 1555,677f, 321,2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859,5025f, 2426,04f, 53,18517f;
			}
			else
			{
				return 868,7573f, 2423,536f, 60,8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822,075f, 805,7814f, 137,7265f;
			}
			else
			{
				return -1822,967f, 803,8147f, 138,2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852,922f, 2054,42f, 139,9841f;
			}
			else
			{
				return -1851,628f, 2053,836f, 139,9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075,515f, 4898,497f, 213,2767f;
			}
			else
			{
				return -1070,651f, 4898,934f, 213,2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301,56f, 4306,6f, 36,39f;
			}
			else
			{
				return 1300,1f, 4308,1f, 37,3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436,44f, 5983,5f, 30,49f;
			}
			else
			{
				return -437,94f, 5985,04f, 31,29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840,569f, 3693,77f, 33,2668f;
			}
			else
			{
				return 1838,577f, 3692,028f, 33,6172f;
			}
			break;
		
		case 27:
			return 533,1f, -23,8f, 70,6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445,83f, -986,48f, 29,69f;
			}
			else
			{
				return 446,4f, -988,5f, 29,77f;
			}
			break;
		
		case 29:
			return -1119,498f, -847,3371f, 18,6886f;
			break;
		
		case 30:
			return 391,2f, -1603,9f, 28,38f;
			break;
		
		case 31:
			return -890,8f, -2386,2f, 13,4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282,75f, 953,05f, 209,95f;
			}
			else
			{
				return 284,7f, 954,2f, 210,1514f;
			}
			break;
		
		case 33:
			return -2003,115f, 544,7549f, 114,5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397,5786f, 1127,353f, 321,7291f;
			}
			else
			{
				return -386,8739f, 1142,42f, 321,5892f;
			}
			break;
		
		case 35:
			return -1521,811f, 1560,201f, 106,9392f;
			break;
		
		case 36:
			return 1391,945f, 3616,655f, 37,9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45,37f, -1911,45f, 20,79f;
			}
			else
			{
				return 40,5177f, -1910,727f, 20,9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68,14f, 3749,36f, 38,73f;
			}
			else
			{
				return 70,3786f, 3755,605f, 38,7487f;
			}
			break;
		
		case 39:
			return 119,45f, -755,29f, 258,15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156,35f, -1192,1f, 28,37f;
			}
			else
			{
				return 160,4134f, -1191,7f, 28,87f;
			}
			break;
		
		case 41:
			return 23,9296f, -633,9206f, 6,5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31,67f, 6542,78f, 30,44f;
			}
			else
			{
				return 30,9162f, 6546,791f, 30,4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333,057f, 4381,278f, 43,3703f;
			}
			else
			{
				return 1331,355f, 4392,887f, 44,012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147,31f, 4939,27f, 221,27f;
			}
			else
			{
				return -1149,392f, 4938,771f, 221,3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_93(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131,2f, 6920,1f, 20,8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048,569f, 4917,414f, 208,4216f;
			}
			else
			{
				return -1046,277f, 4918,739f, 211,5379f;
			}
			break;
		
		case 2:
			return -2358,46f, 3251,397f, 100,5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247,6219f, 6331,341f, 31,42602f;
			}
			else
			{
				return -249,9504f, 6331,219f, 32,7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140,9f, -2491,45f, 43,45f;
			}
			else
			{
				return -141,0976f, -2498,239f, 40,0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924,697f, 46,50282f, 10,60369f;
			}
			else
			{
				return -2925,7f, 47,4f, 11,6f;
			}
			break;
		
		case 6:
			return -793,1981f, -726,4421f, 26,28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124,0092f, -673,0096f, 41,02729f;
			}
			else
			{
				return 123,5196f, -674,2917f, 41,4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195,737f, -1481,694f, 33,8595f;
			}
			else
			{
				return 1194,709f, -1482,472f, 33,9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35,88743f, 1945,738f, 189,1868f;
			}
			else
			{
				return -35,5254f, 1947,289f, 189,186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753,4579f, 4174,996f, 39,8011f;
			}
			else
			{
				return 751,72f, 4175,14f, 40,95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791,256f, 4592,383f, 36,68283f;
			}
			else
			{
				return 1789,8f, 4592,4f, 36,78f;
			}
			break;
		
		case 12:
			return 341,311f, 2618,918f, 43,5124f;
			break;
		
		case 13:
			return 442,3755f, -223,602f, 55,0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291,02f, -1760,94f, 51,05f;
			}
			else
			{
				return 1286,5f, -1754,4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659,438f, 5,4271f, 165,1176f;
			}
			else
			{
				return 1658,621f, 6,7752f, 166,1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645,91f, 4866,72f, 40,98f;
			}
			else
			{
				return 1647,399f, 4865,839f, 41f;
			}
			break;
		
		case 17:
			return -1144,589f, -2004,452f, 12,3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047,3f, -520,6f, 35f;
			}
			else
			{
				return -1048,32f, -521,2f, 35,14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576,046f, -587,8257f, 33,97909f;
			}
			else
			{
				return -1576,817f, -586,3887f, 34,8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953,44f, -123,42f, 73,35f;
			}
			else
			{
				return 954,5f, -121,34f, 74,18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134,201f, -665,9413f, 56,08261f;
			}
			else
			{
				return 1135,401f, -663,7875f, 56,088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196,198f, 248,9123f, 173,612f;
			}
			else
			{
				return -2195,029f, 250,4256f, 173,6017f;
			}
			break;
		
		case 23:
			return 29,2f, 3635,4f, 39,8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724,429f, 3299,023f, 40,2235f;
			}
			else
			{
				return 1721,96f, 3300,464f, 40,3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617,321f, 3659,452f, 100,3867f;
			}
			else
			{
				return 2612,712f, 3662,564f, 101,1074f;
			}
			break;
		
		case 26:
			return -459,9625f, 1101,076f, 328,0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432,607f, 4994,333f, 45,25828f;
			}
			else
			{
				return 2430,906f, 4995,561f, 45,2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722,456f, 4521,837f, 20,39456f;
			}
			else
			{
				return 3724,5f, 4524,5f, 21,6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446,9024f, 5997,598f, 30,3407f;
			}
			else
			{
				return -446,045f, 6000,882f, 31,9163f;
			}
			break;
		
		case 30:
			return 3291,4f, 5192,5f, 18,4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390,81f, -1436,07f, 28,45f;
			}
			else
			{
				return 388,7f, -1434,3f, 29,8f;
			}
			break;
		
		case 32:
			return -445,26f, -442,49f, 32,26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501,46f, 858,17f, 180,59f;
			}
			else
			{
				return -1500,08f, 857,59f, 180,59f;
			}
			break;
		
		case 34:
			return 2822,2f, -741,4f, 1,8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166,978f, 1102,622f, 19,80827f;
			}
			else
			{
				return -3165,613f, 1102,24f, 19,8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842,882f, 3670,457f, 32,68f;
			}
			else
			{
				return 1841,114f, 3675,253f, 34,086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828,794f, 2605,504f, 44,61582f;
			}
			else
			{
				return 1830,535f, 2603,828f, 45,7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32,61f, -1089,67f, 25,42f;
			}
			else
			{
				return -40,0528f, -1084,016f, 26,6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439,012f, 6336,812f, 22,96477f;
			}
			else
			{
				return 1445,544f, 6334,057f, 23,975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782,5126f, -1352,245f, 8,0001f;
			}
			else
			{
				return -784,4851f, -1351,364f, 8,1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962,8806f, -1826,419f, 30,07195f;
			}
			else
			{
				return 963,1673f, -1831,149f, 36,2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246,155f, -1531,647f, 3,2962f;
			}
			else
			{
				return -1246,494f, -1533,677f, 4,5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765,5466f, 698,8101f, 143,3693f;
			}
			else
			{
				return -761,1058f, 701,9452f, 145,05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512,1094f, 28,86313f, 43,6153f;
			}
			else
			{
				return -513,4391f, 30,9069f, 43,9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781,3839f, 1292,073f, 359,2997f;
			}
			else
			{
				return 780,3879f, 1295,705f, 361,6941f;
			}
			break;
		
		case 46:
			return 208,69f, 337,76f, 104,64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889,99f, 2078,38f, 140f;
			}
			else
			{
				return -1890,24f, 2073,26f, 140,11f;
			}
			break;
		
		case 48:
			return 153,6156f, -3073,998f, 4,8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306,2449f, -1180,538f, 22,711f;
			}
			else
			{
				return -304,0894f, -1180,886f, 23,9493f;
			}
			break;
		
		case 50:
			return -2006,987f, -556,4998f, 11,8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590,2079f, -289,8196f, 40,68631f;
			}
			else
			{
				return -588,1934f, -290,4782f, 43,7101f;
			}
			break;
		
		case 52:
			return -1795,826f, -855,7111f, 8,2048f;
			break;
		
		case 53:
			return -1557,108f, -1155,246f, 2,9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470,71f, -1389,33f, 1,58f;
			}
			else
			{
				return -1467,483f, -1387,507f, 3,1432f;
			}
			break;
		
		case 55:
			return -684,8126f, -180,648f, 48,02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311,413f, 640,1154f, 136,9244f;
			}
			else
			{
				return -1307,062f, 641,4211f, 138,0582f;
			}
			break;
		
		case 57:
			return 2493,686f, 4963,541f, 43,7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392,76f, 3602,94f, 33,98f;
			}
			else
			{
				return 1392,609f, 3605,799f, 34,9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527,33f, 5295,7f, 73,17f;
			}
			else
			{
				return -535,4436f, 5297,496f, 76,3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564,26f, 5353,13f, 69,23f;
			}
			else
			{
				return -551,5837f, 5349,404f, 75,253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3,18f, -1827,1f, 24,22f;
			}
			else
			{
				return 0,1911f, -1825,905f, 24,3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62,25f, 3681,06f, 38,84f;
			}
			else
			{
				return 63,8867f, 3683,49f, 39,1543f;
			}
			break;
		
		case 63:
			return 155,384f, -741,179f, 258,6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126,61f, -1206,29f, 28,3f;
			}
			else
			{
				return 124,265f, -1205,882f, 28,2951f;
			}
			break;
		
		case 65:
			return 27,449f, -625,31f, 15,462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129,04f, -662,04f, 39,51f;
			}
			else
			{
				return -129,0374f, -659,2689f, 41,0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138,62f, -1598,56f, 33,69f;
			}
			else
			{
				return 1138,63f, -1596,61f, 35,07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149,68f, -1525,56f, 33,84f;
			}
			else
			{
				return 1147,55f, -1527,83f, 36,01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297,48f, -1448,79f, 28,97f;
			}
			else
			{
				return 296,44f, -1450,75f, 30,4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324,21f, -1392,68f, 31,51f;
			}
			else
			{
				return 322,27f, -1393,75f, 32,79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293,2f, -597,92f, 42,28f;
			}
			else
			{
				return 294,3f, -598,1f, 43,73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592,66f, 27,79f;
			}
			else
			{
				return 357,07f, -590,63f, 29,08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495,45f, -326,18f, 33,5f;
			}
			else
			{
				return -496,4f, -324,7f, 34,75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450,91f, -351,93f, 33,5f;
			}
			else
			{
				return -449,82f, -353,49f, 34,75f;
			}
			break;
		
		case 75:
			return -2258,833f, 323,9413f, 184,9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_95(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_96(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760,36f, 428,6f, 126,31f;
			}
			else
			{
				return -1756,974f, 427,531f, 126,7f;
			}
			break;
		
		case 1:
			return -1595,742f, 2799,371f, 16,0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197,1486f, 1482,685f, 288,253f;
			}
			else
			{
				return -200,0114f, 1481,697f, 289,4303f;
			}
			break;
		
		case 3:
			return 256,77f, 2841,047f, 42,6599f;
			break;
		
		case 4:
			return -1360,223f, 4435,751f, 27,7754f;
			break;
		
		case 5:
			return 64,63f, 7051,253f, 15,8272f;
			break;
		
		case 6:
			return -456,2838f, 1593,799f, 358,0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114,617f, 749,8445f, 11,59352f;
			}
			else
			{
				return -3111,614f, 749,2816f, 12,6285f;
			}
			break;
		
		case 8:
			return 713,6797f, 4095,969f, 33,765f;
			break;
		
		case 9:
			return 255,2671f, 2586,281f, 43,9619f;
			break;
		
		case 10:
			return -1292,64f, -3345,82f, 23,27f;
			break;
		
		case 11:
			return 3111,531f, 2214,848f, -8,6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555,82f, -839,05f, 39,84f;
			}
			else
			{
				return 555f, -837,81f, 55,08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91,9f;
			break;
		
		case 14:
			return 1691,152f, 2640,859f, 54,0693f;
			break;
		
		case 15:
			return 1982,37f, 6203,64f, 41,15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23,3f;
			break;
		
		case 17:
			return 963,5308f, -1824,04f, 30,0708f;
			break;
		
		case 18:
			return -295,4187f, 6188,786f, 30,48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67,9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157,5759f, 3133,994f, 42,45733f;
			}
			else
			{
				return 161,2925f, 3131,854f, 42,5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30,5f;
			break;
		
		case 22:
			return -1840f, 793f, 138,7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495,8039f, -1750,207f, 17,42509f;
			}
			else
			{
				return -495,9968f, -1747,231f, 18,5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764,695f, -265,5809f, 47,6187f;
			}
			else
			{
				return -1763,359f, -263,2062f, 47,1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548,0715f, -1642,451f, 27,2033f;
			}
			else
			{
				return 548,5943f, -1642,603f, 27,4425f;
			}
			break;
		
		case 26:
			return 736,0563f, 2595,556f, 72,9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701,0009f, -1179,702f, 23,28737f;
			}
			else
			{
				return 699,2748f, -1181,671f, 33,2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146,74f, 4938,93f, 221,27f;
			}
			else
			{
				return -1149,437f, 4940,362f, 221,3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543,91f, -432,76f, 93,12f;
			}
			else
			{
				return 2513,535f, -442,8484f, 113,0888f;
			}
			break;
		
		case 30:
			return -553,1764f, -2239,877f, 121,3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987,16f, -108,02f, 73,3f;
			}
			else
			{
				return 987,15f, -105,88f, 74,13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10,5f;
			break;
		
		case 33:
			return 312,6026f, 6606,896f, 27,8835f;
			break;
		
		case 34:
			return -37,21f, 2871,26f, 58,61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61,91f, 3690,51f, 38,83f;
			}
			else
			{
				return 59f, 3692f, 38,92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933,33f, 4617,07f, 47,72f;
			}
			else
			{
				return 2934,499f, 4617,067f, 47,736f;
			}
			break;
		
		case 37:
			return 57,8219f, -1932,121f, 20,4939f;
			break;
		
		case 38:
			return 378,26f, -334,3f, 45,63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673,662f, 2793,702f, 31,8124f;
			}
			else
			{
				return 2676,045f, 2793,249f, 39,5934f;
			}
			break;
		
		case 40:
			return -1582,278f, 770,3486f, 188,1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641,139f, -1032,815f, 4,63165f;
			}
			else
			{
				return -1640,546f, -1034,129f, 4,6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151,09f, -214,36f, 44,73f;
			}
			else
			{
				return -159,7137f, -209,1721f, 48,938f;
			}
			break;
		
		case 43:
			return -1276,986f, -2451,886f, 72,0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403,5827f, 1056,212f, 322,8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728,987f, 1576,382f, 65,5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221,27f, 6133,62f, 30,48f;
			}
			else
			{
				return -215,9002f, 6125,27f, 56,278f;
			}
			break;
		
		case 47:
			return 2092,225f, 2492,302f, 89,4046f;
			break;
		
		case 48:
			return -1124,666f, -967,1614f, 5,6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405,5299f, 323,4063f, 107,7227f;
			}
			else
			{
				return -405f, 325f, 108,7f;
			}
			break;
		
		case 50:
			return -1087,31f, -2429,3f, 13f;
			break;
		
		case 51:
			return -1042,645f, 879,7763f, 160,2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081,229f, 678,9454f, 141,8056f;
			}
			else
			{
				return -1078,35f, 682,2944f, 144,904f;
			}
			break;
		
		case 53:
			return -402,0679f, 1355,062f, 329,8384f;
			break;
		
		case 54:
			return 153,3876f, 713,6584f, 207,2551f;
			break;
		
		case 55:
			return 186,9f, 243,0269f, 140,55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302,01f, -3254,45f, 4,8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398,57f, -1883,96f, 20,54f;
			}
			else
			{
				return -397f, -1885f, 21,5f;
			}
			break;
		
		case 58:
			return 780,7208f, -211,0616f, 65,1143f;
			break;
		
		case 59:
			return -1755,011f, 184,3929f, 63,3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788,84f, 2164,06f, 52,1f;
			}
			else
			{
				return 786,0139f, 2164,951f, 52,0981f;
			}
			break;
		
		case 61:
			return 1707,228f, 4920,156f, 41,0637f;
			break;
		
		case 62:
			return -684,9417f, 5793,045f, 16,331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099,08f, 2711,35f, 18,11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5,5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663,95f, -1998,85f, 6,1f;
			}
			else
			{
				return -665,4316f, -2002,04f, 7,5968f;
			}
			break;
		
		case 67:
			return 1442,905f, -1479,759f, 62,2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361,92f, -141,76f, 37,58f;
			}
			else
			{
				return -356,5324f, -145,0359f, 41,7413f;
			}
			break;
		
		case 69:
			return 624,0116f, 558,6531f, 129,2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56,3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92,14449f, 6360,182f, 30,37612f;
			}
			else
			{
				return 94,0769f, 6356,961f, 30,3761f;
			}
			break;
		
		case 72:
			return -2231,514f, 3477,792f, 29,3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32,5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947,47f, 445,6f, 14,29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292,88f, -3341,78f, 4,9f;
			}
			else
			{
				return 1296f, -3348f, 5,2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165,46f, -2054,09f, 13,2f;
			}
			else
			{
				return -1165,883f, -2051,026f, 13,2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235,57f, -452,01f, 65,7f;
			}
			else
			{
				return 1235f, -450f, 66,5f;
			}
			break;
		
		case 78:
			return -467,0458f, -934,8019f, 46,9844f;
			break;
		
		case 79:
			return 226,7f, -1761f, 28,5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218,07f, 1898,69f, 76,87f;
			}
			else
			{
				return 1221f, 1898f, 77,4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545,99f, 3802,7f, 32,42f;
			}
			else
			{
				return 1535,829f, 3798,217f, 33,4563f;
			}
			break;
		
		case 82:
			return 756,8601f, 6462,329f, 30,4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20,2f;
			break;
		
		case 85:
			return 818,9215f, -3188,167f, 4,9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451,05f, -2264,24f, 6,61f;
			}
			else
			{
				return -457,3656f, -2262,646f, 7,5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409,86f, -757,22f, 65,8f;
			}
			else
			{
				return 1410,091f, -752,1061f, 66,2362f;
			}
			break;
		
		case 88:
			return 8,4875f, -441,2103f, 44,5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935,04f, 387,39f, 76,62f;
			}
			else
			{
				return -937,0176f, 391,544f, 80,2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748,49f, 3463,02f, 54,77f;
			}
			else
			{
				return 2746,554f, 3463,525f, 54,7144f;
			}
			break;
		
		case 91:
			return 1898,896f, 4921,975f, 47,8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315,51f, 6310,89f, 31,37f;
			}
			else
			{
				return -315,9772f, 6307,385f, 31,4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281,1712f, 2528,012f, 73,6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68,45f, 3756,27f, 38,74f;
			}
			else
			{
				return 68,453f, 3758,967f, 38,7395f;
			}
			break;
		
		case 96:
			return 25,2888f, -634,2637f, 6,5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146,67f, 4939,11f, 221,27f;
			}
			else
			{
				return -1145,283f, 4940,286f, 221,3038f;
			}
			break;
		
		case 98:
			return 441,64f, 5570,38f, 780,45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353,152f, 4377,223f, 43,3416f;
			}
			else
			{
				return 1357,209f, 4388,445f, 43,872f;
			}
			break;
		
		case 100:
			return -102,0671f, -968,1538f, 295,5635f;
			break;
		
		case 101:
			return 2492,69f, 4963,014f, 43,6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_315[iVar0] = -1;
		fLocal_316[iVar0] = 999999f;
		Local_317[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_318[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_99(int iParam0)
{
	unk_0xA1F44380A2D59F2B(joaat("a_c_retriever"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_rottweiler"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_boar"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_coyote"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_deer"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_mtlion"), iParam0);
	unk_0xA1F44380A2D59F2B(joaat("a_c_pig"), iParam0);
}

void func_100(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_ball"), 0) || unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_ball")) == 0)
	{
		unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("weapon_ball"), 1, iParam0, iParam2);
		unk_0xB0D3DD0BB37136FD(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			unk_0xBF3D28CA44F3BE2D(uLocal_382, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_101()
{
	if (!unk_0x133460AD0F183CC9(iLocal_67))
	{
		unk_0x03AB73582A77DBD3(iLocal_67, unk_0x26B246D60FABB3E2(unk_0x4A8C381C258A124D()));
	}
	if (unk_0x133460AD0F183CC9(iLocal_67))
	{
		unk_0xBC14FFDBE1C32C51(iLocal_67, 1);
		unk_0x47F8464BB13E408D(func_102(), 1f, 0,9f, 3f);
		unk_0x2D8E4004BC147E7E(iLocal_67, unk_0x26B246D60FABB3E2(unk_0x4A8C381C258A124D()), 1);
	}
}

var func_102()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_103()
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		if (func_107(unk_0x4A8C381C258A124D(), iLocal_67) > 10f || func_106("CHOP_H_WHIS"))
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_340) > 4000 && unk_0x875A214D5EBCA509(2, 47))
			{
				iLocal_340 = unk_0x1DD05E817C89C737();
				func_104(unk_0x4A8C381C258A124D(), "CALL_CHOP", 3);
				if (func_106("CHOP_H_WHIS"))
				{
					unk_0x428C32CC68809A35(1);
				}
				if (iLocal_49 == 15 && iLocal_50 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_49 == 2)
					{
						func_122(2, 0);
					}
					else
					{
						func_122(2, 1);
					}
				}
			}
			if (((!BitTest(Global_113969.f_10052.f_94, 8) && !unk_0x4C705AAF75363287()) && !func_19()) && !unk_0x3555462DB47B7AB1())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 8);
				func_18("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_104(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_105(iParam2), 1);
}

int func_105(int iParam0)
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

bool func_106(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

float func_107(var uParam0, int iParam1)
{
	return func_4(uParam0, iParam1, 1);
}

int func_108()
{
	if ((unk_0x9B5C1660CCDF7189(iLocal_67, joaat("script_task_perform_sequence")) == 7 || unk_0x8BF5256C439DF778(iLocal_67)) || unk_0xF76AF9D45D6BDA45(iLocal_67))
	{
		unk_0xD8AE5A845CE0131A(iLocal_67);
		return 1;
	}
	return 0;
}

void func_109(char* sParam0, int iParam1)
{
	func_112(&uLocal_146, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	func_110(&uLocal_146, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_111(uParam0, 145, sParam1, iParam4, iParam5, 0);
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

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_112(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_113()
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 6);
	if (iVar0 == 0)
	{
		unk_0x10425721983AE158(iLocal_67, sLocal_78[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_79 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		unk_0x10425721983AE158(iLocal_67, sLocal_78[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_79 = "idle_c";
	}
	else
	{
		unk_0x10425721983AE158(iLocal_67, sLocal_78[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_79 = "idle_b";
	}
}

int func_114(int iParam0, int iParam1)
{
	if (func_115(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (func_126(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_357 == 0)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 8);
		if (!unk_0x65FFA94B82A71741(iLocal_67, Local_356[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0) && !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_356[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0))
		{
			unk_0xA966E518B752B92A(iLocal_67, Local_356[iVar0 /*3*/], 1f, 20000, 0,25f, 8192, 1193033728);
			iLocal_357 = 1;
		}
	}
	else if (!func_114(iLocal_67, joaat("script_task_follow_nav_mesh_to_coord")))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = unk_0xC5935DFB3F39785A(0, 100);
		if (iVar2 < iVar1 && iLocal_346 == 0)
		{
			iLocal_346 = 1;
			func_122(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_77 = 1;
			sLocal_78[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_78[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_78[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_122(17, 1);
		}
		else
		{
			iLocal_77 = 0;
			sLocal_78[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_78[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_78[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_122(17, 1);
		}
	}
}

void func_117()
{
	if (((unk_0x1DD05E817C89C737() - iLocal_376) > 2000 && func_126(iLocal_67)) && unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iLocal_67, 1), 5f, 1))
	{
		func_123("WHINE");
		iLocal_376 = unk_0x1DD05E817C89C737();
	}
}

void func_118()
{
	if (func_43() == 2 && (unk_0x1DD05E817C89C737() - iLocal_341) > iLocal_342)
	{
		iLocal_341 = unk_0x1DD05E817C89C737();
		iLocal_342 = unk_0xC5935DFB3F39785A(10000, 15000);
		func_123("WHINE");
	}
}

int func_119(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if ((func_126(iLocal_67) && func_126(unk_0x4A8C381C258A124D())) && func_121(iParam0, Local_327, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_120(&uLocal_94, unk_0xD1A6A821F5AC81DB(iParam0, 1)))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
				Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2)) < 2,5f)
				{
					return 1;
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

bool func_120(var uParam0, struct<2> Param1, Vector3 vParam2)
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

bool func_121(int iParam0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	Var1 = { Param1 - Var0 };
	return ((Var1.f_0 * Var1.f_0) + (Var1.f_1 * Var1.f_1)) <= (fParam2 * fParam2);
}

void func_122(int iParam0, int iParam1)
{
	iLocal_84 = 0;
	if (func_126(iLocal_67))
	{
		unk_0xAAA71DD7E9059338(iLocal_67, 1);
		unk_0xD8AE5A845CE0131A(iLocal_67);
		if (!unk_0x7F420695E3F776FB(iLocal_67, 0))
		{
			if (iParam1 == 1)
			{
				unk_0x974022927CB47E68(iLocal_67);
			}
			unk_0x935364B4448CD584(iLocal_67, 0);
		}
	}
	iLocal_49 = iParam0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	iLocal_319 = -1;
	Local_320 = { 0f, 0f, 0f };
	Local_321 = { 0f, 0f, 0f };
	iLocal_313 = 5;
	func_34();
	iLocal_357 = 0;
	iLocal_355 = 0;
	iLocal_376 = unk_0x1DD05E817C89C737();
	unk_0xCFBD89D2F1F18961("DisableBarks", 0);
}

void func_123(char* sParam0)
{
	unk_0xABFC7C2CD8D89949(iLocal_67, 3, sParam0);
}

int func_124()
{
	if (func_119(unk_0x4A8C381C258A124D(), 1))
	{
		if ((unk_0x1DD05E817C89C737() - iLocal_334) > iLocal_335)
		{
			return 1;
		}
		if (func_39(unk_0x4A8C381C258A124D(), Local_327.f_5, 1) < 8f)
		{
			func_109("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0, struct<3> Param1, var uParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_126(iParam0))
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
		unk_0x5C96CEA06531AB03(iParam0, uParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
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

void func_127()
{
	if ((unk_0x1DD05E817C89C737() - iLocal_380) > 60000)
	{
		iLocal_380 = unk_0x1DD05E817C89C737();
		if ((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15)
		{
			if (func_43() == 1)
			{
				func_128(115, 1);
			}
			else
			{
				func_128(116, 1);
			}
		}
	}
}

void func_128(int iParam0, int iParam1)
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

void func_129()
{
	if ((unk_0x1DD05E817C89C737() - iLocal_377) > 500)
	{
		iLocal_377 = unk_0x1DD05E817C89C737();
		if (iLocal_49 != 15 && unk_0xF67924A428A734EC(unk_0x4A8C381C258A124D(), joaat("weapon_ball"), 1,5f, &uLocal_360, &iLocal_359, 0))
		{
			func_40(1);
		}
	}
}

void func_130()
{
	int iVar0;
	
	if (((((((((((func_145() && func_144()) && !func_143()) && iLocal_51 == 0) && iLocal_49 != 6) && func_19()) && !unk_0x3555462DB47B7AB1()) && !unk_0x1B32E388988DD296(iLocal_67, 0)) && !func_82()) && !func_15()) && !func_3(0)) && !func_142())
	{
		unk_0x66EFB3D6110055C4(0, 19, 1);
		unk_0x66EFB3D6110055C4(0, 44, 1);
		unk_0x66EFB3D6110055C4(0, 262, 1);
		unk_0x66EFB3D6110055C4(0, 261, 1);
		unk_0x66EFB3D6110055C4(0, 37, 1);
		if (iLocal_326 == 0)
		{
			func_139(system::floor(Global_113969.f_20121.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
		}
		else
		{
			func_139(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
		}
		if (func_138())
		{
			if (Global_33095 == 0)
			{
				Global_33095 = 1;
			}
			if (unk_0xE37AC296E66C33AF())
			{
				unk_0xB0325D55FDB2DD7C(1);
			}
			else
			{
				unk_0x190BA0A3BB48F7FD(iLocal_67, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_384 = 0;
			}
			unk_0x4CC1CF98851922CE(func_137(), func_136(0));
			unk_0x4CC1CF98851922CE(func_137(), func_136(1));
			unk_0x4CC1CF98851922CE(func_137(), func_136(2));
			unk_0x4CC1CF98851922CE(func_137(), func_136(3));
			unk_0x4CC1CF98851922CE(func_137(), func_136(4));
			unk_0x4CC1CF98851922CE(func_137(), func_136(5));
			if (unk_0xAE231F549813BBDF(0))
			{
				unk_0x66EFB3D6110055C4(func_137(), func_136(0), 1);
				unk_0x66EFB3D6110055C4(func_137(), func_136(1), 1);
				unk_0x66EFB3D6110055C4(func_137(), func_136(2), 1);
				unk_0x66EFB3D6110055C4(func_137(), func_136(3), 1);
				unk_0x66EFB3D6110055C4(func_137(), func_136(4), 1);
				unk_0x66EFB3D6110055C4(func_137(), func_136(5), 1);
			}
			unk_0xB211E45F1FE1ED2D(0, 25, 1);
			if (unk_0x61C3701AD6D746B2(func_137(), func_136(0)) && func_135())
			{
				switch (iLocal_49)
				{
					case 1:
					case 3:
					case 4:
						iLocal_73 = 1;
						func_134(0);
						func_123("PLAYFUL");
						func_109("CHOP_WALK", 0);
						func_122(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_73 = 0;
						func_134(0);
						func_122(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_73 = 1;
						func_134(0);
						func_109("CHOP_WALK", 0);
						iLocal_51 = 2;
						break;
				}
				if (iLocal_73 == 1 && unk_0xDF7F16323520B858(joaat("sp_chop_walk_done"), &iLocal_379, -1))
				{
					iLocal_379++;
					unk_0x1164A75E490C27B6(joaat("sp_chop_walk_done"), iLocal_379, 1);
				}
			}
			if (bLocal_325 == 1)
			{
				if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(1)) && func_135())
				{
					if (iLocal_49 == 17 || iLocal_49 == 18)
					{
						iLocal_51 = 5;
					}
					else
					{
						func_122(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_326 == 0)
				{
					if (func_133() >= 1)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(2)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 2)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(3)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 3)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(4)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 4)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(5)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_133() >= 1)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(2)) && func_135())
						{
							func_109("CHOP_SIT", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 8;
							}
							else
							{
								func_122(8, 1);
							}
						}
					}
					if (func_133() >= 2)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(3)) && func_135())
						{
							func_109("CHOP_PAW", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 9;
							}
							else
							{
								func_122(9, 1);
							}
						}
					}
					if (func_133() >= 3)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(4)) && func_135())
						{
							func_109("CHOP_BEG", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 7;
							}
							else
							{
								func_122(7, 1);
							}
						}
					}
					if (func_133() >= 4)
					{
						if (unk_0xDEE3EFEA31A1F555(func_137(), func_136(5)) && func_135())
						{
							func_109("CHOP_PET", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 10;
							}
							else
							{
								func_122(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0x428C32CC68809A35(1);
			if (!BitTest(Global_113969.f_10052.f_94, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 0);
			}
			if (bLocal_325 == 0)
			{
				bLocal_325 = func_132();
			}
			if (bLocal_325 == 1)
			{
				iVar0 = func_133();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 18) || iLocal_49 == 3) || iLocal_49 == 4)
				{
					StringCopy(&Local_86, "CHOP_H_WAIT_", 32);
					StringIntConCat(&Local_86, iVar0, 32);
					if (unk_0xAE231F549813BBDF(0))
					{
						StringConCat(&Local_86, "_KM", 32);
					}
				}
				else if (iLocal_49 == 2 || iLocal_49 == 15)
				{
					StringCopy(&Local_86, "CHOP_H_WALK_", 32);
					StringIntConCat(&Local_86, iVar0, 32);
					if (unk_0xAE231F549813BBDF(0))
					{
						StringConCat(&Local_86, "_KM", 32);
					}
				}
				func_131(&Local_86);
			}
			else if (iLocal_49 == 2 || iLocal_49 == 15)
			{
				if (unk_0xAE231F549813BBDF(0))
				{
					func_131("CHOP_H_HOME_KM");
				}
				else
				{
					func_131("CHOP_H_HOME");
				}
			}
			else if (unk_0xAE231F549813BBDF(0))
			{
				func_131("CHOP_H_NO_AD_KM");
			}
			else
			{
				func_131("CHOP_H_NO_AD");
			}
		}
	}
	else
	{
		func_134(1);
	}
}

void func_131(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

int func_132()
{
	if (Global_113969.f_20121.f_263)
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	return Global_113969.f_20121.f_254.f_3;
}

void func_134(int iParam0)
{
	if (func_138())
	{
		unk_0x428C32CC68809A35(1);
	}
	if (iParam0 == 1 && unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(0);
	}
}

int func_135()
{
	if (((iLocal_49 == 8 || iLocal_49 == 7) || iLocal_49 == 9) || iLocal_49 == 10)
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0)
{
	if (unk_0xAE231F549813BBDF(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_137()
{
	if (unk_0xAE231F549813BBDF(0))
	{
		return 0;
	}
	return 2;
}

int func_138()
{
	if (unk_0x4C705AAF75363287())
	{
		if (((((((((((func_106("CHOP_H_WAIT_0") || func_106("CHOP_H_WAIT_1")) || func_106("CHOP_H_WAIT_2")) || func_106("CHOP_H_WAIT_3")) || func_106("CHOP_H_WAIT_4")) || func_106("CHOP_H_HOME")) || func_106("CHOP_H_WALK_0")) || func_106("CHOP_H_WALK_1")) || func_106("CHOP_H_WALK_2")) || func_106("CHOP_H_WALK_3")) || func_106("CHOP_H_WALK_4")) || func_106("CHOP_H_NO_AD"))
		{
			return 1;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4C705AAF75363287())
		{
			if (((((((((((func_106("CHOP_H_WAIT_0_KM") || func_106("CHOP_H_WAIT_1_KM")) || func_106("CHOP_H_WAIT_2_KM")) || func_106("CHOP_H_WAIT_3_KM")) || func_106("CHOP_H_WAIT_4_KM")) || func_106("CHOP_H_HOME_KM")) || func_106("CHOP_H_WALK_0_KM")) || func_106("CHOP_H_WALK_1_KM")) || func_106("CHOP_H_WALK_2_KM")) || func_106("CHOP_H_WALK_3_KM")) || func_106("CHOP_H_WALK_4_KM")) || func_106("CHOP_H_NO_AD_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_141(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_140(0, iVar0);
		Global_1670224.f_1177[iVar0] = iParam0;
		Global_1670224.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[iVar0] = iParam3;
		Global_1670224.f_1177.f_183[iVar0] = iParam4;
		Global_1670224.f_1177.f_227[iVar0] = iParam5;
		Global_1670224.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1670224.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1670224.f_1177.f_269[iVar0] = iParam8;
		Global_1670224.f_1177.f_280[iVar0] = iParam9;
		Global_1670224.f_1177.f_323[iVar0] = iParam10;
		Global_1670224.f_1177.f_334[iVar0] = iParam11;
		Global_1670224.f_1177.f_345[iVar0] = iParam12;
		Global_1670224.f_1177.f_356[iVar0] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[iVar0] = iParam14;
		Global_1670224.f_1177.f_378[iVar0] = iParam15;
		Global_1670224.f_1177.f_389[iVar0] = iParam16;
		Global_1670224.f_1177.f_400[iVar0] = iParam17;
		Global_1670224.f_1177.f_411[iVar0] = iParam18;
		Global_1670224.f_1177.f_422[iVar0] = iParam19;
		Global_1670224.f_1177.f_433[iVar0] = iParam20;
		Global_1670224.f_1177.f_444[iVar0] = iParam21;
		Global_1670224.f_1177.f_455[iVar0] = iParam22;
		Global_1670224.f_1177.f_466[iVar0] = iParam23;
		Global_1670224.f_1177.f_477[iVar0] = iParam24;
		Global_1670224.f_1177.f_205[iVar0] = iParam25;
		Global_1670224.f_1177.f_216[iVar0] = iParam39;
		Global_1670224.f_1177.f_488[iVar0] = iParam26;
		Global_1670224.f_1177.f_499[iVar0] = iParam27;
		Global_1670224.f_1177.f_510[iVar0] = iParam28;
		Global_1670224.f_1177.f_521[iVar0] = iParam29;
		Global_1670224.f_1177.f_532[iVar0] = iParam30;
		Global_1670224.f_1177.f_543[iVar0] = iParam31;
		Global_1670224.f_1177.f_554[iVar0] = iParam32;
		Global_1670224.f_1177.f_565[iVar0] = iParam33;
		Global_1670224.f_1177.f_576[iVar0] = iParam34;
		Global_1670224.f_1177.f_587[iVar0] = iParam35;
		Global_1670224.f_1177.f_598[iVar0] = iParam36;
		Global_1670224.f_1177.f_609[iVar0] = iParam37;
		Global_1670224.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_140(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_141(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

bool func_142()
{
	return Global_76498;
}

bool func_143()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_144()
{
	if (iLocal_49 == 12)
	{
		return 0;
	}
	if (iLocal_49 == 13 || (iLocal_49 == 14 && func_114(iLocal_67, joaat("script_task_perform_sequence"))))
	{
		if (iLocal_355 == 0 && unk_0x6D05C5731A838CB3(2, 228))
		{
			func_109("CHOP_BUSY", 0);
			iLocal_355 = 1;
		}
		return 0;
	}
	return 1;
}

int func_145()
{
	if (func_107(unk_0x4A8C381C258A124D(), iLocal_67) < 10f)
	{
		if (iLocal_49 == 15 && iLocal_50 < 4)
		{
		}
		else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			func_149(0);
			func_148(0);
			return 0;
		}
		else
		{
			func_146();
			func_149(1);
			func_148(1);
			return 1;
		}
	}
	func_149(0);
	func_148(0);
	if (func_106("CHOP_H_INTRO") || (unk_0x761778199FE1211C() && func_106("CHOP_H_INTRO_KM")))
	{
		unk_0x428C32CC68809A35(1);
	}
	return 0;
}

void func_146()
{
	if ((((((((!BitTest(Global_113969.f_10052.f_94, 0) && !(func_106("CHOP_H_INTRO") || (unk_0x761778199FE1211C() && func_106("CHOP_H_INTRO_KM")))) && !func_106("PW_HELP_1")) && !func_106("PW_HELP_2")) && !func_147()) && !unk_0x3555462DB47B7AB1()) && !func_3(0)) && !func_143()) && !func_142())
	{
		if ((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 18)
		{
			if (func_119(unk_0x4A8C381C258A124D(), 1))
			{
				unk_0x428C32CC68809A35(1);
				if (unk_0xAE231F549813BBDF(0))
				{
					func_131("CHOP_H_INTRO_KM");
				}
				else
				{
					func_131("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x761778199FE1211C() && func_106("CHOP_H_INTRO_KM")) || func_106("CHOP_H_INTRO"))
	{
		if ((((func_147() || unk_0x3555462DB47B7AB1()) || func_3(0)) || func_143()) || func_142())
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

int func_147()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_126(iLocal_67))
		{
			unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iLocal_67, -1, 48, 2);
			iLocal_71 = 1;
		}
	}
	else if (iLocal_71 == 1 && func_126(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
		iLocal_71 = 0;
	}
}

void func_149(int iParam0)
{
	int iVar0;
	
	unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
	if (iLocal_72 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_72 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x3F58BFCF656F0DF1(iLocal_67, 1);
			unk_0x87EDE48547CC8942(iLocal_67, 1, 0);
			unk_0x7D2CC3BDBE189210(iLocal_67, 1);
			unk_0x476AD3ABB8EA8A58(iLocal_67, 1);
			iLocal_72 = 1;
		}
	}
	else if (iLocal_72 == 1)
	{
		unk_0x3F58BFCF656F0DF1(iLocal_67, 0);
		unk_0x87EDE48547CC8942(iLocal_67, 0, 0);
		unk_0x7D2CC3BDBE189210(iLocal_67, 0);
		iLocal_72 = 0;
	}
}

void func_150()
{
	int iVar0;
	var uVar1[5];
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	if ((iLocal_49 != 6 && iLocal_84 == 0) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		if (((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15) || (iLocal_49 == 14 && !func_114(iLocal_67, joaat("script_task_perform_sequence"))))
		{
			if (unk_0xF483865E4C02C371(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f) > 0 || unk_0xF483865E4C02C371(iLocal_67, unk_0xD1A6A821F5AC81DB(iLocal_67, 1), 100f) > 0)
			{
				unk_0x80813AC549A1E8AE("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar1, -1))
				{
					if ((((!func_126(uVar2) && func_126(uVar1[iVar0])) && (unk_0x1B32E388988DD296(uVar1[iVar0], unk_0x4A8C381C258A124D()) || unk_0x1B32E388988DD296(uVar1[iVar0], iLocal_67))) && !unk_0x7F420695E3F776FB(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_67)
					{
						uVar2 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_126(uVar2))
				{
					unk_0x62A5310368A20EFA(iLocal_67, uVar2, 0, 16);
					func_109("CHOP_ATTACK2", 0);
					if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 6)) && !func_19()) && !unk_0x3555462DB47B7AB1())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 6);
						func_18("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_122(6, 0);
				}
			}
			else
			{
				unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar3, 1);
				if (iVar3 != joaat("weapon_ball") && !(iLocal_49 == 15 && iLocal_50 == 1))
				{
					if (unk_0x5266B2AB5BDC4B54(unk_0x259BE71D8A81D4FA(), &uVar4) || unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uVar4))
					{
						if (unk_0x0101C509A6E67F99(uVar4))
						{
							iVar5 = unk_0xBD545F8729E9F413(iVar4);
							if (((!unk_0x4FAFF4BCB7633475(iVar5) && iVar5 != iLocal_67) && !unk_0x7F420695E3F776FB(iVar5, 0)) && func_4(unk_0x4A8C381C258A124D(), iVar5, 1) < 50f)
							{
								unk_0x62A5310368A20EFA(iLocal_67, iVar5, 0, 16);
								iLocal_372++;
								if (iLocal_372 >= 3)
								{
									unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
									unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
								}
								func_109("CHOP_ATTACK1", 0);
								if (((!unk_0x4C705AAF75363287() && !BitTest(Global_113969.f_10052.f_94, 11)) && !func_19()) && !unk_0x3555462DB47B7AB1())
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 11);
									func_18("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_122(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0x1DD05E817C89C737() - iLocal_373) > 60000)
	{
		iLocal_373 = unk_0x1DD05E817C89C737();
		if (iLocal_372 > 0)
		{
			iLocal_372 = (iLocal_372 - 1);
		}
	}
}

void func_151()
{
	if ((iLocal_49 != 16 && Global_32954 == 1) && unk_0x592E6281C16BB0F2(unk_0x4A8C381C258A124D()))
	{
		func_122(16, 1);
	}
}

void func_152()
{
	if (iLocal_354 == 0)
	{
		if (func_119(unk_0x4A8C381C258A124D(), 1))
		{
			func_109("CHOP_DUMP", 0);
			iLocal_354 = 1;
		}
	}
}

void func_153()
{
	if (iLocal_358 != func_154() && func_126(iLocal_67))
	{
		if (func_132())
		{
			iLocal_358 = func_154();
			unk_0xD1C578C204015E1F(iLocal_67, 3, 0, iLocal_358, 0);
		}
		else if (iLocal_358 != 4)
		{
			iLocal_358 = 4;
			unk_0xD1C578C204015E1F(iLocal_67, 3, 0, iLocal_358, 0);
		}
	}
}

int func_154()
{
	return Global_113969.f_20121.f_254.f_4;
}

void func_155()
{
	int iVar0;
	
	Global_33095 = 0;
	unk_0xEC9DAA34BBB4658C(func_163());
	if (!unk_0x6252BC0DD8A320DB(func_163()))
	{
		return;
	}
	if (func_179(6))
	{
		Local_327.f_4 = 6;
		Local_327 = { 18,1531f, 535,2469f, 169,6324f };
		Local_327.f_3 = 204,8112f;
		Local_327.f_5 = { 19,52771f, 537,436f, 170,143f };
		Local_327.f_8 = 151,3064f;
		Local_345 = { 19,45963f, 535,7817f, 169,6277f };
		Local_356[0 /*3*/] = { 17,36033f, 528,8973f, 169,6277f };
		Local_356[1 /*3*/] = { 19,46877f, 529,1785f, 169,6277f };
		Local_356[2 /*3*/] = { 20,82979f, 531,5168f, 169,6277f };
		Local_356[3 /*3*/] = { 22,83555f, 532,3281f, 169,6277f };
		Local_356[4 /*3*/] = { 20,79285f, 535,001f, 169,6277f };
		Local_356[5 /*3*/] = { 18,05178f, 535,6321f, 169,6277f };
		Local_356[6 /*3*/] = { 18,92047f, 534,0938f, 169,6277f };
		Local_356[7 /*3*/] = { 17,51333f, 533,4775f, 169,6277f };
		func_162(&uLocal_94);
		func_161(&uLocal_94, 12,41124f, 535,5469f, 169,6277f);
		func_161(&uLocal_94, 19,04497f, 538,5729f, 169,6277f);
		func_161(&uLocal_94, 25,00015f, 534,4414f, 169,6277f);
		func_161(&uLocal_94, 28,0998f, 527,7639f, 169,4277f);
		func_161(&uLocal_94, 17,75896f, 523,3129f, 169,2277f);
		func_160(&uLocal_94);
	}
	else
	{
		Local_327.f_4 = 5;
		Local_327 = { -10,25168f, -1422,907f, 29,67775f };
		Local_327.f_3 = 157,9037f;
		Local_327.f_5 = { -9,73f, -1421,55f, 30,1f };
		Local_327.f_8 = 148,26f;
		Local_345 = { -10,6379f, -1424,561f, 29,67365f };
		Local_356[0 /*3*/] = { -10,03643f, -1423,529f, 29,67602f };
		Local_356[1 /*3*/] = { -10,78779f, -1425,306f, 29,70937f };
		Local_356[2 /*3*/] = { -12,7048f, -1424,748f, 29,72222f };
		Local_356[3 /*3*/] = { -12,47465f, -1422,485f, 29,74699f };
		Local_356[4 /*3*/] = { -14,26666f, -1424,855f, 29,71964f };
		Local_356[5 /*3*/] = { -14,55816f, -1423,048f, 29,78372f };
		Local_356[6 /*3*/] = { -16,13293f, -1424,489f, 29,76139f };
		Local_356[7 /*3*/] = { -16,25662f, -1423,325f, 29,81294f };
		func_162(&uLocal_94);
		func_161(&uLocal_94, -7,26821f, -1427,065f, 29,67468f);
		func_161(&uLocal_94, -7,39631f, -1418,851f, 29,5858f);
		func_161(&uLocal_94, -14,27201f, -1421,59f, 29,76819f);
		func_161(&uLocal_94, -22,85347f, -1423,173f, 29,74042f);
		func_161(&uLocal_94, -22,77974f, -1427,168f, 29,65953f);
		func_160(&uLocal_94);
	}
	bLocal_325 = func_132();
	func_157();
	if (func_43() == 2)
	{
		unk_0xBAAB54D57B40765E(Local_345, 2f, 2);
		unk_0xEC9DAA34BBB4658C(joaat("prop_big_shit_02"));
		while (!unk_0x6252BC0DD8A320DB(joaat("prop_big_shit_02")))
		{
			system::wait(0);
		}
		uLocal_344 = unk_0x4E55EAB577C13329(joaat("prop_big_shit_02"), Local_345, 1, 1, 0);
		unk_0x55098D9E9AD58806(joaat("prop_big_shit_02"));
		iLocal_354 = 0;
	}
	else
	{
		iLocal_354 = 1;
	}
	iLocal_346 = 0;
	if (unk_0xC5935DFB3F39785A(0, 2) == 0)
	{
		iLocal_335 = -1;
	}
	else
	{
		iLocal_335 = unk_0xC5935DFB3F39785A(20000, 30000);
	}
	if (iLocal_323 == 1)
	{
		iLocal_49 = 7;
		iLocal_73 = 1;
	}
	else if (iLocal_324 == 1)
	{
		iLocal_49 = 2;
	}
	else if (iLocal_335 > -1)
	{
		iLocal_49 = 11;
		iLocal_73 = 0;
	}
	else
	{
		iLocal_49 = 1;
		iLocal_73 = 0;
	}
	iLocal_80 = unk_0x8CC50AC10D8037C7(11,23f, 515,4f, 168f, 9f, 21f, 4f, func_156(113f), 0, 7);
	iLocal_81 = unk_0x8CC50AC10D8037C7(24f, 528f, 168f, 5f, 5f, 4f, func_156(113f), 0, 7);
	Local_82[0 /*3*/] = { 444,1685f, 5569,016f, 780,1895f };
	Local_82[1 /*3*/] = { 443,8968f, 5574,931f, 780,1895f };
	Local_82[2 /*3*/] = { -739,1624f, 5596,784f, 40,6594f };
	Local_82[3 /*3*/] = { -738,8002f, 5593,269f, 40,6594f };
	fLocal_83[0] = 270f;
	fLocal_83[1] = 270f;
	fLocal_83[2] = 95f;
	fLocal_83[3] = 95f;
	func_98();
	iLocal_71 = 0;
	iLocal_336 = 0;
	iLocal_340 = unk_0x1DD05E817C89C737();
	iVar0 = func_133();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_86, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_86, iVar0, 32);
	if (unk_0xAE231F549813BBDF(0))
	{
		StringConCat(&Local_86, "_KM", 32);
	}
	Global_33097 = 0;
	iLocal_48 = 1;
}

float func_156(float fParam0)
{
	return (fParam0 * 0,01745329f);
}

void func_157()
{
	if (iLocal_323 == 1)
	{
		if (func_159())
		{
			unk_0xEE0BCDB1B5E36BCB(iLocal_67, 1, 1);
			unk_0x974022927CB47E68(iLocal_67);
			func_153();
			while (func_147())
			{
				system::wait(0);
			}
		}
	}
	else if (iLocal_324 == 1)
	{
		if (func_126(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iLocal_76 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				func_80();
				func_79();
				func_158(&iLocal_67, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 0, 1);
				if (func_126(iLocal_67))
				{
					unk_0xAAA71DD7E9059338(iLocal_67, 1);
					unk_0x9A74653FD0288BAB(iLocal_67, 1);
					unk_0xC1BC1B8A5AA67C6B(iLocal_67, 0);
					unk_0xD9757FAB956617BA(iLocal_67, 0);
					func_101();
					unk_0x935364B4448CD584(iLocal_67, 1);
					unk_0x73CAFD2038E812B3(iLocal_67, iLocal_76, 0);
					iLocal_84 = 8;
					func_153();
					unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
				}
				while (func_147())
				{
					if (func_126(iLocal_67) && !func_114(iLocal_67, joaat("script_task_play_anim")))
					{
						unk_0x80813AC549A1E8AE(sLocal_369);
						if (unk_0xE100DD4F82A51BDE(sLocal_369))
						{
							unk_0x10425721983AE158(iLocal_67, sLocal_369, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					system::wait(0);
				}
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iLocal_67))
	{
		func_158(&iLocal_67, Local_327, Local_327.f_3, 1);
	}
	if (func_126(iLocal_67))
	{
		unk_0x06CD913C241C765E("rel_group_chop", &iLocal_69);
		iLocal_70 = 1;
		unk_0xD414C47AFF81382A(1, joaat("player"), iLocal_69);
		unk_0xD414C47AFF81382A(1, iLocal_69, joaat("player"));
		unk_0xD414C47AFF81382A(3, joaat("cat"), iLocal_69);
		unk_0xD414C47AFF81382A(3, iLocal_69, joaat("cat"));
		unk_0x3CEA1FD137ACE2D9(iLocal_67, iLocal_69);
		unk_0xAAA71DD7E9059338(iLocal_67, 1);
		unk_0x9A74653FD0288BAB(iLocal_67, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 185, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 26, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 32, 0);
		unk_0x0428AFDCAA63B06E(iLocal_67, 29, 0);
		unk_0x0428AFDCAA63B06E(iLocal_67, 116, 0);
		unk_0x0428AFDCAA63B06E(iLocal_67, 118, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 132, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 268, 0);
		unk_0x0428AFDCAA63B06E(iLocal_67, 107, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 281, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 137, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 146, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 157, 0);
		unk_0x0428AFDCAA63B06E(iLocal_67, 45, 1);
		unk_0x0428AFDCAA63B06E(iLocal_67, 167, 1);
		unk_0xC1BC1B8A5AA67C6B(iLocal_67, 0);
		unk_0xD9757FAB956617BA(iLocal_67, 0);
		unk_0xB41DEC3AAC1AA107(iLocal_67, joaat("weapon_animal"), 1, 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_67, 5, 1);
		unk_0xBE8796DB2B90A437(iLocal_67, 0, 0);
		unk_0xBE8796DB2B90A437(iLocal_67, 46, 1);
		unk_0x35365D1E3ADB7109(iLocal_67, 100f);
		unk_0x25DBF9F9C6BDFFEA(iLocal_67, 100f);
		unk_0x1CA08719184AFC6F(iLocal_67, 512, 1);
		unk_0xE915224DCA36212A(iLocal_67, 0);
		unk_0x36A20106D0B42723(iLocal_67, 800);
		unk_0xD25E9BDC14A0B649(iLocal_67, 800, 0, 0);
		unk_0xF88FC425EC7D675D(iLocal_67, 200);
		if (!unk_0x7F420695E3F776FB(iLocal_67, 0))
		{
			func_58();
		}
		func_112(&uLocal_146, 3, iLocal_67, "CHOP", 0, 1);
		unk_0x3F58BFCF656F0DF1(iLocal_67, 0);
		unk_0x87EDE48547CC8942(iLocal_67, 0, 0);
		unk_0x7D2CC3BDBE189210(iLocal_67, 0);
		iLocal_72 = 0;
		Global_33094 = 0;
		iLocal_372 = 0;
		iLocal_373 = unk_0x1DD05E817C89C737();
	}
}

int func_158(var uParam0, struct<3> Param1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_163();
	unk_0xEC9DAA34BBB4658C(iVar0);
	if (unk_0x6252BC0DD8A320DB(iVar0))
	{
		if (unk_0xFC8BFE4B41177C22(*uParam0))
		{
			unk_0x734A9F4537A31459(uParam0);
		}
		*uParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param1, iParam2, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 0, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 1, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 2, 0, 0, 0);
		if (Global_113969.f_20121.f_263)
		{
			unk_0xD1C578C204015E1F(*uParam0, 3, 0, Global_113969.f_20121.f_254.f_4, 0);
		}
		else
		{
			unk_0xD1C578C204015E1F(*uParam0, 3, 0, 4, 0);
		}
		unk_0xD1C578C204015E1F(*uParam0, 4, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 5, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 6, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 7, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 8, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 9, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 10, 0, 0, 0);
		unk_0xD1C578C204015E1F(*uParam0, 11, 0, 0, 0);
		unk_0x445E7F949766A0C7(*uParam0, 1);
		if (bParam3)
		{
			unk_0x55098D9E9AD58806(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_159()
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	
	if (func_126(Global_101254) && unk_0x700C28A639389477(Global_101254, func_163()))
	{
		iLocal_67 = Global_101254;
		return 1;
	}
	iVar1 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((uVar0[iVar2] != 0 && func_126(uVar0[iVar2])) && unk_0x4B423FAA24E8ABF0(uVar0[iVar2]) == func_163())
		{
			iLocal_67 = uVar0[iVar2];
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_160(var uParam0)
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

void func_161(var uParam0, struct<3> Param1)
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

void func_162(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_163()
{
	return joaat("a_c_chop");
}

int func_164()
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_48 > 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_67))
		{
			if (func_168(0) && Global_32954 == 0)
			{
				return 1;
			}
			if (!func_171(1))
			{
				return 1;
			}
			if (Global_113959 == 1)
			{
				return 1;
			}
			if (((((((((((Global_79387 == 1 && Global_32954 == 0) && Global_8804 == 0) && Global_33204 == 0) && Global_33205 == 0) && Global_33206 == 0) && Global_61347 == 0) && !func_147()) && !func_15()) && Global_103693 == 0) && func_126(unk_0x4A8C381C258A124D())) && !func_166())
			{
				return 1;
			}
			if (Global_98433 == 1)
			{
				return 1;
			}
			if (unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
			{
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && unk_0x9B3D4335E0EDB0BE(iLocal_67, unk_0x4A8C381C258A124D(), 1))
				{
					Global_33094 = 1;
					if (!BitTest(Global_113969.f_10052.f_94, 9) && !unk_0x3555462DB47B7AB1())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 9);
						func_18("CHOP_H_DEAD", -1);
					}
				}
				else if (!BitTest(Global_113969.f_10052.f_94, 12) && !unk_0x3555462DB47B7AB1())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 12);
					func_18("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (unk_0x3555462DB47B7AB1())
				{
					func_165();
				}
				else
				{
					if ((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0x4A8C381C258A124D(), iLocal_67, 1) > fVar0)
					{
						if ((!BitTest(Global_113969.f_10052.f_94, 4) && unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) && !unk_0x3555462DB47B7AB1())
						{
							if (((((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 11) || iLocal_49 == 4) || iLocal_49 == 3) || iLocal_49 == 13)
							{
							}
							else
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_94), 4);
								func_18("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!unk_0x7F420695E3F776FB(iLocal_67, 0) && unk_0x8D91ADE44AC79BC9(iLocal_67) > 0)
				{
					if (unk_0x69799E0840A34AFB(iLocal_67))
					{
						Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_67, 1) };
						if (unk_0xF85C2BE613AD7903(Var1, &fVar2))
						{
							if ((fVar2 - Var1.f_2) > 0,1f)
							{
								unk_0xD25E9BDC14A0B649(iLocal_67, 0, 0, 0);
							}
						}
					}
					if (unk_0x5B702A5D1F2635BE(iLocal_67))
					{
						unk_0xD25E9BDC14A0B649(iLocal_67, 0, 0, 0);
					}
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

void func_165()
{
	if (unk_0x4C705AAF75363287())
	{
		if ((((((((((((((((((((func_106("CHOP_H_INTRO") || func_106("CHOP_H_WAIT_0")) || func_106("CHOP_H_WAIT_1")) || func_106("CHOP_H_WAIT_2")) || func_106("CHOP_H_WAIT_3")) || func_106("CHOP_H_WAIT_4")) || func_106("CHOP_H_HOME")) || func_106("CHOP_H_WALK_0")) || func_106("CHOP_H_WALK_1")) || func_106("CHOP_H_WALK_2")) || func_106("CHOP_H_WALK_3")) || func_106("CHOP_H_WALK_4")) || func_106("CHOP_H_HUNT")) || func_106("CHOP_H_NOVEH")) || func_106("CHOP_H_CAR")) || func_106("CHOP_H_BIKE")) || func_106("CHOP_H_ATTACK")) || func_106("CHOP_H_BALL")) || func_106("CHOP_H_WHIS")) || func_106("CHOP_H_AIM")) || func_106("CHOP_H_NO_AD"))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4C705AAF75363287())
		{
			if ((((((((((((func_106("CHOP_H_INTRO_KM") || func_106("CHOP_H_WAIT_0_KM")) || func_106("CHOP_H_WAIT_1_KM")) || func_106("CHOP_H_WAIT_2_KM")) || func_106("CHOP_H_WAIT_3_KM")) || func_106("CHOP_H_WAIT_4_KM")) || func_106("CHOP_H_HOME_KM")) || func_106("CHOP_H_WALK_0_KM")) || func_106("CHOP_H_WALK_1_KM")) || func_106("CHOP_H_WALK_2_KM")) || func_106("CHOP_H_WALK_3_KM")) || func_106("CHOP_H_WALK_4_KM")) || func_106("CHOP_H_NO_AD_KM"))
			{
				unk_0x428C32CC68809A35(1);
			}
		}
	}
}

bool func_166()
{
	return Global_98822;
}

int func_167()
{
	if (unk_0x3555462DB47B7AB1())
	{
		return Global_99643;
	}
	if (func_147())
	{
		return Global_99643;
	}
	return 318;
}

int func_168(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_169(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_169(int iParam0)
{
	return func_170(iParam0, Global_44042);
}

int func_170(int iParam0, int iParam1)
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

bool func_171(int iParam0)
{
	func_172();
	return iParam0 == Global_113969.f_2366.f_539.f_4321;
}

void func_172()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_176(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_175(unk_0x4A8C381C258A124D());
			if (func_174(iVar0) && (!func_173(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_174(Global_113969.f_2366.f_539.f_4321))
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

bool func_173(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_174(int iParam0)
{
	return iParam0 < 3;
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_176(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_176(int iParam0)
{
	if (func_174(iParam0))
	{
		return func_177(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_177(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_178(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_96551[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96551[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_179(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xED977E2AE2CB16EE(Param0, Global_96551[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_179(int iParam0)
{
	return BitTest(Global_113969.f_7232[iParam0], 0);
}

int func_180(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_181()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1)
	{
	}
	else
	{
		Global_33095 = 0;
		func_148(0);
		if (unk_0xE37AC296E66C33AF() && !iLocal_384)
		{
			unk_0x3C44EF9027A21847(0);
		}
		func_68(&uLocal_68);
		if (func_180(63))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (func_180(126))
				{
					if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 19,3f, 528,24f, 169,63f, 1) > 50f)
					{
						func_62(139, 1, 0);
					}
				}
				else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -11,15f, -1425,56f, 29,67f, 1) > 50f)
				{
					func_62(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&uLocal_344, 0);
		func_42(&iLocal_347, 0);
		if (unk_0x9CFFB7009B578840(uLocal_75))
		{
			unk_0x182120534CCF9023(uLocal_75, 0);
		}
		unk_0xAE427DA16687F323();
		if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_ball"), 0))
		{
			unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("weapon_ball"));
		}
		if (func_126(unk_0x4A8C381C258A124D()) && !func_173(0))
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_67))
		{
			if (func_190())
			{
				func_189(&iLocal_67);
			}
			else
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0) && func_126(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x133460AD0F183CC9(iLocal_67))
					{
						unk_0x5C4B3034CCDA5270(iLocal_67);
					}
					if (unk_0x5266F1D2AEF6F73A(uLocal_85) || unk_0x7F420695E3F776FB(iLocal_67, 0))
					{
						if (func_126(iLocal_76))
						{
							bVar0 = false;
							while (!bVar0)
							{
								system::wait(0);
								if (!func_188() || func_185(iLocal_76, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_188())
							{
								if (!unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
								{
									unk_0xBFE60A5CC0C835D8(iLocal_76, iLocal_92, 0, 0);
								}
								unk_0x80813AC549A1E8AE(sLocal_369);
								while (!unk_0xE100DD4F82A51BDE(sLocal_369))
								{
									system::wait(0);
								}
							}
							if (func_188())
							{
								uLocal_85 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x2DCB8CA1FE6895AB(uLocal_85, iLocal_76, unk_0x365DC1E8054AF31A(iLocal_76, "seat_pside_f"));
								unk_0x19626F992DC71FB9(iLocal_67);
								unk_0x3DA436E63AB0F541(iLocal_67, uLocal_85, sLocal_369, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
								bVar1 = false;
								while (!bVar1)
								{
									system::wait(0);
									if (!func_188() || (unk_0x5266F1D2AEF6F73A(uLocal_85) && unk_0xBD3B265153D3BA2D(uLocal_85) > 0,99f))
									{
										bVar1 = true;
									}
								}
								system::wait(0);
								if (func_188() && !unk_0xAD830DCD82C63F31(iLocal_76, iLocal_92))
								{
									unk_0x6515021478088FBC(iLocal_76, iLocal_92, 0);
								}
							}
						}
						else if (func_184() == 1)
						{
							if (iLocal_49 == 2 || iLocal_49 == 15)
							{
								unk_0x19626F992DC71FB9(iLocal_67);
								func_125(iLocal_67, unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 1,75f, 0f, 0f), unk_0xCFC0C995455A6204(iLocal_67), 1, 1);
								unk_0xD8ED11B32DF72E0B(iLocal_67, 0, 0);
							}
						}
					}
					if (func_126(iLocal_67))
					{
						unk_0x44FB298D6382876D(iLocal_67, 1);
						unk_0xD844F5E50DAB6FF7(iLocal_67, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
					}
				}
				func_183(&iLocal_67, 1, 0, 1);
			}
		}
		func_57();
		func_56(&iLocal_76);
		func_99(0);
		unk_0x268BE77F77533D03("creatures@rottweiler@move");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0x268BE77F77533D03("creatures@rottweiler@in_vehicle@4x4");
		unk_0x268BE77F77533D03("creatures@rottweiler@in_vehicle@low_car");
		unk_0x268BE77F77533D03("creatures@rottweiler@in_vehicle@std_car");
		unk_0x268BE77F77533D03("creatures@rottweiler@in_vehicle@van");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0x268BE77F77533D03("creatures@rottweiler@tricks@");
		unk_0x268BE77F77533D03("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0x268BE77F77533D03("creatures@rottweiler@indication@");
		unk_0x268BE77F77533D03("misschop_vehicleenter_exit");
		unk_0x268BE77F77533D03("creatures@rottweiler@melee@streamed_taunts@");
		func_182(&uLocal_146, 1);
		func_182(&uLocal_146, 3);
		func_165();
		unk_0x3AA8CFEBC938A945(0);
		if (iLocal_80 > -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_80);
		}
		if (iLocal_81 > -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_81);
		}
		if (iLocal_70 == 1)
		{
			unk_0x2B1BDC32466B40A9(iLocal_69);
		}
		unk_0x8E4825CCACA34B58(uLocal_382);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_182(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_184()
{
	func_172();
	return Global_113969.f_2366.f_539.f_4321;
}

int func_185(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_187(bParam5, bParam6);
	func_186(uParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(uParam0, iParam1, iParam2, iParam4);
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

void func_186(int iParam0)
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

void func_187(bool bParam0, bool bParam1)
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

int func_188()
{
	if ((func_126(unk_0x4A8C381C258A124D()) && func_126(iLocal_76)) && func_126(iLocal_67))
	{
		return 1;
	}
	return 0;
}

void func_189(var uParam0)
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

int func_190()
{
	if (unk_0x3555462DB47B7AB1() && func_126(iLocal_67))
	{
		if (unk_0x5266F1D2AEF6F73A(uLocal_85) || unk_0x7F420695E3F776FB(iLocal_67, 0))
		{
			return 1;
		}
	}
	if (Global_33096 == 1)
	{
		return 1;
	}
	if (Global_33097 == 1)
	{
		Global_33097 = 0;
		return 1;
	}
	if (func_126(iLocal_67))
	{
		if (iLocal_49 == 11 && unk_0xF6C26AE940C14749(iLocal_67))
		{
			return 1;
		}
		if (func_191(unk_0xD1A6A821F5AC81DB(iLocal_67, 0), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_168(0))
	{
		return 0;
	}
	if (func_173(6) || func_173(2))
	{
		return 0;
	}
	return 1;
}

int func_191(struct<3> Param0, float fParam1, int iParam2)
{
	if (unk_0x7B780C491DEC834E(Param0, fParam1))
	{
		if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param0, iParam2, iParam2, iParam2, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x15CCE8886267624F())
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

