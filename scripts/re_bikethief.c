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
	struct<4> Local_42[10];
	bool bLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 16;
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
	char* sLocal_245 = NULL;
	char* sLocal_246 = NULL;
	char* sLocal_247 = NULL;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	struct<3> Local_259 = { 0, 0, 0 } ;
	int iLocal_260 = 0;
	bool bLocal_261 = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = -1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 1000;
	var uLocal_284 = 1000;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	struct<2> Local_289 = { 0, 5 } ;
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
	var uLocal_305 = 5;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
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
	iLocal_65 = 1;
	sLocal_248 = "REBTH_HANGAR";
	sLocal_249 = "REBTH_RUNSOF";
	sLocal_250 = "REBTH_TAUNT";
	sLocal_262 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_263 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_265 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_266 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_267 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_268 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_52 = { ScriptParam_289.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_227();
	}
	if (system::vdist2(Local_52, 421,92f, -1930,95f, 23,18f) < 16f)
	{
		bLocal_261 = true;
	}
	else if (system::vdist2(Local_52, 769,3f, -151,66f, 73,79f) < 16f)
	{
		bLocal_261 = 2;
	}
	else if (system::vdist2(Local_52, -1923,93f, 254,48f, 85,7f) < 16f)
	{
		bLocal_261 = 3;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		else if (func_226(unk_0x4A8C381C258A124D(), Local_52, 1) < 100f)
		{
			unk_0xBBC29EBE6E1A48FA();
		}
	}
	if (bLocal_261 != 3)
	{
		if (func_186(Local_52, 26, bLocal_261, 0, 0))
		{
			func_183(26);
		}
		else
		{
			unk_0xBBC29EBE6E1A48FA();
		}
	}
	else if (func_186(Local_52, 8, 0, 0, 0))
	{
		func_183(8);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	iLocal_260 = func_181();
	uLocal_269 = unk_0xA7B0B03284E7503C(Local_52 - Vector(20f, 20f, 20f), Local_52 + Vector(20f, 20f, 20f), 0, 1, 1, 1, 1);
	while (true)
	{
		system::wait(0);
		func_180();
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
			unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 28);
			unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 13);
			unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 35);
		}
		if (unk_0x173751E886F8E9AB() || iLocal_45 > 1)
		{
			if (func_160())
			{
				func_159();
				func_227();
			}
			else
			{
				switch (iLocal_45)
				{
					case 0:
						func_156();
						break;
					
					case 1:
						if (func_155())
						{
							func_159();
							func_227();
						}
						else
						{
							func_143();
						}
						break;
					
					case 2:
						func_112();
						func_108();
						func_107();
						func_106();
						func_104();
						func_103();
						func_95();
						break;
					
					case 3:
						func_93();
						func_75();
						func_66();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_227();
		}
	}
}

void func_1()
{
	if (func_65(unk_0x4A8C381C258A124D()) && func_65(iLocal_48))
	{
		if (func_64(unk_0x4A8C381C258A124D(), iLocal_48, 1) > 50f)
		{
			func_63(8);
			func_26();
		}
		else if ((unk_0x1DD05E817C89C737() - iLocal_75) > 10000)
		{
			func_63(8);
			func_26();
		}
		else if ((iLocal_273 == 0 && !func_25()) && func_2(&uLocal_80, "REBTHAU", sLocal_247, 4, 0, 0, 0))
		{
			iLocal_273 = 1;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_23();
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
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_21();
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
				func_13();
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
				if (func_12())
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
			func_10();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_9();
		func_4();
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
		func_23();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
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

int func_5()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_8())
	{
		return 0;
	}
	if (func_6(unk_0x259BE71D8A81D4FA()))
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

bool func_6(int iParam0)
{
	return func_7(iParam0, 20);
}

var func_7(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_8()
{
	return -1;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_20(14))
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
		Global_20930 = func_14();
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

int func_14()
{
	func_15();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_18(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_17(unk_0x4A8C381C258A124D());
			if (func_16(iVar0) && (!func_20(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_16(Global_113969.f_2366.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_21()
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

bool func_22(int iParam0, int iParam1)
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

void func_23()
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_25()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (bLocal_261 == 3)
	{
		func_58(func_17(unk_0x4A8C381C258A124D()), 4, 5);
	}
	else
	{
		func_58(func_17(unk_0x4A8C381C258A124D()), 1, 3);
	}
	if (bLocal_261 != 3)
	{
		func_39(26, bLocal_261);
	}
	else
	{
		func_39(8, 0);
	}
	if (bLocal_261 == 1)
	{
		iVar0 = func_14();
		switch (iVar0)
		{
			case 0:
				while (!func_30(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			
			case 1:
				while (!func_30(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			
			case 2:
				while (!func_30(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			}
	}
	func_27();
	func_227();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
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

int func_29(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_30(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_29(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_38(iParam1);
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x8744D2E3FC95740E(&(Var0.f_1), 0);
		Global_113969.f_7691.f_765[Global_113969.f_7691.f_866 /*10*/] = { Var0 };
		Global_113969.f_7691.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_37(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_36(&iVar2);
		iVar3 = func_35(Var1, Global_113969.f_7691.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_33(Global_113969.f_7691.f_765[iVar2 /*10*/]);
			Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
			func_32(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_31(Var1))
			{
				func_33(Global_113969.f_7691.f_765[iVar2 /*10*/]);
				Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
				func_32(&Var1);
				return 1;
			}
			else
			{
				if (!func_31(Global_113969.f_7691.f_765[iVar2 /*10*/]))
				{
					Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
					func_32(&Var1);
					return 1;
				}
				func_32(&Var1);
				return 1;
			}
		}
		else
		{
			func_33(Var1);
			func_32(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_31(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_33(struct<10> Param0)
{
	if (func_31(Param0))
	{
		func_34(Param0.f_8, 0);
	}
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

int func_35(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_36(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_866)
	{
		if (func_35(Global_113969.f_7691.f_765[iVar0 /*10*/], Global_113969.f_7691.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_37(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_38(iParam1);
	Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x8744D2E3FC95740E(&(Var0.f_1), 0);
	return Var0;
}

int func_38(int iParam0)
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

void func_39(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_55(iParam0))
	{
		func_54(iParam0, bParam1);
		if (!func_53(51))
		{
			func_49("RE_REWARD", 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
		if (func_47(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_46(iParam0, bParam1) != 322)
		{
			func_40(func_46(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_63(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_63(7);
			}
			else
			{
				func_63(1);
			}
		}
	}
}

void func_40(int iParam0, var uParam1, var uParam2)
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
		func_44((891 + iParam0), 1, -1);
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
		func_41();
	}
}

void func_41()
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
		func_43(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_42() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_28();
				}
			}
		}
	}
}

int func_42()
{
	return Global_32948;
}

int func_43(int iParam0, int iParam1)
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

void func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_45();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_45()
{
	return Global_1574926;
}

int func_46(int iParam0, int iParam1)
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
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
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

int func_47(int iParam0)
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

void func_48(int iParam0)
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
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_50(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_51();
	}
}

void func_51()
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

int func_52()
{
	func_15();
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

int func_53(int iParam0)
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

void func_54(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_55(int iParam0)
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

int func_56()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_57(Var0);
	return uVar1;
}

int func_57(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_58(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_62(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_59(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_60(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_60(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_61(uParam1));
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
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

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_60(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_63(int iParam0)
{
	Global_113955 = iParam0;
}

float func_64(int iParam0, int iParam1, int iParam2)
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

int func_65(int iParam0)
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

void func_66()
{
	if (func_65(iLocal_48) && func_74(iLocal_49))
	{
		if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0))
		{
			func_73(&uLocal_286);
			func_72(&uLocal_78);
			if (iLocal_76 == 0 && !unk_0xC450B06E5AAA0985(uLocal_77))
			{
				uLocal_77 = func_71(iLocal_49, 0, 0);
			}
		}
		else
		{
			func_72(&uLocal_77);
			if (!unk_0xC450B06E5AAA0985(uLocal_78))
			{
				uLocal_78 = func_68(iLocal_48, 0, 145);
				if (iLocal_287 == 0)
				{
					func_67(&uLocal_286);
					iLocal_287 = 1;
				}
			}
		}
	}
}

void func_67(var uParam0)
{
	*uParam0 = -99;
}

var func_68(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_70(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_70(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_70(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_70(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_71(int iParam0, bool bParam1, bool bParam2)
{
	return func_69(iParam0, !bParam1, bParam2);
}

void func_72(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

void func_73(var uParam0)
{
	*uParam0 = (unk_0x1DD05E817C89C737() - 5000);
}

int func_74(int iParam0)
{
	if (func_65(iParam0))
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

void func_75()
{
	float fVar0;
	
	if (func_65(iLocal_48) && func_74(iLocal_49))
	{
		func_92(uLocal_78, &uLocal_286);
		if (fLocal_70 > 0f)
		{
			fVar0 = func_64(unk_0x4A8C381C258A124D(), iLocal_48, 1);
			if (fVar0 > (fLocal_70 + fLocal_63))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0))
				{
					func_63(7);
					func_26();
				}
				else
				{
					func_227();
				}
			}
		}
		else
		{
			fLocal_70 = func_64(unk_0x4A8C381C258A124D(), iLocal_48, 1);
			if (unk_0xBC2EE32DE886BD08("RE_CAR_STEAL_SCENE"))
			{
				unk_0x001B008A010F2FE6(iLocal_49, 0);
				unk_0xB43467C43086A6A1("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_254 == 0)
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48, 40f, 40f, 40f, 0, 1, 0))
			{
				func_91();
				if (iLocal_257 == 0)
				{
					if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0) && unk_0x3644984C9D7B57EF(iLocal_48, unk_0x4A8C381C258A124D(), 30f)) && func_82(iLocal_48, unk_0x4A8C381C258A124D(), 1126825984, 1, 250, 7)) && !unk_0x8BF5256C439DF778(iLocal_48)) && !unk_0x0B3FC0E7676E79BF(iLocal_48)) && func_2(&uLocal_80, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0x10425721983AE158(iLocal_48, sLocal_267, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
							unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
							iLocal_257 = 1;
						}
					}
					else
					{
						iLocal_257 = 1;
					}
				}
			}
		}
		else if (((!unk_0xFAA48325A90263BE(iLocal_49, iLocal_48, 35f, 35f, 35f, 0, 1, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 0)) && !func_81()) && func_2(&uLocal_80, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_79(0);
			unk_0xAAA71DD7E9059338(iLocal_48, 0);
			unk_0xD414C47AFF81382A(5, uLocal_68, joaat("player"));
			unk_0x3F58BFCF656F0DF1(iLocal_48, 1);
			unk_0x62A5310368A20EFA(iLocal_48, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x44FB298D6382876D(iLocal_48, 1);
			system::wait(0);
			func_63(7);
			func_26();
		}
		if (unk_0xCECDBB848D53DEB2(iLocal_48, iLocal_49, 0))
		{
			if (!func_25() && func_2(&uLocal_80, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_75 = unk_0x1DD05E817C89C737();
			iLocal_45 = 4;
		}
		else if (unk_0xFAA48325A90263BE(iLocal_49, iLocal_48, 20f, 20f, 20f, 0, 1, 0))
		{
			if (func_78())
			{
				if (!func_76(iLocal_48, joaat("script_task_perform_sequence")))
				{
					iLocal_76 = 1;
					func_79(0);
					func_73(&uLocal_286);
					func_72(&uLocal_78);
					func_72(&uLocal_77);
					unk_0xF04751F8E604D487(iLocal_49, 0);
					unk_0xB5396F1FB088FE38(&uLocal_51);
					if (iLocal_254 == 0)
					{
						unk_0xEBA229B2E0BB05E0(0, iLocal_49, 20000, -1, 2f, 8, 0, 0);
					}
					else
					{
						unk_0xEBA229B2E0BB05E0(0, iLocal_49, 20000, -1, 2f, 262152, 0, 0);
					}
					unk_0x7C8E9DE09D4AD3FF(0, iLocal_49, fLocal_60, 786485);
					unk_0x93C0674FC00824D0(uLocal_51);
					unk_0x4BD42B0527065BB6(iLocal_48, uLocal_51);
					unk_0xD0557B139A542F12(&uLocal_51);
					unk_0x44FB298D6382876D(iLocal_48, 1);
				}
			}
			else
			{
				switch (iLocal_254)
				{
					case 0:
						if ((((iLocal_257 == 1 && !func_76(iLocal_48, joaat("script_task_play_anim"))) && !unk_0x8BF5256C439DF778(iLocal_48)) && !unk_0x0B3FC0E7676E79BF(iLocal_48)) && func_2(&uLocal_80, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0x3644984C9D7B57EF(iLocal_48, unk_0x4A8C381C258A124D(), 30f) && unk_0x9B5C1660CCDF7189(iLocal_48, joaat("script_task_turn_ped_to_face_entity")) == 7)
							{
								unk_0x10425721983AE158(iLocal_48, sLocal_267, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_255 = unk_0x1DD05E817C89C737();
							iLocal_254++;
						}
						else
						{
							func_91();
						}
						break;
					
					case 1:
						if (((((unk_0x1DD05E817C89C737() - iLocal_255) > 10000 && !func_76(iLocal_48, joaat("script_task_play_anim"))) && !unk_0x8BF5256C439DF778(iLocal_48)) && !unk_0x0B3FC0E7676E79BF(iLocal_48)) && func_2(&uLocal_80, "REBTHAU", sLocal_251, 4, 0, 0, 0))
						{
							if (unk_0x3644984C9D7B57EF(iLocal_48, unk_0x4A8C381C258A124D(), 30f))
							{
								func_79(0);
								unk_0x10425721983AE158(iLocal_48, sLocal_268, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_255 = unk_0x1DD05E817C89C737();
							iLocal_254++;
						}
						else
						{
							func_79(1);
						}
						break;
					
					case 2:
						if (((((unk_0x1DD05E817C89C737() - iLocal_255) > 10000 && !func_76(iLocal_48, joaat("script_task_play_anim"))) && !unk_0x8BF5256C439DF778(iLocal_48)) && !unk_0x0B3FC0E7676E79BF(iLocal_48)) && func_2(&uLocal_80, "REBTHAU", sLocal_252, 4, 0, 0, 0))
						{
							if (unk_0x3644984C9D7B57EF(iLocal_48, unk_0x4A8C381C258A124D(), 30f))
							{
								func_79(0);
								unk_0x10425721983AE158(iLocal_48, sLocal_266, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_254++;
						}
						else
						{
							func_79(1);
						}
						break;
					
					default:
						func_79(1);
						break;
					}
				}
			}
	}
}

int func_76(int iParam0, int iParam1)
{
	if (func_77(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (func_65(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	if (iLocal_76 == 1)
	{
		return 1;
	}
	if ((unk_0x1DD05E817C89C737() - iLocal_74) < 4000)
	{
		return 0;
	}
	if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_49, 1))
	{
		return 0;
	}
	if (func_65(iLocal_47) && unk_0xA6534E6C7AE314D6(iLocal_47))
	{
		return 0;
	}
	if (!unk_0xC39AE5D390581AD5(iLocal_49, -1, 0))
	{
		return 0;
	}
	return 1;
}

void func_79(int iParam0)
{
	if (func_65(iLocal_48))
	{
		if (iParam0 == 1)
		{
			if (!unk_0x133460AD0F183CC9(iLocal_48) && func_65(unk_0x4A8C381C258A124D()))
			{
				unk_0x03AB73582A77DBD3(iLocal_48, unk_0x26B246D60FABB3E2(unk_0x4A8C381C258A124D()));
				unk_0xBC14FFDBE1C32C51(iLocal_48, 1);
				unk_0x47F8464BB13E408D(func_80(), 2f, -1082130432, -1082130432);
				unk_0xE67051907958B5EB(iLocal_48, unk_0x4A8C381C258A124D(), -1, 0, 2);
			}
		}
		else if (unk_0x133460AD0F183CC9(iLocal_48))
		{
			unk_0x5C4B3034CCDA5270(iLocal_48);
		}
	}
}

var func_80()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

int func_81()
{
	if (bLocal_261 == 3)
	{
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1875,858f, 262,3736f, 82,96029f, -1927,379f, 234,7951f, 90,71558f, 50,25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_82(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_90(iParam0, iParam1);
	if (!func_65(iParam0) || !func_65(iParam1))
	{
		if (iVar2 != -1)
		{
			func_89(&(Local_42[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_86(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_85();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_42[iVar2 /*4*/].f_1 = iParam0;
		Local_42[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_83(&(Local_42[iVar2 /*4*/]), Var1, iParam1, &(Local_42[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1DD05E817C89C737() - Local_42[iVar2 /*4*/].f_3) < iParam4);
}

int func_83(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_65(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_84(iParam2, iParam5) };
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
		func_65(iVar3);
		if (unk_0xBD545F8729E9F413(iVar3) == iParam2)
		{
			if (bLocal_43)
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
		func_65(iVar3);
		if (unk_0x7F420695E3F776FB(iParam2, 0))
		{
			if (unk_0xE93EDE86BBB66532(iVar3) == unk_0x6EF03BE64E058E2F(iParam2, 0))
			{
				if (bLocal_43)
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

Vector3 func_84(int iParam0, int iParam1)
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

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if ((Local_42[iVar0 /*4*/] == 0 && Local_42[iVar0 /*4*/].f_1 == 0) && Local_42[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_86(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_88(unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
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
		Var1 = { func_88(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_87(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_87(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_88(struct<3> Param0)
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

void func_89(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if (Local_42[iVar0 /*4*/].f_1 == iParam0 && Local_42[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_91()
{
	if (iLocal_76 == 0 && func_65(iLocal_48))
	{
		if (func_76(iLocal_48, joaat("script_task_perform_sequence")))
		{
			unk_0x974022927CB47E68(iLocal_48);
		}
		if ((((!func_76(iLocal_48, joaat("script_task_play_anim")) && !unk_0x3644984C9D7B57EF(iLocal_48, unk_0x4A8C381C258A124D(), 20f)) && unk_0x9B5C1660CCDF7189(iLocal_48, joaat("script_task_turn_ped_to_face_entity")) == 7) && !unk_0x8BF5256C439DF778(iLocal_48)) && !unk_0x0B3FC0E7676E79BF(iLocal_48))
		{
			unk_0x0E95B96CFEFE7B61(iLocal_48, unk_0x4A8C381C258A124D(), 0);
			unk_0xE67051907958B5EB(iLocal_48, unk_0x4A8C381C258A124D(), -1, 0, 2);
		}
	}
}

void func_92(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x1DD05E817C89C737();
	}
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		iVar0 = (unk_0x1DD05E817C89C737() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = system::ceil((system::to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xF03FBAFA0284124E(uParam0) != 255)
				{
					unk_0xF42EBD7CD0682A8B(uParam0, 255);
				}
			}
			else if (unk_0xF03FBAFA0284124E(uParam0) != 0)
			{
				unk_0xF42EBD7CD0682A8B(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xF03FBAFA0284124E(uParam0) != 255)
			{
				unk_0xF42EBD7CD0682A8B(uParam0, 255);
			}
		}
	}
}

void func_93()
{
	if (func_65(iLocal_47))
	{
		if (iLocal_66 == 0)
		{
			unk_0x1CA08719184AFC6F(iLocal_47, 2, 0);
			unk_0x974022927CB47E68(iLocal_47);
			if (func_74(iLocal_49))
			{
				if (bLocal_261 == 2)
				{
					if (unk_0x050D073F91C5243C(iLocal_49))
					{
						unk_0x1D2DAF2A41FFC4A0(iLocal_49);
					}
					unk_0x7821F942CAEEBEE1(1, "RE_BikeThief2");
				}
				if (unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 1))
				{
					unk_0x0C771CCC16BC7A60(iLocal_47);
				}
			}
			unk_0x44FB298D6382876D(iLocal_47, 1);
			unk_0xD844F5E50DAB6FF7(iLocal_47, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
			iLocal_66 = 1;
		}
		else
		{
			if (((((iLocal_67 == 0 && func_64(iLocal_47, unk_0x4A8C381C258A124D(), 1) < 30f) && !unk_0x8BF5256C439DF778(iLocal_47)) && func_76(iLocal_47, joaat("script_task_smart_flee_ped"))) && !func_25()) && func_2(&uLocal_80, "REBTHAU", sLocal_249, 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
			if (func_64(iLocal_47, unk_0x4A8C381C258A124D(), 1) > 50f)
			{
				func_94(&iLocal_47, 1, 0, 1);
			}
		}
	}
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*iParam0))
		{
			unk_0x788F35D395511DFE(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*iParam0);
			}
			unk_0x44FB298D6382876D(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*iParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(iParam0);
	}
}

void func_95()
{
	if ((func_65(iLocal_47) && func_65(iLocal_48)) && func_74(iLocal_49))
	{
		if (func_102())
		{
			func_100(&uLocal_274, 0, 0);
			func_99(&iLocal_47);
			func_98(&iLocal_49);
			if (unk_0xFAA48325A90263BE(iLocal_48, unk_0x4A8C381C258A124D(), 25f, 25f, 25f, 0, 1, 0) && func_2(&uLocal_80, "REBTHAU", sLocal_253, 4, 0, 0, 0))
			{
			}
			unk_0x21B9EFA4B4AA3A5B(iLocal_48, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_97();
		}
		else
		{
			func_96(uLocal_77, iLocal_49, fLocal_63, 1061158912, 0);
		}
	}
}

void func_96(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x55B80B6E7AB61270(iParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam1), 0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
			else if (unk_0x0101C509A6E67F99(iParam1))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam1)))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_97()
{
	func_227();
}

void func_98(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*iParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*iParam0, 1, 0);
		}
		if (func_74(*iParam0))
		{
			if (unk_0x110821AE6C63DD4F(*iParam0) && unk_0x7C9905528EE2C3AB(*iParam0, 1))
			{
				if (func_65(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *iParam0, 0))
					{
						unk_0x68298CA6191CDFDB(iParam0);
						return;
					}
				}
				unk_0x8C1F7D7A31B2A38E(iParam0);
			}
		}
		else
		{
			if (func_65(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *iParam0, 0))
				{
					unk_0x68298CA6191CDFDB(iParam0);
					return;
				}
			}
			unk_0x8C1F7D7A31B2A38E(iParam0);
		}
	}
}

void func_99(int iParam0)
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

void func_100(var uParam0, int iParam1, int iParam2)
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
		if (func_101(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_101(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_101(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_102()
{
	if (func_64(iLocal_49, unk_0x4A8C381C258A124D(), 1) > (fLocal_63 + 100f))
	{
		return 1;
	}
	if (func_64(iLocal_49, unk_0x4A8C381C258A124D(), 1) > fLocal_63)
	{
		if (((unk_0x13CCB1AD131C1082(iLocal_48, sLocal_265, "IDLE_A", 3) && unk_0x82E64DE58A6B84A8(iLocal_48, sLocal_265, "IDLE_A") > 0,99f) || (unk_0x13CCB1AD131C1082(iLocal_48, sLocal_265, "IDLE_B", 3) && unk_0x82E64DE58A6B84A8(iLocal_48, sLocal_265, "IDLE_B") > 0,99f)) || (unk_0x13CCB1AD131C1082(iLocal_48, sLocal_265, "IDLE_C", 3) && unk_0x82E64DE58A6B84A8(iLocal_48, sLocal_265, "IDLE_C") > 0,99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_103()
{
	if ((((((((((iLocal_73 > -1 && (unk_0x1DD05E817C89C737() - iLocal_73) > 5000) && !func_25()) && func_65(iLocal_47)) && func_65(iLocal_48)) && func_74(iLocal_49)) && !unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47, 13f, 13f, 13f, 0, 1, 0)) && !unk_0xFAA48325A90263BE(iLocal_48, iLocal_47, 13f, 13f, 13f, 0, 1, 0)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0)) && unk_0xFAA48325A90263BE(iLocal_48, unk_0x4A8C381C258A124D(), 8f, 8f, 8f, 0, 1, 0)) && func_2(&uLocal_80, "REBTHAU", sLocal_248, 4, 0, 0, 0))
	{
		iLocal_73 = -1;
	}
}

void func_104()
{
	if (func_105())
	{
		iLocal_74 = unk_0x1DD05E817C89C737();
		func_72(&uLocal_77);
		func_100(&uLocal_274, 0, 0);
		unk_0xF6ECB54A7941386F(0);
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			iLocal_50 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
			unk_0xEE0BCDB1B5E36BCB(iLocal_50, 1, 1);
		}
		if (func_65(iLocal_48))
		{
			unk_0x84B06A81C98DA4B8(iLocal_48);
		}
		if ((func_65(iLocal_47) && !func_25()) && func_2(&uLocal_80, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_45 = 3;
	}
	else
	{
		if (((iLocal_270 == 0 && unk_0xC450B06E5AAA0985(uLocal_77)) && func_65(unk_0x4A8C381C258A124D())) && func_65(iLocal_47))
		{
			if (func_64(unk_0x4A8C381C258A124D(), iLocal_47, 1) < 30f || unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iLocal_47, 1), 10f, 1))
			{
				iLocal_270 = 1;
				unk_0x89FE619BFBB2024B(uLocal_77, iLocal_270);
			}
		}
		if (((bLocal_261 == 2 && func_65(iLocal_47)) && func_74(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
		{
			if (iLocal_258 == 0)
			{
				unk_0x3EF00C934572535B(iLocal_49, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_258 = 1;
				Local_259 = { unk_0x763EEC52E292B5A0(unk_0x95610E68DFCFC225(1, "RE_BikeThief2"), unk_0xE2E30D829A6B8F9E(1, "RE_BikeThief2")) };
			}
			else if (!unk_0x050D073F91C5243C(iLocal_49) || func_226(iLocal_49, Local_259, 1) < 5f)
			{
				if (unk_0x050D073F91C5243C(iLocal_49))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_49);
				}
				unk_0x13DE13EA38996410(iLocal_47, iLocal_49, unk_0x4A8C381C258A124D(), 8, fLocal_60, 786468, 10f, 1f, 0);
			}
		}
	}
}

int func_105()
{
	if (!func_65(iLocal_47))
	{
		return 1;
	}
	else if (func_65(iLocal_49))
	{
		if (iLocal_288 == 0)
		{
			if (unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
			{
				iLocal_288 = 1;
			}
		}
		else if (!unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
		{
			return 1;
		}
		if (unk_0x9B3D4335E0EDB0BE(iLocal_47, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_106()
{
	if ((func_65(iLocal_47) && func_74(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
	{
		if (iLocal_65)
		{
			if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_60 = fLocal_62;
				unk_0x553B31859911EC59(iLocal_47, fLocal_60);
				unk_0xE67051907958B5EB(iLocal_47, unk_0x4A8C381C258A124D(), 20000, 16, 2);
				iLocal_65 = 0;
			}
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_60 = fLocal_61;
			unk_0x553B31859911EC59(iLocal_47, fLocal_60);
			unk_0xE67051907958B5EB(iLocal_47, unk_0x4A8C381C258A124D(), 20000, 16, 2);
			iLocal_65 = 1;
		}
	}
}

void func_107()
{
	if (((((((((iLocal_71 < 5 && !func_25()) && func_65(iLocal_47)) && func_65(iLocal_48)) && func_74(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0)) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_47, 13f, 13f, 13f, 0, 1, 0)) && !unk_0xFAA48325A90263BE(iLocal_48, iLocal_47, 13f, 13f, 13f, 0, 1, 0)) && (unk_0x1DD05E817C89C737() - iLocal_72) > 15000) && func_2(&uLocal_80, "REBTHAU", sLocal_250, 4, 0, 0, 0))
	{
		if (unk_0x9B5C1660CCDF7189(iLocal_47, joaat("script_task_vehicle_mission")) == 1 && !unk_0x10BAD2FED582B598(iLocal_47))
		{
			unk_0xD83588CA24829967(iLocal_47, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_72 = unk_0x1DD05E817C89C737();
		iLocal_71++;
	}
}

void func_108()
{
	if ((((iLocal_256 == 0 && func_65(iLocal_48)) && func_65(iLocal_47)) && func_74(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
	{
		if (iLocal_271 == 0)
		{
			if (func_2(&uLocal_80, "REBTHAU", sLocal_245, 4, func_111(), 0, 0))
			{
				unk_0x19626F992DC71FB9(iLocal_48);
				unk_0xB5396F1FB088FE38(&uLocal_51);
				unk_0xE67051907958B5EB(0, iLocal_47, -1, 2048, 2);
				unk_0x63C8DCBEC1CF8225(0, Local_55, 2f, 20000, 1193033728, 1056964608);
				unk_0x0E95B96CFEFE7B61(0, iLocal_49, 1000);
				unk_0x10425721983AE158(0, sLocal_263, sLocal_264, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, sLocal_265, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_51);
				unk_0x4BD42B0527065BB6(iLocal_48, uLocal_51);
				unk_0xD0557B139A542F12(&uLocal_51);
				iLocal_72 = unk_0x1DD05E817C89C737();
				iLocal_73 = unk_0x1DD05E817C89C737();
				if (bLocal_261 == 3)
				{
					sLocal_246 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_246 = "REBTH_HELP2";
				}
				iLocal_271 = 1;
			}
		}
		else if (func_65(unk_0x4A8C381C258A124D()))
		{
			if (func_64(unk_0x4A8C381C258A124D(), iLocal_48, 1) < 30f)
			{
				if (!func_25())
				{
					if (func_2(&uLocal_80, "REBTHAU", sLocal_246, 4, 0, 0, 0))
					{
						iLocal_256 = 1;
					}
				}
				else if (iLocal_272 == 0)
				{
					func_109();
					iLocal_272 = 1;
				}
			}
		}
	}
}

void func_109()
{
	Global_21152 = 0;
	func_110();
}

void func_110()
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

int func_111()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0x4FAFF4BCB7633475(iLocal_48))
	{
		if (unk_0xFAA48325A90263BE(iLocal_48, unk_0x4A8C381C258A124D(), Var1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_112()
{
	if ((func_65(iLocal_47) && func_74(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_47, iLocal_49, 0))
	{
		func_113(&uLocal_274, iLocal_49, 0, 0, 1, 1, 1);
	}
}

void func_113(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_114(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_114(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_115(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_100(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_116(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_116(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_101(iVar0))
	{
		func_142();
	}
	if (func_141(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
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
			if (func_136(uParam0, bParam5, bParam7, 0))
			{
				func_132(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_121(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_101(iVar0))
							{
								func_120(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_119(1);
								}
							}
						}
					}
				}
			}
			else if (func_121(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_101(iVar0))
						{
							func_120(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_119(1);
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
				if (func_101(sParam3))
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
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_100(uParam0, iVar0, 1);
				}
			}
			if (!func_136(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_118(uParam0))
				{
					func_117(uParam0);
				}
			}
		}
	}
	else
	{
		func_100(uParam0, iVar0, 0);
	}
}

void func_117(var uParam0)
{
	if (func_141(unk_0x4A8C381C258A124D()))
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

int func_118(var uParam0)
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

int func_119(bool bParam0)
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

void func_120(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_121(char* sParam0)
{
	if (!func_122(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_101(sParam0)) || func_101("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_119(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_119(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_119(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_122(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_131(0))
	{
		return 0;
	}
	if (func_130())
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
	if ((func_129() || func_128(Global_4718592.f_185586)) || func_127())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_126(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_125(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_123(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_124(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_124(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
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

int func_125(int iParam0, int iParam1)
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

int func_126(int iParam0, int iParam1)
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

var func_127()
{
	return Global_2684504.f_19;
}

bool func_128(int iParam0)
{
	return iParam0 == 51;
}

var func_129()
{
	return Global_2684504.f_18;
}

bool func_130()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_131(int iParam0)
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

void func_132(var uParam0, int iParam1, struct<3> Param2, int iParam3)
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
		func_100(uParam0, 0, 0);
	}
	if (func_135(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_133())
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

bool func_133()
{
	return func_134(unk_0x259BE71D8A81D4FA());
}

int func_134(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_135(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_136(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_140(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_118(uParam0))
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
						if (!func_140(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_140(bParam1, bParam2, bParam3))
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
					if (!func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_139(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
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
				else if (!func_140(bParam1, bParam2, bParam3))
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
						if (func_138(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_137(bParam1, bParam2, bParam3))
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
					else if (func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_118(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_122(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_142();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_122(bParam0, bParam1, bParam2))
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

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_122(bParam0, bParam1, bParam2))
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

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_122(bParam0, bParam1, bParam2))
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

int func_140(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_122(bParam0, bParam1, bParam2))
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

int func_141(int iParam0)
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

void func_142()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_143()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_47))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_47))
		{
			func_159();
			func_227();
		}
		else if (func_154())
		{
			if (func_14() == 0)
			{
				func_153(&uLocal_80, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
				sLocal_247 = "REBTH_RESPM";
			}
			else if (func_14() == 1)
			{
				func_153(&uLocal_80, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
				sLocal_247 = "REBTH_RESPF";
			}
			else if (func_14() == 2)
			{
				func_153(&uLocal_80, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
				sLocal_247 = "REBTH_RESPT";
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_49, 0) && !unk_0x4FAFF4BCB7633475(iLocal_47))
			{
				if (bLocal_261 == 2)
				{
					unk_0xEBA229B2E0BB05E0(iLocal_47, iLocal_49, 20000, -1, 1073741824, 1, 0, 0);
				}
				else
				{
					unk_0xB5396F1FB088FE38(&uLocal_51);
					unk_0xEBA229B2E0BB05E0(0, iLocal_49, 20000, -1, 1073741824, 1, 0, 0);
					unk_0x13DE13EA38996410(0, iLocal_49, unk_0x4A8C381C258A124D(), 8, fLocal_60, 786468, 10f, 1f, 0);
					unk_0x93C0674FC00824D0(uLocal_51);
					unk_0x4BD42B0527065BB6(iLocal_47, uLocal_51);
					unk_0xD0557B139A542F12(&uLocal_51);
					unk_0x44FB298D6382876D(iLocal_47, 1);
				}
			}
			func_72(&uLocal_79);
			uLocal_77 = func_68(iLocal_47, 1, 145);
			unk_0x89FE619BFBB2024B(uLocal_77, iLocal_270);
			unk_0xF6ECB54A7941386F(2);
			if (bLocal_261 == 1)
			{
				unk_0x5E08BBBF87BC4886(472,195f, -1974,902f, 18,57787f, 572,7468f, -1921,216f, 28,68633f, 75f, 0, 0, 1);
			}
			iLocal_45 = 2;
			func_144(1);
		}
	}
}

int func_144(int iParam0)
{
	if (func_147())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_47(Global_113958))
		{
			func_145(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_47(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_120(func_146(iParam0), -1);
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
					func_120(func_146(iParam0), -1);
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
					func_120(func_146(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_146(int iParam0)
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

int func_147()
{
	switch (func_148(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_148(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_152(0))
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
		if (!func_150(iParam2))
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
			func_149(uParam0, iParam4);
		}
	}
	return 2;
}

void func_149(var uParam0, int iParam1)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_44042);
}

int func_151(int iParam0, int iParam1)
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

int func_152(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_154()
{
	switch (bLocal_261)
	{
		case 1:
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 365,9538f, -1971,716f, 18,34454f, 526,409f, -1861,941f, 34,52906f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 886,1401f, -229,9373f, 67,42569f, 652,7365f, -91,95201f, 83,21314f, 60f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1969,382f, 382,1331f, 68,15017f, -1878,152f, 158,4052f, 104,8504f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_155()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 16f, 16f, 6f };
	Var1 = { -16f, -16f, -6f };
	if (func_65(iLocal_47))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_47, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_74(iLocal_49))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_49, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_65(iLocal_48))
	{
		if (unk_0x398315D0C90DE6F6(unk_0x83FDC027F0BEA202(iLocal_48, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x83FDC027F0BEA202(iLocal_48, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + unk_0x83FDC027F0BEA202(iLocal_48, 31086, 0f, 0f, 0f) };
		if ((unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_grenade"), 1)) || unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x5713DE6DB59E98EB(unk_0x83FDC027F0BEA202(iLocal_48, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x8764A5B95AE1F967(-1, unk_0x83FDC027F0BEA202(iLocal_48, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xCA038E64C65D1F9D(iLocal_48))
		{
			return 1;
		}
		if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_156()
{
	if (iLocal_64 == 0)
	{
		switch (bLocal_261)
		{
			case 1:
				Local_54 = { 433,57f, -1916,68f, 24,04f };
				fLocal_58 = 248,5f;
				Local_55 = { 439,054f, -1920,145f, 23,5581f };
				Local_56 = { 434,31f, -1908,87f, 25,92f };
				fLocal_59 = -163,17f;
				Local_53 = { 435,18f, -1915,18f, 24,68f };
				fLocal_57 = 226,13f;
				fLocal_61 = 10f;
				fLocal_62 = 20f;
				iLocal_46 = joaat("scorcher");
				fLocal_63 = 250f;
				sLocal_251 = "REBTH_THX2";
				sLocal_252 = "REBTH_THX3";
				sLocal_253 = "REBTH_GONE";
				break;
			
			case 2:
				Local_54 = { 774,06f, -155,63f, 73,44f };
				fLocal_58 = 144,3932f;
				Local_55 = { 769,8723f, -156,9548f, 73,5144f };
				Local_56 = { 773,632f, -150,3134f, 74,6217f };
				fLocal_59 = 151,6004f;
				Local_53 = { 771,41f, -154,29f, 74,09f };
				fLocal_57 = 150,54f;
				fLocal_61 = 10f;
				fLocal_62 = 20f;
				iLocal_46 = joaat("scorcher");
				fLocal_63 = 250f;
				sLocal_251 = "REBTH_THX2";
				sLocal_252 = "REBTH_THX3";
				sLocal_253 = "REBTH_GONE";
				break;
			
			case 3:
				Local_54 = { -1927,94f, 254,7125f, 84,4018f };
				fLocal_58 = 285,0046f;
				Local_55 = { -1934,785f, 253,2105f, 83,8164f };
				Local_56 = { -1931,04f, 252,19f, 84,99f };
				fLocal_59 = 42,33f;
				Local_53 = { -1932,27f, 254,5f, 84,4f };
				fLocal_57 = 96,81f;
				fLocal_61 = 10f;
				fLocal_62 = 35f;
				iLocal_46 = joaat("bati");
				fLocal_63 = 400f;
				sLocal_251 = "REBTH_THX2X";
				sLocal_252 = "REBTH_THX3X";
				sLocal_253 = "REBTH_GONEX";
				break;
		}
		unk_0xA63572E348CC4CFB(Local_54 - Vector(20f, 20f, 20f), Local_54 + Vector(20f, 20f, 20f), 0, 1);
		unk_0xC4BCE90F7242F354(Local_54 - Vector(20f, 20f, 20f), Local_54 + Vector(20f, 20f, 20f), 0);
		unk_0x2094BC4B6731BA68(Local_54, 20f, 1, 0, 0, 0);
		iLocal_64 = 1;
	}
	unk_0xEC9DAA34BBB4658C(joaat("g_m_y_strpunk_01"));
	unk_0xEC9DAA34BBB4658C(joaat("a_m_y_beachvesp_01"));
	unk_0xEC9DAA34BBB4658C(iLocal_46);
	if ((((unk_0x6252BC0DD8A320DB(joaat("g_m_y_strpunk_01")) && unk_0x6252BC0DD8A320DB(joaat("a_m_y_beachvesp_01"))) && unk_0x6252BC0DD8A320DB(iLocal_46)) && func_158()) && func_157())
	{
		iLocal_49 = unk_0x5779387E956077A6(iLocal_46, Local_53, fLocal_57, 1, 1, 0);
		unk_0x55098D9E9AD58806(iLocal_46);
		unk_0xCCA6D8A84EE8C88A(iLocal_46, 1);
		unk_0xC229299217554C78(iLocal_49, 1, 1, 0);
		unk_0x439C904840715871(iLocal_49, 0);
		unk_0xAA588DD56719AE3A(iLocal_49, 0);
		unk_0x5FE0938FDE9B0958(iLocal_49, 1);
		unk_0xCAC4020CCF361AC8("RE_CAR_STEAL_SCENE");
		unk_0x616C2EAE947E6027(iLocal_49, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_60 = fLocal_62;
		if (bLocal_261 == 3)
		{
			unk_0xD133EF7430EDCD09(iLocal_49, 49, 0);
			unk_0xB5AD06DDA85E2E8F(iLocal_49, 0);
			unk_0x8450270DC5896D39(iLocal_49, 16, 2, 0);
			unk_0x8450270DC5896D39(iLocal_49, 11, 3, 0);
			unk_0x8450270DC5896D39(iLocal_49, 12, 2, 0);
			unk_0x8450270DC5896D39(iLocal_49, 13, 2, 0);
			unk_0x8450270DC5896D39(iLocal_49, 23, 10, 0);
			unk_0x8450270DC5896D39(iLocal_49, 24, 10, 0);
			unk_0xF5501FF9869DAC7C(iLocal_49, 22, 1);
			unk_0xF5501FF9869DAC7C(iLocal_49, 17, 1);
			unk_0xF5501FF9869DAC7C(iLocal_49, 21, 1);
			unk_0xF5501FF9869DAC7C(iLocal_49, 20, 1);
			unk_0xF5501FF9869DAC7C(iLocal_49, 19, 1);
			unk_0xD133EF7430EDCD09(iLocal_49, 89, 89);
			unk_0xBB361D7264AC4FD8(iLocal_49, 0, 1);
			unk_0x05D3F682DDA06C20(iLocal_49, 1);
		}
		unk_0x06CD913C241C765E("re_bikethief_relGroupVictim", &uLocal_68);
		unk_0x06CD913C241C765E("re_bikethief_relGroupThief", &uLocal_69);
		unk_0xD414C47AFF81382A(5, uLocal_69, uLocal_68);
		unk_0xD414C47AFF81382A(5, uLocal_69, joaat("player"));
		unk_0xD414C47AFF81382A(1, iLocal_68, joaat("player"));
		iLocal_47 = unk_0xB1DBFEB95C0EFB88(19, joaat("g_m_y_strpunk_01"), Local_56, fLocal_59, 1, 1);
		unk_0x55098D9E9AD58806(joaat("g_m_y_strpunk_01"));
		unk_0xAAA71DD7E9059338(iLocal_47, 1);
		unk_0x1F7539C841C2A71F(iLocal_47, 1);
		unk_0x3CEA1FD137ACE2D9(iLocal_47, uLocal_69);
		unk_0xD0764B65C2DFEDCA(iLocal_47, 3);
		unk_0xBE8796DB2B90A437(iLocal_47, 17, 1);
		unk_0xBE8796DB2B90A437(iLocal_47, 13, 0);
		unk_0x1CA08719184AFC6F(iLocal_47, 1, 1);
		unk_0xECF7FE1783A38672(iLocal_47, 0);
		unk_0x0428AFDCAA63B06E(iLocal_47, 42, 1);
		unk_0x0428AFDCAA63B06E(iLocal_47, 281, 1);
		unk_0x68F395D64BC35E68(iLocal_47, 2);
		unk_0x397CF4F4C8B17365(iLocal_47, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0x10425721983AE158(iLocal_47, sLocal_262, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_48 = unk_0xB1DBFEB95C0EFB88(19, joaat("a_m_y_beachvesp_01"), Local_54, fLocal_58, 1, 1);
		unk_0x55098D9E9AD58806(joaat("a_m_y_beachvesp_01"));
		unk_0xAAA71DD7E9059338(iLocal_48, 1);
		unk_0x1F7539C841C2A71F(iLocal_48, 1);
		unk_0x1CA08719184AFC6F(iLocal_48, 8, 1);
		if (bLocal_261 == 3)
		{
			unk_0xECF7FE1783A38672(iLocal_48, 1);
		}
		else
		{
			unk_0xECF7FE1783A38672(iLocal_48, 0);
		}
		unk_0x0428AFDCAA63B06E(iLocal_48, 26, 1);
		unk_0x0428AFDCAA63B06E(iLocal_48, 42, 1);
		unk_0x0428AFDCAA63B06E(iLocal_48, 167, 1);
		unk_0x0428AFDCAA63B06E(iLocal_48, 281, 1);
		unk_0x3CEA1FD137ACE2D9(iLocal_48, iLocal_68);
		unk_0x3F58BFCF656F0DF1(iLocal_48, 0);
		unk_0x397CF4F4C8B17365(iLocal_48, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x21B9EFA4B4AA3A5B(iLocal_48, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_153(&uLocal_80, 1, iLocal_47, "BThief", 0, 1);
		func_153(&uLocal_80, 2, iLocal_48, "BThiefVictim", 0, 1);
		if (iLocal_260 == 0)
		{
			if (bLocal_261 == 3)
			{
				sLocal_245 = "REBTH_HELPX";
			}
			else
			{
				sLocal_245 = "REBTH_HELP";
			}
			sLocal_249 = "REBTH_RUNSOF";
			sLocal_250 = "REBTH_TAUNT";
			sLocal_264 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_260 == 1)
		{
			if (bLocal_261 == 3)
			{
				sLocal_245 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_245 = "REBTH_HLPB";
			}
			sLocal_249 = "REBTH_RUNB";
			sLocal_250 = "REBTH_TNTB";
			sLocal_264 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_245 = "REBTH_HLPC";
			sLocal_249 = "REBTH_RUNC";
			sLocal_250 = "REBTH_TNTC";
			sLocal_264 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0xD682DD0578BF5392(0);
		iLocal_45 = 1;
	}
}

int func_157()
{
	if (bLocal_261 == 2)
	{
		unk_0xD772E6694B8472A6(1, "RE_BikeThief2");
		if (!unk_0x266D9DB5FCE4003B(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_158()
{
	unk_0x80813AC549A1E8AE(sLocal_262);
	unk_0x80813AC549A1E8AE(sLocal_263);
	unk_0x80813AC549A1E8AE(sLocal_265);
	unk_0x80813AC549A1E8AE(sLocal_266);
	unk_0x80813AC549A1E8AE(sLocal_268);
	unk_0x80813AC549A1E8AE(sLocal_267);
	if (((((unk_0xE100DD4F82A51BDE(sLocal_262) && unk_0xE100DD4F82A51BDE(sLocal_263)) && unk_0xE100DD4F82A51BDE(sLocal_265)) && unk_0xE100DD4F82A51BDE(sLocal_266)) && unk_0xE100DD4F82A51BDE(sLocal_268)) && unk_0xE100DD4F82A51BDE(sLocal_267))
	{
		return 1;
	}
	return 0;
}

void func_159()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_48))
	{
		if (func_76(iLocal_48, joaat("script_task_start_scenario_in_place")))
		{
			unk_0x19626F992DC71FB9(iLocal_48);
		}
		else
		{
			unk_0x974022927CB47E68(iLocal_48);
		}
		unk_0x44FB298D6382876D(iLocal_48, 1);
		unk_0xD844F5E50DAB6FF7(iLocal_48, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47))
	{
		unk_0x44FB298D6382876D(iLocal_47, 1);
		unk_0xD844F5E50DAB6FF7(iLocal_47, unk_0x4A8C381C258A124D(), 100f, -1, 0, 1);
	}
}

int func_160()
{
	if (iLocal_45 == 0 && func_179())
	{
		return 1;
	}
	if (iLocal_45 == 1 && func_167())
	{
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_48))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_48))
		{
			return 1;
		}
		else if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
		{
			func_165();
			func_164(&uLocal_80, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_161(iLocal_48, 170f))
		{
			func_165();
			func_164(&uLocal_80, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 && iLocal_257 == 1)
	{
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_49) && !unk_0xD9F5E1FEFD1329E4(iLocal_49, 0))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_65(unk_0x4A8C381C258A124D()) && func_65(iParam0))
	{
		if (func_163(iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
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
				if (func_162(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_162(int iParam0, float fParam1)
{
	return func_82(iParam0, unk_0x4A8C381C258A124D(), fParam1, 1, 250, 7);
}

int func_163(var uParam0)
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
	{
		return 1;
	}
	return 0;
}

void func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, 0);
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

void func_165()
{
	Global_21152 = 0;
	func_166();
}

void func_166()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_167()
{
	if (!func_150(5))
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_168(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_168(float fParam0, bool bParam1)
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
		if (func_16(func_14()))
		{
			iVar5 = func_52();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_169(iVar1, &Var0);
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

void func_169(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_170(uParam1, "Abigail1", func_172(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 1:
			func_170(uParam1, "Abigail2", func_172(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 2:
			func_170(uParam1, "Barry1", func_172(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 3:
			func_170(uParam1, "Barry2", func_172(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 4:
			func_170(uParam1, "Barry3", func_172(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 5:
			func_170(uParam1, "Barry3A", func_172(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 6:
			func_170(uParam1, "Barry3C", func_172(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 7:
			func_170(uParam1, "Barry4", func_172(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_171(iParam0), 0, 0);
			break;
		
		case 8:
			func_170(uParam1, "Dreyfuss1", func_172(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 9:
			func_170(uParam1, "Epsilon1", func_172(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 10:
			func_170(uParam1, "Epsilon2", func_172(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 11:
			func_170(uParam1, "Epsilon3", func_172(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 12:
			func_170(uParam1, "Epsilon4", func_172(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 13:
			func_170(uParam1, "Epsilon5", func_172(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 14:
			func_170(uParam1, "Epsilon6", func_172(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 15:
			func_170(uParam1, "Epsilon7", func_172(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 16:
			func_170(uParam1, "Epsilon8", func_172(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 17:
			func_170(uParam1, "Extreme1", func_172(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 18:
			func_170(uParam1, "Extreme2", func_172(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 19:
			func_170(uParam1, "Extreme3", func_172(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 20:
			func_170(uParam1, "Extreme4", func_172(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 21:
			func_170(uParam1, "Fanatic1", func_172(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_171(iParam0), 1, 0);
			break;
		
		case 22:
			func_170(uParam1, "Fanatic2", func_172(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_171(iParam0), 1, 0);
			break;
		
		case 23:
			func_170(uParam1, "Fanatic3", func_172(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_171(iParam0), 0, 1);
			break;
		
		case 24:
			func_170(uParam1, "Hao1", func_172(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_171(iParam0), 0, 1);
			break;
		
		case 25:
			func_170(uParam1, "Hunting1", func_172(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 26:
			func_170(uParam1, "Hunting2", func_172(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 27:
			func_170(uParam1, "Josh1", func_172(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 28:
			func_170(uParam1, "Josh2", func_172(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 29:
			func_170(uParam1, "Josh3", func_172(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 30:
			func_170(uParam1, "Josh4", func_172(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 31:
			func_170(uParam1, "Maude1", func_172(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 32:
			func_170(uParam1, "Minute1", func_172(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 33:
			func_170(uParam1, "Minute2", func_172(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 34:
			func_170(uParam1, "Minute3", func_172(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 35:
			func_170(uParam1, "MrsPhilips1", func_172(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 36:
			func_170(uParam1, "MrsPhilips2", func_172(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 37:
			func_170(uParam1, "Nigel1", func_172(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 38:
			func_170(uParam1, "Nigel1A", func_172(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 39:
			func_170(uParam1, "Nigel1B", func_172(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 40:
			func_170(uParam1, "Nigel1C", func_172(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 41:
			func_170(uParam1, "Nigel1D", func_172(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 42:
			func_170(uParam1, "Nigel2", func_172(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 43:
			func_170(uParam1, "Nigel3", func_172(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 44:
			func_170(uParam1, "Omega1", func_172(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 45:
			func_170(uParam1, "Omega2", func_172(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 46:
			func_170(uParam1, "Paparazzo1", func_172(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 47:
			func_170(uParam1, "Paparazzo2", func_172(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 48:
			func_170(uParam1, "Paparazzo3", func_172(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 49:
			func_170(uParam1, "Paparazzo3A", func_172(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 50:
			func_170(uParam1, "Paparazzo3B", func_172(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 51:
			func_170(uParam1, "Paparazzo4", func_172(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 52:
			func_170(uParam1, "Rampage1", func_172(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 54:
			func_170(uParam1, "Rampage3", func_172(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 55:
			func_170(uParam1, "Rampage4", func_172(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 56:
			func_170(uParam1, "Rampage5", func_172(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 53:
			func_170(uParam1, "Rampage2", func_172(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 57:
			func_170(uParam1, "TheLastOne", func_172(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 58:
			func_170(uParam1, "Tonya1", func_172(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 59:
			func_170(uParam1, "Tonya2", func_172(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 60:
			func_170(uParam1, "Tonya3", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 61:
			func_170(uParam1, "Tonya4", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 62:
			func_170(uParam1, "Tonya5", func_172(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_170(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_171(int iParam0)
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

struct<2> func_172(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_173(iParam0) };
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

struct<2> func_173(int iParam0)
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

int func_174()
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

int func_175()
{
	if (func_178() && !func_174())
	{
		return 1;
	}
	if (func_177() && func_176())
	{
		return 1;
	}
	return 0;
}

bool func_176()
{
	return Global_113687 > 0;
}

int func_177()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_179()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_175())
	{
		return 1;
	}
	if (func_168(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
}

int func_181()
{
	int iVar0;
	
	if (func_182(26, 1))
	{
		iVar0++;
	}
	if (func_182(26, 2))
	{
		iVar0++;
	}
	if (func_182(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_182(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_185(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_184();
}

void func_184()
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

void func_185(int iParam0)
{
	Global_113958 = iParam0;
}

int func_186(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_56();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_174())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_175())
		{
			return 0;
		}
		if (func_224())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_168(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_223(iParam1))
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_222(func_14()) == 4 || func_222(func_14()) == 5)
			{
				return 0;
			}
		}
		if (func_16(func_14()))
		{
			if (!func_221(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_220(Global_113969.f_24998.f_43[iParam1]))
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
		if (func_219())
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
		if (!func_210(4))
		{
			return 0;
		}
		if (!func_150(5))
		{
			return 0;
		}
		if (func_182(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_182(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_223(30) && !func_182(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_16(func_14()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_135(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_14() != iVar2)
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

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_192(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_195(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_196(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_197(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_198(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_199(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
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
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, unk_0x4BA5A16068183C5E());
	func_207(&uVar0, unk_0x18E502A71E28968C());
	func_206(&uVar0, unk_0x5295501D0862870D());
	func_205(&uVar0, unk_0xB12880C92EA6EE15());
	func_204(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_203(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_14();
				if (!func_16(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_22(8, -1)) || func_216()) || func_215()) || func_214()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_218()) || Global_32951) || func_217()) || func_22(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_22(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_22(8, -1)) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_218() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_22(8, -1)) || func_213()) || func_212()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_22(8, -1) || func_216()) || func_215()) || func_212()) || func_211())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_218()) || Global_32951) || func_217()) || func_22(8, -1)) || func_215()) || func_214()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_218()) || func_215()) || Global_113016) || Global_32951) || func_217()) || Global_45250) || func_22(8, -1)) || func_214()) || func_212()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_22(8, -1)) || func_214()) || func_212()) || func_216()) || func_215()) || func_213())
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

var func_211()
{
	return Global_101572.f_1;
}

int func_212()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_213()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_214()
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

bool func_215()
{
	return Global_101585.f_394 > 0;
}

bool func_216()
{
	return Global_101585.f_393 > 0;
}

var func_217()
{
	return Global_1575083;
}

int func_218()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_219()
{
	func_13();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_14();
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

int func_222(int iParam0)
{
	if (!func_16(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_225())
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

int func_224()
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

int func_225()
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
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, 0);
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

float func_226(int iParam0, struct<3> Param1, int iParam2)
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

void func_227()
{
	func_100(&uLocal_274, 0, 0);
	if (unk_0xBC2EE32DE886BD08("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_49, 0))
		{
			unk_0x001B008A010F2FE6(iLocal_49, 0);
		}
		unk_0xB43467C43086A6A1("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_261 != 3)
	{
		func_230(26);
	}
	else
	{
		func_230(8);
	}
	if (bLocal_261 == 1)
	{
		unk_0x2AF2D6F164BD6F5A(472,195f, -1974,902f, 18,57787f, 572,7468f, -1921,216f, 28,68633f, 75f, 1);
	}
	unk_0xD7B6A43ACC36D868(uLocal_269, 0);
	unk_0xA63572E348CC4CFB(Local_54 - Vector(20f, 20f, 20f), Local_54 + Vector(20f, 20f, 20f), 1, 1);
	if (unk_0xD9F5E1FEFD1329E4(iLocal_49, 0))
	{
		unk_0xF04751F8E604D487(iLocal_49, 1);
		if (unk_0x050D073F91C5243C(iLocal_49))
		{
			unk_0x1D2DAF2A41FFC4A0(iLocal_49);
		}
	}
	if (bLocal_261 == 2)
	{
		unk_0x7821F942CAEEBEE1(1, "RE_BikeThief2");
	}
	func_72(&uLocal_79);
	func_72(&uLocal_77);
	func_73(&uLocal_286);
	func_72(&uLocal_78);
	func_79(0);
	func_229(&uLocal_80, 0);
	func_229(&uLocal_80, 1);
	func_229(&uLocal_80, 2);
	if ((func_65(iLocal_48) && func_65(iLocal_49)) && unk_0xCECDBB848D53DEB2(iLocal_48, iLocal_49, 0))
	{
		unk_0x7C8E9DE09D4AD3FF(iLocal_48, iLocal_49, fLocal_60, 786485);
		unk_0x44FB298D6382876D(iLocal_48, 1);
	}
	func_94(&iLocal_47, 1, 0, 1);
	func_94(&iLocal_48, 1, 0, 1);
	func_228(&iLocal_49);
	if (func_65(iLocal_50))
	{
		unk_0xC9BBB26582F3058A(iLocal_50);
		func_228(&iLocal_50);
	}
	unk_0x55098D9E9AD58806(joaat("g_m_y_strpunk_01"));
	unk_0x55098D9E9AD58806(joaat("a_m_y_beachvesp_01"));
	unk_0x55098D9E9AD58806(joaat("scorcher"));
	unk_0x55098D9E9AD58806(joaat("bati"));
	unk_0x268BE77F77533D03(sLocal_262);
	unk_0x268BE77F77533D03(sLocal_263);
	unk_0x268BE77F77533D03(sLocal_265);
	unk_0x268BE77F77533D03(sLocal_266);
	unk_0x268BE77F77533D03(sLocal_267);
	unk_0x268BE77F77533D03(sLocal_268);
	unk_0xF6ECB54A7941386F(0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_228(int iParam0)
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

void func_229(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_230(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_241())
	{
		func_234(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_233(30000);
		StringCopy(&cVar0, func_232(Global_113958, 1), 64);
		if (func_55(Global_113958) > 0)
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
	func_231(&Global_33008);
	Global_113959 = 0;
	func_185(-1);
}

void func_231(var uParam0)
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

char* func_232(int iParam0, bool bParam1)
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

void func_233(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_234(int iParam0)
{
	func_235(iParam0, 0, func_240(iParam0));
}

void func_235(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_238(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_237(iParam0, &uVar0);
	Var1 = { func_236(&uVar0) };
}

struct<16> func_236(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_237(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_239(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_240(int iParam0)
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

int func_241()
{
	if ((Global_113958 == func_56() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

