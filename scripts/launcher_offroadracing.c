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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<16> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = NULL;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_80 = 0;
	struct<3> Local_81[5];
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91[5] = { 0, 0, 0, 0, 0 };
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	struct<100> Local_265 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	struct<2> Local_272 = { 0, 5 } ;
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
	var uLocal_288 = 5;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	Local_43 = { 500f, 500f, 500f };
	iLocal_58 = -1;
	iLocal_59 = 2050;
	iLocal_60 = -1;
	iLocal_61 = -1;
	sLocal_63 = "CC_SUBSTR";
	fLocal_64 = 125f;
	iLocal_65 = 1;
	iLocal_67 = 263;
	fLocal_75 = 4f;
	bLocal_76 = true;
	iLocal_77 = 6;
	iLocal_78 = 18;
	iLocal_80 = -1;
	bLocal_94 = true;
	iLocal_95 = 1;
	Local_54 = { ScriptParam_272.f_1[0 /*3*/] };
	Local_54 = { Local_54 };
	iLocal_52 = iLocal_52;
	Local_50 = { Local_50 };
	bVar0 = false;
	if (unk_0x96CFB880BAC634CE(82))
	{
		func_153(1);
	}
	uLocal_51 = unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA());
	iLocal_57 = 0;
	func_151(&Global_112617, 0);
	func_145();
	unk_0x2918C30E34ED2C88(1);
	if (func_144(uLocal_56, 1))
	{
		iLocal_62 = 10;
	}
	else
	{
		iLocal_62 = 9;
	}
	while (!Global_39381)
	{
		system::wait(0);
	}
	if (!func_144(uLocal_56, 8))
	{
		if (!func_142(iLocal_62))
		{
			if (func_141(0, iLocal_61))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_61 != -1)
	{
		if (!func_141(0, iLocal_61))
		{
			bLocal_76 = false;
		}
	}
	if (func_144(uLocal_56, 8388608))
	{
		func_153(1);
	}
	if (func_144(uLocal_56, 524288) && (func_140() && !func_139()))
	{
		func_153(1);
	}
	if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1 && !func_144(uLocal_56, 4194304))
	{
		if (iLocal_67 != 263)
		{
			func_138(iLocal_67, 1, 0);
			iLocal_67 = 263;
		}
		func_137(10);
	}
	while (true)
	{
		if (!func_144(uLocal_56, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xB1EAADCB692D69CE(ScriptParam_272.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_272.f_1[0 /*3*/].f_2 = fVar1;
					func_136(&uLocal_56, 268435456);
				}
			}
		}
		uLocal_51 = unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA());
		if (func_144(uLocal_56, 1048576))
		{
			if (unk_0x1C2F771CDC87A3A5(uLocal_51, 0))
			{
				func_153(1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_51) && !unk_0x1C2F771CDC87A3A5(iLocal_51, 0))
		{
			Local_53 = { unk_0xD1A6A821F5AC81DB(iLocal_51, 1) };
			fLocal_55 = system::vdist2(Local_53, ScriptParam_272.f_1[0 /*3*/]);
			fLocal_55 = fLocal_55;
			Local_73 = { Local_53 };
			Local_74 = { ScriptParam_272.f_1[0 /*3*/] };
			Local_73.f_2 = 0f;
			Local_74.f_2 = 0f;
			fLocal_72 = system::vdist2(Local_73, Local_74);
			switch (iLocal_57)
			{
				case 0:
					if (func_142(iLocal_62) || (func_144(uLocal_56, 16) && !func_144(uLocal_56, 524288)))
					{
						iLocal_60 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_72 > (fLocal_64 * fLocal_64))
						{
							if (iLocal_67 != 263)
							{
								func_138(iLocal_67, 1, 0);
								iLocal_67 = 263;
							}
							func_137(10);
						}
						if ((Local_53.f_2 - ScriptParam_272.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_130() && fLocal_55 > ((fLocal_75 * 1,5f) * (fLocal_75 * 1,5f)))
					{
						iLocal_65 = iLocal_65;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
				
				case 3:
					if (unk_0xBF52D447C795492B())
					{
						func_153(1);
						return;
					}
					if (!func_142(iLocal_62))
					{
						if (!func_144(uLocal_56, 8))
						{
							bVar2 = true;
							if (unk_0x1B79E937E91F40C3(&(Global_101533.f_3), &Local_50))
							{
								Local_50 = { Local_49 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!func_144(uLocal_56, 4))
					{
						func_119();
						func_136(&uLocal_56, 4);
					}
					if (fLocal_72 > (fLocal_64 * fLocal_64) && !Global_101567)
					{
						if (iLocal_67 != 263)
						{
							if (func_118(6) && !func_117(iLocal_67))
							{
							}
							else
							{
								func_138(iLocal_67, 1, 0);
								iLocal_67 = 263;
							}
						}
						func_137(10);
					}
					else
					{
						Local_50 = { Local_49 };
						bVar3 = !func_144(uLocal_56, 64);
						func_151(&uLocal_56, 128);
						if (!func_116(3) && !Global_101567)
						{
							if (func_144(uLocal_56, 2097152))
							{
								if ((!func_144(uLocal_56, 1) || !unk_0xFC8BFE4B41177C22(func_115())) && !Global_101567)
								{
									func_137(10);
									break;
								}
							}
						}
						if (func_144(uLocal_56, 524288) && (func_140() && !func_139()))
						{
							func_153(1);
						}
						if (func_114())
						{
							func_153(1);
						}
						if ((!func_106(6) || Global_113016) || func_105())
						{
							bVar3 = false;
						}
						if (!bLocal_76)
						{
							func_103(&uLocal_56, 128);
							bVar3 = false;
						}
						if (func_144(uLocal_56, 1))
						{
							if (!func_102())
							{
								func_103(&uLocal_56, 128);
								bVar3 = false;
							}
						}
						if (func_101(1))
						{
							bVar3 = false;
						}
						if (Global_79389)
						{
							bVar3 = false;
						}
						if (func_100())
						{
							bVar3 = false;
						}
						if (unk_0x3555462DB47B7AB1())
						{
							bVar3 = false;
						}
						if (func_99() || func_98(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
						{
							bVar3 = false;
						}
						if (!unk_0x206A708429803A39(unk_0x259BE71D8A81D4FA()))
						{
							bVar3 = false;
						}
						if (func_97(0) || func_96())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x65FFA94B82A71741(iLocal_51, ScriptParam_272.f_1[0 /*3*/], fLocal_75, fLocal_75, 2f, 0, 1, iLocal_65))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x5295501D0862870D();
							if (iLocal_77 > iLocal_78)
							{
								if (iVar4 < iLocal_77 && iVar4 >= iLocal_78)
								{
									func_103(&uLocal_56, 128);
									bVar3 = false;
									if (fLocal_55 < ((fLocal_75 * fLocal_75) + 4f))
									{
										if (!func_144(uLocal_56, 134217728))
										{
											func_95("MG_NA_TIME", iLocal_77, iLocal_78);
											func_103(&uLocal_56, 134217728);
										}
									}
									else
									{
										func_151(&uLocal_56, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_77 || iVar4 >= iLocal_78)
							{
								func_103(&uLocal_56, 128);
								bVar3 = false;
								if (fLocal_55 < ((fLocal_75 * fLocal_75) + 4f))
								{
									if (!func_144(uLocal_56, 134217728))
									{
										func_95("MG_NA_TIME", iLocal_77, iLocal_78);
										func_103(&uLocal_56, 134217728);
									}
								}
								else
								{
									func_151(&uLocal_56, 134217728);
								}
							}
							if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x4CC1CF98851922CE(0, 51);
								if (func_94(iLocal_52))
								{
									if (iLocal_58 == -1)
									{
										func_93(&iLocal_58, 4, sLocal_63, 0, 0, 0, 0);
										func_103(&uLocal_56, 2048);
									}
									else if (!func_144(uLocal_56, 2048) || !unk_0x4C705AAF75363287())
									{
										func_92(&iLocal_58);
										func_151(&uLocal_56, 2048);
									}
									if (func_90(iLocal_58, 1))
									{
										sLocal_63 = sLocal_63;
										func_92(&iLocal_58);
										func_151(&uLocal_56, 2048);
										unk_0x97A5024CE91641F1(&Local_50);
										unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 56);
										func_137(5);
									}
								}
								else
								{
									sLocal_63 = sLocal_63;
									func_92(&iLocal_58);
									func_151(&uLocal_56, 2048);
									unk_0x97A5024CE91641F1(&Local_50);
									unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 56);
									func_137(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_58 != -1)
							{
								func_92(&iLocal_58);
								func_151(&uLocal_56, 2048);
								unk_0x428C32CC68809A35(0);
							}
						}
					}
					func_52();
					break;
				
				case 5:
					unk_0x4CC1CF98851922CE(0, 51);
					if (unk_0xA6E4F7A73ABC4A76(&Local_50))
					{
						if (iLocal_58 != -1)
						{
							func_92(&iLocal_58);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_144(uLocal_56, 1))
						{
							if (func_118(6) || func_118(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_49(&iLocal_60, 6, iLocal_62, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_52, 0))
							{
								unk_0x68298CA6191CDFDB(&iLocal_52);
							}
							if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
							{
								unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
							}
							func_48();
							if (Global_45250)
							{
								func_39(unk_0x4A8C381C258A124D());
							}
							unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 56);
							uLocal_48 = func_38();
							func_103(&uLocal_56, 2);
							func_137(6);
							func_34(&uLocal_69);
							if (iLocal_61 != -1)
							{
								func_33(iLocal_61);
								func_31(func_32(iLocal_61), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_30();
						}
						else if (iVar5 == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
				
				case 6:
					if (func_144(Global_112617, 262144))
					{
						func_151(&Global_112617, 262144);
						func_29();
					}
					if (func_144(uLocal_56, 2097152))
					{
						if (!func_116(3) && !unk_0xF40767E41852FB72(uLocal_48))
						{
							func_137(10);
						}
					}
					if (!unk_0xF40767E41852FB72(uLocal_48))
					{
						unk_0x60642EDE690B1018(system::round((func_25(&uLocal_69) * 1000f)), iLocal_61, 0);
						func_24(&uLocal_69);
						func_151(&uLocal_56, 256);
						func_21();
						if (bVar0)
						{
							func_151(&uLocal_56, 2);
						}
						else if (func_144(uLocal_56, 2))
						{
							if (func_144(Global_112617, 0))
							{
								func_20(&iLocal_60);
								iLocal_60 = -1;
								func_151(&uLocal_56, 2);
							}
							else
							{
								func_20(&iLocal_60);
								iLocal_60 = -1;
								func_151(&uLocal_56, 2);
							}
						}
						func_137(0);
						if (iLocal_61 != -1)
						{
							if (func_144(Global_112617, 0))
							{
								unk_0x375B1B37EF136A49(func_32(iLocal_61), 0, Global_101570, 0);
								func_19(func_32(iLocal_61), 0, Global_101570, 1, 0);
							}
							else
							{
								unk_0x375B1B37EF136A49(func_32(iLocal_61), 0, Global_101570, 0);
								func_19(func_32(iLocal_61), 0, Global_101570, 0, 0);
							}
						}
						func_5();
						func_151(&Global_112617, 0);
						if (func_144(uLocal_56, 16777216))
						{
							func_153(1);
						}
						if (iLocal_61 != -1)
						{
							if (Global_113969.f_9088)
							{
								if (!func_141(0, iLocal_61))
								{
									func_153(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_137(0);
					break;
				
				case 10:
					func_153(1);
					break;
				
				case 9:
					if (fLocal_72 > (fLocal_64 * fLocal_64))
					{
						if (iLocal_67 != 263)
						{
							func_138(iLocal_67, 1, 0);
							iLocal_67 = 263;
						}
						func_137(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_67 != 263)
					{
						func_138(iLocal_67, 0, 0);
					}
					if (iLocal_58 != -1)
					{
						func_92(&iLocal_58);
					}
					if (!unk_0xD6F9DEE4765092A9(sLocal_63))
					{
						if (func_1(sLocal_63))
						{
							unk_0x428C32CC68809A35(1);
						}
					}
					func_137(4);
					break;
				
				case 4:
					if ((iLocal_66 % 150) == 0)
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (iLocal_68 == 2)
							{
								if (iLocal_68 == 2)
								{
									if (func_142(iLocal_62) && func_141(0, iLocal_61))
									{
										func_145();
										if (iLocal_67 != 263)
										{
											func_138(iLocal_67, 1, 0);
										}
										func_137(0);
									}
								}
							}
							else if (iLocal_68 == 0)
							{
								if (fLocal_72 > (fLocal_64 * fLocal_64))
								{
									if (iLocal_67 != 263)
									{
										func_138(iLocal_67, 1, 0);
										iLocal_67 = 263;
									}
									func_137(10);
								}
							}
							else if (iLocal_68 == 1)
							{
								if (fLocal_72 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_67 != 263)
									{
										func_138(iLocal_67, 1, 0);
									}
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_67, 1, 0);
						}
					}
					else
					{
						iLocal_66++;
					}
					break;
				}
		}
		system::wait(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_265.f_71));
	func_3(&(Local_265.f_77));
	func_3(&(Local_265.f_99));
	unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x268BE77F77533D03("amb@world_human_aa_smoke@male@idle_a");
	unk_0x268BE77F77533D03("random@street_race");
	unk_0x268BE77F77533D03("gestures@m@standing@casual");
	switch (iLocal_80)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xD6F9DEE4765092A9(sVar0))
	{
		if (unk_0xA2FEC91FCC08673E(sVar0))
		{
			if (unk_0x03F4074C23C3682E(sVar0))
			{
				unk_0x7DA9B8DF3A97D040(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x55098D9E9AD58806((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_144(Global_113969.f_19019, 1))
	{
		func_151(&(Global_113969.f_19019), 1);
		func_18();
		func_8();
		func_6();
	}
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

void func_8()
{
	if (Global_113969.f_19019.f_18 < Global_113969.f_19019.f_19[iLocal_80] || Global_113969.f_19019.f_19[iLocal_80] == 0)
	{
		Global_113969.f_19019.f_19[iLocal_80] = Global_113969.f_19019.f_18;
		Global_113969.f_19019.f_18 = 999;
	}
	if (iLocal_80 == Global_113969.f_19019.f_1 || Global_113969.f_19019.f_1 == -1)
	{
		if (Global_113969.f_19019.f_1 != 5)
		{
			Global_113969.f_19019.f_1++;
			switch (Global_113969.f_19019.f_1)
			{
				case 1:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					break;
				
				case 2:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					break;
				
				case 3:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					break;
				
				case 4:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					break;
				
				case 5:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					func_17(74, 1);
					func_138(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, 1, 0);
			func_17(70, 1);
			func_138(71, 1, 0);
			func_17(71, 1);
			func_138(73, 1, 0);
			func_17(73, 1);
			func_138(74, 1, 0);
			func_17(74, 1);
			func_138(75, 1, 0);
			func_17(75, 1);
			func_138(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_113969.f_19019.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33328[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 4);
	}
	if (Global_33325 == 1)
	{
		Global_33326 = 1;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33328[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 5);
	}
	if (Global_33325 == 1)
	{
		Global_33326 = 1;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33328[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 11);
	}
	if (Global_33325 == 1)
	{
		Global_33326 = 1;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_16();
	}
}

void func_16()
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

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33328[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 20);
	}
	if (Global_33325 == 1)
	{
		Global_33326 = 1;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0x830C51B62E7CD5B2();
	unk_0xED8A3DF1DC96764E();
	switch (iLocal_80)
	{
		case 0:
			unk_0x2AF2D6F164BD6F5A(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1);
			break;
		
		case 1:
			unk_0x2AF2D6F164BD6F5A(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x2AF2D6F164BD6F5A(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x2AF2D6F164BD6F5A(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x2AF2D6F164BD6F5A(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xD6F9DEE4765092A9(&Global_98583))
	{
		return;
	}
	if (unk_0xDCE96FB47C1D0314(sParam0, &Global_98583, 0, -1) != 0)
	{
		return;
	}
	unk_0x1A6EB10909EB6840(sParam0, iParam1, iParam2, iParam3, iParam4, Global_95690);
	StringCopy(&Global_98583, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_44004)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0x1226C55CA7D2269A() || func_23())
	{
		unk_0x012C74D626CB4559(StackVal, 0, 0, 0);
	}
	else if (unk_0x0BA1A956D36B210F() || func_22())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5F974E79EAE32BE7(0, &cVar0);
	}
}

var func_22()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_23()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_25(var uParam0)
{
	if (func_28(uParam0))
	{
		if (func_27(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_26(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_26(bool bParam0)
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

bool func_27(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_28(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_29()
{
	func_8();
	return 1;
}

void func_30()
{
}

void func_31(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD6F9DEE4765092A9(&Global_98583))
	{
		unk_0x1A6EB10909EB6840(&Global_98583, 0, 0, 0, 1, 0);
		StringCopy(&Global_98583, "", 64);
	}
	StringCopy(&Global_98583, sParam0, 64);
	unk_0x048963DA591ECAAF(sParam0, iParam1, iParam2, func_7(0));
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_33(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_23())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_22())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

void func_34(var uParam0)
{
	if (!func_28(uParam0))
	{
		func_37(uParam0);
	}
	else
	{
		func_35(uParam0);
	}
}

void func_35(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_26(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_37(var uParam0)
{
	if (!func_28(uParam0))
	{
		func_35(uParam0);
	}
}

int func_38()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0x428C32CC68809A35(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_80;
	Var0.f_1 = { Local_79 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_265[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_265[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_265.f_83;
	Var0.f_17 = Local_265.f_83.f_1;
	unk_0xDCAFFD08A08087EB("SwitchSceneNeutral", 0, 1);
	system::wait(400);
	iVar2 = system::start_new_script_with_args(&Local_49, &Var0, 18, iLocal_59);
	unk_0xFD49725F3FE7EE13(&Local_49);
	return iVar2;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_42(1, iVar1, 1);
		return;
	}
	iVar2 = func_41(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_40(iVar2);
}

void func_40(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_45005[iParam0 /*6*/].f_1 == 0)
	{
		if (Global_45005[iParam0 /*6*/].f_1 == unk_0x4A8C381C258A124D())
		{
			Global_45248 = 0;
		}
	}
	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = (Global_45003 - 1);
	if (Global_45003 < 0)
	{
		Global_45003 = 0;
	}
}

int func_41(int iParam0)
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

void func_42(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_45(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_44();
	if (iVar0 == -1)
	{
		return;
	}
	Global_45117[iVar0 /*6*/] = iParam0;
	Global_45117[iVar0 /*6*/].f_1 = iParam1;
	Global_45117[iVar0 /*6*/].f_2 = iParam2;
	Global_45117[iVar0 /*6*/].f_3 = iParam3;
	Global_45117[iVar0 /*6*/].f_4 = iParam4;
	Global_45117[iVar0 /*6*/].f_5 = iParam5;
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45117[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				if (iParam1 == Global_45117[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)
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
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_48()
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_51(0))
		{
			return 0;
		}
		Global_44006++;
		*iParam0 = Global_44006;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1495D79F52B9EEE(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *iParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*iParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_50(iParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
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

int func_51(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	float fVar0;
	
	fVar0 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_79);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_95)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_95 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_96)
	{
		if (func_54())
		{
			iLocal_96 = 1;
			func_53();
		}
	}
}

void func_53()
{
	iLocal_44++;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!unk_0xFC8BFE4B41177C22(Local_265[iVar0 /*14*/]) || !unk_0xFC8BFE4B41177C22(Local_265[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xFC8BFE4B41177C22(Local_265.f_83) || !unk_0xFC8BFE4B41177C22(Local_265.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()
{
	switch (iLocal_80)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()
{
	int iVar0;
	char* sVar1;
	
	if (!func_28(&uLocal_88))
	{
		func_37(&uLocal_88);
		return;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_93) && !unk_0x1C2F771CDC87A3A5(iLocal_93, 0))
	{
		if (unk_0x912159A05BE6B52E(iLocal_93))
		{
			return;
		}
	}
	if (func_25(&uLocal_88) >= 8f)
	{
		iVar0 = (unk_0xC5935DFB3F39785A(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x1C2F771CDC87A3A5(Local_265[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_57(&uLocal_99, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_35(&uLocal_88);
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_58(sParam2, iParam3, 0);
}

int func_58(char* sParam0, int iParam1, bool bParam2)
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
					func_76();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_75();
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
				func_68();
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
				if (func_67())
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
			if (func_66())
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
			func_65();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_64();
		func_59();
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
		func_76();
	}
	return 0;
}

void func_59()
{
	if (!func_60())
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

int func_60()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_63())
	{
		return 0;
	}
	if (func_61(unk_0x259BE71D8A81D4FA()))
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

bool func_61(int iParam0)
{
	return func_62(iParam0, 20);
}

var func_62(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_63()
{
	return -1;
}

void func_64()
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

void func_65()
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

int func_66()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()
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

void func_68()
{
	if (func_118(14))
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
		Global_20930 = func_69();
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

var func_69()
{
	func_70();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_70()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_73(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_72(unk_0x4A8C381C258A124D());
			if (func_71(iVar0) && (!func_118(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_71(Global_113969.f_2366.f_539.f_4321))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_75()
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

void func_76()
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

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_78()
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x1C2F771CDC87A3A5(Local_265.f_83, 0))
	{
		iVar0 = unk_0x5295501D0862870D();
		if (iVar0 <= iLocal_77 && iVar0 >= iLocal_78)
		{
			iLocal_95 = 0;
			return;
		}
		unk_0x190BA0A3BB48F7FD(Local_265.f_83, 0f, 0f, 0,75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_79()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x5295501D0862870D();
	if (iVar0 <= iLocal_77 && iVar0 >= iLocal_78)
	{
		iLocal_264 = 0;
		return;
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_93, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		switch (iLocal_264)
		{
			case 0:
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_93, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 64f && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_97 = 0;
					iLocal_98 = 0;
					iLocal_264 = 1;
				}
				break;
			
			case 1:
				unk_0xB5396F1FB088FE38(&uVar1);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 0, 2);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
				unk_0x93C0674FC00824D0(uVar1);
				unk_0x4BD42B0527065BB6(iLocal_93, uVar1);
				unk_0xD0557B139A542F12(&uVar1);
				iLocal_264 = 2;
				break;
			
			case 2:
				if ((unk_0x9B5C1660CCDF7189(iLocal_93, joaat("script_task_perform_sequence")) != 1 || unk_0x3644984C9D7B57EF(iLocal_93, unk_0x4A8C381C258A124D(), 20f)) && !unk_0x1F9EB85925C3ECD7())
				{
					unk_0x0E95B96CFEFE7B61(iLocal_93, unk_0x4A8C381C258A124D(), -1);
					if (!iLocal_98)
					{
						func_80(iLocal_93, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, 0);
					}
					else
					{
						func_80(iLocal_93, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, 0);
					}
					iLocal_264 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x912159A05BE6B52E(iLocal_93))
				{
					func_35(&uLocal_85);
					unk_0x10425721983AE158(iLocal_93, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_264 = 4;
				}
				break;
			
			case 4:
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_93, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 225f)
				{
					unk_0xB5396F1FB088FE38(&uVar2);
					unk_0x2280392018BC0DD3(0, Local_265.f_83.f_9, 1000);
					unk_0x10425721983AE158(0, Local_265.f_83.f_12, Local_265.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uVar2);
					unk_0x4BD42B0527065BB6(iLocal_93, uVar2);
					unk_0xD0557B139A542F12(&uVar2);
					iLocal_264 = 0;
				}
				if (func_28(&uLocal_85))
				{
					if (func_25(&uLocal_85) >= 5f && !iLocal_97)
					{
						iLocal_97 = 1;
						iLocal_264 = 1;
					}
					else if (func_25(&uLocal_85) >= 10f && !iLocal_98)
					{
						iLocal_98 = 1;
						iLocal_264 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_80(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(iParam0, sParam1, sParam2, func_81(iParam3), iParam4);
}

int func_81(int iParam0)
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

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xFC8BFE4B41177C22(Local_265[iVar2 /*14*/].f_1) && unk_0xFC8BFE4B41177C22(Local_265[iVar2 /*14*/]))
		{
			if (func_87(Local_265[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_265[iVar2 /*14*/].f_1, 1))
			{
				func_85();
				func_84(iLocal_67);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_265[iVar2 /*14*/]))
			{
				if (func_28(&(Local_81[iVar2 /*3*/])))
				{
					if (func_25(&(Local_81[iVar2 /*3*/])) > uLocal_91[iVar2])
					{
						if (unk_0xD9F5E1FEFD1329E4(Local_265[iVar2 /*14*/].f_1, 0) && unk_0xCECDBB848D53DEB2(Local_265[iVar2 /*14*/], Local_265[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0xC5935DFB3F39785A(250, 500);
							iVar1 = unk_0xC5935DFB3F39785A(250, 500);
							unk_0xB5396F1FB088FE38(&uVar3);
							unk_0xFCCE667AD0E974AD(0, Local_265[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0xFCCE667AD0E974AD(0, Local_265[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0x93C0674FC00824D0(uVar3);
							if (!unk_0x4FAFF4BCB7633475(Local_265[iVar2 /*14*/]))
							{
								unk_0x4BD42B0527065BB6(Local_265[iVar2 /*14*/], uVar3);
							}
							unk_0xD0557B139A542F12(&uVar3);
						}
						func_35(&(Local_81[iVar2 /*3*/]));
						uLocal_91[iVar2] = unk_0xD2AA6F822D3A55D2(0f, 3f);
					}
				}
				else
				{
					func_37(&(Local_81[iVar2 /*3*/]));
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(Local_265[iVar2 /*14*/], 0))
			{
				if ((unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), Local_265[iVar2 /*14*/]) && !unk_0x8BF5256C439DF778(Local_265[iVar2 /*14*/])) && !unk_0x0B3FC0E7676E79BF(Local_265[iVar2 /*14*/]))
				{
					Local_265[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_265[iVar2 /*14*/].f_11)
				{
					unk_0xB5396F1FB088FE38(&uVar3);
					unk_0x2280392018BC0DD3(0, Local_265[iVar2 /*14*/].f_9, 1000);
					unk_0x10425721983AE158(0, Local_265[iVar2 /*14*/].f_12, Local_265[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uVar3);
					unk_0x4BD42B0527065BB6(Local_265[iVar2 /*14*/], uVar3);
					unk_0xD0557B139A542F12(&uVar3);
					Local_265[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x8BF5256C439DF778(Local_265[iVar2 /*14*/]) || unk_0x0B3FC0E7676E79BF(Local_265[iVar2 /*14*/]))
				{
					if (!Local_265[iVar2 /*14*/].f_10 && (unk_0x8BF5256C439DF778(Local_265[iVar2 /*14*/]) || unk_0x0B3FC0E7676E79BF(Local_265[iVar2 /*14*/])))
					{
						Local_265.f_101++;
					}
					Local_265[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_265[iVar2 /*14*/].f_10)
				{
					unk_0xB5396F1FB088FE38(&uVar3);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1000);
					unk_0x10425721983AE158(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x2280392018BC0DD3(0, Local_265[iVar2 /*14*/].f_9, 1000);
					unk_0x10425721983AE158(0, Local_265[iVar2 /*14*/].f_12, Local_265[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uVar3);
					unk_0x4BD42B0527065BB6(Local_265[iVar2 /*14*/], uVar3);
					unk_0xD0557B139A542F12(&uVar3);
					Local_265[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xFC8BFE4B41177C22(Local_265.f_83.f_1) && unk_0xFC8BFE4B41177C22(Local_265.f_83))
	{
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_265.f_83.f_1, 0))
		{
			iLocal_52 = Local_265.f_83.f_1;
		}
		if (func_87(Local_265.f_83, 1, 0, 0, 0))
		{
			func_85();
			func_84(iLocal_67);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		}
		if (!unk_0x4FAFF4BCB7633475(Local_265.f_83))
		{
			if (func_28(&uLocal_82))
			{
				if (func_25(&uLocal_82) > fLocal_92)
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_265.f_83.f_1, 0) && unk_0xCECDBB848D53DEB2(Local_265.f_83, Local_265.f_83.f_1, 0))
					{
						iVar0 = unk_0xC5935DFB3F39785A(250, 500);
						iVar1 = unk_0xC5935DFB3F39785A(250, 500);
						unk_0xB5396F1FB088FE38(&uVar3);
						unk_0xFCCE667AD0E974AD(0, Local_265.f_83.f_1, 1, iVar0);
						unk_0xFCCE667AD0E974AD(0, Local_265.f_83.f_1, 31, iVar1);
						unk_0x93C0674FC00824D0(uVar3);
						if (!unk_0x4FAFF4BCB7633475(Local_265.f_83))
						{
							unk_0x4BD42B0527065BB6(Local_265.f_83, uVar3);
						}
						unk_0xD0557B139A542F12(&uVar3);
					}
					func_35(&uLocal_82);
					fLocal_92 = unk_0xD2AA6F822D3A55D2(0f, 3f);
				}
			}
			else
			{
				func_37(&uLocal_82);
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_265.f_83, 0))
		{
			if ((unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), Local_265.f_83) && !unk_0x8BF5256C439DF778(Local_265.f_83)) && !unk_0x0B3FC0E7676E79BF(Local_265.f_83))
			{
				Local_265.f_83.f_11 = 1;
			}
			else if (Local_265.f_83.f_11)
			{
				unk_0xB5396F1FB088FE38(&uVar3);
				unk_0x2280392018BC0DD3(0, Local_265.f_83.f_9, 1000);
				unk_0x10425721983AE158(0, Local_265.f_83.f_12, Local_265.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uVar3);
				unk_0x4BD42B0527065BB6(Local_265.f_83, uVar3);
				unk_0xD0557B139A542F12(&uVar3);
				Local_265.f_83.f_11 = 0;
			}
			if (unk_0x8BF5256C439DF778(Local_265.f_83) || unk_0x0B3FC0E7676E79BF(Local_265.f_83))
			{
				if (!Local_265.f_83.f_10)
				{
					Local_265.f_101++;
				}
				Local_265.f_83.f_10 = 1;
			}
			else if (Local_265.f_83.f_10)
			{
				unk_0xB5396F1FB088FE38(&uVar3);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1000);
				unk_0x10425721983AE158(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x2280392018BC0DD3(0, Local_265.f_83.f_9, 1000);
				unk_0x10425721983AE158(0, Local_265.f_83.f_12, Local_265.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uVar3);
				unk_0x4BD42B0527065BB6(Local_265.f_83, uVar3);
				unk_0xD0557B139A542F12(&uVar3);
				iLocal_264 = 4;
				func_35(&uLocal_85);
				Local_265.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0xC5935DFB3F39785A(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_84(int iParam0)
{
	if (iLocal_57 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_138(iParam0, 0, 0);
		}
		iLocal_67 = 263;
		func_92(&iLocal_58);
		iLocal_57 = 9;
	}
}

void func_85()
{
	int iVar0[10];
	var uVar1;
	int iVar2;
	
	unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xFC8BFE4B41177C22(iVar0[iVar2]) && !unk_0x4FAFF4BCB7633475(iVar0[iVar2]))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
			{
				unk_0xD844F5E50DAB6FF7(iVar0[iVar2], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xB5396F1FB088FE38(&uVar1);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), unk_0xC5935DFB3F39785A(300, 900));
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 0);
				unk_0x93C0674FC00824D0(uVar1);
				unk_0x4BD42B0527065BB6(iVar0[iVar2], uVar1);
				unk_0xD0557B139A542F12(&uVar1);
			}
		}
		iVar2++;
	}
	switch (Global_113969.f_19019.f_1)
	{
		case 0:
			func_86(0);
			break;
		
		case 1:
			func_86(0);
			break;
		
		case 3:
			func_86(0);
			break;
		
		case 4:
			func_86(0);
			break;
		
		case 5:
			func_86(0);
			break;
		
		case 2:
			func_86(0);
			break;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_68 = iParam0;
	iLocal_66 = 0;
	iLocal_57 = 7;
}

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (Local_265.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x1B32E388988DD296(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x685171EED42BC4DF(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
				{
					if (func_88(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x7F420695E3F776FB(iParam0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(unk_0x6EF03BE64E058E2F(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xCA038E64C65D1F9D(iParam0))
			{
				return 1;
			}
			if (unk_0x11552FA9DCB8E126(iVar0, 4))
			{
				if (unk_0x65F146FF416F109F(iVar0))
				{
					if (unk_0x65FFA94B82A71741(iParam0, unk_0xD1A6A821F5AC81DB(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x398315D0C90DE6F6(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0xE94C7FA27FEB00DD((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0xA6534E6C7AE314D6(iParam0))
			{
				if (unk_0xC1089D3918F03D33(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x8764A5B95AE1F967(-1, Var1, 25f) && !unk_0x8764A5B95AE1F967(11, Var1, 25f)) && !unk_0x8764A5B95AE1F967(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xE4DC7B3DD712372B(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_88(var uParam0, int iParam1)
{
	return func_89(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), uParam0, iParam1);
}

var func_89(int iParam0, int iParam1, var uParam2)
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
	return unk_0xED977E2AE2CB16EE(Var0, Var1, uParam2);
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return 0;
	}
	if (func_97(0))
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
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

void func_92(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
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

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_94(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_95(char* sParam0, int iParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, -1);
}

var func_96()
{
	return Global_76498;
}

int func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1)
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

bool func_99()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_100()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_102()
{
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_105()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return ((((bVar1 && unk_0x6D05C5731A838CB3(0, 69)) || (bVar1 && unk_0x6D05C5731A838CB3(0, 70))) || (bVar1 && unk_0x6D05C5731A838CB3(0, 68))) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()));
	}
	return (((((bVar1 && unk_0x6D05C5731A838CB3(0, 24)) || (bVar1 && unk_0x6D05C5731A838CB3(0, 25))) || (bVar1 && unk_0x6D05C5731A838CB3(0, 47))) || unk_0xB73833BDAAE31047(unk_0x4A8C381C258A124D())) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()));
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_69();
				if (!func_71(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_113()) || Global_113016) || Global_32951) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_109()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_113()) || Global_32951) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_113()) || Global_113016) || Global_32951) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_113()) || Global_113016) || Global_32951) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_113() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_98(8, -1)) || func_100()) || func_108()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_111()) || func_110()) || func_108()) || func_107())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_113()) || Global_32951) || func_112()) || func_98(8, -1)) || func_110()) || func_109()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_113()) || func_110()) || Global_113016) || Global_32951) || func_112()) || Global_45250) || func_98(8, -1)) || func_109()) || func_108()) || func_100()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_113()) || Global_113016) || Global_32951) || func_112()) || func_98(8, -1)) || func_109()) || func_108()) || func_111()) || func_110()) || func_100())
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

var func_107()
{
	return Global_101572.f_1;
}

int func_108()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_109()
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

bool func_110()
{
	return Global_101585.f_394 > 0;
}

bool func_111()
{
	return Global_101585.f_393 > 0;
}

var func_112()
{
	return Global_1575083;
}

int func_113()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_114()
{
	if (unk_0x486FF5D06E9659F1(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_115()
{
	return Global_97345;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_118(6) || func_118(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_142(5))
			{
				if (func_106(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xC450B06E5AAA0985(Global_33328[iVar0 /*23*/].f_19);
}

bool func_118(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_119()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x5295501D0862870D();
	if ((iVar0 <= iLocal_77 && iVar0 >= iLocal_78) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
	{
		return;
	}
	if (bLocal_94)
	{
		func_129();
		func_128();
		switch (iLocal_80)
		{
			case 0:
				func_127(-1930,38f, 4441,9f, 38,12f, 260,86f, -1933,442f, 4440,866f, 37,2504f, 184,125f);
				func_127(-1931,24f, 4440,26f, 38,05f, 257,2117f, -1932,795f, 4438,275f, 37,402f, 78,7749f);
				func_127(-1935,01f, 4442,57f, 37,48f, 263,59f, -1934,964f, 4438,306f, 37,1741f, 297,2304f);
				func_127(-1935,5f, 4440,32f, 37,48f, 258,09f, -1937,251f, 4438,761f, 36,9256f, 23,8377f);
				func_127(-1939,63f, 4440,46f, 37,25f, 253,32f, -1938,319f, 4439,913f, 36,7166f, 250,6112f);
				func_126(-1939,564f, 4443,306f, 36,3803f, 262,3551f, -1936,208f, 4444,125f, 36,8594f, 123,8187f);
				break;
			
			case 1:
				func_127(-520,2097f, 2010,816f, 203,6035f, 17,0169f, -517,2971f, 2008,383f, 204,0454f, 2,9896f);
				func_127(-516,9937f, 2013,98f, 203,5907f, 19,3803f, -517,1741f, 2010,813f, 203,8412f, 125,7555f);
				func_127(-518,3414f, 2005,449f, 204,1878f, 20,7231f, -519,0882f, 2013,649f, 203,3304f, 195,7951f);
				func_127(-514,8247f, 2008,574f, 204,3629f, 20,2278f, -514,2933f, 2004,923f, 204,5935f, 126,8655f);
				func_126(-516,1545f, 1999,374f, 204,7715f, 18,7907f, -515,4201f, 2003,622f, 204,5549f, 1,757f);
				break;
			
			case 3:
				func_127(-225,41f, 4227,53f, 44,45f, 82,7f, -231,9795f, 4226,31f, 43,8587f, 353,3938f);
				func_127(-233,16f, 4225,81f, 44,29f, 76,66f, -231,3181f, 4229,25f, 43,8681f, 179,3787f);
				func_127(-233,33f, 4228,89f, 44,35f, 80,88f, -229,4769f, 4226,102f, 43,8909f, 311,8915f);
				func_127(-229,58f, 4225,21f, 44,34f, 75,78f, -227,6066f, 4228,867f, 43,9069f, 186,6535f);
				func_127(-228,85f, 4227,71f, 44,57f, 83,38f, -226,7015f, 4226,683f, 43,8597f, 28,0083f);
				func_126(-225,6736f, 4224,503f, 43,8435f, 77,7579f, -227,2893f, 4224,699f, 43,8335f, 36,55f);
				break;
			
			case 4:
				func_127(1608,91f, 3845,06f, 33,94f, 307,24f, 1610,476f, 3839,163f, 32,9854f, 29,8332f);
				func_127(1606,2f, 3838,41f, 33,62f, 307,44f, 1612,908f, 3841,492f, 32,9721f, 78,3f);
				func_127(1610,47f, 3842,26f, 33,61f, 311,44f, 1608,097f, 3842,676f, 33,3217f, 198,5355f);
				func_127(1604,49f, 3840,42f, 34,18f, 308,19f, 1608,427f, 3837,368f, 32,9989f, 9,9463f);
				func_126(1603,405f, 3836,324f, 33,1144f, 305,055f, 1605,788f, 3840,236f, 33,2826f, 288,7775f);
				break;
			
			case 5:
				func_127(2046,772f, 2130,442f, 91,9486f, 233,1493f, 2036,123f, 2133,981f, 92,615f, 260,0519f);
				func_127(2045,344f, 2126,352f, 91,9358f, 236,3633f, 2044,422f, 2128,961f, 92,088f, 47,8797f);
				func_127(2036,512f, 2137,807f, 92,6507f, 237,2446f, 2041,778f, 2131,354f, 92,4544f, 226,7534f);
				func_127(2041,739f, 2134,324f, 92,4013f, 232,956f, 2039,603f, 2132,563f, 92,6648f, 61,0834f);
				func_127(2039,775f, 2130,025f, 92,5324f, 241,6337f, 2038,744f, 2134,523f, 92,6235f, 128,98f);
				func_126(2030,898f, 2134,197f, 92,5014f, 249,4471f, 2036,58f, 2135,382f, 92,605f, 233,2111f);
				break;
			
			case 2:
				func_127(2992,58f, 2786,28f, 43,21f, 26,81f, 2998,772f, 2777,392f, 42,1008f, 29,7228f);
				func_127(2995,76f, 2787,72f, 43,26f, 33,42f, 2993,12f, 2779,783f, 42,3128f, 286,9825f);
				func_127(2994,91f, 2779,79f, 42,73f, 11,43f, 2999,253f, 2783,97f, 42,5421f, 108,7426f);
				func_127(2999,44f, 2781,11f, 43,11f, 23,89f, 2997,582f, 2787,476f, 42,6953f, 157,4885f);
				func_127(3000,06f, 2775,26f, 42,47f, 17,16f, 2994,719f, 2784,905f, 42,6444f, 213,8879f);
				func_126(2995,525f, 2775,522f, 41,98f, 4,3249f, 2993,511f, 2776,948f, 42,0941f, 305,3785f);
				break;
		}
		switch (iLocal_80)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(sVar1))
		{
			if (unk_0xA2FEC91FCC08673E(sVar1))
			{
				if (!unk_0x03F4074C23C3682E(sVar1))
				{
					unk_0x7DA9B8DF3A97D040(sVar1, 1);
				}
			}
		}
	}
	func_120();
}

void func_120()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_72 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_265.f_0)
		{
			if (!func_125(Local_265[iVar5 /*14*/].f_2))
			{
				Local_265[iVar5 /*14*/].f_1 = unk_0x5779387E956077A6(func_124(0), Local_265[iVar5 /*14*/].f_2, Local_265[iVar5 /*14*/].f_5, 1, 1, 0);
				unk_0x1DE99C193C7EC64B(Local_265[iVar5 /*14*/].f_1, 1084227584);
				unk_0x5FE0938FDE9B0958(Local_265[iVar5 /*14*/].f_1, 1);
				if (func_125(Local_265[iVar5 /*14*/].f_6))
				{
					Local_265[iVar5 /*14*/] = unk_0x8728A378EF2B46B2(Local_265[iVar5 /*14*/].f_1, 4, func_123(), -1, 1, 1);
					unk_0xC229299217554C78(Local_265[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else
				{
					Local_265[iVar5 /*14*/] = unk_0xB1DBFEB95C0EFB88(4, func_123(), Local_265[iVar5 /*14*/].f_6, Local_265[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_265[iVar5 /*14*/].f_12 = sVar3;
					Local_265[iVar5 /*14*/].f_13 = sVar4;
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x5524CAF18378DF39(0, unk_0xC5935DFB3F39785A(100, 500));
					unk_0x10425721983AE158(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0xD2AA6F822D3A55D2(0, 1065353216), 0, 0, 0);
					unk_0x93C0674FC00824D0(uVar0);
					unk_0x4BD42B0527065BB6(Local_265[iVar5 /*14*/], uVar0);
					unk_0xD0557B139A542F12(&uVar0);
				}
				unk_0xECF7FE1783A38672(Local_265[iVar5 /*14*/], 1);
				unk_0x165FAFDA0B5E4A40(Local_265[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_265.f_83.f_1 = unk_0x5779387E956077A6(func_124(1), Local_265.f_83.f_2, Local_265.f_83.f_5, 1, 1, 0);
		unk_0x1DE99C193C7EC64B(Local_265.f_83.f_1, 1084227584);
		unk_0x5FE0938FDE9B0958(Local_265.f_83.f_1, 1);
		if (func_125(Local_265.f_83.f_6))
		{
			Local_265.f_83 = unk_0x8728A378EF2B46B2(Local_265.f_83.f_1, 4, func_123(), -1, 1, 1);
			unk_0xC229299217554C78(Local_265.f_83.f_1, 1, 0, 0);
		}
		else
		{
			Local_265.f_83 = unk_0xB1DBFEB95C0EFB88(4, func_123(), Local_265.f_83.f_6, Local_265.f_83.f_9, 1, 1);
			iVar1 = (unk_0xC5935DFB3F39785A(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_265.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_265.f_83.f_13 = sVar4;
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x0FD8B5F4BB15CD71(0, func_122((unk_0xC5935DFB3F39785A(0, 65535) % 1000), 1, 1000));
			unk_0x10425721983AE158(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0xD2AA6F822D3A55D2(0, 1065353216), 0, 0, 0);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(Local_265.f_83, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
	}
	else if (fLocal_72 < 225f)
	{
	}
	iLocal_93 = Local_265.f_83;
	if (!unk_0x1C2F771CDC87A3A5(Local_265[0 /*14*/], 0))
	{
		func_121(&uLocal_99, 1, Local_265[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_265[1 /*14*/], 0))
	{
		func_121(&uLocal_99, 2, Local_265[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_265[2 /*14*/], 0))
	{
		func_121(&uLocal_99, 3, Local_265[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_28(&uLocal_88))
	{
		func_37(&uLocal_88);
	}
	else
	{
		func_35(&uLocal_88);
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_122(int iParam0, int iParam1, int iParam2)
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

int func_123()
{
	return joaat("a_m_y_motox_01");
}

int func_124(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_265.f_71)
	{
		if (unk_0xAD1840C2E6AF7D5E(Local_265.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_80 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0xC5935DFB3F39785A(0, iVar0);
	if (Local_265.f_71[iVar0] == 0)
	{
		if (Local_265.f_71[0] == 0)
		{
			switch (iLocal_80)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_265.f_71[0];
		}
	}
	return Local_265.f_71[iVar0];
}

int func_125(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_126(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	if (func_125(Local_265.f_83.f_2))
	{
		Local_265.f_83.f_2 = { Param0 };
		Local_265.f_83.f_5 = fParam1;
		Local_265.f_83.f_6 = { Param2 };
		Local_265.f_83.f_9 = fParam3;
	}
}

void func_127(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_265.f_0)
	{
		if (!bVar1 && func_125(Local_265[iVar0 /*14*/].f_2))
		{
			Local_265[iVar0 /*14*/].f_2 = { Param0 };
			Local_265[iVar0 /*14*/].f_5 = fParam1;
			Local_265[iVar0 /*14*/].f_6 = { Param2 };
			Local_265[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_265.f_0)
	{
		Local_265[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_265[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_265.f_83.f_2 = { 0f, 0f, 0f };
	Local_265.f_83.f_5 = 0f;
}

void func_129()
{
	switch (iLocal_80)
	{
		case 0:
			unk_0x5E08BBBF87BC4886(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1, 0, 1);
			unk_0x60040CDD28AA1BC3(-227,43f, 3888,9f, 36,41f, 50f, 1, 0, 0, 0, 0, 0, 0);
			unk_0x470041F66BF345BA("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x5E08BBBF87BC4886(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x5E08BBBF87BC4886(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1, 0, 1);
			unk_0x6F3435F85C932A08(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 0, 0, 0, 0, 0, 0, 0);
			unk_0x5E08BBBF87BC4886(-196,58f, 4217,64f, 50,083f, -202,574f, 4210,926f, 40,0262f, 10f, 1, 0, 1);
			unk_0x470041F66BF345BA("WORLD_HUMAN_HIKER", 0);
			unk_0x470041F66BF345BA("WORLD_VEHICLE_EMPTY", 0);
			unk_0x470041F66BF345BA("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x470041F66BF345BA("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x470041F66BF345BA("WORLD_VEHICLE_EMPTY", 1);
			unk_0x470041F66BF345BA("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x470041F66BF345BA("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x5E08BBBF87BC4886(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 100f, 1, 0, 1);
			unk_0x6F3435F85C932A08(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 0, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x7DA9B8DF3A97D040("QUARRY", 0);
			unk_0x5E08BBBF87BC4886(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1, 0, 1);
			unk_0x6F3435F85C932A08(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 0, 0, 0, 0, 0, 0, 0);
			break;
	}
}

var func_130()
{
	return ((((((((func_131(&(Local_265.f_71)) && func_131(&(Local_265.f_77))) && func_131(&(Local_265.f_99))) && unk_0xE100DD4F82A51BDE("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0xE100DD4F82A51BDE("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0xE100DD4F82A51BDE("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0xE100DD4F82A51BDE("amb@world_human_aa_smoke@male@idle_a")) && unk_0xE100DD4F82A51BDE("random@street_race")) && unk_0xE100DD4F82A51BDE("gestures@m@standing@casual"));
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
			{
				if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_132()
{
	char cVar0[64];
	
	func_134(&(Local_265.f_77), joaat("a_m_y_motox_01"));
	func_134(&(Local_265.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_80)
	{
		case 0:
			func_134(&(Local_265.f_71), joaat("sanchez"));
			func_134(&(Local_265.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_134(&(Local_265.f_71), joaat("mesa"));
			func_134(&(Local_265.f_71), joaat("bjxl"));
			func_134(&(Local_265.f_71), joaat("patriot"));
			func_134(&(Local_265.f_71), joaat("dubsta2"));
			func_134(&(Local_265.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_134(&(Local_265.f_71), joaat("sanchez"));
			func_134(&(Local_265.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_134(&(Local_265.f_71), joaat("sanchez"));
			func_134(&(Local_265.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_134(&(Local_265.f_71), joaat("mesa"));
			func_134(&(Local_265.f_71), joaat("bfinjection"));
			func_134(&(Local_265.f_71), joaat("bjxl"));
			func_134(&(Local_265.f_71), joaat("sadler"));
			func_134(&(Local_265.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_134(&(Local_265.f_71), joaat("sanchez"));
			func_134(&(Local_265.f_71), joaat("blazer"));
			break;
	}
	unk_0x80813AC549A1E8AE("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x80813AC549A1E8AE("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x80813AC549A1E8AE("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x80813AC549A1E8AE("amb@world_human_aa_smoke@male@idle_a");
	unk_0x80813AC549A1E8AE("random@street_race");
	unk_0x80813AC549A1E8AE("gestures@m@standing@casual");
	if (iLocal_80 == 0)
	{
		unk_0xEC9DAA34BBB4658C(joaat("prop_fncwood_14c"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_80)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0xD772E6694B8472A6(1, &cVar0);
	func_133(&(Local_265.f_77));
	func_133(&(Local_265.f_71));
	func_133(&(Local_265.f_99));
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_135(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(int iParam0)
{
	iLocal_57 = iParam0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
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

int func_139()
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

int func_140()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_44042);
}

int func_143(int iParam0, int iParam1)
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

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_145()
{
	StringCopy(&Local_49, "Offroad_Races", 64);
	unk_0x2918C30E34ED2C88(1);
	fLocal_75 = (6f + 4f);
	iLocal_61 = 4;
	func_103(&uLocal_56, 4194304);
	iLocal_59 = 62500;
	iLocal_52 = 0;
	iLocal_77 = 0;
	iLocal_78 = 25;
	iLocal_65 = 0;
	iLocal_80 = func_149(Local_54, &Local_79);
	iLocal_67 = func_148(iLocal_80);
	fLocal_64 = (system::to_float(func_147(iLocal_67)) + 5f);
	if (func_141(0, iLocal_61))
	{
		bLocal_94 = true;
	}
	else
	{
		func_84(iLocal_67);
		bLocal_94 = false;
	}
	if (iLocal_80 > Global_113969.f_19019.f_1)
	{
		if (func_117(func_148(iLocal_80)))
		{
		}
		iLocal_67 = 263;
		func_84(iLocal_67);
	}
	if (!func_117(func_148(iLocal_80)) && unk_0x9390801B06EE998F())
	{
		if (iLocal_67 != 263)
		{
			if (func_146(iLocal_67, 1))
			{
				iLocal_67 = 263;
			}
		}
		func_84(iLocal_67);
	}
	if (iLocal_80 == 2)
	{
		iLocal_77 = 20;
		iLocal_78 = 3;
	}
	if (iLocal_80 == 1 || iLocal_80 == 5)
	{
		sLocal_63 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_63 = "PLAY_OFFROAD_M";
	}
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_33328[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_33328[iVar0 /*23*/].f_11, 0);
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam1)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_150(0) };
	Var1[1 /*3*/] = { func_150(1) };
	Var1[3 /*3*/] = { func_150(3) };
	Var1[4 /*3*/] = { func_150(4) };
	Var1[5 /*3*/] = { func_150(5) };
	Var1[2 /*3*/] = { func_150(2) };
	Var1[6 /*3*/] = { func_150(6) };
	fVar2 = system::vdist2(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = system::vdist2(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_150(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939,483f, 4443,953f, 37,3474f;
		
		case 1:
			return -516,9256f, 2008,014f, 204,0998f;
		
		case 3:
			return -223,6755f, 4224,644f, 43,7304f;
		
		case 4:
			return 1606,578f, 3841,188f, 33,2931f;
		
		case 5:
			return 2037,664f, 2137,386f, 92,7095f;
		
		case 2:
			return 2996,776f, 2774,085f, 43,26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_151(var uParam0, int iParam1)
{
	func_152(uParam0, iParam1);
}

void func_152(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_67 != 263)
		{
			func_138(iLocal_67, 0, 0);
		}
	}
	func_92(&iLocal_58);
	if (func_144(uLocal_56, 2))
	{
		func_5();
		func_151(&uLocal_56, 2);
		func_20(&iLocal_60);
	}
	iLocal_60 = -1;
	func_154();
	unk_0xBBC29EBE6E1A48FA();
}

void func_154()
{
	func_151(&uLocal_56, 4);
	func_155();
	if (unk_0xF40767E41852FB72(uLocal_48))
	{
		unk_0xE1440F5C29913E5D(uLocal_48, 3);
	}
	if (!unk_0xFF692AB7350A74D7(&Local_50))
	{
		if (unk_0x09112CCF7824FE38(&Local_50) != 0)
		{
			unk_0xFD49725F3FE7EE13(&Local_50);
		}
	}
}

void func_155()
{
}

