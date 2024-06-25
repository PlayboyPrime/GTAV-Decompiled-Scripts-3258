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
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	struct<15> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
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
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
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
	int iLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330[4] = { 0, 0, 0, 0 };
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_336 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_337 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	struct<4> Local_344[32];
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	int iLocal_347 = 0;
	char* sLocal_348 = NULL;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	struct<21> Local_353 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_59 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	iLocal_108 = 1;
	bLocal_110 = true;
	bLocal_112 = true;
	iLocal_117 = -1;
	bLocal_295 = true;
	bLocal_296 = true;
	iLocal_299 = -1;
	iLocal_300 = -1;
	iLocal_324 = -1;
	iLocal_327 = -1;
	if (!func_566(ScriptParam_353))
	{
		func_562();
	}
	iLocal_335[0] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-891,3f, 807,9f, 188,1f));
	iLocal_335[1] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-276,5f, -206,3f, 38,4f));
	iLocal_335[2] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1485,5f, -644,5f, 30,1f));
	iLocal_335[3] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1746,3f, -939,5f, 7,7f));
	iLocal_335[4] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-2106,4f, -345,3f, 13f));
	iLocal_335[5] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1520f, 74,4f, 61,3f));
	iLocal_335[6] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1333f, -286f, 40,3f));
	iLocal_335[7] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1178,1f, 54,8f, 53,9f));
	iLocal_335[8] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1298,7f, -359,4f, 36,7f));
	iLocal_335[9] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-355,2f, 147,5f, 75,8f));
	iLocal_335[10] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-982,1f, -1064,7f, 2,2f));
	iLocal_335[11] = unk_0xC6B8DAA3EC313D8F(unk_0x3348018F21E261AF(-1313,1f, -1560,2f, 4,3f));
	while (true)
	{
		func_561();
		bLocal_93 = false;
		bLocal_95 = false;
		bLocal_98 = false;
		bLocal_101 = false;
		bLocal_103 = false;
		Global_2738934.f_1802 = 0;
		if (func_554() || func_553())
		{
			func_562();
		}
		if (func_545())
		{
			if (!func_544())
			{
				if (!func_543())
				{
					if (func_541())
					{
						if (!iLocal_91)
						{
							func_537();
							func_536(&Local_336, 5);
							func_535();
							bLocal_112 = true;
							bLocal_113 = true;
							if (BitTest(uLocal_345, 1))
							{
								unk_0x8744D2E3FC95740E(&uLocal_345, true);
							}
							iLocal_91 = 1;
							iLocal_327 = -999;
						}
					}
				}
			}
			else if (!func_543())
			{
				if (!bLocal_113)
				{
					if (!func_534(&uLocal_290))
					{
						func_533(&uLocal_290, 0, 0);
					}
					else if (func_532(&uLocal_290, 100, 0))
					{
						if (!BitTest(uLocal_345, 1))
						{
							if (func_541())
							{
								func_522(&Local_336, 5, Global_2359296[func_531() /*5570*/].f_681.f_37);
								bLocal_112 = false;
								bLocal_113 = true;
								iLocal_91 = 1;
								iLocal_327 = -999;
							}
						}
					}
				}
			}
			func_422();
			func_418();
			func_402();
			func_395();
			func_284();
			func_182();
		}
		func_178();
		func_143();
		func_77();
		func_74();
		if (!iLocal_115)
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 471,9266f, -1308,596f, 28,2359f) < 1000f)
			{
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0xE226F16D30AF5945(471,9266f, -1308,596f, 28,2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_115 = 1;
			}
		}
		if (unk_0x93E08E0F531E2C35())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_110)
	{
	}
	else
	{
		if (iLocal_111 >= 32)
		{
			iLocal_111 = 0;
			unk_0x8744D2E3FC95740E(&uLocal_345, 10);
			unk_0x8744D2E3FC95740E(&(Local_337.f_23), 7);
			unk_0x8744D2E3FC95740E(&uLocal_345, 11);
			unk_0x8744D2E3FC95740E(&uLocal_345, 23);
			if (BitTest(Local_337.f_23, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), true);
				unk_0x8744D2E3FC95740E(&(Local_337.f_23), 3);
			}
		}
		iVar0 = iLocal_111;
		if (Local_344[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_337[iVar1] == -1)
				{
					if (!Local_337.f_6[iVar1])
					{
						if (Local_337[iVar1] == Local_344[iVar0 /*4*/])
						{
							if (Local_337[iVar1] == Local_337.f_28)
							{
								func_73();
							}
							Local_337.f_33 = 0;
							Local_337.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_337.f_23, 0))
		{
			if (!BitTest(Local_337.f_23, 7))
			{
				if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
				{
					if (Local_344[iVar0 /*4*/].f_3 > 0 || func_72(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0)), 6))
					{
						if (Local_344[iVar0 /*4*/].f_3 < 3)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_337.f_23, 0))
		{
			if (!BitTest(uLocal_345, 11))
			{
				if (BitTest(Local_344[iVar0 /*4*/].f_2, 2))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 11);
				}
			}
			if (!BitTest(uLocal_345, 21))
			{
				if (!BitTest(uLocal_345, 3))
				{
					if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
					{
						if (BitTest(Local_344[iVar0 /*4*/].f_2, 3))
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 21);
						}
					}
				}
			}
		}
		iLocal_111++;
		if (iLocal_111 >= 32)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 10);
			if (BitTest(Local_337.f_23, 7) || BitTest(uLocal_345, 23))
			{
				unk_0x8744D2E3FC95740E(&(Local_337.f_23), true);
			}
			if (BitTest(uLocal_345, 11))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 3);
			}
			if (BitTest(uLocal_345, 21))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 6);
			}
		}
	}
	if (func_71())
	{
		if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_337.f_29) > 180000)
		{
			func_70();
		}
	}
	switch (Local_337.f_20)
	{
		case 0:
			func_67();
			Local_337.f_32++;
			Local_337.f_20 = 1;
			func_66();
			break;
		
		case 1:
			if (func_65())
			{
				uLocal_323 = unk_0x7E3F74F641EE6B27();
				Local_337.f_20 = 2;
			}
			else if (Local_337.f_28 == -1)
			{
				func_73();
			}
			break;
		
		case 2:
			if (!Local_337.f_17 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_323) > Global_262145.f_11934)
			{
				Local_337.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (Local_337.f_26)
	{
		case 0:
			if (!BitTest(Local_337.f_23, 0))
			{
				if (bLocal_295)
				{
					if (bLocal_296)
					{
						if (Global_2738934.f_1775)
						{
							unk_0x8744D2E3FC95740E(&(Local_337.f_23), 2);
							unk_0x8744D2E3FC95740E(&(Local_337.f_23), 6);
							unk_0x8744D2E3FC95740E(&uLocal_345, 21);
							unk_0x552B3BADB43FF551(0);
							Local_337.f_34 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), false);
							Global_2738934.f_1775 = 0;
						}
					}
					else if (Local_337.f_27 == -15)
					{
						unk_0x8744D2E3FC95740E(&(Local_337.f_23), 2);
						unk_0x8744D2E3FC95740E(&(Local_337.f_23), 6);
						unk_0x8744D2E3FC95740E(&uLocal_345, 21);
						unk_0x552B3BADB43FF551(0);
						Local_337.f_34 = 0;
						iVar2 = func_64();
						func_50(&(Local_337.f_27), func_63(iVar2), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_57(iVar2));
						func_49(&(Local_337.f_27), 0, unk_0xC5935DFB3F39785A(0, 60), unk_0xC5935DFB3F39785A(0, 8), 1, 0, 0);
					}
					else if (!func_48(6))
					{
						if (!func_534(&uLocal_312))
						{
							func_533(&uLocal_312, 0, 0);
						}
						else if (func_532(&uLocal_312, 10000, 0))
						{
							func_47(&uLocal_312);
							if (func_43(Local_337.f_27))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), false);
							}
						}
					}
				}
			}
			else if (Local_337.f_67 == 0)
			{
				if (func_37(1, 1, 1))
				{
					if (unk_0x8256312AC2E5471D(Local_337.f_24))
					{
						unk_0x0C2A05549FF0EB55(Local_337.f_24);
					}
					Local_337.f_24 = -1;
					iLocal_298 = unk_0xC5935DFB3F39785A(0, 10);
					iVar3 = func_34();
					if (iVar3 != 0)
					{
						Local_337.f_67 = iVar3;
						unk_0x552B3BADB43FF551(1);
						Local_337.f_34 = 1;
					}
				}
			}
			else if (unk_0x2E9F58AD6FE93DFF(1))
			{
				if (!unk_0x2FC2FDC413532977(Local_337.f_22))
				{
					if (func_23(&Var0, &uVar1))
					{
						if (func_22(Local_337.f_67))
						{
							if (func_19(&(Local_337.f_22), Local_337.f_67, Var0, uVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
								{
									if (unk_0xD130E7CDEE903624(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset"))
									{
										iVar4 = unk_0xE2F6FE9B61232165(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset");
									}
									unk_0x0B0C9A0F9AAEB7F0(&iVar4, 5);
									unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset", iVar4);
								}
								if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
								{
									if (unk_0xD130E7CDEE903624(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset"))
									{
										iVar5 = unk_0xE2F6FE9B61232165(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset");
									}
									unk_0x0B0C9A0F9AAEB7F0(&iVar5, 10);
									unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_337.f_22), "MPBitset", iVar5);
								}
								if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_337.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), false);
								unk_0x8744D2E3FC95740E(&(Local_337.f_23), 2);
								unk_0x8744D2E3FC95740E(&(Local_337.f_23), 4);
								unk_0x8744D2E3FC95740E(&(Local_337.f_23), 3);
								unk_0x8744D2E3FC95740E(&uLocal_345, 11);
								unk_0x8744D2E3FC95740E(&(Local_337.f_23), 6);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 23);
								unk_0x55098D9E9AD58806(Local_337.f_67);
								Local_337.f_26 = 1;
								func_47(&(Local_337.f_30));
								func_533(&(Local_337.f_30), 0, 0);
								unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_337.f_22), 7);
								unk_0x2165BE2A3E719A31(unk_0xE38610F405049F71(Local_337.f_22), 1);
								unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 1);
								unk_0xD8347AAB0A3EF3A0(Local_337.f_22, 1);
							}
							else
							{
								unk_0x55098D9E9AD58806(Local_337.f_67);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(Local_337.f_23, 2))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
				{
					if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_337.f_22), 0))
					{
						Local_90.f_3 = -1117941225;
						func_17(Local_90, func_18(1));
						unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_345, 3) || (BitTest(uLocal_345, 10) && BitTest(Local_337.f_23, 1)))
			{
				if (!BitTest(uLocal_345, 3))
				{
					if (!BitTest(Local_337.f_23, 2))
					{
						if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
						{
							if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_337.f_22), 0))
							{
								Local_90.f_3 = -1117941225;
								func_17(Local_90, func_18(1));
								unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 2);
							}
						}
					}
				}
				Local_337.f_26 = 2;
			}
			if (func_16(unk_0xE38610F405049F71(Local_337.f_22)))
			{
				Local_337.f_26 = 2;
				Local_90.f_3 = -267741801;
				func_17(Local_90, func_18(1));
			}
			if (!BitTest(Local_337.f_23, 4))
			{
				if (func_532(&(Local_337.f_30), 360000, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 4);
					func_47(&(Local_337.f_30));
					func_533(&(Local_337.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_345, 10))
			{
				if (!BitTest(Local_337.f_23, 3))
				{
					if (func_534(&(Local_337.f_30)))
					{
						if (func_532(&(Local_337.f_30), 120000, 0))
						{
							Local_337.f_26 = 2;
							Local_90.f_3 = -267741801;
							func_17(Local_90, func_18(1));
						}
					}
					else
					{
						func_533(&(Local_337.f_30), 0, 0);
					}
				}
				else if (func_534(&(Local_337.f_30)))
				{
					func_47(&(Local_337.f_30));
				}
			}
			if (BitTest(Local_337.f_23, 6))
			{
				if (!BitTest(uLocal_345, 3))
				{
					if (Local_337.f_26 == 1)
					{
						Local_337.f_26 = 2;
					}
				}
			}
			if (func_12(6))
			{
				if (Local_337.f_26 == 1)
				{
					Local_337.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
			{
				if (func_11(Local_337.f_22))
				{
					func_10(&(Local_337.f_22));
					Local_337.f_26 = 3;
				}
			}
			else
			{
				Local_337.f_26 = 3;
			}
			break;
		
		case 3:
			if (BitTest(uLocal_345, 10))
			{
				if (BitTest(Local_337.f_23, 1))
				{
					Local_337.f_26 = 0;
					unk_0x8744D2E3FC95740E(&(Local_337.f_23), false);
					Local_337.f_27 = -15;
					if (Local_337.f_67 != 0)
					{
						unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 0);
					}
					Local_337.f_67 = 0;
					if (bLocal_296)
					{
						func_7(func_8(unk_0xF1A4B8228C5E44B7("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0x93E08E0F531E2C35())
	{
		switch (Local_337.f_69)
		{
			case 0:
				if (BitTest(Local_337.f_23, 8))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
					{
						if (!func_6())
						{
							if (unk_0x8473361800D1B85B(unk_0xE38610F405049F71(Local_337.f_22)))
							{
								if (!unk_0x5105BE70DEF1F5FB(unk_0xE38610F405049F71(Local_337.f_22), 1204,053f, -3102,311f, 1,770506f, 1204,265f, -3121,974f, 17,92032f, 31,625f, 0, 1, 0))
								{
									if (!BitTest(Local_337.f_23, 9))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_337.f_23, 9))
						{
							unk_0x8744D2E3FC95740E(&(Local_337.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_337.f_23, 9))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
		{
			if (func_4(Local_337.f_22))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_337.f_22))
				{
					unk_0x44C48AC14D3C09ED(unk_0xE38610F405049F71(Local_337.f_22), true, 0);
					unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_337.f_22), 1);
					unk_0x5D7CD709B34C90F0(unk_0xE38610F405049F71(Local_337.f_22), false);
					unk_0x6EF982A39E8D08FA(unk_0xE38610F405049F71(Local_337.f_22), 1, 1);
					unk_0x8744D2E3FC95740E(&(Local_337.f_23), 9);
				}
				else
				{
					unk_0x460D2A8B2C7DC7D4(Local_337.f_22);
				}
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Local_337.f_23), 9);
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Local_337.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_5(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
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

int func_6()
{
	int iVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_337.f_22), -1, 0);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_0 = -390379542;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iParam0, Var0.f_0);
	}
}

int func_8(bool bParam0)
{
	var uVar0;
	
	if (func_9(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

void func_10(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

int func_11(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

bool func_12(int iParam0)
{
	return !func_13(iParam0);
}

int func_13(int iParam0)
{
	switch (iParam0)
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
			if (Global_262145.f_7192)
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7193)
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7194)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7195)
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_14(4))
			{
				return 0;
			}
			if (func_72(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_14(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_15(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
		{
			if (BitTest(Global_2657971[iVar0 /*465*/].f_219, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x77B62CAA5DF0922A("bombdec1", 3))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x77B62CAA5DF0922A("bombdec", 3))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x77B62CAA5DF0922A("bombowner", 3))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_17(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_18(int iParam0)
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
			if (func_15(bVar2, 0, 0))
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

int func_19(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_20(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_20(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_21(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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

int func_21(int iParam0, struct<3> Param1, int iParam2)
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

int func_22(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_23(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!func_33(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_298)
	{
		case 0:
			Var0 = { -810,8889f, -126,9419f, 33f };
			Var1 = { -807,2521f, -116,098f, 38f };
			Var2 = { -809,0935f, -121,9038f, 36,504f };
			fVar3 = 240,8011f;
			break;
		
		case 1:
			Var0 = { -804,004f, -1317,293f, 0,0005f };
			Var1 = { -797,881f, -1310,998f, 7,0005f };
			Var2 = { -801,6295f, -1313,865f, 4,0005f };
			fVar3 = 350,3062f;
			break;
		
		case 2:
			Var0 = { -194,8607f, -1955,005f, 25,6205f };
			Var1 = { -189,4078f, -1945,248f, 28,6205f };
			Var2 = { -191,5592f, -1950,239f, 26,6205f };
			fVar3 = 288,8187f;
			break;
		
		case 3:
			Var0 = { -2966,875f, 459,3981f, 13,4644f };
			Var1 = { -2961,456f, 466,0484f, 16,1725f };
			Var2 = { -2963,887f, 462,7986f, 14,2156f };
			fVar3 = 30,4415f;
			break;
		
		case 4:
			Var0 = { -420,6335f, 1217,742f, 322,7591f };
			Var1 = { -411,9892f, 1220,346f, 326,6421f };
			Var2 = { -416,0102f, 1219,771f, 324,6421f };
			fVar3 = 230,4509f;
			break;
		
		case 5:
			Var0 = { -1634,708f, -890,849f, 6,97f };
			Var1 = { -1633,903f, -879,869f, 9,1264f };
			Var2 = { -1634,006f, -885,3531f, 8,0518f };
			fVar3 = 321,31f;
			break;
		
		case 6:
			Var0 = { -338,4312f, -947,4233f, 28,0788f };
			Var1 = { -331,5926f, -944,408f, 32,0788f };
			Var2 = { -334,8547f, -945,2789f, 30,0788f };
			fVar3 = 69,0442f;
			break;
		
		case 7:
			Var0 = { 1093,925f, 245,6548f, 77,9908f };
			Var1 = { 1094,243f, 255,0715f, 82,8556f };
			Var2 = { 1093,686f, 250,4772f, 79,8556f };
			fVar3 = 328,5602f;
			break;
		
		case 8:
			Var0 = { -1407,823f, 58,1796f, 50,8018f };
			Var1 = { -1400,19f, 63,9074f, 54,3222f };
			Var2 = { -1404,459f, 62,1459f, 52,0258f };
			fVar3 = 241,2814f;
			break;
		
		case 9:
			Var0 = { -1230,324f, -1656,814f, 2,0412f };
			Var1 = { -1226,429f, -1648,143f, 4,1986f };
			Var2 = { -1228,901f, -1652,397f, 3,1204f };
			fVar3 = 305,0972f;
			break;
	}
	if (!func_33(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_298 < 10)
		{
			if (Local_337.f_24 == -1)
			{
				Local_337.f_24 = unk_0x132F0517E3CE528A(Var0, Var1);
			}
			else if (unk_0x8256312AC2E5471D(Local_337.f_24))
			{
				if (unk_0x31B34E18DE46CC94(Local_337.f_24))
				{
					if (!unk_0xF8EEEE15D7483100(Local_337.f_24))
					{
						if (!func_24(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							unk_0x0C2A05549FF0EB55(Local_337.f_24);
							Local_337.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_298++;
							unk_0x0C2A05549FF0EB55(Local_337.f_24);
							Local_337.f_24 = -1;
						}
					}
					else
					{
						iLocal_298++;
						unk_0x0C2A05549FF0EB55(Local_337.f_24);
						Local_337.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_298 = 0;
		}
	}
	return 0;
}

int func_24(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_15(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_29(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_15(iVar1, 1, 1))
		{
			if (!func_26(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_25(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
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
								if (unk_0xED977E2AE2CB16EE(func_29(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_29(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_25(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_26(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()
{
	return Global_1574926;
}

Vector3 func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_32() && Global_1845281[iVar0 /*883*/].f_860) && !func_31(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_30(iParam0);
}

Vector3 func_30(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_31(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_32()
{
	return Global_2684504.f_19;
}

bool func_33(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2330 != 0)
	{
		iVar1 = Global_262145.f_2330;
		if (unk_0xE7D342E0F16AAA8F(iVar1))
		{
			if (unk_0xAD1840C2E6AF7D5E(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_36(&Local_337);
		iVar0 = func_35(iVar2);
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_37(int iParam0, bool bParam1, bool bParam2)
{
	return func_38(1, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
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

int func_40(int iParam0)
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

int func_41(int iParam0, bool bParam1)
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

int func_42(int iParam0)
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

bool func_43(int iParam0)
{
	return func_44(func_64(), iParam0);
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_45(iParam1) || !func_45(iParam0))
	{
		return 1;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	iVar1 = func_63(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
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
	iVar0 = func_63(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_62(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_61(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_57(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_59(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_60(iParam0);
	if (iVar5 < 1 || iVar5 > func_46(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1)
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

void func_47(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_48(int iParam0)
{
	return !func_13(iParam0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_59(*uParam0);
	iVar2 = func_60(*uParam0);
	iVar3 = func_61(*uParam0);
	iVar4 = func_62(*uParam0);
	iVar5 = func_63(*uParam0);
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
	iVar6 = func_46(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_46(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_50(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_50(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam1);
	func_55(uParam0, iParam2);
	func_54(uParam0, iParam3);
	func_53(uParam0, iParam5);
	func_52(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_51(var uParam0, int iParam1)
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

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_59(*uParam0);
	iVar1 = func_57(*uParam0);
	if (iParam1 < 1 || iParam1 > func_46(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_57(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_58(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_58(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_59(int iParam0)
{
	return iParam0 & 15;
}

int func_60(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_61(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_62(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_63(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_64()
{
	var uVar0;
	
	func_56(&uVar0, unk_0x4BA5A16068183C5E());
	func_55(&uVar0, unk_0x18E502A71E28968C());
	func_54(&uVar0, unk_0x5295501D0862870D());
	func_52(&uVar0, unk_0xB12880C92EA6EE15());
	func_53(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_51(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_337.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_66()
{
	int iVar0;
	
	if (!BitTest(Local_337.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_337.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 5);
	}
}

void func_67()
{
	int iVar0;
	
	func_536(&Local_337, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_337.f_12[iVar0] = func_68();
		iVar0++;
	}
	Local_337.f_33 = 1;
}

int func_68()
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	while (func_69(iVar0))
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	}
	return iVar0;
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_337.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_70()
{
	int iVar0;
	
	iVar0 = func_36(&Local_337);
	if (iVar0 != Local_337.f_28)
	{
		Local_337.f_28 = iVar0;
		Local_337.f_29 = unk_0x7E3F74F641EE6B27();
	}
}

int func_71()
{
	if (Local_337.f_20 > 0)
	{
		if (Local_337[0] != Local_337[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_72(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

void func_73()
{
	Local_337.f_29 = 0;
}

void func_74()
{
	int iVar0;
	
	if (func_71())
	{
		if (Global_2738934.f_4503 == 0 || BitTest(Global_2738934.f_4504, 0))
		{
			if (!func_534(&uLocal_318) || func_532(&uLocal_318, 2000, 0))
			{
				iVar0 = func_36(&Local_336);
				if (iVar0 > -1)
				{
					Global_2738934.f_4503 = func_35(iVar0);
					func_47(&uLocal_316);
					func_533(&uLocal_316, 0, 0);
					if (BitTest(Global_2738934.f_4504, 0))
					{
						unk_0x8744D2E3FC95740E(&(Global_2738934.f_4504), false);
					}
				}
				else
				{
					func_47(&uLocal_318);
					func_533(&uLocal_318, 0, 0);
				}
			}
		}
		else if (Global_2738934.f_4503 != 0)
		{
			if (func_532(&uLocal_316, 20000, 0))
			{
				if (!func_75(&Local_336, Global_2738934.f_4503))
				{
					Global_2738934.f_4503 = 0;
				}
				func_47(&uLocal_316);
				func_533(&uLocal_316, 0, 0);
			}
		}
	}
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_76(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_77()
{
	int iVar0;
	
	if (((((bLocal_97 || bLocal_98) || bLocal_99) || bLocal_101) || bLocal_100) || bLocal_102)
	{
		if (((((Global_2738934.f_28.f_41 || func_140(unk_0x259BE71D8A81D4FA(), 1, 0)) || func_139(unk_0x259BE71D8A81D4FA())) || !func_137()) || func_125()) || func_120())
		{
			bLocal_97 = false;
			bLocal_99 = false;
			bLocal_98 = false;
			bLocal_101 = false;
			bLocal_100 = false;
			func_119();
		}
	}
	if ((func_118("FM_CTUT_RSP") || func_118("FM_CTUT_REP")) || func_118("FM_CTUT_LLS"))
	{
		if (!func_117() || func_120())
		{
			func_119();
		}
	}
	if (bLocal_102)
	{
		if (!func_118("FM_IHELP_LCP"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (func_100())
				{
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
					{
						if (func_99())
						{
							func_93("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_IHELP_LCP"))
		{
			func_86("FM_IHELP_LCP");
		}
	}
	if (bLocal_97)
	{
		if (!func_118("FM_CTUT_MOD"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (func_100())
				{
					if (BitTest(uLocal_322, 2))
					{
						if (func_99())
						{
							func_93("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_CTUT_MOD"))
		{
			func_86("FM_CTUT_MOD");
		}
	}
	if (bLocal_99)
	{
		if (!func_118("FM_CTUT_RSP"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (unk_0x9390801B06EE998F())
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (!func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
						{
							if (func_99())
							{
								if (func_117())
								{
									func_93("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_CTUT_RSP"))
		{
			func_86("FM_CTUT_RSP");
		}
	}
	if (bLocal_100)
	{
		if (!func_118("FM_CTUT_RSP"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (unk_0x9390801B06EE998F())
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (!func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
						{
							if (func_99())
							{
								if (func_117())
								{
									func_93("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_CTUT_REP"))
		{
			func_86("FM_CTUT_REP");
		}
	}
	if (bLocal_101)
	{
		if (!func_118("FM_CTUT_LLS"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (func_100() || func_78())
				{
					if (func_99())
					{
						if (func_117())
						{
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_CTUT_LLS"))
		{
			func_86("FM_CTUT_LLS");
		}
	}
	if (bLocal_98)
	{
		if (!func_118("FM_IMP_SIM"))
		{
			if (!unk_0xFBA523E6F8ACE541())
			{
				if (func_100() || func_78())
				{
					if (BitTest(uLocal_322, 3))
					{
						if (!iLocal_104)
						{
							if (func_99())
							{
								func_93("FM_IMP_SIM", 0);
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									{
										iLocal_333 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									}
								}
							}
						}
						else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								if (iVar0 != iLocal_333)
								{
									iLocal_104 = 0;
									func_47(&uLocal_320);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_534(&uLocal_320))
		{
			func_533(&uLocal_320, 0, 0);
		}
		else if (func_532(&uLocal_320, 20000, 0))
		{
			func_119();
			iLocal_104 = 1;
		}
	}
	else if (!BitTest(uLocal_345, 18))
	{
		if (func_118("FM_IMP_SIM"))
		{
			func_86("FM_IMP_SIM");
		}
	}
}

bool func_78()
{
	return (((((func_79(39) || func_79(40)) || func_79(41)) || func_79(42)) || func_79(43)) || func_79(44));
}

int func_79(int iParam0)
{
	return func_80(iParam0, 6, 1);
}

int func_80(int iParam0, int iParam1, bool bParam2)
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
		if (func_85() == 0)
		{
			return BitTest(func_81(func_84(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_82(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_82(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_83(uParam1));
}

int func_83(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

int func_84(int iParam0)
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

int func_85()
{
	return Global_32948;
}

void func_86(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_92())
	{
		if (Global_1574765 == 11)
		{
			if (unk_0x31A0D8A679F7D5A7(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
		}
		else
		{
			if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_87();
}

void func_87()
{
	func_89();
	func_88(0);
}

void func_88(bool bParam0)
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

void func_89()
{
	if (!func_91())
	{
	}
	if (func_92())
	{
		unk_0x7C59282918D59E1B(&(Global_1574765.f_12));
		func_90();
		unk_0xD4C961FBE468D19D();
	}
}

void func_90()
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

int func_91()
{
	if (!func_92())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574765.f_12));
	func_90();
	return unk_0x96DEE7666C9409E5();
}

int func_92()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

void func_93(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_97(sParam0))
	{
		return;
	}
	func_87();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574765.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_96();
	func_95(bParam1);
	func_94();
}

void func_94()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), true);
}

void func_95(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574765.f_59), false);
}

void func_96()
{
	Global_1574765.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
}

bool func_97(char* sParam0)
{
	if (!func_92())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_98(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12));
}

bool func_98(char* sParam0)
{
	if (!func_92())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
}

bool func_99()
{
	bool bVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_346, 0))
	{
		if (!BitTest(uLocal_346, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_346, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_346, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, false);
		}
	}
	return bVar0;
}

int func_100()
{
	if ((((((((((((((((((!func_15(unk_0x259BE71D8A81D4FA(), 1, 1) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || func_116(8, -1)) || func_116(15, -1)) || func_115()) || func_116(3, -1)) || func_140(unk_0x259BE71D8A81D4FA(), 1, 0)) || func_114()) || func_117()) || func_113()) || func_112()) || func_110()) || func_109()) || unk_0xFBA523E6F8ACE541()) || func_108() > 0) || !func_137()) || func_101()) || func_120())
	{
		return 0;
	}
	return 1;
}

int func_101()
{
	if (func_72(unk_0x259BE71D8A81D4FA(), 8))
	{
		return 1;
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 10))
	{
		return 1;
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 12))
	{
		return 1;
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 14))
	{
		return 1;
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 13))
	{
		return 1;
	}
	if (func_107())
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	if (!func_105() && !func_104())
	{
		if (!func_103())
		{
			if (!func_102())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (BitTest(Global_2738934.f_1846, 7))
	{
		return 1;
	}
	iVar0 = func_81(1304, -1);
	if (BitTest(iVar0, 6))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1846), 7);
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 2);
}

bool func_104()
{
	return Global_1575071;
}

bool func_105()
{
	return Global_1575073;
}

int func_106()
{
	if (BitTest(Global_2738934.f_1846, 28) && !BitTest(Global_2738934.f_1846, 29))
	{
		return 1;
	}
	return 0;
}

bool func_107()
{
	return BitTest(Global_2738934.f_1847, 3);
}

int func_108()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_194;
}

int func_109()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return func_111();
}

bool func_111()
{
	return Global_1663588.f_40 == 3;
}

bool func_112()
{
	return Global_2672855.f_2881.f_582;
}

bool func_113()
{
	return Global_101585.f_394 > 0;
}

bool func_114()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

var func_115()
{
	return Global_2625288;
}

bool func_116(int iParam0, int iParam1)
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

bool func_117()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_118(char* sParam0)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (!func_92())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		if (unk_0x31A0D8A679F7D5A7(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return 0;
	}
	return func_97(sParam0);
}

void func_119()
{
	if (!func_92())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574765.f_9)
	{
		return;
	}
	func_87();
}

int func_120()
{
	if (func_124(unk_0x259BE71D8A81D4FA(), 1))
	{
		return 1;
	}
	if (func_121(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_123())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_122(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
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

int func_123()
{
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	if (func_129())
	{
		return 1;
	}
	if (func_126(unk_0x259BE71D8A81D4FA(), 1))
	{
		return 1;
	}
	if (func_124(unk_0x259BE71D8A81D4FA(), 1))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 && func_127(Global_1887305[iParam0 /*610*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1)
	{
		if (func_127(Global_1887305[iParam0 /*610*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
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
	return func_128(iParam0, 0);
	return 0;
}

int func_128(int iParam0, int iParam1)
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

int func_129()
{
	if (!func_136(unk_0x259BE71D8A81D4FA()))
	{
		if (func_132(unk_0x259BE71D8A81D4FA()) || func_131(unk_0x259BE71D8A81D4FA()) != -1)
		{
			return 1;
		}
		if (func_130(unk_0x259BE71D8A81D4FA()) && Global_1836959.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

var func_130(int iParam0)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_1, 4);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

int func_132(int iParam0)
{
	if (func_135(iParam0))
	{
		return 1;
	}
	if (func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_134(iParam0, 9);
	}
	return 0;
}

var func_134(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

bool func_136(int iParam0)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_1, 2);
}

int func_137()
{
	if (func_138() == 0)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	return Global_1574633.f_18;
}

int func_139(int iParam0)
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2);
}

int func_140(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_141(iParam0))
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

bool func_141(int iParam0)
{
	return func_142(iParam0);
}

var func_142(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

void func_143()
{
	if (bLocal_95)
	{
		if (!unk_0xC450B06E5AAA0985(Global_1928400))
		{
			Global_1928400 = unk_0x34864AB7DA700AA6(Global_1928401);
			unk_0x4C905FB262965D5D(Global_1928400, 293);
			unk_0x5D3946F818C6B331(Global_1928400, 1f);
			unk_0x360B279488A775FC(Global_1928400, 0);
			unk_0x594D5D0D7071B0DE(Global_1928400, "IMPEX_BLIP_FM");
			if (func_177())
			{
				unk_0x861AC9C2D48CEA7F(Global_1928400, 1);
			}
		}
	}
	else if (unk_0xC450B06E5AAA0985(Global_1928400))
	{
		unk_0xFE54B8568B2ABD12(&Global_1928400);
		if (bLocal_294)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!func_172(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), 1215605247, &uLocal_325, 0, 500, 1, 0))
					{
						if (func_120())
						{
							func_171("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_96)
	{
		if (iLocal_117 == -1)
		{
			iLocal_117 = func_150(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4, -1);
			if (iLocal_117 != -1)
			{
				func_144(iLocal_117, 1);
			}
		}
	}
	else if (iLocal_117 != -1)
	{
		func_144(iLocal_117, 0);
		iLocal_117 = -1;
	}
}

void func_144(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_145(39, bParam1);
			break;
		
		case 40:
			func_145(40, bParam1);
			break;
		
		case 41:
			func_145(41, bParam1);
			break;
		
		case 42:
			func_145(42, bParam1);
			break;
		
		case 43:
			func_145(43, bParam1);
			break;
		
		case 44:
			func_145(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_80(iParam0, 8, 0))
		{
			func_149(iParam0, 8, 0);
			func_148(iParam0);
		}
	}
	else if (func_80(iParam0, 8, 0))
	{
		func_146(iParam0, 8, 0);
		func_148(iParam0);
	}
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_85() == 0)
		{
			uVar0 = func_81(func_84(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_147(func_84(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_82(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

void func_148(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_149(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_85() == 0)
		{
			uVar0 = func_81(func_84(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam1);
			func_147(func_84(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

int func_150(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam1 == 6 || iParam1 == func_170(iVar0))
		{
			iVar4 = iVar0;
			if (func_169(iVar4))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_151(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_166(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_123())
			{
				if (func_165(Global_1845111))
				{
					return func_158(2, 2);
				}
				else if (func_157(Global_1845111))
				{
					return func_158(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_155(-9,9f, -0,5f, 1f);
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (func_154())
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_152();
			break;
		
		case 59:
			return 560f, -405f, -69,6591f;
			break;
		
		case 60:
			return -1299,691f, -3017,165f, -48,2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_152()
{
	if (!func_31(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_153())
	{
		case 0:
			return -29,532f, 6435,136f, 31,162f;
		
		case 1:
			return 1705,214f, 4819,167f, 41,75f;
		
		case 2:
			return 1795,522f, 3899,753f, 33,869f;
		
		case 3:
			return 1335,536f, 2758,746f, 51,099f;
		
		case 4:
			return 795,583f, 1210,78f, 338,962f;
		
		case 5:
			return -3192,67f, 1077,205f, 20,594f;
		
		case 6:
			return -789,719f, 5400,921f, 33,915f;
		
		case 7:
			return -24,384f, 3048,167f, 40,703f;
		
		case 8:
			return 2666,786f, 1469,324f, 24,237f;
		
		case 9:
			return -1454,966f, 2667,503f, 3,2f;
		
		case 10:
			return 2340,418f, 3054,188f, 47,888f;
		
		case 11:
			return 1509,183f, -2146,795f, 76,853f;
		
		case 12:
			return 1137,404f, -1358,654f, 34,322f;
		
		case 13:
			return -57,208f, -2658,793f, 5,737f;
		
		case 14:
			return 1905,017f, 565,222f, 175,558f;
		
		case 15:
			return 974,484f, -1718,798f, 30,296f;
		
		case 16:
			return 779,077f, -3266,297f, 5,719f;
		
		case 17:
			return -587,728f, -1637,208f, 19,611f;
		
		case 18:
			return 733,99f, -736,803f, 26,165f;
		
		case 19:
			return -1694,632f, -454,082f, 40,712f;
		
		case 20:
			return -1330,726f, -1163,948f, 4,313f;
		
		case 21:
			return -496,618f, 40,231f, 52,316f;
		
		case 22:
			return 275,527f, 66,509f, 94,108f;
		
		case 23:
			return 260,928f, -763,35f, 30,559f;
		
		case 24:
			return -478,025f, -741,45f, 30,299f;
		
		case 25:
			return 894,94f, 3603,911f, 32,56f;
		
		case 26:
			return -2166,511f, 4289,503f, 48,733f;
		
		case 27:
			return 1465,633f, 6553,67f, 13,771f;
		
		case 28:
			return 1101,032f, -335,172f, 66,944f;
		
		case 29:
			return 149,683f, -1655,674f, 29,028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_153()
{
	return Global_2652592.f_2671;
}

int func_154()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

Vector3 func_155(struct<3> Param0)
{
	return unk_0xF10F2A2453AF1DFB(func_156(), 0f, Param0);
}

Vector3 func_156()
{
	return -880f, -2770f, -50f;
}

int func_157(int iParam0)
{
	if (iParam0 != func_123())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_158(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_123())
	{
		if (iParam1 == 3)
		{
			if (func_159(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_159(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_159(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_159(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_164(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_164(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_162(iParam0) };
	}
	else
	{
		Var2 = { func_161(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_160(Var3, -Var0.f_3.f_2) };
	Var3 = { func_160(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_160(struct<3> Param0, float fParam1)
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

struct<6> func_161(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_162(int iParam0)
{
	return func_163(iParam0);
}

struct<6> func_163(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_164(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_165(int iParam0)
{
	if (iParam0 != func_123())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_166(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return func_156();
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_167() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_167()
{
	return func_168(unk_0x259BE71D8A81D4FA());
}

var func_168(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

bool func_169(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[39]);
			break;
		
		case 40:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[40]);
			break;
		
		case 41:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[41]);
			break;
		
		case 42:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[42]);
			break;
		
		case 43:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[43]);
			break;
		
		case 44:
			bVar0 = unk_0xC450B06E5AAA0985(Global_101585.f_267[44]);
			break;
	}
	return bVar0;
}

int func_170(int iParam0)
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

void func_171(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_172(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_534(uParam2))
	{
		func_533(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_173(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_534(uParam3))
	{
		func_533(uParam3, 0, 0);
	}
	func_176(&Var3, iParam1);
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (func_174(iParam0, iParam1, 30))
			{
				if (unk_0x0101C509A6E67F99(iParam0))
				{
					uVar0 = unk_0xBD545F8729E9F413(iParam0);
					if (!unk_0x4FAFF4BCB7633475(uVar0))
					{
						if (unk_0x501EBB0523078750(iVar0))
						{
							uVar2 = unk_0x1C1C92A1CBAE364B(iVar0);
							if (bParam2)
							{
								if (unk_0xA9BDD6C662512CA7(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x3DF64ECB2401B9C1(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x3DF64ECB2401B9C1(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0xA9BDD6C662512CA7(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x3DF64ECB2401B9C1(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x3DF64ECB2401B9C1(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x7F420695E3F776FB(iVar0, 0))
						{
							uVar1 = unk_0x6EF03BE64E058E2F(iVar0, 0);
							if (unk_0xFC8BFE4B41177C22(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x659143E4AE5A351B(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0x805A7BBF801B49D0(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x659143E4AE5A351B(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0x805A7BBF801B49D0(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x659143E4AE5A351B(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0x805A7BBF801B49D0(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x659143E4AE5A351B(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x805A7BBF801B49D0(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x55B80B6E7AB61270(iParam0) || unk_0xBE79A96C521F4432(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x659143E4AE5A351B(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0x805A7BBF801B49D0(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x659143E4AE5A351B(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0x805A7BBF801B49D0(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0x805A7BBF801B49D0(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_47(uParam3);
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), func_175(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204,429f, -3110,847f, 4,3988f;
			break;
		
		case -1710530912:
			return 725,1831f, -1089,349f, 21,1692f;
			break;
		
		case 1131590004:
			return -1164,887f, -2011,105f, 12,25371f;
			break;
		
		case 916723671:
			return -330,44f, -143,39f, 39,33f;
			break;
		
		case 1340820069:
			return 106,28f, 6620,01f, 32,12f;
			break;
		
		case -866958545:
			return 1182,65f, 2641,9f, 38,05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_176(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204,429f, -3110,847f, 4,3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210,884f, -3122,402f, 5,2118f };
			uParam0->f_9.f_4 = { 4,0534f, 0f, 32,6363f };
			uParam0->f_9.f_7 = 32,498f;
			uParam0->f_9.f_8 = { 1210,884f, -3122,402f, 5,2118f };
			uParam0->f_9.f_11 = { 4,0534f, 0f, 32,6363f };
			uParam0->f_9.f_14 = 32,498f;
			uParam0->f_27 = { 1204,157f, -3122,599f, 3,795331f };
			uParam0->f_27.f_3 = { 1204,24f, -3099,772f, 8,400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725,1831f, -1089,349f, 21,1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734,3793f, -1078,791f, 23,4305f };
			uParam0->f_9.f_4 = { -16,432f, 0f, -19,7978f };
			uParam0->f_9.f_7 = 60,0199f;
			uParam0->f_9.f_8 = { 734,3027f, -1079,004f, 23,4973f };
			uParam0->f_9.f_11 = { -16,432f, 0f, -19,7978f };
			uParam0->f_9.f_14 = 60,0199f;
			uParam0->f_27 = { 738,8857f, -1088,516f, 20,55957f };
			uParam0->f_27.f_3 = { 718,613f, -1088,78f, 24,83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164,887f, -2011,105f, 12,25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161,774f, -2010,27f, 14,2468f };
			uParam0->f_9.f_4 = { -17,3415f, 0f, 113,6889f };
			uParam0->f_9.f_7 = 64,5334f;
			uParam0->f_9.f_8 = { -1161,639f, -2010,211f, 14,2928f };
			uParam0->f_9.f_11 = { -17,3415f, 0f, 113,6889f };
			uParam0->f_9.f_14 = 64,5334f;
			uParam0->f_27 = { -1169,723f, -2015,923f, 11,50441f };
			uParam0->f_27.f_3 = { -1160,558f, -2007,005f, 15,68027f };
			uParam0->f_27.f_6 = 5,5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330,44f, -143,39f, 39,33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332,1567f, -141,0546f, 40,2864f };
			uParam0->f_9.f_4 = { -20,6629f, 0f, -134,7887f };
			uParam0->f_9.f_7 = 60,0241f;
			uParam0->f_9.f_8 = { -332,3621f, -140,8507f, 40,3956f };
			uParam0->f_9.f_11 = { -20,6629f, 0f, -134,7887f };
			uParam0->f_9.f_14 = 60,0241f;
			uParam0->f_27 = { -323,7998f, -146,2539f, 37,81492f };
			uParam0->f_27.f_3 = { -334,3432f, -141,7261f, 40,75964f };
			uParam0->f_27.f_6 = 5,5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106,28f, 6620,01f, 32,12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106,688f, 6617,322f, 32,5026f };
			uParam0->f_9.f_4 = { -10,7437f, 0f, 21,7154f };
			uParam0->f_9.f_7 = 67,562f;
			uParam0->f_9.f_8 = { 106,7971f, 6617,048f, 32,5586f };
			uParam0->f_9.f_11 = { -10,7437f, 0f, 21,7154f };
			uParam0->f_9.f_14 = 67,562f;
			uParam0->f_27 = { 100,9759f, 6625,046f, 30,60301f };
			uParam0->f_27.f_3 = { 111,2522f, 6615,657f, 33,62929f };
			uParam0->f_27.f_6 = 5,5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182,65f, 2641,9f, 38,05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184,206f, 2644,004f, 38,7458f };
			uParam0->f_9.f_4 = { -15,4014f, 0f, 161,4493f };
			uParam0->f_9.f_7 = 67,3374f;
			uParam0->f_9.f_8 = { 1184,345f, 2644,418f, 38,866f };
			uParam0->f_9.f_11 = { -15,4014f, 0f, 161,4493f };
			uParam0->f_9.f_14 = 67,3374f;
			uParam0->f_27 = { 1182,835f, 2634,775f, 36,55006f };
			uParam0->f_27.f_3 = { 1182,578f, 2647,955f, 39,58602f };
			uParam0->f_27.f_6 = 5,5f;
			return;
			break;
	}
}

int func_177()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_81(1200, -1);
	if (!BitTest(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!BitTest(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_178()
{
	if (bLocal_93)
	{
		if (!iLocal_94)
		{
			func_180(1215605247, 1, 0);
			func_179(1);
			iLocal_94 = 1;
		}
	}
	else if (iLocal_94)
	{
		func_180(1215605247, 0, 0);
		func_179(0);
		iLocal_94 = 0;
	}
}

void func_179(bool bParam0)
{
	if (Global_2738934.f_4638 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2738934.f_4638 = bParam0;
	}
}

void func_180(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2738934.f_4617, func_181(iParam0)))
		{
			if (bParam2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4617.f_1), func_181(iParam0));
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4617), func_181(iParam0));
		}
	}
	else if (BitTest(Global_2738934.f_4617, func_181(iParam0)))
	{
		if (bParam2)
		{
			unk_0x8744D2E3FC95740E(&(Global_2738934.f_4617.f_1), func_181(iParam0));
		}
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_4617), func_181(iParam0));
	}
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_182()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_337.f_23, 0))
	{
		if (iLocal_328 >= 32)
		{
			unk_0x8744D2E3FC95740E(&uLocal_345, 5);
			iLocal_328 = 0;
			iLocal_300 = -1;
		}
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_328)))
		{
			iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iLocal_328));
			iVar1 = unk_0x56E414973C2A8C0E(iVar0);
			if (func_15(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_345, 3))
				{
					if (BitTest(Local_344[iLocal_328 /*4*/].f_2, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 3);
					}
				}
				if (iLocal_300 == -1)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
					{
						if (func_4(Local_337.f_22))
						{
							if (!unk_0x4FAFF4BCB7633475(iVar1))
							{
								if (unk_0xF4244288C3EF3306(iVar1, unk_0xE38610F405049F71(Local_337.f_22)))
								{
									if (unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_337.f_22), -1, 0) == iVar1)
									{
										iLocal_300 = iLocal_328;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_328++;
		if (iLocal_328 >= 32)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 5);
		}
		func_282();
		if (!BitTest(uLocal_345, 3))
		{
			if (!BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 1))
				{
					if (func_280())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_297 != Local_337.f_34)
	{
		if (Local_337.f_34 == 0)
		{
			if (!unk_0x93BF17E19A9F0E9B(Local_337.f_22))
			{
				iLocal_297 = Local_337.f_34;
				unk_0x552B3BADB43FF551(iLocal_297);
			}
		}
		else
		{
			iLocal_297 = Local_337.f_34;
			unk_0x552B3BADB43FF551(iLocal_297);
		}
	}
	if (BitTest(Local_337.f_23, 0))
	{
		switch (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3)
		{
			case 0:
				if (!Global_2738934.f_1774)
				{
				}
				if (BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 3))
				{
					unk_0x8744D2E3FC95740E(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_345, 21))
				{
					unk_0x8744D2E3FC95740E(&uLocal_345, 21);
				}
				if (BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 1))
				{
					unk_0x8744D2E3FC95740E(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), true);
				}
				if (((!func_140(unk_0x259BE71D8A81D4FA(), 1, 0) && !func_114()) && !func_279(unk_0x259BE71D8A81D4FA(), 1, 0)) || func_72(unk_0x259BE71D8A81D4FA(), 6))
				{
					if (BitTest(uLocal_345, 3))
					{
						unk_0x8744D2E3FC95740E(&uLocal_345, 3);
					}
					if (BitTest(uLocal_345, 19))
					{
						unk_0x8744D2E3FC95740E(&uLocal_345, 19);
					}
					if (BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 3))
					{
						unk_0x8744D2E3FC95740E(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 3);
					}
					if (iLocal_299 != -1)
					{
						iLocal_299 = -1;
					}
					if (BitTest(Local_337.f_23, 0))
					{
						if (!BitTest(uLocal_345, 16))
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 16);
							func_278(6, 1);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 7);
							Global_2738934.f_1773 = 1;
							Global_2738934.f_1774 = 0;
						}
						if (unk_0x2E9F58AD6FE93DFF(1))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
							{
								if (func_272())
								{
									if (Local_337.f_67 != 0)
									{
										unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 1);
									}
									Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 1;
									Global_1928411 = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_337.f_22));
									if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_337.f_22))))
									{
										unk_0x4C905FB262965D5D(Global_1928411, 348);
										func_171("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0x4C905FB262965D5D(Global_1928411, 225);
										func_171("IMPEX_HIPR_INT", -1);
									}
									unk_0x61183D6239A9D7B8(Global_1928411, 2);
									unk_0x594D5D0D7071B0DE(Global_1928411, "IMPEX_HIPR_BLP");
									func_278(6, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 7);
									Global_2738934.f_1773 = 1;
									if (func_120())
									{
										unk_0xF55F62DA99DB0C2F(Global_1928411, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2738934.f_1774)
				{
					Global_2738934.f_1774 = 1;
				}
				break;
			
			case 1:
				if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
				{
					if (unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_337.f_22), 0))
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22)))
							{
								func_271(1);
								if (func_270())
								{
									func_265(2, 0, 1);
								}
								if (unk_0xC450B06E5AAA0985(Global_1928411))
								{
									unk_0xFE54B8568B2ABD12(&Global_1928411);
								}
							}
							else
							{
								func_271(0);
								if (!func_264(unk_0xE38610F405049F71(Local_337.f_22), 0))
								{
									if (!unk_0xC450B06E5AAA0985(Global_1928411))
									{
										if (!iLocal_116)
										{
											func_263();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_345, 19))
						{
							if (func_272())
							{
								if (func_261())
								{
									if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22)))
									{
										if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_337.f_22), 1)) < 2500f)
										{
											if (func_120())
											{
												func_171("FM_IMP_JAC", -1);
											}
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 19);
										}
									}
								}
							}
						}
						if (func_260())
						{
						}
						func_258();
					}
					else
					{
						if (unk_0xC450B06E5AAA0985(Global_1928411))
						{
							unk_0xFE54B8568B2ABD12(&Global_1928411);
						}
						func_278(6, 0);
						unk_0x8744D2E3FC95740E(&uLocal_345, 7);
						Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_337.f_67 != 0)
					{
						unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 0);
					}
					if (unk_0xC450B06E5AAA0985(Global_1928411))
					{
						unk_0xFE54B8568B2ABD12(&Global_1928411);
					}
					func_278(6, 0);
					unk_0x8744D2E3FC95740E(&uLocal_345, 7);
					Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_345, 3))
				{
					func_278(6, 0);
					unk_0x8744D2E3FC95740E(&uLocal_345, 7);
					if (unk_0xC450B06E5AAA0985(Global_1928411))
					{
						unk_0xFE54B8568B2ABD12(&Global_1928411);
					}
					Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 3;
				}
				if (Local_337.f_26 == 3)
				{
					if (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 == 1)
					{
						if (Local_337.f_67 != 0)
						{
							unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 0);
						}
						if (unk_0xC450B06E5AAA0985(Global_1928411))
						{
							unk_0xFE54B8568B2ABD12(&Global_1928411);
						}
						if (BitTest(uLocal_345, 16))
						{
							unk_0x8744D2E3FC95740E(&uLocal_345, 16);
						}
						func_278(6, 0);
						unk_0x8744D2E3FC95740E(&uLocal_345, 7);
						Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_271(0);
				break;
		}
		if (func_255())
		{
			if (func_254("IMPEX_HIPR_INT"))
			{
				unk_0x428C32CC68809A35(1);
			}
			if (unk_0xC450B06E5AAA0985(Global_1928411))
			{
				unk_0xFE54B8568B2ABD12(&Global_1928411);
			}
			if (Local_337.f_67 != 0)
			{
				unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 0);
			}
			Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 3;
			func_278(6, 0);
			unk_0x8744D2E3FC95740E(&uLocal_345, 7);
			if (BitTest(uLocal_345, 16))
			{
				unk_0x8744D2E3FC95740E(&uLocal_345, 16);
			}
			func_271(0);
		}
		func_198();
		if (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 > 0 && Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 < 3)
		{
			func_195();
		}
	}
	else
	{
		if (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 != 0)
		{
			if (Local_337.f_67 != 0)
			{
				unk_0xCCA6D8A84EE8C88A(Local_337.f_67, 0);
			}
			Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_345, 21))
		{
			unk_0x8744D2E3FC95740E(&uLocal_345, 21);
		}
		if (Global_2738934.f_1773)
		{
			if (!func_534(&uLocal_310))
			{
				func_533(&uLocal_310, 0, 0);
			}
			else if (func_532(&uLocal_310, 5000, 0))
			{
				func_47(&uLocal_310);
				Global_2738934.f_1773 = 0;
			}
		}
		if (BitTest(uLocal_345, 16))
		{
			if (Local_337.f_34 == 0)
			{
				unk_0x8744D2E3FC95740E(&uLocal_345, 16);
			}
		}
	}
	func_183();
}

void func_183()
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!func_261())
			{
				if (!func_534(&uLocal_351))
				{
					func_533(&uLocal_351, 0, 0);
				}
				if (func_532(&uLocal_351, 1000, 0))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_337.f_22))
					{
						Var1 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_337.f_22), 1) };
						if (func_191(Var1, func_192(39), func_151(39, 0)))
						{
							if (func_186(39, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_191(Var1, func_192(40), func_151(40, 0)))
						{
							if (func_186(40, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_191(Var1, func_192(41), func_151(41, 0)))
						{
							if (func_186(41, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_191(Var1, func_192(42), func_151(42, 0)))
						{
							if (func_186(42, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_191(Var1, func_192(43), func_151(43, 0)))
						{
							if (func_186(43, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_191(Var1, func_192(44), func_151(44, 0)))
						{
							if (func_186(44, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					func_47(&uLocal_351);
				}
				if (bVar4)
				{
					if (unk_0xEADBDBE0422CF7E6(Local_337.f_22))
					{
						if (func_184(unk_0xE38610F405049F71(Local_337.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0x62C438C53BB57AFD(unk_0xE38610F405049F71(Local_337.f_22), Var0, 0, 0, 1);
							unk_0x5C96CEA06531AB03(unk_0xE38610F405049F71(Local_337.f_22), uVar2);
							unk_0x6EF982A39E8D08FA(unk_0xE38610F405049F71(Local_337.f_22), 1, 1);
							unk_0x5D7CD709B34C90F0(unk_0xE38610F405049F71(Local_337.f_22), false);
							unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_337.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_184(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
	if (iParam4 || !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_185(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x4A8C381C258A124D())
				{
				}
				else if (bParam2)
				{
					if (unk_0x501EBB0523078750(iVar2))
					{
						iVar3 = unk_0x1C1C92A1CBAE364B(iVar2);
						if (((!unk_0x4FAFF4BCB7633475(iVar2) && iVar3 != func_123()) && func_15(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xE7B45027762DEFE7(unk_0x1C1C92A1CBAE364B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_185(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xC39AE5D390581AD5(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, iParam1);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 0), unk_0xD1A6A821F5AC81DB(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

bool func_186(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136,491f, -1991,127f, 12,1674f };
			*uParam3 = 312,0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133,253f, -1993,854f, 12,1687f };
			*uParam3 = 314,389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130,806f, -1997,875f, 12,1713f };
			*uParam3 = 317,9671f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127,329f, -2001,548f, 12,1741f };
			*uParam3 = 315,1484f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123,286f, -2006,263f, 12,1791f };
			*uParam3 = 236,5043f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115,469f, -2012,307f, 12,1802f };
			*uParam3 = 264,1943f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110,562f, -2015,446f, 12,1999f };
			*uParam3 = 302,6618f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121,69f, -2000,23f, 12,1718f };
			*uParam3 = 238,2144f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111,589f, -2006,454f, 12,1692f };
			*uParam3 = 238,336f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138,648f, -1979,826f, 12,1634f };
			*uParam3 = 278,7886f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124,321f, -1978,124f, 12,1856f };
			*uParam3 = 276,276f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110,264f, -1975,971f, 12,1588f };
			*uParam3 = 279,4681f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128,293f, -1984,828f, 12,1659f };
			*uParam3 = 295,1603f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126,066f, -1991,346f, 12,1683f };
			*uParam3 = 227,6551f;
			*uParam4 = 0,7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717,5009f, -1082,013f, 21,2916f };
			*uParam3 = 3,6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716,7202f, -1069,264f, 21,2546f };
			*uParam3 = 3,5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717,009f, -1058,204f, 21,0152f };
			*uParam3 = 355,8705f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712,7385f, -1083,534f, 21,3647f };
			*uParam3 = 359,9393f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712,7766f, -1072,967f, 21,307f };
			*uParam3 = 359,9453f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712,8783f, -1061,094f, 21,1883f };
			*uParam3 = 357,2739f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708,5093f, -1081,285f, 21,3978f };
			*uParam3 = 358,5361f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708,9708f, -1068,358f, 21,3519f };
			*uParam3 = 357,9787f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710,7449f, -1053,611f, 21,2011f };
			*uParam3 = 339,2883f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704,6691f, -1079,536f, 21,3804f };
			*uParam3 = 359,4009f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704,4818f, -1065,911f, 21,4447f };
			*uParam3 = 0,9557f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716,4031f, -1044,615f, 20,9157f };
			*uParam3 = 280,6607f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725,7982f, -1044,226f, 21,046f };
			*uParam3 = 271,6107f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727,0708f, -1047,951f, 21,2648f };
			*uParam3 = 270,6534f;
			*uParam4 = 0,1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365,9221f, -125,5196f, 37,6785f };
			*uParam3 = 65,4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362,3411f, -122,0465f, 37,6788f };
			*uParam3 = 68,8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363,4988f, -117,1944f, 37,6792f };
			*uParam3 = 78,9594f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372,3338f, -115,238f, 37,6796f };
			*uParam3 = 74,7182f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371,1733f, -121,0303f, 37,6797f };
			*uParam3 = 62,123f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369,2153f, -127,0247f, 37,6784f };
			*uParam3 = 61,9032f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371,8094f, -130,2364f, 37,6798f };
			*uParam3 = 52,11f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378,4785f, -130,0621f, 37,6796f };
			*uParam3 = 36,469f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387,4156f, -118,9469f, 37,6829f };
			*uParam3 = 38,3679f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382,709f, -112,8489f, 37,6985f };
			*uParam3 = 65,0749f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397,1963f, -107,1517f, 37,6834f };
			*uParam3 = 33,315f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404,3896f, -96,5394f, 39,0491f };
			*uParam3 = 34,1156f;
			*uParam4 = 0,1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120,3574f, 6599,573f, 31,0156f };
			*uParam3 = 269,5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123,4549f, 6594,44f, 30,9958f };
			*uParam3 = 269,5584f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126,712f, 6589,798f, 30,9386f };
			*uParam3 = 269,5731f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133,9324f, 6585,555f, 30,9551f };
			*uParam3 = 269,4128f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136,8265f, 6580,12f, 31,013f };
			*uParam3 = 269,4126f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141,8716f, 6575,214f, 30,9522f };
			*uParam3 = 270,5616f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140,8046f, 6606,312f, 30,8449f };
			*uParam3 = 178,8423f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145,8316f, 6601,099f, 30,85f };
			*uParam3 = 180,9941f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150,5503f, 6596,533f, 30,8449f };
			*uParam3 = 177,9041f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155,6983f, 6591,292f, 30,8449f };
			*uParam3 = 177,9025f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159,1213f, 6580,544f, 30,841f };
			*uParam3 = 208,1021f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153,3835f, 6581,357f, 30,843f };
			*uParam3 = 208,9007f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160,6086f, 6567,498f, 30,8061f };
			*uParam3 = 210,3887f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166,7977f, 6567,135f, 30,7544f };
			*uParam3 = 210,3833f;
			*uParam4 = 0,2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182,498f, 2653,582f, 36,8099f };
			*uParam3 = 304,7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190,678f, 2661,143f, 36,8165f };
			*uParam3 = 321,483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196,733f, 2669,66f, 36,7883f };
			*uParam3 = 345,6812f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200,466f, 2666,494f, 36,8099f };
			*uParam3 = 347,5349f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205,586f, 2667,136f, 36,8099f };
			*uParam3 = 352,7466f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210,698f, 2666,592f, 36,8099f };
			*uParam3 = 7,6557f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193,573f, 2688,714f, 36,7457f };
			*uParam3 = 87,5179f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181,127f, 2689,26f, 36,8532f };
			*uParam3 = 87,4959f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162,459f, 2689,204f, 37,1039f };
			*uParam3 = 87,5173f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162,663f, 2677,458f, 37,078f };
			*uParam3 = 268,6483f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171,858f, 2677,125f, 36,995f };
			*uParam3 = 267,8824f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224,358f, 2677,226f, 36,6702f };
			*uParam3 = 272,1325f;
			*uParam4 = 0,1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199,5331f, -1301,69f, 30,296f };
			*uParam3 = 263,703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205,9477f, -1303,868f, 30,2575f };
			*uParam3 = 1,5267f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200,7847f, -1298,636f, 30,296f };
			*uParam3 = 89,6847f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193,9668f, -1305,65f, 30,3643f };
			*uParam3 = 86,5508f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213,389f, -1305,822f, 30,3533f };
			*uParam3 = 88,0277f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210,4487f, -1301,42f, 30,296f };
			*uParam3 = 50,2894f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193,1976f, -1302,892f, 30,296f };
			*uParam3 = 310,5602f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198,882f, -1304,772f, 30,325f };
			*uParam3 = 268,713f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230,2501f, -1305,596f, 30,3533f };
			*uParam3 = 89,1508f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186,4736f, -1305,746f, 30,3495f };
			*uParam3 = 270,2632f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236,5289f, -1302,071f, 30,296f };
			*uParam3 = 270,2677f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181,8344f, -1299,311f, 30,296f };
			*uParam3 = 88,0286f;
			*uParam4 = 0,1f;
		}
	}
	else if (func_190(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795,6738f, 306,1536f, 84,7005f };
			*uParam3 = 175,3352f;
			*uParam4 = 0,1f;
		}
	}
	else if (func_189(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574,907f, -569,6819f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573,983f, -570,0646f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575,289f, -570,6058f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575,83f, -569,2993f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574,524f, -568,7581f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574,365f, -570,9885f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576,213f, -570,2231f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575,448f, -568,3754f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573,6f, -569,1407f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573,059f, -570,4473f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575,672f, -571,5297f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576,754f, -568,9166f, 104,2001f };
					*uParam3 = 104,9486f;
					*uParam4 = 0,1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387,561f, -481,637f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386,637f, -482,0197f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387,944f, -482,5609f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388,485f, -481,2543f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387,178f, -480,7131f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387,02f, -482,9435f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388,868f, -482,1782f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388,102f, -480,3304f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386,255f, -481,0958f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385,713f, -482,4024f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388,327f, -483,4847f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389,409f, -480,8716f, 77,2001f };
					*uParam3 = 353,0411f;
					*uParam4 = 0,1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142,5312f, -590,6586f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141,6073f, -591,0413f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142,9139f, -591,5825f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143,4551f, -590,2759f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142,1485f, -589,7347f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141,99f, -591,9651f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143,8378f, -591,1998f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143,0724f, -589,352f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141,2247f, -590,1174f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141,2247f, -590,1174f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140,6835f, -591,424f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143,2966f, -592,5063f, 166,0001f };
					*uParam3 = 110,9811f;
					*uParam4 = 0,1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74,8035f, -814,8599f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73,8796f, -815,2426f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75,1862f, -815,7838f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75,7274f, -814,4772f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74,4208f, -813,936f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74,2623f, -816,1664f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76,11f, -815,4011f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75,3447f, -813,5533f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73,4969f, -814,3187f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72,9557f, -815,6252f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75,5689f, -816,7076f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76,6513f, -814,0945f, 284,0001f };
					*uParam3 = 146,2765f;
					*uParam4 = 0,1f;
				}
				break;
		}
	}
	else if (func_188(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200,862f, -1737,385f, 3,1713f };
			*uParam3 = 284,5345f;
			*uParam4 = 0,1f;
		}
	}
	else if (func_187(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799,313f, -3931,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801,313f, -3931,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799,313f, -3929,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801,313f, -3929,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799,313f, -3927,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801,313f, -3927,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799,313f, -3925,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801,313f, -3925,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801,313f, -3929,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799,313f, -3929,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801,313f, -3931,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799,313f, -3931,387f, 147,0031f };
			*uParam3 = 0f;
			*uParam4 = 0,1f;
		}
	}
	return !func_33(*uParam2, 0f, 0f, 0f, 0);
}

int func_187(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_191(struct<3> Param0, var uParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, uParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_192(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_194(Global_103686);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return func_193();
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
		
		case 58:
			return "";
			break;
		
		case 59:
			return "xm3_dlc_int_03_xm3";
			break;
		
		case 60:
			return "sm_smugdlc_int_01";
			break;
	}
	return "";
}

char* func_193()
{
	return "M23_1_dlc_int_01_M23_1";
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return func_193();
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_167() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		case 21:
			return "xm3_dlc_int_03_xm3";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_195()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_300 > -1)
	{
		if (iLocal_300 != unk_0xAE032CEDCF23C6D5())
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_300)))
			{
				iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iLocal_300));
				bVar1 = true;
				if (unk_0xDFAE61B1AEF262C2(iVar0, unk_0x259BE71D8A81D4FA()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22), 0))
				{
					if (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_196(unk_0xE38610F405049F71(Local_337.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x8FBF79AC214E3747(iParam0);
	if (func_15(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_197(iParam0) == 0)
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
				{
					if (unk_0x4F7C7E268667C7B3(iParam0))
					{
						unk_0x2EB73EDE5BD6492D(iParam0, "MP_Arrow");
						unk_0x371531C96D032099(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0xE71F327DD7F42EE2(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (unk_0xBA16CD57E37AC32A(iVar0) == 0 && unk_0x00C6FDED3EB75117(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0xD2A0543EC400E1A5(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_198()
{
	int iVar0;
	
	if (BitTest(uLocal_345, 5))
	{
		if (iLocal_299 != iLocal_300)
		{
			if (iLocal_300 > -1)
			{
				if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_300)))
				{
					iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iLocal_300));
					if (iVar0 != unk_0x259BE71D8A81D4FA())
					{
						if (!func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
						{
							func_199("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (unk_0x93E08E0F531E2C35())
					{
						if (!BitTest(Local_337.f_23, 8))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_337.f_23), 8);
						}
					}
				}
			}
			iLocal_299 = iLocal_300;
		}
	}
}

int func_199(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_9(iParam1))
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
					unk_0x4E5A3D96808F7F84(func_252(iVar1, iParam1, 0));
				}
				else
				{
					unk_0x4E5A3D96808F7F84(func_208(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				unk_0x4E5A3D96808F7F84(func_208(iParam1, -2, 1, 0, 0));
			}
			unk_0x60D332F23943B34F(func_206(&Var2));
			if (!bParam4)
			{
				iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
			}
			else
			{
				Global_2707307 = { func_205(iParam1) };
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
							Var2 = { func_204(&Var2) };
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
			func_200(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_203() || !unk_0x834C960822A4683F()) || !func_26(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_201(iParam2);
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_202(iVar0);
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

void func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_203()
{
	return unk_0x087611B922B50F13(-1762644250);
}

struct<16> func_204(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_205(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

var func_206(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_207(&cVar0);
}

var func_207(char[4] cParam0)
{
	return cParam0;
}

int func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_9(iParam0))
	{
		return 1;
	}
	if (func_250(iParam0) && !bParam4)
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
	if (((func_250(unk_0x259BE71D8A81D4FA()) || (func_249() && func_248())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		iVar1 = func_247();
		if (unk_0xFC8BFE4B41177C22(iVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_15(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_252(iParam1, iParam0, 0);
							}
							else
							{
								return func_223(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_223(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_252(iParam1, iParam0, 0);
				}
				else
				{
					return func_209(0, -1, 0);
				}
			}
			else
			{
				return func_209(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_252(iParam1, iParam0, 0);
		}
		else
		{
			return func_223(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_223(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_209(bool bParam0, int iParam1, bool bParam2)
{
	return func_210(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_210(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(iParam0);
	if ((func_222() || (func_221() && func_219())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_218(iParam2, iVar0);
		}
		else
		{
			return func_218(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_215(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_214(1);
				}
				else
				{
					return func_214(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_211(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_211(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_214(1);
	}
	return func_214(0);
}

int func_211(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, iParam1, iParam3);
	if (func_212(Global_4718592.f_127178, 1))
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

int func_212(int iParam0, bool bParam1)
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

int func_213(int iParam0, int iParam1, int iParam2)
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
			if (!func_215(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_214(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_216(iParam0, bVar0, iParam1, bVar1) || !func_216(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_216(iParam0, bVar0, iParam1, bVar1) || !func_216(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_216(iParam0, bVar0, iParam1, bVar1) || !func_216(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_216(iParam0, bVar0, iParam1, bVar1) || !func_216(iParam1, bVar1, iParam0, bVar0))
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

int func_216(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		if (((!func_15(iVar1, 1, 1) || func_26(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_217(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(iVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
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

var func_217(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_218(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_213(iParam1, iParam0, 4);
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

int func_219()
{
	if (func_220())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_220()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_221()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_222()
{
	if (func_220() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_232())
			{
				iVar3 = func_228(iParam0);
				if (!iVar3 == -1)
				{
					return func_226(iVar3);
				}
			}
			if ((func_225(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_215(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_214(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_224(1);
			}
			else
			{
				return func_210(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_214(1);
			}
			else
			{
				return func_210(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_228(iParam0);
	if (!iVar4 == -1)
	{
		return func_226(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_224(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_225(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_227(iParam0);
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

var func_227(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_228(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_230(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_229(iParam0)];
		}
	}
	return -1;
}

int func_229(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_123();
}

int func_230(int iParam0, bool bParam1)
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_231(iParam0))
		{
			return 0;
		}
	}
	return func_9(Global_1887305[iParam0 /*610*/].f_10);
}

int func_231(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_232()
{
	if ((((((((func_246() || func_245()) || func_32()) || func_244()) || func_243()) || func_241()) || func_239()) || func_236()) || func_233())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	return func_234(Global_4718592.f_127178);
}

int func_234(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_235(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_236()
{
	return func_237(Global_4718592.f_127178);
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_238(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_239()
{
	return func_240(Global_4718592.f_127178);
}

int func_240(int iParam0)
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

int func_241()
{
	return func_242(Global_4718592.f_127178);
}

int func_242(int iParam0)
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

var func_243()
{
	return Global_2684504.f_24;
}

var func_244()
{
	return Global_2684504.f_21;
}

var func_245()
{
	return Global_2684504.f_18;
}

var func_246()
{
	return Global_2684504.f_17;
}

var func_247()
{
	return Global_2621446.f_2;
}

var func_248()
{
	return BitTest(Global_2621446, 4);
}

var func_249()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

int func_250(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_251())
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

bool func_251()
{
	return BitTest(Global_2621446, 3);
}

int func_252(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_232())
	{
		iVar2 = func_228(iParam1);
		if (!iVar2 == -1)
		{
			return func_226(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_123())
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
			iVar0 = func_210(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_253(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_215(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_224(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_253(int iParam0)
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

bool func_254(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_255()
{
	if ((Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 > 0 && Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 < 3) || (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 == 0 && func_72(unk_0x259BE71D8A81D4FA(), 6)))
	{
		if (func_140(unk_0x259BE71D8A81D4FA(), 1, 0) || func_114())
		{
			if ((!func_256(unk_0x259BE71D8A81D4FA(), 5) && !func_256(unk_0x259BE71D8A81D4FA(), 32)) && !func_256(unk_0x259BE71D8A81D4FA(), 148))
			{
				return 1;
			}
			else if (!iLocal_116)
			{
				if (unk_0xC450B06E5AAA0985(Global_1928411))
				{
					unk_0xFE54B8568B2ABD12(&Global_1928411);
				}
				iLocal_116 = 1;
			}
		}
		else if (iLocal_116)
		{
			func_263();
			iLocal_116 = 0;
		}
		if (Local_337.f_26 == 3)
		{
			if (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_3 == 0 && func_72(unk_0x259BE71D8A81D4FA(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_85() != 0)
	{
		return 0;
	}
	if (!func_257(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845281[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

void func_258()
{
	if (unk_0xC450B06E5AAA0985(Global_1928411))
	{
		if (func_120() || func_259())
		{
			unk_0xF55F62DA99DB0C2F(Global_1928411, 0);
		}
		else
		{
			unk_0xF55F62DA99DB0C2F(Global_1928411, 4);
		}
		if (!iLocal_105)
		{
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				unk_0x360B279488A775FC(Global_1928411, 1);
				iLocal_105 = 1;
			}
		}
		else if (!func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			unk_0x360B279488A775FC(Global_1928411, 0);
			iLocal_105 = 0;
		}
	}
}

var func_259()
{
	return Global_2647061.f_1870;
}

int func_260()
{
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_337.f_22), 0, 7000) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_337.f_22), 1, 40000))
			{
				if (unk_0xB0AB1F334666E337(Local_337.f_22))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_337.f_22))
					{
						unk_0x2AEBE39F6BF7D6BC(unk_0xE38610F405049F71(Local_337.f_22), -2000f);
						unk_0xDF9DC0584881B7AF(unk_0xE38610F405049F71(Local_337.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0x93E08E0F531E2C35())
				{
					if (func_11(Local_337.f_22))
					{
						unk_0x2AEBE39F6BF7D6BC(unk_0xE38610F405049F71(Local_337.f_22), -2000f);
						unk_0xDF9DC0584881B7AF(unk_0xE38610F405049F71(Local_337.f_22), 0f);
						return 1;
					}
				}
				else
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

int func_261()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_300 == -1 && BitTest(uLocal_345, 5))
	{
		return 0;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22)))
				{
					if (func_262(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_300 >= 0)
			{
				if (iLocal_300 != unk_0xAE032CEDCF23C6D5())
				{
					if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_300)))
					{
						iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iLocal_300));
						if (func_15(iVar0, 1, 1))
						{
							iVar1 = unk_0x56E414973C2A8C0E(iVar0);
							if (unk_0xF4244288C3EF3306(iVar1, unk_0xE38610F405049F71(Local_337.f_22)))
							{
								if (func_262(iVar1, unk_0xE38610F405049F71(Local_337.f_22), -1))
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
	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (unk_0xF4244288C3EF3306(iParam0, iParam1))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_263()
{
	Global_1928411 = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_337.f_22));
	if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_337.f_22))))
	{
		unk_0x4C905FB262965D5D(Global_1928411, 348);
	}
	else
	{
		unk_0x4C905FB262965D5D(Global_1928411, 225);
	}
	unk_0x61183D6239A9D7B8(Global_1928411, 2);
	unk_0x594D5D0D7071B0DE(Global_1928411, "IMPEX_HIPR_BLP");
	if (func_120())
	{
		unk_0xF55F62DA99DB0C2F(Global_1928411, 0);
	}
}

int func_264(int iParam0, int iParam1)
{
	if (func_172(iParam0, 1215605247, &uLocal_325, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0, int iParam1, bool bParam2)
{
	if (func_270())
	{
		if (iParam1 == 1)
		{
			if (Global_2738934.f_4514 == -1)
			{
				Global_2738934.f_4514 = Global_262145.f_26734;
			}
			func_269(&(Global_2738934.f_4512), 0, 0);
			if (bParam2)
			{
				if (Global_2738934.f_4517 == -1)
				{
					Global_2738934.f_4517 = Global_262145.f_26735;
				}
				func_269(&(Global_2738934.f_4515), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_8 = 0;
				func_268(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_8 = 0;
			func_268(1);
		}
		if ((!unk_0x834C960822A4683F() && !func_267()) && !func_266(unk_0x259BE71D8A81D4FA()))
		{
			Global_1057439 = 0;
		}
		unk_0xD3ABBB1A96756065(0, -1, -1, iParam0);
	}
}

int func_266(int iParam0)
{
	if (func_140(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_267()
{
	return Global_2684504.f_844;
}

void func_268(bool bParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_270())
		{
			if (func_15(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 0);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 0);
			}
			unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 1f);
			unk_0x08C2ACB534243279(0);
			unk_0x6106E62525304863(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0x3DDE6E86B8024EEE(0, 0);
				}
			}
		}
		else
		{
			if (func_15(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 0);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 1);
				unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 0,5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0x3DDE6E86B8024EEE(1, 0);
				}
			}
			unk_0x08C2ACB534243279(1);
			unk_0x6106E62525304863(0);
		}
	}
}

void func_269(var uParam0, bool bParam1, bool bParam2)
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

bool func_270()
{
	return Global_1574582;
}

void func_271(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2738934.f_4712, 28))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4712), 28);
		}
	}
	else if (BitTest(Global_2738934.f_4712, 28))
	{
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_4712), 28);
	}
}

int func_272()
{
	if (func_120())
	{
		return 0;
	}
	if (!func_273(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_273(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_277(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_112())
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
	if (func_276())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_553())
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
	if (func_274())
	{
		return 0;
	}
	return 1;
}

bool func_274()
{
	return Global_2708056;
}

bool func_275()
{
	return Global_2684504.f_693;
}

bool func_276()
{
	return Global_2684504.f_848;
}

int func_277(int iParam0)
{
	if (Global_2657971[iParam0 /*465*/].f_219 == 0)
	{
		return 0;
	}
	return 1;
}

void func_278(bool bParam0, bool bParam1)
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

int func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_123())
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

int func_280()
{
	struct<3> Var0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!func_261())
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_337.f_22), 1) };
				if (func_281(Var0, 1215605247, 18))
				{
					if (func_264(unk_0xE38610F405049F71(Local_337.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_281(struct<3> Param0, int iParam1, int iParam2)
{
	if (unk_0xED977E2AE2CB16EE(Param0, func_175(iParam1), 1) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_282()
{
	if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
	{
		if (func_4(Local_337.f_22))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22), 0))
				{
					if (!BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 2))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 2);
					}
				}
				else if (func_283(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22), 1) < 180f)
				{
					if (!BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 2))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2, 2))
				{
					unk_0x8744D2E3FC95740E(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_283(int iParam0, int iParam1, int iParam2)
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

void func_284()
{
	int iVar0;
	
	if (iLocal_91)
	{
		func_391();
		if (!BitTest(uLocal_345, 1))
		{
			if (Global_2738934.f_1798 > 0)
			{
				if (Global_2738934.f_1801 == 0)
				{
					Global_2738934.f_1801 = unk_0x7E3F74F641EE6B27();
				}
				else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2738934.f_1801) > Global_262145.f_11934)
				{
					if (!func_109())
					{
						if (func_71())
						{
							if (func_272())
							{
								if (!func_390())
								{
									if (!func_389(0) && !func_125())
									{
										Global_23391 = 0;
										iVar0 = func_81(1200, -1);
										if (!BitTest(iVar0, 0))
										{
											if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2738934.f_1801) > 20000)
											{
												if (func_388(18, "CELL_CLTEST6", 2, "NULL", Global_2738934.f_1798, "TestSender1", 4, 0, 1, 0, 0, bLocal_112, 0, 0, 0, 0, 0))
												{
													unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
													func_147(1200, iVar0, -1, 1);
													unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, true);
													func_386(0f, 0f, 0f, func_387(19), "");
													Global_2738934.f_1800 = 1;
													iLocal_91 = 0;
												}
											}
										}
										else if (func_388(18, "CELL_CLTEST1", 2, "NULL", Global_2738934.f_1798, "TestSender1", 4, 0, 1, 0, 0, bLocal_112, 0, 0, 0, 0, 0))
										{
											func_386(0f, 0f, 0f, func_387(19), "");
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, true);
											Global_2738934.f_1800 = 1;
											iLocal_91 = 0;
										}
									}
								}
								else
								{
									Global_2738934.f_1801 = unk_0x7E3F74F641EE6B27();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_345, 1))
	{
		if (!BitTest(uLocal_322, 5))
		{
			if (func_272())
			{
				if (bLocal_112)
				{
					func_171("IMPEX_HELP_LNCH", -1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 5);
				func_533(&uLocal_308, 0, 0);
			}
		}
	}
	if (iLocal_114)
	{
		if (func_541())
		{
			if (!func_534(&uLocal_122))
			{
				func_533(&uLocal_122, 0, 0);
			}
			else if (func_532(&uLocal_122, 10000, 0))
			{
				if (func_285(18, "CELL_IMPT", 0, 0))
				{
					iLocal_114 = 0;
					func_47(&uLocal_122);
				}
			}
		}
	}
}

bool func_285(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_286(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_286(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_287(&uVar0, iParam0, func_385(), sParam1, iVar1, 3, uParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_287(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_384(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xD6F9DEE4765092A9(uParam7))
	{
		iVar2 = unk_0x70E57E9927B6BA58(sParam7);
	}
	if (func_383(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_379(uParam6))
	{
		return 0;
	}
	if (func_376(iVar0, iVar1, iVar2))
	{
		if (func_375())
		{
			return 0;
		}
		func_374();
		return func_294(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_293(iParam4))
	{
		return 0;
	}
	func_288(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_288(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_289(iParam4);
	func_374();
	Global_1663588.f_40.f_13 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 7000);
}

void func_289(int iParam0)
{
	if (func_292(iParam0))
	{
		func_291();
		return;
	}
	func_290();
}

void func_290()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_291()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_292(int iParam0)
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

bool func_293(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_294(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_373();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_370(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_367(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_370(uParam0, sParam3, sParam4);
		}
		return func_350(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_349(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_338(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_337(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_295(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_295(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_336();
	bVar0 = true;
	if (func_297(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_296(120000);
		return 1;
	}
	return 0;
}

void func_296(int iParam0)
{
	Global_1663588.f_40.f_11 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_297(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_330(iVar0);
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
	sVar4 = func_329(uParam5, bParam6, &iVar3);
	uVar5 = func_327(iParam7, &iVar3);
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
		bVar12 = func_326(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_301(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_300();
	}
	func_336();
	func_299();
	func_298();
	return 1;
}

void func_298()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_299()
{
	Global_1663588.f_40 = 3;
}

void func_300()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 8);
}

int func_301(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_302(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_302(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_319();
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
	if (func_318() == 0)
	{
		func_316();
		return 0;
	}
	func_315(Global_4543068);
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
	func_319();
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
				func_314(0);
				break;
			
			case 1:
				func_314(1);
				break;
			
			case 2:
				func_314(2);
				break;
			
			case 3:
				func_314(3);
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
		func_319();
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
			if (!func_313())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_312(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_307(1);
			func_312(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_303(iParam0, sParam1, bVar1, func_306(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_303(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_304())
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

int func_304()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_123())
	{
		return 0;
	}
	if (func_305(unk_0x259BE71D8A81D4FA()))
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

bool func_305(int iParam0)
{
	return func_134(iParam0, 20);
}

var func_306(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_307(int iParam0)
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
	func_311();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_310(14))
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
								func_309(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_309(&(Global_8807[iVar1 /*15*/]));
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
								func_309(&(Global_8807[iVar1 /*15*/]));
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
								func_309(&(Global_8807[iVar1 /*15*/]));
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
								func_309(&(Global_8807[iVar1 /*15*/]));
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
								func_309(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_308(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_308(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_309(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_309(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_309(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_309(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_309(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_309(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

bool func_310(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_311()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_312(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_313()
{
	return Global_1575083;
}

void func_314(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_315(int iParam0)
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

void func_316()
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
		if (!func_317(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_317(struct<6> Param0, struct<6> Param1)
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

int func_318()
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
			if (!func_317(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
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

void func_319()
{
	if (func_310(14))
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
		Global_20930 = func_320();
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

var func_320()
{
	func_321();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_321()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_324(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_323(unk_0x4A8C381C258A124D());
			if (func_322(iVar0) && (!func_310(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_322(Global_113969.f_2366.f_539.f_4321))
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

bool func_322(int iParam0)
{
	return iParam0 < 3;
}

int func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_324(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_324(int iParam0)
{
	if (func_322(iParam0))
	{
		return func_325(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_325(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_326(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_302(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_327(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_328(2, iParam1);
	return iParam0;
}

void func_328(int iParam0, var uParam1)
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

var func_329(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return sLocal_16;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_328(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFACCDE46E24AD056(sParam0);
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		func_331(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_331(int iParam0, bool bParam1)
{
	if (!func_15(iParam0, 0, 1))
	{
		return;
	}
	if (func_333(iParam0) != -1)
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
	if (func_332(iParam0))
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

int func_332(int iParam0)
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

int func_333(int iParam0)
{
	int iVar0;
	
	if (!func_15(iParam0, 0, 1))
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
			func_334(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_334(int iParam0)
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
	func_335(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_335(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

void func_336()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_337(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_336();
	bVar0 = false;
	return func_297(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_338(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_339(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_339(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_330(iVar0);
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
	sVar4 = func_329(uParam5, bParam6, &iVar3);
	uVar5 = func_327(iParam7, &iVar3);
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
		bVar12 = func_388(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_341(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_300();
	}
	func_340();
	func_299();
	func_298();
	return 1;
}

void func_340()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_341(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_343(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_342(iParam0) };
			Global_9487 = iParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_342(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_343(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_319();
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
	if (func_348() == 0)
	{
		func_346();
		return 0;
	}
	func_345(Global_23353);
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
		func_314(0);
		func_314(2);
		func_314(1);
	}
	else
	{
		func_319();
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
					func_314(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_314(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_314(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_314(3);
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
		func_319();
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
			if (!func_313())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_312(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_307(1);
			func_312(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_344(iParam0, sParam1, bVar1, func_306(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_344(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_304())
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

void func_345(int iParam0)
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

void func_346()
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
		if (!func_347(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_347(struct<6> Param0, struct<6> Param1)
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

int func_348()
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
			if (!func_347(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
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

int func_349(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	func_340();
	bVar0 = true;
	if (func_339(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_296(120000);
		return 1;
	}
	return 0;
}

int func_350(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_366(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_356(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_355(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_354(1);
		}
		func_353();
		func_299();
		func_352();
		func_351();
		return 1;
	}
	return 0;
}

void func_351()
{
	Global_2749372 = 0;
}

void func_352()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_353()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_354(int iParam0)
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

void func_355(int iParam0)
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

int func_356(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_365(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_357(sParam3, iParam4, bParam7);
}

int func_357(char* sParam0, int iParam1, bool bParam2)
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
					func_364();
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
		if (func_116(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_363();
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
				func_319();
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
				if (func_362())
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
			if (func_361())
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
			func_360();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_359();
		func_358();
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
		func_364();
	}
	return 0;
}

void func_358()
{
	if (!func_304())
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

void func_359()
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

void func_360()
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

int func_361()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_362()
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

void func_363()
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

void func_364()
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

void func_365(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_366(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_365(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_357(sParam3, iParam4, bParam7);
}

int func_367(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (func_369(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_368();
		func_353();
		func_299();
		func_352();
		func_351();
		return 1;
	}
	return 0;
}

void func_368()
{
	Global_23304 = 0;
}

bool func_369(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_365(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_357(sParam3, iParam4, bParam8);
}

int func_370(var uParam0, char* sParam1, char* sParam2)
{
	if (func_372(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_371();
		func_299();
		func_352();
		return 1;
	}
	return 0;
}

void func_371()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_372(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_365(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_357(sParam2, iParam3, 0);
}

void func_373()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_374()
{
	Global_1663588.f_40 = 1;
}

bool func_375()
{
	return Global_1663588.f_40 == 1;
}

int func_376(int iParam0, int iParam1, int iParam2)
{
	if (!func_377(iParam0))
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

int func_377(int iParam0)
{
	if (!func_378())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_378()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_379(var uParam0)
{
	if (func_382())
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (func_389(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_381())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_380())
		{
			return 0;
		}
	}
	return 1;
}

bool func_380()
{
	return unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1680101);
}

int func_381()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_382()
{
	return func_361();
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	if (!func_111())
	{
		return 0;
	}
	return func_376(iParam0, iParam1, iParam2);
}

int func_384(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

char* func_385()
{
	return "TXTMSG";
}

int func_386(struct<3> Param0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0xD6F9DEE4765092A9(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x1B79E937E91F40C3(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xD6F9DEE4765092A9(&(Global_2738934.f_4085[iVar0 /*26*/].f_4)))
				{
					Global_2738934.f_4085[iVar0 /*26*/] = 1;
					Global_2738934.f_4085[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_33(Global_2738934.f_4085[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2738934.f_4085[iVar0 /*26*/] = 1;
				Global_2738934.f_4085[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_387(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_388(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_343(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_342(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
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

bool func_390()
{
	return func_378();
}

void func_391()
{
	if (func_71())
	{
		if (!iLocal_327 == Local_337.f_32)
		{
			Global_2738934.f_1758 = { Local_336 };
			func_392();
			iLocal_327 = Local_337.f_32;
		}
	}
}

void func_392()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2738934.f_1777[iVar1 /*4*/]), "", 16);
		if (!Global_2738934.f_1758[iVar1] == -1 && Global_2738934.f_1758.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2738934.f_1777[iVar0 /*4*/]), func_393(Global_2738934.f_1758[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2738934.f_1798 = iVar0;
}

char* func_393(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_394(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_394(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_394(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_394(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_394(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_394(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_394(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_394(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_394(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_394(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_394(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_394(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_394(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_394(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_394(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_394(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_394(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_394(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_394(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_394(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_394(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_395()
{
	int iVar0;
	
	if (!iLocal_106)
	{
		if (!func_400(unk_0x259BE71D8A81D4FA(), 1))
		{
			if (!func_124(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!Local_337.f_28 == -1)
				{
					if (!iLocal_329 == func_35(Local_337.f_28))
					{
						if (!func_399(unk_0x4A8C381C258A124D()))
						{
							if (!func_398(unk_0x259BE71D8A81D4FA()))
							{
								iLocal_329 = func_35(Local_337.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_335)
								{
									unk_0x17687E14C390C475(iLocal_335[iVar0], iLocal_329);
									iVar0++;
								}
								iLocal_106 = 1;
								if (Global_1980305)
								{
									unk_0xEC9DAA34BBB4658C(iLocal_329);
								}
								func_397();
								func_396(iLocal_329);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_400(unk_0x259BE71D8A81D4FA(), 1) || (Local_337.f_28 > -1 && !iLocal_329 == func_35(Local_337.f_28))) || func_399(unk_0x4A8C381C258A124D())) || func_124(unk_0x259BE71D8A81D4FA(), 0)) || func_398(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_1980305)
		{
			unk_0x55098D9E9AD58806(iLocal_329);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_335)
		{
			unk_0x2E538CBB8683618E(iLocal_335[iVar0]);
			iVar0++;
		}
		func_397();
		iLocal_329 = 0;
		iLocal_106 = 0;
	}
}

void func_396(int iParam0)
{
	if (BitTest(Local_337.f_23, 0))
	{
		if (iParam0 == Local_337.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_292[0] = unk_0x7E711C5CE9160738(-54,2664f, -1679,549f, 28,4414f, 228,2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[1] = unk_0x7E711C5CE9160738(-47,0703f, -1115,41f, 25,4327f, 204,5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[2] = unk_0x7E711C5CE9160738(1227,06f, 2718,678f, 37,0051f, 359,6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[3] = unk_0x7E711C5CE9160738(-1388,704f, 44,2178f, 52,6041f, 313,0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[4] = unk_0x7E711C5CE9160738(430,9073f, -1154,745f, 28,2919f, 267,6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[5] = unk_0x7E711C5CE9160738(1123,513f, 243,2258f, 79,8556f, 237,5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[6] = unk_0x7E711C5CE9160738(-841,395f, -138,6138f, 36,5745f, 65,0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[7] = unk_0x7E711C5CE9160738(-150,0053f, -618,0887f, 31,4271f, 249,907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[8] = unk_0x7E711C5CE9160738(-827,7974f, 170,3065f, 69,2223f, 158,4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[9] = unk_0x7E711C5CE9160738(-1215,953f, -1675,18f, 2,9847f, 305,2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_293 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_292[0] = unk_0x7E711C5CE9160738(443,759f, -1164,002f, 28,2918f, 87,9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[1] = unk_0x7E711C5CE9160738(-1392,001f, 80,7104f, 52,8682f, 309,0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[2] = unk_0x7E711C5CE9160738(1075,871f, 248,5613f, 79,8556f, 294,4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[3] = unk_0x7E711C5CE9160738(-815,4279f, -1318,027f, 4,0003f, 170,2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[4] = unk_0x7E711C5CE9160738(-1215,953f, -1675,18f, 2,9847f, 305,2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[5] = unk_0x7E711C5CE9160738(-195,9823f, -1960,096f, 26,6205f, 284,8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[6] = unk_0x7E711C5CE9160738(-1101,607f, -445,1016f, 34,6997f, 297,4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[7] = unk_0x7E711C5CE9160738(-3018,759f, 739,4393f, 26,5749f, 101,9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[8] = unk_0x7E711C5CE9160738(-1550,796f, 881,1625f, 177,8996f, 223,4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[9] = unk_0x7E711C5CE9160738(-420,3277f, 1202,552f, 324,6421f, 50,857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_293 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_292[0] = unk_0x7E711C5CE9160738(464,1028f, 226,5939f, 102,1875f, 247,3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[1] = unk_0x7E711C5CE9160738(-2437,372f, 3377,217f, 31,9214f, 29,7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[2] = unk_0x7E711C5CE9160738(-1639,857f, -906,3636f, 7,7037f, 139,4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[3] = unk_0x7E711C5CE9160738(-2981,245f, 612,5886f, 19,1798f, 105,0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[4] = unk_0x7E711C5CE9160738(-1542,332f, 887,9052f, 180,491f, 19,9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[5] = unk_0x7E711C5CE9160738(-420,3277f, 1202,552f, 324,6421f, 50,857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[6] = unk_0x7E711C5CE9160738(-331,3999f, -935,0096f, 30,0798f, 249,9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[7] = unk_0x7E711C5CE9160738(-976,5854f, -2573,472f, 35,6066f, 240,851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[8] = unk_0x7E711C5CE9160738(-350,7184f, 427,0929f, 109,5371f, 17,3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[9] = unk_0x7E711C5CE9160738(-208,5685f, -2077,887f, 26,6204f, 47,4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_293 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_292[0] = unk_0x7E711C5CE9160738(-815,4279f, -1318,027f, 4,0003f, 170,2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[1] = unk_0x7E711C5CE9160738(-1215,953f, -1675,18f, 2,9847f, 305,2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[2] = unk_0x7E711C5CE9160738(-195,9823f, -1960,096f, 26,6205f, 284,8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[3] = unk_0x7E711C5CE9160738(-826,9526f, -236,9994f, 36,0555f, 209,0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[4] = unk_0x7E711C5CE9160738(-819,5961f, 183,2204f, 71,0876f, 115,4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[5] = unk_0x7E711C5CE9160738(-141,4775f, -594,4868f, 31,4271f, 69,7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[6] = unk_0x7E711C5CE9160738(443,759f, -1164,002f, 28,2918f, 87,9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[7] = unk_0x7E711C5CE9160738(-1392,001f, 80,7104f, 52,8682f, 309,0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[8] = unk_0x7E711C5CE9160738(1075,871f, 248,5613f, 79,8556f, 294,4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_292[9] = unk_0x7E711C5CE9160738(1218,18f, 2708,298f, 37,0054f, 359,1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_293 = 1;
			break;
	}
}

void func_397()
{
	int iVar0;
	
	if (iLocal_293)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x9173EE00A72DCA49(iLocal_292[iVar0]))
		{
			unk_0x0D1F59EC6D37A7EE(iLocal_292[iVar0]);
		}
		iLocal_292[iVar0] = 0;
		iVar0++;
	}
	iLocal_293 = 0;
}

int func_398(int iParam0)
{
	if (iParam0 != func_123())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_122(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

bool func_399(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
	}
	return unk_0xF8F35890F43ED2AE(iParam0) == Global_152644;
}

bool func_400(int iParam0, bool bParam1)
{
	if (func_85() != 0)
	{
		return func_401(iParam0) != 0;
	}
	return func_140(iParam0, bParam1, 0);
}

int func_401(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

void func_402()
{
	var uVar0;
	
	if (!func_534(&uLocal_314))
	{
		func_533(&uLocal_314, 0, 0);
	}
	else if (func_532(&uLocal_314, 250, 0))
	{
		func_47(&uLocal_314);
		if (func_417(1, 0))
		{
			if (!BitTest(uLocal_322, 5) && !func_416())
			{
			}
			else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if ((func_415() || func_416()) || func_411())
				{
					if (!func_410(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
					{
						if (!func_409(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) && !func_16(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
						{
							if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
							{
								if (func_404(&uVar0))
								{
									if (!BitTest(uLocal_322, 2))
									{
										if (func_272() && system::timera() > 500)
										{
											func_171("IMPEX_FSPRAY_FM", -1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 2);
										}
									}
									else
									{
										system::settimera(0);
									}
								}
								else if (!BitTest(uLocal_322, 8))
								{
									if (func_272() && system::timera() > 500)
									{
										func_171("IMPEX_CASH_FM", -1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 8);
									}
								}
								else
								{
									system::settimera(0);
								}
							}
							else if (!BitTest(uLocal_322, 11))
							{
								if (func_272() && system::timera() > 500)
								{
									func_171("IMPEX_WANTED_FM", -1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 11);
								}
							}
							else
							{
								system::settimera(0);
							}
						}
						else if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
						{
							if (!func_403())
							{
								if (!func_16(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
								{
									if (!BitTest(uLocal_322, 3))
									{
										unk_0x8744D2E3FC95740E(&uLocal_322, 7);
										if (func_272() && system::timera() > 2000)
										{
											if (Global_2738934.f_4637 == 0)
											{
												if (!func_264(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
												{
													func_171("IMPEX_DELIVER_FM", -1);
													unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 3);
												}
											}
										}
									}
									else
									{
										system::settimera(0);
									}
								}
								else if (!BitTest(uLocal_322, 7))
								{
									if (func_272() && system::timera() > 2000)
									{
										func_171("IMPEX_RIG_FM", -1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 7);
									}
								}
								else
								{
									system::settimera(0);
								}
							}
							else if (!BitTest(uLocal_322, 6))
							{
								if (func_272() && system::timera() > 2000)
								{
									func_171("IMPEX_WANTED_P", -1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 6);
								}
							}
							else
							{
								system::settimera(0);
							}
						}
						else if (!BitTest(uLocal_322, 4))
						{
							if (func_272() && system::timera() > 5000)
							{
								func_171("IMPEX_WANTED_FM", -1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 4);
							}
						}
						else
						{
							system::settimera(0);
						}
					}
				}
				else
				{
					if (func_254("IMPEX_FSPRAY_FM"))
					{
						unk_0x428C32CC68809A35(1);
					}
					unk_0x8744D2E3FC95740E(&uLocal_322, 2);
					unk_0x8744D2E3FC95740E(&uLocal_322, 3);
					unk_0x8744D2E3FC95740E(&uLocal_322, 4);
					unk_0x8744D2E3FC95740E(&uLocal_322, 6);
					unk_0x8744D2E3FC95740E(&uLocal_322, 7);
					unk_0x8744D2E3FC95740E(&uLocal_322, 8);
					unk_0x8744D2E3FC95740E(&uLocal_322, 11);
					system::settimera(0);
				}
			}
			else
			{
				if (func_254("IMPEX_FSPRAY_FM"))
				{
					unk_0x428C32CC68809A35(1);
				}
				unk_0x8744D2E3FC95740E(&uLocal_322, 2);
				unk_0x8744D2E3FC95740E(&uLocal_322, 3);
				unk_0x8744D2E3FC95740E(&uLocal_322, 4);
				unk_0x8744D2E3FC95740E(&uLocal_322, 6);
				unk_0x8744D2E3FC95740E(&uLocal_322, 7);
				unk_0x8744D2E3FC95740E(&uLocal_322, 8);
				unk_0x8744D2E3FC95740E(&uLocal_322, 11);
				if (system::timera() > 0)
				{
					system::settimera(0);
				}
			}
		}
		else if (func_254("IMPEX_FSPRAY_FM"))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

int func_403()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0xC39AE5D390581AD5(uVar3, iVar1, 0))
		{
			if (unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(iVar3, iVar1, 0)))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0xFD5C5BBD1FE92BB7(iVar3, iVar1, 0), 0))
				{
					uVar0 = unk_0xFD5C5BBD1FE92BB7(iVar3, iVar1, 0);
					if (!unk_0x501EBB0523078750(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_404(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0x1B1A446EFA398EB5(iVar0))
		{
			*uParam0 = func_405(iVar0, 0);
			if (!unk_0x0AF5E4A6C74DC312((400 + *uParam0), 0, 0, 1, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_405(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (func_408(unk_0x259BE71D8A81D4FA()) && !bParam1)
	{
		return 0;
	}
	fVar3 = unk_0xF04E476AE02C4646(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x4C7724D572378B05(iParam0) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0,6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0,4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0x31B58D7972181BFA(iParam0) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0,6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0,4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (system::to_float(unk_0x8D91ADE44AC79BC9(iParam0)) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0,6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0,4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0xB69AE16F62A14003(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0x2495CCF0BF303C19(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0x8545B773982EAE2B(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0x2495CCF0BF303C19(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0x8545B773982EAE2B(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0xFC954C8C860FAB80(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x01D37530E5C420F5(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x01D37530E5C420F5(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		iVar1 = 0;
		if (unk_0xAD830DCD82C63F31(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0xAD830DCD82C63F31(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0xAD830DCD82C63F31(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0xAD830DCD82C63F31(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0xAD830DCD82C63F31(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0xAD830DCD82C63F31(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xB4A09397270CB974(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x08046513BC06BFBC(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x548F6F43A7CB6F45(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xE3DB661464962CF4(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_407(unk_0x4B423FAA24E8ABF0(iParam0), 0))
	{
		iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_12010));
		if (iVar0 > system::floor((4f * Global_262145.f_12010)))
		{
			iVar4 = Global_262145.f_12008;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12009)
		{
			iVar0 = Global_262145.f_12009;
		}
	}
	else if (func_406(iParam0))
	{
		iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_12013));
		if (iVar0 > system::floor((4f * Global_262145.f_12013)))
		{
			iVar4 = Global_262145.f_12011;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12012)
		{
			iVar0 = Global_262145.f_12012;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_406(int iParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_407(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_123())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_122(Global_2657971[iParam0 /*465*/].f_322.f_8) == 22;
			}
		}
	}
	return 0;
}

bool func_409(int iParam0)
{
	return unk_0xD130E7CDEE903624(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_410(int iParam0)
{
	if (unk_0xD130E7CDEE903624(iParam0, "Veh_Modded_By_Player") && unk_0xE2F6FE9B61232165(iParam0, "Veh_Modded_By_Player") != unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_411()
{
	var uVar0;
	
	if (func_543())
	{
		return 0;
	}
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (!func_414(uVar0, 1) && !func_413(uVar0, 1))
		{
			if (func_412(unk_0x4B423FAA24E8ABF0(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_337.f_35[iVar1] == iVar0)
			{
				if (!func_532(&(Local_337.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_413(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0x77B62CAA5DF0922A("TestDrive", 2))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "TestDrive"))
				{
					return unk_0x3F40AE65F056B43D(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_414(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415()
{
	var uVar0;
	
	if (func_543())
	{
		return 0;
	}
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		if (!Global_1919055)
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (!func_414(uVar0, 1) && !func_413(uVar0, 1))
			{
				if (!unk_0x0BCE48C8677F9824(uVar0, 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iVar0, 1))
					{
						if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35 <= 0)
						{
							if (!unk_0xD130E7CDEE903624(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1919054)
								{
									if (bLocal_294)
									{
										bLocal_294 = false;
									}
									if (func_75(&Local_336, unk_0x4B423FAA24E8ABF0(iVar0)))
									{
										Global_2738934.f_1802 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_294)
					{
						bLocal_294 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_416()
{
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		if (BitTest(Local_337.f_23, 0))
		{
			if (unk_0x93BF17E19A9F0E9B(Local_337.f_22))
			{
				if (func_4(Local_337.f_22))
				{
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_337.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_417(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_114())
		{
			bVar0 = false;
		}
	}
	if (!func_15(unk_0x259BE71D8A81D4FA(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 1))
	{
		bVar0 = false;
	}
	if (func_124(unk_0x259BE71D8A81D4FA(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_418()
{
	int iVar0;
	
	switch (iLocal_119)
	{
		case 0:
			if (!func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				if (!func_534(&uLocal_120) || func_532(&uLocal_120, 2000, 0))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1199,403f, -3113,591f, 4,5453f) < 400f)
						{
							func_421(&uLocal_124, 4, iLocal_118, "MECHANIC_IMP", 0, 1);
							iLocal_347 = 0;
							iLocal_119++;
						}
					}
					func_47(&uLocal_120);
					func_533(&uLocal_120, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1199,403f, -3113,591f, 4,5453f) < 600f)
					{
						if (bLocal_103)
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1204,224f, -3121,533f, 4,357823f, 1204,521f, -3107,603f, 8,653814f, 5,1875f, 0, 1, 0))
								{
									if (!iLocal_347)
									{
										iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
										if (func_405(iVar0, 0) > 500)
										{
											sLocal_348 = "FM_IEPOOR";
										}
										else
										{
											sLocal_348 = "FM_IEGOOD";
										}
										iLocal_347 = 1;
									}
									else if (func_420(&uLocal_124, "FM_1AU", sLocal_348, 12, 0, 0, 0))
									{
										iLocal_289 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
										iLocal_119++;
										iLocal_347 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_419();
						iLocal_119 = 0;
					}
				}
				else
				{
					func_419();
					iLocal_119 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1199,403f, -3113,591f, 4,5453f) < 600f)
					{
						if (bLocal_103)
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_289)
								{
									iLocal_119 = 1;
								}
							}
						}
					}
					else
					{
						func_419();
						iLocal_119 = 0;
					}
				}
				else
				{
					func_419();
					iLocal_119 = 0;
				}
			}
			break;
	}
}

void func_419()
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_118))
	{
		unk_0x55098D9E9AD58806(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_118;
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

bool func_420(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_365(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_357(sParam2, iParam3, 0);
}

void func_421(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	
	if (func_417(1, 1))
	{
		switch (Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1)
		{
			case 0:
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					bVar7 = func_411();
					if ((func_415() || func_416()) || bVar7)
					{
						if (!func_403())
						{
							if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
							{
								if (!func_521())
								{
									if (bLocal_102)
									{
										bLocal_102 = false;
									}
									iVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (unk_0x77B62CAA5DF0922A("AllowModSprayRepair", 2))
									{
										if (!unk_0xD130E7CDEE903624(iVar3, "AllowModSprayRepair") || (unk_0xD130E7CDEE903624(iVar3, "AllowModSprayRepair") && unk_0x3F40AE65F056B43D(iVar3, "AllowModSprayRepair") == 0))
										{
											unk_0xF46ECFD5526E8FF7(iVar3, "AllowModSprayRepair", 1);
										}
									}
									if (!iLocal_108)
									{
										if (func_520(iVar3))
										{
											unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
											unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
										}
									}
									iLocal_349 = iVar3;
									if (BitTest(uLocal_345, 15))
									{
										unk_0x8744D2E3FC95740E(&uLocal_345, 15);
									}
									if (BitTest(uLocal_322, 9))
									{
										unk_0x8744D2E3FC95740E(&uLocal_322, 9);
									}
									if (BitTest(uLocal_322, 12))
									{
										unk_0x8744D2E3FC95740E(&uLocal_322, 12);
									}
									if (BitTest(uLocal_322, 10))
									{
										unk_0x8744D2E3FC95740E(&uLocal_322, 10);
									}
									if (!BitTest(uLocal_345, 12))
									{
										if (bVar7)
										{
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0x8744D2E3FC95740E(&uLocal_345, 12);
									}
									if (func_409(iVar3))
									{
										if (!func_16(iVar3))
										{
											bLocal_95 = true;
											if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
											{
												if (bLocal_101)
												{
													bLocal_101 = false;
												}
												if (unk_0xFD5C5BBD1FE92BB7(iVar3, -1, 0) == unk_0x4A8C381C258A124D())
												{
													bLocal_98 = true;
												}
											}
											else if (func_78())
											{
												if (bLocal_98)
												{
													bLocal_98 = false;
												}
												bLocal_101 = true;
											}
											bLocal_96 = false;
											bLocal_97 = false;
											bLocal_99 = false;
											bLocal_100 = false;
											bLocal_102 = false;
											bLocal_103 = true;
											if (func_519(1215605247, 18))
											{
												bLocal_93 = true;
											}
											iLocal_331 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
											if (!unk_0xB431D60610E7F85F(iLocal_331))
											{
												if (func_264(iLocal_331, 0))
												{
													if (!BitTest(uLocal_345, 17))
													{
														unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 17);
													}
													else if (func_264(iLocal_331, 1))
													{
														Var9 = { unk_0xE5741C6B6539231F(iLocal_331) };
														if (unk_0xDF93B3CFAC96698F(iLocal_331) < 0,5f || unk_0x1D5CD3EAAA7422B0(Var9.f_1) < 1,3f)
														{
															func_518();
															func_509(unk_0x259BE71D8A81D4FA(), 0, 16388, 0);
															if (func_416())
															{
																unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 4);
																unk_0x0B0C9A0F9AAEB7F0(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), true);
															}
															if (func_415() || func_411())
															{
																unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 6);
															}
															if (func_508())
															{
																bLocal_92 = true;
															}
															else
															{
																bLocal_92 = false;
															}
															unk_0x0B74F181ADFC39BF(iLocal_331, 2);
															if (unk_0x1B1A446EFA398EB5(iLocal_331))
															{
																unk_0xD0F1DB0E50B367AD(iLocal_331, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_344[unk_0xAE032CEDCF23C6D5() /*4*/] = func_76(unk_0x4B423FAA24E8ABF0(iLocal_331));
															Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_330[iVar4] = func_123();
																if (!unk_0xC39AE5D390581AD5(iLocal_331, iVar1, 0))
																{
																	if (unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(iLocal_331, iVar1, 0)))
																	{
																		if (!unk_0x1C2F771CDC87A3A5(unk_0xFD5C5BBD1FE92BB7(iLocal_331, iVar1, 0), 0))
																		{
																			iVar0 = unk_0xFD5C5BBD1FE92BB7(iLocal_331, iVar1, 0);
																			if (unk_0x501EBB0523078750(iVar0))
																			{
																				if (func_15(unk_0x1C1C92A1CBAE364B(iVar0), 0, 0))
																				{
																					if (unk_0xCCD470854FB0E643(unk_0x1C1C92A1CBAE364B(iVar0)))
																					{
																						iLocal_330[iVar4] = unk_0x1C1C92A1CBAE364B(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_301 = func_507(unk_0x4B423FAA24E8ABF0(iLocal_331));
															iLocal_302 = func_405(iLocal_331, 0);
															fLocal_303 = system::to_float((iLocal_301 - iLocal_302));
															fLocal_303 = (fLocal_303 * Global_262145.f_2396);
															if (BitTest(uLocal_345, 4))
															{
																fLocal_303 = (fLocal_303 * 1,3f);
															}
															fLocal_303 = (fLocal_303 / system::to_float(iVar5));
															fLocal_304 = 500f;
															func_506();
															func_179(0);
															func_505(1248, 1, -1);
															if (func_254("IMPEX_DELIVER_FM"))
															{
																unk_0x428C32CC68809A35(1);
															}
															unk_0x8744D2E3FC95740E(&uLocal_345, 12);
															iVar6 = func_81(1200, -1);
															if (!BitTest(iVar6, 1))
															{
																unk_0x0B0C9A0F9AAEB7F0(&iVar6, true);
																func_147(1200, iVar6, -1, 1);
															}
															else if (!BitTest(iVar6, 2))
															{
																unk_0x0B0C9A0F9AAEB7F0(&iVar6, 2);
																func_147(1200, iVar6, -1, 1);
															}
															func_504();
															iLocal_305 = 0;
															iLocal_305 = system::round(fLocal_303);
															iLocal_305 = (iLocal_305 - (iLocal_305 % 25));
															if (iLocal_350 == iVar3)
															{
																iLocal_305 = (iLocal_305 + iLocal_307);
															}
															if (!BitTest(uLocal_345, 4))
															{
																if (iLocal_305 > Global_262145.f_164)
																{
																	iLocal_305 = Global_262145.f_164;
																}
															}
															else if (iLocal_305 > Global_262145.f_164)
															{
																iLocal_305 = Global_262145.f_164;
															}
															iLocal_306 = 0;
															fLocal_304 = (fLocal_304 * Global_262145.f_3931);
															iLocal_306 = system::round(fLocal_304);
															unk_0x8744D2E3FC95740E(&uLocal_345, 17);
															iLocal_332 = iLocal_331;
															iLocal_334 = unk_0x4B423FAA24E8ABF0(iLocal_331);
															if (!BitTest(uLocal_345, 4))
															{
																unk_0x3A6A8B40F4CEF984(19, iLocal_306, iLocal_305, iLocal_331);
															}
															else
															{
																unk_0x3A6A8B40F4CEF984(120, iLocal_306, iLocal_305, iLocal_331);
															}
															func_503(19, 1);
															func_502();
															func_537();
														}
														else if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
														{
															func_509(unk_0x259BE71D8A81D4FA(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_345, 17))
												{
													unk_0x8744D2E3FC95740E(&uLocal_345, 17);
												}
											}
										}
										else
										{
											if (bLocal_95)
											{
												bLocal_95 = false;
											}
											if (bLocal_103)
											{
												bLocal_103 = false;
											}
											if (bLocal_98)
											{
												bLocal_98 = false;
											}
											if (bLocal_101)
											{
												bLocal_101 = false;
											}
											if (bLocal_102)
											{
												bLocal_102 = false;
											}
										}
									}
									else if (!func_16(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
									{
										if (func_404(&iVar8))
										{
											if (!func_410(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
											{
												if (unk_0xFD5C5BBD1FE92BB7(iVar3, -1, 0) == unk_0x4A8C381C258A124D())
												{
													if (iLocal_350 != iVar3)
													{
														iLocal_350 = iVar3;
														iLocal_307 = 0;
													}
													else if (iLocal_307 != iVar8)
													{
														if (iLocal_307 < iVar8)
														{
															iLocal_307 = iVar8;
														}
													}
												}
												if (!bLocal_96)
												{
													bLocal_96 = true;
												}
												if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
												{
													if (func_78())
													{
														if (bLocal_97)
														{
															bLocal_97 = false;
														}
														if (unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -1, 0) == unk_0x4A8C381C258A124D())
														{
															if (func_405(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0) > 0)
															{
																if (!bLocal_100)
																{
																	bLocal_100 = true;
																}
															}
															else
															{
																if (bLocal_100)
																{
																	bLocal_100 = false;
																}
																if (!bLocal_99)
																{
																	bLocal_99 = true;
																}
															}
														}
													}
												}
												else if (!func_78())
												{
													if (bLocal_99)
													{
														bLocal_99 = false;
													}
													if (bLocal_100)
													{
														bLocal_100 = false;
													}
													if (!bLocal_97)
													{
														if (unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -1, 0) == unk_0x4A8C381C258A124D())
														{
															bLocal_97 = true;
														}
													}
												}
											}
											else
											{
												func_501();
											}
										}
										else
										{
											func_501();
										}
									}
									else
									{
										func_501();
										if (bLocal_103)
										{
											bLocal_103 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								if (iLocal_349 != iVar3)
								{
									if (!iLocal_108)
									{
										if (func_520(iVar3))
										{
											unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
											unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
										}
									}
									iLocal_349 = iVar3;
								}
								if (!bLocal_102)
								{
									func_501();
									bLocal_102 = true;
								}
							}
						}
					}
					else
					{
						func_501();
						if (bLocal_103)
						{
							bLocal_103 = false;
						}
						if (iLocal_108)
						{
							if (Local_337.f_33)
							{
								if (bLocal_113)
								{
									iLocal_108 = 0;
								}
							}
						}
						if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							if ((func_254("IMPEX_NOT_NEED") || func_254("IMPEX_NO_MORE")) || func_254("IMPEX_NOT_PVEH"))
							{
								unk_0x428C32CC68809A35(1);
							}
						}
						iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (func_414(iVar2, 1))
						{
							if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0x4A8C381C258A124D())
							{
								if (unk_0xD130E7CDEE903624(iVar2, "Player_Vehicle"))
								{
									if (unk_0xE2F6FE9B61232165(iVar2, "Player_Vehicle") != unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()) || iVar2 == iLocal_349)
									{
										if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
										{
											if (func_272())
											{
												if (!BitTest(uLocal_345, 15))
												{
													if (bVar7 || func_75(&Local_336, unk_0x4B423FAA24E8ABF0(iVar2)))
													{
														func_171("IMPEX_NOT_PVEH", -1);
														unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_345, 15))
									{
										if (iVar2 != iLocal_349)
										{
											unk_0x8744D2E3FC95740E(&uLocal_345, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_345, 15))
							{
								if (iVar2 != iLocal_349)
								{
									unk_0x8744D2E3FC95740E(&uLocal_345, 15);
								}
							}
							if (bLocal_109)
							{
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && func_519(1215605247, 18))
								{
									iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (func_264(iVar2, 0))
									{
										if (!iLocal_107)
										{
											func_179(1);
											iLocal_107 = 1;
										}
										bLocal_93 = true;
									}
								}
								else if (iLocal_107)
								{
									func_179(0);
									iLocal_107 = 0;
									bLocal_93 = false;
								}
							}
						}
						if (func_519(1215605247, 18))
						{
							if (func_272())
							{
								if (func_414(iVar2, 1))
								{
									if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
									{
										if (!BitTest(uLocal_322, 10))
										{
											func_171("IMPEX_NOT_PVEH", -1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 10);
										}
									}
								}
								else if (func_75(&Local_336, unk_0x4B423FAA24E8ABF0(iVar2)))
								{
									if (unk_0x0BCE48C8677F9824(iVar2, 0))
									{
										if (!BitTest(uLocal_322, 12))
										{
											func_171("IMPEX_NOT_CREW", -1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 12);
										}
									}
								}
								else if (!BitTest(uLocal_322, 9))
								{
									if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0x4A8C381C258A124D())
									{
										func_171("IMPEX_NOT_NEED", -1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_322, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_322, 9))
							{
								unk_0x8744D2E3FC95740E(&uLocal_322, 9);
							}
							if (BitTest(uLocal_322, 10))
							{
								unk_0x8744D2E3FC95740E(&uLocal_322, 10);
							}
							if (BitTest(uLocal_322, 12))
							{
								unk_0x8744D2E3FC95740E(&uLocal_322, 12);
							}
							if (BitTest(uLocal_345, 12))
							{
								if (func_272())
								{
									func_171("IMPEX_NO_MORE", -1);
									unk_0x8744D2E3FC95740E(&uLocal_345, 12);
									func_119();
								}
							}
						}
					}
				}
				else
				{
					func_501();
					if (bLocal_103)
					{
						bLocal_103 = false;
					}
					if (iLocal_108)
					{
						iLocal_108 = 0;
					}
				}
				break;
			
			case 1:
				if (func_15(unk_0x259BE71D8A81D4FA(), 1, 1))
				{
					if (!func_172(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), 1215605247, &uLocal_325, 0, 500, 1, 0))
					{
						Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0x8744D2E3FC95740E(&uLocal_345, 4);
					unk_0x8744D2E3FC95740E(&uLocal_345, 6);
					Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0x9390801B06EE998F())
				{
					func_497(17, 1, -1);
					if (BitTest(uLocal_345, 4))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_2), true);
						func_496();
					}
					else
					{
						func_494();
					}
					if (bLocal_92)
					{
						if (BitTest(uLocal_345, 6))
						{
							Local_90.f_3 = 2092359122;
						}
						else
						{
							Local_90.f_3 = -1279215969;
						}
						Local_90.f_4 = Local_344[unk_0xAE032CEDCF23C6D5() /*4*/];
						Local_90.f_11 = iLocal_330[0];
						Local_90.f_12 = iLocal_330[1];
						Local_90.f_13 = iLocal_330[2];
						Local_90.f_14 = iLocal_330[3];
						if (!BitTest(uLocal_345, 6))
						{
						}
					}
					unk_0x8744D2E3FC95740E(&uLocal_345, 6);
					func_492(4, iLocal_305);
					func_476(&iLocal_305, 1);
					if (iLocal_305 > 0)
					{
						if (func_475())
						{
							func_464(joaat("service_earn_import_export"), iLocal_305, &iVar10, 0, 0, 0);
							Global_4535950[iVar10 /*85*/].f_3 = iLocal_334;
						}
						else
						{
							unk_0x4D10D49AEE7C9AEA(iLocal_305, iLocal_334);
						}
					}
					if (iLocal_302 > 0)
					{
						func_463("IMPEX_PASS", iLocal_305, 7000, 0);
					}
					else
					{
						func_463("IMPEX_PASS", iLocal_305, 7000, 0);
					}
					func_429(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_306, 1, -1, 0);
					func_428(29);
					func_426(45, 1);
					func_509(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					Local_344[unk_0xAE032CEDCF23C6D5() /*4*/].f_1 = 0;
					Local_344[unk_0xAE032CEDCF23C6D5() /*4*/] = -1;
					unk_0x8744D2E3FC95740E(&uLocal_345, 4);
					iLocal_114 = 1;
					func_423(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_400(unk_0x259BE71D8A81D4FA(), 1))
		{
			if (!bLocal_109)
			{
				if (iLocal_107)
				{
					func_179(0);
					iLocal_107 = 0;
				}
			}
			else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && func_519(1215605247, 18))
			{
				iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_264(iVar2, 0))
				{
					if (!iLocal_107)
					{
						func_179(1);
						iLocal_107 = 1;
					}
					bLocal_93 = true;
				}
			}
			else if (iLocal_107)
			{
				func_179(0);
				iLocal_107 = 0;
				bLocal_93 = false;
			}
		}
		if (bLocal_96)
		{
			bLocal_96 = false;
		}
		if (bLocal_97)
		{
			bLocal_97 = false;
		}
		if (bLocal_99)
		{
			bLocal_99 = false;
		}
		if (bLocal_100)
		{
			bLocal_100 = false;
		}
	}
}

void func_423(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_425(iParam1, iParam2))
	{
		iVar0 = func_424();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_424()
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

int func_425(int iParam0, var uParam1)
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

void func_426(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_427())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2737992[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574749.f_4[iVar0] == -1)
			{
				Global_1574749.f_4[iVar0] = iParam0;
				Global_1574749.f_1 = 1;
				Global_1574749 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_427()
{
	if (Global_262145.f_34959)
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9090)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_531() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_429(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_430(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_431(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_431(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_454();
	if (func_453(uParam2))
	{
	}
	if (func_452())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_450(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_449(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_447(0, &iVar1);
					break;
				
				case 3:
					func_447(1, &iVar1);
					break;
				
				case 1:
					func_444(&iVar1);
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
			func_505(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_439((func_443(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_2 != -1)
				{
					func_505(1166, iVar1, -1);
				}
				func_436(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_432((func_434(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_432((func_434(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_432(int iParam0)
{
	if (func_452())
	{
		Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_5 = iParam0;
		func_433(joaat("mpply_globalxp"), iParam0);
	}
}

void func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_434(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_15(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_435(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_435(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_435(int iParam0)
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

void func_436(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_205(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_437(func_438(&Var0));
			if (iVar1 == 0)
			{
				func_433(joaat("mpply_crew_local_xp_0"), (func_435(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar1 == 1)
			{
				func_433(joaat("mpply_crew_local_xp_1"), (func_435(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar1 == 2)
			{
				func_433(joaat("mpply_crew_local_xp_2"), (func_435(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar1 == 3)
			{
				func_433(joaat("mpply_crew_local_xp_3"), (func_435(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar1 == 4)
			{
				func_433(joaat("mpply_crew_local_xp_4"), (func_435(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_437(int iParam0)
{
	if (iParam0 == func_435(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_435(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_435(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_435(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_435(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_438(var uParam0)
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

void func_439(int iParam0, int iParam1, int iParam2)
{
	if (func_452())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_81(640, -1))
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_81(640, -1))
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
		if (func_257(unk_0x259BE71D8A81D4FA()))
		{
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_6 = func_440(iParam0, 1);
		}
		func_147(640, iParam0, -1, 1);
		func_147(641, func_440(iParam0, 1), -1, 1);
		func_423(-1109644434, 7, 0);
	}
}

int func_440(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_441(iParam0, 0);
}

int func_441(int iParam0, int iParam1)
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
		if (func_442(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_442(iVar3) < iParam0)
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

int func_442(int iParam0)
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

int func_443(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_81(640, -1);
			}
			else if (func_257(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_81(640, -1);
	}
	return 0;
}

void func_444(int iParam0)
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
				if (unk_0x1864096A95E36EBA(iVar5) == iVar1 || func_215(unk_0x1864096A95E36EBA(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_446(unk_0x259BE71D8A81D4FA(), iVar5))
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
		iVar6 = system::round((func_445(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_445(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_445(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_446(int iParam0, int iParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_205(iParam0) };
		Global_2707320 = { func_205(iParam1) };
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

void func_447(bool bParam0, int iParam1)
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
				if (func_15(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_446(unk_0x259BE71D8A81D4FA(), iVar4))
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
			if (func_15(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_448(unk_0x259BE71D8A81D4FA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_446(unk_0x259BE71D8A81D4FA(), iVar4))
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
		iVar5 = system::round((func_445(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_445(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_448(int iParam0, int iParam1)
{
	return system::vdist(func_30(iParam0), func_30(iParam1));
	return 0f;
}

int func_449(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_445(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_450(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_443(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_443(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_451(8000, 0, 0) > 0)
	{
		if (func_451(8000, 0, 0) < (iParam0 + func_443(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_451(8000, 0, 0) - func_443(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_451(int iParam0, bool bParam1, int iParam2)
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
	return func_442(iParam0);
}

int func_452()
{
	return 1;
}

int func_453(char* sParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_454()
{
	int iVar0;
	
	if (func_462(unk_0x259BE71D8A81D4FA()) || func_461(unk_0x259BE71D8A81D4FA()))
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
	else if (func_459() || func_456(unk_0x259BE71D8A81D4FA()))
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
	else if (func_455(Global_4718592.f_185586))
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

bool func_455(int iParam0)
{
	return iParam0 == 89;
}

int func_456(int iParam0)
{
	return func_457(func_458(iParam0));
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_458(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_124(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_459()
{
	if (unk_0x834C960822A4683F())
	{
		return func_32();
	}
	return func_460(Global_4718592.f_127178);
}

int func_460(int iParam0)
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

bool func_461(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_462(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

void func_463(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

void func_464(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_475())
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
				func_465(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_465(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_465(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_465(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_465(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_475())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_28()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_472(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_471(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_466(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_466(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_467(iParam0);
	}
}

void func_467(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_475())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_470(iParam0))
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
		func_468(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_468(var uParam0)
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
	func_469(&(uParam0->f_14));
	func_469(&(uParam0->f_14.f_13));
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

void func_469(var uParam0)
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

int func_470(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_471(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_472(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_475())
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
				func_473(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_473(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_474();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_474()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

int func_475()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_491())
		{
			if (func_490(0))
			{
				if (!func_486(0))
				{
					if (unk_0x762604C40829DB72(func_485()))
					{
						if (func_484() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_484());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_482(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_481("GB_BCUT_TICK1", func_485(), iVar0, 0, 0, 1);
						}
						func_480(20);
						func_477(func_485(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_477(bool bParam0, int iParam1, int iParam2)
{
	struct<9> Var0;
	
	if (func_15(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = unk_0x259BE71D8A81D4FA();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_479(bParam0);
		func_478(&(Var0.f_7), &(Var0.f_8));
		unk_0x71A6F836422FDD2B(1, &Var0, 9, func_8(bParam0), Var0.f_0);
	}
}

void func_478(var uParam0, var uParam1)
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_479(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_512;
}

void func_480(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5249.f_7[iVar0]), bVar1);
}

int func_481(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x4E5A3D96808F7F84(func_208(iParam1, -2, 1, 0, 0));
		unk_0x60D332F23943B34F(func_206(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x4E5A3D96808F7F84(iParam3);
		}
		unk_0x511D14ED2DA887E1(iParam2);
		iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
		func_200(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_482(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_483(1);
	}
	else
	{
		iVar1 = func_483(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_483(bool bParam0)
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_12843;
}

int func_484()
{
	return Global_262145.f_12842;
}

bool func_485()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

bool func_486(bool bParam0)
{
	return func_487(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_487(int iParam0, bool bParam1)
{
	return func_488(iParam0, bParam1, 1);
}

int func_488(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_489(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_9(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_490(bool bParam0)
{
	return func_230(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_491()
{
	return func_231(unk_0x259BE71D8A81D4FA());
}

void func_492(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 != -1)
		{
			if (func_493())
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

int func_493()
{
	if (unk_0x761778199FE1211C() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_494()
{
	int iVar0;
	
	iVar0 = func_495(42);
	Global_2645400[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_495(int iParam0)
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

void func_496()
{
	int iVar0;
	
	iVar0 = func_495(43);
	Global_2645400[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_500(iParam0, func_83(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_498(iParam0, iVar0, iParam2);
}

void func_498(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_499(uParam0, uParam2);
	unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
}

var func_499(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(8, uParam0, func_83(uParam1));
}

int func_500(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_499(uParam0, iParam1);
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_501()
{
	if (bLocal_102)
	{
		bLocal_102 = false;
	}
	if (bLocal_97)
	{
		bLocal_97 = false;
	}
	if (bLocal_98)
	{
		bLocal_98 = false;
	}
	if (bLocal_99)
	{
		bLocal_99 = false;
	}
	if (bLocal_101)
	{
		bLocal_101 = false;
	}
	if (bLocal_100)
	{
		bLocal_100 = false;
	}
}

void func_502()
{
	Global_2359296[func_531() /*5570*/].f_681.f_35 = unk_0x39D1D336459711BE();
}

void func_503(int iParam0, bool bParam1)
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
			Global_2359296[func_531() /*5570*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_531() /*5570*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_531() /*5570*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_531() /*5570*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_531() /*5570*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_531() /*5570*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_531() /*5570*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_531() /*5570*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_531() /*5570*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_531() /*5570*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_531() /*5570*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_531() /*5570*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_531() /*5570*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_531() /*5570*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_531() /*5570*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_531() /*5570*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_531() /*5570*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_531() /*5570*/].f_681.f_30 = iVar0;
			break;
	}
}

void func_504()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_81(1200, -1);
	if (!BitTest(iVar0, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, true);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_147(1200, iVar0, -1, 1);
	}
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_81(iParam0, func_83(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_147(iParam0, iVar0, iParam2, 1);
}

void func_506()
{
	if (!Global_2738934.f_4647)
	{
		Global_2738934.f_4647 = 1;
	}
	func_269(&(Global_2738934.f_4648), 0, 0);
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_508()
{
	int iVar0;
	
	if (func_15(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0xC39AE5D390581AD5(iVar0, -1, 0))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_509(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_517())
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
		if (!func_137())
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
				else if (bVar14 || ((!func_26(unk_0x259BE71D8A81D4FA(), 0) && !func_251()) && !func_250(unk_0x259BE71D8A81D4FA())))
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
					func_514(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_513(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(iVar27, false);
					}
					unk_0x11C125313CB8ADA2(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(iVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(iVar27) && unk_0x69CD279BFCFE278E(iVar27))
				{
					unk_0xAF8337BF5A296283(iVar27);
				}
				unk_0x9FF00EA9A61211D2(iVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_512();
					func_511();
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
				if (!func_513(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(iVar27, 1);
						}
					}
					if (func_510(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(iVar27, true);
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
				unk_0x3F58BFCF656F0DF1(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(iVar27) && !unk_0x7F420695E3F776FB(iVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
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

bool func_510(int iParam0)
{
	return iParam0 == 17;
}

void func_511()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_512()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_514(int iParam0, int iParam1, int iParam2)
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
				func_516();
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
		if (func_26(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_515(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_516()
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

int func_517()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_518()
{
	func_119();
}

int func_519(int iParam0, int iParam1)
{
	if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), func_175(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (!func_410(iParam0))
			{
				if (iParam0 != iLocal_349)
				{
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_521()
{
	if (Global_2672855.f_63.f_20 || Global_2672855.f_63.f_21)
	{
		return 1;
	}
	return 0;
}

void func_522(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_523(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_530(iParam1);
			break;
		
		case 1:
			iVar0 = func_529(iParam1);
			break;
		
		case 2:
			iVar0 = func_528(iParam1);
			break;
		
		case 3:
			iVar0 = func_527(iParam1);
			break;
		
		case 4:
			iVar0 = func_526(iParam1);
			break;
		
		case 5:
			iVar0 = func_525(iParam1);
			break;
		
		case 6:
			iVar0 = func_524(iParam1);
			break;
	}
	return iVar0;
}

int func_524(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_526(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_527(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_529(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_76(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_76(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_76(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_76(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_76(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_531()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_532(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_533(uParam0, bParam2, 0);
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

void func_533(var uParam0, bool bParam1, bool bParam2)
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

bool func_534(var uParam0)
{
	return uParam0->f_1;
}

void func_535()
{
	Global_2359296[func_531() /*5570*/].f_681.f_36 = unk_0x39D1D336459711BE();
}

void func_536(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDDA4278694CAA369();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_523(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[func_531() /*5570*/].f_681.f_37 = iVar1;
}

void func_537()
{
	func_540("CELL_CLTEST1", 0);
	func_538("CELL_CLTEST1");
	func_540("CELL_CLTEST6", 0);
	func_538("CELL_CLTEST6");
}

void func_538(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xFF692AB7350A74D7(&(Global_113969.f_14144[iVar0 /*104*/])))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar0 /*104*/]), sParam0))
			{
				if (Global_113969.f_14144[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_319();
					Global_113969.f_14144[iVar0 /*104*/].f_99[Global_20930] = 0;
					if (func_539(iVar0))
					{
					}
					else
					{
						Global_113969.f_14144[iVar0 /*104*/].f_24 = 0;
						Global_113969.f_14144[iVar0 /*104*/].f_28 = 0;
						Global_113969.f_14144[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xFE3A52C5B7AE3101(Global_113969.f_14144[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_539(int iParam0)
{
	if ((Global_113969.f_14144[iParam0 /*104*/].f_99[0] == 1 || Global_113969.f_14144[iParam0 /*104*/].f_99[1] == 1) || Global_113969.f_14144[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_540(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xFF692AB7350A74D7(&(Global_113969.f_14144[iVar0 /*104*/])))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_113969.f_14144[iVar0 /*104*/]), sParam0))
			{
				if (Global_113969.f_14144[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_113969.f_14144[iVar0 /*104*/].f_24 = 1;
				if (Global_113969.f_14144[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_113969.f_14144[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_113969.f_14054[0 /*20*/].f_17 = 0;
					}
					if (Global_113969.f_14144[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_113969.f_14054[1 /*20*/].f_17 = 0;
					}
					if (Global_113969.f_14144[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_113969.f_14054[2 /*20*/].f_17 = 0;
					}
					if (Global_113969.f_14144[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_113969.f_14054[3 /*20*/].f_17 = 0;
					}
					Global_113969.f_14144[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_113969.f_14144[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_541()
{
	if (unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (func_140(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		return 0;
	}
	if (func_112())
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
	if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (Global_1836444)
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_553())
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (func_542())
	{
		return 0;
	}
	if (!func_137())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (unk_0xF859473E4AD09F30())
	{
		return 0;
	}
	return 1;
}

bool func_542()
{
	return Global_76498;
}

bool func_543()
{
	if (Global_2359296[func_531() /*5570*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (unk_0x39D1D336459711BE() - Global_2359296[func_531() /*5570*/].f_681.f_35) < 86400;
}

bool func_544()
{
	if (Global_2359296[func_531() /*5570*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (unk_0x39D1D336459711BE() - Global_2359296[func_531() /*5570*/].f_681.f_36) < 86400;
}

bool func_545()
{
	if (!BitTest(uLocal_345, 2))
	{
		if (!func_26(unk_0x259BE71D8A81D4FA(), 0))
		{
			if ((((((!unk_0xF859473E4AD09F30() && !func_140(unk_0x259BE71D8A81D4FA(), 1, 0)) && !func_114()) && (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))) && unk_0x9390801B06EE998F()) && func_547(19)) && !func_546(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_345, 2);
			}
		}
	}
	return BitTest(uLocal_345, 2);
}

int func_546(int iParam0)
{
	if (iParam0 != func_123())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_547(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_549(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_548(unk_0x259BE71D8A81D4FA(), 1);
	iVar2 = func_440(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_443(iParam0);
}

int func_549(int iParam0)
{
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_550(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_550(int iParam0)
{
	return func_551(123, iParam0);
}

int func_551(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_552(iParam0, uParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_552(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_83(uParam1));
}

bool func_553()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

int func_554()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_560())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_559())
	{
		return 1;
	}
	if (func_558(159))
	{
		if (!func_557())
		{
			return 1;
		}
	}
	if (func_558(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_555() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_555()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_555()
{
	switch (func_85())
	{
		case 0:
			return func_556();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_556()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_557()
{
	return Global_2684504.f_700;
}

int func_558(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_559()
{
	return Global_2696172;
}

bool func_560()
{
	return Global_2684504.f_695;
}

void func_561()
{
	system::wait(0);
}

void func_562()
{
	if (iLocal_117 != -1)
	{
		func_144(iLocal_117, 0);
	}
	func_564(&iLocal_324);
	if (BitTest(uLocal_345, 1))
	{
		func_563(0f, 0f, 0f, func_387(19), 1);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x93E08E0F531E2C35())
		{
			if (unk_0x8256312AC2E5471D(Local_337.f_24))
			{
				unk_0x0C2A05549FF0EB55(Local_337.f_24);
			}
			Local_337.f_24 = -1;
		}
	}
	func_397();
	Global_2738934.f_1770 = 0;
	Global_2738934.f_1771 = 0;
	Global_2738934.f_1773 = 0;
	Global_2738934.f_1799 = 0;
	if (BitTest(uLocal_345, 7))
	{
		func_278(6, 0);
	}
	func_419();
	if (unk_0xC450B06E5AAA0985(Global_1928400))
	{
		unk_0xFE54B8568B2ABD12(&Global_1928400);
	}
	func_271(0);
	if (unk_0xC450B06E5AAA0985(Global_1928411))
	{
		unk_0xFE54B8568B2ABD12(&Global_1928411);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (iLocal_94)
		{
			func_180(1215605247, 0, 0);
			func_179(0);
		}
		if (iLocal_107)
		{
			func_179(0);
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_563(struct<3> Param0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD6F9DEE4765092A9(uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x1B79E937E91F40C3(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_33(Global_2738934.f_4085[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2738934.f_4085[iVar0 /*26*/] = 0;
					Global_2738934.f_4085[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_564(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_565(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_565(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_566(struct<21> Param0)
{
	func_572(func_573(Param0.f_0), Param0);
	func_569(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_337, 74, 0);
	unk_0x7B13DC83218D9AF5(&Local_344, 129, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_568())
	{
		return 0;
	}
	Global_2738934.f_1773 = 0;
	Global_2738934.f_4503 = 0;
	if (unk_0x93E08E0F531E2C35())
	{
	}
	if (func_72(unk_0x259BE71D8A81D4FA(), 6))
	{
		func_278(6, 0);
	}
	func_567();
	return 1;
}

void func_567()
{
	var uVar0;
	
	uVar0 = func_81(1200, -1);
	if (BitTest(uVar0, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, true);
	}
	if (BitTest(uVar0, 4))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, 2);
	}
	if (BitTest(uVar0, 5))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, 3);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_346, false);
	}
}

int func_568()
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
		if (func_560())
		{
			return 0;
		}
		if (func_558(157))
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

int func_569(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_571();
			}
			else
			{
				return 0;
			}
		}
		if (!func_570(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_571();
					}
					else
					{
						return 0;
					}
				}
				if (func_560())
				{
					if (!bParam2)
					{
						func_571();
					}
					else
					{
						return 0;
					}
				}
				if (func_558(157))
				{
					if (!bParam2)
					{
						func_571();
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
					func_571();
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
				func_571();
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
			func_571();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_570(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_571()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_572(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_571();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_573(int iParam0)
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
	switch (func_574(func_575(iParam0, 1)))
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

int func_574(int iParam0)
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

int func_575(int iParam0, bool bParam1)
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

