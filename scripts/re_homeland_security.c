#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48[2] = { 0, 0 };
	struct<3> Local_49[2];
	float fLocal_50[2] = { 0f, 0f };
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<6> Local_60 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87[2] = { 0, 0 };
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 16;
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
	struct<2> Local_283 = { 0, 5 } ;
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
	var uLocal_299 = 5;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0,001f;
	iLocal_16 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_43 = -1f;
	StringCopy(&Local_60, "", 24);
	if (unk_0x96CFB880BAC634CE(11))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_56))
		{
			if (unk_0x133460AD0F183CC9(iLocal_56))
			{
				unk_0x5C4B3034CCDA5270(iLocal_56);
			}
		}
		func_213();
	}
	if (func_171(ScriptParam_283.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_168(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		system::wait(0);
		if ((unk_0x173751E886F8E9AB() || iLocal_74) || iLocal_101)
		{
			if (!func_167())
			{
				if (func_166())
				{
					func_213();
				}
			}
			unk_0xECF30459397D5190("RE_RA", 0);
			switch (iLocal_44)
			{
				case 0:
					if (func_154())
					{
						func_213();
					}
					if (!iLocal_69)
					{
						func_153();
					}
					else
					{
						func_152();
					}
					if (bLocal_70)
					{
						iLocal_68 = 1;
						iLocal_44 = 1;
					}
					break;
				
				case 1:
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						switch (iLocal_45)
						{
							case 0:
								func_145();
								iLocal_45 = 1;
								break;
							
							case 1:
								if (!func_144())
								{
									if ((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_57, 75f, 75f, 75f, 0, 1, 0) && !unk_0xF6C26AE940C14749(iLocal_56)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_167())
										{
											unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iLocal_56, -1, 0, 2);
											unk_0x425BBE19F25A57AB(0,1f);
											func_143();
											func_134(1);
										}
										bLocal_77 = true;
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]) && !unk_0x4FAFF4BCB7633475(iLocal_48[1]))
									{
										if (unk_0x9B3D4335E0EDB0BE(iLocal_48[0], unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_48[1], unk_0x4A8C381C258A124D(), 1))
										{
											func_143();
											bLocal_77 = true;
										}
									}
									if (bLocal_77)
									{
										func_128();
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_56) && unk_0xD9F5E1FEFD1329E4(uLocal_51, 0))
									{
										if (unk_0xCECDBB848D53DEB2(iLocal_56, uLocal_51, 0))
										{
											iLocal_101 = 1;
										}
									}
									if (bLocal_102)
									{
										if (unk_0xD9F5E1FEFD1329E4(uLocal_51, 0))
										{
											if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_51, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_45 = 9;
											}
										}
									}
								}
								if (func_127())
								{
									func_143();
									iLocal_45 = 3;
								}
								else if (func_144())
								{
									func_143();
									func_125();
									iLocal_45 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_96)
								{
									case 0:
										iLocal_45 = 3;
										break;
									
									case 1:
										iLocal_45 = 3;
										break;
									
									case 3:
										iLocal_45 = 3;
										break;
									
									case 4:
										iLocal_45 = 3;
										break;
									
									case 5:
										if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
										{
											iLocal_104 = 1;
											iLocal_47 = 9;
										}
										else
										{
											iLocal_47 = 13;
										}
										iLocal_45 = 1;
										break;
								}
								if (func_144())
								{
									switch (iLocal_46)
									{
										case 2:
											func_124();
											break;
										
										case 4:
											func_123();
											break;
										
										case 5:
											func_122();
											break;
										}
								}
								break;
							
							case 3:
								func_119();
								unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
								if (!unk_0x4FAFF4BCB7633475(iLocal_56))
								{
									unk_0xEBA2204AAD092B47(iLocal_56, 3, 0, 0);
									if (!unk_0x7F420695E3F776FB(iLocal_56, 0))
									{
										if (!iLocal_83)
										{
											if (unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "idle_girl", 3) && !unk_0x8BF5256C439DF778(iLocal_56))
											{
												unk_0x72B18C9612CF3DA0(iLocal_56, 16);
												unk_0xB5396F1FB088FE38(&uLocal_100);
												unk_0x10425721983AE158(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0x10425721983AE158(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0x93C0674FC00824D0(uLocal_100);
												unk_0x4BD42B0527065BB6(iLocal_56, uLocal_100);
												unk_0xD0557B139A542F12(&uLocal_100);
												iLocal_83 = 1;
											}
											else
											{
												unk_0xAFC7A89C990C4339(iLocal_56, -1);
												iLocal_83 = 1;
											}
										}
										else if ((((!unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "idle_girl", 3) && !unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_cower")) != 0) && unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_cower")) != 1)
										{
											iLocal_83 = 0;
										}
									}
									else if (unk_0xD9F5E1FEFD1329E4(iLocal_51, 0))
									{
										if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_51, 0))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_86))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_86);
											}
										}
									}
								}
								else
								{
									func_118();
								}
								if (!func_117())
								{
									if (iLocal_93 < unk_0x1DD05E817C89C737())
									{
										if (func_116())
										{
											if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
											{
												func_115(&uLocal_118, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
										{
											func_115(&uLocal_118, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_93 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4500, 5000));
									}
								}
								if (unk_0x4FAFF4BCB7633475(iLocal_48[0]))
								{
									if (unk_0xC450B06E5AAA0985(uLocal_87[0]))
									{
										unk_0xFE54B8568B2ABD12(&(uLocal_87[0]));
									}
									func_114(&uLocal_118, 5);
								}
								else if (unk_0x7E54CB377175F94E(iLocal_48[0], unk_0x4A8C381C258A124D()) || unk_0xFAA48325A90263BE(iLocal_48[0], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xC450B06E5AAA0985(uLocal_87[0]))
								{
									unk_0xFE54B8568B2ABD12(&(uLocal_87[0]));
								}
								if (unk_0x4FAFF4BCB7633475(iLocal_48[1]))
								{
									if (unk_0xC450B06E5AAA0985(uLocal_87[1]))
									{
										unk_0xFE54B8568B2ABD12(&(uLocal_87[1]));
									}
									func_114(&uLocal_118, 4);
								}
								else if (unk_0x7E54CB377175F94E(iLocal_48[1], unk_0x4A8C381C258A124D()) || unk_0xFAA48325A90263BE(iLocal_48[1], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xC450B06E5AAA0985(uLocal_87[1]))
								{
									unk_0xFE54B8568B2ABD12(&(uLocal_87[1]));
								}
								if (unk_0xFC8BFE4B41177C22(iLocal_48[0]) && unk_0xFC8BFE4B41177C22(iLocal_48[1]))
								{
									if (((unk_0x1AC621DBDFE4ECA0(iLocal_48[0], joaat("weapon_stungun"), 0) && unk_0x1AC621DBDFE4ECA0(iLocal_48[1], joaat("weapon_stungun"), 0)) || (unk_0x89568FA9A6BC0B4A(iLocal_48[0], 1) && unk_0x89568FA9A6BC0B4A(iLocal_48[1], 1))) || func_113())
									{
										if (unk_0xC450B06E5AAA0985(uLocal_87[0]))
										{
											unk_0xFE54B8568B2ABD12(&(uLocal_87[0]));
										}
										if (unk_0xC450B06E5AAA0985(uLocal_87[1]))
										{
											unk_0xFE54B8568B2ABD12(&(uLocal_87[1]));
										}
										if (!unk_0x4FAFF4BCB7633475(iLocal_56))
										{
											if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_117())
												{
													func_115(&uLocal_118, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_62 = false;
													iLocal_74 = 1;
													unk_0xBCB78CFBB026B0DF(iLocal_56, 16);
													unk_0xE4DC7B3DD712372B(iLocal_56);
													iLocal_45 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_62)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_56))
									{
										if ((unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x8BF5256C439DF778(iLocal_56))
										{
											unk_0x10425721983AE158(iLocal_56, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0,3f, 0, 0, 0);
										}
										else
										{
											unk_0x974022927CB47E68(iLocal_56);
										}
										unk_0x412B9F2CF0E60079(iLocal_56, 0);
										unk_0x03AB73582A77DBD3(iLocal_56, func_112());
										unk_0xBC14FFDBE1C32C51(iLocal_56, 1);
										func_111();
										bLocal_62 = true;
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_56))
								{
									if (unk_0x13CCB1AD131C1082(iLocal_56, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x82E64DE58A6B84A8(iLocal_56, "random@homelandsecurity", "knees_to_stand_girl") > 0,8f)
										{
											unk_0x974022927CB47E68(iLocal_56);
										}
									}
								}
								if (!iLocal_64)
								{
									if (!func_117())
									{
										if (func_115(&uLocal_118, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_64 = 1;
										}
									}
								}
								else if (!iLocal_63)
								{
									if (!func_117())
									{
										if (func_110() == 0)
										{
											func_115(&uLocal_118, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_110() == 1)
										{
											func_115(&uLocal_118, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_63 = 1;
									}
								}
								if (bLocal_62)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_56))
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 8f, 8f, 8f, 0, 1, 0) || unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_86))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_86);
											}
										}
										else if (!unk_0xC450B06E5AAA0985(uLocal_86))
										{
											uLocal_86 = func_108(iLocal_56, 0, 145);
										}
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
								{
									if (unk_0x7E54CB377175F94E(iLocal_48[0], unk_0x4A8C381C258A124D()))
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
										{
										}
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
								{
									if (unk_0x7E54CB377175F94E(iLocal_48[1], unk_0x4A8C381C258A124D()))
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
										{
										}
									}
								}
								if (iLocal_63 && func_107())
								{
									if (!func_117())
									{
										func_105();
										system::wait(0);
										func_115(&uLocal_118, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0xF09E30AF1B8FB379(&(iLocal_48[0]));
										unk_0xF09E30AF1B8FB379(&(iLocal_48[1]));
										if (!unk_0x4FAFF4BCB7633475(iLocal_56))
										{
											if (unk_0x133460AD0F183CC9(iLocal_56))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_48)
												{
													if (unk_0xFC8BFE4B41177C22(iLocal_48[iVar0]))
													{
														unk_0xF09E30AF1B8FB379(&(iLocal_48[iVar0]));
													}
													iVar0++;
												}
												unk_0x425BBE19F25A57AB(1f);
												iLocal_45 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_99();
								func_94();
								func_93();
								func_90();
								func_89();
								if (func_88(Local_65))
								{
									func_69(0);
									func_105();
									system::wait(0);
									func_115(&uLocal_118, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_67())
								{
									func_69(0);
									func_105();
									system::wait(0);
									func_115(&uLocal_118, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_56))
								{
									if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_65, Global_23, 1, 1, 0) && unk_0xFAA48325A90263BE(iLocal_56, unk_0x4A8C381C258A124D(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0x133460AD0F183CC9(iLocal_56))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_86))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_86);
											}
											if (unk_0xC450B06E5AAA0985(uLocal_88))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_88);
											}
											if (unk_0xC450B06E5AAA0985(uLocal_89))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_89);
											}
											if (unk_0x133460AD0F183CC9(iLocal_56))
											{
												unk_0x5C4B3034CCDA5270(iLocal_56);
											}
											if (func_107())
											{
												if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
												{
													unk_0xE5EE5C9DDF05D925(unk_0xDC8D5832207C2EAD(), 5f, 2, 0);
												}
												iLocal_45 = 6;
											}
											else
											{
												func_105();
												system::wait(0);
												func_115(&uLocal_118, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x4FAFF4BCB7633475(iLocal_56))
												{
													unk_0xB5396F1FB088FE38(&uLocal_100);
													unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 5000, 2052, 2);
													unk_0xA966E518B752B92A(0, Local_66, 1f, -1, 0,25f, 0, 38,9844f);
													unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0x93C0674FC00824D0(uLocal_100);
													unk_0x4BD42B0527065BB6(iLocal_56, uLocal_100);
													unk_0xD0557B139A542F12(&uLocal_100);
													unk_0x44FB298D6382876D(iLocal_56, 1);
												}
												func_35(func_110(), 1, 80, 0, 1);
												iLocal_45 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_34();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_118();
								break;
						}
						if (iLocal_114 && !iLocal_115)
						{
							if (iLocal_45 != 6)
							{
								if (unk_0x5266F1D2AEF6F73A(uLocal_113))
								{
									if (unk_0xBD3B265153D3BA2D(uLocal_113) > 0,85f)
									{
										if (unk_0xD9F5E1FEFD1329E4(iLocal_51, 0))
										{
											if (!unk_0x4FAFF4BCB7633475(iLocal_56))
											{
												if (!unk_0xCECDBB848D53DEB2(iLocal_56, iLocal_51, 0))
												{
													if (!unk_0x8BF5256C439DF778(iLocal_56))
													{
														unk_0x974022927CB47E68(iLocal_56);
														unk_0x73CAFD2038E812B3(iLocal_56, iLocal_51, 2);
														unk_0x44FB298D6382876D(iLocal_56, 1);
														iLocal_115 = 1;
													}
													else
													{
														iLocal_115 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_56))
							{
								unk_0x734A9F4537A31459(&iLocal_56);
							}
							func_4();
						}
						if ((iLocal_45 != 0 && iLocal_45 != 6) && iLocal_45 != 7)
						{
							if (func_1())
							{
								iLocal_45 = 9;
							}
						}
						if (iLocal_45 == 4 || iLocal_45 == 5)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 150f, 150f, 150f, 0, 1, 0) || unk_0x9B3D4335E0EDB0BE(iLocal_56, unk_0x4A8C381C258A124D(), 1))
								{
									unk_0xD844F5E50DAB6FF7(iLocal_56, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
									func_105();
									func_118();
								}
							}
						}
						if (iLocal_45 < 5)
						{
							unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_48[0]))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_87[0]))
							{
								unk_0xFE54B8568B2ABD12(&(uLocal_87[0]));
							}
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_48[1]))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_87[1]))
							{
								unk_0xFE54B8568B2ABD12(&(uLocal_87[1]));
							}
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_86))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_86);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_213();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0xFC8BFE4B41177C22(iLocal_48[0]))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_48[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_48[1]))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_48[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_56))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_56))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_33188)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_113955 = iParam0;
}

void func_4()
{
	while (func_117())
	{
		system::wait(0);
	}
	while (!func_33())
	{
		system::wait(0);
	}
	func_8(-1, 0);
	func_5();
	func_213();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
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

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_3(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_10();
	}
}

void func_10()
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
		func_12(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_11() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_32948;
}

int func_12(int iParam0, int iParam1)
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

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_14()
{
	return Global_1574926;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
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

void func_22()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_26(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_25(unk_0x4A8C381C258A124D());
			if (func_24(iVar0) && (!func_23(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_24(Global_113969.f_2366.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_28(int iParam0)
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

void func_29(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_32(Var0);
	return uVar1;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_33()
{
	return 1;
}

void func_34()
{
	switch (iLocal_116)
	{
		case 0:
			func_105();
			system::wait(0);
			func_115(&uLocal_118, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_116++;
			break;
		
		case 1:
			iLocal_116++;
			break;
		
		case 2:
			iLocal_116++;
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_56))
			{
				unk_0xB5396F1FB088FE38(&uLocal_100);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 5000, 2052, 2);
				unk_0xA966E518B752B92A(0, Local_66, 1f, -1, 0,25f, 0, 38,9844f);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x93C0674FC00824D0(uLocal_100);
				unk_0x4BD42B0527065BB6(iLocal_56, uLocal_100);
				unk_0xD0557B139A542F12(&uLocal_100);
				unk_0x44FB298D6382876D(iLocal_56, 1);
			}
			iLocal_116++;
			break;
		
		case 4:
			func_35(func_110(), 1, 80, 0, 1);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_66(iParam0) == 3)
	{
		return;
	}
	if (func_66(iParam0) == 4)
	{
		return;
	}
	func_36(func_66(iParam0), 1, iParam1, iParam2, 0);
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

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_65();
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
					func_64(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_49(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_46(5))
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
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_46(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
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
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_46(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_45(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_64(95, iParam3);
					break;
				
				case 1:
					func_64(97, iParam3);
					break;
				
				case 2:
					func_64(96, iParam3);
					break;
			}
			func_64(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
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
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
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
	func_38(iParam0);
	if (Global_44042 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)
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

void func_38(int iParam0)
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

void func_39(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_41() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_41() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_40(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_40(bool bParam0)
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

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_43(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_43(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_44(uParam1));
}

int func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

void func_45(int iParam0)
{
	func_64(93, iParam0);
	func_64(29, iParam0);
	func_64(30, iParam0);
}

int func_46(int iParam0)
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
		return func_48(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_48(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_48(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_48(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_47(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_47(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_47(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_47(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_47(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_47(8277, -1);
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
	return BitTest(Global_2359296[func_41() /*5570*/].f_681.f_10, iParam0);
}

int func_47(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_43(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_48(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_49(bool bParam0)
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_50(27, 1);
	return 1;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_51(iParam0, iParam1);
}

int func_51(int iParam0, int iParam1)
{
	if (func_23(14) && !func_62(iParam0))
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
	if (func_61(&Global_4543384))
	{
		if (func_59(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_52(&Global_4543384, iParam0))
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

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_62(iParam1))
	{
		return 0;
	}
	if (func_59(uParam0, iParam1))
	{
		return 0;
	}
	if (func_58(uParam0) < 0f)
	{
		func_57(uParam0, 0);
	}
	func_55(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_53(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_53(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_62(iParam1))
	{
		return 0;
	}
	if (func_59(uParam0, iParam1))
	{
		return 0;
	}
	if (func_58(uParam0) < 0f)
	{
		func_57(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_54(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_54(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_55(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_56(uParam0, iVar0);
		iVar0++;
	}
	func_57(uParam0, (Global_4543383 - 0,5f));
}

void func_56(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_57(var uParam0, float fParam1)
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

float func_58(var uParam0)
{
	return uParam0->f_80;
}

bool func_59(var uParam0, int iParam1)
{
	return func_60(uParam0, iParam1) != -1;
}

int func_60(var uParam0, int iParam1)
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

bool func_61(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_64(int iParam0, int iParam1)
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

void func_65()
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

int func_66(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_67()
{
	if (func_110() == 2)
	{
		if (func_68())
		{
			if (unk_0xED977E2AE2CB16EE(-1014,154f, 4881,411f, 245,0001f, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0), 1) < 400f)
			{
				if (!Global_33192)
				{
					unk_0x86A2BC11844DEEB3("AC_EN_ROUTE_CULT");
					Global_33192 = 1;
					if (!Global_33191)
					{
						Global_33191 = 1;
						return 1;
					}
				}
			}
			else if (Global_33192)
			{
				unk_0x86A2BC11844DEEB3("AC_LEFT_AREA");
				Global_33192 = 0;
			}
		}
	}
	return 0;
}

bool func_68()
{
	return Global_33187;
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_59)
		{
			if (func_72(&uLocal_118, "REHOMAU", &Local_61, &Local_60, 8, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
	}
	else if (!iLocal_59 && unk_0x1F9EB85925C3ECD7())
	{
		Local_61 = { func_71() };
		Local_60 = { func_70() };
		func_125();
		iLocal_59 = 1;
	}
}

struct<6> func_70()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		if (iVar1 > -1)
		{
			return Global_21154[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_71()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_73(sParam2, iParam4, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)
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
					func_86();
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
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_84();
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
				func_83();
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
				if (func_82())
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
			if (func_81())
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
			func_80();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_79();
		func_74();
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
		func_86();
	}
	return 0;
}

void func_74()
{
	if (!func_75())
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

int func_75()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_78())
	{
		return 0;
	}
	if (func_76(unk_0x259BE71D8A81D4FA()))
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

bool func_76(int iParam0)
{
	return func_77(iParam0, 20);
}

var func_77(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_78()
{
	return -1;
}

void func_79()
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

void func_80()
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

int func_81()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_82()
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

void func_83()
{
	if (func_23(14))
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
		Global_20930 = func_110();
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

void func_84()
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

bool func_85(int iParam0, int iParam1)
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

void func_86()
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

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_88(struct<3> Param0)
{
	if (func_110() == 2)
	{
		if (func_68() && !Global_33190)
		{
			if (fLocal_43 == -1f)
			{
				fLocal_43 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0);
			}
			if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0) > (fLocal_43 + 200f) || unk_0xED977E2AE2CB16EE(-1014,154f, 4881,411f, 245,0001f, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0), 1) < 400f)
			{
				Global_33190 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_89()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (!iLocal_71)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 1) && unk_0xCECDBB848D53DEB2(iLocal_56, unk_0xDC8D5832207C2EAD(), 0))
				{
					func_69(0);
					func_105();
					system::wait(0);
					func_115(&uLocal_118, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_71 = 1;
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 0) && unk_0xCECDBB848D53DEB2(iLocal_56, unk_0xDC8D5832207C2EAD(), 0))
			{
				iLocal_71 = 0;
			}
		}
		if (!iLocal_72)
		{
			if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
			{
				func_69(0);
				func_105();
				system::wait(0);
				func_115(&uLocal_118, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_72 = 1;
			}
		}
		else if (!unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
		{
			iLocal_72 = 0;
		}
		if (!iLocal_73)
		{
			if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				func_69(0);
				func_105();
				system::wait(0);
				func_115(&uLocal_118, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_73 = 1;
			}
		}
		else if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			iLocal_73 = 0;
		}
	}
}

void func_90()
{
	if (!func_91())
	{
		func_69(1);
	}
	if (!func_117())
	{
		switch (iLocal_94)
		{
			case 0:
				if (func_110() == 0)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_94++;
				break;
			
			case 1:
				func_115(&uLocal_118, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_94++;
				break;
			
			case 2:
				func_115(&uLocal_118, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_94++;
				break;
			
			case 3:
				if (func_110() == 0)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_94++;
				break;
			
			case 4:
				func_115(&uLocal_118, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_94++;
				break;
			
			case 5:
				if (func_110() == 0)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_94++;
				break;
			
			case 6:
				func_115(&uLocal_118, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_94++;
				break;
			
			case 7:
				func_115(&uLocal_118, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_94++;
				break;
			
			case 8:
				if (func_110() == 0)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_118, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_94++;
				break;
			
			case 9:
				func_115(&uLocal_118, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_94++;
				break;
			}
	}
}

int func_91()
{
	if (((((((((func_92("REHOM_QM") || func_92("REHOM_GETOUT")) || func_92("REHOM_SHOOT")) || func_92("REHOM_JACK")) || func_92("REHOM_WRONG")) || func_92("REHOM_CULT")) || func_92("REHOM_STOP")) || func_92("REHOM_NOVEH")) || func_92("REHOM_UNS1")) || func_92("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_92(char* sParam0)
{
	var uVar0;
	
	if (func_117())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_93()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (unk_0x5B3431FA66D59A4C(iLocal_56))
		{
			if (!iLocal_106)
			{
				iLocal_107 = unk_0x1DD05E817C89C737();
				iLocal_106 = 1;
			}
			else
			{
				iLocal_108 = unk_0x1DD05E817C89C737();
			}
		}
		else
		{
			iLocal_106 = 0;
		}
		if ((iLocal_108 - iLocal_107) > 180000)
		{
			if (unk_0x133460AD0F183CC9(iLocal_56))
			{
				unk_0x5C4B3034CCDA5270(iLocal_56);
				func_115(&uLocal_118, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_118();
			}
		}
	}
}

void func_94()
{
	if (unk_0xD9CCFCDF70474932(unk_0x4A8C381C258A124D()))
	{
		if (!iLocal_109)
		{
			iLocal_111 = unk_0x1DD05E817C89C737();
			iLocal_109 = 1;
		}
		else
		{
			iLocal_112 = unk_0x1DD05E817C89C737();
		}
	}
	else
	{
		iLocal_112 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
	}
	if ((iLocal_112 - iLocal_111) > 50000 && !iLocal_110)
	{
		func_69(0);
		func_105();
		system::wait(0);
		func_115(&uLocal_118, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_110 = 1;
	}
	if ((iLocal_112 - iLocal_111) > 60000 && iLocal_110)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_56))
		{
			unk_0xD844F5E50DAB6FF7(iLocal_56, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
			func_95(iLocal_56, 120000, 0, -1082130432);
			unk_0x44FB298D6382876D(iLocal_56, 1);
			if (unk_0x133460AD0F183CC9(iLocal_56))
			{
				unk_0x5C4B3034CCDA5270(iLocal_56);
			}
		}
		func_118();
	}
}

int func_95(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_97(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_96();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_45005[iVar2 /*6*/] = 0;
	Global_45005[iVar2 /*6*/].f_1 = iParam0;
	Global_45005[iVar2 /*6*/].f_2 = iParam1;
	Global_45005[iVar2 /*6*/].f_3 = iParam1;
	Global_45005[iVar2 /*6*/].f_4 = 0;
	Global_45005[iVar2 /*6*/].f_5 = iParam3;
	if (iParam0 == unk_0x4A8C381C258A124D())
	{
		Global_45248 = 1;
	}
	Global_45003++;
	return 1;
}

int func_96()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_99()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 8f, 8f, 8f, 0, 1, 0) || unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_86))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_86);
			}
			if (!unk_0x133460AD0F183CC9(iLocal_56))
			{
				unk_0x03AB73582A77DBD3(iLocal_56, unk_0xD59511AF30BE1934(unk_0x259BE71D8A81D4FA()));
				unk_0x412B9F2CF0E60079(iLocal_56, 0);
			}
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_88))
				{
					uLocal_88 = func_103(Local_65, 1);
				}
				if (unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_88))
					{
						uLocal_88 = func_103(Local_65, 1);
					}
				}
				if (func_110() == 2 && !func_102())
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_89))
					{
						uLocal_89 = func_103(Local_67, 0);
						unk_0x4C905FB262965D5D(uLocal_89, 269);
						func_100();
					}
				}
			}
		}
		else
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_86))
			{
				uLocal_86 = func_108(iLocal_56, 0, 145);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_88))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_88);
			}
		}
	}
}

void func_100()
{
	if (func_110() == 2)
	{
		if (!Global_33189)
		{
			func_101("CULT_BLIP_HELP", -1);
			Global_33189 = 1;
		}
	}
}

void func_101(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_102()
{
	if (Global_113969.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_103(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_104(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_104(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_105()
{
	Global_21152 = 0;
	func_106();
}

void func_106()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_107()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uLocal_84 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(uLocal_84, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_56))
			{
				if (unk_0xF4244288C3EF3306(iLocal_56, iLocal_84))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_108(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_109(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_104(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_104(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_104(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

int func_110()
{
	func_22();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_111()
{
	if (!func_102())
	{
		if (func_110() == 2)
		{
			Global_33187 = 1;
		}
	}
}

var func_112()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

int func_113()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_51))
	{
		if (((unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_51, 0) && unk_0xCECDBB848D53DEB2(iLocal_56, iLocal_51, 0)) && !unk_0xCECDBB848D53DEB2(iLocal_48[0], iLocal_51, 0)) && !unk_0xCECDBB848D53DEB2(iLocal_48[1], iLocal_51, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_114(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_73(sParam2, iParam3, 0);
}

int func_116()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_118()
{
	func_213();
}

void func_119()
{
	if (!iLocal_75)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
		{
			unk_0xD0764B65C2DFEDCA(iLocal_48[0], 0);
			unk_0x974022927CB47E68(iLocal_48[0]);
			unk_0xB5396F1FB088FE38(&uLocal_100);
			unk_0x84B06A81C98DA4B8(0);
			unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x93C0674FC00824D0(uLocal_100);
			unk_0x4BD42B0527065BB6(iLocal_48[0], uLocal_100);
			unk_0xD0557B139A542F12(&uLocal_100);
			unk_0x44FB298D6382876D(iLocal_48[0], 1);
			if (unk_0xC450B06E5AAA0985(uLocal_87[0]))
			{
				unk_0x6A52036D51C7E18E(uLocal_87[0], false);
			}
			system::settimerb(0);
			iLocal_75 = 1;
		}
		else
		{
			system::settimerb(500);
			iLocal_75 = 1;
		}
	}
	if (!iLocal_76)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_87[1]))
		{
			unk_0x6A52036D51C7E18E(uLocal_87[1], false);
		}
		func_105();
		system::wait(0);
		if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
		{
			func_120(iLocal_48[1], "GENERIC_INSULT_HIGH", 24);
			unk_0xD0764B65C2DFEDCA(iLocal_48[1], 2);
			if ((unk_0x13CCB1AD131C1082(iLocal_48[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x5266F1D2AEF6F73A(uLocal_113)) && !unk_0x8BF5256C439DF778(iLocal_48[1]))
			{
				unk_0x72B18C9612CF3DA0(iLocal_48[1], 16);
				unk_0xB5396F1FB088FE38(&uLocal_100);
				unk_0x10425721983AE158(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x93C0674FC00824D0(uLocal_100);
				unk_0x4BD42B0527065BB6(iLocal_48[1], uLocal_100);
				unk_0xD0557B139A542F12(&uLocal_100);
				unk_0x44FB298D6382876D(iLocal_48[1], 1);
				iLocal_76 = 1;
			}
			else
			{
				unk_0x62A5310368A20EFA(iLocal_48[1], unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_48[1], 1);
				iLocal_76 = 1;
			}
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
	{
		if (((!unk_0x13CCB1AD131C1082(iLocal_48[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x13CCB1AD131C1082(iLocal_48[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0x9B5C1660CCDF7189(iLocal_48[1], joaat("script_task_combat")) != 0) && unk_0x9B5C1660CCDF7189(iLocal_48[1], joaat("script_task_combat")) != 1)
		{
			iLocal_76 = 1;
		}
	}
}

void func_120(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_121(iParam2), 1);
}

int func_121(int iParam0)
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

void func_122()
{
	iLocal_45 = 3;
}

void func_123()
{
	func_105();
	system::wait(0);
	func_115(&uLocal_118, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_45 = 3;
}

void func_124()
{
	iLocal_45 = 3;
}

void func_125()
{
	Global_21152 = 0;
	func_126();
}

void func_126()
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

int func_127()
{
	iLocal_90 = 0;
	while (iLocal_90 <= 1)
	{
		if (unk_0x1C2F771CDC87A3A5(iLocal_48[iLocal_90], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_48[iLocal_90], unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
		iLocal_90++;
	}
	return 0;
}

void func_128()
{
	iLocal_92 = unk_0x1DD05E817C89C737();
	if (!bLocal_102)
	{
		switch (iLocal_47)
		{
			case 0:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if (func_115(&uLocal_118, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_91 = unk_0x1DD05E817C89C737();
					iLocal_47 = 1;
				}
				break;
			
			case 1:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if (func_115(&uLocal_118, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_91 = unk_0x1DD05E817C89C737();
					iLocal_47 = 2;
				}
				break;
			
			case 2:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if ((iLocal_92 - iLocal_91) > 6000)
				{
					if (func_115(&uLocal_118, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_91 = unk_0x1DD05E817C89C737();
						iLocal_47 = 3;
					}
				}
				break;
			
			case 3:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if (func_115(&uLocal_118, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_91 = unk_0x1DD05E817C89C737();
					iLocal_47 = 4;
				}
				break;
			
			case 4:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if ((iLocal_92 - iLocal_91) > 5500)
				{
					if (func_115(&uLocal_118, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_91 = unk_0x1DD05E817C89C737();
						iLocal_47 = 5;
					}
				}
				break;
			
			case 5:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_132() && !iLocal_80)
				{
					iLocal_47 = 13;
				}
				if (!iLocal_81 && system::timera() > 5000)
				{
					unk_0xB5396F1FB088FE38(&uLocal_100);
					unk_0xE67051907958B5EB(0, iLocal_56, -1, 2054, 2);
					unk_0x0E95B96CFEFE7B61(0, iLocal_56, -1);
					unk_0x93C0674FC00824D0(uLocal_100);
					unk_0x4BD42B0527065BB6(iLocal_48[0], uLocal_100);
					unk_0x44FB298D6382876D(iLocal_48[0], 1);
					iLocal_81 = 1;
				}
				if ((iLocal_92 - iLocal_91) > 3000 || iLocal_80)
				{
					if (((unk_0xD9F5E1FEFD1329E4(iLocal_51, 0) && !unk_0x4FAFF4BCB7633475(iLocal_48[0])) && !unk_0x4FAFF4BCB7633475(iLocal_48[1])) && !unk_0x4FAFF4BCB7633475(iLocal_56))
					{
						if (unk_0x5266F1D2AEF6F73A(uLocal_113))
						{
							if (unk_0xBD3B265153D3BA2D(uLocal_113) > 0,98f)
							{
								if (!func_117())
								{
									if (unk_0x3644984C9D7B57EF(iLocal_48[0], iLocal_56, 10f))
									{
										if (func_115(&uLocal_118, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0x84B06A81C98DA4B8(iLocal_48[0]);
											uLocal_113 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x2DCB8CA1FE6895AB(uLocal_113, iLocal_51, 0);
											unk_0x3DA436E63AB0F541(iLocal_56, uLocal_113, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3DA436E63AB0F541(iLocal_48[0], uLocal_113, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3DA436E63AB0F541(iLocal_48[1], uLocal_113, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x5ED9595F4AC7D134(iLocal_51, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_114 = 1;
											iLocal_91 = unk_0x1DD05E817C89C737();
											iLocal_47 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_131())
				{
					iLocal_47 = 15;
				}
				break;
			
			case 15:
				if (((unk_0xD9F5E1FEFD1329E4(iLocal_51, 0) && !unk_0x4FAFF4BCB7633475(iLocal_48[0])) && !unk_0x4FAFF4BCB7633475(iLocal_48[1])) && !unk_0x4FAFF4BCB7633475(iLocal_56))
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_113))
					{
						if (!func_117())
						{
							if (unk_0x3644984C9D7B57EF(iLocal_48[0], iLocal_56, 10f))
							{
								if (func_115(&uLocal_118, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0x84B06A81C98DA4B8(iLocal_48[0]);
									uLocal_113 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x2DCB8CA1FE6895AB(uLocal_113, iLocal_51, 0);
									unk_0x3DA436E63AB0F541(iLocal_56, uLocal_113, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(iLocal_48[0], uLocal_113, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(iLocal_48[1], uLocal_113, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x5ED9595F4AC7D134(iLocal_51, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_114 = 1;
									iLocal_91 = unk_0x1DD05E817C89C737();
									iLocal_47 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_129();
				if (unk_0x5266F1D2AEF6F73A(uLocal_113))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_113) > 0,45f)
					{
						if ((unk_0xD9F5E1FEFD1329E4(iLocal_51, 0) && !unk_0x4FAFF4BCB7633475(iLocal_56)) && !unk_0x4FAFF4BCB7633475(iLocal_48[0]))
						{
						}
					}
				}
				if (unk_0x5266F1D2AEF6F73A(uLocal_113))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_113) > 0,9f)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_51, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
							{
								unk_0xEBA229B2E0BB05E0(iLocal_48[0], iLocal_51, -1, -1, 1f, 9, 0, 0);
								iLocal_47 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_129();
				if (unk_0x5266F1D2AEF6F73A(uLocal_113))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_113) > 0,95f)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_51, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
							{
								unk_0xEBA229B2E0BB05E0(iLocal_48[1], iLocal_51, -1, 0, 1f, 9, 0, 0);
								unk_0x44FB298D6382876D(iLocal_48[1], 1);
								iLocal_47 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_129();
				if ((unk_0xD9F5E1FEFD1329E4(iLocal_51, 0) && !unk_0x4FAFF4BCB7633475(iLocal_48[0])) && !unk_0x4FAFF4BCB7633475(iLocal_48[1]))
				{
					if ((unk_0xF4244288C3EF3306(iLocal_56, iLocal_51) && unk_0xF4244288C3EF3306(iLocal_48[0], iLocal_51)) && unk_0xF4244288C3EF3306(iLocal_48[1], iLocal_51))
					{
						unk_0x7C8E9DE09D4AD3FF(iLocal_48[0], iLocal_51, 15f, 786468);
						unk_0x4539850624F18A9E(iLocal_51, 1);
						bLocal_102 = true;
					}
				}
				break;
			
			case 9:
				unk_0xB5396F1FB088FE38(&uLocal_100);
				unk_0x84B06A81C98DA4B8(0);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 20000, 0, 2);
				unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), -1, 0);
				unk_0x93C0674FC00824D0(uLocal_100);
				if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
				{
					unk_0x4BD42B0527065BB6(iLocal_48[0], uLocal_100);
				}
				unk_0xD0557B139A542F12(&uLocal_100);
				if (!iLocal_78)
				{
					if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 3))
					{
						func_105();
						system::wait(0);
						func_115(&uLocal_118, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 3) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
					{
						func_105();
						system::wait(0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
						{
							func_120(iLocal_48[0], "GUN_COOL", 24);
						}
					}
					iLocal_78 = 1;
					iLocal_98 = unk_0x1DD05E817C89C737();
				}
				iLocal_47 = 10;
				break;
			
			case 10:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_99 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_47 = 13;
				}
				if (((iLocal_99 - iLocal_98) > 6000 && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && !iLocal_79)
				{
					if (func_115(&uLocal_118, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_98 = unk_0x1DD05E817C89C737();
						iLocal_79 = 1;
					}
					iLocal_47 = 11;
				}
				break;
			
			case 11:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_99 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_47 = 13;
				}
				if (((iLocal_99 - iLocal_98) > 9000 && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) || iLocal_104)
				{
					if (func_115(&uLocal_118, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_47 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					iLocal_99 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_47 = 13;
				}
				if ((iLocal_99 - iLocal_98) > 13000)
				{
					iLocal_45 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
				{
					unk_0xB5396F1FB088FE38(&uLocal_100);
					unk_0x84B06A81C98DA4B8(0);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2052, 4);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
					unk_0x93C0674FC00824D0(uLocal_100);
					unk_0x4BD42B0527065BB6(iLocal_48[0], uLocal_100);
					unk_0xD0557B139A542F12(&uLocal_100);
				}
				if (iLocal_105)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							if (unk_0x9B5C1660CCDF7189(iLocal_48[1], joaat("script_task_synchronized_scene")) != 1)
							{
								unk_0xB5396F1FB088FE38(&uLocal_100);
								unk_0x84B06A81C98DA4B8(0);
								unk_0x0E95B96CFEFE7B61(0, iLocal_56, 0);
								unk_0xE67051907958B5EB(0, iLocal_56, 20000, 0, 2);
								unk_0x329B82704ED2A3E3(0, iLocal_56, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0x93C0674FC00824D0(uLocal_100);
								unk_0x4BD42B0527065BB6(iLocal_48[1], uLocal_100);
								unk_0xD0557B139A542F12(&uLocal_100);
							}
						}
						else if (unk_0x9B5C1660CCDF7189(iLocal_48[1], joaat("script_task_synchronized_scene")) != 1)
						{
							unk_0xB5396F1FB088FE38(&uLocal_100);
							unk_0x84B06A81C98DA4B8(0);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 20000, 0, 2);
							unk_0x93C0674FC00824D0(uLocal_100);
							unk_0x4BD42B0527065BB6(iLocal_48[1], uLocal_100);
							unk_0xD0557B139A542F12(&uLocal_100);
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_56))
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_synchronized_scene")) != 1)
						{
							unk_0x3D948B91131AF671(iLocal_56, unk_0x4A8C381C258A124D(), -1, 0);
							unk_0x44FB298D6382876D(iLocal_56, 1);
						}
					}
				}
				iLocal_47 = 14;
				break;
			
			case 14:
				if (func_133())
				{
					iLocal_47 = 9;
				}
				if (func_131())
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_113))
					{
						if (!iLocal_105)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
							{
							}
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								unk_0x3D948B91131AF671(iLocal_56, unk_0x4A8C381C258A124D(), -1, 0);
								unk_0x44FB298D6382876D(iLocal_56, 1);
							}
							iLocal_105 = 1;
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
				{
					if (!func_117() && !iLocal_80)
					{
						if (func_116())
						{
							func_115(&uLocal_118, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_115(&uLocal_118, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_80 = 1;
					}
					iLocal_81 = 0;
					system::settimera(0);
					iLocal_91 = (unk_0x1DD05E817C89C737() - 4500);
					iLocal_47 = 5;
				}
			}
	}
}

void func_129()
{
	if (!func_117())
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_51, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_56))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_56, iLocal_51, 0))
				{
					if (func_130(iLocal_56, 0) == 2)
					{
						if (iLocal_93 < unk_0x1DD05E817C89C737())
						{
							func_115(&uLocal_118, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_93 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_130(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(uVar0))
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

int func_131()
{
	if ((!unk_0x4FAFF4BCB7633475(iLocal_48[0]) && !unk_0x4FAFF4BCB7633475(iLocal_48[1])) && !unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 1,5f, 1,5f, 5f, 0, 1, 2) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[1], 2,5f, 2,5f, 5f, 0, 1, 2)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 1,5f, 1,5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 0,5f, 0,5f, 5f, 0, 1, 1) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[1], 0,5f, 0,5f, 5f, 0, 1, 1)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 0,5f, 0,5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_48[1], unk_0x4A8C381C258A124D(), 120f))
			{
				if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_48[1], unk_0x4A8C381C258A124D(), 120f))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_48[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_48[0], unk_0x4A8C381C258A124D(), 120f))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	if (func_137())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_16(Global_113958))
		{
			func_135(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_16(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_101(func_136(iParam0), -1);
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
					func_101(func_136(iParam0), -1);
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
					func_101(func_136(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_136(int iParam0)
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

int func_137()
{
	switch (func_138(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_138(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_142(0))
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
		if (!func_140(iParam2))
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
			func_139(uParam0, iParam4);
		}
	}
	return 2;
}

void func_139(var uParam0, int iParam1)
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

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_44042);
}

int func_141(int iParam0, int iParam1)
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

int func_142(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_143()
{
	if (unk_0xC450B06E5AAA0985(uLocal_85))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_85);
	}
	if (!unk_0xC450B06E5AAA0985(uLocal_86))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_56, 0))
		{
			uLocal_86 = func_108(iLocal_56, 0, 145);
			unk_0x89FE619BFBB2024B(uLocal_86, 0);
		}
	}
	else
	{
		unk_0x89FE619BFBB2024B(uLocal_86, 1);
	}
	iLocal_90 = 0;
	while (iLocal_90 <= 1)
	{
		if (!unk_0xC450B06E5AAA0985(uLocal_87[iLocal_90]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_48[iLocal_90], 0))
			{
				uLocal_87[iLocal_90] = func_108(iLocal_48[iLocal_90], 0, 145);
				unk_0x89FE619BFBB2024B(uLocal_87[iLocal_90], 0);
			}
		}
		else
		{
			unk_0x89FE619BFBB2024B(uLocal_87[iLocal_90], 1);
		}
		iLocal_90++;
	}
}

int func_144()
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_97)
	{
		if (unk_0xE94C7FA27FEB00DD(Local_52 - Vector(30f, 30f, 30f), Local_52 + Vector(30f, 30f, 30f), 1) || unk_0x5BF86E66F9BF0BE9(Local_52 - Vector(30f, 30f, 30f), Local_52 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_46 = 2;
			return 1;
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]) && !unk_0x4FAFF4BCB7633475(iLocal_48[1]))
		{
			if (unk_0xFAA48325A90263BE(iLocal_48[0], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7) || (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_48[0], unk_0x4A8C381C258A124D(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_48[0]) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_48[0])) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_48[1])) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_48[1]))
					{
						if (unk_0x7E54CB377175F94E(iLocal_48[0], unk_0x4A8C381C258A124D()) || unk_0x7E54CB377175F94E(iLocal_48[1], unk_0x4A8C381C258A124D()))
						{
							iLocal_46 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (unk_0xFC8BFE4B41177C22(iLocal_51))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_51, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_51, unk_0x4A8C381C258A124D(), 1))
				{
					iLocal_46 = 2;
					return 1;
				}
				if (unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), iLocal_51) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,1f)
				{
					iLocal_46 = 2;
					return 1;
				}
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_51, 0))
				{
					iLocal_46 = 2;
					return 1;
				}
				if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
				{
					if (unk_0x9B3D4335E0EDB0BE(iLocal_51, iVar0, 1))
					{
						iLocal_46 = 2;
						return 1;
					}
				}
			}
			else if (unk_0x9B3D4335E0EDB0BE(iLocal_51, unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_46 = 2;
				return 1;
			}
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck")) || unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck2")))
			{
				uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_51, 0))
				{
					if (unk_0x4A64AADF9B40D2AF(uVar1, iLocal_51))
					{
						iLocal_46 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_48[0]) || unk_0x1C2F771CDC87A3A5(iLocal_48[0], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_48[0], unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_46 = 5;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_48[0]) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,1f)
			{
				iLocal_46 = 5;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_48[0], iVar0, 1))
				{
					iLocal_46 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_48[1]) || unk_0x1C2F771CDC87A3A5(iLocal_48[1], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_48[1], unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_46 = 5;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_48[1]) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,1f)
			{
				iLocal_46 = 5;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_48[1], iVar0, 1))
				{
					iLocal_46 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_56, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_56, unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_46 = 4;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_56))
			{
				iLocal_46 = 4;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_56, iVar0, 1))
				{
					iLocal_46 = 4;
					return 1;
				}
			}
		}
		else if (unk_0x9B3D4335E0EDB0BE(iLocal_56, unk_0x4A8C381C258A124D(), 1))
		{
			iLocal_46 = 4;
			return 1;
		}
	}
	return 0;
}

void func_145()
{
	func_147(39, 1);
	func_147(40, 1);
	func_147(41, 1);
	func_147(42, 1);
	func_147(43, 1);
	func_147(44, 1);
	unk_0xA7B0B03284E7503C(374,869f, -1358,043f, 25,667f, 452,41f, -1423,882f, 38,337f, 0, 1, 1, 1, 1);
	unk_0xA7B0B03284E7503C(Local_66 - Vector(20f, 20f, 20f), Local_66 + Vector(20f, 20f, 20f), 0, 1, 1, 1, 1);
	unk_0x55F7AC4B2B875901(Local_57, 50f, 0);
	unk_0x79CA429D8B4B057A(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_95, 5);
	iLocal_56 = unk_0xB1DBFEB95C0EFB88(26, iLocal_58, Local_57, 0, 1, 1);
	unk_0xAAA71DD7E9059338(iLocal_56, 1);
	unk_0x55098D9E9AD58806(iLocal_58);
	unk_0x3F58BFCF656F0DF1(iLocal_56, 0);
	unk_0x0428AFDCAA63B06E(iLocal_56, 185, 1);
	unk_0x0428AFDCAA63B06E(iLocal_56, 206, 1);
	unk_0x1CA08719184AFC6F(iLocal_56, 2, 0);
	unk_0xFD61BB3B8F1CDB6D(iLocal_56, 1);
	unk_0x397CF4F4C8B17365(iLocal_56, "REHOMGirl");
	unk_0xD1C578C204015E1F(iLocal_56, 0, 2, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_56, 2, 0, 0, 0);
	unk_0xD1C578C204015E1F(iLocal_56, 3, 1, 4, 0);
	unk_0xD1C578C204015E1F(iLocal_56, 4, 0, 5, 0);
	unk_0xD1C578C204015E1F(iLocal_56, 6, 1, 0, 0);
	unk_0x06CD913C241C765E("OFFICERS", &iLocal_117);
	iLocal_90 = 0;
	while (iLocal_90 <= 1)
	{
		iLocal_48[iLocal_90] = unk_0xB1DBFEB95C0EFB88(6, iLocal_54, Local_49[iLocal_90 /*3*/], fLocal_50[iLocal_90], 1, 1);
		unk_0xAAA71DD7E9059338(iLocal_48[iLocal_90], 1);
		unk_0x55098D9E9AD58806(iLocal_54);
		unk_0x3CEA1FD137ACE2D9(iLocal_48[iLocal_90], iLocal_117);
		unk_0x0428AFDCAA63B06E(iLocal_48[iLocal_90], 42, 1);
		iLocal_90++;
	}
	unk_0xB41DEC3AAC1AA107(iLocal_48[0], joaat("weapon_pistol"), -1, 1, 1);
	unk_0xB41DEC3AAC1AA107(iLocal_48[1], joaat("weapon_pistol"), -1, 0, 1);
	unk_0xD414C47AFF81382A(5, iLocal_117, joaat("player"));
	unk_0xD414C47AFF81382A(1, iLocal_117, joaat("COP"));
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_117);
	iLocal_51 = unk_0x5779387E956077A6(iLocal_55, Local_52, fLocal_53, 1, 1, 0);
	unk_0xCCA6D8A84EE8C88A(iLocal_55, 1);
	unk_0x1DE99C193C7EC64B(iLocal_51, 1084227584);
	unk_0x4539850624F18A9E(iLocal_51, 1);
	func_146(&uLocal_118, 5, iLocal_48[0], "ACULTMember1", 0, 1);
	func_146(&uLocal_118, 4, iLocal_48[1], "ACULTMember2", 0, 1);
	func_146(&uLocal_118, 3, iLocal_56, "REHOMGirl", 0, 1);
	if (func_110() == 0)
	{
		func_146(&uLocal_118, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	else if (func_110() == 1)
	{
		func_146(&uLocal_118, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	uLocal_113 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x2DCB8CA1FE6895AB(uLocal_113, iLocal_51, 0);
	unk_0x3DA436E63AB0F541(iLocal_56, uLocal_113, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3DA436E63AB0F541(iLocal_48[0], uLocal_113, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3DA436E63AB0F541(iLocal_48[1], uLocal_113, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xBF3497E24DEAD835(uLocal_113, 1);
}

void func_146(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_147(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_151(iParam0, 2, 1))
		{
			func_150(iParam0, 2, 1);
		}
	}
	else if (func_151(iParam0, 2, 1))
	{
		func_148(iParam0, 2, 1);
	}
}

void func_148(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			uVar0 = func_47(func_149(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_42(func_149(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

int func_149(int iParam0)
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

void func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			uVar0 = func_47(func_149(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_42(func_149(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_151(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			return BitTest(func_47(func_149(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_152()
{
	unk_0xEC9DAA34BBB4658C(iLocal_58);
	unk_0xEC9DAA34BBB4658C(iLocal_54);
	unk_0xEC9DAA34BBB4658C(iLocal_55);
	unk_0x80813AC549A1E8AE("random@homelandsecurity");
	if (((unk_0x6252BC0DD8A320DB(iLocal_58) && unk_0x6252BC0DD8A320DB(iLocal_54)) && unk_0x6252BC0DD8A320DB(iLocal_55)) && unk_0xE100DD4F82A51BDE("random@homelandsecurity"))
	{
		bLocal_70 = true;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(iLocal_58);
		unk_0xEC9DAA34BBB4658C(iLocal_54);
		unk_0xEC9DAA34BBB4658C(iLocal_55);
		unk_0x80813AC549A1E8AE("random@homelandsecurity");
	}
}

void func_153()
{
	iLocal_58 = joaat("a_f_y_tourist_01");
	iLocal_54 = joaat("a_m_o_acult_01");
	iLocal_55 = joaat("fugitive");
	Local_57 = { -174,0522f, 1905,611f, 197,0466f };
	Local_49[0 /*3*/] = { -174,3279f, 1903,972f, 197,0502f };
	fLocal_50[0] = 147,8596f;
	Local_49[1 /*3*/] = { -174,3233f, 1906,384f, 197,0145f };
	fLocal_50[1] = 164,5974f;
	Local_52 = { -172,4207f, 1905,183f, 197,1163f };
	fLocal_53 = 187,3899f;
	Local_65 = { 469,8768f, 2617,532f, 42,2566f };
	Local_66 = { 472,2393f, 2611,611f, 42,2676f };
	Local_67 = { -1034,6f, 4918,6f, 205,9f };
	iLocal_69 = 1;
}

int func_154()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_155(float fParam0, bool bParam1)
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
		if (func_24(func_110()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_156(iVar1, &Var0);
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

void func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_158(int iParam0)
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

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_160(iParam0) };
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

struct<2> func_160(int iParam0)
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

int func_161()
{
	if (func_164() && !func_165())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_113687 > 0;
}

int func_163()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()
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

int func_166()
{
	if (!func_140(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	if ((Global_113958 == func_31() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_170(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_169();
}

void func_169()
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

void func_170(int iParam0)
{
	Global_113958 = iParam0;
}

int func_171(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_31();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_212())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_165())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_211())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_24(func_110()))
		{
			if (func_155(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_210(iParam1))
		{
			return 0;
		}
		if (func_24(func_110()))
		{
			if (func_209(func_110()) == 4 || func_209(func_110()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_110()))
		{
			if (!func_208(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_207(Global_113969.f_24998.f_43[iParam1]))
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
		if (func_206())
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
		if (!func_197(4))
		{
			return 0;
		}
		if (!func_140(5))
		{
			return 0;
		}
		if (func_196(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_196(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_210(30) && !func_196(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_110()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_195(iVar4))
				{
					if (func_173(iVar2))
					{
						if (!func_172(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_110() != iVar2)
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

bool func_172(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_174(iVar0);
}

int func_174(int iParam0)
{
	return func_175(iParam0, 1);
}

int func_175(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_195(iParam0))
	{
		return 0;
	}
	func_176(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_177(func_188(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_177(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186(iParam1);
		iVar1 = func_184(iParam0);
		iVar2 = (func_184(iParam0) - func_184(iParam1));
		iVar3 = (func_186(iParam0) - func_186(iParam1));
		iVar4 = (func_183(iParam0) - func_183(iParam1));
		iVar5 = (func_182(iParam0) - func_182(iParam1));
		iVar6 = (func_181(iParam0) - func_181(iParam1));
		iVar7 = (func_180(iParam0) - func_180(iParam1));
	}
	else
	{
		iVar0 = func_186(iParam0);
		iVar1 = func_184(iParam1);
		iVar2 = (func_184(iParam1) - func_184(iParam0));
		iVar3 = (func_186(iParam1) - func_186(iParam0));
		iVar4 = (func_183(iParam1) - func_183(iParam0));
		iVar5 = (func_182(iParam1) - func_182(iParam0));
		iVar6 = (func_181(iParam1) - func_181(iParam0));
		iVar7 = (func_180(iParam1) - func_180(iParam0));
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
		iVar4 = (iVar4 + func_179(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_178(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_178(float fParam0, float fParam1, float fParam2)
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

int func_179(int iParam0, int iParam1)
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

int func_180(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_181(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_182(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_183(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_184(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_185(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_185(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_186(int iParam0)
{
	return iParam0 & 15;
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_195(iParam1) || !func_195(iParam0))
	{
		return 1;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	var uVar0;
	
	func_194(&uVar0, unk_0x4BA5A16068183C5E());
	func_193(&uVar0, unk_0x18E502A71E28968C());
	func_192(&uVar0, unk_0x5295501D0862870D());
	func_191(&uVar0, unk_0xB12880C92EA6EE15());
	func_190(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_189(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_189(var uParam0, int iParam1)
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

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_179(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_195(int iParam0)
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
	iVar0 = func_180(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_181(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_182(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_184(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_186(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_183(iParam0);
	if (iVar5 < 1 || iVar5 > func_179(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_110();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_205()) || Global_113016) || Global_32951) || func_204()) || func_85(8, -1)) || func_203()) || func_202()) || func_201()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_205()) || Global_32951) || func_204()) || func_85(8, -1)) || func_201()) || func_203()) || func_202()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_205()) || Global_113016) || Global_32951) || func_204()) || func_85(8, -1)) || func_201()) || func_203()) || func_202()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_205()) || Global_113016) || Global_32951) || func_204()) || func_85(8, -1)) || func_203()) || func_202()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_205() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_85(8, -1)) || func_200()) || func_199()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_85(8, -1) || func_203()) || func_202()) || func_199()) || func_198())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_205()) || Global_32951) || func_204()) || func_85(8, -1)) || func_202()) || func_201()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_205()) || func_202()) || Global_113016) || Global_32951) || func_204()) || Global_45250) || func_85(8, -1)) || func_201()) || func_199()) || func_200()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_205()) || Global_113016) || Global_32951) || func_204()) || func_85(8, -1)) || func_201()) || func_199()) || func_203()) || func_202()) || func_200())
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

var func_198()
{
	return Global_101572.f_1;
}

int func_199()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_200()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_201()
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

bool func_202()
{
	return Global_101585.f_394 > 0;
}

bool func_203()
{
	return Global_101585.f_393 > 0;
}

var func_204()
{
	return Global_1575083;
}

int func_205()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_206()
{
	func_83();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_207(int iParam0)
{
	return func_187(func_188(), iParam0);
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_110();
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

int func_209(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_212())
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

int func_211()
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

int func_212()
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

void func_213()
{
	int iVar0;
	
	if (iLocal_68)
	{
		func_227(0);
		if (Global_33191)
		{
			unk_0x86A2BC11844DEEB3("AC_STOP");
		}
		func_226();
		unk_0x830C51B62E7CD5B2();
		unk_0xE649818AF72843C4(420,5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xF58D3BBA4A469D70(unk_0x259BE71D8A81D4FA());
		unk_0x425BBE19F25A57AB(1f);
		func_105();
		if (iLocal_69)
		{
			unk_0x55098D9E9AD58806(iLocal_58);
			unk_0x55098D9E9AD58806(iLocal_54);
			unk_0x55098D9E9AD58806(iLocal_55);
			unk_0xCCA6D8A84EE8C88A(iLocal_55, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_48)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_48[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_48[iVar0]))
				{
					if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0xC86A930D894F8CE2(iLocal_48[iVar0], func_225(unk_0x259BE71D8A81D4FA()), -1, 0, 0);
						unk_0x44FB298D6382876D(iLocal_48[iVar0], 1);
						if (!unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							unk_0xAFC7A89C990C4339(iLocal_56, -1);
							unk_0x44FB298D6382876D(iLocal_56, 1);
						}
					}
					unk_0xAAA71DD7E9059338(iLocal_48[iVar0], 0);
				}
				unk_0xF09E30AF1B8FB379(&(iLocal_48[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_56))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_56))
			{
				unk_0x0428AFDCAA63B06E(iLocal_56, 317, 1);
				if (unk_0x133460AD0F183CC9(iLocal_56))
				{
					unk_0x5C4B3034CCDA5270(iLocal_56);
				}
				if (!unk_0x7F420695E3F776FB(iLocal_56, 0))
				{
					unk_0x61BB4B7411E1DF82(iLocal_56);
				}
				unk_0xAAA71DD7E9059338(iLocal_56, 0);
			}
			unk_0xF09E30AF1B8FB379(&iLocal_56);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_51))
		{
			unk_0x68298CA6191CDFDB(&iLocal_51);
		}
		unk_0xCC1C92F7E1A3CE9D(5, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
	}
	func_214(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_214(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_167())
	{
		func_218(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_113958, 1), 64);
		if (func_30(Global_113958) > 0)
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
	func_215(&Global_33008);
	Global_113959 = 0;
	func_170(-1);
}

void func_215(var uParam0)
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

char* func_216(int iParam0, bool bParam1)
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

void func_217(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_218(int iParam0)
{
	func_219(iParam0, 0, func_224(iParam0));
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_188();
	func_222(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_221(iParam0, &uVar0);
	Var1 = { func_220(&uVar0) };
}

struct<16> func_220(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_183(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_186(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_184(*uParam0), 64);
	return Var0;
}

void func_221(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_184(*uParam0);
	iVar1 = func_186(*uParam0);
	iVar2 = func_183(*uParam0);
	iVar3 = func_182(*uParam0);
	iVar4 = func_181(*uParam0);
	iVar5 = func_180(*uParam0);
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
	iVar6 = func_179(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_179(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_223(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_194(uParam0, iParam1);
	func_193(uParam0, iParam2);
	func_192(uParam0, iParam3);
	func_190(uParam0, iParam5);
	func_191(uParam0, iParam4);
	func_189(uParam0, iParam6);
}

int func_224(int iParam0)
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

Vector3 func_225(var uParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_226()
{
	Global_33187 = 0;
	Global_33188 = 0;
	Global_33190 = 0;
	Global_33191 = 0;
	Global_33192 = 0;
}

void func_227(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_147(iVar0, bParam0);
		iVar0++;
	}
}

