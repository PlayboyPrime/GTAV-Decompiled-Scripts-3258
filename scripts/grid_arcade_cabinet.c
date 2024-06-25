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
	var uLocal_67 = -1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
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
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
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
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	struct<22> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_143 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_144 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_145 = 0;
	var uLocal_146 = -1;
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = -1;
	var uLocal_150 = -1;
	var uLocal_151 = 0;
	var uLocal_152 = -1;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = -1;
	var uLocal_156 = -1;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = -1;
	var uLocal_168 = -1;
	var uLocal_169 = 0;
	var uLocal_170 = -1;
	var uLocal_171 = -1;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = -1;
	var uLocal_175 = 4;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	int iLocal_180[4] = { 0, 0, 0, 0 };
	struct<9> Local_181[4];
	struct<16> Local_182[4];
	struct<37> Local_183[4];
	struct<17> Local_184 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_185 = 255;
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
	var uLocal_198 = 255;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 255;
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
	var uLocal_215 = 255;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 255;
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
	var uLocal_232 = 255;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 255;
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
	var uLocal_249 = 255;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 255;
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
	var uLocal_266 = 255;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 255;
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
	var uLocal_283 = 255;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 255;
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
	var uLocal_300 = 255;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 255;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	struct<21> Local_309 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_75 = 3f;
	fLocal_76 = 0f;
	fLocal_77 = 2f;
	fLocal_78 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0,5f;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_404(ScriptParam_309);
	}
	while (true)
	{
		func_403();
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_50();
		}
		else
		{
			func_9();
		}
		if (func_1())
		{
			func_9();
		}
	}
}

int func_1()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_3()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_4()
{
	return Global_32948;
}

bool func_5()
{
	return Global_2684504.f_700;
}

int func_6(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return Global_2696172;
}

bool func_8()
{
	return Global_2684504.f_695;
}

void func_9()
{
	func_11();
	func_10();
}

void func_10()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_11()
{
	int iVar0;
	
	if (func_49())
	{
		Local_142.f_16 = 1;
	}
	Local_142.f_21 = func_45();
	func_44();
	func_20();
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGrid");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridTiles");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridPlayerBlue");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridPlayerGreen");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridPlayerPurple");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridPlayerYellow");
	unk_0x633E3833FB96BCCB("MPArcadeCabinetGridHUD");
	unk_0xA790E8E6FD7393AC(3, 1);
	if (Local_143.f_427 != 0)
	{
		unk_0xA3B3261566EE06A5(Local_143.f_427);
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_menus_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_menus_scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_18(func_19(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_143.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			unk_0x8E4825CCACA34B58(Local_143.f_281[iVar0 /*7*/].f_5);
			unk_0x394AFAC073E1F277(Local_143.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_143.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			unk_0x8E4825CCACA34B58(Local_143.f_281[iVar0 /*7*/].f_6);
			unk_0x394AFAC073E1F277(Local_143.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_143.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			unk_0x8E4825CCACA34B58(Local_143.f_204[iVar0 /*19*/].f_7);
			unk_0x394AFAC073E1F277(Local_143.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_143.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			unk_0x8E4825CCACA34B58(Local_143.f_204[iVar0 /*19*/].f_6);
			unk_0x394AFAC073E1F277(Local_143.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_143.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			unk_0x8E4825CCACA34B58(Local_143.f_204[iVar0 /*19*/].f_8);
			unk_0x394AFAC073E1F277(Local_143.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_143.f_178.f_4 >= 0)
	{
		unk_0x8E4825CCACA34B58(Local_143.f_178.f_4);
		unk_0x394AFAC073E1F277(Local_143.f_178.f_4);
	}
	if (Local_143.f_428 >= 0)
	{
		unk_0x8E4825CCACA34B58(Local_143.f_428);
		unk_0x394AFAC073E1F277(Local_143.f_428);
	}
	unk_0x48FA483FE4F18CFE("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_16();
	func_15(12);
	Global_1928430 = 0;
	Global_1928430.f_1 = 0;
	func_12(0);
	func_10();
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		if (!func_13(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438), 4);
		}
	}
	else if (func_13(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438), 4);
	}
}

int func_13(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_438, 4);
	}
	return 0;
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	Local_143.f_140 = iParam0;
}

void func_16()
{
	Local_143.f_442 = -1;
	Local_143.f_421 = 0;
	if (Local_143.f_418 != -2147483647)
	{
		Local_143.f_418 = -2147483647;
	}
	if (!unk_0xD6F9DEE4765092A9(Local_143.f_419))
	{
		Local_143.f_419 = func_17();
	}
	if (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
	}
}

var func_17()
{
	var uVar0;
	
	return uVar0;
}

void func_18(var uParam0)
{
	unk_0x86A2BC11844DEEB3(uParam0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_20()
{
	Global_1663322 = 0;
	func_42();
	Global_4718592.f_178913 = 0;
	func_41();
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), 16);
	func_40(0, 1, 1, 0);
	func_39();
	if (func_37() && !unk_0x787F8EE1F6FBDC6D())
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_22(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		else
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
		}
	}
	func_21(0, 0, -1);
	func_21(1, 0, -1);
	func_21(2, 0, -1);
	func_21(3, 0, -1);
	func_21(4, 0, -1);
	func_21(6, 0, -1);
	func_21(7, 0, -1);
	func_21(8, 0, -1);
	func_21(9, 0, -1);
	func_21(10, 0, -1);
	func_21(11, 0, -1);
	func_21(12, 0, -1);
	func_21(13, 0, -1);
	func_21(14, 0, -1);
	func_21(15, 0, -1);
	func_21(16, 0, -1);
}

void func_21(bool bParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668667.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1046), iParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_1668667.f_1046), bParam0);
			}
			break;
	}
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_36())
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
		if (!func_37())
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
				else if (bVar14 || ((!func_32(unk_0x259BE71D8A81D4FA(), 0) && !func_31()) && !func_30(unk_0x259BE71D8A81D4FA())))
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
					func_27(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_26(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					func_25();
					func_24();
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
				if (!func_26(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					if (func_23(Global_4718592.f_185586))
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

bool func_23(int iParam0)
{
	return iParam0 == 17;
}

void func_24()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_25()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_26(var uParam0)
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

void func_27(int iParam0, int iParam1, int iParam2)
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
				func_29();
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
		if (func_32(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_28(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_29()
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

int func_30(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()
{
	return BitTest(Global_2621446, 3);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1574926;
}

int func_35(var uParam0)
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

int func_36()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (func_38() == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	return Global_1574633.f_18;
}

void func_39()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && iParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_41()
{
	if (Global_1928953)
	{
	}
	Global_1928953 = 0;
}

void func_42()
{
	if (!Global_1574755)
	{
		return;
	}
	func_43();
}

void func_43()
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_44()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (unk_0xD6F9DEE4765092A9(&Local_142))
	{
		return;
	}
	if (Local_142.f_19 == 0)
	{
		return;
	}
	Local_142.f_19 = (unk_0x0728E77B2BF91D54() - Local_142.f_19);
	unk_0x7F9682CABF083921(unk_0x70E57E9927B6BA58(&Local_142), Local_142.f_16, Local_142.f_17, Local_142.f_18, Local_142.f_19, Local_142.f_20, Local_142.f_21);
}

int func_45()
{
	if (unk_0x259BE71D8A81D4FA() != func_14())
	{
		if (func_48() != -1)
		{
			switch (func_46())
			{
				case 17:
					return 2003554330;
					break;
				
				case 15:
					return 729976867;
					break;
				
				default:
					return 0;
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
	return 0;
}

int func_46()
{
	int iVar0;
	
	iVar0 = func_48();
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_47(iVar0);
}

int func_47(int iParam0)
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

int func_48()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

int func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_183[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_50()
{
	func_360();
	func_103();
	func_54();
	func_51();
}

void func_51()
{
	func_53();
	if (!func_52())
	{
		unk_0x7009D885379C8CDF();
	}
}

bool func_52()
{
	return BitTest(Local_143.f_417, 0);
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_183[iVar0 /*37*/].f_25)
		{
			Local_181[iVar0 /*9*/] = { Local_183[iVar0 /*37*/] };
			Local_182[iVar0 /*16*/] = { Local_183[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_54()
{
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	switch (Local_144.f_145)
	{
		case 0:
			func_101();
			break;
		
		case 1:
			func_95();
			break;
		
		case 2:
			func_89();
			break;
		
		case 3:
			func_88();
			break;
		
		case 4:
			func_68();
			break;
		
		case 5:
			func_55();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_55()
{
	if (unk_0x7E3F74F641EE6B27() < Local_144.f_147 + 5000)
	{
		return;
	}
	if (func_67())
	{
		func_66(2);
		return;
	}
	func_56();
	func_66(6);
}

void func_56()
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)) && !Local_183[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar1 /*3*/] = Local_181[iVar1 /*9*/].f_7;
			Var0[iVar1 /*3*/].f_1 = Local_181[iVar1 /*9*/].f_8;
			Var0[iVar1 /*3*/].f_2 = iVar1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0[iVar1 + 4 /*3*/] = Local_144.f_165[iVar1 /*3*/];
		Var0[iVar1 + 4 /*3*/].f_2 = Local_144.f_165[iVar1 /*3*/].f_2;
		Var0[iVar1 + 4 /*3*/].f_1 = Local_144.f_165[iVar1 /*3*/].f_1;
		iVar1++;
	}
	func_65(&Var0, 0, 13);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Local_144.f_165[iVar1 /*3*/] = Var0[iVar1 /*3*/];
		Local_144.f_165[iVar1 /*3*/].f_2 = Var0[iVar1 /*3*/].f_2;
		Local_144.f_165[iVar1 /*3*/].f_1 = Var0[iVar1 /*3*/].f_1;
		func_57(func_59(unk_0x259BE71D8A81D4FA()), 0, iVar1, Local_144.f_165[iVar1 /*3*/], Local_144.f_165[iVar1 /*3*/].f_1, 0);
		iVar1++;
	}
}

void func_57(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<8> Var0;
	int iVar1;
	
	Var0.f_0 = 1953474326;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = uParam4;
	Var0.f_7 = iParam5;
	iVar1 = func_58(iParam0);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 8, iVar1, Var0.f_0);
	}
}

var func_58(bool bParam0)
{
	var uVar0;
	
	if (func_35(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	if (func_63(iParam0) != -1)
	{
		iVar0 = func_47(func_63(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_61(iParam0, 0))
			{
				return func_60(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_14();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_14();
}

int func_60(int iParam0)
{
	if (func_35(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_14();
}

int func_61(int iParam0, bool bParam1)
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_62(iParam0))
		{
			return 0;
		}
	}
	return func_35(Global_1887305[iParam0 /*610*/].f_10);
}

int func_62(int iParam0)
{
	if (func_35(iParam0))
	{
		if (func_35(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_64(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_64(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
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

void func_65(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_65(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_65(uParam0, iParam1, iVar1);
	}
}

void func_66(int iParam0)
{
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	Local_144.f_145 = iParam0;
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	if (Local_143.f_148 <= 1)
	{
		return 0;
	}
	if (Local_144.f_137 >= Local_144.f_138)
	{
		return 0;
	}
	iVar0 = system::floor((system::to_float(Local_144.f_138) / 2f));
	if (Local_144.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)) && !Local_183[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_181[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_144.f_139[Local_181[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_68()
{
	int iVar0;
	
	func_82();
	func_77(0, 0);
	func_73();
	if (!func_72())
	{
		return;
	}
	iVar0 = func_70();
	if (iVar0 == -1)
	{
		func_77(1, 1);
		Local_144.f_162 = 1;
		return;
	}
	Local_144.f_139[Local_181[iVar0 /*9*/].f_6]++;
	Local_144.f_131[Local_144.f_137] = iVar0;
	Local_144.f_137++;
	Local_144.f_147 = unk_0x7E3F74F641EE6B27();
	if (!func_67())
	{
		Local_144.f_130 = func_69();
	}
	func_66(5);
}

int func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar2)) && !Local_183[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_144.f_139[Local_181[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_144.f_139[Local_181[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_144.f_139[Local_181[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_181[iVar2 /*9*/].f_8 + iLocal_180[Local_181[iVar2 /*9*/].f_6]) > (Local_181[iVar0 /*9*/].f_8 + iLocal_180[Local_181[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar2)) && !Local_183[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_144.f_163)
			{
				if (Local_144.f_162 && func_71(iVar2))
				{
				}
				else
				{
					if (Local_144.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_180[Local_181[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_180[Local_181[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_180[Local_181[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_144.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_144.f_162)
				{
					Local_144.f_163 = 1;
				}
				return iVar0;
			}

int func_71(int iParam0)
{
	if (Local_181[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_181[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	if (!Local_144.f_162 && unk_0x7E3F74F641EE6B27() > (Local_144.f_146 + 120000))
	{
		return 1;
	}
	if (Local_143.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	if (unk_0x7E3F74F641EE6B27() < Local_144.f_161 + 15000)
	{
		return;
	}
	Local_144.f_161 = unk_0x7E3F74F641EE6B27();
	if (func_76())
	{
		bVar3 = func_76();
		bVar0 = unk_0xC5935DFB3F39785A(0, 13);
		if ((bVar0 % 2) != 0)
		{
			bVar0++;
			if (bVar0 >= 13)
			{
				bVar0 = false;
			}
		}
		bVar1 = func_75(bVar3, 8, 0);
		iVar2 = func_75(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_76();
		bVar0 = func_75(bVar4, 12, 0);
		bVar1 = unk_0xC5935DFB3F39785A(0, 9);
		if ((bVar1 % 2) != 0)
		{
			bVar1++;
			if (bVar1 >= 9)
			{
				bVar1 = false;
			}
		}
		iVar2 = func_75(bVar4, 2, 3);
	}
	Local_144.f_148[0 /*4*/] = unk_0x7E3F74F641EE6B27() + 1000;
	Local_144.f_148[0 /*4*/].f_1 = func_74(bVar0, bVar1);
	Local_144.f_148[0 /*4*/].f_2 = iVar2;
	Local_144.f_148[0 /*4*/].f_3 = unk_0xC5935DFB3F39785A(0, 5);
}

int func_74(bool bParam0, bool bParam1)
{
	return (bParam0 + bParam1 * 13);
}

int func_75(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_76()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_77(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	if (Local_144.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_144.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (unk_0x7E3F74F641EE6B27() < Local_144.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_144.f_62[iVar0 /*3*/] = -1;
			Local_144.f_62[iVar0 /*3*/].f_1 = -1;
			Local_144.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (unk_0x7E3F74F641EE6B27() < Local_144.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_144.f_84 = unk_0x7E3F74F641EE6B27();
	if (bParam1)
	{
		func_81();
	}
	else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_146) < 20000)
	{
		func_80();
	}
	else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_146) >= 20000 && (unk_0x7E3F74F641EE6B27() - Local_144.f_146) < 60000)
	{
		func_79();
	}
	else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_146) < 102500)
	{
		func_78();
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7E3F74F641EE6B27();
	iVar1 = unk_0xC5935DFB3F39785A(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_144.f_62[0 /*3*/].f_1 = 6;
			Local_144.f_62[0 /*3*/] = 32;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 4;
			Local_144.f_62[1 /*3*/] = 56;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 4;
			Local_144.f_62[2 /*3*/] = 60;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 6;
			Local_144.f_62[3 /*3*/] = 84;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 0;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 1;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 1;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_144.f_62[0 /*3*/].f_1 = 5;
			Local_144.f_62[0 /*3*/] = 32;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 1;
			Local_144.f_62[1 /*3*/] = 56;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 1;
			Local_144.f_62[2 /*3*/] = 60;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 5;
			Local_144.f_62[3 /*3*/] = 84;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 5;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_144.f_62[0 /*3*/].f_1 = 3;
			Local_144.f_62[0 /*3*/] = 34;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 6;
			Local_144.f_62[1 /*3*/] = 30;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 6;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 3;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_144.f_62[0 /*3*/].f_1 = 0;
			Local_144.f_62[0 /*3*/] = 30;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 0;
			Local_144.f_62[1 /*3*/] = 34;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 0;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 0;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 7;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 7;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_144.f_62[0 /*3*/].f_1 = 6;
			Local_144.f_62[0 /*3*/] = 30;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 6;
			Local_144.f_62[1 /*3*/] = 34;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 6;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 6;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 0;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7E3F74F641EE6B27();
	iVar1 = unk_0xC5935DFB3F39785A(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_144.f_62[0 /*3*/].f_1 = 3;
			Local_144.f_62[0 /*3*/] = 32;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 4;
			Local_144.f_62[1 /*3*/] = 56;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 4;
			Local_144.f_62[2 /*3*/] = 60;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 3;
			Local_144.f_62[3 /*3*/] = 84;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 1;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 1;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_144.f_62[0 /*3*/].f_1 = 5;
			Local_144.f_62[0 /*3*/] = 32;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 7;
			Local_144.f_62[1 /*3*/] = 56;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 7;
			Local_144.f_62[2 /*3*/] = 60;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 5;
			Local_144.f_62[3 /*3*/] = 84;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_144.f_62[0 /*3*/].f_1 = 3;
			Local_144.f_62[0 /*3*/] = 30;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 3;
			Local_144.f_62[1 /*3*/] = 34;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 3;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 3;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 6;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_144.f_62[0 /*3*/].f_1 = 1;
			Local_144.f_62[0 /*3*/] = 30;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 1;
			Local_144.f_62[1 /*3*/] = 34;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 1;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 1;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 0;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 0;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_144.f_62[0 /*3*/].f_1 = 0;
			Local_144.f_62[0 /*3*/] = 30;
			Local_144.f_62[0 /*3*/].f_2 = iVar0;
			Local_144.f_62[1 /*3*/].f_1 = 0;
			Local_144.f_62[1 /*3*/] = 34;
			Local_144.f_62[1 /*3*/].f_2 = iVar0;
			Local_144.f_62[2 /*3*/].f_1 = 0;
			Local_144.f_62[2 /*3*/] = 86;
			Local_144.f_62[2 /*3*/].f_2 = iVar0;
			Local_144.f_62[3 /*3*/].f_1 = 0;
			Local_144.f_62[3 /*3*/] = 82;
			Local_144.f_62[3 /*3*/].f_2 = iVar0;
			Local_144.f_62[4 /*3*/].f_1 = 6;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 6;
			Local_144.f_62[5 /*3*/] = 54;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 6;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7E3F74F641EE6B27();
	Local_144.f_62[0 /*3*/].f_1 = 3;
	Local_144.f_62[0 /*3*/] = 32;
	Local_144.f_62[0 /*3*/].f_2 = iVar0;
	Local_144.f_62[1 /*3*/].f_1 = 3;
	Local_144.f_62[1 /*3*/] = 56;
	Local_144.f_62[1 /*3*/].f_2 = iVar0;
	Local_144.f_62[2 /*3*/].f_1 = 3;
	Local_144.f_62[2 /*3*/] = 60;
	Local_144.f_62[2 /*3*/].f_2 = iVar0;
	Local_144.f_62[3 /*3*/].f_1 = 3;
	Local_144.f_62[3 /*3*/] = 84;
	Local_144.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = unk_0xC5935DFB3F39785A(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_144.f_62[4 /*3*/].f_1 = 2;
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_144.f_62[4 /*3*/].f_1 = unk_0xC5935DFB3F39785A(4, 6);
			Local_144.f_62[4 /*3*/] = 58;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_144.f_62[4 /*3*/].f_1 = 1;
			Local_144.f_62[4 /*3*/] = 54;
			Local_144.f_62[4 /*3*/].f_2 = iVar0;
			Local_144.f_62[5 /*3*/].f_1 = 1;
			Local_144.f_62[5 /*3*/] = 58;
			Local_144.f_62[5 /*3*/].f_2 = iVar0;
			Local_144.f_62[6 /*3*/].f_1 = 1;
			Local_144.f_62[6 /*3*/] = 62;
			Local_144.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_144.f_62[iVar0 /*3*/] = -1;
		Local_144.f_62[iVar0 /*3*/].f_1 = -1;
		Local_144.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = unk_0x7E3F74F641EE6B27();
	Local_144.f_62[0 /*3*/] = 54;
	Local_144.f_62[0 /*3*/].f_2 = iVar1;
	Local_144.f_62[1 /*3*/] = 56;
	Local_144.f_62[1 /*3*/].f_2 = iVar1;
	Local_144.f_62[2 /*3*/] = 58;
	Local_144.f_62[2 /*3*/].f_2 = iVar1;
	Local_144.f_62[3 /*3*/] = 60;
	Local_144.f_62[3 /*3*/].f_2 = iVar1;
	Local_144.f_62[4 /*3*/] = 62;
	Local_144.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = unk_0xC5935DFB3F39785A(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_144.f_62[0 /*3*/].f_1 = 3;
			Local_144.f_62[1 /*3*/].f_1 = 3;
			Local_144.f_62[3 /*3*/].f_1 = 3;
			Local_144.f_62[4 /*3*/].f_1 = 3;
			break;
		
		case 1:
			Local_144.f_62[0 /*3*/].f_1 = 4;
			Local_144.f_62[1 /*3*/].f_1 = 4;
			Local_144.f_62[3 /*3*/].f_1 = 4;
			Local_144.f_62[4 /*3*/].f_1 = 4;
			break;
		
		case 2:
			Local_144.f_62[0 /*3*/].f_1 = 5;
			Local_144.f_62[1 /*3*/].f_1 = 5;
			Local_144.f_62[3 /*3*/].f_1 = 5;
			Local_144.f_62[4 /*3*/].f_1 = 5;
			break;
		
		case 3:
			Local_144.f_62[0 /*3*/].f_1 = 7;
			Local_144.f_62[1 /*3*/].f_1 = 7;
			Local_144.f_62[3 /*3*/].f_1 = 7;
			Local_144.f_62[4 /*3*/].f_1 = 7;
			break;
		
		case 4:
			Local_144.f_62[0 /*3*/].f_1 = 6;
			Local_144.f_62[1 /*3*/].f_1 = 6;
			Local_144.f_62[3 /*3*/].f_1 = 6;
			Local_144.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = unk_0xC5935DFB3F39785A(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_144.f_62[2 /*3*/].f_1 = -1;
			Local_144.f_62[2 /*3*/] = -1;
			Local_144.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		
		case 1:
			Local_144.f_62[2 /*3*/].f_1 = 2;
			break;
		
		case 2:
			Local_144.f_62[2 /*3*/].f_1 = 0;
			break;
		
		case 3:
			Local_144.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_82()
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar3 = func_83(iVar1, iVar2);
			if (Local_144[iVar1 /*5*/][iVar2] != iVar3)
			{
				Local_144[iVar1 /*5*/][iVar2] = iVar3;
			}
			if (iVar3 != -1)
			{
				uVar0[iVar3]++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iLocal_180[iVar1] != uVar0[iVar1])
		{
			iLocal_180[iVar1] = uVar0[iVar1];
		}
		iVar1++;
	}
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)) && !Local_183[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_84(&(Local_144.f_85[Local_181[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_181[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_84(var uParam0, int iParam1)
{
	return BitTest((*uParam0)[func_86(iParam1)], func_85(iParam1));
}

int func_85(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_86(iParam0) * 31);
}

int func_86(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_87(int iParam0, int iParam1)
{
	return func_74((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_88()
{
	if (unk_0x7E3F74F641EE6B27() < Local_144.f_146)
	{
		return;
	}
	Local_144.f_84 = Local_144.f_146;
	Local_144.f_161 = Local_144.f_146;
	func_77(1, 0);
	func_66(4);
}

void func_89()
{
	func_90();
	func_66(3);
}

void func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	Local_144.f_162 = 0;
	Local_144.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_144[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_180[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_144.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_143.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_91(iVar0, func_94(iVar0), func_93(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_144.f_62[iVar0 /*3*/] = -1;
		Local_144.f_62[iVar0 /*3*/].f_1 = -1;
		Local_144.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_144.f_148[iVar0 /*4*/] = -2147483647;
		Local_144.f_148[iVar0 /*4*/].f_1 = -1;
		Local_144.f_148[iVar0 /*4*/].f_2 = -1;
		Local_144.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_144.f_146 = system::ceil((system::to_float(unk_0x7E3F74F641EE6B27() + 5000) / 1000f)) * 1000;
	func_82();
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_87(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_92(&(Local_144.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_92(&(Local_144.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	func_92(&(Local_144.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	func_92(&(Local_144.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	func_92(&(Local_144.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	func_92(&(Local_144.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_92(&(Local_144.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_92(&(Local_144.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_144[iParam1 /*5*/][iParam2] = iParam0;
}

void func_92(var uParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0[func_86(iParam1)], func_85(iParam1));
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_95()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)) && !Local_183[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_181[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_181[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_100(&(Local_143.f_314)))
				{
					func_99(&(Local_143.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_100(&(Local_143.f_314)))
				{
					func_99(&(Local_143.f_314));
				}
				return;
			}
			if (!func_100(&(Local_143.f_314)))
			{
				func_98(&(Local_143.f_314), 0, 0);
				return;
			}
			else if (!func_96(&(Local_143.f_314), 1500, 0))
			{
				return;
			}
			Local_144.f_138 = iVar1 + 1;
			func_66(2);
		}

int func_96(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_97(uParam0, bParam2, 0);
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

void func_97(var uParam0, bool bParam1, bool bParam2)
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

void func_98(var uParam0, bool bParam1, bool bParam2)
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

void func_99(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_100(var uParam0)
{
	return uParam0->f_1;
}

void func_101()
{
	func_102();
	func_66(1);
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar3;
	int iVar4;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	unk_0x3B9F35917EDE3ACB(unk_0x7E3F74F641EE6B27());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, 24);
		iVar3 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar3;
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_144.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar4];
			iVar4++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_103()
{
	switch (Local_143.f_140)
	{
		case 0:
			func_341();
			break;
		
		case 1:
			func_338();
			break;
		
		case 2:
			func_337();
			break;
		
		case 3:
			func_332();
			break;
		
		case 4:
			func_331();
			break;
		
		case 5:
			func_325();
			break;
		
		case 6:
			func_323();
			break;
		
		case 7:
			func_198();
			break;
		
		case 8:
			func_153();
			break;
		
		case 9:
			func_132();
			break;
		
		case 10:
			func_104();
			break;
		
		case 11:
			func_11();
			break;
		
		case 12:
			break;
	}
}

void func_104()
{
	func_128();
	func_105();
}

void func_105()
{
	var uVar0[4];
	float fVar1;
	int iVar2;
	int iVar3;
	
	func_127();
	func_126("MPArcadeCabinetGridHUD", "lbd", 0,5f, 0,5f, 0,6604167f, 0,9481481f, 0f, Local_143.f_107.f_17);
	unk_0xBFE94E91C83D8794(1f, 1f);
	unk_0x5A18938160AE52D0(0, 0, 0, 255);
	unk_0xEAF65721ACB2FDFB(1);
	unk_0x8413CD3BCEEAD8DC(7);
	unk_0xEAEB6E7D3FAEBD5B("SCGW_LBD_T");
	unk_0x25DD447A6EB3A86F(func_125((0,5f + 0,001041667f)), (0,15f + 0,003703704f), 0);
	unk_0xBFE94E91C83D8794(1f, 1f);
	unk_0x5A18938160AE52D0(255, 255, 255, 255);
	unk_0xEAF65721ACB2FDFB(1);
	unk_0x8413CD3BCEEAD8DC(7);
	unk_0xEAEB6E7D3FAEBD5B("SCGW_LBD_T");
	unk_0x25DD447A6EB3A86F(func_125(0,5f), 0,15f, 0);
	fVar1 = 0,22f;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		func_122(Local_144.f_165[iVar2 /*3*/], &uVar0);
		iVar3 = 255;
		if (Local_144.f_165[iVar2 /*3*/].f_2 == Local_143.f_178)
		{
			iVar3 = system::round(unk_0x1D5CD3EAAA7422B0((system::sin((system::to_float(unk_0x7E3F74F641EE6B27()) * 0,5f)) * 80f))) + 175;
		}
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(0, 0, 0, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125((0,37f + 0,001041667f)));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B(func_121(iVar2));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), (fVar1 + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(Local_143.f_107[uVar0[3] /*4*/], Local_143.f_107[uVar0[3] /*4*/].f_1, Local_143.f_107[uVar0[3] /*4*/].f_2, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125(0,37f));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B(func_121(iVar2));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), fVar1, 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(0, 0, 0, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125((0,4135417f + 0,001041667f)));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[0]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), (fVar1 + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(Local_143.f_107[uVar0[3] /*4*/], Local_143.f_107[uVar0[3] /*4*/].f_1, Local_143.f_107[uVar0[3] /*4*/].f_2, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125(0,4135417f));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[0]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), fVar1, 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(0, 0, 0, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125((0,4411458f + 0,001041667f)));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[1]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), (fVar1 + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(Local_143.f_107[uVar0[3] /*4*/], Local_143.f_107[uVar0[3] /*4*/].f_1, Local_143.f_107[uVar0[3] /*4*/].f_2, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125(0,4411458f));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[1]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), fVar1, 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(0, 0, 0, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125((0,46875f + 0,001041667f)));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[2]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), (fVar1 + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(Local_143.f_107[uVar0[3] /*4*/], Local_143.f_107[uVar0[3] /*4*/].f_1, Local_143.f_107[uVar0[3] /*4*/].f_2, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125(0,46875f));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(func_120(uVar0[2]));
		unk_0x25DD447A6EB3A86F(func_125(0,5f), fVar1, 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(0, 0, 0, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125((0,695f + 0,001041667f)));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("SCGW_PTS");
		unk_0x511D14ED2DA887E1(Local_144.f_165[iVar2 /*3*/].f_1);
		unk_0x25DD447A6EB3A86F(func_125(0,5f), (fVar1 + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(1f, 1f);
		unk_0x5A18938160AE52D0(Local_143.f_107[uVar0[3] /*4*/], Local_143.f_107[uVar0[3] /*4*/].f_1, Local_143.f_107[uVar0[3] /*4*/].f_2, iVar3);
		unk_0x16EC7160BEBE7A6F(1);
		unk_0xE05EB1EAE7CCDC59(func_125(0f), func_125(0,695f));
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("SCGW_PTS");
		unk_0x511D14ED2DA887E1(Local_144.f_165[iVar2 /*3*/].f_1);
		unk_0x25DD447A6EB3A86F(func_125(0,5f), fVar1, 0);
		fVar1 = (fVar1 + 0,06f);
		iVar2++;
	}
	func_107();
	func_106();
}

void func_106()
{
	func_126("MPArcadeCabinetGridTiles", "facade", 0,5f, 0,5f, 1f, 1f, 0f, Local_143.f_107.f_17);
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_108(iVar0);
		iVar0++;
	}
}

void func_108(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	
	if (!Local_184[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_119() };
	Var3.f_3 = 255;
	if (Local_184[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { func_118() };
	if (!Local_184[iParam0 /*17*/].f_2)
	{
		if (Local_184[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_184[iParam0 /*17*/].f_4) % (IntToFloat(Local_184[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_184[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_184[iParam0 /*17*/].f_7 > 0)
		{
			Local_184[iParam0 /*17*/].f_4 = unk_0xC5935DFB3F39785A(0, Local_184[iParam0 /*17*/].f_7);
			Local_184[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_184[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_184[iParam0 /*17*/].f_4 = Local_184[iParam0 /*17*/].f_6;
		Local_184[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_184[iParam0 /*17*/].f_1)
	{
		fVar4 = (system::to_float(Local_184[iParam0 /*17*/].f_5) / system::to_float(Local_184[iParam0 /*17*/].f_8));
		Var3.f_0 = func_117(Local_184[iParam0 /*17*/].f_9, Local_184[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = func_117(Local_184[iParam0 /*17*/].f_9.f_1, Local_184[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = func_117(Local_184[iParam0 /*17*/].f_9.f_2, Local_184[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = func_117(Local_184[iParam0 /*17*/].f_9.f_3, Local_184[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_184[iParam0 /*17*/].f_9 };
	}
	if (unk_0xD6F9DEE4765092A9(func_116(iParam0)))
	{
		func_113(Var1, Var0, Var3);
	}
	else
	{
		func_109(func_112(iParam0), func_116(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_184[iParam0 /*17*/].f_2 && Local_184[iParam0 /*17*/].f_4 > 0)
	{
		if (unk_0xD6F9DEE4765092A9(func_116(0)))
		{
			func_113(Var2, Var0, Var3);
		}
		else
		{
			func_109(func_112(iParam0), func_116(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_184[iParam0 /*17*/].f_5 = (Local_184[iParam0 /*17*/].f_5 - system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
	if (Local_184[iParam0 /*17*/].f_5 < 0)
	{
		Local_184[iParam0 /*17*/].f_5 = (Local_184[iParam0 /*17*/].f_5 + Local_184[iParam0 /*17*/].f_8);
	}
	Local_184[iParam0 /*17*/].f_4 = (Local_184[iParam0 /*17*/].f_4 - system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
	if (Local_184[iParam0 /*17*/].f_4 < 0)
	{
		Local_184[iParam0 /*17*/].f_4 = 0;
	}
}

void func_109(var uParam0, var uParam1, struct<2> Param2, struct<2> Param3, float fParam4, struct<4> Param5)
{
	Param2 = { func_110(Param2) };
	Param3 = { func_110(Param3) };
	func_126(uParam0, uParam1, Param2.f_0, Param2.f_1, Param3.f_0, Param3.f_1, fParam4, Param5);
}

struct<2> func_110(struct<2> Param0)
{
	return func_111((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_111(float fParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_113(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_110(Param0) };
	Param1 = { func_110(Param1) };
	func_114(Param0, Param1, Param2);
}

void func_114(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_115(Param0) };
	Param1.f_0 = (Param1.f_0 * fLocal_139);
	unk_0x81645EE95A114FAE(Param0.f_0, Param0.f_1, Param1.f_0, Param1.f_1, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, 0);
}

struct<2> func_115(struct<2> Param0)
{
	Param0.f_0 = func_125(Param0.f_0);
	return Param0;
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_117(int iParam0, int iParam1, float fParam2)
{
	return system::round((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_118()
{
	return func_111((1920f / 2f), (1080f / 2f));
}

struct<2> func_119()
{
	return func_111(1920f, 1080f);
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

char* func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_122(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_123(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(iParam2, 0);
	return (system::shift_right(iParam0, (iParam1 * iParam2)) && uVar0);
}

var func_124(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

float func_125(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0,5f - ((0,5f - fParam0) / fLocal_138));
	return fParam0;
}

void func_126(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	int iVar0;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	iVar0 = system::round((fParam3 * IntToFloat(iLocal_141)));
	fParam3 = (system::to_float(iVar0) * (1f / IntToFloat(iLocal_141)));
	iVar0 = system::round(((fParam5 * IntToFloat(iLocal_141)) / 4f)) * 4;
	fParam5 = (system::to_float(iVar0) * (1f / IntToFloat(iLocal_141)));
	unk_0xC54B91005A54695F(sParam0, sParam1, func_125(fParam2), fParam3, (fParam4 * fLocal_139), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

void func_127()
{
	func_114(func_111(0,5f, 0,5f), func_111(1f, 1f), Local_143.f_107.f_25);
}

void func_128()
{
	char cVar0[16];
	
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), false);
	StringCopy(&cVar0, "SC_H_LBD_3", 16);
	if (unk_0xAE231F549813BBDF(2))
	{
		StringConCat(&cVar0, "PC", 16);
	}
	if (func_131(&cVar0))
	{
		return;
	}
	func_16();
	func_129(&cVar0);
}

void func_129(char[4] cParam0)
{
	Local_143.f_442 = unk_0x70E57E9927B6BA58(cParam0);
	func_130(cParam0);
}

void func_130(var uParam0)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

int func_131(char[4] cParam0)
{
	if (Local_143.f_442 == unk_0x70E57E9927B6BA58(cParam0))
	{
		return 1;
	}
	return 0;
}

void func_132()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[0];
	int iVar6;
	
	if (!func_150())
	{
		func_11();
	}
	func_140();
	func_139();
	if (Global_262145.f_34984)
	{
		func_15(10);
		Local_143.f_436 = 0;
	}
	if (unk_0x3D1C2138A70E7348(Local_143.f_436))
	{
		if (unk_0x11A87C58414E6C46(Local_143.f_436))
		{
			return;
		}
		if (unk_0x7A6F7DFA98599242(Local_143.f_436))
		{
			func_137();
			func_15(10);
			func_136("Frontend_Change_Screen");
			Local_143.f_436 = 0;
		}
		else
		{
			func_136("Frontend_Change_Letter");
			Local_143.f_432 = 0;
			func_122(0, &iVar0);
			iVar0[3] = Local_181[Local_143.f_178 /*9*/].f_6;
			Local_181[Local_143.f_178 /*9*/].f_7 = func_134(&iVar0);
			Local_143.f_436 = 0;
		}
		return;
	}
	iVar1 = 227;
	iVar2 = 226;
	iVar3 = 191;
	iVar4 = 194;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar3 = 237;
		iVar4 = 238;
		iVar1 = 188;
		iVar2 = 187;
	}
	if (unk_0xDEE3EFEA31A1F555(2, iVar3))
	{
		Local_143.f_432++;
		if (Local_143.f_432 == 3)
		{
			func_122(Local_181[Local_143.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar5, func_120(iVar0[0]), 4);
			StringConCat(&cVar5, func_120(iVar0[1]), 4);
			StringConCat(&cVar5, func_120(iVar0[2]), 4);
			if (unk_0x9586B50628529A63(&cVar5, &(Local_143.f_436)))
			{
				func_136("Frontend_Entered_Score");
			}
		}
		else if (func_133(Local_143.f_178) == 99)
		{
			func_136("Frontend_Change_Screen");
			func_15(10);
		}
		return;
	}
	if (func_133(Local_143.f_178) == 99)
	{
		return;
	}
	if (unk_0xDEE3EFEA31A1F555(2, iVar4))
	{
		if (Local_143.f_432 > 0)
		{
			Local_143.f_432 = (Local_143.f_432 - 1);
		}
		return;
	}
	iVar6 = 0;
	if (unk_0xDEE3EFEA31A1F555(2, iVar1))
	{
		iVar6 = 1;
	}
	else if (unk_0xDEE3EFEA31A1F555(2, iVar2))
	{
		iVar6 = -1;
	}
	if (iVar6 == 0)
	{
		return;
	}
	func_136("Frontend_Change_Letter");
	func_122(Local_181[Local_143.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_143.f_432] = (iVar0[Local_143.f_432] + iVar6);
	if (iVar0[Local_143.f_432] >= 36)
	{
		iVar0[Local_143.f_432] = 0;
	}
	else if (iVar0[Local_143.f_432] < 0)
	{
		iVar0[Local_143.f_432] = 35;
	}
	Local_181[Local_143.f_178 /*9*/].f_7 = func_134(&iVar0);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_144.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_134(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_135(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_135(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_124(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || system::shift_left(iParam3, (iParam1 * iParam2)));
}

void func_136(char* sParam0)
{
	unk_0xBF3D28CA44F3BE2D(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", 0);
}

void func_137()
{
	struct<2> Var0;
	int iVar1;
	
	Var0.f_0 = 296141736;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	iVar1 = func_138(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 3, iVar1, Var0.f_0);
	}
}

var func_138(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			iVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (func_64(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_139()
{
	char cVar0[16];
	
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), false);
	if (func_133(Local_143.f_178) == 99)
	{
		StringCopy(&cVar0, "SC_H_LBD_2", 16);
	}
	else if (Local_143.f_432 == 2)
	{
		StringCopy(&cVar0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&cVar0, "SC_H_LBD_0", 16);
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		StringConCat(&cVar0, "PC", 16);
	}
	if (func_131(&cVar0))
	{
		return;
	}
	func_16();
	func_129(&cVar0);
}

void func_140()
{
	var uVar0[4];
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	
	func_127();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		func_142(iVar1, 1);
		if (Local_143.f_149[iVar1] == -1)
		{
		}
		else
		{
			Var2 = { func_141(iVar1) };
			iVar3 = func_133(Local_143.f_149[iVar1]);
			unk_0xBFE94E91C83D8794(1,1f, 1,1f);
			unk_0x5A18938160AE52D0(0, 0, 0, 255);
			unk_0xEAF65721ACB2FDFB(1);
			unk_0x8413CD3BCEEAD8DC(7);
			unk_0xEAEB6E7D3FAEBD5B(func_121(iVar3));
			unk_0x25DD447A6EB3A86F(func_125((Var2.f_0 + 0,001041667f)), (0,205f + 0,003703704f), 0);
			unk_0xBFE94E91C83D8794(1,1f, 1,1f);
			unk_0x5A18938160AE52D0(Local_143.f_107[iVar1 /*4*/], Local_143.f_107[iVar1 /*4*/].f_1, Local_143.f_107[iVar1 /*4*/].f_2, 255);
			unk_0xEAF65721ACB2FDFB(1);
			unk_0x8413CD3BCEEAD8DC(7);
			unk_0xEAEB6E7D3FAEBD5B(func_121(iVar3));
			unk_0x25DD447A6EB3A86F(func_125(Var2.f_0), 0,205f, 0);
			iVar4 = Local_181[Local_143.f_149[iVar1] /*9*/].f_8;
			unk_0xBFE94E91C83D8794(0,75f, 0,75f);
			unk_0x5A18938160AE52D0(0, 0, 0, 255);
			unk_0xEAF65721ACB2FDFB(1);
			unk_0x8413CD3BCEEAD8DC(7);
			unk_0xEAEB6E7D3FAEBD5B("SCGW_PTS");
			unk_0x511D14ED2DA887E1(iVar4);
			unk_0x25DD447A6EB3A86F(func_125((Var2.f_0 + 0,001041667f)), (0,26f + 0,003703704f), 0);
			unk_0xBFE94E91C83D8794(0,75f, 0,75f);
			unk_0x5A18938160AE52D0(Local_143.f_107[iVar1 /*4*/], Local_143.f_107[iVar1 /*4*/].f_1, Local_143.f_107[iVar1 /*4*/].f_2, 255);
			unk_0xEAF65721ACB2FDFB(1);
			unk_0x8413CD3BCEEAD8DC(7);
			unk_0xEAEB6E7D3FAEBD5B("SCGW_PTS");
			unk_0x511D14ED2DA887E1(iVar4);
			unk_0x25DD447A6EB3A86F(func_125(Var2.f_0), 0,26f, 0);
			if (Local_143.f_149[iVar1] != Local_143.f_178)
			{
			}
			else if (iVar3 >= 10)
			{
			}
			else
			{
				func_122(Local_181[Local_143.f_149[iVar1] /*9*/].f_7, &uVar0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				unk_0x5A18938160AE52D0(0, 0, 0, 255);
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[0]));
				unk_0x25DD447A6EB3A86F(func_125(((Var2.f_0 - 0,025f) + 0,001041667f)), (0,875f + 0,003703704f), 0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				if (Local_143.f_432 == 0)
				{
					unk_0x5A18938160AE52D0(Local_143.f_107[iVar1 /*4*/], Local_143.f_107[iVar1 /*4*/].f_1, Local_143.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					unk_0x5A18938160AE52D0(255, 255, 255, 255);
				}
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[0]));
				unk_0x25DD447A6EB3A86F(func_125((Var2.f_0 - 0,025f)), 0,875f, 0);
				func_122(Local_181[Local_143.f_149[iVar1] /*9*/].f_7, &uVar0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				unk_0x5A18938160AE52D0(0, 0, 0, 255);
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[1]));
				unk_0x25DD447A6EB3A86F(func_125((Var2.f_0 + 0,001041667f)), (0,875f + 0,003703704f), 0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				if (Local_143.f_432 == 1)
				{
					unk_0x5A18938160AE52D0(Local_143.f_107[iVar1 /*4*/], Local_143.f_107[iVar1 /*4*/].f_1, Local_143.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					unk_0x5A18938160AE52D0(255, 255, 255, 255);
				}
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[1]));
				unk_0x25DD447A6EB3A86F(func_125(Var2.f_0), 0,875f, 0);
				func_122(Local_181[Local_143.f_149[iVar1] /*9*/].f_7, &uVar0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				unk_0x5A18938160AE52D0(0, 0, 0, 255);
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[2]));
				unk_0x25DD447A6EB3A86F(func_125(((Var2.f_0 + 0,025f) + 0,001041667f)), (0,875f + 0,003703704f), 0);
				unk_0xBFE94E91C83D8794(0,95f, 0,95f);
				if (Local_143.f_432 == 2)
				{
					unk_0x5A18938160AE52D0(Local_143.f_107[iVar1 /*4*/], Local_143.f_107[iVar1 /*4*/].f_1, Local_143.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					unk_0x5A18938160AE52D0(255, 255, 255, 255);
				}
				unk_0xEAF65721ACB2FDFB(1);
				unk_0x8413CD3BCEEAD8DC(7);
				unk_0xEAEB6E7D3FAEBD5B("STRING");
				unk_0x60D332F23943B34F(func_120(uVar0[2]));
				unk_0x25DD447A6EB3A86F(func_125((Var2.f_0 + 0,025f)), 0,875f, 0);
			}
		}
		iVar1++;
	}
	func_107();
	func_106();
}

struct<2> func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,2552083f, 0,4564815f);
		
		case 1:
			return func_111(0,4182292f, 0,4564815f);
		
		case 2:
			return func_111(0,5817708f, 0,4564815f);
		
		case 3:
			return func_111(0,7447917f, 0,4564815f);
		
		default:
	}
	return func_111(0,5f, 0,5f);
}

void func_142(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<4> Var2;
	struct<2> Var3;
	char cVar4[16];
	float fVar5;
	struct<4> Var6;
	
	Var0 = { func_141(iParam0) };
	Var1 = { func_149() };
	func_126(func_148(iParam0), func_147(iParam0), Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1, 0f, Local_143.f_107.f_17);
	if (Local_143.f_149[iParam0] == Local_143.f_178)
	{
		Var2 = { Local_143.f_107[iParam0 /*4*/] };
		if (Local_181[Local_143.f_178 /*9*/] != 1)
		{
			Var2.f_3 = system::round(unk_0xD1AA84345B760931((system::to_float(unk_0x1DD05E817C89C737()) * 0,25f))) * 255;
		}
		Var3 = { func_146(iParam0) };
		func_126("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var3.f_0, Var3.f_1, 0,1625f, 0,05185185f, 0f, Var2);
	}
	if (Local_143.f_149[iParam0] != -1)
	{
		unk_0xBFE94E91C83D8794(0,5f, 0,5f);
		unk_0x5A18938160AE52D0(Local_143.f_107[iParam0 /*4*/], Local_143.f_107[iParam0 /*4*/].f_1, Local_143.f_107[iParam0 /*4*/].f_2, 255);
		unk_0xEAF65721ACB2FDFB(1);
		unk_0x8413CD3BCEEAD8DC(4);
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		if (!func_145(iParam0))
		{
			unk_0x60D332F23943B34F(unk_0xBD6CA019F46AB947(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(Local_143.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar4, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar4, "Green", 16);
					break;
				
				case 1:
					StringConCat(&cVar4, "Purple", 16);
					break;
				
				case 2:
					StringConCat(&cVar4, "Yellow", 16);
					break;
				
				case 3:
					StringConCat(&cVar4, "Blue", 16);
					break;
			}
			unk_0x60D332F23943B34F(&cVar4);
		}
		unk_0x25DD447A6EB3A86F(func_125(Var0.f_0), 0,845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_143.f_149[iParam0] != -1 && Local_181[Local_143.f_149[iParam0] /*9*/] == 1)
	{
		unk_0xBFE94E91C83D8794(0,95f, 0,95f);
		unk_0x5A18938160AE52D0(0, 0, 0, 255);
		unk_0xEAF65721ACB2FDFB(1);
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("SCGW_R");
		unk_0x25DD447A6EB3A86F(func_125((Var0.f_0 + 0,001041667f)), (0,23f + 0,003703704f), 0);
		unk_0xBFE94E91C83D8794(0,95f, 0,95f);
		unk_0x5A18938160AE52D0(Local_143.f_107[iParam0 /*4*/], Local_143.f_107[iParam0 /*4*/].f_1, Local_143.f_107[iParam0 /*4*/].f_2, 255);
		unk_0xEAF65721ACB2FDFB(1);
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("SCGW_R");
		unk_0x25DD447A6EB3A86F(func_125(Var0.f_0), 0,23f, 0);
	}
	if (Local_143.f_154[iParam0] != -2147483647 && (unk_0x7E3F74F641EE6B27() - Local_143.f_154[iParam0]) <= 1000)
	{
		fVar5 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_143.f_154[iParam0])) / 1000f);
		Var6 = { Local_143.f_107[iParam0 /*4*/] };
		Var6.f_3 = system::round(func_143(125f, 0f, fVar5, 1));
		Var1.f_1 = (Var1.f_1 - 0,05f);
		Var0.f_1 = (Var0.f_1 + (0,05f / 2f));
		func_114(Var0, Var1, Var6);
	}
}

float func_143(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = system::pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - system::pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-system::cos(func_144((3,141593f * fParam2))) / 2f) + 0,5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (system::pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_143(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_143(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_144(float fParam0)
{
	return (fParam0 * 57,29578f);
}

int func_145(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_183[iVar0 /*37*/].f_25)
		{
			if (Local_183[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,2552083f, 0,1435185f);
		
		case 1:
			return func_111(0,4182292f, 0,1435185f);
		
		case 2:
			return func_111(0,5817708f, 0,1435185f);
		
		case 3:
			return func_111(0,7447917f, 0,1435185f);
		
		default:
	}
	return func_111(0,5f, 0,5f);
}

char* func_147(int iParam0)
{
	if (Local_143.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_148(int iParam0)
{
	if (Local_143.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_149()
{
	return func_111(0,1625f, 0,7777778f);
}

int func_150()
{
	if (unk_0x62B038F95CEA3FE9() == 0)
	{
		return 0;
	}
	if (func_152())
	{
		if (unk_0x97DD063A9C6137F8(1))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	else if (func_151())
	{
		if (unk_0x8FF2665359043205(0, -3, 1))
		{
			return 1;
		}
	}
	else if (unk_0x761778199FE1211C())
	{
		if (unk_0x9A9677D7F3615A86(0, -1))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_151()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

bool func_152()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_153()
{
	bool bVar0;
	
	bVar0 = func_67();
	if (bVar0)
	{
		func_196();
	}
	else
	{
		func_178();
	}
	func_175();
	if (Local_144.f_145 >= 6)
	{
		func_174(&(Local_143.f_428));
		if (!unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_menus_scene"))
		{
			unk_0xCAC4020CCF361AC8("dlc_vw_am_tw_in_menus_scene");
		}
		if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
		{
			unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			unk_0xB43467C43086A6A1("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_18(func_19(0));
		func_15(9);
		return;
	}
	if (Local_144.f_145 == 2 || Local_144.f_145 == 3)
	{
		func_174(&(Local_143.f_428));
		func_15(5);
		return;
	}
	func_173("Ambience", &(Local_143.f_428), func_111(-1f, -1f), 0);
	if (Global_1928430 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_144.f_131[(Local_144.f_137 - 1)] != -1)
		{
			if (Local_144.f_131[(Local_144.f_137 - 1)] == Local_143.f_178)
			{
				func_172(7);
				func_168("Win", Local_143.f_178, &(Local_143.f_204[Local_143.f_178 /*19*/].f_6));
			}
			else
			{
				func_172(8);
				func_168("Lose_Game", Local_143.f_178, &(Local_143.f_204[Local_143.f_178 /*19*/].f_6));
			}
			func_167((16 + Local_181[Local_144.f_131[(Local_144.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_144.f_130 != -1)
	{
		if (Local_144.f_130 == Local_143.f_178)
		{
			func_162();
			func_172(9);
			func_168("Win", Local_143.f_178, &(Local_143.f_204[Local_143.f_178 /*19*/].f_6));
		}
		else
		{
			func_172(10);
			func_168("Lose_Game", Local_143.f_178, &(Local_143.f_204[Local_143.f_178 /*19*/].f_6));
		}
		func_167((16 + Local_181[Local_144.f_130 /*9*/].f_6));
	}
	if ((!BitTest(Local_143.f_141, 2) && Local_144.f_131[(Local_144.f_137 - 1)] != -1) && Local_144.f_131[(Local_144.f_137 - 1)] == Local_143.f_178)
	{
		if (!func_161(247, -1))
		{
			func_158(247, 1, -1, 1);
			func_156(12, "CLO_VWM_D_1_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_155(27193, 1, -1);
			func_154("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_154(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x4C705AAF75363287())
	{
		func_16();
	}
	Local_143.f_418 = (unk_0x7E3F74F641EE6B27() + iParam1);
	Local_143.f_419 = sParam0;
	Local_143.f_420 = -1;
	Local_143.f_421 = iParam2;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_156(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_157(&Global_1677354);
	Global_1677354[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1677354[iVar0 /*106*/].f_97 = iParam5;
	Global_1677354[iVar0 /*106*/].f_104 = iParam9;
	Global_1677354[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		StringCopy(&(Global_1677354[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_157(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_159(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
}

var func_159(var uParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_160(uParam1));
}

int func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
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

int func_161(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_159(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_162()
{
	int iVar0;
	
	switch (Local_181[Local_143.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = func_166(8355, -1) + 1;
			func_164(8355, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_26798)
			{
				func_155(27189, 1, -1);
				func_156(12, "CLO_VWM_D_1_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_163("SCGW_CH_0", Global_262145.f_26798, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_166(8356, -1) + 1;
			func_164(8356, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_26798)
			{
				func_155(27190, 1, -1);
				func_156(12, "CLO_VWM_D_1_4", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_163("SCGW_CH_1", Global_262145.f_26798, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_166(8357, -1) + 1;
			func_164(8357, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_26798)
			{
				func_155(27191, 1, -1);
				func_156(12, "CLO_VWM_D_1_5", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_163("SCGW_CH_2", Global_262145.f_26798, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_166(8358, -1) + 1;
			func_164(8358, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_26798)
			{
				func_155(27192, 1, -1);
				func_156(12, "CLO_VWM_D_1_2", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_163("SCGW_CH_3", Global_262145.f_26798, 7500, 1);
			}
			break;
	}
}

void func_163(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x4C705AAF75363287())
	{
		func_16();
	}
	Local_143.f_418 = (unk_0x7E3F74F641EE6B27() + iParam2);
	Local_143.f_420 = uParam1;
	Local_143.f_419 = sParam0;
	Local_143.f_421 = iParam3;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_165(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_165(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_160(uParam1));
}

int func_166(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_165(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_167(int iParam0)
{
	Global_1928430.f_1 = iParam0;
}

void func_168(char* sParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_170(Local_143.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = unk_0xCA369FBC0DE29517();
	}
	unk_0xBF3D28CA44F3BE2D(*uParam2, sParam0, func_169(Local_181[iParam1 /*9*/].f_6), 0);
	unk_0x3F002AA9562BF0BE(*uParam2, "Screen_Position", uVar0);
}

char* func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_170(float fParam0, var uParam1)
{
	return func_171(((fParam0 - 0,15625f) / 0,658333f), 0f, 1f);
}

float func_171(float fParam0, float fParam1, float fParam2)
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

void func_172(int iParam0)
{
	Global_1928430 = iParam0;
}

void func_173(char* sParam0, var uParam1, struct<2> Param2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_170(Param2);
	if (bParam3)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xCA369FBC0DE29517();
	}
	if (unk_0x9F0C06CFBACDD6A1(*uParam1))
	{
		unk_0xBF3D28CA44F3BE2D(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	}
	if (bParam3)
	{
		unk_0x3F002AA9562BF0BE(*uParam1, "Screen_Position", uVar0);
	}
}

void func_174(var uParam0)
{
	if (!unk_0x9F0C06CFBACDD6A1(*uParam0))
	{
		unk_0x8E4825CCACA34B58(*uParam0);
	}
	unk_0x394AFAC073E1F277(*uParam0);
	*uParam0 = -1;
}

void func_175()
{
	char cVar0[16];
	
	if (Local_143.f_418 == -2147483647)
	{
		return;
	}
	if (unk_0xD6F9DEE4765092A9(Local_143.f_419))
	{
		return;
	}
	if (unk_0x7E3F74F641EE6B27() > Local_143.f_418)
	{
		func_16();
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), false);
	StringCopy(&cVar0, Local_143.f_419, 16);
	if (Local_143.f_420 == -1)
	{
		if (unk_0xAE231F549813BBDF(2) && !Local_143.f_421)
		{
			StringConCat(&cVar0, "_PC", 16);
		}
	}
	else
	{
		if (func_131(&cVar0))
		{
			return;
		}
		func_176(&cVar0, Local_143.f_420);
		return;
	}
	if (func_131(&cVar0))
	{
		return;
	}
	func_129(&cVar0);
}

void func_176(char[4] cParam0, int iParam1)
{
	Local_143.f_442 = unk_0x70E57E9927B6BA58(cParam0);
	func_177(cParam0, iParam1, -1);
}

void func_177(var uParam0, int iParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
}

void func_178()
{
	func_127();
	func_192();
	func_186();
	func_184();
	func_179();
	func_107();
	func_106();
}

void func_179()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	
	func_114(func_111(0,5f, (0,069444f + 0,0356482f)), func_111(0,658333f, 0,071296f), Local_143.f_107.f_21);
	func_114(func_111(0,5f, (0,069444f + 0,072685f)), func_111(0,658333f, 0,002778f), Local_143.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_181(iVar0, Local_143.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((system::to_float((Local_144.f_138 - 1)) / 2f) * -0,01354133f);
	iVar0 = 0;
	while (iVar0 <= (Local_144.f_138 - 1))
	{
		func_126("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0,5f) + (0,01354133f * IntToFloat(iVar0))), (((0,069444f + -0,00162963f) + (0,02407426f / 2f)) + 0,00462963f), 0,01354133f, 0,02407426f, 0f, func_180(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_144.f_145 == 4 && !Local_144.f_162)
	{
		iVar2 = ((Local_144.f_146 + 120000) - unk_0x7E3F74F641EE6B27());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	unk_0xBFE94E91C83D8794(1f, 1f);
	if (iVar2 < 10000 && Local_144.f_145 == 4)
	{
		if (!BitTest(Local_143.f_429, 5))
		{
			func_136("Frontend_Countdown_10s");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 5);
		}
		iVar5 = system::round((system::sin((system::to_float(unk_0x7E3F74F641EE6B27()) * (0,5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		unk_0x5A18938160AE52D0(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_144.f_145 == 4)
	{
		unk_0x5A18938160AE52D0(255, 0, 0, 255);
	}
	else
	{
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
	}
	unk_0x2B50C29142312934();
	unk_0xEAF65721ACB2FDFB(1);
	unk_0x8413CD3BCEEAD8DC(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	unk_0xEAEB6E7D3FAEBD5B(&cVar6);
	unk_0x511D14ED2DA887E1(iVar3);
	unk_0x511D14ED2DA887E1(iVar4);
	unk_0x25DD447A6EB3A86F(0,5f, (0,083f + 0,00462963f), 0);
}

struct<4> func_180(int iParam0)
{
	if (Local_144.f_131[iParam0] == -1)
	{
		return Local_143.f_107.f_17;
	}
	return Local_143.f_107[Local_181[Local_144.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	var uVar3;
	int iVar4;
	
	fVar1 = func_183(iParam0);
	if (iParam1 == -1)
	{
		func_126("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_143.f_107[iParam0 /*4*/]);
	}
	else if (func_71(iParam1))
	{
		func_126("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_143.f_107.f_29);
	}
	else
	{
		func_126("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_143.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_143.f_422[iParam0], 64);
	func_126("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0,033333f / 2f)), (0,069444f + 0,04166683f), 0,033333f, 0,059259f, 0f, Local_143.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iParam1)))
	{
		uVar3 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iParam1));
		if (unk_0x51DC6104DE62EE22(uVar3))
		{
			func_126("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0,026563f) + (0,008333f / 2f)), ((0,069444f + 0,04722233f) + (0,014815f / 2f)), 0,008333f, 0,014815f, 0f, Local_143.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_183[iParam1 /*37*/].f_25)
	{
	}
	if (Local_181[iParam1 /*9*/] == 2)
	{
		iVar4 = (Local_143.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar4)
		{
			if (iVar0 >= Local_181[iParam1 /*9*/].f_2 && Local_143.f_140 == 7)
			{
				func_126("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0,035417f) + (0,00625f * IntToFloat(iVar0))) + (0,00625f / 2f)), ((0,069444f + 0,01203733f) + (0,059259f / 2f)), 0,00625f, 0,059259f, 0f, Local_143.f_107.f_29);
			}
			else
			{
				func_126("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0,035417f) + (0,00625f * IntToFloat(iVar0))) + (0,00625f / 2f)), ((0,069444f + 0,01203733f) + (0,059259f / 2f)), 0,00625f, 0,059259f, 0f, func_182(Local_143.f_107[iParam0 /*4*/], (system::to_float(iVar0) / 7f)));
			}
			iVar0++;
		}
		unk_0xBFE94E91C83D8794(1f, 1f);
		if (((iLocal_180[iParam0] == 0 && Local_144.f_145 == 4) && iParam0 == Local_181[Local_143.f_178 /*9*/].f_6) && system::sin((system::to_float(unk_0x1DD05E817C89C737()) * 0,5058f)) > 0,5f)
		{
			unk_0x5A18938160AE52D0(Local_143.f_107.f_29, Local_143.f_107.f_29.f_1, Local_143.f_107.f_29.f_2, Local_143.f_107.f_29.f_3);
		}
		else
		{
			unk_0x5A18938160AE52D0(Local_143.f_107[iParam0 /*4*/], Local_143.f_107[iParam0 /*4*/].f_1, Local_143.f_107[iParam0 /*4*/].f_2, Local_143.f_107[iParam0 /*4*/].f_3);
		}
		unk_0x2B50C29142312934();
		unk_0xEAF65721ACB2FDFB(1);
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B("SCGW_SCORE");
		unk_0x511D14ED2DA887E1(iLocal_180[iParam0]);
		unk_0x25DD447A6EB3A86F(func_125((fVar1 + 0,105f)), 0,083f, 0);
	}
}

struct<4> func_182(struct<4> Param0, float fParam1)
{
	Param0.f_0 = system::round(((IntToFloat((255 - Param0.f_0)) * fParam1) + IntToFloat(Param0.f_0)));
	Param0.f_1 = system::round(((IntToFloat((255 - Param0.f_1)) * fParam1) + IntToFloat(Param0.f_1)));
	Param0.f_2 = system::round(((IntToFloat((255 - Param0.f_2)) * fParam1) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,195313f;
		
		case 1:
			return 0,325521f;
		
		case 2:
			return 0,547396f;
		
		case 3:
			return 0,677604f;
		
		default:
	}
	return 0f;
}

void func_184()
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar3;
	char cVar4[64];
	struct<4> Var5;
	struct<8> Var6;
	
	if (Local_144.f_130 == -1)
	{
		return;
	}
	func_185(Local_143.f_107[Local_181[Local_144.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_111(0,5f, (0,5f + -0,005f)) };
	iVar3 = 255;
	StringCopy(&cVar4, "text_gang_", 64);
	StringConCat(&cVar4, Local_143.f_422[Local_181[Local_144.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar4, "_", 64);
	if (Local_143.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0,05f / IntToFloat(Local_143.f_415 + 1)));
		bVar1 = false;
		Local_143.f_415 = (Local_143.f_415 + Local_143.f_412);
	}
	else if (Local_143.f_415 < 12)
	{
		iVar3 = system::floor(((255f / 8f) * IntToFloat((8 - (Local_143.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_143.f_415 = (Local_143.f_415 + Local_143.f_412);
	}
	else if (Local_143.f_415 < 22)
	{
		if (((Local_143.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar4, "0", 64);
		}
		StringIntConCat(&cVar4, ((Local_143.f_415 + 1 - 4) - 8), 64);
		Local_143.f_415 = (Local_143.f_415 + Local_143.f_414);
	}
	else
	{
		StringIntConCat(&cVar4, 10, 64);
	}
	if (bVar0)
	{
		Var5 = { Local_143.f_107.f_17 };
		Var5.f_3 = iVar3;
		func_126("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0,3125f, 0,1481481f, 0f, Var5);
	}
	func_126("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0,3125f, 0,1481481f, 0f, Local_143.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var6, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var6, Local_143.f_422[Local_181[Local_144.f_130 /*9*/].f_6], 64);
		func_126(&Var6, &cVar4, Var2.f_0, (Var2.f_1 + 0,07407407f), 0,3125f, 0,1481481f, 0f, Local_143.f_107[Local_181[Local_144.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_185(struct<4> Param0, int iParam1)
{
	Param0.f_3 = iParam1;
	func_114(func_111(0,5f, 0,5f), func_111(1f, 1f), Param0);
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	struct<2> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	int iVar13;
	int iVar14;
	float fVar15;
	struct<2> Var16;
	struct<2> Var17;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_74(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_74(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_84(&(Local_144.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { func_189(func_190(func_191(iVar3), func_191(iVar4)), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0,05208333f, 0,02962963f, 0f, Local_143.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar6 = func_74(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_84(&(Local_144.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var7 = { func_189(func_190(func_191(iVar3), func_191(iVar6)), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var7.f_0, Var7.f_1, 0,05208333f, 0,02962963f, 90f, Local_143.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var12.f_3 = 255;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar13)) && !Local_183[iVar13 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar13 /*9*/].f_6 == -1)
		{
		}
		else if (Local_182[iVar13 /*16*/] == Local_182[iVar13 /*16*/].f_1)
		{
		}
		else
		{
			func_188(Local_182[iVar13 /*16*/], &iVar8, &iVar9);
			func_188(Local_182[iVar13 /*16*/].f_1, &iVar10, &iVar11);
			iVar14 = -1;
			Var12 = { Local_143.f_107[Local_181[iVar13 /*9*/].f_6 /*4*/] };
			fVar15 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_182[iVar13 /*16*/].f_2)) / system::to_float(func_187(iVar13)));
			if (fVar15 > 1,2f)
			{
			}
			else
			{
				Var12.f_3 = system::round((255f * func_143(0f, 1f, fVar15, 6)));
				if (iVar10 != iVar8)
				{
					if (iVar10 > iVar8)
					{
						iVar14 = Local_182[iVar13 /*16*/];
					}
					else
					{
						iVar14 = func_74((iVar8 - 1), iVar9);
					}
					if (func_84(&(Local_144.f_85[Local_181[iVar13 /*9*/].f_6 /*11*/][1 /*5*/]), iVar14))
					{
					}
					else
					{
						Var16 = { func_189(func_190(func_191(Local_182[iVar13 /*16*/].f_1), func_191(Local_182[iVar13 /*16*/])), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var16.f_0, Var16.f_1, 0,05208333f, 0,02962963f, 0f, Var12);
						Jump @804; //curOff = 660
						if (iVar11 != iVar9)
						{
							if (iVar11 > iVar9)
							{
								iVar14 = Local_182[iVar13 /*16*/];
							}
							else
							{
								iVar14 = func_74(iVar8, (iVar9 - 1));
							}
							if (func_84(&(Local_144.f_85[Local_181[iVar13 /*9*/].f_6 /*11*/][0 /*5*/]), iVar14))
							{
							}
							else
							{
								Var17 = { func_189(func_190(func_191(Local_182[iVar13 /*16*/].f_1), func_191(Local_182[iVar13 /*16*/])), 2f) };
								func_126("MPArcadeCabinetGrid", "player_trail", Var17.f_0, Var17.f_1, 0,05208333f, 0,02962963f, 90f, Var12);
							}
						}
					}
					iVar13++;
				}

int func_187(int iParam0)
{
	return system::round((700f * Local_181[iParam0 /*9*/].f_1));
}

void func_188(int iParam0, bool bParam1, bool bParam2)
{
	*bParam2 = system::floor((system::to_float(iParam0) / 13f));
	*bParam1 = (iParam0 - *bParam2 * 13);
}

struct<2> func_189(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam1);
	Var0.f_1 = (Param0.f_1 / fParam1);
	return Var0;
}

struct<2> func_190(struct<2> Param0, struct<2> Param1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param1.f_0);
	Var0.f_1 = (Param0.f_1 + Param1.f_1);
	return Var0;
}

struct<2> func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_188(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0,1380207f + (0,0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0,06851837f + (0,0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_192()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	struct<2> Var8;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar3 = Local_144.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar3, 64);
			Var4 = { func_195(iVar0, iVar1) };
			func_126("MPArcadeCabinetGridTiles", &Var2, Var4.f_0, Var4.f_1, 0,104167f, 0,185185f, 0f, Local_143.f_107.f_17);
			func_193(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var5 = { func_195(iVar0, -1) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var5.f_0, Var5.f_1, 0,104167f, 0,185185f, 0f, Local_143.f_107.f_17);
		Var6 = { func_195(iVar0, 4) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var6.f_0, Var6.f_1, 0,104167f, 0,185185f, 0f, Local_143.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var7 = { func_195(-1, iVar0) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var7.f_0, Var7.f_1, 0,104167f, 0,185185f, 0f, Local_143.f_107.f_17);
		Var8 = { func_195(6, iVar0) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var8.f_0, Var8.f_1, 0,104167f, 0,185185f, 0f, Local_143.f_107.f_17);
		iVar0++;
	}
}

void func_193(int iParam0, int iParam1)
{
	struct<8> Var0;
	int iVar1;
	struct<2> Var2;
	float fVar3;
	struct<2> Var4;
	
	if (Local_143.f_318[iParam0 /*5*/][iParam1] != Local_144[iParam0 /*5*/][iParam1])
	{
		Local_143.f_349[iParam0 /*5*/][iParam1] = Local_143.f_318[iParam0 /*5*/][iParam1];
		Local_143.f_380[iParam0 /*5*/][iParam1] = unk_0x7E3F74F641EE6B27();
		if (Local_143.f_140 == 7)
		{
			func_194("Steal_Area", func_195(iParam0, iParam1), Local_144[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_143.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar1 = Local_144[iParam0 /*5*/][iParam1];
		if ((unk_0x7E3F74F641EE6B27() - Local_143.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar3 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_143.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar3 > 1f)
			{
				fVar3 = 1f;
			}
			Var2.f_0 = func_143(0f, 0,070833f, fVar3, 2);
			Var2.f_1 = func_143(0f, 0,125926f, fVar3, 2);
		}
		else
		{
			Var2 = { func_111(0,070833f, 0,125926f) };
		}
	}
	else if ((unk_0x7E3F74F641EE6B27() - Local_143.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar1 = Local_143.f_349[iParam0 /*5*/][iParam1];
		fVar3 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_143.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar3 > 1f)
		{
			fVar3 = 1f;
		}
		Var2.f_0 = func_143(0,070833f, 0f, fVar3, 1);
		Var2.f_1 = func_143(0,125926f, 0f, fVar3, 1);
	}
	else
	{
		iVar1 = Local_144[iParam0 /*5*/][iParam1];
		Var2 = { func_111(0,070833f, 0,125926f) };
	}
	if (iVar1 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_143.f_422[iVar1], 64);
		Var4 = { func_195(iParam0, iParam1) };
		func_126("MPArcadeCabinetGrid", &Var0, Var4.f_0, Var4.f_1, Var2.f_0, Var2.f_1, 0f, Local_143.f_107[iVar1 /*4*/]);
	}
	Local_143.f_318[iParam0 /*5*/][iParam1] = Local_144[iParam0 /*5*/][iParam1];
}

void func_194(char* sParam0, struct<2> Param1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_170(Param1);
	iVar1 = unk_0xCA369FBC0DE29517();
	unk_0xBF3D28CA44F3BE2D(iVar1, sParam0, func_169(iParam2), 0);
	unk_0x3F002AA9562BF0BE(iVar1, "Screen_Position", uVar0);
	unk_0x394AFAC073E1F277(iVar1);
}

struct<2> func_195(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (0,1380207f + (0,1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0,06851837f + (0,1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_196()
{
	func_127();
	func_192();
	func_186();
	func_197();
	func_179();
	func_107();
	func_106();
}

void func_197()
{
	struct<2> Var0;
	char cVar1[64];
	struct<8> Var2;
	
	if (Local_144.f_137 == 0)
	{
		return;
	}
	if (Local_144.f_131[(Local_144.f_137 - 1)] == -1)
	{
		return;
	}
	func_185(Local_143.f_107[Local_181[Local_144.f_131[(Local_144.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { func_111(0,5f, (0,5f + -0,016f)) };
	func_126("MPArcadeCabinetGridHUD", "text_round_winner", 0,5f, (0,5f + -0,016f), 0,3125f, 0,2407407f, 0f, Local_143.f_107.f_17);
	StringCopy(&cVar1, "text_gang_", 64);
	StringConCat(&cVar1, Local_143.f_422[Local_181[Local_144.f_131[(Local_144.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar1, "_", 64);
	if (Local_143.f_415 < 10)
	{
		if (Local_143.f_415 + 1 < 10)
		{
			StringConCat(&cVar1, "0", 64);
		}
		StringIntConCat(&cVar1, Local_143.f_415 + 1, 64);
		Local_143.f_415 = (Local_143.f_415 + Local_143.f_414);
	}
	else
	{
		StringIntConCat(&cVar1, 10, 64);
	}
	StringCopy(&Var2, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var2, Local_143.f_422[Local_181[Local_144.f_131[(Local_144.f_137 - 1)] /*9*/].f_6], 64);
	func_126(&Var2, &cVar1, Var0.f_0, ((Var0.f_1 + 0,07407407f) + ((0,2407407f - 0,1481481f) / 2f)), 0,3125f, 0,1481481f, 0f, Local_143.f_107[Local_181[Local_144.f_131[(Local_144.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_198()
{
	int iVar0;
	int iVar1;
	
	func_173("Ambience", &(Local_143.f_428), func_111(-1f, -1f), 0);
	func_313();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_143.f_178 && Local_183[iVar0 /*37*/].f_25)
		{
			func_289(iVar0);
		}
		iVar0++;
	}
	func_285();
	func_277();
	func_270();
	func_265();
	func_245();
	func_241();
	func_235();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_143.f_178 && Local_183[iVar0 /*37*/].f_25)
		{
			func_228(iVar0);
		}
		iVar0++;
	}
	func_200();
	func_175();
	func_199();
	if (Local_143.f_434 != Local_143.f_433)
	{
		if (Local_143.f_434 == Local_143.f_178)
		{
			func_136("Frontend_Player_Loses_Lead");
		}
		else if (Local_143.f_433 == Local_143.f_178)
		{
			func_136("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_144.f_162 && !func_100(&(Local_143.f_316)))
	{
		func_18(func_19(3));
		func_98(&(Local_143.f_316), 0, 0);
	}
	if (Local_144.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_143.f_281[iVar1 /*7*/].f_5 != -1)
		{
			func_174(&(Local_143.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_16();
	Local_142.f_20 = (Local_142.f_20 + iLocal_180[Local_181[Local_143.f_178 /*9*/].f_6]);
	Local_143.f_415 = 0;
	Local_181[Local_143.f_178 /*9*/].f_8 = (Local_181[Local_143.f_178 /*9*/].f_8 + iLocal_180[Local_181[Local_143.f_178 /*9*/].f_6]);
	func_15(8);
	func_18(func_19(2));
}

void func_199()
{
	bool bVar0;
	
	bVar0 = true;
	if (Local_144.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_71(Local_143.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_180[Local_181[Local_143.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_143.f_430 == -1)
		{
			Local_143.f_430 = unk_0xCA369FBC0DE29517();
		}
		if (unk_0x9F0C06CFBACDD6A1(Local_143.f_430))
		{
			unk_0xBF3D28CA44F3BE2D(Local_143.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", 0);
		}
	}
	else if (Local_143.f_430 != -1 && !unk_0x9F0C06CFBACDD6A1(Local_143.f_430))
	{
		unk_0x8E4825CCACA34B58(Local_143.f_430);
		unk_0x394AFAC073E1F277(Local_143.f_430);
		Local_143.f_430 = -1;
	}
}

void func_200()
{
	func_127();
	func_192();
	func_186();
	func_226();
	func_224();
	func_218();
	func_211();
	func_210();
	func_206();
	func_204();
	func_203();
	func_202();
	func_201();
	func_179();
	func_107();
	func_106();
}

void func_201()
{
	struct<2> Var0;
	
	if (!Local_144.f_162)
	{
		return;
	}
	if (!func_100(&(Local_143.f_316)))
	{
		return;
	}
	if (func_96(&(Local_143.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_111(0,5f, (0,5f + -0,005f)) };
	func_126("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0,2666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
	func_126("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0,07407407f), 0,2666667f, 0,1148148f, 0f, Local_143.f_107.f_17);
}

void func_202()
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	
	if (Local_144.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_144.f_146 - unk_0x7E3F74F641EE6B27());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!BitTest(Local_143.f_429, 4))
		{
			func_136("Frontend_GO");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 4);
		}
		fVar1 = (system::to_float(iVar0) / (system::to_float(-1500) / 3,5f));
		func_185(Local_143.f_107.f_25, system::round(func_143(153f, 0f, fVar1, 1)));
		func_126("MPArcadeCabinetGridHUD", "text_fight", 0,5f, (0,5f + -0,005f), 0,2666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
		return;
	}
	func_185(Local_143.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!BitTest(Local_143.f_429, 3))
		{
			func_136("Frontend_3_2_1");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 3);
		}
		func_126("MPArcadeCabinetGridHUD", "text_1", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!BitTest(Local_143.f_429, 2))
		{
			func_136("Frontend_3_2_1");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 2);
		}
		func_126("MPArcadeCabinetGridHUD", "text_2", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!BitTest(Local_143.f_429, 1))
		{
			func_136("Frontend_3_2_1");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), true);
		}
		func_126("MPArcadeCabinetGridHUD", "text_3", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!BitTest(Local_143.f_429, 0))
		{
			func_136("Frontend_3_2_1");
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), false);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_144.f_137 + 1, 64);
		func_126("MPArcadeCabinetGridHUD", &Var2, 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_143.f_107.f_17);
		return;
	}
}

void func_203()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	bVar0 = false;
	if (Local_181[Local_143.f_178 /*9*/].f_3 + 1000 > unk_0x7E3F74F641EE6B27())
	{
		bVar0 = true;
	}
	if (func_71(Local_143.f_178))
	{
		iVar1 = (unk_0x7E3F74F641EE6B27() - Local_181[Local_143.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_181[Local_143.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0,237037f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_126("MPArcadeCabinetGrid", "damage_v", 0,176f, fVar3, 0,03333333f, 0,237037f, 180f, Local_143.f_107.f_29);
		func_126("MPArcadeCabinetGrid", "damage_v", (1f - 0,173f), fVar3, 0,03333333f, 0,237037f, 0f, Local_143.f_107.f_29);
		fVar3 = (fVar3 + 0,237037f);
		iVar2++;
	}
	fVar4 = (0,1333333f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_126("MPArcadeCabinetGrid", "damage_h", fVar4, 0,154f, 0,1333333f, 0,05925926f, 0f, Local_143.f_107.f_29);
		func_126("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0,09f), 0,1333333f, 0,05925926f, 180f, Local_143.f_107.f_29);
		fVar4 = (fVar4 + 0,1333333f);
		iVar2++;
	}
}

void func_204()
{
	int iVar0;
	int iVar1;
	
	if (func_71(Local_143.f_178))
	{
		if (BitTest(Local_143.f_429, 8))
		{
			unk_0x8744D2E3FC95740E(&(Local_143.f_429), 8);
		}
		iVar0 = (unk_0x7E3F74F641EE6B27() - Local_181[Local_143.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_181[Local_143.f_178 /*9*/] == 4)
		{
			func_205();
			if (!BitTest(Local_143.f_429, 7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 7);
				func_136("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!BitTest(Local_143.f_429, 6))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 6);
				func_136("Frontend_Text_Appear_Generic");
			}
			func_185(Local_143.f_107.f_25, 153);
			func_126("MPArcadeCabinetGridHUD", "text_ready", 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_143.f_107.f_17);
		}
	}
	else
	{
		if (BitTest(Local_143.f_429, 7))
		{
			unk_0x8744D2E3FC95740E(&(Local_143.f_429), 7);
		}
		if (BitTest(Local_143.f_429, 6))
		{
			unk_0x8744D2E3FC95740E(&(Local_143.f_429), 6);
		}
	}
	if (Local_181[Local_143.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (unk_0x7E3F74F641EE6B27() - Local_181[Local_143.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!BitTest(Local_143.f_429, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_429), 8);
			func_136("Frontend_GO");
		}
		func_126("MPArcadeCabinetGridHUD", "text_fight", 0,5f, (0,5f + -0,005f), 0,2666667f, 0,1481481f, 0f, Local_143.f_107.f_17);
	}
}

void func_205()
{
	func_185(Local_143.f_107.f_29, 102);
	func_126("MPArcadeCabinetGridHUD", "text_wasted", 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_143.f_107.f_29);
}

void func_206()
{
	struct<2> Var0;
	
	Var0 = { func_209(Local_143.f_438) };
	if (func_208(Local_143.f_439, Var0))
	{
		return;
	}
	func_126("MPArcadeCabinetGrid", func_207(Local_143.f_438), Local_143.f_439, Local_143.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_143.f_107.f_17);
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_208(struct<2> Param0, struct<2> Param1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0.f_0 - (Param1.f_0 / 2f));
	if (fVar0 > (1f - 0,15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param1.f_0 / 2f));
	if (fVar1 < 0,15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param1.f_1 / 2f));
	if (fVar2 > (1f - 0,06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param1.f_1 / 2f));
	if (fVar3 < (0f + 0,06944444f))
	{
		return 1;
	}
	return 0;
}

struct<2> func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,03333333f, 0,05925926f);
		
		case 1:
			return func_111(0,1145833f, 0,2037037f);
		
		case 2:
			return func_111(0,1145833f, 0,2037037f);
		
		default:
	}
	return func_111(0f, 0f);
}

void func_210()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_143.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_143.f_159[iVar0 /*3*/] + 1, 64);
			Var2 = { func_111((0,066667f / 2f), (0,118519f / 2f)) };
			func_126("MPArcadeCabinetGrid", &Var1, Local_143.f_159[iVar0 /*3*/].f_1, Local_143.f_159[iVar0 /*3*/].f_1.f_1, Var2.f_0, Var2.f_1, 0f, Local_143.f_107.f_17);
			Local_143.f_159[iVar0 /*3*/] = (Local_143.f_159[iVar0 /*3*/] + Local_143.f_412);
			if (Local_143.f_159[iVar0 /*3*/] >= 9)
			{
				Local_143.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_211()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_144.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (unk_0x7E3F74F641EE6B27() < Local_144.f_148[iVar0 /*4*/])
		{
			func_214(iVar0);
		}
		else
		{
			iVar1 = func_213(Local_144.f_148[iVar0 /*4*/].f_2);
			if (unk_0x7E3F74F641EE6B27() > (Local_144.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (unk_0x7E3F74F641EE6B27() < (Local_144.f_148[iVar0 /*4*/] + (iVar1 / 2)) && func_208(func_111(Local_143.f_281[iVar0 /*7*/], Local_143.f_281[iVar0 /*7*/].f_1), func_111(Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_214(iVar0);
				}
				fVar2 = func_212(Local_144.f_148[iVar0 /*4*/].f_2);
				Local_143.f_281[iVar0 /*7*/].f_4 = (Local_143.f_281[iVar0 /*7*/].f_4 + Local_143.f_414);
				if (Local_143.f_281[iVar0 /*7*/].f_4 >= Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_143.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_144.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_143.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				func_126("MPArcadeCabinetGrid", &Var3, Local_143.f_281[iVar0 /*7*/], Local_143.f_281[iVar0 /*7*/].f_1, Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_143.f_22[Local_144.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_143.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_213(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_214(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	
	func_188(Local_144.f_148[iParam0 /*4*/].f_1, &bVar0, &bVar1);
	if (Local_144.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_191(func_74(bVar0, 0)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0,011f), 0,02083333f, 0,01851852f, 180f, func_216(Local_144.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_144.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_191(func_74(bVar0, 8)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0,023f), 0,02083333f, 0,01851852f, 0f, func_216(Local_144.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_144.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_191(func_74(0, bVar1)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_215(bVar1, 1)), Var2.f_1, 0,02083333f, 0,01851852f, 90f, func_216(Local_144.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_144.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_191(func_74(12, bVar1)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_215(bVar1, 0)), Var2.f_1, 0,02083333f, 0,01851852f, -90f, func_216(Local_144.f_148[iParam0 /*4*/].f_3));
	}
}

float func_215(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0,011f;
			}
			return 0,00975f;
		
		case 2:
			if (bParam1)
			{
				return -0,02275f;
			}
			return 0,02275f;
		
		case 4:
			if (bParam1)
			{
				return -0,02375f;
			}
			return 0,02275f;
		
		case 6:
			if (bParam1)
			{
				return -0,01975f;
			}
			return 0,018f;
		
		case 8:
			if (bParam1)
			{
				return -0,006f;
			}
			return 0,004f;
		
		default:
	}
	return 0f;
}

struct<4> func_216(int iParam0)
{
	float fVar0;
	struct<4> Var1;
	
	fVar0 = system::sin((IntToFloat(unk_0x1DD05E817C89C737()) * 0,5f));
	Var1 = { Local_143.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_217(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_217(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_143.f_107[0 /*4*/] };
			break;
		
		case 6:
			Var1 = { Local_143.f_107[1 /*4*/] };
			break;
		
		case 7:
			Var1 = { Local_143.f_107[2 /*4*/] };
			break;
		
		case 8:
			Var1 = { Local_143.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + system::round((unk_0x1D5CD3EAAA7422B0(fVar0) * 200f)));
	return Var1;
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_218()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_143.f_178)
		{
		}
		else if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)) && !Local_183[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_219(iVar0);
		}
		iVar0++;
	}
	func_219(Local_143.f_178);
}

void func_219(int iParam0)
{
	struct<8> Var0;
	char cVar1[64];
	struct<4> Var2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar6;
	struct<2> Var7;
	struct<8> Var8;
	struct<2> Var9;
	
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_143.f_422[Local_181[iParam0 /*9*/].f_6], 64);
	if (func_71(iParam0))
	{
		StringCopy(&cVar1, "dead_", 64);
		StringConCat(&cVar1, Local_143.f_422[Local_181[iParam0 /*9*/].f_6], 64);
		func_126(&Var0, &cVar1, Local_143.f_204[iParam0 /*19*/], Local_143.f_204[iParam0 /*19*/].f_1, 0,033333f, 0,059259f, 0f, Local_143.f_107.f_17);
		return;
	}
	Var2 = { Local_143.f_107.f_17 };
	if (Local_182[iParam0 /*16*/].f_2 + func_187(iParam0)) > unk_0x7E3F74F641EE6B27()
	{
		if (Local_143.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_168("Footsteps", iParam0, &(Local_143.f_204[iParam0 /*19*/].f_7));
		}
		Local_143.f_204[iParam0 /*19*/].f_4 = (Local_143.f_204[iParam0 /*19*/].f_4 + Local_143.f_412);
		if (Local_143.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_143.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_181[iParam0 /*9*/].f_3 + 1000 > unk_0x7E3F74F641EE6B27())
	{
		fVar3 = unk_0x1D5CD3EAAA7422B0(system::sin((system::to_float((Local_181[iParam0 /*9*/].f_3 + 1000 - unk_0x7E3F74F641EE6B27())) * 0,35f)));
		Var2.f_3 = (255 - system::round(fVar3) * 150);
	}
	fVar4 = func_223(Local_182[iParam0 /*16*/].f_4);
	StringCopy(&cVar5, "walk_", 64);
	StringConCat(&cVar5, Local_143.f_422[Local_181[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	StringConCat(&cVar5, Local_143.f_59[Local_181[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar5, Local_143.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_181[iParam0 /*9*/].f_1 < 1f && Local_143.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar6 = Var2.f_3;
		Var2.f_3 = (iVar6 / 2);
		Var7 = { Local_143.f_204[iParam0 /*19*/] };
		if (func_76())
		{
			Var7 = { func_190(Var7, func_111((0,002604167f * system::sin(system::to_float(unk_0x1DD05E817C89C737()))), (0,00462963f * system::cos(system::to_float(unk_0x1DD05E817C89C737()))))) };
		}
		else
		{
			Var7 = { func_190(Var7, func_111((0,002604167f * system::cos(system::to_float(unk_0x1DD05E817C89C737()))), (0,00462963f * system::sin(system::to_float(unk_0x1DD05E817C89C737()))))) };
		}
		func_126(&Var0, &cVar5, Var7.f_0, Var7.f_1, 0,033333f, 0,059259f, fVar4, Var2);
		Var2.f_3 = iVar6;
	}
	func_126(&Var0, &cVar5, Local_143.f_204[iParam0 /*19*/], Local_143.f_204[iParam0 /*19*/].f_1, 0,033333f, 0,059259f, fVar4, Var2);
	if (Local_143.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var8, "muzzle_flare_", 64);
		StringIntConCat(&Var8, Local_143.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var9 = { func_220(iParam0, fVar4) };
		func_126("MPArcadeCabinetGrid", &Var8, Var9.f_0, Var9.f_1, 0,01666667f, 0,02962963f, fVar4, Var2);
		Local_143.f_204[iParam0 /*19*/].f_5 = (Local_143.f_204[iParam0 /*19*/].f_5 + Local_143.f_412);
		if (Local_143.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_143.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_220(int iParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = { func_222(Local_143.f_204[iParam0 /*19*/]) };
	switch (Local_181[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_190(Var0, func_111(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_190(Var0, func_111(5f, -40f)) };
			break;
	}
	Var0 = { func_221(func_222(Local_143.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { func_110(Var0) };
	return Var0;
}

struct<2> func_221(struct<2> Param0, struct<2> Param1, float fParam2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = system::sin(fParam2);
	fVar2 = system::cos(fParam2);
	Var0.f_0 = (Param1.f_0 - Param0.f_0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar3 = ((Var0.f_0 * fVar2) - (Var0.f_1 * fVar1));
	fVar4 = ((Var0.f_0 * fVar1) + (Var0.f_1 * fVar2));
	Var0.f_0 = (fVar3 + Param0.f_0);
	Var0.f_1 = (fVar4 + Param0.f_1);
	return Var0;
}

struct<2> func_222(struct<2> Param0)
{
	return func_111((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

float func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_224()
{
	float fVar0;
	struct<2> Var1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	struct<2> Var5;
	struct<8> Var6;
	struct<4> Var7;
	
	fVar0 = unk_0x1D5CD3EAAA7422B0(system::sin((system::to_float(unk_0x7E3F74F641EE6B27()) * 0,2f)));
	bVar4 = false;
	bVar2 = false;
	while (bVar2 <= 6)
	{
		if (Local_144.f_62[bVar2 /*3*/].f_1 == -1)
		{
		}
		else if (BitTest(Local_143.f_309, bVar2))
		{
		}
		else
		{
			Var5 = { func_191(Local_144.f_62[bVar2 /*3*/]) };
			unk_0x0B0C9A0F9AAEB7F0(&uVar3, bVar2);
			if (!BitTest(Local_143.f_310, bVar2) && !bVar4)
			{
				func_225("Pickup_Spawn", Var5, 1);
				bVar4 = true;
			}
			StringCopy(&Var6, Local_143.f_90[Local_144.f_62[bVar2 /*3*/].f_1 /*2*/], 64);
			if (Local_143.f_90[Local_144.f_62[bVar2 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var6, (Local_143.f_311 % Local_143.f_90[Local_144.f_62[bVar2 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { func_111(0,033333f, 0,059259f) };
			if (!((Local_144.f_62[bVar2 /*3*/].f_1 == 0 || Local_144.f_62[bVar2 /*3*/].f_1 == 2) || Local_144.f_62[bVar2 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0,15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0,15f) * fVar0));
			}
			Var7 = { Local_143.f_107.f_17 };
			if ((unk_0x7E3F74F641EE6B27() - Local_144.f_62[bVar2 /*3*/].f_2) < 1250)
			{
				Var7.f_3 = system::round((fVar0 * 255f));
			}
			else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_62[bVar2 /*3*/].f_2) > 16500)
			{
				Var7.f_3 = system::round((func_143(1f, 0,1f, (system::to_float(((unk_0x7E3F74F641EE6B27() - Local_144.f_62[bVar2 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_126("MPArcadeCabinetGrid", &Var6, Var5.f_0, Var5.f_1, Var1.f_0, Var1.f_1, 0f, Var7);
		}
		bVar2++;
	}
	Local_143.f_310 = uVar3;
}

void func_225(char* sParam0, struct<2> Param1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_170(Param1);
	if (bParam2)
	{
	}
	iVar1 = unk_0xCA369FBC0DE29517();
	unk_0xBF3D28CA44F3BE2D(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	if (bParam2)
	{
		unk_0x3F002AA9562BF0BE(iVar1, "Screen_Position", uVar0);
	}
	unk_0x394AFAC073E1F277(iVar1);
}

void func_226()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)) && !Local_183[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_181[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_182[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (BitTest(Local_143.f_303, func_227(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_223(Local_182[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_182[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_143.f_416 + 1, 64);
						func_126("MPArcadeCabinetGrid", &Var3, Local_143.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_143.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0,004166667f, 0,03333333f, fVar2, Local_143.f_107.f_17);
					}
					else
					{
						func_126("MPArcadeCabinetGrid", "bullet", Local_143.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_143.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0,004166667f, 0,01111111f, fVar2, Local_143.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_227(int iParam0, int iParam1)
{
	return (iParam1 + (2 * iParam0));
}

void func_228(int iParam0)
{
	if (iLocal_180[Local_183[iParam0 /*37*/].f_6] == 0 && (unk_0x7E3F74F641EE6B27() - Local_144.f_146) > 3000)
	{
		if ((BitTest(Local_143.f_417, 1) && !unk_0x4C705AAF75363287()) && !BitTest(Local_143.f_417, 3))
		{
		}
	}
	if (Local_183[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_144.f_162)
	{
		func_234(iParam0, 4);
	}
	if (func_233(iParam0))
	{
		if (unk_0x7E3F74F641EE6B27() >= Local_183[iParam0 /*37*/].f_3 + 2500 && !BitTest(Local_143.f_142[iParam0], 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), 6);
		}
		if (unk_0x7E3F74F641EE6B27() >= Local_183[iParam0 /*37*/].f_3 + 3500)
		{
			func_230(iParam0);
		}
	}
	else if (unk_0x7E3F74F641EE6B27() > Local_183[iParam0 /*37*/].f_3 + 1000 && !BitTest(Local_143.f_142[iParam0], 6))
	{
		func_234(iParam0, 4);
		func_229("Death_Dead");
	}
}

void func_229(char* sParam0)
{
	if (Local_143.f_178.f_4 == -1)
	{
		Local_143.f_178.f_4 = unk_0xCA369FBC0DE29517();
	}
	unk_0xBF3D28CA44F3BE2D(Local_143.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", 0);
}

void func_230(int iParam0)
{
	func_231(iParam0);
	func_234(iParam0, 2);
	func_229("Death_Resurrect");
	Local_183[iParam0 /*37*/].f_4 = unk_0x7E3F74F641EE6B27();
	Local_183[iParam0 /*37*/].f_2 = 8;
	Local_183[iParam0 /*37*/].f_5 = 0;
	Local_183[iParam0 /*37*/].f_1 = 1f;
	Local_143.f_178.f_2 = 0;
	if (BitTest(Local_143.f_142[iParam0], 6))
	{
		unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), 6);
	}
}

void func_231(int iParam0)
{
	Local_183[iParam0 /*37*/].f_9 = func_232(iParam0);
	Local_183[iParam0 /*37*/].f_9.f_1 = Local_183[iParam0 /*37*/].f_9;
}

int func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == iParam0)
		{
		}
		else if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar2)) && !Local_183[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_181[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(bVar2))
		{
		}
		else
		{
			func_188(Local_182[bVar2 /*16*/], &bVar8, &bVar9);
			unk_0x0B0C9A0F9AAEB7F0(&uVar4, bVar8);
			unk_0x0B0C9A0F9AAEB7F0(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_144.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_188(Local_144.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_144.f_148[bVar2 /*4*/].f_2 == 0 || Local_144.f_148[bVar2 /*4*/].f_2 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar6, bVar8);
			}
			else if (Local_144.f_148[bVar2 /*4*/].f_2 == 2 || Local_144.f_148[bVar2 /*4*/].f_2 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_74(bVar2, bVar3);
			if (!(func_84(&(Local_144.f_85[Local_183[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_84(&(Local_144.f_85[Local_183[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_233(int iParam0)
{
	if (BitTest(Local_143.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_183[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_180[Local_183[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_234(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_183[iParam0 /*37*/] = iParam1;
}

void func_235()
{
	if (iLocal_180[Local_181[Local_143.f_178 /*9*/].f_6] == 0 && (unk_0x7E3F74F641EE6B27() - Local_144.f_146) > 3000)
	{
		if ((BitTest(Local_143.f_417, 1) && !unk_0x4C705AAF75363287()) && !BitTest(Local_143.f_417, 3))
		{
			func_154("SCGW_H_RSPWN", 7500, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), 3);
		}
	}
	if (Local_181[Local_143.f_178 /*9*/] != 3)
	{
		return;
	}
	func_16();
	if (Local_144.f_162)
	{
		func_240(4);
		func_172(6);
	}
	if (func_239(Local_143.f_178))
	{
		if (unk_0x7E3F74F641EE6B27() >= Local_181[Local_143.f_178 /*9*/].f_3 + 2500 && !BitTest(Local_143.f_141, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), 6);
		}
		if (unk_0x7E3F74F641EE6B27() >= Local_181[Local_143.f_178 /*9*/].f_3 + 3500)
		{
			func_236();
		}
	}
	else if (unk_0x7E3F74F641EE6B27() > Local_181[Local_143.f_178 /*9*/].f_3 + 1000 && !BitTest(Local_143.f_141, 6))
	{
		func_240(4);
		func_229("Death_Dead");
		func_172(6);
	}
}

void func_236()
{
	func_237();
	func_240(2);
	func_229("Death_Resurrect");
	Local_181[Local_143.f_178 /*9*/].f_4 = unk_0x7E3F74F641EE6B27();
	Local_181[Local_143.f_178 /*9*/].f_2 = 8;
	Local_181[Local_143.f_178 /*9*/].f_5 = 0;
	Local_181[Local_143.f_178 /*9*/].f_1 = 1f;
	Local_143.f_178.f_2 = 0;
	func_172(4);
	if (BitTest(Local_143.f_141, 6))
	{
		unk_0x8744D2E3FC95740E(&(Local_143.f_141), 6);
	}
}

void func_237()
{
	Local_182[Local_143.f_178 /*16*/] = func_238();
	Local_182[Local_143.f_178 /*16*/].f_1 = Local_182[Local_143.f_178 /*16*/];
}

int func_238()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == Local_143.f_178)
		{
		}
		else if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar2)) && !Local_183[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_181[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(bVar2))
		{
		}
		else
		{
			func_188(Local_182[bVar2 /*16*/], &bVar8, &bVar9);
			unk_0x0B0C9A0F9AAEB7F0(&uVar4, bVar8);
			unk_0x0B0C9A0F9AAEB7F0(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_144.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_188(Local_144.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_144.f_148[bVar2 /*4*/].f_2 == 0 || Local_144.f_148[bVar2 /*4*/].f_2 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar6, bVar8);
			}
			else if (Local_144.f_148[bVar2 /*4*/].f_2 == 2 || Local_144.f_148[bVar2 /*4*/].f_2 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_74(bVar2, bVar3);
			if (!(func_84(&(Local_144.f_85[Local_181[Local_143.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_84(&(Local_144.f_85[Local_181[Local_143.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_239(int iParam0)
{
	if (BitTest(Local_143.f_141, 6))
	{
		return 1;
	}
	if (Local_181[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_180[Local_181[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_240(int iParam0)
{
	if (Local_143.f_178 == -1)
	{
		return;
	}
	Local_181[Local_143.f_178 /*9*/] = iParam0;
}

void func_241()
{
	int iVar0;
	
	if (Local_143.f_437 == -2147483647)
	{
		Local_143.f_437 = unk_0x7E3F74F641EE6B27();
	}
	if ((unk_0x7E3F74F641EE6B27() - Local_143.f_437) > 22500)
	{
		Local_143.f_437 = unk_0x7E3F74F641EE6B27();
		iVar0 = unk_0xC5935DFB3F39785A(0, 3);
		if (iVar0 == Local_143.f_438)
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 3);
		}
		Local_143.f_438 = iVar0;
		func_244();
	}
	Local_143.f_439 = (Local_143.f_439 + (func_243() * system::timestep()));
	Local_143.f_439.f_1 = (Local_143.f_439.f_1 + (func_242() * system::timestep()));
}

float func_242()
{
	switch (Local_143.f_438)
	{
		case 0:
			return -0,1111111f;
		
		case 1:
			return -0,1111111f;
		
		case 2:
			return -0,1388889f;
		
		default:
	}
	return 0f;
}

float func_243()
{
	switch (Local_143.f_438)
	{
		case 0:
			return -0,0625f;
		
		case 1:
			return -0,0625f;
		
		case 2:
			return 0,078125f;
		
		default:
	}
	return 0f;
}

void func_244()
{
	switch (Local_143.f_438)
	{
		case 0:
		case 1:
			Local_143.f_439 = { func_111((1f + unk_0xD2AA6F822D3A55D2(-0,5f, 0f)), (1f + unk_0xD2AA6F822D3A55D2(0f, 0,5f))) };
			break;
		
		case 2:
			Local_143.f_439 = { func_111((0f + unk_0xD2AA6F822D3A55D2(0f, 0,5f)), (1f + unk_0xD2AA6F822D3A55D2(0f, 0,5f))) };
			break;
	}
}

void func_245()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_183[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_183[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_246(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_143.f_306 = iVar0;
}

void func_246(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_227(iParam0, iVar5);
		if (Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_143.f_304, bVar6))
			{
				unk_0x8744D2E3FC95740E(&(Local_143.f_304), bVar6);
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(iParam1, bVar6);
			if (!BitTest(Local_143.f_306, bVar6))
			{
				Local_143.f_204[iParam0 /*19*/].f_5 = 0;
				func_263(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
			switch (Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_111(0f, 0,01481481f) };
					break;
				
				case 1:
					fVar7 = (IntToFloat(Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_111(0f, -0,01481481f) };
					break;
				
				case 2:
					fVar7 = -(IntToFloat(Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_111(0,008333333f, 0f) };
					break;
				
				case 3:
					fVar7 = (IntToFloat(Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_111(-0,008333333f, 0f) };
					break;
			}
			fVar9 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/])) / system::to_float((Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_143.f_59[Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_143.f_304, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { func_111(-1f, -1f) };
					Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] = -2147483647;
					Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 = -1f;
					Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1.f_1 = -1f;
					Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3 = -1;
					Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var10 = { Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (func_262(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0,0001f), (-1f + 0,0001f), 0) && func_262(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0,0001f), (-1f + 0,0001f), 0))
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { func_260(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { func_190(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar12)))
					{
					}
					else if (Local_181[bVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(bVar12))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[bVar12 /*19*/] };
						Var1 = { Local_143.f_204[bVar12 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_253(iVar5, bVar12, iParam0);
							iVar13 = 1;
						}
					}
					bVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_183[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_183[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_252(iVar14))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[iVar14 /*19*/] };
						Var1 = { Local_143.f_204[iVar14 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_249(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_143.f_304, bVar6))
					{
						if (Local_183[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_247(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_304), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_247(struct<2> Param0)
{
	Local_143.f_159[Local_143.f_308 /*3*/] = 0;
	Local_143.f_159[Local_143.f_308 /*3*/].f_1 = { Param0 };
	if (func_248(Param0, Local_143.f_204[Local_143.f_178 /*19*/]) < system::pow((0,185185f * 2f), 2f))
	{
		unk_0x97A041099E92C69F(0, 1000, 100);
	}
	func_225("Rocket_Explode", Param0, 1);
	Local_143.f_308++;
	if (Local_143.f_308 >= 6)
	{
		Local_143.f_308 = 0;
	}
}

float func_248(struct<2> Param0, struct<2> Param1)
{
	return (system::pow((Param1.f_0 - Param0.f_0), 2f) + system::pow((Param1.f_1 - Param0.f_1), 2f));
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	Local_143.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_143.f_204[iParam1 /*19*/] };
	func_250(iParam1, -Local_143.f_59[Local_183[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	unk_0x97A041099E92C69F(0, 250, 200);
	Local_183[iParam1 /*37*/].f_3 = unk_0x7E3F74F641EE6B27();
	if (Local_183[iParam1 /*37*/] != 2)
	{
		func_167((6 + Local_183[iParam2 /*37*/].f_6));
	}
	if (Local_183[iParam1 /*37*/].f_2 <= 0)
	{
		func_167((2 + Local_183[iParam1 /*37*/].f_6));
		Local_142.f_18++;
	}
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (Local_183[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_183[iParam0 /*37*/] == 2)
		{
			func_234(iParam0, 3);
			func_229("Death_Bleeps");
		}
	}
	if (iVar0 != Local_183[iParam0 /*37*/].f_2)
	{
		Local_183[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_251(iParam0, Local_183[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_251(int iParam0, bool bParam1, var uParam2)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_0 = 444085151;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	Var0.f_4 = bParam1;
	Var0.f_5 = uParam2;
	iVar1 = func_138(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 6, iVar1, Var0.f_0);
	}
}

int func_252(int iParam0)
{
	if (Local_183[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_183[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_253(int iParam0, int iParam1, int iParam2)
{
	Local_143.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_143.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_143.f_178)
	{
		func_254(-Local_143.f_59[Local_183[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		unk_0x97A041099E92C69F(0, 250, 200);
		Local_181[Local_143.f_178 /*9*/].f_3 = unk_0x7E3F74F641EE6B27();
		if (Local_181[Local_143.f_178 /*9*/] != 2)
		{
			func_167((6 + Local_183[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_143.f_178 && (Local_181[iParam1 /*9*/].f_2 - Local_143.f_59[Local_183[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_167((2 + Local_181[iParam1 /*9*/].f_6));
		Local_142.f_18++;
	}
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (Local_181[Local_143.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_181[Local_143.f_178 /*9*/] == 2)
		{
			func_240(3);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), 2);
			func_229("Death_Bleeps");
			Global_1928430 = 5;
		}
	}
	if (iVar0 != Local_181[Local_143.f_178 /*9*/].f_2)
	{
		Local_181[Local_143.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_251(Local_143.f_178, Local_181[Local_143.f_178 /*9*/] != 2, iParam1);
	}
}

int func_255(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	var uVar4;
	
	Var0 = { Param0 };
	Var1 = { Param1 };
	Var2 = { Param2 };
	Var3 = { Param3 };
	func_259(&Param0, &Param1);
	func_259(&Param2, &Param3);
	func_259(&Var1, &Var0);
	func_259(&Var3, &Var2);
	if (((func_256(Param0, Param1, Var2, Var3, &uVar4) || func_256(Param0, Param1, Param2, Param3, &uVar4)) || func_256(Var0, Var1, Param2, Param3, &uVar4)) || func_256(Var0, Var1, Var2, Var3, &uVar4))
	{
		return 1;
	}
	return 0;
}

int func_256(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4)
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
	struct<2> Var9;
	
	fVar0 = (Param1.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param1.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param3.f_1 - Param2.f_1);
	fVar4 = (Param2.f_0 - Param3.f_0);
	fVar5 = ((fVar3 * Param2.f_0) + (fVar4 * Param2.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_262(fVar6, (0f - 0,0001f), (0f + 0,0001f), 0))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_111(fVar7, fVar8) };
		if (((((((func_258((Param0.f_0 - 0,001f), (Param1.f_0 - 0,001f)) <= Var9.f_0 && Var9.f_0 <= func_257((Param0.f_0 + 0,001f), (Param1.f_0 + 0,001f))) && func_258((Param0.f_1 - 0,001f), (Param1.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_257((Param0.f_1 + 0,001f), (Param1.f_1 + 0,001f))) && func_258((Param2.f_0 - 0,001f), (Param3.f_0 - 0,001f)) <= Var9.f_0) && Var9.f_0 <= func_257((Param2.f_0 + 0,001f), (Param3.f_0 + 0,001f))) && func_258((Param2.f_1 - 0,001f), (Param3.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_257((Param2.f_1 + 0,001f), (Param3.f_1 + 0,001f)))
		{
			*uParam4 = { Var9 };
			return 1;
		}
	}
	*uParam4 = { func_111(3,402823E+38f, 3,402823E+38f) };
	return 0;
}

float func_257(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_258(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_259(var uParam0, var uParam1)
{
	if (func_262(*uParam0, (*uParam1 - 0,0001f), (*uParam1 + 0,0001f), 0))
	{
		*uParam0 = (*uParam0 + 0,008333333f);
		*uParam1 = (*uParam1 - 0,008333333f);
	}
	if (func_262(uParam0->f_1, (uParam1->f_1 - 0,0001f), (uParam1->f_1 + 0,0001f), 0))
	{
		uParam0->f_1 = (uParam0->f_1 + 0,01481481f);
		uParam1->f_1 = (uParam1->f_1 - 0,01481481f);
	}
}

struct<2> func_260(struct<2> Param0, struct<2> Param1, float fParam2)
{
	return func_190(func_261(Param0, (1f - fParam2)), func_261(Param1, fParam2));
}

struct<2> func_261(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam1);
	Var0.f_1 = (Param0.f_1 * fParam1);
	return Var0;
}

bool func_262(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return (fParam0 >= fParam1 && fParam0 <= fParam2);
	}
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_263(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_183[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_183[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_168(sVar0, iParam0, &(Local_143.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_264(sVar0, iParam0, &(Local_143.f_204[iParam0 /*19*/].f_8));
	}
}

void func_264(char* sParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_170(Local_143.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = unk_0xCA369FBC0DE29517();
	}
	unk_0xBF3D28CA44F3BE2D(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	unk_0x3F002AA9562BF0BE(*uParam2, "Screen_Position", uVar0);
}

void func_265()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
		}
		else if (Local_181[bVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_266(bVar1, &iVar0);
		}
		bVar1++;
	}
	Local_143.f_305 = iVar0;
}

void func_266(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_227(iParam0, iVar5);
		if (Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_143.f_303, bVar6))
			{
				unk_0x8744D2E3FC95740E(&(Local_143.f_303), bVar6);
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(iParam1, bVar6);
			if (!BitTest(Local_143.f_305, bVar6))
			{
				Local_143.f_204[iParam0 /*19*/].f_5 = 0;
				func_269(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
			switch (Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_111(0f, 0,01481481f) };
					break;
				
				case 1:
					fVar7 = (IntToFloat(Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_111(0f, -0,01481481f) };
					break;
				
				case 2:
					fVar7 = -(IntToFloat(Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_111(0,008333333f, 0f) };
					break;
				
				case 3:
					fVar7 = (IntToFloat(Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_111(-0,008333333f, 0f) };
					break;
			}
			fVar9 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/])) / system::to_float((Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_143.f_59[Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_143.f_303, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { func_111(-1f, -1f) };
					if (iParam0 == Local_143.f_178)
					{
						Local_182[Local_143.f_178 /*16*/].f_5[iVar5 /*5*/] = -2147483647;
						Local_182[Local_143.f_178 /*16*/].f_5[iVar5 /*5*/].f_1 = -1f;
						Local_182[Local_143.f_178 /*16*/].f_5[iVar5 /*5*/].f_1.f_1 = -1f;
						Local_182[Local_143.f_178 /*16*/].f_5[iVar5 /*5*/].f_3 = -1;
						Local_182[Local_143.f_178 /*16*/].f_5[iVar5 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var10 = { Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (func_262(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0,0001f), (-1f + 0,0001f), 0) && func_262(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0,0001f), (-1f + 0,0001f), 0))
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { func_260(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { func_190(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar12)))
					{
					}
					else if (Local_181[bVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(bVar12))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[bVar12 /*19*/] };
						Var1 = { Local_143.f_204[bVar12 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_268(iVar5, bVar12, iParam0);
							iVar13 = 1;
						}
					}
					bVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_183[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_183[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_252(iVar14))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[iVar14 /*19*/] };
						Var1 = { Local_143.f_204[iVar14 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_267(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_143.f_303, bVar6))
					{
						if (Local_182[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_247(Local_143.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_303), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	Local_143.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_143.f_204[iParam1 /*19*/] };
	func_250(iParam1, -Local_143.f_59[Local_182[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	unk_0x97A041099E92C69F(0, 250, 200);
	Local_183[iParam1 /*37*/].f_3 = unk_0x7E3F74F641EE6B27();
	if (Local_183[iParam1 /*37*/] != 2)
	{
		func_167((6 + Local_181[iParam2 /*9*/].f_6));
	}
	if (Local_183[iParam1 /*37*/].f_2 <= 0)
	{
		func_167((2 + Local_183[iParam1 /*37*/].f_6));
		Local_142.f_18++;
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	Local_143.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_143.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_143.f_178)
	{
		func_254(-Local_143.f_59[Local_182[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		unk_0x97A041099E92C69F(0, 250, 200);
		Local_181[Local_143.f_178 /*9*/].f_3 = unk_0x7E3F74F641EE6B27();
		if (Local_181[Local_143.f_178 /*9*/] != 2)
		{
			func_167((6 + Local_181[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_143.f_178 && (Local_181[iParam1 /*9*/].f_2 - Local_143.f_59[Local_182[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_167((2 + Local_181[iParam1 /*9*/].f_6));
		Local_142.f_18++;
	}
}

void func_269(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_182[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_182[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_168(sVar0, iParam0, &(Local_143.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_264(sVar0, iParam0, &(Local_143.f_204[iParam0 /*19*/].f_8));
	}
}

void func_270()
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var15;
	struct<2> Var16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	bVar5 = false;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		iVar11 = unk_0x7E3F74F641EE6B27();
		if (Local_144.f_148[iVar6 /*4*/].f_3 != -1 && iVar11 > Local_144.f_148[iVar6 /*4*/])
		{
			iVar12 = func_75((Local_144.f_148[iVar6 /*4*/].f_2 == 1 || Local_144.f_148[iVar6 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar11 > (Local_144.f_148[iVar6 /*4*/] + iVar12))
			{
			}
			else
			{
				bVar5 = true;
				fVar13 = (system::to_float((iVar11 - Local_144.f_148[iVar6 /*4*/])) / system::to_float(iVar12));
				func_188(Local_144.f_148[iVar6 /*4*/].f_1, &iVar7, &iVar8);
				switch (Local_144.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						iVar9 = iVar7;
						iVar10 = 0;
						Var4 = { func_111(0f, -(Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar9 = iVar7;
						iVar10 = 8;
						Var4 = { func_111(0f, (Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar9 = 0;
						iVar10 = iVar8;
						Var4 = { func_111(-(Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar9 = 12;
						iVar10 = iVar8;
						Var4 = { func_111((Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var14 = { func_191(Local_144.f_148[iVar6 /*4*/].f_1) };
				Var15 = { func_191(func_74(iVar9, iVar10)) };
				switch (Local_144.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Var14.f_1 = (Var14.f_1 + 0,1851855f);
						Var15.f_1 = (Var15.f_1 + -0,1851855f);
						break;
					
					case 1:
						Var14.f_1 = (Var14.f_1 + -0,1851855f);
						Var15.f_1 = (Var15.f_1 + 0,1851855f);
						break;
					
					case 2:
						Var14.f_0 = (Var14.f_0 + 0,1041665f);
						Var15.f_0 = (Var15.f_0 + -0,1041665f);
						break;
					
					case 3:
						Var14.f_0 = (Var14.f_0 + -0,1041665f);
						Var15.f_0 = (Var15.f_0 + 0,1041665f);
						break;
				}
				Local_143.f_281[iVar6 /*7*/].f_2 = { Local_143.f_281[iVar6 /*7*/] };
				Local_143.f_281[iVar6 /*7*/] = { func_260(Var14, Var15, fVar13) };
				if (!func_208(Local_143.f_281[iVar6 /*7*/], Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
				{
					if (func_208(Local_143.f_281[iVar6 /*7*/].f_2, Local_143.f_22[Local_144.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_144.f_148[iVar6 /*4*/].f_3 != 0)
						{
							func_225(func_276(Local_144.f_148[iVar6 /*4*/].f_3), Local_143.f_281[iVar6 /*7*/], 1);
						}
					}
					else
					{
						if (!unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							unk_0xCAC4020CCF361AC8("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
						{
							unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar6 != 2)
						{
							Var16 = { Local_143.f_281[iVar6 /*7*/] };
							if (iVar6 == 1 && Local_144.f_148[iVar6 /*4*/].f_2 != Local_144.f_148[2 /*4*/].f_2)
							{
								Var16 = { func_111(0,5f, 0,5f) };
							}
							if (Local_144.f_148[iVar6 /*4*/].f_3 >= 5)
							{
								iVar17 = (Local_144.f_148[iVar6 /*4*/].f_3 - 5);
								func_274(func_275(Local_144.f_148[iVar6 /*4*/].f_3), &(Local_143.f_281[iVar6 /*7*/].f_5), Var16, iVar17);
							}
							else
							{
								func_173(func_275(Local_144.f_148[iVar6 /*4*/].f_3), &(Local_143.f_281[iVar6 /*7*/].f_5), Var16, 1);
							}
						}
					}
				}
				else if (Local_143.f_281[iVar6 /*7*/].f_5 != -1)
				{
					func_174(&(Local_143.f_281[iVar6 /*7*/].f_5));
				}
				Var2 = { func_190(Local_143.f_281[iVar6 /*7*/], Var4) };
				Var3 = { func_273(Local_143.f_281[iVar6 /*7*/].f_2, Var4) };
				iVar18 = 0;
				iVar18 = 0;
				while (iVar18 <= 3)
				{
					if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar18)))
					{
					}
					else if (Local_181[bVar18 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(bVar18))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[bVar18 /*19*/] };
						Var1 = { Local_143.f_204[bVar18 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_272(bVar18);
						}
					}
					bVar18++;
				}
				iVar19 = 0;
				iVar19 = 0;
				while (iVar19 <= 3)
				{
					if (!Local_183[iVar19 /*37*/].f_25)
					{
					}
					else if (Local_183[iVar19 /*37*/].f_6 == -1)
					{
					}
					else if (func_252(iVar19))
					{
					}
					else
					{
						Var0 = { Local_143.f_204[iVar19 /*19*/] };
						Var1 = { Local_143.f_204[iVar19 /*19*/].f_2 };
						if (unk_0x1D5CD3EAAA7422B0((Var0.f_0 - Var2.f_0)) > 0,104167f || unk_0x1D5CD3EAAA7422B0((Var0.f_1 - Var2.f_1)) > 0,185185f)
						{
						}
						else if (func_255(Var2, Var3, Var0, Var1))
						{
							func_271(iVar19);
						}
					}
					iVar19++;
				}
				Jump @1613; //curOff = 1374
				if (Local_143.f_281[iVar6 /*7*/].f_5 != -1)
				{
					func_174(&(Local_143.f_281[iVar6 /*7*/].f_5));
				}
				Local_143.f_281[iVar6 /*7*/] = { func_191(Local_144.f_148[iVar6 /*4*/].f_1) };
				switch (Local_144.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Local_143.f_281[iVar6 /*7*/].f_1 = (Local_143.f_281[iVar6 /*7*/].f_1 + 0,1851855f);
						break;
					
					case 1:
						Local_143.f_281[iVar6 /*7*/].f_1 = (Local_143.f_281[iVar6 /*7*/].f_1 + -0,1851855f);
						break;
					
					case 2:
						Local_143.f_281[iVar6 /*7*/] = (Local_143.f_281[iVar6 /*7*/] + 0,1041665f);
						break;
					
					case 3:
						Local_143.f_281[iVar6 /*7*/] = (Local_143.f_281[iVar6 /*7*/] + -0,1041665f);
						break;
				}
				Local_143.f_281[iVar6 /*7*/].f_2 = { Local_143.f_281[iVar6 /*7*/] };
			}
			iVar6++;
			if (!bVar5)
			{
				if (!unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
				{
					unk_0xCAC4020CCF361AC8("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					unk_0xB43467C43086A6A1("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_271(int iParam0)
{
	func_250(iParam0, -8, 1);
	Local_183[iParam0 /*37*/].f_3 = unk_0x7E3F74F641EE6B27();
	func_167(10);
}

void func_272(int iParam0)
{
	if (iParam0 == Local_143.f_178)
	{
		func_254(-8, 1);
		unk_0x97A041099E92C69F(0, 1000, 200);
		Local_181[Local_143.f_178 /*9*/].f_3 = unk_0x7E3F74F641EE6B27();
		func_167(10);
	}
}

struct<2> func_273(struct<2> Param0, struct<2> Param1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 - Param1.f_0);
	Var0.f_1 = (Param0.f_1 - Param1.f_1);
	return Var0;
}

void func_274(char* sParam0, var uParam1, struct<2> Param2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_170(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xCA369FBC0DE29517();
	}
	if (unk_0x9F0C06CFBACDD6A1(*uParam1))
	{
		unk_0xBF3D28CA44F3BE2D(*uParam1, uParam0, func_169(iParam3), 0);
	}
	unk_0x3F002AA9562BF0BE(*uParam1, "Screen_Position", uVar0);
}

char* func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_277()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_183[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_183[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_71(iVar0))
		{
			Local_143.f_204[iVar0 /*19*/].f_2 = { func_111(-1f, -1f) };
		}
		else
		{
			func_278(iVar0);
		}
		iVar0++;
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_191(Local_183[iParam0 /*37*/].f_9) };
	Var5 = { func_191(Local_183[iParam0 /*37*/].f_9.f_1) };
	fVar6 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_183[iParam0 /*37*/].f_9.f_2)) / system::to_float(func_284(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if ((fVar6 >= 0,65f && !BitTest(Local_143.f_142[iParam0], 0)) || (fVar6 >= 0,8f && !BitTest(Local_143.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_283(Local_183[iParam0 /*37*/].f_9, 1, Local_183[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar7 = func_74((iVar0 - 1), iVar1);
				func_283(uVar7, 1, Local_183[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_283(Local_183[iParam0 /*37*/].f_9, 0, Local_183[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar8 = func_74(iVar0, (iVar1 - 1));
				func_283(uVar8, 0, Local_183[iParam0 /*37*/].f_6);
			}
		}
		if (!BitTest(Local_143.f_142[iParam0], 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), false);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), 4);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), true);
		}
	}
	if (fVar6 > 0,85f || fVar6 < 0,15f)
	{
		if (fVar6 > 0,85f)
		{
			iVar9 = Local_183[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar9 = Local_183[iParam0 /*37*/].f_9.f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_144.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_143.f_309, bVar10))
				{
					unk_0x8744D2E3FC95740E(&(Local_143.f_309), bVar10);
				}
			}
			else if (!func_282(bVar10, iParam0))
			{
			}
			else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_143.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_144.f_62[bVar10 /*3*/])
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_309), bVar10);
				func_280(bVar10, iParam0);
				func_279(bVar10);
				func_167(11);
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_143.f_204[iParam0 /*19*/].f_2 < 0f && Local_143.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_143.f_204[iParam0 /*19*/].f_2 = { func_260(Var5, Var4, fVar6) };
		}
		else
		{
			Local_143.f_204[iParam0 /*19*/].f_2 = { Local_143.f_204[iParam0 /*19*/] };
		}
		Local_143.f_204[iParam0 /*19*/] = { func_260(Var5, Var4, fVar6) };
		return;
	}
	if (Local_143.f_204[iParam0 /*19*/].f_2 < 0f && Local_143.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_143.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_143.f_204[iParam0 /*19*/].f_2 = { Local_143.f_204[iParam0 /*19*/] };
	}
	Local_143.f_204[iParam0 /*19*/] = { Var4 };
	Local_143.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_279(bool bParam0)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = -2013943038;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = bParam0;
	iVar1 = func_138(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iVar1, Var0.f_0);
	}
}

void func_280(bool bParam0, int iParam1)
{
	Local_142.f_17++;
	switch (Local_144.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_250(iParam1, 4, 0);
			break;
		
		case 1:
			Local_143.f_178.f_2 += 10;
			break;
		
		case 2:
			func_281(Local_183[iParam1 /*37*/].f_9, Local_183[iParam1 /*37*/].f_6);
			break;
		
		case 3:
			Local_183[iParam1 /*37*/].f_5 = 1;
			break;
		
		case 4:
			Local_183[iParam1 /*37*/].f_5 = 2;
			break;
		
		case 5:
			Local_183[iParam1 /*37*/].f_5 = 3;
			break;
		
		case 6:
			Local_183[iParam1 /*37*/].f_5 = 4;
			break;
		
		case 7:
			Local_183[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_143.f_417, 2) && Local_183[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_281(var uParam0, var uParam1)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = 743327592;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	iVar1 = func_138(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 5, iVar1, Var0.f_0);
	}
}

int func_282(bool bParam0, int iParam1)
{
	switch (Local_144.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_183[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_183[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_183[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_183[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_183[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_183[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_283(var uParam0, int iParam1, var uParam2)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_0 = 385697842;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	Var0.f_5 = uParam2;
	iVar1 = func_138(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 6, iVar1, Var0.f_0);
	}
}

int func_284(int iParam0)
{
	return system::round((700f * Local_183[iParam0 /*37*/].f_1));
}

void func_285()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
		}
		else if (Local_181[bVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(bVar0))
		{
			Local_143.f_204[bVar0 /*19*/].f_2 = { func_111(-1f, -1f) };
		}
		else
		{
			func_286(bVar0);
		}
		bVar0++;
	}
}

void func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	
	func_188(Local_182[iParam0 /*16*/], &iVar0, &iVar1);
	func_188(Local_182[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_191(Local_182[iParam0 /*16*/]) };
	Var5 = { func_191(Local_182[iParam0 /*16*/].f_1) };
	fVar6 = (system::to_float((unk_0x7E3F74F641EE6B27() - Local_182[iParam0 /*16*/].f_2)) / system::to_float(func_187(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if (iParam0 == Local_143.f_178 && ((fVar6 >= 0,65f && !BitTest(Local_143.f_141, 0)) || (fVar6 >= 0,8f && !BitTest(Local_143.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_283(Local_182[iParam0 /*16*/], 1, Local_181[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar7 = func_74((iVar0 - 1), iVar1);
				func_283(uVar7, 1, Local_181[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_283(Local_182[iParam0 /*16*/], 0, Local_181[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar8 = func_74(iVar0, (iVar1 - 1));
				func_283(uVar8, 0, Local_181[iParam0 /*9*/].f_6);
			}
		}
		if (!BitTest(Local_143.f_141, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), false);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Local_143.f_141), 4);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), true);
		}
	}
	if (fVar6 > 0,85f || fVar6 < 0,15f)
	{
		if (fVar6 > 0,85f)
		{
			iVar9 = Local_182[iParam0 /*16*/];
		}
		else
		{
			iVar9 = Local_182[iParam0 /*16*/].f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_144.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_143.f_309, bVar10))
				{
					unk_0x8744D2E3FC95740E(&(Local_143.f_309), bVar10);
				}
			}
			else if (!func_288(bVar10))
			{
			}
			else if ((unk_0x7E3F74F641EE6B27() - Local_144.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_143.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_144.f_62[bVar10 /*3*/])
			{
				if (iParam0 == Local_143.f_178)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_309), bVar10);
					func_287(bVar10);
					unk_0x97A041099E92C69F(0, 100, 50);
					func_279(bVar10);
					func_167(11);
				}
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_143.f_204[iParam0 /*19*/].f_2 < 0f && Local_143.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_143.f_204[iParam0 /*19*/].f_2 = { func_260(Var5, Var4, fVar6) };
		}
		else
		{
			Local_143.f_204[iParam0 /*19*/].f_2 = { Local_143.f_204[iParam0 /*19*/] };
		}
		Local_143.f_204[iParam0 /*19*/] = { func_260(Var5, Var4, fVar6) };
		return;
	}
	if (Local_143.f_204[iParam0 /*19*/].f_2 < 0f && Local_143.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_143.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_143.f_204[iParam0 /*19*/].f_2 = { Local_143.f_204[iParam0 /*19*/] };
	}
	Local_143.f_204[iParam0 /*19*/] = { Var4 };
	Local_143.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_287(bool bParam0)
{
	struct<2> Var0;
	
	Var0 = { func_191(Local_144.f_62[bParam0 /*3*/]) };
	Local_142.f_17++;
	switch (Local_144.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_225("Pickup_Health", Var0, 1);
			func_254(4, 0);
			break;
		
		case 1:
			func_225("Pickup_Speed", Var0, 1);
			Local_143.f_178.f_2 += 10;
			break;
		
		case 2:
			func_225("Pickup_Collect_Transport", Var0, 1);
			func_281(Local_182[Local_143.f_178 /*16*/], Local_181[Local_143.f_178 /*9*/].f_6);
			break;
		
		case 3:
			func_225("Pickup_Collect_Weapon", Var0, 1);
			Local_181[Local_143.f_178 /*9*/].f_5 = 1;
			break;
		
		case 4:
			func_225("Pickup_Collect_Weapon", Var0, 1);
			Local_181[Local_143.f_178 /*9*/].f_5 = 2;
			break;
		
		case 5:
			func_225("Pickup_Collect_Weapon", Var0, 1);
			Local_181[Local_143.f_178 /*9*/].f_5 = 3;
			break;
		
		case 6:
			func_225("Pickup_Collect_Weapon", Var0, 1);
			Local_181[Local_143.f_178 /*9*/].f_5 = 4;
			break;
		
		case 7:
			func_225("Pickup_Collect_Weapon", Var0, 1);
			Local_181[Local_143.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_143.f_417, 2) && Local_181[Local_143.f_178 /*9*/].f_5 != 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), 2);
		func_154("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_288(bool bParam0)
{
	switch (Local_144.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_181[Local_143.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_181[Local_143.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_181[Local_143.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_181[Local_143.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_181[Local_143.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_181[Local_143.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_289(int iParam0)
{
	func_301(iParam0);
	func_297(iParam0);
	func_294(iParam0);
	func_290(iParam0);
}

void func_290(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_183[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_292(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_291(iParam0, Local_183[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (unk_0x7E3F74F641EE6B27() < (Local_143.f_183[iParam0 /*5*/].f_3 + Local_143.f_59[Local_183[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_183[iParam0 /*37*/].f_9.f_4;
		Local_183[iParam0 /*37*/].f_9.f_5[Local_143.f_307 /*5*/] = unk_0x7E3F74F641EE6B27();
		Local_183[iParam0 /*37*/].f_9.f_5[Local_143.f_307 /*5*/].f_3 = uVar1;
		Local_183[iParam0 /*37*/].f_9.f_5[Local_143.f_307 /*5*/].f_4 = Local_183[iParam0 /*37*/].f_5;
		Local_183[iParam0 /*37*/].f_9.f_5[Local_143.f_307 /*5*/].f_1 = { Local_143.f_204[iParam0 /*19*/] };
		Local_183[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_143.f_183[iParam0 /*5*/].f_3 = unk_0x7E3F74F641EE6B27();
		Local_143.f_307++;
		if (Local_143.f_307 >= 2)
		{
			Local_143.f_307 = 0;
		}
		unk_0x97A041099E92C69F(0, 50, 100);
	}
}

int func_291(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { func_191(func_74(12, 8)) };
	Var1 = { func_191(func_74(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_262(Local_143.f_204[iParam0 /*19*/].f_1, (Var1.f_1 - 0,0001f), (Var1.f_1 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_262(Local_143.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0,0001f), (Var0.f_1 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_262(Local_143.f_204[iParam0 /*19*/], (Var1.f_0 - 0,0001f), (Var1.f_0 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_262(Local_143.f_204[iParam0 /*19*/], (Var0.f_0 - 0,0001f), (Var0.f_0 + 0,0001f), 0))
			{
				return 0;
			}
			break;
	}
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	if (Local_183[iParam0 /*37*/].f_9.f_2 + func_187(iParam0)) > unk_0x7E3F74F641EE6B27()
	{
		if (iVar3 != iVar5)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_292(int iParam0)
{
	if (func_293(iParam0))
	{
		return -1;
	}
	if (Local_183[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_293(int iParam0)
{
	if (unk_0x4D9174D8796EA622())
	{
		return 1;
	}
	if (Local_183[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_294(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_296(iParam0);
	bVar1 = func_295(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_183[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_183[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_183[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_183[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_183[iParam0 /*37*/].f_9.f_2 + func_187(Local_143.f_178)) > unk_0x7E3F74F641EE6B27()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_296(int iParam0)
{
	if (func_293(iParam0))
	{
		return -1;
	}
	return Local_183[iParam0 /*37*/].f_28;
}

void func_297(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_298(iParam0);
	bVar1 = false;
	if (((!((Local_183[iParam0 /*37*/].f_9.f_2 + func_187(Local_143.f_178)) < unk_0x7E3F74F641EE6B27() && BitTest(Local_143.f_142[iParam0], 1)) && unk_0x7E3F74F641EE6B27() < Local_183[iParam0 /*37*/].f_9.f_2 + 100) && Local_183[iParam0 /*37*/].f_9.f_3 != iVar0) && !BitTest(Local_143.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_188(Local_183[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_188(Local_183[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_183[iParam0 /*37*/].f_9.f_2 + func_187(iParam0)) < unk_0x7E3F74F641EE6B27() && BitTest(Local_143.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_143.f_142[iParam0], 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_183[iParam0 /*37*/].f_9 = func_74(iVar2, iVar3);
			Local_183[iParam0 /*37*/].f_9.f_1 = func_74(iVar4, iVar5);
			if (Local_143.f_178.f_2 > 0)
			{
				Local_183[iParam0 /*37*/].f_1 = 0,75f;
				Local_143.f_178.f_2 = (Local_143.f_178.f_2 - 1);
			}
			else if (!func_262(Local_183[iParam0 /*37*/].f_1, (1f - 0,0001f), (1f + 0,0001f), 0))
			{
				Local_183[iParam0 /*37*/].f_1 = 1f;
			}
			Local_183[iParam0 /*37*/].f_9.f_2 = unk_0x7E3F74F641EE6B27();
			if (iVar8 > 0)
			{
				Local_183[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_183[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_183[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_183[iParam0 /*37*/].f_9.f_4 = 1;
			}
			unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), true);
			unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), false);
			Local_183[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!BitTest(Local_143.f_142[iParam0], 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), 5);
			}
		}
	}
}

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_293(iParam0))
	{
		return -1;
	}
	if (!BitTest(Local_143.f_142[iParam0], 5))
	{
		return func_300(Local_183[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_183[iParam0 /*37*/].f_33;
	iVar1 = Local_183[iParam0 /*37*/].f_34;
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_299(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_299(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (unk_0x510D0699BE9C6D06(iVar0) < unk_0x510D0699BE9C6D06(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_301(int iParam0)
{
	Local_183[iParam0 /*37*/].f_26 = func_312(iParam0);
	Local_183[iParam0 /*37*/].f_28 = func_311(iParam0);
	if (Local_183[iParam0 /*37*/].f_27)
	{
		if (Local_183[iParam0 /*37*/].f_36 != 3 && func_310(iParam0))
		{
			Local_183[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_183[iParam0 /*37*/].f_36 != 1 && func_309(iParam0))
		{
			Local_183[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_183[iParam0 /*37*/].f_36 != 2 && func_308(iParam0))
		{
			Local_183[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_183[iParam0 /*37*/].f_36 != 0 && Local_183[iParam0 /*37*/].f_27)
		{
			Local_183[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_183[iParam0 /*37*/].f_36)
		{
			case 0:
				func_305(iParam0);
				break;
			
			case 1:
				func_304(iParam0);
				break;
			
			case 2:
				func_303(iParam0);
				break;
			
			case 3:
				func_302(iParam0);
				break;
		}
		if (Local_183[iParam0 /*37*/].f_33 == -1)
		{
			Local_183[iParam0 /*37*/].f_33 = unk_0xC5935DFB3F39785A(0, 6) * 2;
		}
		if (Local_183[iParam0 /*37*/].f_34 == -1)
		{
			Local_183[iParam0 /*37*/].f_34 = unk_0xC5935DFB3F39785A(0, 4) * 2;
		}
		Local_183[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_183[iParam0 /*37*/].f_9.f_2 + func_187(iParam0)) < unk_0x7E3F74F641EE6B27() && BitTest(Local_143.f_142[iParam0], 1))
	{
		if (Local_183[iParam0 /*37*/].f_9 == func_74(Local_183[iParam0 /*37*/].f_33, Local_183[iParam0 /*37*/].f_34) || (Local_183[iParam0 /*37*/].f_33 == -1 && Local_183[iParam0 /*37*/].f_34 == -1))
		{
			Local_183[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_302(int iParam0)
{
	if (Local_183[iParam0 /*37*/].f_35 == -1)
	{
		Local_183[iParam0 /*37*/].f_35 = unk_0xC5935DFB3F39785A(0, 4);
	}
	if (Local_183[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_183[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(Local_183[iParam0 /*37*/].f_35)) && !Local_183[Local_183[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_183[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_181[Local_183[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_183[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_188(Local_182[Local_183[iParam0 /*37*/].f_35 /*16*/], &(Local_183[iParam0 /*37*/].f_33), &(Local_183[iParam0 /*37*/].f_34));
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_144.f_62[iVar6 /*3*/].f_1 != -1 && Local_144.f_62[iVar6 /*3*/] != -1) && Local_144.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_144.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_188(Local_144.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (unk_0x510D0699BE9C6D06((iVar2 - iVar0)) + unk_0x510D0699BE9C6D06((iVar3 - iVar1))) < (unk_0x510D0699BE9C6D06((iVar4 - iVar0)) + unk_0x510D0699BE9C6D06((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_183[iParam0 /*37*/].f_33 = unk_0xC5935DFB3F39785A(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_183[iParam0 /*37*/].f_34 = unk_0xC5935DFB3F39785A(0, 4) * 2;
	}
}

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = unk_0x7E3F74F641EE6B27();
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_75((Local_144.f_148[iVar9 /*4*/].f_2 == 1 || Local_144.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_144.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_144.f_148[iVar9 /*4*/] && iVar2 > (Local_144.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_188(Local_144.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_144.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_144.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_183[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_183[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_183[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_183[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_183[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_183[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_183[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_183[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_183[iParam0 /*37*/].f_33 = unk_0xC5935DFB3F39785A(0, 6) * 2;
		Local_183[iParam0 /*37*/].f_34 = unk_0xC5935DFB3F39785A(0, 4) * 2;
	}
}

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	if (Local_183[iParam0 /*37*/].f_29 == -1 && Local_183[iParam0 /*37*/].f_30 == -1)
	{
		func_307(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_144[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_183[iParam0 /*37*/].f_29 != -1 && Local_183[iParam0 /*37*/].f_30 != -1) && Local_144[(Local_183[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_183[iParam0 /*37*/].f_30 % 4)] == Local_183[iParam0 /*37*/].f_6)
	{
		Local_183[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_183[iParam0 /*37*/].f_29 != -1 && Local_183[iParam0 /*37*/].f_30 != -1)
	{
		func_306(iParam0);
	}
}

void func_306(int iParam0)
{
	Local_183[iParam0 /*37*/].f_31++;
	Local_183[iParam0 /*37*/].f_31 = (Local_183[iParam0 /*37*/].f_31 % 6);
	if (Local_183[iParam0 /*37*/].f_31 == 0)
	{
		Local_183[iParam0 /*37*/].f_32 = unk_0xC5935DFB3F39785A(0, 4);
	}
	else if (Local_183[iParam0 /*37*/].f_31 == 5)
	{
		Local_183[iParam0 /*37*/].f_29 = -1;
		Local_183[iParam0 /*37*/].f_30 = -1;
		Local_183[iParam0 /*37*/].f_33 = Local_183[iParam0 /*37*/].f_29;
		Local_183[iParam0 /*37*/].f_34 = Local_183[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_183[iParam0 /*37*/].f_31 + Local_183[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_183[iParam0 /*37*/].f_33 = (Local_183[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_183[iParam0 /*37*/].f_34 = (Local_183[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_183[iParam0 /*37*/].f_33 = Local_183[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_183[iParam0 /*37*/].f_34 = (Local_183[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_183[iParam0 /*37*/].f_33 = Local_183[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_183[iParam0 /*37*/].f_34 = Local_183[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_183[iParam0 /*37*/].f_33 = (Local_183[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_183[iParam0 /*37*/].f_34 = Local_183[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
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
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (unk_0xC5935DFB3F39785A(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = unk_0xC5935DFB3F39785A(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_144[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_183[iParam0 /*37*/].f_6)
					{
						Local_183[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_183[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_144[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_183[iParam0 /*37*/].f_6)
					{
						Local_183[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_183[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_144[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_183[iParam0 /*37*/].f_6)
					{
						Local_183[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_183[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_144[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_183[iParam0 /*37*/].f_6)
					{
						Local_183[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_183[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_144[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_183[iParam0 /*37*/].f_6)
					{
						Local_183[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_183[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_183[iParam0 /*37*/].f_29 = unk_0xC5935DFB3F39785A(0, 6);
			Local_183[iParam0 /*37*/].f_30 = unk_0xC5935DFB3F39785A(0, 4);
			break;
	}
}

bool func_308(int iParam0)
{
	return Local_183[iParam0 /*37*/].f_2 <= 4;
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_144.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_188(Local_144.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_310(int iParam0)
{
	return Local_144.f_162;
}

int func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar4)) || Local_183[bVar4 /*37*/].f_25))
		{
			func_188(Local_182[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		bVar4++;
	}
	return -1;
}

int func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_188(Local_183[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar4)) || Local_183[bVar4 /*37*/].f_25)) && (Local_181[bVar4 /*9*/].f_2 > 0 || Local_183[bVar4 /*37*/].f_2 > 0))
		{
			func_188(Local_182[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_183[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_183[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_183[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_183[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		bVar4++;
	}
	return 0;
}

void func_313()
{
	func_321();
	func_318();
	func_314();
}

void func_314()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_181[Local_143.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_316();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_315(Local_182[Local_143.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (unk_0x7E3F74F641EE6B27() < (Local_143.f_178.f_3 + Local_143.f_59[Local_181[Local_143.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_182[Local_143.f_178 /*16*/].f_4;
		Local_182[Local_143.f_178 /*16*/].f_5[Local_143.f_307 /*5*/] = unk_0x7E3F74F641EE6B27();
		Local_182[Local_143.f_178 /*16*/].f_5[Local_143.f_307 /*5*/].f_3 = uVar1;
		Local_182[Local_143.f_178 /*16*/].f_5[Local_143.f_307 /*5*/].f_4 = Local_181[Local_143.f_178 /*9*/].f_5;
		Local_182[Local_143.f_178 /*16*/].f_5[Local_143.f_307 /*5*/].f_1 = { Local_143.f_204[Local_143.f_178 /*19*/] };
		Local_182[Local_143.f_178 /*16*/].f_4 = uVar1;
		Local_143.f_178.f_3 = unk_0x7E3F74F641EE6B27();
		Local_143.f_307++;
		if (Local_143.f_307 >= 2)
		{
			Local_143.f_307 = 0;
		}
		unk_0x97A041099E92C69F(0, 50, 100);
	}
}

int func_315(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { func_191(func_74(12, 8)) };
	Var1 = { func_191(func_74(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_262(Local_143.f_204[Local_143.f_178 /*19*/].f_1, (Var1.f_1 - 0,0001f), (Var1.f_1 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_262(Local_143.f_204[Local_143.f_178 /*19*/].f_1, (Var0.f_1 - 0,0001f), (Var0.f_1 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_262(Local_143.f_204[Local_143.f_178 /*19*/], (Var1.f_0 - 0,0001f), (Var1.f_0 + 0,0001f), 0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_262(Local_143.f_204[Local_143.f_178 /*19*/], (Var0.f_0 - 0,0001f), (Var0.f_0 + 0,0001f), 0))
			{
				return 0;
			}
			break;
	}
	func_188(Local_182[Local_143.f_178 /*16*/], &iVar2, &iVar3);
	func_188(Local_182[Local_143.f_178 /*16*/].f_1, &iVar4, &iVar5);
	if (Local_182[Local_143.f_178 /*16*/].f_2 + func_187(Local_143.f_178)) > unk_0x7E3F74F641EE6B27()
	{
		if (iVar3 != iVar5)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_316()
{
	int iVar0;
	
	if (func_317())
	{
		return -1;
	}
	iVar0 = 229;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 203;
	}
	if (unk_0x4465D55576678706(2, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_317()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 1;
	}
	if (Local_181[Local_143.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_318()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_320();
	bVar1 = func_319(Local_143.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_182[Local_143.f_178 /*16*/].f_4 = 0;
				break;
			
			case 5:
				Local_182[Local_143.f_178 /*16*/].f_4 = 1;
				break;
			
			case 6:
				Local_182[Local_143.f_178 /*16*/].f_4 = 2;
				break;
			
			case 7:
				Local_182[Local_143.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_188(Local_182[Local_143.f_178 /*16*/], &iVar0, &iVar1);
	func_188(Local_182[Local_143.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_182[Local_143.f_178 /*16*/].f_2 + func_187(iParam0)) > unk_0x7E3F74F641EE6B27()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_320()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_317())
	{
		return -1;
	}
	iVar0 = 365;
	iVar1 = 365;
	iVar2 = 365;
	iVar3 = 365;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!unk_0xAE231F549813BBDF(2))
	{
		fVar4 = unk_0xF069618D9974EB9D(2, 221);
	}
	if (fVar4 < -0,65f || (iVar0 != 365 && unk_0x4465D55576678706(2, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0,65f || (iVar1 != 365 && unk_0x4465D55576678706(2, iVar1)))
	{
		return 5;
	}
	fVar5 = unk_0xF069618D9974EB9D(2, 220);
	if (fVar5 < -0,65f || (iVar2 != 365 && unk_0x4465D55576678706(2, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0,65f || (iVar3 != 365 && unk_0x4465D55576678706(2, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_321()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_322();
	bVar1 = false;
	if (((!((Local_182[Local_143.f_178 /*16*/].f_2 + func_187(Local_143.f_178)) < unk_0x7E3F74F641EE6B27() && BitTest(Local_143.f_141, 1)) && unk_0x7E3F74F641EE6B27() < Local_182[Local_143.f_178 /*16*/].f_2 + 100) && Local_182[Local_143.f_178 /*16*/].f_3 != iVar0) && !BitTest(Local_143.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(Local_182[Local_143.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_188(Local_182[Local_143.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_188(Local_182[Local_143.f_178 /*16*/], &iVar2, &iVar3);
		func_188(Local_182[Local_143.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_182[Local_143.f_178 /*16*/].f_2 + func_187(Local_143.f_178)) < unk_0x7E3F74F641EE6B27() && BitTest(Local_143.f_141, 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_143.f_141, 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_182[Local_143.f_178 /*16*/] = func_74(iVar2, iVar3);
			Local_182[Local_143.f_178 /*16*/].f_1 = func_74(iVar4, iVar5);
			if (Local_143.f_178.f_2 > 0)
			{
				Local_181[Local_143.f_178 /*9*/].f_1 = 0,75f;
				Local_143.f_178.f_2 = (Local_143.f_178.f_2 - 1);
			}
			else if (!func_262(Local_181[Local_143.f_178 /*9*/].f_1, (1f - 0,0001f), (1f + 0,0001f), 0))
			{
				Local_181[Local_143.f_178 /*9*/].f_1 = 1f;
			}
			Local_182[Local_143.f_178 /*16*/].f_2 = unk_0x7E3F74F641EE6B27();
			if (iVar8 > 0)
			{
				Local_182[Local_143.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_182[Local_143.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_182[Local_143.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_182[Local_143.f_178 /*16*/].f_4 = 1;
			}
			unk_0x8744D2E3FC95740E(&(Local_143.f_141), true);
			unk_0x8744D2E3FC95740E(&(Local_143.f_141), false);
			Local_182[Local_143.f_178 /*16*/].f_3 = iVar0;
			if (!BitTest(Local_143.f_141, 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), 5);
			}
		}
	}
}

int func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_317())
	{
		return -1;
	}
	if (!BitTest(Local_143.f_141, 5))
	{
		return func_300(Local_181[Local_143.f_178 /*9*/].f_6);
	}
	iVar0 = 365;
	iVar1 = 365;
	iVar2 = 365;
	iVar3 = 365;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 365;
		iVar1 = 365;
		iVar2 = 365;
		iVar3 = 365;
	}
	fVar4 = unk_0xF069618D9974EB9D(2, 219);
	if (fVar4 < -0,65f || (iVar0 != 365 && unk_0x4465D55576678706(2, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0,65f || (iVar1 != 365 && unk_0x4465D55576678706(2, iVar1)))
	{
		return 1;
	}
	fVar5 = unk_0xF069618D9974EB9D(2, 218);
	if (fVar5 < -0,65f || (iVar2 != 365 && unk_0x4465D55576678706(2, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0,65f || (iVar3 != 365 && unk_0x4465D55576678706(2, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_323()
{
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_menus_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_menus_scene");
	}
	if (!unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
	{
		unk_0xCAC4020CCF361AC8("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_173("Ambience", &(Local_143.f_428), func_111(-1f, -1f), 0);
	func_285();
	func_277();
	func_175();
	func_324();
	if (unk_0x7E3F74F641EE6B27() < Local_144.f_146)
	{
		return;
	}
	if (!BitTest(Local_143.f_417, 1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), true);
		func_154("SCGW_H_MOVE", 7500, 0);
	}
	func_172(4);
	func_18(func_19(1));
	func_15(7);
}

void func_324()
{
	func_127();
	func_192();
	func_186();
	if ((Local_144.f_146 - unk_0x7E3F74F641EE6B27()) <= 4500)
	{
		func_218();
	}
	func_202();
	func_179();
	func_107();
	func_106();
}

void func_325()
{
	int iVar0;
	
	func_330();
	func_175();
	if (Local_144.f_145 <= 2)
	{
		return;
	}
	func_328();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_143.f_178 && Local_183[iVar0 /*37*/].f_25)
		{
			func_326(iVar0);
		}
		iVar0++;
	}
	func_172(3);
	func_15(6);
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_327(iParam0);
	Local_183[iParam0 /*37*/].f_2 = 8;
	func_234(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_183[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_183[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_183[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_183[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_183[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_143.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_111(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_143.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_143.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_143.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_143.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_143.f_437 = -2147483647;
	Local_143.f_439 = { func_111(0f, 0f) };
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), true);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_142[iParam0]), false);
	unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), 2);
	unk_0x8744D2E3FC95740E(&(Local_143.f_142[iParam0]), 5);
	func_99(&(Local_143.f_316));
	Local_183[iParam0 /*37*/].f_4 = -2147483647;
	Local_183[iParam0 /*37*/].f_1 = 1f;
	Local_143.f_178.f_2 = 0;
	Local_143.f_308 = 0;
	Local_143.f_307 = 0;
	Local_143.f_429 = 0;
	Local_183[iParam0 /*37*/].f_5 = 0;
}

void func_327(int iParam0)
{
	Local_183[iParam0 /*37*/].f_9 = func_74(Local_143.f_9[Local_183[iParam0 /*37*/].f_6 /*3*/][0], Local_143.f_9[Local_183[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_183[iParam0 /*37*/].f_9.f_1 = Local_183[iParam0 /*37*/].f_9;
	if (Local_143.f_9[Local_183[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_183[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_183[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	
	func_329();
	Local_181[Local_143.f_178 /*9*/].f_2 = 8;
	func_240(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_182[Local_143.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_182[Local_143.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_182[Local_143.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_182[Local_143.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_182[Local_143.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_143.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_111(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_143.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_143.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_143.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_143.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_143.f_437 = -2147483647;
	Local_143.f_439 = { func_111(0f, 0f) };
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), true);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), false);
	unk_0x8744D2E3FC95740E(&(Local_143.f_141), 2);
	unk_0x8744D2E3FC95740E(&(Local_143.f_141), 5);
	func_99(&(Local_143.f_316));
	Local_181[Local_143.f_178 /*9*/].f_4 = -2147483647;
	Local_181[Local_143.f_178 /*9*/].f_1 = 1f;
	func_122(Local_181[Local_143.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_181[Local_143.f_178 /*9*/].f_6;
	Local_181[Local_143.f_178 /*9*/].f_7 = func_134(&uVar2);
	Local_143.f_178.f_2 = 0;
	Local_143.f_308 = 0;
	Local_143.f_307 = 0;
	Local_143.f_429 = 0;
	Local_181[Local_143.f_178 /*9*/].f_5 = 0;
}

void func_329()
{
	Local_182[Local_143.f_178 /*16*/] = func_74(Local_143.f_9[Local_181[Local_143.f_178 /*9*/].f_6 /*3*/][0], Local_143.f_9[Local_181[Local_143.f_178 /*9*/].f_6 /*3*/][1]);
	Local_182[Local_143.f_178 /*16*/].f_1 = Local_182[Local_143.f_178 /*16*/];
	if (Local_143.f_9[Local_181[Local_143.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_182[Local_143.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_182[Local_143.f_178 /*16*/].f_4 = 0;
	}
}

void func_330()
{
	func_127();
	func_192();
	func_185(Local_143.f_107.f_25, 153);
	func_179();
	func_107();
	func_106();
}

void func_331()
{
	func_330();
	func_175();
	if (Local_144.f_145 <= 1)
	{
		return;
	}
	Local_142.f_16 = Local_143.f_148;
	func_15(5);
}

void func_332()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_336();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (unk_0x7E3F74F641EE6B27() > Local_143.f_441 + 500)
	{
		if (Local_181[Local_143.f_178 /*9*/] != 1)
		{
			if (unk_0xDEE3EFEA31A1F555(2, iVar0))
			{
				func_16();
				func_167(1);
				func_240(1);
				func_136("Frontend_Ready");
				Local_143.f_441 = unk_0x7E3F74F641EE6B27();
			}
			if (Local_143.f_452)
			{
				if (unk_0xDEE3EFEA31A1F555(2, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar3)) && !Local_183[bVar3 /*37*/].f_25)
						{
							Local_183[bVar3 /*37*/].f_6 = func_335();
							Local_183[bVar3 /*37*/].f_25 = 1;
							Local_183[bVar3 /*37*/] = 1;
						}
						else
						{
							bVar3++;
						}
					}
				}
			}
		}
		if (Local_181[Local_143.f_178 /*9*/] == 1)
		{
			if (unk_0xDEE3EFEA31A1F555(2, iVar1))
			{
				func_16();
				func_240(0);
				func_136("Frontend_Unready");
				Local_143.f_441 = unk_0x7E3F74F641EE6B27();
			}
		}
	}
	func_334();
	if (Local_144.f_145 >= 2)
	{
		func_15(4);
		func_136("Frontend_Start_Game");
		func_333(1);
	}
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_142, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_142, "Invade and Persuade II.", 64);
	}
	Local_142.f_16 = 0;
	Local_142.f_17 = 0;
	Local_142.f_18 = 0;
	Local_142.f_19 = unk_0x0728E77B2BF91D54();
	Local_142.f_20 = 0;
	Local_142.f_21 = 0;
}

void func_334()
{
	char cVar0[24];
	
	unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_417), false);
	if (Local_181[Local_143.f_178 /*9*/] == 1)
	{
		StringCopy(&cVar0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&cVar0, "SCGW_H_RDY0", 24);
		if (Local_143.f_178.f_1 && Local_143.f_452)
		{
			StringConCat(&cVar0, "_H", 24);
		}
		if (func_152())
		{
			StringConCat(&cVar0, "_PS4", 24);
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		StringConCat(&cVar0, "_PC", 24);
	}
	if (func_131(&cVar0))
	{
		return;
	}
	func_16();
	func_129(&cVar0);
}

int func_335()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_181[iVar0 /*9*/].f_6 == iVar1 && unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_183[bVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			bVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_336()
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	
	func_127();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_142(iVar0, 0);
		if (Local_143.f_149[iVar0] != -1 && Local_181[Local_143.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_143.f_148)
	{
		if (Local_181[Local_143.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar3 = system::round((system::sin((system::to_float(unk_0x1DD05E817C89C737()) * 0,5058f)) * 255f));
		if (iVar3 > 51)
		{
			iVar3 = 255;
		}
		else
		{
			iVar3 = 0;
		}
		unk_0xBFE94E91C83D8794(0,65f, 0,65f);
		unk_0x5A18938160AE52D0(255, 255, 255, iVar3);
		unk_0x2B50C29142312934();
		unk_0xEAF65721ACB2FDFB(1);
		unk_0x8413CD3BCEEAD8DC(7);
		unk_0xEAEB6E7D3FAEBD5B(&cVar2);
		unk_0x25DD447A6EB3A86F(func_125(0,5f), 0,885f, 0);
	}
	func_107();
	func_106();
}

void func_337()
{
	if (!unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_menus_scene"))
	{
		unk_0xCAC4020CCF361AC8("dlc_vw_am_tw_in_menus_scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_in_gameplay_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_127();
	unk_0xAED06A53B3F23CC1(Local_143.f_427, 0,5f, 0,5f, (1f * fLocal_139), 1f, 0f, 255, 255, 255, 255);
	if (unk_0x2362B981748EB883(Local_143.f_427) >= 30f && !BitTest(Local_143.f_141, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_143.f_141), 3);
		func_18(func_19(0));
	}
	if (unk_0x2362B981748EB883(Local_143.f_427) >= 99f)
	{
		unk_0x3A525484C63925D6(Local_143.f_427);
		unk_0xA3B3261566EE06A5(Local_143.f_427);
		func_15(3);
		Local_143.f_154[Local_181[Local_143.f_178 /*9*/].f_6] = unk_0x7E3F74F641EE6B27();
		func_172(2);
	}
	func_107();
	func_106();
}

void func_338()
{
	if (!func_339())
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGrid", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGrid"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridPlayerYellow", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridPlayerPurple", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridPlayerGreen", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridPlayerBlue", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridTiles", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	unk_0xD0D00ED689D6CA81("MPArcadeCabinetGridHUD", 0);
	if (!unk_0x38D063D8CF6D1967("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	unk_0xF2CB0224D3BE0B42("SCGW", 3);
	if (!unk_0xCC2EFE4B1D0EE422("SCGW", 3))
	{
		return;
	}
	if (!unk_0xD7E1DF759CD0FFF2("DLC_VINEWOOD/DLC_VW_AM_TW", 0, -1))
	{
		return;
	}
	func_15(2);
	unk_0x202024EB1E643238(Local_143.f_427);
	unk_0x068BA02ADFAA2B2F(Local_143.f_427, 1);
	func_136("Frontend_Degenatron_Screen");
}

bool func_339()
{
	return ((((((func_340(0) && func_340(6)) && func_340(1)) && func_340(3)) && func_340(4)) && func_340(5)) && func_340(7));
}

int func_340(int iParam0)
{
	unk_0xD0D00ED689D6CA81(func_112(iParam0), 0);
	if (!unk_0x38D063D8CF6D1967(func_112(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_341()
{
	int iVar0;
	int iVar1;
	
	if (Local_144.f_145 > 1)
	{
		if (func_359(unk_0x259BE71D8A81D4FA()))
		{
			Local_143.f_443.f_4 = 0;
			Local_143.f_443.f_3 = 0;
			func_358(&(Local_143.f_443), 11);
		}
		func_15(11);
		return;
	}
	func_349();
	func_348(0);
	func_347();
	func_346();
	func_345();
	func_344();
	func_343();
	func_342();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_143.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_143.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_143.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_143.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_143.f_427 = unk_0x7DB4C41144D9961A("DegenSting_StreetCrime_1920x1080_auto");
	func_15(1);
}

void func_342()
{
	Local_143.f_59[0 /*5*/] = "";
	Local_143.f_59[0 /*5*/].f_2 = 0;
	Local_143.f_59[0 /*5*/].f_4 = 0;
	Local_143.f_59[0 /*5*/].f_3 = 0;
	Local_143.f_59[0 /*5*/].f_1 = 0;
	Local_143.f_59[1 /*5*/] = "gun_";
	Local_143.f_59[1 /*5*/].f_2 = 2;
	Local_143.f_59[1 /*5*/].f_4 = 2;
	Local_143.f_59[1 /*5*/].f_3 = 700;
	Local_143.f_59[1 /*5*/].f_1 = 300;
	Local_143.f_59[2 /*5*/] = "uzi_";
	Local_143.f_59[2 /*5*/].f_2 = 1;
	Local_143.f_59[2 /*5*/].f_4 = 1;
	Local_143.f_59[2 /*5*/].f_3 = 325;
	Local_143.f_59[2 /*5*/].f_1 = 300;
	Local_143.f_59[3 /*5*/] = "rifle_";
	Local_143.f_59[3 /*5*/].f_2 = 3;
	Local_143.f_59[3 /*5*/].f_4 = 2;
	Local_143.f_59[3 /*5*/].f_3 = 650;
	Local_143.f_59[3 /*5*/].f_1 = 200;
	Local_143.f_59[4 /*5*/] = "rocket_";
	Local_143.f_59[4 /*5*/].f_2 = 5;
	Local_143.f_59[4 /*5*/].f_4 = 8;
	Local_143.f_59[4 /*5*/].f_3 = 2000;
	Local_143.f_59[4 /*5*/].f_1 = 525;
	Local_143.f_59[5 /*5*/] = "shotgun_";
	Local_143.f_59[5 /*5*/].f_2 = 2;
	Local_143.f_59[5 /*5*/].f_4 = 4;
	Local_143.f_59[5 /*5*/].f_3 = 1000;
	Local_143.f_59[5 /*5*/].f_1 = 300;
}

void func_343()
{
	Local_143.f_90[0 /*2*/] = "heart_anim_";
	Local_143.f_90[0 /*2*/].f_1 = 10;
	Local_143.f_90[1 /*2*/] = "speed_anim_";
	Local_143.f_90[1 /*2*/].f_1 = 10;
	Local_143.f_90[2 /*2*/] = "phone_anim_";
	Local_143.f_90[2 /*2*/].f_1 = 10;
	Local_143.f_90[3 /*2*/] = "icon_pistol";
	Local_143.f_90[3 /*2*/].f_1 = 0;
	Local_143.f_90[4 /*2*/] = "icon_uzi";
	Local_143.f_90[4 /*2*/].f_1 = 0;
	Local_143.f_90[5 /*2*/] = "icon_rifle";
	Local_143.f_90[5 /*2*/].f_1 = 0;
	Local_143.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_143.f_90[6 /*2*/].f_1 = 0;
	Local_143.f_90[7 /*2*/] = "icon_shotgun";
	Local_143.f_90[7 /*2*/].f_1 = 0;
}

void func_344()
{
	Local_143.f_22[0 /*4*/] = "ice_cream_van_";
	Local_143.f_22[0 /*4*/].f_1 = 1;
	Local_143.f_22[0 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[0 /*4*/].f_2.f_1 = 0,02963f;
	Local_143.f_22[1 /*4*/] = "ambulance_";
	Local_143.f_22[1 /*4*/].f_1 = 2;
	Local_143.f_22[1 /*4*/].f_2 = 0,035417f;
	Local_143.f_22[1 /*4*/].f_2.f_1 = 0,02963f;
	Local_143.f_22[2 /*4*/] = "police_";
	Local_143.f_22[2 /*4*/].f_1 = 2;
	Local_143.f_22[2 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[2 /*4*/].f_2.f_1 = 0,025926f;
	Local_143.f_22[3 /*4*/] = "fire_truck_";
	Local_143.f_22[3 /*4*/].f_1 = 2;
	Local_143.f_22[3 /*4*/].f_2 = 0,045833f;
	Local_143.f_22[3 /*4*/].f_2.f_1 = 0,02963f;
	Local_143.f_22[4 /*4*/] = "tank_";
	Local_143.f_22[4 /*4*/].f_1 = 1;
	Local_143.f_22[4 /*4*/].f_2 = 0,041667f;
	Local_143.f_22[4 /*4*/].f_2.f_1 = 0,025926f;
	Local_143.f_22[5 /*4*/] = "gang_car_green";
	Local_143.f_22[5 /*4*/].f_1 = 1;
	Local_143.f_22[5 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[5 /*4*/].f_2.f_1 = 0,059259f;
	Local_143.f_22[6 /*4*/] = "gang_car_purple";
	Local_143.f_22[6 /*4*/].f_1 = 1;
	Local_143.f_22[6 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[6 /*4*/].f_2.f_1 = 0,059259f;
	Local_143.f_22[7 /*4*/] = "gang_car_yellow";
	Local_143.f_22[7 /*4*/].f_1 = 1;
	Local_143.f_22[7 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[7 /*4*/].f_2.f_1 = 0,059259f;
	Local_143.f_22[8 /*4*/] = "gang_car_blue";
	Local_143.f_22[8 /*4*/].f_1 = 1;
	Local_143.f_22[8 /*4*/].f_2 = 0,033333f;
	Local_143.f_22[8 /*4*/].f_2.f_1 = 0,059259f;
}

void func_345()
{
	Local_143.f_422[0] = "green";
	Local_143.f_422[1] = "purple";
	Local_143.f_422[2] = "yellow";
	Local_143.f_422[3] = "blue";
}

void func_346()
{
	func_217(&(Local_143.f_107[0 /*4*/]), 78, 187, 30, 255);
	func_217(&(Local_143.f_107[1 /*4*/]), 171, 0, 255, 255);
	func_217(&(Local_143.f_107[2 /*4*/]), 255, 228, 0, 255);
	func_217(&(Local_143.f_107[3 /*4*/]), 35, 92, 255, 255);
	func_217(&(Local_143.f_107.f_29), 221, 21, 10, 255);
	func_217(&(Local_143.f_107.f_17), 255, 255, 255, 255);
	func_217(&(Local_143.f_107.f_21), 55, 55, 55, 255);
	func_217(&(Local_143.f_107.f_25), 0, 0, 0, 255);
}

void func_347()
{
	Local_143[0 /*2*/] = { func_111(0,170833f, (0,909259f - 0,019444f)) };
	Local_143[1 /*2*/] = { func_111(0,170833f, (0,109259f + 0,019444f)) };
	Local_143[2 /*2*/] = { func_111(0,829167f, (0,109259f + 0,019444f)) };
	Local_143[3 /*2*/] = { func_111(0,829167f, (0,909259f - 0,019444f)) };
	Local_143.f_9[0 /*3*/][0] = 1;
	Local_143.f_9[0 /*3*/][1] = 2;
	Local_143.f_9[1 /*3*/][0] = 11;
	Local_143.f_9[1 /*3*/][1] = 2;
	Local_143.f_9[2 /*3*/][0] = 1;
	Local_143.f_9[2 /*3*/][1] = 6;
	Local_143.f_9[3 /*3*/][0] = 11;
	Local_143.f_9[3 /*3*/][1] = 6;
}

void func_348(int iParam0)
{
	Local_184.f_137 = iParam0;
	func_217(&(Local_184[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_184[1 /*17*/].f_6 = 1000;
	Local_184[1 /*17*/].f_7 = 10000;
	Local_184[2 /*17*/].f_1 = 1;
	Local_184[2 /*17*/].f_8 = 40;
	func_217(&(Local_184[2 /*17*/].f_9), 0, 0, 0, 0);
	func_217(&(Local_184[3 /*17*/].f_9), 255, 255, 255, 127);
	func_217(&(Local_184[4 /*17*/].f_9), 255, 255, 255, 127);
	func_217(&(Local_184[5 /*17*/].f_9), 255, 255, 255, 127);
	func_217(&(Local_184[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_184.f_137)
	{
		case 2:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 30);
			func_217(&(Local_184[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[3 /*17*/] = 1;
			break;
		
		case 3:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 30);
			func_217(&(Local_184[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[4 /*17*/] = 1;
			break;
		
		case 4:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 30);
			func_217(&(Local_184[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[5 /*17*/] = 1;
			break;
		
		case 1:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[3 /*17*/] = 1;
			break;
		
		case 0:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 10);
			func_217(&(Local_184[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[5 /*17*/] = 1;
			break;
		
		case 6:
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 10);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 8);
			func_217(&(Local_184[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_184[0 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[7 /*17*/] = 1;
			break;
		
		case 7:
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_184[2 /*17*/] = 1;
			Local_184[0 /*17*/] = 1;
			func_217(&(Local_184[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_184[3 /*17*/] = 1;
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_184[6 /*17*/] = 1;
			break;
		
		case 5:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 30);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 20);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 1;
			Local_184[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_184[1 /*17*/] = 0;
			Local_184[2 /*17*/] = 0;
			Local_184[0 /*17*/] = 1;
			func_217(&(Local_184[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_184[6 /*17*/] = 1;
			func_217(&(Local_184[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_184[7 /*17*/] = 1;
			func_217(&(Local_184[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_184[1 /*17*/] = 0;
			Local_184[2 /*17*/] = 0;
			Local_184[0 /*17*/] = 1;
			func_217(&(Local_184[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_184[6 /*17*/] = 1;
			func_217(&(Local_184[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_184[7 /*17*/] = 1;
			func_217(&(Local_184[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_184[1 /*17*/] = 0;
			Local_184[2 /*17*/] = 0;
			Local_184[0 /*17*/] = 1;
			func_217(&(Local_184[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_184[6 /*17*/] = 1;
			func_217(&(Local_184[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_184[7 /*17*/] = 1;
			func_217(&(Local_184[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 15);
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 10);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			Local_184[1 /*17*/] = 1;
			Local_184[3 /*17*/] = 1;
			break;
		
		case 12:
			func_217(&(Local_184[1 /*17*/].f_9), 255, 255, 255, 3);
			func_217(&(Local_184[2 /*17*/].f_13), 0, 0, 0, 15);
			func_217(&(Local_184[0 /*17*/].f_9), 0, 0, 255, 90);
			func_217(&(Local_184[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_184[1 /*17*/] = 1;
			Local_184[2 /*17*/] = 0;
			Local_184[0 /*17*/] = 1;
			Local_184[6 /*17*/] = 1;
			break;
	}
}

void func_349()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), 16);
	Global_4718592.f_178913 = 1;
	Global_1663322 = 1;
	func_351();
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_22(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
		func_350();
	}
	else
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
	}
	func_40(1, 0, 1, 0);
	func_21(0, 1, -1);
	func_21(1, 1, -1);
	func_21(2, 1, -1);
	func_21(3, 1, -1);
	func_21(4, 1, -1);
	func_21(6, 1, -1);
	func_21(7, 1, -1);
	func_21(8, 1, -1);
	func_21(9, 1, -1);
	func_21(10, 1, -1);
	func_21(11, 1, -1);
	func_21(12, 1, -1);
	func_21(13, 1, -1);
	func_21(14, 1, -1);
	func_21(15, 1, -1);
	func_21(16, 1, -1);
}

void func_350()
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

void func_351()
{
	if (func_357() || func_356())
	{
		func_355();
		func_352();
	}
}

void func_352()
{
	if ((!func_354() && !func_353()) && Global_2685443)
	{
		Global_4718592.f_127178 = 0;
	}
}

bool func_353()
{
	return Global_2684504.f_693;
}

bool func_354()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

void func_355()
{
	Global_2684504.f_758 = 1;
}

var func_356()
{
	return Global_2684504.f_737;
}

var func_357()
{
	return BitTest(Global_2684504.f_2, 11);
}

void func_358(var uParam0, int iParam1)
{
	struct<9> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_6 = 1073741824;
	Var0.f_7 = -1073741824;
	Var0.f_0 = 66206781;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam0->f_3;
	Var0.f_5 = uParam0->f_4;
	Var0.f_6 = uParam0->f_6;
	Var0.f_7 = uParam0->f_7;
	Var0.f_8 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438, 1))
		{
			unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438), true);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_100(&(uParam0->f_1)))
	{
		func_97(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_100(&(uParam0->f_1)) && !func_96(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_99(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_99(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_58(unk_0x259BE71D8A81D4FA());
		if (iVar3 != -1)
		{
			unk_0x71A6F836422FDD2B(1, &Var0, 9, iVar3, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

int func_359(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_64(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_47(Global_2657971[iParam0 /*465*/].f_322.f_8) == 17;
			}
		}
	}
	return 0;
}

void func_360()
{
	bool bVar0;
	int iVar1;
	
	if (Global_1928430.f_1 != 0)
	{
		func_167(0);
	}
	Local_143.f_411 = (Local_143.f_411 + system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
	Local_143.f_412 = system::floor((IntToFloat(Local_143.f_411) / 66f));
	Local_143.f_411 = (Local_143.f_411 - system::round((66f * IntToFloat(Local_143.f_412))));
	Local_143.f_413 = (Local_143.f_413 + system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
	Local_143.f_414 = system::floor((IntToFloat(Local_143.f_413) / (66f * 3f)));
	Local_143.f_413 = (Local_143.f_413 - system::round(((66f * 3f) * IntToFloat(Local_143.f_414))));
	Local_143.f_311 = (Local_143.f_311 + Local_143.f_412);
	Local_143.f_416 = (Local_143.f_416 + Local_143.f_414);
	if (Local_143.f_416 >= 3)
	{
		Local_143.f_416 = 0;
	}
	func_402();
	func_401();
	func_400();
	if (Local_143.f_140 >= 11)
	{
		return;
	}
	if (!func_37())
	{
		func_15(11);
		return;
	}
	if (func_387())
	{
		if (func_359(unk_0x259BE71D8A81D4FA()))
		{
			Local_143.f_443.f_4 = 0;
			Local_143.f_443.f_3 = 0;
			func_358(&(Local_143.f_443), 11);
		}
		func_15(11);
		return;
	}
	if ((Local_143.f_178.f_1 && !Local_144.f_164) && (Local_143.f_435 == -2147483647 || (unk_0x7E3F74F641EE6B27() - Local_143.f_435) > 5000))
	{
		func_386(func_59(unk_0x259BE71D8A81D4FA()), 0);
		Local_143.f_435 = unk_0x7E3F74F641EE6B27();
	}
	func_377();
	unk_0x8744D2E3FC95740E(&(Local_143.f_417), false);
	bVar0 = Local_143.f_140 >= 2;
	func_361(bVar0);
	Local_143.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_143.f_178 != iVar1 && unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			Local_143.f_452 = 0;
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 <= 3)
	{
		if (!Local_143.f_452)
		{
			Local_183[bVar1 /*37*/].f_25 = 0;
			func_12(0);
		}
		if (Local_183[bVar1 /*37*/].f_25)
		{
			func_12(1);
		}
		bVar1++;
	}
}

void func_361(bool bParam0)
{
	func_374();
	unk_0xE0EEB603997F273F(0);
	unk_0xE0EEB603997F273F(2);
	if (unk_0x761778199FE1211C())
	{
		unk_0x66EFB3D6110055C4(2, 200, 1);
	}
	unk_0x66EFB3D6110055C4(2, 199, 1);
	unk_0xA66AC5949E305457(0);
	func_373(1);
	func_372(4, -1);
	unk_0xD10838CEA97E4725(19);
	func_371();
	func_370();
	unk_0x0C9B2F8C2BD128C2();
	if (bParam0)
	{
		func_363(0);
		if (!unk_0x4D9174D8796EA622())
		{
			unk_0x43AE50D2A33F6E2A();
			unk_0xA4F67CEB594AE064(1);
		}
	}
	func_362();
	unk_0xC0964AABD3C0CC7E();
}

void func_362()
{
	Global_23692.f_134 = 1;
}

void func_363(int iParam0)
{
	if (func_369())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_368(0))
		{
			func_364(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_364(int iParam0)
{
	if (func_369())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_367())
		{
			func_366(1, 1);
		}
		else
		{
			func_366(0, 0);
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
	if (!func_365())
	{
		Global_20930.f_1 = 3;
	}
}

int func_365()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_366(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_368(0))
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

bool func_367()
{
	return BitTest(Global_1956920, 5);
}

int func_368(int iParam0)
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

bool func_369()
{
	return BitTest(Global_1956920, 19);
}

void func_370()
{
	Global_23692.f_6 = 1;
}

void func_371()
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574755.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574755.f_1));
}

void func_372(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1047), iParam0);
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

void func_373(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_374()
{
	fLocal_138 = func_376();
	fLocal_139 = func_375();
}

float func_375()
{
	return (1,778f / fLocal_138);
}

float func_376()
{
	unk_0x21564F65F997D833(&uLocal_140, &iLocal_141);
	fLocal_138 = unk_0x4AE9635532D92447(0);
	if (unk_0x761778199FE1211C())
	{
		if (fLocal_138 >= 4f)
		{
			fLocal_138 = (fLocal_138 / 3f);
		}
	}
	return fLocal_138;
}

void func_377()
{
	int iVar0;
	struct<4> Var1;
	struct<6> Var2;
	struct<5> Var3;
	struct<6> Var4;
	struct<16> Var5;
	struct<2> Var6;
	
	Var5.f_4 = 10;
	Var5.f_15 = 10;
	iVar0 = 0;
	while (iVar0 < unk_0x703C4F7316B7195D(1))
	{
		if (unk_0x4BC3E5D2FB0A1665(1, iVar0) != 174)
		{
		}
		else if (unk_0xFCEF367B86651ED3(1, iVar0, &Var1, 4))
		{
			if (Var1.f_0 == -2013943038)
			{
				func_385(Var1.f_3);
			}
			else if (unk_0xFCEF367B86651ED3(1, iVar0, &Var2, 6))
			{
				if (Var2.f_0 == 385697842)
				{
					if (Var2.f_4 < 0 || Var2.f_4 >= 4)
					{
					}
					else
					{
						func_383(Var2.f_3, Var2.f_4, Var2.f_5);
						Jump @325; //curOff = 147
						if (unk_0xFCEF367B86651ED3(1, iVar0, &Var3, 5))
						{
							if (Var3.f_0 == 743327592)
							{
								func_382(Var3.f_4, Var3.f_3);
							}
							else if (unk_0xFCEF367B86651ED3(1, iVar0, &Var4, 6))
							{
								if (Var3.f_0 == 444085151)
								{
									func_381(Var4.f_3, Var4.f_4, Var4.f_5);
								}
								else if (unk_0xFCEF367B86651ED3(1, iVar0, &Var5, 26))
								{
									if (Var5.f_0 == -2031658982)
									{
										if (Local_144.f_164)
										{
										}
										else if (Var5.f_3 != 0)
										{
										}
										else
										{
											func_379(&(Var5.f_4), &(Var5.f_15));
											Jump @325; //curOff = 288
											if (unk_0xFCEF367B86651ED3(1, iVar0, &Var6, 3))
											{
												if (Var6.f_0 == 296141736)
												{
													func_378(Var6.f_1);
												}
											}
										}
										iVar0++;
									}

void func_378(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x857CA6FCE5E9C84F(uParam0);
	iVar1 = func_133(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_144.f_165[iVar1 /*3*/] = Local_181[iVar0 /*9*/].f_7;
	func_57(func_59(unk_0x259BE71D8A81D4FA()), 0, iVar1, Local_144.f_165[iVar1 /*3*/], Local_144.f_165[iVar1 /*3*/].f_1, 0);
}

void func_379(var uParam0, var uParam1)
{
	int iVar0;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_144.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_144.f_165[iVar0 /*3*/] = func_380(iVar0);
			func_57(func_59(unk_0x259BE71D8A81D4FA()), 0, iVar0, Local_144.f_165[iVar0 /*3*/], Local_144.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_144.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_144.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_144.f_164 = 1;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_381(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_168("Hit_By_Car", iParam0, &(Local_143.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_168("Death", iParam0, &(Local_143.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_168("Pain", iParam0, &(Local_143.f_204[iParam0 /*19*/].f_6));
	}
}

void func_382(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar4[2];
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	iVar5 = 1;
	func_188(iParam1, &iVar1, &iVar2);
	if (func_76())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar6 = func_76();
			iVar3[iVar0] = func_75(bVar6, 0, 1);
			uVar4[iVar0] = func_74((iVar1 + iVar5), func_75(bVar6, 8, 0));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar7 = func_76();
			iVar3[iVar0] = func_75(bVar7, 2, 3);
			uVar4[iVar0] = func_74(func_75(bVar7, 12, 0), (iVar2 + iVar5));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	iVar8 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_144.f_148[(iVar0 + iVar8) /*4*/].f_1 = uVar4[iVar0];
		Local_144.f_148[(iVar0 + iVar8) /*4*/] = unk_0x7E3F74F641EE6B27() + 1000;
		Local_144.f_148[(iVar0 + iVar8) /*4*/].f_2 = iVar3[iVar0];
		Local_144.f_148[(iVar0 + iVar8) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_144.f_161 = unk_0x7E3F74F641EE6B27();
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_84(&(Local_144.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				func_92(&(Local_144.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (func_84(&(Local_144.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			func_384(&(Local_144.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_384(var uParam0, int iParam1)
{
	unk_0x8744D2E3FC95740E(uParam0[func_86(iParam1)], func_85(iParam1));
}

void func_385(int iParam0)
{
	if (!Local_143.f_178.f_1)
	{
		return;
	}
	Local_144.f_62[iParam0 /*3*/].f_1 = -1;
	Local_144.f_62[iParam0 /*3*/] = -1;
	Local_144.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

void func_386(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 457347143;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	iVar1 = func_58(iParam0);
	if (!iVar1 == 0 && func_64(iParam0, 0, 1))
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iVar1, Var0.f_0);
	}
}

int func_387()
{
	int iVar0;
	
	if (Global_1928432)
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (func_397(unk_0xB6B621402486C3E4()))
	{
		return 1;
	}
	if (!func_396())
	{
		return 1;
	}
	if (func_391())
	{
		return 1;
	}
	if (Local_144.f_145 == 4 && Local_181[Local_143.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_143.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 214;
	}
	if (unk_0x6D05C5731A838CB3(2, iVar0) || unk_0x4465D55576678706(2, iVar0))
	{
		func_388((1000 - unk_0x510D0699BE9C6D06((unk_0x7E3F74F641EE6B27() - Local_143.f_431))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	else
	{
		func_388(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (unk_0x4465D55576678706(2, iVar0))
	{
		if (Local_143.f_431 == -2147483647)
		{
			Local_143.f_431 = unk_0x7E3F74F641EE6B27() + 1000;
		}
		if (unk_0x7E3F74F641EE6B27() > Local_143.f_431)
		{
			return 1;
		}
	}
	else if (Local_143.f_431 != -2147483647)
	{
		Local_143.f_431 = -2147483647;
	}
	if (func_359(unk_0x259BE71D8A81D4FA()))
	{
		if (func_391())
		{
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_390(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(0, iVar0);
		Global_1670224.f_1177[iVar0] = iParam0;
		Global_1670224.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[iVar0] = iParam3;
		Global_1670224.f_1177.f_183[iVar0] = iParam4;
		Global_1670224.f_1177.f_227[iVar0] = iParam5;
		Global_1670224.f_1177.f_238[iVar0 /*3*/] = iParam6;
		Global_1670224.f_1177.f_238[iVar0 /*3*/].f_1 = iParam7;
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

void func_389(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_390(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_391()
{
	if (func_359(unk_0x259BE71D8A81D4FA()))
	{
		if (func_30(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
		if (func_395(unk_0x259BE71D8A81D4FA(), 0) && func_393(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	if (func_392())
	{
		return 1;
	}
	if (Global_1579653.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_392()
{
	return BitTest(Global_1971394, 14);
}

var func_393(int iParam0)
{
	return func_394(iParam0, 20);
}

var func_394(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_395(int iParam0, int iParam1)
{
	if (func_35(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_396()
{
	switch (func_46())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_1887305[iParam0 /*610*/].f_515, 3);
	}
	return 0;
}

bool func_398()
{
	return Global_1943520.f_5003.f_1 != -1;
}

bool func_399()
{
	return Global_1943520.f_559;
}

void func_400()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Local_143.f_147 = 0;
	Local_143.f_148 = 0;
	Local_143.f_434 = Local_143.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_143.f_149[iVar2] = -1;
		if (iLocal_180[iVar2] > iVar0)
		{
			iVar0 = iLocal_180[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_180[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar2)) && !Local_183[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_181[bVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_143.f_149[Local_181[bVar2 /*9*/].f_6] = bVar2;
			if (Local_181[bVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = bVar2;
			}
			if (Local_143.f_154[Local_181[bVar2 /*9*/].f_6] == -2147483647 && Global_1928430.f_1 == 0)
			{
				func_167((12 + Local_181[bVar2 /*9*/].f_6));
				Local_143.f_154[Local_181[bVar2 /*9*/].f_6] = unk_0x7E3F74F641EE6B27();
			}
			Local_143.f_148++;
			if (Local_143.f_204[bVar2 /*19*/].f_9 != Local_181[bVar2 /*9*/].f_2)
			{
				iVar3 = (Local_181[bVar2 /*9*/].f_2 - Local_143.f_204[bVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_143.f_204[bVar2 /*19*/].f_9 = (Local_143.f_204[bVar2 /*19*/].f_9 + Local_143.f_412);
					if (Local_143.f_204[bVar2 /*19*/].f_9 > Local_181[bVar2 /*9*/].f_2)
					{
						Local_143.f_204[bVar2 /*19*/].f_9 = Local_181[bVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_143.f_204[bVar2 /*19*/].f_9 = (Local_143.f_204[bVar2 /*19*/].f_9 - Local_143.f_414);
					if (Local_143.f_204[bVar2 /*19*/].f_9 < Local_181[bVar2 /*9*/].f_2)
					{
						Local_143.f_204[bVar2 /*19*/].f_9 = Local_181[bVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_181[bVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_143.f_147++;
			}
		}
		bVar2++;
	}
	Local_143.f_433 = iVar1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (Local_143.f_149[bVar2] == -1 && Local_143.f_154[bVar2] != -2147483647)
		{
			Local_143.f_154[bVar2] = -2147483647;
		}
		bVar2++;
	}
}

void func_401()
{
	var uVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		Local_143.f_178 = unk_0xAE032CEDCF23C6D5();
		uVar0 = unk_0x93E08E0F531E2C35();
		Local_143.f_178.f_1 = uVar0;
	}
}

void func_402()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_183[iVar0 /*37*/].f_25)
		{
			Local_181[iVar0 /*9*/] = { Local_183[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_403()
{
	system::wait(0);
}

void func_404(struct<21> Param0)
{
	func_410(4, Param0);
	func_408(0, -1, 0);
	func_407();
	func_406();
	unk_0x6F4A865F87C7A3AD(&Local_144, 201, 0);
	unk_0x2867D5E1AD29963D(&iLocal_180, 5, 0);
	unk_0x7B13DC83218D9AF5(&Local_181, 37, 0);
	unk_0x2F0F5E0292A89B1C(&Local_182, 65, 0);
	if (!func_405())
	{
		func_9();
	}
	Local_181[unk_0xAE032CEDCF23C6D5() /*9*/].f_6 = Param0.f_19;
}

int func_405()
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
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
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

void func_406()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_144[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_144.f_62[iVar0 /*3*/] = -1;
		Local_144.f_62[iVar0 /*3*/].f_1 = -1;
		Local_144.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_144.f_148[iVar0 /*4*/] = -2147483647;
		Local_144.f_148[iVar0 /*4*/].f_1 = -1;
		Local_144.f_148[iVar0 /*4*/].f_2 = -1;
		Local_144.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_144.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_144.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_407()
{
}

int func_408(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
		if (!func_409(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_10();
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
					func_10();
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
				func_10();
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
			func_10();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_409(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_410(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_10();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}

