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
	bool bLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_51[12];
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<7> Local_68 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_79 = 16;
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
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	struct<3> Local_246 = { 0, 0, 0 } ;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	struct<76> Local_250 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_261[3] = { 0, 0, 0 };
	var uLocal_262[3] = { 0, 0, 0 };
	int iLocal_263[3] = { 0, 0, 0 };
	float fLocal_264 = 0f;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	struct<13> Local_268[10];
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
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	bool bLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	var uLocal_294[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_295[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	struct<3> Local_303 = { 0, 0, 0 } ;
	int iLocal_304 = 0;
	struct<41> Local_305 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_264 = 0f;
	bLocal_265 = true;
	Local_303 = { 1683,682f, 2518,867f, 44,5651f };
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_89(0);
	}
	uLocal_245 = unk_0x4A8C381C258A124D();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD6AD454C9B73DD75(unk_0x259BE71D8A81D4FA());
	}
	while (true)
	{
		if (unk_0x1C2F771CDC87A3A5(uLocal_245, 0))
		{
			func_89(0);
		}
		func_88();
		Local_246 = { unk_0xD1A6A821F5AC81DB(iLocal_245, 1) };
		switch (iLocal_244)
		{
			case 0:
				func_86();
				iLocal_244 = 1;
				break;
			
			case 1:
				if (!Global_32957)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_244 = 2;
				}
				break;
			
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_244 = 3;
				}
				break;
			
			case 3:
				func_70();
				system::wait(0);
				func_69();
				system::wait(0);
				func_66();
				func_65();
				iLocal_244 = 4;
				break;
			
			case 4:
				if (!Global_32957)
				{
					if (Global_98441)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_89(1);
				}
				break;
		}
		system::wait(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_3()
{
	if (Global_112911)
	{
		return 1;
	}
	if (!func_2(14) && unk_0x486FF5D06E9659F1(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_49 == 1)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1766,972f, 2409,596f, 43,55469f, 1826,647f, 2471,633f, 56,30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[0] = 1;
				}
			}
			else
			{
				iLocal_57[0] = 0;
			}
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1662,31f, 2391,06f, 43,51377f, 1761,362f, 2405,143f, 56,65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[1] = 1;
				}
			}
			else
			{
				iLocal_57[1] = 0;
			}
		}
	}
	else if (iLocal_49 == 3)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1537,369f, 2465,132f, 43,5756f, 1655,663f, 2391,822f, 56,54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[2] = 1;
				}
			}
			else
			{
				iLocal_57[2] = 0;
			}
		}
	}
	else if (iLocal_49 == 4)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1529,153f, 2584,264f, 43,6168f, 1535,014f, 2469,253f, 56,5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[3] = 1;
				}
			}
			else
			{
				iLocal_57[3] = 0;
			}
		}
	}
	else if (iLocal_49 == 5)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1565,045f, 2681,205f, 43,50552f, 1529,915f, 2586,427f, 56,52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[4] = 1;
				}
			}
			else
			{
				iLocal_57[4] = 0;
			}
		}
	}
	else if (iLocal_49 == 6)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1645,169f, 2760,33f, 43,6705f, 1567,113f, 2682,905f, 56,39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[5] = 1;
				}
			}
			else
			{
				iLocal_57[5] = 0;
			}
		}
	}
	else if (iLocal_49 == 7)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1772,306f, 2766,364f, 43,59126f, 1650,228f, 2761,691f, 56,53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[6] = 1;
				}
			}
			else
			{
				iLocal_57[6] = 0;
			}
		}
	}
	else if (iLocal_49 == 8)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1831,435f, 2623,257f, 43,46658f, 1851,659f, 2696,404f, 56,68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[7] = 1;
				}
			}
			else
			{
				iLocal_57[7] = 0;
			}
		}
	}
	else if (iLocal_49 == 9)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1831,435f, 2623,257f, 43,46658f, 1851,659f, 2696,404f, 56,68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[8] = 1;
				}
			}
			else
			{
				iLocal_57[8] = 0;
			}
		}
	}
	else if (iLocal_49 == 10)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1829,468f, 2480,96f, 43,52237f, 1836,998f, 2566,856f, 60,35412f, 20,5f, 0, 1, 0))
			{
				if (!bLocal_53)
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_57[9] = 1;
				}
			}
			else
			{
				iLocal_57[9] = 0;
			}
		}
	}
	iLocal_49++;
	if (iLocal_49 > 10)
	{
		iLocal_49 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_57[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_53)
			{
				unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	struct<3> Var0;
	
	switch (iLocal_48)
	{
		case 0:
			unk_0xEC9DAA34BBB4658C(joaat("police3"));
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
			if (unk_0x6252BC0DD8A320DB(joaat("police3")) && unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01")))
			{
				iLocal_48++;
			}
			break;
		
		case 1:
			iLocal_64 = unk_0x5779387E956077A6(joaat("police3"), 1797,785f, 2599,697f, 44,5769f, 269,6189f, 1, 1, 0);
			iLocal_66 = unk_0x8728A378EF2B46B2(iLocal_64, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_26(&iLocal_66);
			iLocal_48++;
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			if ((func_16(iLocal_66, iLocal_64, &Local_68, &uLocal_69, 0, 1, 0, 1, 1) || func_16(iLocal_67, iLocal_65, &Local_68, &uLocal_69, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D())))
			{
				unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1819,274f, 2608,537f, 44,6195f, 0, 0f, 50f, 0);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_66, 0))
				{
					unk_0x62A5310368A20EFA(iLocal_66, unk_0x4A8C381C258A124D(), 0, 16);
				}
				if (!func_14(&uLocal_70))
				{
					func_11(&uLocal_70);
				}
				iLocal_48++;
			}
			break;
		
		case 3:
			if (func_14(&uLocal_70))
			{
				if (func_8(&uLocal_70) > 15f)
				{
					iLocal_65 = unk_0x5779387E956077A6(joaat("police3"), 1755,159f, 2614,456f, 44,5652f, 179,3394f, 1, 1, 0);
					iLocal_67 = unk_0x8728A378EF2B46B2(iLocal_65, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_26(&iLocal_67);
					unk_0x62A5310368A20EFA(iLocal_67, unk_0x4A8C381C258A124D(), 0, 16);
					iLocal_48++;
				}
				else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
					}
					if (func_7(1818,237f, 2604,927f, 44,57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_48 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				}
				if (func_7(1818,237f, 2604,927f, 44,57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_48 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_64))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_64);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_66))
	{
		unk_0x734A9F4537A31459(&iLocal_66);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_65))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_65);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_67))
	{
		unk_0x734A9F4537A31459(&iLocal_67);
	}
}

int func_7(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (system::vdist2(Param0, Param1) < (fParam2 * fParam2))
	{
		if (((unk_0xFC8BFE4B41177C22(iLocal_64) && unk_0xFC8BFE4B41177C22(iLocal_66)) && unk_0xFC8BFE4B41177C22(iLocal_65)) && unk_0xFC8BFE4B41177C22(iLocal_67))
		{
			if (unk_0xF6C26AE940C14749(iLocal_64) || !unk_0xCB5CAFF0A4A8B74B(iLocal_64))
			{
				if (unk_0xF6C26AE940C14749(iLocal_66) || !unk_0xCB5CAFF0A4A8B74B(iLocal_66))
				{
					if (unk_0xF6C26AE940C14749(iLocal_65) || !unk_0xCB5CAFF0A4A8B74B(iLocal_65))
					{
						if (unk_0xF6C26AE940C14749(iLocal_67) || !unk_0xCB5CAFF0A4A8B74B(iLocal_67))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (system::vdist2(Param0, Param1) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_11(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_15(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			Var1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			Var0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			Var1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			Var1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			Var1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			Var1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			Var1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			Var0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			Var1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			Var1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			Var0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			Var1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			Var0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			Var1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			Var1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			Var1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			Var1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			Var0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			Var1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			Var1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			Var0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			Var1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			Var1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			Var1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			Var1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			Var1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			Var0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			Var1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			Var0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			Var1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			Var0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			Var1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			Var1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			Var1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			Var0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			Var1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			Var1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			Var1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			Var1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			Var0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			Var1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			Var1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			Var1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			Var0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			Var1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			Var0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			Var1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			Var0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			Var1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			Var0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			Var1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			Var0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			Var1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			Var0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			Var1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			Var0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			Var1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			Var1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			Var1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			Var0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			Var1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			Var1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			Var1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			Var1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			Var1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			Var0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			Var1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			Var1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			Var1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			Var1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			Var1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			Var1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			Var0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			Var1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			Var0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			Var1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			Var0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			Var1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			Var0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			Var1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x26715B0ED6702C87(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_43)
		{
			iLocal_44 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_43 = true;
		}
		iLocal_45 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_46 = (iLocal_44 - iLocal_45);
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_46) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_43)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_46) > 100f)
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
		uVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
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
	if (func_20(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_18(iParam0, 1) < 1,5f)
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
		if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_18(int iParam0, int iParam1)
{
	return func_19(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

float func_19(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x11552FA9DCB8E126(uParam0, 4))
	{
		if (unk_0x65F146FF416F109F(uParam0) && !unk_0x3C2402675D8FFADA(iParam0))
		{
			if (unk_0x65FFA94B82A71741(uParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
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
	if (unk_0x11552FA9DCB8E126(uParam0, 2))
	{
		if (unk_0x65F146FF416F109F(uParam0))
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
			if (unk_0x74CD4FE549433E92(iParam0) || func_23(iVar1))
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

int func_23(int iParam0)
{
	int iVar0;
	var uVar1;
	
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
						if (func_19(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
						{
							if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uVar1))
							{
								if ((unk_0x55B80B6E7AB61270(uVar1) && unk_0xE93EDE86BBB66532(uVar1) == iParam0) || (unk_0x0101C509A6E67F99(uVar1) && unk_0xBD545F8729E9F413(uVar1) == unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0)))
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0xB41DEC3AAC1AA107(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0xAAA71DD7E9059338(*iParam0, 1);
	unk_0xBE8796DB2B90A437(*iParam0, 13, 1);
	unk_0xBE8796DB2B90A437(*iParam0, 0, 1);
	unk_0x570AAA413775DFFB(*iParam0, 1);
	unk_0xD0764B65C2DFEDCA(*iParam0, 1);
	unk_0xA6897CC743103C98(*iParam0, 0f);
	unk_0x44FB298D6382876D(*iParam0, 1);
	unk_0xC652B7E19CE29859(*iParam0, 100);
	unk_0x1090EAA386FB31A8(*iParam0, 2);
	unk_0xBE8796DB2B90A437(*iParam0, 23, 0);
	unk_0x25DBF9F9C6BDFFEA(*iParam0, 1000f);
	unk_0xBE8796DB2B90A437(*iParam0, 1, 1);
}

void func_27()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bLocal_292)
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_287, 0))
		{
			if (!unk_0x050D073F91C5243C(iLocal_287))
			{
				unk_0x88556DA0593A0748(iLocal_287, 101, "PrisonHeli", 1);
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_288, 0))
			{
				Var0 = { unk_0x0D1381B6E0F3987D(iLocal_288, 0f, 4f, -2f) };
				unk_0xE61AF8D27706A774(iLocal_288, Var0);
			}
			if (bLocal_290)
			{
				if (!func_28())
				{
					bLocal_290 = false;
					unk_0x130DC0384195C42E(iLocal_287, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_290 = true;
				unk_0x130DC0384195C42E(iLocal_287, 1, 0);
			}
			if (bLocal_290)
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_287, 1) };
				if (system::vdist2(Local_246, Var1) < 90000f)
				{
					if (!iLocal_291)
					{
						iLocal_291 = 1;
					}
				}
			}
		}
		else if (unk_0xC450B06E5AAA0985(uLocal_289))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_289);
		}
	}
}

int func_28()
{
	if (unk_0x5295501D0862870D() >= 20 || unk_0x5295501D0862870D() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_305.f_18[0])
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
		if (!bLocal_56)
		{
			if (system::vdist2(Var1, Local_303) < 5625f)
			{
				iLocal_304 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(Local_305.f_27[iVar0]))
		{
			if (!Local_305.f_18[iVar0])
			{
				if (func_16(Local_305.f_27[iVar0], 0, &Local_68, &uLocal_69, 1, 1, 0, 1, 1) || iLocal_304)
				{
					unk_0x62A5310368A20EFA(Local_305.f_27[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
					Local_305.f_18[iVar0] = 1;
				}
			}
			if (!Local_305.f_18[iVar0])
			{
				if (!unk_0xBD08B11F7404F5CD(Local_305.f_27[iVar0]))
				{
					unk_0x7FD62C74ABB26599(Local_305.f_27[iVar0], Local_305.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xC450B06E5AAA0985(Local_305.f_36[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(Local_305.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFC8BFE4B41177C22(Local_305.f_31[iVar0]))
		{
			if (unk_0x4FAFF4BCB7633475(Local_305.f_31[iVar0]))
			{
				if (unk_0xC450B06E5AAA0985(Local_305.f_40[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(Local_305.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_305.f_22[0])
	{
		if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[0]))
		{
			if ((func_16(Local_305.f_31[0], 0, &Local_68, &uLocal_69, 1, 1, 0, 1, 1) || Local_305.f_18[1] == 1) || iLocal_304)
			{
				unk_0x974022927CB47E68(Local_305.f_31[0]);
				unk_0x62A5310368A20EFA(Local_305.f_31[0], unk_0x4A8C381C258A124D(), 0, 16);
				Local_305.f_22[0] = 1;
			}
		}
	}
	if (!Local_305.f_22[1])
	{
		if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[1]))
		{
			if ((func_16(Local_305.f_31[1], 0, &Local_68, &uLocal_69, 0, 1, 0, 1, 1) || Local_305.f_18[1] == 1) || iLocal_304)
			{
				unk_0x974022927CB47E68(Local_305.f_31[1]);
				unk_0x62A5310368A20EFA(Local_305.f_31[1], unk_0x4A8C381C258A124D(), 0, 16);
				Local_305.f_22[1] = 1;
			}
		}
	}
	if (!Local_305.f_22[2])
	{
		if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[2]))
		{
			if ((func_16(Local_305.f_31[2], 0, &Local_68, &uLocal_69, 0, 1, 0, 1, 1) || Local_305.f_18[2] == 1) || iLocal_304)
			{
				unk_0x974022927CB47E68(Local_305.f_31[2]);
				unk_0x62A5310368A20EFA(Local_305.f_31[2], unk_0x4A8C381C258A124D(), 0, 16);
				Local_305.f_22[2] = 1;
			}
		}
	}
	if (!Local_305.f_22[3])
	{
		if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[3]))
		{
			if ((func_16(Local_305.f_31[3], 0, &Local_68, &uLocal_69, 0, 1, 0, 1, 1) || Local_305.f_18[2] == 1) || iLocal_304)
			{
				unk_0x974022927CB47E68(Local_305.f_31[3]);
				unk_0x62A5310368A20EFA(Local_305.f_31[3], unk_0x4A8C381C258A124D(), 0, 16);
				Local_305.f_22[3] = 1;
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(Local_305.f_27[1]))
	{
		if (unk_0xBD08B11F7404F5CD(Local_305.f_27[1]))
		{
			if (!Local_305.f_22[0])
			{
				if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[0]))
				{
					unk_0x329B82704ED2A3E3(Local_305.f_31[0], Local_305.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_305.f_22[1])
			{
				if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[1]))
				{
					unk_0x329B82704ED2A3E3(Local_305.f_31[1], Local_305.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(Local_305.f_27[2]))
	{
		if (unk_0xBD08B11F7404F5CD(Local_305.f_27[2]))
		{
			if (!Local_305.f_22[2])
			{
				if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[2]))
				{
					unk_0x329B82704ED2A3E3(Local_305.f_31[2], Local_305.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_305.f_22[3])
			{
				if (!unk_0x4FAFF4BCB7633475(Local_305.f_31[3]))
				{
					unk_0x329B82704ED2A3E3(Local_305.f_31[3], Local_305.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_267++;
	if (iLocal_267 >= 30)
	{
		if (!bLocal_56)
		{
			if (func_15(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0xFC8BFE4B41177C22(Local_250.f_64[iVar0]) && !unk_0x4FAFF4BCB7633475(Local_250.f_64[iVar0]))
					{
						if (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) != -1)
						{
							if (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 1 || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
							{
								unk_0xC652B7E19CE29859(Local_250.f_64[iVar0], 10);
								iLocal_266 = 1;
							}
						}
						else if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
						{
							unk_0xC652B7E19CE29859(Local_250.f_64[iVar0], 10);
							iLocal_266 = 1;
						}
						else
						{
							unk_0xC652B7E19CE29859(Local_250.f_64[iVar0], 100);
							iLocal_266 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_266 = 0;
			}
		}
		iLocal_267 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFC8BFE4B41177C22(Local_250.f_64[iVar0]) && !unk_0x4FAFF4BCB7633475(Local_250.f_64[iVar0]))
		{
			if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), 0))
			{
				unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
			}
			if ((((func_16(Local_250.f_64[iVar0], 0, &Local_68, &uLocal_69, 0, 1, 0, 1, 1) || unk_0x398315D0C90DE6F6(Local_250[iVar0 /*3*/], 20f, 1)) || unk_0xD83D7629BFD65725(Local_250[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_250[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_266) || func_32(&(Local_250.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
					{
						if (bLocal_59)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				if (!unk_0xBD08B11F7404F5CD(Local_250.f_64[iVar0]))
				{
					unk_0x7FD62C74ABB26599(Local_250.f_64[iVar0], Local_250.f_42[iVar0], 0, 0, -1);
					Local_250.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xC450B06E5AAA0985(Local_250.f_75[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(Local_250.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0xFC8BFE4B41177C22(uLocal_262[iVar0]) && !unk_0x1C2F771CDC87A3A5(uLocal_262[iVar0], 0)) && unk_0xFC8BFE4B41177C22(uLocal_261[iVar0])) && !unk_0x1C2F771CDC87A3A5(uLocal_261[iVar0], 0))
		{
			Var1 = { unk_0x0D1381B6E0F3987D(uLocal_262[iVar0], 0f, 3,5f, -2f) };
			unk_0xE61AF8D27706A774(uLocal_262[iVar0], Var1);
			unk_0xC229299217554C78(uLocal_261[iVar0], 0, 0, 0);
			if (iLocal_263[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x1C2F771CDC87A3A5(uLocal_261[iVar0], 0))
					{
						iLocal_263[iVar0] = 0;
						unk_0x130DC0384195C42E(uLocal_261[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_261[iVar0], 0))
				{
					iLocal_263[iVar0] = 1;
					unk_0x130DC0384195C42E(uLocal_261[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_264 > 20f)
	{
		bLocal_265 = false;
	}
	else if (fLocal_264 < -20f)
	{
		bLocal_265 = true;
	}
	if (bLocal_265)
	{
		fLocal_264 = (fLocal_264 + 0,25f);
	}
	else
	{
		fLocal_264 = (fLocal_264 - 0,25f);
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_261[0]))
	{
		unk_0x5C96CEA06531AB03(uLocal_261[0], (53f + fLocal_264));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_261[1]))
	{
		unk_0x5C96CEA06531AB03(uLocal_261[1], (13f + fLocal_264));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_261[2]))
	{
		unk_0x5C96CEA06531AB03(uLocal_261[2], (250f + fLocal_264));
	}
}

void func_31(int iParam0)
{
	if (!Local_250.f_53[iParam0])
	{
		unk_0xE84EF4129A44CCA3(Local_250.f_64[iParam0], unk_0x4A8C381C258A124D(), -1, 0);
		unk_0x25DBF9F9C6BDFFEA(Local_250.f_64[iParam0], 1000f);
		unk_0x895CE77855F9AFD2(Local_250.f_64[iParam0]);
		Local_250.f_53[iParam0] = 1;
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 3, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		}
	}
}

int func_32(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(*uParam0, 1) };
	}
	if (system::vdist2(Var0, Var1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) >= 2 || func_15(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4, 150, 0))
		{
			if (unk_0x0C876A2D0F41B79C("PRISON_ALARMS"))
			{
				unk_0x4C6BF3BC14C6F6D6("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0xA6274B757A008184("PRISON_ALARMS", 0);
		}
	}
}

void func_34()
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1840,23f, 2471,49f, 41,94113f, 1840,553f, 2751,983f, 54,68177f, 84,25f, 0, 1, 0))
		{
			func_63(&Local_68, 2);
		}
		else
		{
			func_61(&Local_68, 2);
		}
	}
	if (iLocal_47 > 20)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_60(4, 1);
					if (!func_14(&uLocal_76))
					{
						func_11(&uLocal_76);
					}
					if (!bLocal_58)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_66) && !unk_0x1C2F771CDC87A3A5(iLocal_66, 0))
						{
							func_59(&uLocal_79, 8, iLocal_66, "TANNOY", 0, 1);
							if (func_37(&uLocal_79, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_56 = true;
								bLocal_58 = true;
							}
						}
					}
				}
				else
				{
					func_60(4, 0);
					if (func_14(&uLocal_76))
					{
						func_12(&uLocal_76);
					}
					bLocal_56 = false;
				}
			}
			else
			{
				func_60(4, 0);
				if (func_14(&uLocal_76))
				{
					func_12(&uLocal_76);
				}
				bLocal_56 = false;
			}
			if (bLocal_56)
			{
				if (func_14(&uLocal_76))
				{
					if (func_8(&uLocal_76) > 10f)
					{
						if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 4)
						{
							unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 4, 0);
							unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
							bLocal_59 = true;
							bLocal_56 = false;
							func_60(4, 0);
						}
					}
				}
			}
			if (!bLocal_53)
			{
				if (bLocal_58)
				{
					if (!func_36())
					{
						if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
						{
							unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_53 = true;
						}
					}
				}
				else if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_53 = true;
				}
			}
			if (!bLocal_56)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_53)
					{
						if (bLocal_58)
						{
							if (!func_36())
							{
								unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_53 = true;
							}
						}
						else
						{
							unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x57FF2FF5DA6DCB15("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_53 = true;
						}
					}
					func_35();
				}
			}
			iLocal_47 = 0;
		}
	}
	iLocal_47++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_52)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_50[iVar0] = unk_0x8CC50AC10D8037C7(Local_51[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_52 = 1;
	}
}

int func_36()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_55();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_44();
		func_39();
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
		func_57();
	}
	return 0;
}

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_43())
	{
		return 0;
	}
	if (func_41(unk_0x259BE71D8A81D4FA()))
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

bool func_41(int iParam0)
{
	return func_42(iParam0, 20);
}

var func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_43()
{
	return -1;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
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

void func_48()
{
	if (func_2(14))
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
		Global_20930 = func_49();
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

var func_49()
{
	func_50();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_53(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_52(unk_0x4A8C381C258A124D());
			if (func_51(iVar0) && (!func_2(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_51(Global_113969.f_2366.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_60(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_33108, iParam0);
	StringCopy(&(Global_33109[iParam0 /*6*/]), unk_0x1AF90EB93E0012D6(), 24);
	Global_33164[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()
{
	unk_0x55098D9E9AD58806(joaat("s_m_m_security_01"));
	unk_0x55098D9E9AD58806(joaat("s_m_m_prisguard_01"));
}

void func_66()
{
	func_68();
	func_67();
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Local_305.f_27[iVar0]) && !unk_0x1C2F771CDC87A3A5(Local_305.f_27[iVar0], 0))
		{
			unk_0xB41DEC3AAC1AA107(Local_305.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0xF88FC425EC7D675D(Local_305.f_27[iVar0], 1000);
			unk_0x3CEA1FD137ACE2D9(Local_305.f_27[iVar0], -183807561);
			unk_0xC55B2DE435555EC3(Local_305.f_27[iVar0], 0);
			unk_0xAAA71DD7E9059338(Local_305.f_27[iVar0], 1);
			if (!unk_0x4FAFF4BCB7633475(Local_305.f_27[iVar0]))
			{
				unk_0x7FD62C74ABB26599(Local_305.f_27[iVar0], Local_305.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_305.f_27[iVar0]))
		{
			Local_305.f_27[iVar0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Local_305[iVar0 /*3*/], Local_305.f_10[iVar0], 1, 1);
			system::wait(0);
		}
		iVar0++;
	}
	Var1 = { unk_0xF10F2A2453AF1DFB(Local_305[1 /*3*/], Local_305.f_10[1], -2f, 0f, 0f) };
	Var2 = { unk_0xF10F2A2453AF1DFB(Local_305[1 /*3*/], Local_305.f_10[1], -1f, 0f, 0f) };
	Var3 = { unk_0xF10F2A2453AF1DFB(Local_305[2 /*3*/], Local_305.f_10[2], 1f, 0f, 0f) };
	Var4 = { unk_0xF10F2A2453AF1DFB(Local_305[2 /*3*/], Local_305.f_10[2], -1f, 0f, 0f) };
	Local_305.f_31[0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Var1, Local_305.f_10[1], 1, 1);
	Local_305.f_31[1] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Var2, Local_305.f_10[1], 1, 1);
	Local_305.f_31[2] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Var3, Local_305.f_10[2], 1, 1);
	Local_305.f_31[3] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Var4, Local_305.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFC8BFE4B41177C22(Local_305.f_31[iVar0]))
		{
			unk_0xB41DEC3AAC1AA107(Local_305.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0xF88FC425EC7D675D(Local_305.f_31[iVar0], 500);
			unk_0x3CEA1FD137ACE2D9(Local_305.f_31[iVar0], -183807561);
			unk_0x639E8A4EA31DD813(Local_305.f_31[iVar0], 0);
			unk_0xAAA71DD7E9059338(Local_305.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(joaat("s_m_m_prisguard_01"));
}

void func_69()
{
	if (bLocal_292)
	{
		iLocal_287 = unk_0x5779387E956077A6(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1, 0);
		unk_0xC229299217554C78(iLocal_287, 1, 1, 0);
		unk_0xA9F7300B498DDED7(iLocal_287);
		unk_0x1AB7223AC0702871(iLocal_287, 0f, 0f, 10f);
		unk_0xF88FC425EC7D675D(iLocal_287, 500);
		if (func_28())
		{
			bLocal_290 = true;
			unk_0x130DC0384195C42E(iLocal_287, 1, 0);
		}
		iLocal_288 = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0x73CAFD2038E812B3(iLocal_288, iLocal_287, -1);
		if (!unk_0x1C2F771CDC87A3A5(iLocal_287, 0))
		{
			unk_0x88556DA0593A0748(iLocal_287, 101, "PrisonHeli", 1);
		}
		unk_0x55098D9E9AD58806(joaat("polmav"));
	}
}

void func_70()
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()
{
	Local_268[0 /*13*/][0 /*3*/] = { 1827,69f, 2474,181f, 61,7202f };
	Local_268[0 /*13*/][1 /*3*/] = { 1826,054f, 2478,934f, 61,7157f };
	Local_268[0 /*13*/][2 /*3*/] = { 1820,909f, 2477,528f, 61,7153f };
	Local_268[0 /*13*/][3 /*3*/] = { 1822,585f, 2472,122f, 61,7167f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_01");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[0 /*13*/][0 /*3*/], 1879,944f, 2461,988f, 53,5496f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[0 /*13*/][1 /*3*/], 1831,631f, 2522,218f, 54,1376f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[0 /*13*/][2 /*3*/], 1789,07f, 2490,558f, 54,1381f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[0 /*13*/][3 /*3*/], 1789,8f, 2426,876f, 44,7729f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[1 /*13*/][0 /*3*/] = { 1764,729f, 2409,139f, 61,7533f };
	Local_268[1 /*13*/][1 /*3*/] = { 1763,129f, 2413,976f, 61,7328f };
	Local_268[1 /*13*/][2 /*3*/] = { 1758,079f, 2411,984f, 61,7403f };
	Local_268[1 /*13*/][3 /*3*/] = { 1760,213f, 2406,827f, 61,7419f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_02");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[1 /*13*/][0 /*3*/], 1879,944f, 2461,988f, 53,5496f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[1 /*13*/][1 /*3*/], 1831,631f, 2522,218f, 54,1376f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[1 /*13*/][2 /*3*/], 1789,07f, 2490,558f, 54,1381f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[1 /*13*/][3 /*3*/], 1789,8f, 2426,876f, 44,7729f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[2 /*13*/][0 /*3*/] = { 1658,829f, 2390,888f, 61,7462f };
	Local_268[2 /*13*/][1 /*3*/] = { 1662,521f, 2394,692f, 61,7532f };
	Local_268[2 /*13*/][2 /*3*/] = { 1658,854f, 2398,062f, 61,7573f };
	Local_268[2 /*13*/][3 /*3*/] = { 1655,15f, 2394,705f, 61,7429f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_03");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[2 /*13*/][0 /*3*/], 1655,908f, 2349,021f, 55,1775f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[2 /*13*/][1 /*3*/], 1733,875f, 2385,521f, 44,9049f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[2 /*13*/][2 /*3*/], 1662,234f, 2446,357f, 44,5652f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[2 /*13*/][3 /*3*/], 1524,631f, 2426,997f, 44,6212f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[3 /*13*/][0 /*3*/] = { 1537,28f, 2468,338f, 61,7497f };
	Local_268[3 /*13*/][1 /*3*/] = { 1542,189f, 2465,756f, 61,7247f };
	Local_268[3 /*13*/][2 /*3*/] = { 1543,899f, 2470,971f, 61,7482f };
	Local_268[3 /*13*/][3 /*3*/] = { 1539,14f, 2473,264f, 61,7359f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_04");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[3 /*13*/][0 /*3*/], 1455,081f, 2432,642f, 51,3366f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[3 /*13*/][1 /*3*/], 1576,174f, 2407,076f, 44,8143f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[3 /*13*/][2 /*3*/], 1578,1f, 2486,227f, 44,5655f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[3 /*13*/][3 /*3*/], 1512,837f, 2560,419f, 44,8417f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[4 /*13*/][0 /*3*/] = { 1535,098f, 2581,919f, 61,7312f };
	Local_268[4 /*13*/][1 /*3*/] = { 1535,124f, 2581,101f, 61,7002f };
	Local_268[4 /*13*/][2 /*3*/] = { 1538,325f, 2585,722f, 61,7251f };
	Local_268[4 /*13*/][3 /*3*/] = { 1534,679f, 2589,268f, 61,7123f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_05");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[4 /*13*/][0 /*3*/], 1484,2f, 2584,409f, 51,9283f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[4 /*13*/][1 /*3*/], 1535,154f, 2538,926f, 44,496f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[4 /*13*/][2 /*3*/], 1570,661f, 2587,814f, 44,5655f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[4 /*13*/][3 /*3*/], 1538,227f, 2655,531f, 44,9156f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[5 /*13*/][0 /*3*/] = { 1566,921f, 2682,525f, 61,7716f };
	Local_268[5 /*13*/][1 /*3*/] = { 1567,927f, 2677,463f, 61,7741f };
	Local_268[5 /*13*/][2 /*3*/] = { 1572,574f, 2678,193f, 61,7702f };
	Local_268[5 /*13*/][3 /*3*/] = { 1572,359f, 2683,086f, 61,7664f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_06");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[5 /*13*/][0 /*3*/], 1505,538f, 2727,242f, 37,6965f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[5 /*13*/][1 /*3*/], 1545,95f, 2632,524f, 44,7178f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[5 /*13*/][2 /*3*/], 1599,355f, 2658,319f, 44,5652f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[5 /*13*/][3 /*3*/], 1599,041f, 2713,393f, 44,4309f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[6 /*13*/][0 /*3*/] = { 1648,104f, 2761,528f, 61,9103f };
	Local_268[6 /*13*/][1 /*3*/] = { 1646,051f, 2756,671f, 61,9091f };
	Local_268[6 /*13*/][2 /*3*/] = { 1651,533f, 2754,668f, 61,9021f };
	Local_268[6 /*13*/][3 /*3*/] = { 1653,125f, 2759,327f, 61,9056f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_07");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[6 /*13*/][0 /*3*/], 1606,661f, 2815,673f, 37,9512f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[6 /*13*/][1 /*3*/], 1602,887f, 2721,398f, 44,651f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[6 /*13*/][2 /*3*/], 1599,355f, 2658,319f, 44,5652f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[6 /*13*/][3 /*3*/], 1719,225f, 2766,111f, 44,6846f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[7 /*13*/][0 /*3*/] = { 1774,523f, 2766,559f, 61,9143f };
	Local_268[7 /*13*/][1 /*3*/] = { 1769,768f, 2763,816f, 61,9248f };
	Local_268[7 /*13*/][2 /*3*/] = { 1772,442f, 2759,139f, 61,9193f };
	Local_268[7 /*13*/][3 /*3*/] = { 1776,893f, 2762,356f, 61,9258f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_08");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[7 /*13*/][0 /*3*/], 1783,204f, 2811,375f, 44,4414f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[7 /*13*/][1 /*3*/], 1709,275f, 2764,432f, 44,5747f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[7 /*13*/][2 /*3*/], 1599,355f, 2658,319f, 44,5652f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[7 /*13*/][3 /*3*/], 1822,456f, 2749,189f, 44,9326f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
	Local_268[9 /*13*/][0 /*3*/] = { 1824,288f, 2625,042f, 61,9749f };
	Local_268[9 /*13*/][1 /*3*/] = { 1820,524f, 2621,49f, 61,9951f };
	Local_268[9 /*13*/][2 /*3*/] = { 1820,414f, 2621,544f, 61,9908f };
	Local_268[9 /*13*/][3 /*3*/] = { 1823,45f, 2617,477f, 61,9829f };
	unk_0xFA0AB32CDCA06D33("miss_Tower_10");
	unk_0x595076DE836264C0(0, "WORLD_HUMAN_GUARD_STAND", Local_268[9 /*13*/][0 /*3*/], 1606,661f, 2815,673f, 37,9512f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(1, "WORLD_HUMAN_GUARD_STAND", Local_268[9 /*13*/][1 /*3*/], 1602,887f, 2721,398f, 44,651f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(2, "WORLD_HUMAN_GUARD_STAND", Local_268[9 /*13*/][2 /*3*/], 1599,355f, 2658,319f, 44,5652f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x595076DE836264C0(3, "WORLD_HUMAN_GUARD_STAND", Local_268[9 /*13*/][3 /*3*/], 1719,225f, 2766,111f, 44,6846f, unk_0xC5935DFB3F39785A(5000, 10000));
	unk_0x62DDD8B4533C8E19(0, 1);
	unk_0x62DDD8B4533C8E19(1, 2);
	unk_0x62DDD8B4533C8E19(2, 3);
	unk_0x62DDD8B4533C8E19(3, 0);
	unk_0xD769493B5A72D117();
	unk_0xF41DCE3B39E05E82();
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFC8BFE4B41177C22(Local_250.f_64[iVar0]) && !unk_0x1C2F771CDC87A3A5(Local_250.f_64[iVar0], 0))
		{
			unk_0x3CEA1FD137ACE2D9(Local_250.f_64[iVar0], -183807561);
			unk_0x0428AFDCAA63B06E(Local_250.f_64[iVar0], 132, 1);
			unk_0xDC914F868C070C56(Local_250.f_64[iVar0], 300f, 10);
			unk_0x25DBF9F9C6BDFFEA(Local_250.f_64[iVar0], 1000f);
			unk_0xC45887CFF81A1950(Local_250.f_64[iVar0], 1000f);
			unk_0x35365D1E3ADB7109(Local_250.f_64[iVar0], 1000f);
			unk_0x139711196A42A037(Local_250.f_64[iVar0], 2);
			unk_0xBE8796DB2B90A437(Local_250.f_64[iVar0], 13, 1);
			unk_0xBE8796DB2B90A437(Local_250.f_64[iVar0], 0, 0);
			unk_0x570AAA413775DFFB(Local_250.f_64[iVar0], 1);
			unk_0xD0764B65C2DFEDCA(Local_250.f_64[iVar0], 1);
			unk_0xA6897CC743103C98(Local_250.f_64[iVar0], 0f);
			unk_0x44FB298D6382876D(Local_250.f_64[iVar0], 1);
			unk_0xC652B7E19CE29859(Local_250.f_64[iVar0], 20);
			unk_0x1090EAA386FB31A8(Local_250.f_64[iVar0], 2);
			unk_0xBE8796DB2B90A437(Local_250.f_64[iVar0], 23, 0);
			unk_0xB41DEC3AAC1AA107(Local_250.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0xF88FC425EC7D675D(Local_250.f_64[iVar0], 1000);
			unk_0xAAA71DD7E9059338(Local_250.f_64[iVar0], 1);
			unk_0x25DBF9F9C6BDFFEA(Local_250.f_64[iVar0], 1000f);
			if (!unk_0x4FAFF4BCB7633475(Local_250.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0x0253650DCBDD84B3(Local_250.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0x7FD62C74ABB26599(Local_250.f_64[iVar0], Local_250.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x7B780C491DEC834E(1823,845f, 2621,267f, 57f, 0,5f))
	{
		uLocal_261[0] = unk_0x5779387E956077A6(joaat("polmav"), 1823,845f, 2621,267f, 57f, 53f, 1, 1, 0);
		if (unk_0xFC8BFE4B41177C22(uLocal_261[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_261[0], 0))
		{
			uLocal_262[0] = unk_0x8728A378EF2B46B2(uLocal_261[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x999C62072AF920FD(uLocal_262[0], 0);
			unk_0x3CEA1FD137ACE2D9(uLocal_262[0], iLocal_248);
			unk_0x44C48AC14D3C09ED(uLocal_261[0], 0, 0);
			unk_0x4285E11B28063EE0(uLocal_261[0], 0, 0);
			unk_0x999C62072AF920FD(uLocal_261[0], 0);
			unk_0x5D7CD709B34C90F0(uLocal_261[0], 1);
		}
		system::wait(0);
	}
	if (!unk_0x7B780C491DEC834E(1761,418f, 2410,378f, 61f, 0,5f))
	{
		uLocal_261[1] = unk_0x5779387E956077A6(joaat("polmav"), 1761,418f, 2410,378f, 61f, 13f, 1, 1, 0);
		if (unk_0xFC8BFE4B41177C22(uLocal_261[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_261[1], 0))
		{
			uLocal_262[1] = unk_0x8728A378EF2B46B2(uLocal_261[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x999C62072AF920FD(uLocal_262[1], 0);
			unk_0x3CEA1FD137ACE2D9(uLocal_262[1], iLocal_248);
			unk_0x44C48AC14D3C09ED(uLocal_261[1], 0, 0);
			unk_0x4285E11B28063EE0(uLocal_261[1], 0, 0);
			unk_0x999C62072AF920FD(uLocal_261[1], 0);
			unk_0x5D7CD709B34C90F0(uLocal_261[1], 1);
		}
		system::wait(0);
	}
	if (!unk_0x7B780C491DEC834E(1534,635f, 2585,162f, 61f, 0,5f))
	{
		uLocal_261[2] = unk_0x5779387E956077A6(joaat("polmav"), 1534,635f, 2585,162f, 61f, 250f, 1, 1, 0);
		if (unk_0xFC8BFE4B41177C22(uLocal_261[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_261[2], 0))
		{
			uLocal_262[2] = unk_0x8728A378EF2B46B2(uLocal_261[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x999C62072AF920FD(uLocal_262[2], 0);
			unk_0x3CEA1FD137ACE2D9(uLocal_262[2], iLocal_248);
			unk_0x44C48AC14D3C09ED(uLocal_261[2], 0, 0);
			unk_0x4285E11B28063EE0(uLocal_261[2], 0, 0);
			unk_0x999C62072AF920FD(uLocal_261[2], 0);
			unk_0x5D7CD709B34C90F0(uLocal_261[2], 1);
		}
		system::wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0xFC8BFE4B41177C22(uLocal_262[iVar0]) && !unk_0x1C2F771CDC87A3A5(uLocal_262[iVar0], 0)) && !unk_0x1C2F771CDC87A3A5(uLocal_261[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_263[iVar0] = 1;
				unk_0x130DC0384195C42E(uLocal_261[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_250.f_64[iVar0]))
		{
			Local_250.f_64[iVar0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_m_prisguard_01"), Local_250[iVar0 /*3*/], Local_250.f_31[iVar0], 1, 1);
			unk_0x55098D9E9AD58806(joaat("s_m_m_prisguard_01"));
			system::wait(0);
		}
		iVar0++;
	}
}

void func_75()
{
	Local_250[0 /*3*/] = { 1827,69f, 2474,181f, 61,7202f };
	Local_250[1 /*3*/] = { 1764,729f, 2409,139f, 61,7533f };
	Local_250[2 /*3*/] = { 1658,829f, 2390,888f, 61,7462f };
	Local_250[3 /*3*/] = { 1537,28f, 2468,338f, 61,7497f };
	Local_250[4 /*3*/] = { 1530,493f, 2585,172f, 61,7001f };
	Local_250[5 /*3*/] = { 1566,921f, 2682,525f, 61,7716f };
	Local_250[6 /*3*/] = { 1648,104f, 2761,528f, 61,9103f };
	Local_250[7 /*3*/] = { 1774,523f, 2766,559f, 61,9143f };
	Local_250[8 /*3*/] = { 1852,475f, 2697,632f, 61,9547f };
	Local_250[9 /*3*/] = { 1824,288f, 2625,042f, 61,9749f };
	Local_250.f_31[0] = 248,9733f;
	Local_250.f_31[1] = 45,8793f;
	Local_250.f_31[2] = 186,3656f;
	Local_250.f_31[3] = 313,5206f;
	Local_250.f_31[4] = 95,9574f;
	Local_250.f_31[5] = 289,3531f;
	Local_250.f_31[6] = 13,7511f;
	Local_250.f_31[7] = 0f;
	Local_250.f_31[8] = 208,5786f;
	Local_250.f_31[9] = 280,9389f;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xA08EEC7306CF6198(Local_305.f_14[iVar0]))
		{
			system::wait(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()
{
	if (bLocal_296)
	{
		if (!unk_0x6252BC0DD8A320DB(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xA08EEC7306CF6198(Local_250.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	if (bLocal_292)
	{
		if (!unk_0x6252BC0DD8A320DB(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x266D9DB5FCE4003B(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!unk_0x6252BC0DD8A320DB(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	int iVar0;
	
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0xD04A772C411165F2(Local_305.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()
{
	Local_305[0 /*3*/] = { 1768,628f, 2538,97f, 44,4054f };
	Local_305[1 /*3*/] = { 1633,613f, 2498,849f, 44,4117f };
	Local_305[2 /*3*/] = { 1622,61f, 2555,683f, 44,4051f };
	Local_305.f_10[0] = 0f;
	Local_305.f_10[1] = 0f;
	Local_305.f_10[2] = 198,4323f;
	Local_305.f_14[0] = "PatrolGuard02";
	Local_305.f_14[1] = "PatrolGuard03";
	Local_305.f_14[2] = "PatrolGuard04";
}

void func_83()
{
	int iVar0;
	
	Local_250.f_42[0] = "TowerGuard01";
	Local_250.f_42[1] = "TowerGuard02";
	Local_250.f_42[2] = "TowerGuard03";
	Local_250.f_42[3] = "TowerGuard04";
	Local_250.f_42[4] = "TowerGuard05";
	Local_250.f_42[5] = "TowerGuard06";
	Local_250.f_42[6] = "TowerGuard07";
	Local_250.f_42[7] = "TowerGuard08";
	Local_250.f_42[8] = "TowerGuard09";
	Local_250.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0xD04A772C411165F2(Local_250.f_42[iVar0]);
		iVar0++;
	}
	unk_0xEC9DAA34BBB4658C(joaat("polmav"));
	unk_0xEC9DAA34BBB4658C(joaat("s_m_m_prisguard_01"));
}

void func_84()
{
	bLocal_292 = false;
	if (func_28())
	{
		iLocal_293 = (unk_0xC5935DFB3F39785A(0, 65535) % 2);
		if (iLocal_293 == 0)
		{
			bLocal_292 = true;
			unk_0xEC9DAA34BBB4658C(joaat("polmav"));
			unk_0xD772E6694B8472A6(101, "PrisonHeli");
		}
		else
		{
			bLocal_292 = false;
		}
	}
}

void func_85()
{
	unk_0xEC9DAA34BBB4658C(joaat("s_m_m_security_01"));
	unk_0xEC9DAA34BBB4658C(joaat("s_m_m_prisguard_01"));
	unk_0xEC9DAA34BBB4658C(joaat("polmav"));
}

void func_86()
{
	iLocal_247 = iLocal_247;
	iLocal_247 = 0;
	func_87();
	func_34();
	Local_68.f_4 = 75;
	Local_68.f_6 = 15;
	unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1819,274f, 2608,537f, 44,6195f, 1, 0f, 50f, 0);
	unk_0x06CD913C241C765E("Prison_Guards", &iLocal_248);
	unk_0x06CD913C241C765E("Prison_Prisoners", &iLocal_249);
	unk_0xD414C47AFF81382A(2, iLocal_248, iLocal_249);
	unk_0xD414C47AFF81382A(2, iLocal_249, iLocal_248);
	unk_0xD414C47AFF81382A(1, iLocal_248, joaat("COP"));
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_248);
	unk_0xD414C47AFF81382A(3, joaat("player"), iLocal_249);
	unk_0xD414C47AFF81382A(3, iLocal_249, joaat("player"));
}

void func_87()
{
	Local_51[0 /*3*/] = { 1809,816f, 2482,877f, 44,4744f };
	Local_51[1 /*3*/] = { 1755,823f, 2424,904f, 44,4319f };
	Local_51[2 /*3*/] = { 1661,2f, 2410,096f, 44,4265f };
	Local_51[3 /*3*/] = { 1555,966f, 2476,43f, 44,4042f };
	Local_51[4 /*3*/] = { 1549,141f, 2583,103f, 44,4225f };
	Local_51[5 /*3*/] = { 1581,156f, 2671,974f, 44,481f };
	Local_51[6 /*3*/] = { 1655,49f, 2743,69f, 44,4665f };
	Local_51[7 /*3*/] = { 1768,776f, 2748,527f, 44,4402f };
	Local_51[8 /*3*/] = { 1831,2f, 2696f, 44,4578f };
	Local_51[9 /*3*/] = { 1803,121f, 2617,781f, 44,5082f };
	Local_51[10 /*3*/] = { 1817,221f, 2608,387f, 44,6204f };
	Local_51[11 /*3*/] = { 1843,838f, 2608,361f, 44,6178f };
}

void func_88()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1879,956f, 2705,097f, 52,07341f, 1869,859f, 2726,776f, 59,82338f, 24,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1833,113f, 2520,888f, 52,26086f, 1833,115f, 2554,431f, 61,25998f, 15f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1832,742f, 2568,421f, 48,87375f, 1833,015f, 2596,529f, 57,12439f, 27,75f, 0, 1, 0))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
	}
	if (!iLocal_54)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1917,889f, 2618,476f, -45,677f, 1822,889f, 2618,476f, 45,677f, 195f, 0, 0, 0))
			{
				if (unk_0xEFC75C3D53F60CB1(unk_0x259BE71D8A81D4FA()))
				{
					unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 4, 0);
					unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
					unk_0xD414C47AFF81382A(5, joaat("player"), -183807561);
					unk_0xD414C47AFF81382A(5, -183807561, joaat("player"));
					iLocal_54 = 1;
				}
				if ((unk_0x398315D0C90DE6F6(1874,072f, 2605,423f, 44,6723f, 100f, 1) && !unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA())) || (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) && !unk_0xEFC75C3D53F60CB1(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
					unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
					unk_0xD414C47AFF81382A(5, joaat("player"), -183807561);
					unk_0xD414C47AFF81382A(5, -183807561, joaat("player"));
					iLocal_54 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	unk_0xA6274B757A008184("PRISON_ALARMS", 1);
	if (iLocal_54)
	{
		unk_0xD414C47AFF81382A(2, joaat("player"), -183807561);
		unk_0xD414C47AFF81382A(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xF935563454D3B338(uLocal_50[iVar0]))
		{
			unk_0x8E99C7AF6C6639AB(uLocal_50[iVar0]);
		}
		iVar0++;
	}
	unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x6421C7C9616E4305(joaat("prop_gate_prison_01"), 1819,274f, 2608,537f, 44,6195f, 1, 0f, 50f, 0);
	if (bParam0)
	{
		unk_0x2094BC4B6731BA68(1695,1f, 2595,8f, 50f, 1000f, 1, 0, 0, 0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_90()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_64))
	{
		unk_0x68298CA6191CDFDB(&iLocal_64);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_66))
	{
		unk_0xF09E30AF1B8FB379(&iLocal_66);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_65))
	{
		unk_0x68298CA6191CDFDB(&iLocal_65);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_67))
	{
		unk_0xF09E30AF1B8FB379(&iLocal_67);
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Local_305.f_27[iVar0]))
		{
			if (unk_0xC450B06E5AAA0985(Local_305.f_36[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(Local_305.f_36[iVar0]));
			}
			if (unk_0xF6C26AE940C14749(Local_305.f_27[iVar0]))
			{
				unk_0x734A9F4537A31459(&(Local_305.f_27[iVar0]));
			}
			else
			{
				unk_0xF09E30AF1B8FB379(&(Local_305.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFC8BFE4B41177C22(Local_305.f_31[iVar0]))
		{
			if (unk_0xC450B06E5AAA0985(Local_305.f_40[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(Local_305.f_40[iVar0]));
			}
			if (unk_0xF6C26AE940C14749(Local_305.f_31[iVar0]))
			{
				unk_0x734A9F4537A31459(&(Local_305.f_31[iVar0]));
			}
			else
			{
				unk_0xF09E30AF1B8FB379(&(Local_305.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()
{
	if (unk_0xC450B06E5AAA0985(uLocal_299))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_299);
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_297))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_297);
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_294[iVar0]))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_295[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_295[iVar0]));
			}
			unk_0x734A9F4537A31459(&(uLocal_294[iVar0]));
		}
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_261[iVar0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(uLocal_261[iVar0]));
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_262[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uLocal_262[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFC8BFE4B41177C22(Local_250.f_64[iVar0]))
		{
			if (unk_0xC450B06E5AAA0985(Local_250.f_75[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(Local_250.f_75[iVar0]));
			}
			if (unk_0xF6C26AE940C14749(Local_250.f_64[iVar0]))
			{
				unk_0x734A9F4537A31459(&(Local_250.f_64[iVar0]));
			}
			else
			{
				unk_0xF09E30AF1B8FB379(&(Local_250.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (unk_0xC450B06E5AAA0985(uLocal_289))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_289);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_287))
	{
		if (unk_0xF6C26AE940C14749(iLocal_287))
		{
			unk_0x8C1F7D7A31B2A38E(&iLocal_287);
			unk_0x734A9F4537A31459(&iLocal_288);
		}
		else
		{
			func_96(&iLocal_287, &iLocal_288);
			unk_0x68298CA6191CDFDB(&iLocal_287);
		}
	}
}

void func_96(var uParam0, var uParam1)
{
	if (((unk_0xFC8BFE4B41177C22(*uParam0) && unk_0xFC8BFE4B41177C22(*uParam1)) && !unk_0x1C2F771CDC87A3A5(*uParam0, 0)) && !unk_0x1C2F771CDC87A3A5(*uParam1, 0))
	{
		if (unk_0x3F18810075C77D41(*uParam0))
		{
			if (unk_0x050D073F91C5243C(*uParam0))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x8737E7B1F3150A9F(*uParam1, *uParam0, 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

