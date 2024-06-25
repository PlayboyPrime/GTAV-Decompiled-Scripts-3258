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
	int iLocal_42 = 0;
	bool bLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47[2] = { 0, 0 };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54[2] = { 0, 0 };
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59[2];
	float fLocal_60[2] = { 0f, 0f };
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86[2] = { 0, 0 };
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	char[] cLocal_103[8] = 0;
	struct<10> Local_104[16];
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = -1;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 1000;
	var uLocal_119 = 1000;
	var uLocal_120 = 0;
	var uLocal_121 = 8;
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
	var uLocal_268 = 1;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	float fLocal_273 = 0f;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_275 = { 0, 0, 0 } ;
	int iLocal_276 = 0;
	struct<3> Local_277 = { 0, 0, 0 } ;
	float fLocal_278 = 0f;
	int iLocal_279[2] = { 0, 0 };
	int iLocal_280 = 0;
	struct<3> Local_281 = { 0, 0, 0 } ;
	struct<3> Local_282 = { 0, 0, 0 } ;
	struct<3> Local_283 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	float fLocal_288 = 0f;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	int iLocal_292[2] = { 0, 0 };
	int iLocal_293 = 0;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298[2] = { 0, 0 };
	int iLocal_299[2] = { 0, 0 };
	struct<2> Local_300 = { 0, 5 } ;
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
	var uLocal_316 = 5;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	Local_63 = { 0,0203f, -3,1441f, 0,5027f };
	Local_64 = { 90f, 0f, 0f };
	Local_66 = { 0f, 0f, 0f };
	Local_67 = { 0f, 0f, 0f };
	iLocal_93 = 1;
	iLocal_94 = 1;
	cLocal_103 = "RESECAU";
	iLocal_269 = -1;
	fLocal_273 = -3,55f;
	Local_274 = { 0,014f, -0,9111f, 1,2317f };
	Local_275 = { 0f, -3,4368f, 1,2317f };
	iLocal_284 = -1;
	iLocal_285 = -1;
	iLocal_293 = -1;
	Local_65 = { Local_65 };
	Local_65 = { ScriptParam_300.f_1[0 /*3*/] };
	if (system::vdist(Local_65, -337,3338f, -1460,373f, 29,5668f) < 5f)
	{
		bLocal_43 = true;
	}
	else if (system::vdist(Local_65, -588,4711f, -866,9462f, 25,3292f) < 5f)
	{
		bLocal_43 = 2;
	}
	else if (system::vdist(Local_65, -389f, 6061f, 31f) < 5f)
	{
		bLocal_43 = 3;
	}
	else if (system::vdist(Local_65, -600f, -1094f, 22,76f) < 5f)
	{
		bLocal_43 = 4;
	}
	else if (system::vdist(Local_65, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_43 = 5;
	}
	else if (system::vdist(Local_65, -595,5618f, -667,7235f, 31,0544f) < 5f)
	{
		bLocal_43 = 6;
	}
	else if (system::vdist(Local_65, 3018,384f, 3634,017f, 70,4076f) < 5f)
	{
		bLocal_43 = 7;
	}
	else if (system::vdist(Local_65, -2815,661f, 2208,171f, 27,8382f) < 5f)
	{
		bLocal_43 = 8;
	}
	else if (system::vdist(Local_65, 856,7742f, -2067,845f, 29,0704f) < 5f)
	{
		bLocal_43 = 9;
	}
	else if (system::vdist(Local_65, 805,1932f, -703,1327f, 28,1632f) < 5f)
	{
		bLocal_43 = 10;
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (Global_4)
	{
		if (bLocal_43 != 2)
		{
			unk_0xBBC29EBE6E1A48FA();
		}
	}
	else
	{
		if (unk_0x96CFB880BAC634CE(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(iLocal_47[iVar0], iLocal_48, 0))
						{
							unk_0xEBA229B2E0BB05E0(iLocal_47[iVar0], iLocal_48, -1, func_248(iLocal_48), 1073741824, 1, 0, 0);
						}
					}
					else
					{
						unk_0x0FD8B5F4BB15CD71(iLocal_47[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_65, 9, bLocal_43, 1, 0))
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	uLocal_57 = unk_0xA7B0B03284E7503C(Local_61 + Vector(30f, 30f, 30f), Local_61 - Vector(30f, 30f, 30f), 0, 1, 1, 1, 1);
	while (true)
	{
		system::wait(0);
		func_184(&uLocal_121);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0xECF30459397D5190("RE_SV", 0);
			switch (iLocal_296)
			{
				case 0:
					if (unk_0x173751E886F8E9AB() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_42 == 3 && !(unk_0x7B780C491DEC834E(Local_61, 3f) && func_160(unk_0x4A8C381C258A124D(), Local_61, 1) < 150f)) || iLocal_42 != 3)
							{
								if (iLocal_42 == 3)
								{
									if (!unk_0x7B780C491DEC834E(Local_61, 8f))
									{
										unk_0x2094BC4B6731BA68(Local_61, 4f, 1, 0, 0, 0);
									}
									iLocal_44 = 4;
									bLocal_77 = true;
								}
								else
								{
									iLocal_44 = 1;
								}
								func_159();
								if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && iLocal_42 == 3)
								{
									unk_0x93C337B66C95C99B(iLocal_48, 5f);
								}
								system::settimera(0);
								iLocal_296++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
					{
						if (((system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) < 10000f || !unk_0xF6C26AE940C14749(iLocal_48)) || (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0xF6C26AE940C14749(iLocal_47[0]))) || (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0xF6C26AE940C14749(iLocal_47[1])))
						{
							iLocal_296++;
						}
					}
					if (func_158())
					{
						iLocal_296++;
					}
					if (iLocal_296 != 1)
					{
						system::settimera(0);
					}
					break;
				
				case 2:
					if (system::timera() > 2000)
					{
						if (iLocal_42 != 3)
						{
							func_153();
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_48) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (iLocal_42 == 3)
						{
							func_148();
							if (!unk_0xF6C26AE940C14749(iLocal_48) && (system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0xF6C26AE940C14749(iLocal_48) && iLocal_44 == 4) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_68, Local_69, fLocal_70, 0, 1, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_44 == 4 && unk_0xF6C26AE940C14749(iLocal_48)) && iLocal_42 != 3)
						{
							if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_296 > 0)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0xF6C26AE940C14749(iLocal_48))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) > 62500f)
					{
						func_231();
					}
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) > 10000f && !unk_0x173751E886F8E9AB())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
			if (!unk_0xC450B06E5AAA0985(uLocal_55))
			{
				if (!func_138(2) && !bLocal_82)
				{
					if (!unk_0x4C705AAF75363287())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_50))
				{
					if (iLocal_297 != 0)
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_50, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < system::pow(50f, 2f))
						{
							iLocal_297 = 0;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				else if (((bLocal_77 && !unk_0xB0E14182FAD64944(uLocal_101)) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0)) && !bLocal_87)
				{
					if (iLocal_297 != 1)
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < system::pow(50f, 2f))
						{
							iLocal_297 = 1;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				else if (unk_0xB0E14182FAD64944(uLocal_101))
				{
					if (iLocal_297 != 2)
					{
						if (system::vdist2(unk_0x80C8AA1625977488(uLocal_101), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < system::pow(50f, 2f))
						{
							iLocal_297 = 2;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_50))
					{
						func_128(&uLocal_109, iLocal_50, 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_50, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > system::pow(50f, 2f))
						{
							iLocal_297 = -1;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				else if (iLocal_297 == 1)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 1))
					{
						func_128(&uLocal_109, iLocal_48, 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > system::pow(50f, 2f))
						{
							iLocal_297 = -1;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				else if (iLocal_297 == 2)
				{
					if (unk_0xB0E14182FAD64944(uLocal_101))
					{
						func_105(&uLocal_109, unk_0x80C8AA1625977488(uLocal_101), 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0x80C8AA1625977488(uLocal_101), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > system::pow(50f, 2f))
						{
							iLocal_297 = -1;
							func_135(&uLocal_109, 0, 0);
						}
					}
				}
				if (((!unk_0x1C2F771CDC87A3A5(iLocal_48, 0) && bLocal_77) && !bLocal_79) && (!func_138(0) || (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_stickybomb"), 0) && !func_138(1))))
				{
					switch (iLocal_98)
					{
						case 0:
							if (!unk_0x4C705AAF75363287() && system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_98++;
							}
							break;
						
						case 1:
							if (!unk_0x4C705AAF75363287())
							{
								iLocal_99 = unk_0x1DD05E817C89C737();
								iLocal_98++;
							}
							break;
						
						case 2:
							if ((unk_0x1DD05E817C89C737() - iLocal_99) > 2000 && unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_stickybomb"), 0))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_98++;
							}
							break;
						}
				}
				if (bLocal_79 || bLocal_87)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0x428C32CC68809A35(1);
					}
				}
			}
			switch (iLocal_44)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
					{
						if (unk_0xD8746B5875BA4019(iLocal_47[0]) != 3)
						{
							unk_0x085B81BB17715A70(iLocal_47[0], 3);
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
					{
						if (unk_0xD8746B5875BA4019(iLocal_47[1]) != 3)
						{
							unk_0x085B81BB17715A70(iLocal_47[1], 3);
						}
					}
					if (((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0)) && !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && !unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0))
					{
						iLocal_93 = 1;
						func_79(iLocal_47[1]);
						func_77(0, 1);
					}
					else if (iLocal_93 == 1)
					{
						if (unk_0x4FAFF4BCB7633475(iLocal_47[1]) || unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0))
						{
							iLocal_46 = 0;
							iLocal_93 = 0;
						}
						else
						{
							func_79(iLocal_47[1]);
						}
					}
					else if (iLocal_93 == 0)
					{
						if (unk_0x4FAFF4BCB7633475(iLocal_47[0]) || unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0))
						{
							iLocal_93 = -1;
						}
						else
						{
							func_79(iLocal_47[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0) == unk_0x4A8C381C258A124D()) && !bLocal_81) && iLocal_44 != 8)
			{
				if (bLocal_77)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_78)
			{
				if (unk_0x048553DADAD2512F(iLocal_58, joaat("player")) != 5)
				{
					unk_0xD414C47AFF81382A(5, iLocal_58, joaat("player"));
					unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_58);
				}
			}
			if (bLocal_79)
			{
				if ((unk_0xB0E14182FAD64944(uLocal_101) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uLocal_101)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_87)
			{
				if (func_67())
				{
					bLocal_87 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0xFC8BFE4B41177C22(iLocal_47[iVar2]))
				{
					if ((!unk_0x1C2F771CDC87A3A5(iLocal_47[iVar2], 0) && !unk_0x4FAFF4BCB7633475(iLocal_47[iVar2])) && system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_47[0], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_48))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 0))
						{
							iVar3 = 1;
						}
					}
					if ((system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 10000f && unk_0xF6C26AE940C14749(iLocal_48)) || system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_75)
		{
			if (func_28())
			{
				iLocal_91 = unk_0x1DD05E817C89C737();
				bLocal_75 = true;
			}
		}
		if (bLocal_75)
		{
			if (!bLocal_76)
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_91) > 5000)
				{
					unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
					if (func_27() < 30f)
					{
						if (func_4(&Local_104, cLocal_103, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_76 = true;
						}
					}
					else
					{
						bLocal_76 = true;
					}
				}
			}
		}
		if (((unk_0x1DD05E817C89C737() - iLocal_91) > 10000 && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) && !iLocal_90)
		{
			iVar4 = unk_0xC5935DFB3F39785A(0, 3);
			if (iVar4 == 0)
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_90 = 1;
		}
		if (bLocal_76)
		{
			if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(func_3(), 1)) < system::pow(50f, 2f))
				{
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
					{
						unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
					}
					unk_0xEFE2B06D5134CD46(unk_0x259BE71D8A81D4FA(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
				}
			}
		}
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && func_2())
		{
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7BFB76C576628F3D(iLocal_48, 0) > 0f || unk_0x7BFB76C576628F3D(iLocal_48, 1) > 0f)
			{
				if (unk_0x38A100E16C95161B(iLocal_48) == 3)
				{
					unk_0x0B74F181ADFC39BF(iLocal_48, 1);
				}
			}
			if (!bLocal_80)
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 0))
				{
					bLocal_80 = true;
				}
			}
			if (!bLocal_80)
			{
				if (unk_0x7BFB76C576628F3D(iLocal_48, 0) == 0f && unk_0x7BFB76C576628F3D(iLocal_48, 1) == 0f)
				{
					if (unk_0x38A100E16C95161B(iLocal_48) == 1)
					{
						unk_0x0B74F181ADFC39BF(iLocal_48, 3);
					}
				}
			}
		}
		if (iLocal_95 != 0)
		{
			if ((iLocal_44 == 8 || iLocal_44 == 6) || iLocal_44 == 4)
			{
				unk_0x6E8A7BB566D1F7AF(iLocal_95);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar5]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[iVar5], 0))
				{
					if (unk_0x21478251925DBFD7(iLocal_50, iLocal_47[iVar5]))
					{
						if (iLocal_44 == 1)
						{
							if (!iLocal_298[iVar5])
							{
								unk_0xCC2D0738666FD62D(iLocal_47[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xCC2D0738666FD62D(iLocal_47[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_298[iVar5] = 1;
							}
						}
						if (iLocal_44 == 7)
						{
							if (!iLocal_299[iVar5])
							{
								unk_0xCC2D0738666FD62D(iLocal_47[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xCC2D0738666FD62D(iLocal_47[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_299[iVar5] = 1;
							}
						}
						if (unk_0x11552FA9DCB8E126(iLocal_47[iVar5], 4) && !iLocal_83)
						{
							unk_0x4A46DAA87A4C235E(iLocal_47[iVar5], 1);
							iLocal_83 = 1;
						}
					}
					else
					{
						if (iLocal_298[iVar5])
						{
							unk_0x384E72D362B96929(iLocal_47[iVar5], 0, -1056964608);
							unk_0x384E72D362B96929(iLocal_47[iVar5], 1, -1056964608);
							iLocal_298[iVar5] = 0;
						}
						if (iLocal_299[iVar5])
						{
							unk_0x384E72D362B96929(iLocal_47[iVar5], 0, -1056964608);
							unk_0x384E72D362B96929(iLocal_47[iVar5], 1, -1056964608);
							iLocal_299[iVar5] = 0;
						}
						if (iLocal_298[iVar5] || iLocal_299[iVar5])
						{
							iLocal_298[iVar5] = 0;
							iLocal_299[iVar5] = 0;
							unk_0x384E72D362B96929(iLocal_47[iVar5], 0, -1056964608);
							unk_0x384E72D362B96929(iLocal_47[iVar5], 1, -1056964608);
						}
						if (unk_0x11552FA9DCB8E126(iLocal_47[iVar5], 4) && iLocal_83)
						{
							unk_0x4A46DAA87A4C235E(iLocal_47[iVar5], 1);
							iLocal_83 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar5]))
				{
					if (iLocal_298[iVar5] || iLocal_299[iVar5])
					{
						iLocal_298[iVar5] = 0;
						iLocal_299[iVar5] = 0;
						unk_0x384E72D362B96929(iLocal_47[iVar5], 0, -1056964608);
						unk_0x384E72D362B96929(iLocal_47[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_77 && !bLocal_286)
		{
			if (((((unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0xA3736D76B0E93E93(iLocal_50)) && !unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94])) && !unk_0x13CCB1AD131C1082(iLocal_47[iLocal_94], "random@security_van", "sec_hand_override", 3)) && !unk_0x13CCB1AD131C1082(iLocal_47[iLocal_94], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x13CCB1AD131C1082(iLocal_47[iLocal_94], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x10425721983AE158(iLocal_47[iLocal_94], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_84)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_48))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
				{
					iLocal_84 = 1;
				}
				unk_0xE4DC7B3DD712372B(iLocal_48);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && (((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && bLocal_82) && unk_0xB0E14182FAD64944(uLocal_101)) || (!unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0xB0E14182FAD64944(uLocal_101)))) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) < 20f) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uLocal_101)) < 20f)
	{
		iVar1 = unk_0xFA4D35AD36BDA1FE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("s_m_y_cop_01") || unk_0x4B423FAA24E8ABF0(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0xFA4D35AD36BDA1FE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("s_m_y_cop_01") || unk_0x4B423FAA24E8ABF0(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x66D94742BB3D032F(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), fVar0, 0, 1024);
		if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x66D94742BB3D032F(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), fVar0, 0, 1024);
		if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
		{
			fVar0 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
		{
			if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1)) < fVar0)
			{
				fVar0 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_47[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x259BE71D8A81D4FA()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

var func_9(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_20930 = func_16();
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

int func_16()
{
	func_17();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_20(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_19(unk_0x4A8C381C258A124D());
			if (func_18(iVar0) && (!func_22(14) || Global_112917))
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

bool func_22(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_27()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
		{
			fVar0 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[0], 1));
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1)) < fVar0)
			{
				fVar0 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1));
			}
		}
	}
	return system::sqrt(fVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_47)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_47[iVar1]))
			{
				if (((!unk_0x4FAFF4BCB7633475(iLocal_47[iVar1]) && unk_0x9B3D4335E0EDB0BE(iLocal_47[iVar1], unk_0x4A8C381C258A124D(), 1)) || unk_0x4FAFF4BCB7633475(iLocal_47[iVar1])) || unk_0x1C2F771CDC87A3A5(iLocal_47[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && iLocal_84)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_87)
	{
		if (!bLocal_77)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_50))
			{
				if (!unk_0xA3736D76B0E93E93(iLocal_50))
				{
					unk_0x51C8BEA2005931AB(&iLocal_50);
					if (!unk_0xB0E14182FAD64944(uLocal_101) && !bLocal_79)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_100) > 3000)
				{
					if (unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]) || unk_0x8BF5256C439DF778(iLocal_47[iLocal_94]))
					{
						unk_0x837D67618BF89034(iLocal_50, 1, 1);
						iLocal_100 = unk_0x1DD05E817C89C737();
					}
				}
			}
			else if (!unk_0xB0E14182FAD64944(uLocal_101))
			{
				if (unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]) || ((!unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]) && unk_0x8BF5256C439DF778(iLocal_47[iLocal_94])) && !bLocal_79))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			unk_0x51C8BEA2005931AB(&iLocal_50);
		}
		if (unk_0xB0E14182FAD64944(uLocal_101))
		{
			unk_0xDDFB0941A19702BE(uLocal_101);
		}
	}
}

void func_30(struct<3> Param0, bool bParam1)
{
	if (!bLocal_87 && !bLocal_79)
	{
		if (!bParam1)
		{
			if (bLocal_77)
			{
				Param0 = { unk_0x165E2DDD2BD0F07D(unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -3,3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0x165E2DDD2BD0F07D(unk_0xD1A6A821F5AC81DB(iLocal_47[iLocal_94], 0), 1067030938, 1069547520) };
			}
		}
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_102, 3);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_102, 4);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_102, true);
		if (bParam1)
		{
			uLocal_101 = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_security_case"), Param0, unk_0x88124E0D60FB8D11(iLocal_50, 2), 0, uLocal_92, 2, 1, 0);
		}
		else
		{
			uLocal_101 = unk_0x8D4CAF9A056EA9E4(joaat("pickup_money_security_case"), Param0, uLocal_102, uLocal_92, 1, 0);
		}
		if (!unk_0xC450B06E5AAA0985(uLocal_56))
		{
			uLocal_56 = func_31(uLocal_101);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			unk_0x51C8BEA2005931AB(&iLocal_50);
		}
		bLocal_79 = true;
	}
}

int func_31(var uParam0)
{
	return func_32(uParam0);
}

int func_32(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA1521B7DF72BC9C8(uParam0);
	unk_0x5D3946F818C6B331(uVar0, func_33(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	return uVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_51))
		{
			unk_0xBFE60A5CC0C835D8(iLocal_48, 2, 0, 0);
			unk_0xBFE60A5CC0C835D8(iLocal_48, 3, 0, 0);
			if (unk_0xFC8BFE4B41177C22(iLocal_51))
			{
				unk_0x51C8BEA2005931AB(&iLocal_51);
			}
		}
	}
	switch (iLocal_45)
	{
		case 0:
			if (bLocal_77)
			{
				iLocal_45 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7BFB76C576628F3D(iLocal_48, 2) == 0f && unk_0x7BFB76C576628F3D(iLocal_48, 3) == 0f)
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_50))
				{
					if (unk_0xA3736D76B0E93E93(iLocal_50))
					{
						unk_0x837D67618BF89034(iLocal_50, 1, 1);
					}
					unk_0x4D306DD94DD6FDBA(iLocal_50, iLocal_48, 0, Local_63, Local_64, 0, 0, 0, 0, 2, 1, 0);
					iLocal_45 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_79 && !bLocal_87)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_48, 0))
				{
					if (((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0x7BFB76C576628F3D(iLocal_48, 2) > 0,25f) && unk_0x7BFB76C576628F3D(iLocal_48, 3) > 0,25f) || !unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_50))
						{
							if (unk_0xA3736D76B0E93E93(iLocal_50))
							{
								unk_0xF37CDE164C892195(unk_0xCA369FBC0DE29517(), "DOORS_BLOWN", unk_0x75DF72FC74EED046(iLocal_48, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x837D67618BF89034(iLocal_50, 1, 0);
								unk_0x44C48AC14D3C09ED(iLocal_50, 1, 0);
								unk_0x79B52EC5A9AB6229(iLocal_50);
								unk_0x4B46E3AF872076CE(iLocal_50, 1);
								Local_277 = { unk_0xD1A6A821F5AC81DB(iLocal_50, 1) - unk_0xD1A6A821F5AC81DB(iLocal_48, 1) * Vector(1,5f, 1,5f, 1,5f) };
								if (system::vmag(Local_277) > 10f)
								{
									Local_277 = { func_35(Local_277) };
									Local_277 = { Local_277 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_97 < 100)
								{
									iLocal_85 = 1;
								}
								unk_0xE592D924D5438108(iLocal_50, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_276 = unk_0x1DD05E817C89C737();
							}
							else if (unk_0xA2DD309FA5FD1435(unk_0xD1A6A821F5AC81DB(iLocal_50, 1), unk_0x0D1381B6E0F3987D(iLocal_48, Local_274), unk_0x0D1381B6E0F3987D(iLocal_48, Local_275), 0) >= 1f)
							{
								iLocal_45 = 3;
								iLocal_89[0] = 0;
								iLocal_89[1] = 0;
							}
							else if ((unk_0x1DD05E817C89C737() - iLocal_276) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_48))
				{
					unk_0xBFE60A5CC0C835D8(iLocal_48, 2, 0, 0);
					unk_0xBFE60A5CC0C835D8(iLocal_48, 3, 0, 0);
					func_30(unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_44 != 8)
			{
				func_68(8);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_50) && !unk_0xB0E14182FAD64944(uLocal_101))
			{
				if (unk_0xDF93B3CFAC96698F(iLocal_50) == 0f && (unk_0x1DD05E817C89C737() - iLocal_276) > 1000)
				{
					func_30(unk_0xD1A6A821F5AC81DB(iLocal_50, 1), 1);
					unk_0x51C8BEA2005931AB(&iLocal_50);
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_276) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_51) && unk_0xA3736D76B0E93E93(iLocal_51))
	{
		if (!iLocal_270)
		{
			if (unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iLocal_51, 1), joaat("weapon_stickybomb"), 0,25f, 0) || unk_0xE10356B235A70E70(unk_0xD1A6A821F5AC81DB(iLocal_51, 1), 0,3f, unk_0xA0A2925EDC6DDA6D(joaat("weapon_stickybomb")), 0))
			{
				iLocal_270 = 1;
			}
		}
		iVar0 = 0;
		unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(iLocal_51, 1), 0,1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_51, 1), 1f, 1) || (unk_0x8764A5B95AE1F967(2, unk_0xD1A6A821F5AC81DB(iLocal_51, 1), 0,3f) && iLocal_270))
		{
			iLocal_85 = 1;
			iVar0 = 1;
		}
		if (unk_0x8D91ADE44AC79BC9(iLocal_51) < iLocal_96 && unk_0x9B3D4335E0EDB0BE(iLocal_51, unk_0x4A8C381C258A124D(), 0))
		{
			iLocal_97 = (iLocal_97 + (iLocal_96 - unk_0x8D91ADE44AC79BC9(iLocal_51)));
			unk_0xE4DC7B3DD712372B(iLocal_51);
		}
		if ((unk_0x1DD05E817C89C737() - iLocal_271) > 200 && unk_0xFC8BFE4B41177C22(iLocal_48))
		{
			if (unk_0xF20EF02FBF173C32(unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 0f, (1,2195f - 0,27f)), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, fLocal_273, (1,2195f + 0,09f)), 0,45f, 1))
			{
				iLocal_271 = unk_0x1DD05E817C89C737();
				iLocal_272++;
			}
		}
		if (iLocal_272 > 5)
		{
			return 1;
		}
		if (iLocal_97 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_96 = unk_0x8D91ADE44AC79BC9(iLocal_51);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param1, struct<3> Param2, int iParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param1))
	{
		if ((((((((((((((((((((((unk_0x8AC0662A292C36F4(5, Param1, Param0) || (unk_0x8AC0662A292C36F4(2, Param1, Param0) && !bParam4)) || (unk_0x8AC0662A292C36F4(20, Param1, Param0) && !bParam4)) || unk_0x8AC0662A292C36F4(4, Param1, Param0)) || (unk_0x8AC0662A292C36F4(28, Param1, Param0) && !bParam4)) || unk_0x8AC0662A292C36F4(32, Param1, Param0)) || unk_0x8AC0662A292C36F4(25, Param1, Param0)) || unk_0x8AC0662A292C36F4(9, Param1, Param0)) || (unk_0x8AC0662A292C36F4(3, Param1, Param0) && !bParam4)) || (unk_0x8AC0662A292C36F4(6, Param1, Param0) && !bParam4)) || unk_0x8AC0662A292C36F4(0, Param1, Param0)) || unk_0x8AC0662A292C36F4(1, Param1, Param0)) || unk_0x8AC0662A292C36F4(23, Param1, Param0)) || unk_0x8AC0662A292C36F4(34, Param1, Param0)) || unk_0x8AC0662A292C36F4(14, Param1, Param0)) || (unk_0x8AC0662A292C36F4(30, Param1, Param0) && !bParam4)) || (unk_0x8AC0662A292C36F4(12, Param1, Param0) && !bParam4)) || unk_0x8AC0662A292C36F4(7, Param1, Param0)) || (unk_0x8AC0662A292C36F4(21, Param1, Param0) && !bParam4)) || (unk_0x8AC0662A292C36F4(18, Param1, Param0) && !bParam4)) || unk_0x8AC0662A292C36F4(15, Param1, Param0)) || unk_0x8AC0662A292C36F4(10, Param1, Param0)) || unk_0x8AC0662A292C36F4(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x8764A5B95AE1F967(5, Param2, iParam3) || (unk_0x8764A5B95AE1F967(2, Param2, iParam3) && !bParam4)) || (unk_0x8764A5B95AE1F967(20, Param2, iParam3) && !bParam4)) || unk_0x8764A5B95AE1F967(4, Param2, iParam3)) || (unk_0x8764A5B95AE1F967(28, Param2, iParam3) && !bParam4)) || unk_0x8764A5B95AE1F967(32, Param2, iParam3)) || unk_0x8764A5B95AE1F967(25, Param2, iParam3)) || unk_0x8764A5B95AE1F967(9, Param2, iParam3)) || (unk_0x8764A5B95AE1F967(3, Param2, iParam3) && !bParam4)) || (unk_0x8764A5B95AE1F967(6, Param2, iParam3) && !bParam4)) || unk_0x8764A5B95AE1F967(0, Param2, iParam3)) || unk_0x8764A5B95AE1F967(1, Param2, iParam3)) || unk_0x8764A5B95AE1F967(23, Param2, iParam3)) || unk_0x8764A5B95AE1F967(34, Param2, iParam3)) || unk_0x8764A5B95AE1F967(14, Param2, iParam3)) || (unk_0x8764A5B95AE1F967(30, Param2, iParam3) && !bParam4)) || (unk_0x8764A5B95AE1F967(12, Param2, iParam3) && !bParam4)) || unk_0x8764A5B95AE1F967(7, Param2, iParam3)) || (unk_0x8764A5B95AE1F967(21, Param2, iParam3) && !bParam4)) || (unk_0x8764A5B95AE1F967(18, Param2, iParam3) && !bParam4)) || unk_0x8764A5B95AE1F967(15, Param2, iParam3)) || unk_0x8764A5B95AE1F967(10, Param2, iParam3)) || unk_0x8764A5B95AE1F967(27, Param2, iParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0xC450B06E5AAA0985(uLocal_55))
	{
		if (!bLocal_78)
		{
			if ((!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0)) && !bLocal_87)
			{
				if (!bLocal_77)
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_54[1]))
					{
						uLocal_54[1] = func_42(iLocal_47[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xC450B06E5AAA0985(uLocal_54[1]))
					{
						unk_0xFE54B8568B2ABD12(&(uLocal_54[1]));
					}
					if (!unk_0xC450B06E5AAA0985(uLocal_53))
					{
						uLocal_53 = func_40(iLocal_48, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uLocal_54[1]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_54[1]));
				}
				if (unk_0xC450B06E5AAA0985(uLocal_53))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_53);
				}
			}
		}
		else
		{
			if (unk_0xC450B06E5AAA0985(uLocal_54[0]) && unk_0x2B91B956D741B8CE(uLocal_54[0]) != 119)
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_54[0]));
			}
			if (unk_0xC450B06E5AAA0985(uLocal_54[1]) && unk_0x2B91B956D741B8CE(uLocal_54[1]) != 119)
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_54[1]));
			}
			if (unk_0xC450B06E5AAA0985(uLocal_53) && unk_0x2B91B956D741B8CE(uLocal_53) != 119)
			{
				unk_0xFE54B8568B2ABD12(&uLocal_53);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_47)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
					{
						if (unk_0xCECDBB848D53DEB2(iLocal_47[iVar0], iLocal_48, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_53))
				{
					uLocal_53 = func_40(iLocal_48, 1, 0);
				}
			}
			else if (unk_0xC450B06E5AAA0985(uLocal_53))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_53);
			}
			if ((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0xC450B06E5AAA0985(uLocal_53)) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 0))
				{
					if (unk_0xF03FBAFA0284124E(uLocal_53) != 0)
					{
						unk_0xF42EBD7CD0682A8B(uLocal_53, 0);
					}
				}
				else if (unk_0xF03FBAFA0284124E(uLocal_53) != 255)
				{
					unk_0xF42EBD7CD0682A8B(uLocal_53, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0xB0E14182FAD64944(uLocal_101) && !unk_0x7F420695E3F776FB(iLocal_47[iVar0], 0))
					{
						if (!unk_0xCA038E64C65D1F9D(iLocal_47[iVar0]) || system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_44 == 8 && !unk_0x7F420695E3F776FB(iLocal_47[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_44 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_54[iVar0]))
					{
						uLocal_54[iVar0] = func_42(iLocal_47[iVar0], 1, 145);
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_54[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_54[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xB0E14182FAD64944(uLocal_101) && !bLocal_87)
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_56))
				{
					uLocal_56 = func_32(uLocal_101);
				}
			}
			else if (unk_0xC450B06E5AAA0985(uLocal_56))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_56);
			}
		}
	}
	else if ((unk_0xFC8BFE4B41177C22(iLocal_48) && unk_0xFC8BFE4B41177C22(iLocal_47[0])) && unk_0xFC8BFE4B41177C22(iLocal_47[1]))
	{
		if ((((((!unk_0xF6C26AE940C14749(iLocal_48) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0xF6C26AE940C14749(iLocal_47[0]) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0xF6C26AE940C14749(iLocal_47[1]) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48, 50f, 50f, 20f, 0, 1, 0)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_55);
		}
	}
	if (unk_0xC450B06E5AAA0985(uLocal_54[0]))
	{
		unk_0x89FE619BFBB2024B(uLocal_54[0], iLocal_88);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_54[1]))
	{
		unk_0x89FE619BFBB2024B(uLocal_54[1], iLocal_88);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_53))
	{
		unk_0x89FE619BFBB2024B(uLocal_53, iLocal_88);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_56))
	{
		unk_0x89FE619BFBB2024B(uLocal_56, iLocal_88);
	}
	if (!iLocal_88)
	{
		if (bLocal_78 || iLocal_45 == 3)
		{
			iLocal_88 = 0;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_33(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_33(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_33(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

var func_42(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_43()
{
	func_45(9, bLocal_43);
	while (!func_44())
	{
		system::wait(0);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_64(iParam0))
	{
		func_63(iParam0, bParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_55(iParam0, bParam1) != 322)
		{
			func_47(func_55(iParam0, bParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_46(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_113955 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1);
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
		func_48();
	}
}

void func_48()
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
		func_52(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_51() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

int func_50(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_51()
{
	return Global_32948;
}

int func_52(int iParam0, int iParam1)
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

void func_53(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_54()
{
	return Global_1574926;
}

int func_55(int iParam0, bool bParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), bParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	if (bLocal_79)
	{
		if (unk_0x1D56B24774D5E23C(uLocal_101))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_44 = iParam0;
	iLocal_46 = 0;
}

int func_69()
{
	if (!unk_0xB0E14182FAD64944(uLocal_101))
	{
		if (bLocal_77)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				if (!func_70(iLocal_48))
				{
					if (iLocal_269 == -1)
					{
						iLocal_269 = unk_0x1DD05E817C89C737();
					}
				}
				else if (iLocal_269 != -1)
				{
					iLocal_269 = -1;
				}
			}
		}
		if (!bLocal_77)
		{
			if (iLocal_94 != -1)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]))
				{
					if (!func_70(iLocal_48))
					{
						if (iLocal_269 == -1)
						{
							iLocal_269 = unk_0x1DD05E817C89C737();
						}
					}
					else if (iLocal_269 != -1)
					{
						iLocal_269 = -1;
					}
				}
			}
		}
		if (iLocal_269 != -1)
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_269) > 3000)
			{
				unk_0xF09E30AF1B8FB379(&(iLocal_47[0]));
				unk_0xF09E30AF1B8FB379(&(iLocal_47[1]));
				unk_0xC0086E5CBF13BBF7(iLocal_48, -1000f, 1);
				unk_0x44C48AC14D3C09ED(iLocal_48, 1, 0);
				unk_0x68298CA6191CDFDB(&iLocal_48);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_269 != -1)
		{
			iLocal_269 = -1;
		}
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && system::vdist(unk_0x80C8AA1625977488(uLocal_101), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xF6C26AE940C14749(iParam0) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_293 == -1)
	{
		iLocal_293 = unk_0x1DD05E817C89C737();
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		switch (iLocal_46)
		{
			case 0:
				bLocal_78 = true;
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
				{
					if (func_27() < 30f && !unk_0x4FAFF4BCB7633475(Local_104[3 /*10*/]))
					{
						func_4(&Local_104, cLocal_103, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_47)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && unk_0xFC8BFE4B41177C22(iLocal_50))
					{
						if ((iVar0 != iLocal_94 || bLocal_77) || !unk_0x21478251925DBFD7(iLocal_50, iLocal_47[iVar0]))
						{
							unk_0x974022927CB47E68(iLocal_47[iVar0]);
							unk_0xB5396F1FB088FE38(&uLocal_52);
							if (unk_0x7F420695E3F776FB(iLocal_47[iVar0], 0))
							{
								if (iLocal_85)
								{
									if (unk_0x8175BC6D49412468("move_injured_generic"))
									{
										unk_0x4669032A1DFBB449(iLocal_47[iVar0], "move_injured_generic", 1048576000);
										iLocal_86[iVar0] = 1;
									}
								}
								unk_0x092B9247AF00F5CF(0, 0, 256);
							}
							unk_0x84B06A81C98DA4B8(0);
							if (iLocal_86[iVar0])
							{
								unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 3000));
							}
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_52);
							unk_0x4BD42B0527065BB6(iLocal_47[iVar0], uLocal_52);
							unk_0xD0557B139A542F12(&uLocal_52);
						}
						unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 6, 0);
						unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 0, 1);
						unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 1, 0);
						unk_0xD0764B65C2DFEDCA(iLocal_47[iVar0], 1);
						unk_0x570AAA413775DFFB(iLocal_47[iVar0], 1);
						unk_0xAAA71DD7E9059338(iLocal_47[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0xA3736D76B0E93E93(iLocal_50)) && !unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]))
				{
					unk_0x974022927CB47E68(iLocal_47[iLocal_94]);
				}
				system::settimera(0);
				iLocal_46++;
				break;
			
			case 1:
				if (func_76(iLocal_94))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]))
					{
						unk_0x974022927CB47E68(iLocal_47[iLocal_94]);
						unk_0xB5396F1FB088FE38(&uLocal_52);
						if (unk_0x7F420695E3F776FB(iLocal_47[iLocal_94], 0))
						{
							unk_0x092B9247AF00F5CF(0, 0, 256);
						}
						unk_0x84B06A81C98DA4B8(0);
						unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x93C0674FC00824D0(uLocal_52);
						unk_0x4BD42B0527065BB6(iLocal_47[iLocal_94], uLocal_52);
						unk_0xD0557B139A542F12(&uLocal_52);
					}
					iLocal_46++;
				}
				break;
			
			case 2:
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
				{
					if (unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
					{
						if (Local_104[3 /*10*/] != iLocal_47[1])
						{
							func_75(&Local_104, 3);
							func_75(&Local_104, 4);
							func_74(&Local_104, 3, iLocal_47[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_47)
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
						{
							if ((iLocal_45 == 2 && !iLocal_89[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_48, 0))
							{
								unk_0x06AA75009161058B(iLocal_47[iVar0], iLocal_48, unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -4f, 0f), 5f, 0);
								iLocal_89[iVar0] = 1;
							}
							if (((unk_0xB0E14182FAD64944(uLocal_101) && !iLocal_89[iVar0]) && iLocal_45 == 3) && !bLocal_87)
							{
								unk_0x06AA75009161058B(iLocal_47[iVar0], iLocal_48, unk_0x80C8AA1625977488(uLocal_101), 5f, 0);
								iLocal_89[iVar0] = 1;
							}
							if (bLocal_87)
							{
								if (iLocal_89[iVar0])
								{
									unk_0x805B057FA4E28531(iLocal_47[iVar0], 0);
									iLocal_89[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x1DD05E817C89C737() - iLocal_290)) > unk_0xD2AA6F822D3A55D2(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
							{
								if (func_4(&Local_104, cLocal_103, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_290 = unk_0x1DD05E817C89C737();
								}
							}
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
					{
						if (!bLocal_77)
						{
							if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 0) && (unk_0x1DD05E817C89C737() - iLocal_293) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_77)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_44 != 8)
								{
									iLocal_89[0] = 0;
									iLocal_89[1] = 0;
									iLocal_293 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_47)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (system::timera() > iVar1 && iLocal_86[iVar0])
				{
					unk_0x4A46A67DB6AC487D(iLocal_47[iVar0], 1048576000);
					iLocal_86[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0x1DD05E817C89C737() - iLocal_280) > 250)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
				{
					if (unk_0xAD915B5E38F323E5(iLocal_47[iVar0], unk_0x4A8C381C258A124D(), 19) && unk_0x300A997AE991C0A8(iLocal_47[iVar0], unk_0x4A8C381C258A124D()))
					{
						iLocal_279[iVar0] = 1;
					}
					else
					{
						iLocal_279[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_279[0] || iLocal_279[1]);
}

int func_73()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_50))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[iParam0]))
		{
			if (unk_0x21478251925DBFD7(iLocal_50, iLocal_47[iParam0]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_47[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_47[iParam0], "weapons@holster_1h", "holster") > 0,9f)
					{
						unk_0x837D67618BF89034(iLocal_50, 1, 1);
						unk_0x51C8BEA2005931AB(&iLocal_50);
					}
				}
				else
				{
					unk_0xAAA71DD7E9059338(iLocal_47[iParam0], 1);
					unk_0x10425721983AE158(iLocal_47[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0xFC8BFE4B41177C22(iLocal_50) || (unk_0xFC8BFE4B41177C22(iLocal_50) && !unk_0x21478251925DBFD7(iLocal_50, iLocal_47[iParam0])));
	if (bVar0)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[iParam0]))
		{
			unk_0xAAA71DD7E9059338(iLocal_47[iParam0], 0);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3[2];
	int iVar4;
	bool bVar5;
	var uVar6;
	
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		Var0 = { func_35(unk_0xAD8278DAEC2CC059(iLocal_48, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1))) };
		fVar1 = ((unk_0xCFC0C995455A6204(iLocal_48) + unk_0x97BC40FFA2FFCCD2(Var0.f_0, Var0.f_1)) + 45f);
		fVar2 = ((unk_0xCFC0C995455A6204(iLocal_48) + unk_0x97BC40FFA2FFCCD2(Var0.f_0, Var0.f_1)) - 45f);
		Var3[0 /*3*/] = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), fVar1, 0f, 4,5f, 0f) };
		Var3[1 /*3*/] = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), fVar2, 0f, 4,5f, 0f) };
		func_78(&fVar1);
		func_78(&fVar2);
		if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_291) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_47)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar4]))
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_47[iVar4], 1), Var3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < iLocal_47)
			{
				if ((((((!unk_0x4FAFF4BCB7633475(iLocal_47[iVar4]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_47[iVar4], 1), Var3[iVar4 /*3*/]) > 2f) && (unk_0x1DD05E817C89C737() - iLocal_292[iVar4]) > 1000) && !unk_0x7F420695E3F776FB(iLocal_47[iVar4], 0)) && !iLocal_279[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_291 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						}
						unk_0xB5396F1FB088FE38(&uVar6);
						if (func_72() || func_38(Local_291))
						{
							unk_0xA68F93198FAC44EC(0, Var3[iVar4 /*3*/], unk_0x4A8C381C258A124D(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), -1, 1);
						}
						else
						{
							unk_0xB8551FB832F73124(0, Var3[iVar4 /*3*/], Local_291, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0xC86A930D894F8CE2(0, Local_291, -1, 1, 0);
						}
						unk_0x93C0674FC00824D0(uVar6);
						unk_0x4BD42B0527065BB6(iLocal_47[iVar4], uVar6);
						unk_0xD0557B139A542F12(&uVar6);
					}
					iLocal_292[iVar4] = unk_0x1DD05E817C89C737();
				}
				iVar4++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	float fVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		switch (iLocal_46)
		{
			case 0:
				if (!bLocal_77)
				{
					unk_0xAAA71DD7E9059338(iParam0, 1);
					unk_0x974022927CB47E68(iParam0);
					Local_281 = { unk_0x75DF72FC74EED046(iLocal_48, 0) };
					Local_282 = { unk_0x88124E0D60FB8D11(iLocal_48, 2) };
					Local_283 = { unk_0xBE8776D2466E9EA6("random@security_van", "sec_case_into_van_panic", Local_281, Local_282, 0, 2) };
					if (((!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0)) && !unk_0x4FAFF4BCB7633475(iLocal_47[0])) && !unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0))
					{
						if (func_27() < 20f)
						{
							if (bLocal_78)
							{
								func_4(&Local_104, cLocal_103, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xB0E14182FAD64944(uLocal_101))
						{
							if (bLocal_78)
							{
								unk_0xA966E518B752B92A(iParam0, unk_0x80C8AA1625977488(uLocal_101), 2f, -1, 0,25f, 0, 1193033728);
							}
							else
							{
								unk_0xA966E518B752B92A(iParam0, unk_0x80C8AA1625977488(uLocal_101), 1f, -1, 0,25f, 0, 1193033728);
							}
							iLocal_46++;
						}
						else
						{
							func_85(iParam0);
							iLocal_46 = 2;
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(iParam0))
					{
						if (unk_0xB0E14182FAD64944(uLocal_101))
						{
							unk_0xA966E518B752B92A(iParam0, unk_0x80C8AA1625977488(uLocal_101), 2f, -1, 0,25f, 0, 1193033728);
							iLocal_46++;
						}
						else
						{
							func_85(iParam0);
							iLocal_46 = 2;
						}
					}
				}
				else
				{
					iLocal_46 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x4FAFF4BCB7633475(iParam0) && unk_0xB0E14182FAD64944(uLocal_101))
				{
					if ((unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0x80C8AA1625977488(uLocal_101), 1) < 2f && !unk_0x8BF5256C439DF778(iParam0)) && (unk_0x1DD05E817C89C737() - iLocal_100) > 3000)
					{
						if (unk_0x11552FA9DCB8E126(iParam0, 4))
						{
							unk_0x3C0F448853B71C92(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0xDDFB0941A19702BE(uLocal_101);
						func_85(iParam0);
						unk_0x3C0F448853B71C92(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_79 = false;
						iLocal_94 = iLocal_93;
						iLocal_46++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x4FAFF4BCB7633475(iParam0) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
				{
					if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
					{
						if (bLocal_78)
						{
							unk_0xA966E518B752B92A(iParam0, Local_283, 2f, -1, 0,1f, 512, Local_282.f_2);
						}
						else
						{
							unk_0xA966E518B752B92A(iParam0, Local_283, 1f, -1, 0,1f, 512, Local_282.f_2);
						}
						iLocal_46++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x4FAFF4BCB7633475(iParam0))
				{
					if (unk_0xB0E14182FAD64944(uLocal_101))
					{
						iLocal_46 = 0;
					}
					else
					{
						fVar0 = unk_0xCFC0C995455A6204(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_282.f_2 > 180f)
						{
							Local_282.f_2 = (Local_282.f_2 - 360f);
						}
						if (Local_282.f_2 <= -180f)
						{
							Local_282.f_2 = (Local_282.f_2 + 360f);
						}
						if (system::vdist(Local_283, unk_0xD1A6A821F5AC81DB(iParam0, 1)) < 0,3f)
						{
							if (unk_0x1D5CD3EAAA7422B0((fVar0 - Local_282.f_2)) < 15f)
							{
								unk_0x8B224316C228BF51(iParam0, -1056964608);
								unk_0x974022927CB47E68(iParam0);
								bLocal_286 = true;
								iLocal_284 = unk_0x2EC137C692A52458(Local_281, Local_282, 2);
								if (bLocal_78)
								{
									unk_0x3DA436E63AB0F541(iParam0, iLocal_284, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0x381D671BCFC294D9(iLocal_48, iLocal_284, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x3DA436E63AB0F541(iParam0, iLocal_284, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0x381D671BCFC294D9(iLocal_48, iLocal_284, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xD8ED11B32DF72E0B(iParam0, 0, 0);
								iLocal_46++;
							}
						}
						else if (unk_0xF6C26AE940C14749(iParam0) && !unk_0x7B780C491DEC834E(Local_281, 2f))
						{
							unk_0xB2BD5837A8D3CEDA(iParam0, Local_281, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x5266F1D2AEF6F73A(iLocal_284))
				{
					if (bLocal_78)
					{
						fLocal_294 = 0,42f;
					}
					else
					{
						fLocal_294 = 0,3893f;
					}
					if (bLocal_78)
					{
						fLocal_295 = 0,52f;
					}
					else
					{
						fLocal_295 = 0,546243f;
					}
					if (!bLocal_77)
					{
						if ((unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0x21478251925DBFD7(iLocal_50, iParam0)) && unk_0xBD3B265153D3BA2D(iLocal_284) > fLocal_294)
						{
							if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_48))
							{
								unk_0x837D67618BF89034(iLocal_50, 1, 1);
								unk_0x44C48AC14D3C09ED(iLocal_50, 0, 0);
								unk_0x4D306DD94DD6FDBA(iLocal_50, iLocal_48, 0, unk_0xAD8278DAEC2CC059(iLocal_48, unk_0xD1A6A821F5AC81DB(iLocal_50, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							bLocal_77 = true;
						}
					}
					else if (unk_0xBD3B265153D3BA2D(iLocal_284) > fLocal_295)
					{
						unk_0xC0086E5CBF13BBF7(iLocal_48, -4f, 1);
						unk_0x974022927CB47E68(iParam0);
						if (unk_0xFC8BFE4B41177C22(iLocal_50))
						{
							iLocal_74 = 0;
							unk_0x6515021478088FBC(iLocal_48, 2, 1);
							unk_0x6515021478088FBC(iLocal_48, 3, 1);
							unk_0xAAA71DD7E9059338(iParam0, 0);
							iLocal_46++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x5266F1D2AEF6F73A(iLocal_284) && unk_0xBD3B265153D3BA2D(iLocal_284) > fLocal_295) || !unk_0x5266F1D2AEF6F73A(iLocal_284))
				{
					if (!bLocal_78)
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
						{
							unk_0xEBA229B2E0BB05E0(iLocal_47[0], iLocal_48, -1, -1, 1f, 1, 0, 0);
						}
					}
					iLocal_46++;
				}
				break;
			
			case 6:
				if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
				{
					if (bLocal_78)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!bLocal_77)
		{
			if ((((((func_27() < 10f && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && func_72()) || ((func_27() < 20f && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))) || (func_27() < 5f && bLocal_78)) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && func_80(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))) || ((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD())) && func_80(unk_0xDC8D5832207C2EAD())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_44 != 7)
	{
		if (bLocal_77)
		{
			if (unk_0x5266F1D2AEF6F73A(iLocal_284))
			{
				unk_0xC0086E5CBF13BBF7(iLocal_48, -8f, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			unk_0xAAA71DD7E9059338(iParam0, 0);
		}
	}
	if ((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && iLocal_44 != 7) && unk_0x5266F1D2AEF6F73A(iLocal_284))
	{
		unk_0xC0086E5CBF13BBF7(iLocal_48, -8f, 1);
	}
}

int func_80(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<3> Var3[4];
	struct<3> Var4[4];
	struct<3> Var5[4];
	struct<3> Var6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	
	iVar0 = 0;
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iLocal_48))
	{
		uVar7 = 4;
		unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var1, &Var2);
		Var3[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var1.f_0, Var2.f_1, 0f) };
		Var3[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var2.f_0, Var2.f_1, 0f) };
		Var3[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var2.f_0, Var1.f_1, 0f) };
		Var3[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar8 = -3,7f;
		fVar9 = 1,35f;
		Var4[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (-fVar9 - 0,25f), fVar8, 0f) };
		Var4[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (fVar9 + 0,25f), fVar8, 0f) };
		Var4[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (fVar9 - 0,25f), (fVar8 - 1,55f), 0f) };
		Var4[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (-fVar9 + 0,25f), (fVar8 - 1,55f), 0f) };
		Var5[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, -fVar9, 0,5f, 0f) };
		Var5[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (-fVar9 - 0,75f), 0,5f, 0f) };
		Var5[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (-fVar9 - 0,75f), 1,5f, 0f) };
		Var5[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, -fVar9, 1,5f, 0f) };
		Var6[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, fVar9, 0,5f, 0f) };
		Var6[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (fVar9 + 0,75f), 0,5f, 0f) };
		Var6[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, (fVar9 + 0,75f), 1,5f, 0f) };
		Var6[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iLocal_48, fVar9, 1,5f, 0f) };
		if (!bLocal_77)
		{
			if (func_81(&Var4, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 1))
		{
			if (func_81(&Var5, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0xCECDBB848D53DEB2(iLocal_47[1], iLocal_48, 1))
		{
			if (func_81(&Var6, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param1.f_0;
	fVar2 = Param3.f_0;
	fVar3 = Param5.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			iLocal_50 = unk_0x4E55EAB577C13329(iLocal_73, Local_61, 1, 1, 0);
			unk_0x999C62072AF920FD(iLocal_50, 0);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			unk_0x4D306DD94DD6FDBA(iLocal_50, iParam0, unk_0x72F7E39FB49FC0BA(iParam0, 28422), Local_66, Local_67, 1, 0, 0, 0, 2, 1, 0);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_46)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_47)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
				{
					unk_0xAAA71DD7E9059338(iLocal_47[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_78 = true;
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				if (unk_0xFC8BFE4B41177C22(func_89()))
				{
					if (!unk_0x4FAFF4BCB7633475(func_89()))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0) != func_89() && unk_0xC39AE5D390581AD5(iLocal_48, -1, 0))
						{
							unk_0xEBA229B2E0BB05E0(func_89(), iLocal_48, 20000, -1, 2f, 1, 0, 0);
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && func_89() != iLocal_47[1])
				{
					if (unk_0xFD5C5BBD1FE92BB7(iLocal_48, 0, 0) != iLocal_47[1] && unk_0xC39AE5D390581AD5(iLocal_48, 0, 0))
					{
						unk_0xEBA229B2E0BB05E0(iLocal_47[1], iLocal_48, -1, 0, 1073741824, 1, 0, 0);
					}
				}
				iLocal_46++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0xFC8BFE4B41177C22(func_89()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0x13DE13EA38996410(func_89(), iLocal_48, unk_0x4A8C381C258A124D(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0xFC8BFE4B41177C22(func_89()))
				{
					unk_0xB3DA477F44309390(func_89(), iLocal_48, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_46++;
				}
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				if (unk_0xDF93B3CFAC96698F(iLocal_48) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0xFC8BFE4B41177C22(iLocal_48) && unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0))) && (unk_0x1C2F771CDC87A3A5(unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0), 0) || unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0xFD5C5BBD1FE92BB7(iLocal_48, -1, 0) == iLocal_47[0])
		{
			iVar1 = 1;
		}
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_48, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 100f)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar1]) && unk_0x9B5C1660CCDF7189(iLocal_47[iVar1], joaat("script_task_perform_sequence")) != 1)
			{
				unk_0x1CA08719184AFC6F(iLocal_47[iVar1], 2, 1);
				unk_0xB5396F1FB088FE38(&uVar2);
				unk_0x7A55A25242FBE562(0, iLocal_48, 0);
				unk_0x13DE13EA38996410(0, iLocal_48, unk_0x4A8C381C258A124D(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x93C0674FC00824D0(uVar2);
				unk_0x4BD42B0527065BB6(iLocal_47[iVar1], uVar2);
				unk_0xD0557B139A542F12(&uVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) || unk_0xB0E14182FAD64944(uLocal_101)) || iLocal_45 == 3) || unk_0xA24B9FF9863A909D(iLocal_48, 0, 7000)) || unk_0xA24B9FF9863A909D(iLocal_48, 3, 30000)) || unk_0xA24B9FF9863A909D(iLocal_48, 2, 30000)) || unk_0xA24B9FF9863A909D(iLocal_48, 1, 40000)) || (iLocal_46 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_48))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_48, 0))
		{
			if (((((unk_0x8D91ADE44AC79BC9(iLocal_48) < 300 || unk_0x4C7724D572378B05(iLocal_48) < 200f) || (unk_0x548F6F43A7CB6F45(iLocal_48, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_48, 1, 0))) || (unk_0x548F6F43A7CB6F45(iLocal_48, 4, 0) && unk_0x548F6F43A7CB6F45(iLocal_48, 5, 0))) || (unk_0x548F6F43A7CB6F45(iLocal_48, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_48, 4, 0))) || (unk_0x548F6F43A7CB6F45(iLocal_48, 1, 0) && unk_0x548F6F43A7CB6F45(iLocal_48, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0))
		{
			if (!unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0))
		{
			if (!unk_0xCECDBB848D53DEB2(iLocal_47[1], iLocal_48, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0))
	{
		return iLocal_47[0];
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0))
	{
		return iLocal_47[1];
	}
	return 0;
}

void func_90()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (!bLocal_77)
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0xA3736D76B0E93E93(iLocal_50))
				{
					unk_0x837D67618BF89034(iLocal_50, 1, 1);
				}
			}
			if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_104, cLocal_103, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_47)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
					{
						unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 17, 1);
						unk_0x1CA08719184AFC6F(iLocal_47[iVar0], 128, 1);
						unk_0x1CA08719184AFC6F(iLocal_47[iVar0], 16, 1);
						unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 1, 0);
						unk_0xB5396F1FB088FE38(&uVar1);
						if (unk_0x7F420695E3F776FB(iLocal_47[iVar0], 1))
						{
							unk_0x092B9247AF00F5CF(iLocal_47[iVar0], 0, 256);
						}
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uVar1);
						unk_0x4BD42B0527065BB6(iLocal_47[iVar0], uVar1);
						unk_0xD0557B139A542F12(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_81 = true;
			iLocal_46++;
			break;
		
		case 1:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				if (func_91(iLocal_48, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_46++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0x4FAFF4BCB7633475(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
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

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_94()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
	{
		switch (iLocal_46)
		{
			case 0:
				if (func_4(&Local_104, cLocal_103, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0xA3736D76B0E93E93(iLocal_50))
					{
						if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_47[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0x974022927CB47E68(iLocal_47[0]);
						}
						if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_47[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0x974022927CB47E68(iLocal_47[1]);
						}
						iLocal_46++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_46 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_94))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]))
					{
						func_95(iLocal_94);
					}
					iLocal_46++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_104, cLocal_103, "RESEC_CAR2", 8, 0, 0, 0))
					{
						system::settimera(0);
						iLocal_46++;
					}
				}
				break;
			
			case 3:
				if ((system::timera() > 12000 && !func_73()) && func_4(&Local_104, cLocal_103, "RESEC_CAR3", 8, 0, 0, 0))
				{
					system::settimera(0);
					iLocal_46++;
				}
				break;
			
			case 4:
				if ((system::timera() > 7000 && !func_73()) && func_4(&Local_104, cLocal_103, "RESEC_CAR4", 8, 0, 0, 0))
				{
					system::settimera(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_46 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_49))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_49, 0) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
		{
			if (system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_49, 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0x1C2F771CDC87A3A5(iLocal_49, 0) || !unk_0xD9F5E1FEFD1329E4(iLocal_49, 0)) || (!unk_0xE99B9AC112F55D16(iLocal_49, 1119092736) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 1)))
		{
			if (!func_80(iLocal_49))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_47[0], unk_0x4A8C381C258A124D(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_47[1], unk_0x4A8C381C258A124D(), 1))
		{
			func_68(8);
		}
	}
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_84)
		{
			func_68(8);
		}
	}
	if (bLocal_87)
	{
		func_68(8);
	}
	if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && func_72()) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7))
	{
		func_68(2);
	}
	if (!unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x974022927CB47E68(iLocal_47[iParam0]);
		unk_0xB5396F1FB088FE38(&uLocal_52);
		if (unk_0x7F420695E3F776FB(iLocal_47[iParam0], 0))
		{
			unk_0x092B9247AF00F5CF(0, 0, 256);
		}
		unk_0x84B06A81C98DA4B8(0);
		unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 0, 2);
		unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), -1, 0);
		unk_0x93C0674FC00824D0(uLocal_52);
		unk_0x4BD42B0527065BB6(iLocal_47[iParam0], uLocal_52);
		unk_0xD0557B139A542F12(&uLocal_52);
		if (iLocal_95 == 0)
		{
			iLocal_95 = unk_0x18B384412B836744(118, unk_0xD1A6A821F5AC81DB(iLocal_47[iParam0], 1), -1082130432);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_46)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
			{
				unk_0xAAA71DD7E9059338(iLocal_47[0], 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
			{
				unk_0xAAA71DD7E9059338(iLocal_47[1], 1);
			}
			if (func_103())
			{
				if (func_4(&Local_104, cLocal_103, "RESEC_ATT1", 8, 0, 0, 0))
				{
					system::settimera(0);
					func_68(8);
				}
			}
			else if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_104, cLocal_103, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
				{
					func_4(&Local_104, cLocal_103, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_104, cLocal_103, "RESEC_WARN", 8, 0, 0, 0);
				}
				system::settimera(0);
				if (unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0xA3736D76B0E93E93(iLocal_50))
				{
					if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_47[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0x974022927CB47E68(iLocal_47[0]);
					}
					if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_47[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0x974022927CB47E68(iLocal_47[1]);
					}
					iLocal_46++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_46 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_94))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[iLocal_94]))
				{
					func_95(iLocal_94);
				}
				iLocal_46++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_48, 1000) && system::timera() > 10000)
				{
					bVar0 = true;
				}
				else if (system::timera() > 7000)
				{
					system::settimera(7000);
				}
				if (system::timera() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (system::timera() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_47)
				{
					if (!func_99(iLocal_47[iVar1], 1000) && (func_27() < 2f && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x1C2F771CDC87A3A5(iLocal_47[iVar1], 0))
					{
						if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_47[iVar1]) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_47[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0x1DD05E817C89C737() - iLocal_290)) > unk_0xD2AA6F822D3A55D2(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_104, cLocal_103, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_290 = unk_0x1DD05E817C89C737();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_47)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xFC8BFE4B41177C22(iLocal_47[iVar2]))
		{
			if ((unk_0x4FAFF4BCB7633475(iLocal_47[iVar2]) || unk_0x1C2F771CDC87A3A5(iLocal_47[iVar2], 0)) && unk_0x9B3D4335E0EDB0BE(iLocal_47[iVar2], unk_0x4A8C381C258A124D(), 0))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x4FAFF4BCB7633475(iLocal_47[0]) || unk_0x4FAFF4BCB7633475(iLocal_47[1])) || bLocal_87)
	{
		func_68(8);
	}
	if ((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && func_72())
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		func_68(5);
	}
	if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_279[0] && !iLocal_279[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_21152 = 0;
	func_98();
}

void func_98()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if ((unk_0x0101C509A6E67F99(iParam0) && !unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0))) || (unk_0x55B80B6E7AB61270(iParam0) && unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0)))
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0, 1)) > fLocal_288)
				{
					iVar0 = 1;
				}
				if ((unk_0x1DD05E817C89C737() - iLocal_289) > iParam1)
				{
					fLocal_288 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam0, 1));
					iLocal_289 = unk_0x1DD05E817C89C737();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48, 20f, 20f, 5f, 0, 1, 0) && !unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 1,7532f, 0,5984f), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 3,3477f, 3,5984f), 2,8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_47)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
			{
				if ((!unk_0xCECDBB848D53DEB2(iLocal_47[iVar0], iLocal_48, 0) && unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), iLocal_48)) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D()) == iLocal_48)
		{
			if (unk_0x74408742BCE2802F(unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && unk_0xFAA48325A90263BE(iLocal_47[0], unk_0x4A8C381C258A124D(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && unk_0xFAA48325A90263BE(iLocal_47[1], unk_0x4A8C381C258A124D(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_106(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0xE37AC296E66C33AF())
	{
		if (func_122(uParam0, bParam4, bParam6, 0))
		{
			func_121(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && uParam5)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
			{
				if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && uParam5)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xFF692AB7350A74D7(iVar0))
		{
			if (func_104(iVar0) && unk_0x4C705AAF75363287())
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
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0x4A8C381C258A124D()))
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

int func_108(int iParam0)
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

int func_109(var uParam0)
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

int func_110(bool bParam0)
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

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
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
	if ((func_118() || func_117(Global_4718592.f_185586)) || func_116())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_115(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_114(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_113(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_92(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0, int iParam1)
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

var func_116()
{
	return Global_2684504.f_19;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2684504.f_18;
}

bool func_119()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0A0A06C514052E80(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x861EAB644E1BBA7A(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), Param1, -1, iVar2, iVar3);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

void func_127()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
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
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_131(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_110(1);
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
				if (func_104(sParam3))
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
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, struct<3> Param2, int iParam3)
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
		func_135(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_132())
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

bool func_132()
{
	return func_133(unk_0x259BE71D8A81D4FA());
}

int func_133(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_135(var uParam0, int iParam1, int iParam2)
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
		if (func_104(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_136(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_6), bParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

bool func_138(int iParam0)
{
	return BitTest(Global_113969.f_24998.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_56(Global_113958))
		{
			func_140(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_56(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
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

int func_142()
{
	switch (func_143(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_44042);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_46)
	{
		case 0:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
				{
					unk_0xBE8796DB2B90A437(iLocal_47[0], 6, 1);
					unk_0xBE8796DB2B90A437(iLocal_47[1], 6, 1);
					unk_0xAAA71DD7E9059338(iLocal_47[0], 1);
					unk_0xAAA71DD7E9059338(iLocal_47[1], 1);
					if (unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 0) && unk_0xCECDBB848D53DEB2(iLocal_47[1], iLocal_48, 0))
					{
						if (bLocal_43 == 2)
						{
							unk_0xB5396F1FB088FE38(&uVar0);
							unk_0xCF6CC9EA0D2EFE23(0, iLocal_48, -574,6195f, -847,232f, 25,2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x7C8E9DE09D4AD3FF(0, iLocal_48, 10f, 786603);
							unk_0x93C0674FC00824D0(uVar0);
							unk_0x4BD42B0527065BB6(iLocal_47[0], uVar0);
							unk_0xD0557B139A542F12(&uVar0);
							iLocal_46++;
						}
						else if (bLocal_43 == 4)
						{
							unk_0xB5396F1FB088FE38(&uVar1);
							unk_0xCF6CC9EA0D2EFE23(0, iLocal_48, -551,2968f, -1119,418f, 20,4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x7C8E9DE09D4AD3FF(0, iLocal_48, 10f, 786603);
							unk_0x93C0674FC00824D0(uVar1);
							unk_0x4BD42B0527065BB6(iLocal_47[0], uVar1);
							unk_0xD0557B139A542F12(&uVar1);
							iLocal_46++;
						}
						else if (bLocal_43 == 7)
						{
							unk_0xB5396F1FB088FE38(&uVar2);
							unk_0xCF6CC9EA0D2EFE23(0, iLocal_48, 2786,752f, 4358,032f, 48,6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x7C8E9DE09D4AD3FF(0, iLocal_48, 10f, 786603);
							unk_0x93C0674FC00824D0(uVar2);
							unk_0x4BD42B0527065BB6(iLocal_47[0], uVar2);
							unk_0xD0557B139A542F12(&uVar2);
							iLocal_46++;
						}
						else
						{
							unk_0x7C8E9DE09D4AD3FF(iLocal_47[0], iLocal_48, 10f, 786603);
							iLocal_46++;
						}
					}
					else
					{
						if (!unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 0) && unk_0x9B5C1660CCDF7189(iLocal_47[0], joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xEBA229B2E0BB05E0(iLocal_47[0], iLocal_48, -1, -1, 1f, 8388608, 0, 0);
						}
						if (!unk_0xCECDBB848D53DEB2(iLocal_47[1], iLocal_48, 0) && unk_0x9B5C1660CCDF7189(iLocal_47[1], joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xEBA229B2E0BB05E0(iLocal_47[1], iLocal_48, -1, 0, 1f, 8388608, 0, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_104, cLocal_103, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_47)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar3]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[iVar3], 0))
					{
						if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()) && unk_0xA6534E6C7AE314D6(iLocal_47[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 1))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_44 == 4)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x8B47D286AAC499D6("PLAYER HAS PROJECTILE WEAPON", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 0, 0, 255, 255);
				if ((unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -3,44f, -3f), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -13,44f, 3f), 2,3f, 0, 1, 0)) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) < 225f)
				{
					func_68(6);
				}
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -3,44f, -3f), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, -13,44f, 3f), 2,3f, 0, 1, 0))
				{
					unk_0xBBB7593C7244A846("PLAYER IS BEHIND VAN", 0,1f, 0,8f, 0f, 0, 0, 255, 255);
				}
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_48, 1)) < 225f)
				{
					unk_0xBBB7593C7244A846("PLAYER IS CLOSE TO VAN", 0,1f, 0,82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
				{
				}
			}
		}
		if (((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_48, 1), 25f, 0)) || (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_47[0], 1), 20f, 0))) || (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_44 != 4)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
			{
				unk_0xBE8796DB2B90A437(iLocal_47[0], 6, 0);
				unk_0xAAA71DD7E9059338(iLocal_47[0], 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
			{
				unk_0xBE8796DB2B90A437(iLocal_47[1], 6, 0);
				unk_0xAAA71DD7E9059338(iLocal_47[1], 0);
			}
		}
	}
}

int func_149()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(iLocal_48, 1) };
		Var1 = { unk_0x90D0E0397D3F7690(iLocal_48) };
		Var2 = { unk_0xAD8278DAEC2CC059(iLocal_48, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) };
		if (((Var2.f_1 > 1f && (((unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_48) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_48)) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_47[0])) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_47[1]))) && unk_0x1D5CD3EAAA7422B0(unk_0x20A3B1C2EC4167BB(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x20A3B1C2EC4167BB(Var1.f_2, Var1.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, 2,7f, 7f, -2f), unk_0x0D1381B6E0F3987D(iLocal_48, 2,7f, -3,25f, 3f), 3f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, -2,7f, 7f, -2f), unk_0x0D1381B6E0F3987D(iLocal_48, -2,7f, -3,25f, 3f), 3f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 7f, -2f), unk_0x0D1381B6E0F3987D(iLocal_48, 0f, 0f, 3f), 2,4f, 0, 1, 0))
		{
			if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
		{
			iVar0 = unk_0xDC8D5832207C2EAD();
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0xFC8BFE4B41177C22(iLocal_48))
		{
			return ((unk_0xD9F5E1FEFD1329E4(iVar0, 0) && unk_0x685171EED42BC4DF(iVar0, iLocal_48)) && unk_0xDF93B3CFAC96698F(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_84)
		{
			return 1;
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) || unk_0x1C2F771CDC87A3A5(iLocal_47[0], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_47[0], unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) || unk_0x1C2F771CDC87A3A5(iLocal_47[1], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_47[1], unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	float fVar0;
	
	if ((!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && !unk_0x4FAFF4BCB7633475(iLocal_47[1])) && unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		switch (iLocal_46)
		{
			case 0:
				Local_281 = { unk_0x75DF72FC74EED046(iLocal_48, 0) };
				Local_282 = { unk_0x88124E0D60FB8D11(iLocal_48, 2) };
				Local_283 = { unk_0xBE8776D2466E9EA6("random@security_van", "sec_case_into_van_calm", Local_281, Local_282, 0, 2) };
				bLocal_286 = false;
				iLocal_287 = 0;
				unk_0x1DE99C193C7EC64B(iLocal_48, 1084227584);
				unk_0xB5396F1FB088FE38(&uLocal_52);
				unk_0x0FD8B5F4BB15CD71(0, 5000);
				unk_0xA966E518B752B92A(0, Local_283, 1f, -1, 0,1f, 512, Local_282.f_2);
				unk_0x2280392018BC0DD3(0, Local_282.f_2, 0);
				unk_0x93C0674FC00824D0(uLocal_52);
				unk_0x4BD42B0527065BB6(iLocal_47[1], uLocal_52);
				unk_0xD0557B139A542F12(&uLocal_52);
				iLocal_46++;
				break;
			
			case 1:
				Local_281 = { unk_0x75DF72FC74EED046(iLocal_48, 0) };
				Local_282 = { unk_0x88124E0D60FB8D11(iLocal_48, 2) };
				Local_283 = { unk_0xBE8776D2466E9EA6("random@security_van", "sec_case_into_van_calm", Local_281, Local_282, 0, 2) };
				if (!unk_0x5266F1D2AEF6F73A(iLocal_285))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_61) < 22500f && unk_0x5E22EA3310AF52EA(iLocal_48))
					{
						iLocal_285 = unk_0x2EC137C692A52458(Local_281, Local_282, 2);
						unk_0x3DA436E63AB0F541(iLocal_47[0], iLocal_285, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xBF3497E24DEAD835(iLocal_285, 1);
					}
				}
				if (unk_0x9B5C1660CCDF7189(iLocal_47[1], joaat("script_task_perform_sequence")) != 1)
				{
					unk_0xB5396F1FB088FE38(&uLocal_52);
					unk_0xA966E518B752B92A(0, Local_283, 1f, -1, 0,1f, 512, Local_282.f_2);
					unk_0x2280392018BC0DD3(0, Local_282.f_2, 0);
					unk_0x93C0674FC00824D0(uLocal_52);
					unk_0x4BD42B0527065BB6(iLocal_47[1], uLocal_52);
					unk_0xD0557B139A542F12(&uLocal_52);
				}
				fVar0 = unk_0xCFC0C995455A6204(iLocal_47[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_282.f_2 > 180f)
				{
					Local_282.f_2 = (Local_282.f_2 - 360f);
				}
				if (Local_282.f_2 <= -180f)
				{
					Local_282.f_2 = (Local_282.f_2 + 360f);
				}
				if (unk_0x1D5CD3EAAA7422B0((fVar0 - Local_282.f_2)) < 15f && system::vdist(Local_283, unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1)) < 0,2f)
				{
					unk_0x8B224316C228BF51(iLocal_47[1], -1056964608);
					unk_0x974022927CB47E68(iLocal_47[1]);
					bLocal_286 = true;
					iLocal_284 = unk_0x2EC137C692A52458(Local_281, Local_282, 2);
					unk_0x3DA436E63AB0F541(iLocal_47[1], iLocal_284, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0x381D671BCFC294D9(iLocal_48, iLocal_284, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_46++;
				}
				break;
			
			case 2:
				if (!iLocal_74)
				{
					if (((unk_0x5266F1D2AEF6F73A(iLocal_284) && unk_0xBD3B265153D3BA2D(iLocal_284) > 0,09f) && unk_0xBD3B265153D3BA2D(iLocal_284) < 0,11f) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_104, cLocal_103, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				if (unk_0x5266F1D2AEF6F73A(iLocal_284))
				{
					if (!bLocal_77)
					{
						if ((unk_0xFC8BFE4B41177C22(iLocal_50) && unk_0x21478251925DBFD7(iLocal_50, iLocal_47[1])) && unk_0xBD3B265153D3BA2D(iLocal_284) > 0,3793f)
						{
							if (!unk_0x21478251925DBFD7(iLocal_50, iLocal_48))
							{
								unk_0x837D67618BF89034(iLocal_50, 1, 1);
								unk_0x44C48AC14D3C09ED(iLocal_50, 0, 0);
								unk_0x4D306DD94DD6FDBA(iLocal_50, iLocal_48, 0, unk_0xAD8278DAEC2CC059(iLocal_48, unk_0xD1A6A821F5AC81DB(iLocal_50, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							bLocal_77 = true;
						}
					}
					else if (unk_0xBD3B265153D3BA2D(iLocal_284) > 0,546243f)
					{
						unk_0xC0086E5CBF13BBF7(iLocal_48, -4f, 1);
						if (unk_0xFC8BFE4B41177C22(iLocal_50))
						{
							iLocal_74 = 0;
							unk_0x6515021478088FBC(iLocal_48, 2, 1);
							unk_0x6515021478088FBC(iLocal_48, 3, 1);
							iLocal_46++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_74)
				{
					if (((unk_0x5266F1D2AEF6F73A(iLocal_284) && unk_0xBD3B265153D3BA2D(iLocal_284) > 0,56f) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_104, cLocal_103, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_74 = 1;
						}
					}
				}
				if (!iLocal_287)
				{
					if ((unk_0x5266F1D2AEF6F73A(iLocal_284) && unk_0xBD3B265153D3BA2D(iLocal_284) > 0,6f) || !unk_0x5266F1D2AEF6F73A(iLocal_284))
					{
						if (unk_0x5266F1D2AEF6F73A(iLocal_285))
						{
							unk_0x974022927CB47E68(iLocal_47[0]);
							iLocal_285 = unk_0x2EC137C692A52458(Local_281, Local_282, 2);
							unk_0x3DA436E63AB0F541(iLocal_47[0], iLocal_285, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_287 = 1;
					}
				}
				else if ((unk_0x5266F1D2AEF6F73A(iLocal_285) && unk_0xBD3B265153D3BA2D(iLocal_285) >= 0,92f) || !unk_0x5266F1D2AEF6F73A(iLocal_285))
				{
					if (!unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 0) && unk_0x9B5C1660CCDF7189(iLocal_47[0], joaat("script_task_enter_vehicle")) != 1)
					{
						unk_0x974022927CB47E68(iLocal_47[0]);
						unk_0xEBA229B2E0BB05E0(iLocal_47[0], iLocal_48, -1, -1, 1f, 1, 0, 0);
					}
				}
				if (unk_0x5266F1D2AEF6F73A(iLocal_284) && unk_0x5D640DD02AFD9F75(iLocal_47[1], unk_0x70E57E9927B6BA58("ENDS_IN_WALK")))
				{
					unk_0x974022927CB47E68(iLocal_47[1]);
					unk_0xEBA229B2E0BB05E0(iLocal_47[1], iLocal_48, -1, 0, 1f, 1, 0, 0);
					system::settimera(0);
				}
				if ((func_88() && unk_0x7BFB76C576628F3D(iLocal_48, 0) == 0f) && unk_0x7BFB76C576628F3D(iLocal_48, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (system::timera() > 15000)
				{
					unk_0x6515021478088FBC(iLocal_48, 0, 1);
					unk_0x6515021478088FBC(iLocal_48, 1, 1);
				}
				break;
		}
		if (((!unk_0x4FAFF4BCB7633475(func_3()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(func_3(), 1)) < 30f) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
	{
		if (unk_0xB0E14182FAD64944(uLocal_101))
		{
			func_68(7);
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_44 != 1)
	{
		if (iLocal_44 != 4)
		{
			func_97();
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_47[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_43 != 2)
					{
						unk_0x9F5225AA1E102B7A(iLocal_47[0], "random@security_van", "driver_exit_panic", Local_281, Local_282, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x974022927CB47E68(iLocal_47[0]);
						unk_0x10425721983AE158(iLocal_47[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && unk_0x5266F1D2AEF6F73A(iLocal_284)) && !unk_0x4FAFF4BCB7633475(iLocal_47[1]))
			{
				unk_0xC0086E5CBF13BBF7(iLocal_48, -1000f, 1);
				unk_0x974022927CB47E68(iLocal_47[1]);
			}
		}
		if (bLocal_77 && !unk_0xB0E14182FAD64944(uLocal_101))
		{
			unk_0x6515021478088FBC(iLocal_48, 2, 1);
			unk_0x6515021478088FBC(iLocal_48, 3, 1);
		}
	}
}

int func_154()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (func_80(unk_0xDC8D5832207C2EAD()))
				{
					iLocal_49 = unk_0xDC8D5832207C2EAD();
					return 1;
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
		{
			if (func_80(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
			{
				fLocal_278 = (fLocal_278 + unk_0x0B852B0BF94A8DC1());
			}
			else if (fLocal_278 > 0f)
			{
				fLocal_278 = (fLocal_278 - (unk_0x0B852B0BF94A8DC1() * 10f));
			}
			else if (fLocal_278 < 0f)
			{
				fLocal_278 = 0f;
			}
			if (fLocal_278 > 3f)
			{
				iLocal_49 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if ((((((!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_47[iVar0]) || unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1)) < 9f) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0x8BF5256C439DF778(iLocal_47[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xCECDBB848D53DEB2(iLocal_47[0], iLocal_48, 0) || !unk_0xCECDBB848D53DEB2(iLocal_47[1], iLocal_48, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D())))
		{
			if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[0]))
				{
					if (unk_0xFAA48325A90263BE(iLocal_47[0], unk_0x4A8C381C258A124D(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_47[1]))
				{
					if (unk_0xFAA48325A90263BE(iLocal_47[1], unk_0x4A8C381C258A124D(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if ((((((!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && unk_0x9B3D4335E0EDB0BE(iLocal_47[iVar0], unk_0x4A8C381C258A124D(), 1)) || (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && unk_0x1B32E388988DD296(iLocal_47[iVar0], unk_0x4A8C381C258A124D()))) || unk_0x9B3D4335E0EDB0BE(iLocal_47[iVar0], unk_0x4A8C381C258A124D(), 1)) || (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1) && func_72())) || unk_0x4FAFF4BCB7633475(iLocal_47[iVar0])) || unk_0x1C2F771CDC87A3A5(iLocal_47[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0xD9F5E1FEFD1329E4(iLocal_48, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_47)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]))
			{
				if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()) && unk_0xA6534E6C7AE314D6(iLocal_47[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_48, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_61, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0xD9F5E1FEFD1329E4(iLocal_48, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_48, 1), 25f, 0)) || (!unk_0x4FAFF4BCB7633475(iLocal_47[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_47[0], 1), 20f, 0))) || (!unk_0x4FAFF4BCB7633475(iLocal_47[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1A6A821F5AC81DB(iLocal_47[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_47[iVar0]))
		{
			if ((!unk_0x4FAFF4BCB7633475(iLocal_47[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_47[iVar0], 0)) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if ((unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1), 5f, 1) || func_37(unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1) + Vector(5f, 10f, 10f), unk_0xD1A6A821F5AC81DB(iLocal_47[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0x9B3D4335E0EDB0BE(iLocal_47[iVar0], unk_0x4A8C381C258A124D(), 1))
				{
					bLocal_78 = true;
					return 1;
				}
			}
			else
			{
				bLocal_78 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	iLocal_48 = unk_0x5779387E956077A6(iLocal_72, Local_61, fLocal_62, 1, 1, 0);
	iLocal_51 = unk_0x4E55EAB577C13329(joaat("prop_security_case_01"), Local_61, 1, 1, 0);
	unk_0x4D306DD94DD6FDBA(iLocal_51, iLocal_48, 0, 0f, -2,4589f, 1,2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	unk_0x4285E11B28063EE0(iLocal_51, 0, 0);
	unk_0x015E1BBD4DB33542(iLocal_51, iLocal_48, 0);
	unk_0x1DE99C193C7EC64B(iLocal_48, 1084227584);
	unk_0x0B74F181ADFC39BF(iLocal_48, 3);
	unk_0xD0F1DB0E50B367AD(iLocal_51, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0x87EDE48547CC8942(iLocal_48, 1, 0);
	unk_0xD25E9BDC14A0B649(iLocal_48, 700, 0, 0);
	unk_0xDD38B2935A3EAC56(iLocal_48, 0, 0);
	unk_0x788F35D395511DFE(iLocal_48, 1, 1);
	unk_0x9E62B9416FD53EBA(iLocal_48, 0);
	unk_0x0248EA593ACD1C87(iLocal_48, 1);
	unk_0x693ACD1AA0BDB375((Local_61.f_0 - 200f), (Local_61.f_1 - 200f), (Local_61.f_0 + 200f), (Local_61.f_1 + 200f));
	if (iLocal_42 == 3)
	{
		iLocal_47[0] = unk_0x8728A378EF2B46B2(iLocal_48, 26, iLocal_71, -1, 1, 1);
		iLocal_47[1] = unk_0x8728A378EF2B46B2(iLocal_48, 26, iLocal_71, 0, 1, 1);
		unk_0xC229299217554C78(iLocal_48, 1, 1, 0);
		unk_0x788F35D395511DFE(iLocal_48, 1, 1);
	}
	else
	{
		iLocal_47[1] = unk_0xB1DBFEB95C0EFB88(26, iLocal_71, Local_59[1 /*3*/], fLocal_60[1], 1, 1);
		iLocal_47[0] = unk_0xB1DBFEB95C0EFB88(26, iLocal_71, Local_59[0 /*3*/], fLocal_60[0], 1, 1);
		unk_0xE67051907958B5EB(iLocal_47[1], iLocal_47[0], -1, 0, 2);
	}
	func_85(iLocal_47[1]);
	unk_0x06CD913C241C765E("Security_guards", &iLocal_58);
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		unk_0x886FA295C1257AAA(iLocal_47[iVar0], 0);
		unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 1, 0);
		unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 13, 0);
		unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 6, 1);
		unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 8, 0);
		unk_0xBE8796DB2B90A437(iLocal_47[iVar0], 10, 1);
		unk_0x1CA08719184AFC6F(iLocal_47[iVar0], 512, 1);
		unk_0x0428AFDCAA63B06E(iLocal_47[iVar0], 118, 0);
		unk_0x1CA08719184AFC6F(iLocal_47[iVar0], 128, 1);
		unk_0x81E9E7612B0E4BCE(iLocal_47[iVar0], 0);
		unk_0x87EDE48547CC8942(iLocal_47[iVar0], 1, 0);
		unk_0x379E96D5D36B27DC(iLocal_47[iVar0], 1);
		unk_0xD78BC33933604161(iLocal_47[iVar0], 1);
		unk_0xB41DEC3AAC1AA107(iLocal_47[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x3CEA1FD137ACE2D9(iLocal_47[iVar0], iLocal_58);
		unk_0x44FB298D6382876D(iLocal_47[iVar0], 1);
		unk_0xF88FC425EC7D675D(iLocal_47[iVar0], 250);
		iVar0++;
	}
	unk_0x788F35D395511DFE(iLocal_47[1], 1, 1);
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_58);
	unk_0xD414C47AFF81382A(1, iLocal_58, joaat("COP"));
	unk_0xD414C47AFF81382A(2, iLocal_58, joaat("player"));
	unk_0xD414C47AFF81382A(2, joaat("player"), iLocal_58);
	if (iLocal_42 == 1)
	{
		unk_0x7F08C4791E6D6969(iLocal_47[0], 0, 1, 0, 0, 1);
		unk_0xE915224DCA36212A(iLocal_47[0], 0);
		unk_0x7F08C4791E6D6969(iLocal_47[1], 0, 1, 0, 0, 1);
		unk_0xE915224DCA36212A(iLocal_47[1], 0);
	}
	if (func_16() == 0 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_74(&Local_104, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_74(&Local_104, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_74(&Local_104, 2, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	func_74(&Local_104, 3, iLocal_47[0], "SECVANGUY1", 0, 1);
	func_74(&Local_104, 4, iLocal_47[1], "SECVANGUY2", 0, 1);
	unk_0xCCA6D8A84EE8C88A(iLocal_72, 1);
	unk_0xA1F44380A2D59F2B(iLocal_71, 1);
	if (iLocal_42 != 3)
	{
	}
}

float func_160(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

bool func_161()
{
	func_169(&uLocal_121, iLocal_71);
	func_169(&uLocal_121, iLocal_72);
	func_169(&uLocal_121, iLocal_73);
	func_167(&uLocal_121, "random@security_van");
	func_167(&uLocal_121, "weapons@holster_1h");
	func_167(&uLocal_121, "move_injured_generic");
	func_166(&uLocal_121, 3);
	return func_162(&uLocal_121);
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_165(uParam0))
			{
				case 0:
					return unk_0x6252BC0DD8A320DB(uParam2);
					break;
				
				case 1:
					return unk_0xE100DD4F82A51BDE(uParam1);
					break;
				
				case 2:
					return unk_0x8175BC6D49412468(uParam1);
					break;
				
				case 3:
					return unk_0x38D063D8CF6D1967(sParam1);
					break;
				
				case 4:
					return unk_0x266D9DB5FCE4003B(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xA08EEC7306CF6198(sParam1);
					break;
				
				case 6:
					return unk_0xD7E1DF759CD0FFF2(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x65F606616F48186B(uParam2);
					break;
				
				case 8:
					return unk_0xDCB78A15E5F495DC(uParam2);
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

int func_165(var uParam0)
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

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x1B79E937E91F40C3(sParam3, "NULL"))
					{
						if (unk_0x1B79E937E91F40C3(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], bParam1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar5 = func_61();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_172(iVar1, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_113687 > 0;
}

int func_179()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_113958 == func_65() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x8034325BF6D6E41F() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_101533.f_20, 2)) || BitTest(Global_101533.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x8034325BF6D6E41F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(var uParam0)
{
	func_186(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_186(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_165(*uParam0))
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(uParam2);
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE(uParam1);
				break;
			
			case 2:
				unk_0x73DEEAB0747FB17C(uParam1);
				break;
			
			case 3:
				unk_0xD0D00ED689D6CA81(uParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xD772E6694B8472A6(uParam2, uParam1);
				break;
			
			case 5:
				unk_0xD04A772C411165F2(uParam1);
				break;
			
			case 6:
				unk_0xD7E1DF759CD0FFF2(uParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x625263BFD08AE230(uParam2);
				break;
			
			case 8:
				unk_0xF2CB0224D3BE0B42(sParam1, uParam2);
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

void func_187()
{
	iLocal_73 = joaat("prop_security_case_01");
	iLocal_72 = joaat("stockade");
	iLocal_71 = joaat("s_m_m_armoured_01");
	uLocal_92 = unk_0xC5935DFB3F39785A(3000, 8000);
	switch (bLocal_43)
	{
		case 1:
			Local_68 = { -315,889f, -1550,554f, 7,233013f };
			Local_69 = { -315,2352f, -1366,581f, 45,29617f };
			fLocal_70 = 180f;
			Local_61 = { -331,8429f, -1461,042f, 30,153f };
			fLocal_62 = -64,3539f;
			Local_59[0 /*3*/] = { -335,564f, -1462,237f, 29,5452f };
			fLocal_60[0] = 158,3857f;
			Local_59[1 /*3*/] = { -342,7024f, -1475,043f, 29,6004f };
			fLocal_60[1] = 290,3041f;
			iLocal_42 = 1;
			break;
		
		case 2:
			Local_68 = { -538,2149f, -868,7426f, 17,96054f };
			Local_69 = { -663,8162f, -867,9987f, 53,66249f };
			fLocal_70 = 121,5f;
			Local_61 = { -588,5128f, -866,9584f, 25,32786f };
			fLocal_62 = -89,02679f;
			Local_59[0 /*3*/] = { -589,4673f, -865,4055f, 24,7622f };
			fLocal_60[0] = 12,5464f;
			Local_59[1 /*3*/] = { -578,4414f, -874,5964f, 24,9183f };
			fLocal_60[1] = 352,4951f;
			iLocal_42 = 1;
			break;
		
		case 3:
			Local_68 = { -468,6309f, 6101,907f, 14,8912f };
			Local_69 = { -359,9734f, 5994,152f, 50,36843f };
			fLocal_70 = 152,25f;
			Local_61 = { -395,6852f, 6056,967f, 30,5001f };
			fLocal_62 = 188,9862f;
			Local_59[0 /*3*/] = { -398,4612f, 6051,296f, 30,5003f };
			fLocal_60[0] = 251,7138f;
			Local_59[1 /*3*/] = { -378,408f, 6035,689f, 30,498f };
			fLocal_60[1] = 154,0836f;
			iLocal_42 = 2;
			break;
		
		case 4:
			Local_68 = { -631,3408f, -1105,581f, 7,220509f };
			Local_69 = { -462,1721f, -1103,597f, 62,53583f };
			fLocal_70 = 177,25f;
			Local_61 = { -595,7766f, -1094,089f, 21,1785f };
			fLocal_62 = 263,4662f;
			Local_59[0 /*3*/] = { -600,8182f, -1103,778f, 21,3292f };
			fLocal_60[0] = 338,8304f;
			Local_59[1 /*3*/] = { -595,3461f, -1096,054f, 21,1785f };
			fLocal_60[1] = 151,297f;
			iLocal_42 = 1;
			break;
		
		case 5:
			Local_61 = { -1042,768f, -1049,296f, 1,0825f };
			fLocal_62 = 26,9919f;
			iLocal_42 = 3;
			break;
		
		case 6:
			Local_61 = { -595,5618f, -667,7325f, 31,0544f };
			fLocal_62 = 271,1543f;
			iLocal_42 = 3;
			break;
		
		case 7:
			Local_61 = { 3018,384f, 3634,017f, 70,4076f };
			fLocal_62 = 335,9052f;
			iLocal_42 = 3;
			break;
		
		case 8:
			Local_61 = { -2815,661f, 2208,171f, 27,8382f };
			fLocal_62 = 119,1519f;
			iLocal_42 = 3;
			break;
		
		case 9:
			Local_61 = { 856,7742f, -2067,845f, 29,0704f };
			fLocal_62 = 83,1204f;
			iLocal_42 = 3;
			break;
		
		case 10:
			Local_61 = { 805,1932f, -703,1327f, 28,1632f };
			fLocal_62 = 248,8625f;
			iLocal_42 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_189();
}

void func_189()
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

void func_190(int iParam0)
{
	Global_113958 = iParam0;
}

int func_191(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_65();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_230())
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
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
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
		if (!func_228(iParam1))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_113969.f_24998.f_43[iParam1]))
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
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_214(iVar4))
				{
					if (func_192(iVar2))
					{
						if (!func_134(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_16() != iVar2)
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

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_197(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_203(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_204(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x4BA5A16068183C5E());
	func_212(&uVar0, unk_0x18E502A71E28968C());
	func_211(&uVar0, unk_0x5295501D0862870D());
	func_210(&uVar0, unk_0xB12880C92EA6EE15());
	func_209(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_208(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_214(int iParam0)
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_1()) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_1()) || Global_32951) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_1()) || func_221()) || Global_113016) || Global_32951) || func_223()) || Global_45250) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_101572.f_1;
}

int func_218()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_101585.f_394 > 0;
}

bool func_222()
{
	return Global_101585.f_393 > 0;
}

var func_223()
{
	return Global_1575083;
}

int func_224()
{
	func_15();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
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

int func_229()
{
	var uVar0;
	
	if (Global_33100)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
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

int func_230()
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

void func_231()
{
	if (func_183())
	{
		if (unk_0xB0E14182FAD64944(uLocal_101))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_56))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_56);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_51))
		{
			unk_0x51C8BEA2005931AB(&iLocal_51);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_50))
		{
			if (unk_0xF6C26AE940C14749(iLocal_50))
			{
				unk_0x51C8BEA2005931AB(&iLocal_50);
			}
			else
			{
				unk_0xB3B56385ECA230B4(&iLocal_50);
			}
		}
		unk_0x55098D9E9AD58806(iLocal_72);
		unk_0x55098D9E9AD58806(iLocal_71);
		unk_0x55098D9E9AD58806(iLocal_73);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xA1F44380A2D59F2B(iLocal_71, 0);
		unk_0xCCA6D8A84EE8C88A(iLocal_72, 0);
	}
	if (iLocal_95 != 0)
	{
		unk_0x6E8A7BB566D1F7AF(iLocal_95);
	}
	unk_0xD7B6A43ACC36D868(uLocal_57, 0);
	func_135(&uLocal_109, 0, 0);
	func_237(-1);
	func_232(&uLocal_121, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(var uParam0, var uParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_165(uParam0))
		{
			case 0:
				unk_0x55098D9E9AD58806(uParam2);
				break;
			
			case 1:
				unk_0x268BE77F77533D03(uParam1);
				break;
			
			case 2:
				unk_0x9B64A44D0B8D7CF6(uParam1);
				break;
			
			case 3:
				unk_0x633E3833FB96BCCB(uParam1);
				break;
			
			case 4:
				unk_0x7821F942CAEEBEE1(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x8943BF9E0F15EDA0(uParam1);
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

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_113958, 1), 64);
		if (func_64(Global_113958) > 0)
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
	func_238(&Global_33008);
	Global_113959 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0xC39AE5D390581AD5(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0xC39AE5D390581AD5(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

