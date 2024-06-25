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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<16> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
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
	var uLocal_76 = 1;
	var uLocal_77 = 0;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	var uLocal_82 = 0;
	var uLocal_83 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	struct<2> Local_259 = { 0, 5 } ;
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
	var uLocal_275 = 5;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_54 = { ScriptParam_259.f_1[0 /*3*/] };
	Local_54 = { Local_54 };
	uLocal_52 = uLocal_52;
	Local_50 = { Local_50 };
	bVar0 = false;
	if (unk_0x96CFB880BAC634CE(114))
	{
		func_144(1);
	}
	uLocal_51 = unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA());
	iLocal_57 = 0;
	func_142(&Global_112617, 0);
	func_136();
	unk_0x2918C30E34ED2C88(1);
	if (func_135(uLocal_56, 1))
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
	if (!func_135(uLocal_56, 8))
	{
		if (!func_133(iLocal_62))
		{
			if (func_132(0, iLocal_61))
			{
				func_144(0);
			}
			else
			{
				func_144(1);
			}
		}
	}
	if (iLocal_61 != -1)
	{
		if (!func_132(0, iLocal_61))
		{
			func_144(1);
		}
	}
	if (func_135(uLocal_56, 8388608))
	{
		func_144(1);
	}
	if (func_135(uLocal_56, 524288) && (func_131() && !func_130()))
	{
		func_144(1);
	}
	if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1 && !func_135(uLocal_56, 4194304))
	{
		if (iLocal_67 != 263)
		{
			func_129(iLocal_67, 1, 0);
			iLocal_67 = 263;
		}
		func_128(10);
	}
	while (true)
	{
		if (Global_4)
		{
			func_144(1);
		}
		uLocal_51 = unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA());
		if (func_135(uLocal_56, 1048576))
		{
			if (unk_0x1C2F771CDC87A3A5(uLocal_51, 0))
			{
				func_144(1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_51) && !unk_0x1C2F771CDC87A3A5(iLocal_51, 0))
		{
			Local_53 = { unk_0xD1A6A821F5AC81DB(iLocal_51, 1) };
			fLocal_55 = system::vdist2(Local_53, ScriptParam_259.f_1[0 /*3*/]);
			fLocal_55 = fLocal_55;
			Local_73 = { Local_53 };
			Local_74 = { ScriptParam_259.f_1[0 /*3*/] };
			Local_73.f_2 = 0f;
			Local_74.f_2 = 0f;
			fLocal_72 = system::vdist2(Local_73, Local_74);
			switch (iLocal_57)
			{
				case 0:
					if (func_133(iLocal_62) || (func_135(uLocal_56, 16) && !func_135(uLocal_56, 524288)))
					{
						iLocal_60 = -1;
						func_124();
						func_128(1);
					}
					else
					{
						if (fLocal_72 > (fLocal_64 * fLocal_64))
						{
							if (iLocal_67 != 263)
							{
								func_129(iLocal_67, 1, 0);
								iLocal_67 = 263;
							}
							func_128(10);
						}
						if ((Local_53.f_2 - ScriptParam_259.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122())
					{
						iLocal_65 = iLocal_65;
						func_128(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (unk_0xBF52D447C795492B())
					{
						func_144(1);
						return;
					}
					if (!func_133(iLocal_62))
					{
						if (!func_135(uLocal_56, 8))
						{
							bVar1 = true;
							if (unk_0x1B79E937E91F40C3(&(Global_101533.f_3), &Local_50))
							{
								Local_50 = { Local_49 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_144(0);
								break;
							}
						}
					}
					if (!func_135(uLocal_56, 4))
					{
						func_119();
						func_118(&uLocal_56, 4);
					}
					if (fLocal_72 > (fLocal_64 * fLocal_64) && !Global_101567)
					{
						if (iLocal_67 != 263)
						{
							if (func_117(6) && !func_116(iLocal_67))
							{
							}
							else
							{
								func_129(iLocal_67, 1, 0);
								iLocal_67 = 263;
							}
						}
						func_128(10);
					}
					else
					{
						Local_50 = { Local_49 };
						bVar2 = !func_135(uLocal_56, 64);
						func_142(&uLocal_56, 128);
						if (!func_115(3) && !Global_101567)
						{
							if (func_135(uLocal_56, 2097152))
							{
								if ((!func_135(uLocal_56, 1) || !unk_0xFC8BFE4B41177C22(func_114())) && !Global_101567)
								{
									func_128(10);
									break;
								}
							}
						}
						if (func_135(uLocal_56, 524288) && (func_131() && !func_130()))
						{
							func_144(1);
						}
						if (func_113())
						{
							func_144(1);
						}
						if ((!func_105(6) || Global_113016) || func_104())
						{
							bVar2 = false;
						}
						if (func_135(uLocal_56, 1))
						{
							if (!func_103())
							{
								func_101(&uLocal_56, 128);
								bVar2 = false;
							}
						}
						if (func_100(1))
						{
							bVar2 = false;
						}
						if (Global_79389)
						{
							bVar2 = false;
						}
						if (func_99())
						{
							bVar2 = false;
						}
						if (unk_0x3555462DB47B7AB1())
						{
							bVar2 = false;
						}
						if (func_98() || func_97(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
						{
							bVar2 = false;
						}
						if (!unk_0x206A708429803A39(unk_0x259BE71D8A81D4FA()))
						{
							bVar2 = false;
						}
						if (func_96(0) || func_95())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x65FFA94B82A71741(iLocal_51, ScriptParam_259.f_1[0 /*3*/], fLocal_75, fLocal_75, 2f, 0, 1, iLocal_65))
							{
								bVar2 = false;
							}
							if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x4CC1CF98851922CE(0, 51);
								if (func_94(uLocal_52))
								{
									if (iLocal_58 == -1)
									{
										func_93(&iLocal_58, 4, sLocal_63, 0, 0, 0, 0);
										func_101(&uLocal_56, 2048);
									}
									else if (!func_135(uLocal_56, 2048) || !unk_0x4C705AAF75363287())
									{
										func_92(&iLocal_58);
										func_142(&uLocal_56, 2048);
									}
									if (func_90(iLocal_58, 1))
									{
										sLocal_63 = sLocal_63;
										func_92(&iLocal_58);
										func_142(&uLocal_56, 2048);
										unk_0x97A5024CE91641F1(&Local_50);
										unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 56);
										func_128(5);
									}
								}
								else
								{
									sLocal_63 = sLocal_63;
									func_92(&iLocal_58);
									func_142(&uLocal_56, 2048);
									unk_0x97A5024CE91641F1(&Local_50);
									unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 56);
									func_128(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_58 != -1)
							{
								func_92(&iLocal_58);
								func_142(&uLocal_56, 2048);
								unk_0x428C32CC68809A35(0);
							}
						}
					}
					func_87();
					break;
				
				case 5:
					unk_0x4CC1CF98851922CE(0, 51);
					if (unk_0xA6E4F7A73ABC4A76(&Local_50))
					{
						if (iLocal_58 != -1)
						{
							func_92(&iLocal_58);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_135(uLocal_56, 1))
						{
							if (func_117(6) || func_117(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_84(&iLocal_60, 6, iLocal_62, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
							{
								unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
							}
							func_83();
							if (Global_45250)
							{
								func_74(unk_0x4A8C381C258A124D());
							}
							unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 56);
							uLocal_48 = func_26();
							func_101(&uLocal_56, 2);
							func_128(6);
							func_22(&uLocal_69);
							if (iLocal_61 != -1)
							{
								func_21(iLocal_61);
								func_18(func_20(iLocal_61), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_17();
						}
						else if (iVar3 == 0)
						{
							func_128(10);
						}
					}
					else
					{
						func_17();
					}
					break;
				
				case 6:
					if (func_135(Global_112617, 262144))
					{
						func_142(&Global_112617, 262144);
						func_16();
					}
					if (func_135(uLocal_56, 2097152))
					{
						if (!func_115(3) && !unk_0xF40767E41852FB72(uLocal_48))
						{
							func_128(10);
						}
					}
					if (!unk_0xF40767E41852FB72(uLocal_48))
					{
						unk_0x60642EDE690B1018(system::round((func_12(&uLocal_69) * 1000f)), iLocal_61, 0);
						func_11(&uLocal_69);
						func_142(&uLocal_56, 256);
						func_8();
						if (bVar0)
						{
							func_142(&uLocal_56, 2);
						}
						else if (func_135(uLocal_56, 2))
						{
							if (func_135(Global_112617, 0))
							{
								func_7(&iLocal_60);
								iLocal_60 = -1;
								func_142(&uLocal_56, 2);
							}
							else
							{
								func_7(&iLocal_60);
								iLocal_60 = -1;
								func_142(&uLocal_56, 2);
							}
						}
						func_128(0);
						if (iLocal_61 != -1)
						{
							if (func_135(Global_112617, 0))
							{
								unk_0x375B1B37EF136A49(func_20(iLocal_61), 0, Global_101570, 0);
								func_6(func_20(iLocal_61), 0, Global_101570, 1, 0);
							}
							else
							{
								unk_0x375B1B37EF136A49(func_20(iLocal_61), 0, Global_101570, 0);
								func_6(func_20(iLocal_61), 0, Global_101570, 0, 0);
							}
						}
						func_5();
						func_142(&Global_112617, 0);
						if (func_135(uLocal_56, 16777216))
						{
							func_144(1);
						}
						if (iLocal_61 != -1)
						{
							if (Global_113969.f_9088)
							{
								if (!func_132(0, iLocal_61))
								{
									func_144(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_128(0);
					break;
				
				case 10:
					func_144(1);
					break;
				
				case 9:
					if (fLocal_72 > (fLocal_64 * fLocal_64))
					{
						if (iLocal_67 != 263)
						{
							func_129(iLocal_67, 1, 0);
							iLocal_67 = 263;
						}
						func_128(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_67 != 263)
					{
						func_129(iLocal_67, 0, 0);
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
					func_128(4);
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
									if (func_133(iLocal_62) && func_132(0, iLocal_61))
									{
										func_136();
										if (iLocal_67 != 263)
										{
											func_129(iLocal_67, 1, 0);
										}
										func_128(0);
									}
								}
							}
							else if (iLocal_68 == 0)
							{
								if (fLocal_72 > (fLocal_64 * fLocal_64))
								{
									if (iLocal_67 != 263)
									{
										func_129(iLocal_67, 1, 0);
										iLocal_67 = 263;
									}
									func_128(10);
								}
							}
							else if (iLocal_68 == 1)
							{
								if (fLocal_72 > ((80f + 5f) * (80f + 5f)))
								{
									func_136();
									if (iLocal_67 != 263)
									{
										func_129(iLocal_67, 1, 0);
									}
									func_128(0);
								}
							}
						}
						else
						{
							func_129(iLocal_67, 1, 0);
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
	func_3(&uLocal_76);
	func_3(&uLocal_78);
	unk_0x268BE77F77533D03("pickup_object");
	unk_0x268BE77F77533D03("oddjobs@basejump@ig_15");
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
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_7(int iParam0)
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

void func_8()
{
	char cVar0[24];
	
	if (unk_0x1226C55CA7D2269A() || func_10())
	{
		unk_0x012C74D626CB4559(StackVal, 0, 0, 0);
	}
	else if (unk_0x0BA1A956D36B210F() || func_9())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5F974E79EAE32BE7(0, &cVar0);
	}
}

var func_9()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_10()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_11(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_12(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_13(bool bParam0)
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

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_16()
{
	return 1;
}

void func_17()
{
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD6F9DEE4765092A9(&Global_98583))
	{
		unk_0x1A6EB10909EB6840(&Global_98583, 0, 0, 0, 1, 0);
		StringCopy(&Global_98583, "", 64);
	}
	StringCopy(&Global_98583, sParam0, 64);
	unk_0x048963DA591ECAAF(sParam0, iParam1, iParam2, func_19(0));
}

int func_19(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

char* func_20(int iParam0)
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

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_10())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_9())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

void func_22(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_25(uParam0);
	}
	else
	{
		func_23(uParam0);
	}
}

void func_23(var uParam0)
{
	func_24(uParam0, 0f);
}

void func_24(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_25(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_23(uParam0);
	}
}

int func_26()
{
	int iVar0;
	
	Global_113969.f_18970 = iLocal_80;
	switch (iLocal_80)
	{
		case 4:
		case 8:
			func_27(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_27(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
	}
	iVar0 = system::start_new_script_with_args(&Local_49, &Local_81, 170, iLocal_59);
	unk_0xFD49725F3FE7EE13(&Local_49);
	return iVar0;
}

void func_27(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	
	Var6 = { func_73(iLocal_80) };
	Var6 = { func_72(system::cos(Var6.f_2), system::sin(Var6.f_2), unk_0xD1AA84345B760931(Var6.f_0)) };
	unk_0xAC48F8E2BF2BEBF7(func_71(iLocal_80), Var6, 5000f, 0);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 256);
	unk_0x747786364137DC63(0);
	unk_0x37B894853929BF1A(0);
	func_69(1);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
		if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,3f)
		{
			unk_0x0FD8B5F4BB15CD71(unk_0x4A8C381C258A124D(), -1);
			while (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,3f)
			{
				system::wait(0);
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_253))
		{
			Var4 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(iLocal_253, 0) };
			Var4.f_2 = 0f;
			fVar7 = system::vmag(Var4);
			unk_0xB5396F1FB088FE38(&uVar1);
			if (fVar7 > 0,8f)
			{
				Var4 = { Var4 * FtoV((0,78f / fVar7)) };
				Var5 = { unk_0xD1A6A821F5AC81DB(iLocal_253, 0) + Var4 };
				if (iLocal_80 == 12)
				{
					unk_0xA966E518B752B92A(0, Var5, 1f, 20000, 1048576000, 0, func_68(Var5, unk_0xD1A6A821F5AC81DB(iLocal_253, 0)));
				}
				else
				{
					unk_0x63C8DCBEC1CF8225(0, Var5, 1f, -1, func_68(Var5, unk_0xD1A6A821F5AC81DB(iLocal_253, 0)), 1056964608);
				}
			}
			else if (fVar7 > 0,15f)
			{
				unk_0x2280392018BC0DD3(0, func_68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_253, 0)), 0);
			}
			unk_0x10425721983AE158(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uVar1);
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
				unk_0x4BD42B0527065BB6(unk_0x4A8C381C258A124D(), uVar1);
			}
			unk_0xD0557B139A542F12(&uVar1);
			func_69(1);
		}
	}
	func_25(&uLocal_249);
	while ((func_12(&uLocal_249) < 6f && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 3))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
		system::wait(0);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 3))
	{
		unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 0,8f);
		bVar8 = true;
	}
	while ((func_12(&uLocal_249) < 6f && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0)) && unk_0x82E64DE58A6B84A8(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low") < 0,22f)
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
		if (!bVar8 && unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 3))
		{
			unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 0,8f);
			bVar8 = true;
		}
		system::wait(0);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (!bVar8 && unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 3))
		{
			unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "pickup_object", "pickup_low", 0,7f);
			bVar8 = true;
		}
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
	}
	func_11(&uLocal_249);
	func_43();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_37() == 0)
		{
			unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 9, 5, 0, 0);
		}
		else if (func_37() == 1)
		{
			unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 8, 1, 0, 0);
		}
		else if (func_37() == 2)
		{
			unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_35(func_36(iLocal_80)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			unk_0xA966E518B752B92A(unk_0x4A8C381C258A124D(), func_36(iLocal_80), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_253))
		{
			unk_0x51C8BEA2005931AB(&iLocal_253);
		}
		uVar2 = unk_0x96A32328480B485C(26379945, func_34(iLocal_80), func_33(iLocal_80), func_32(iLocal_80), 1, 2);
		uVar3 = unk_0x96A32328480B485C(26379945, func_31(iLocal_80), func_30(iLocal_80), func_29(iLocal_80), 0, 2);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		unk_0xC62E5824404F8836("HAND_SHAKE", 0,2f);
		func_25(&uVar0);
		while (func_12(&uVar0) < 1,5f)
		{
			system::wait(0);
		}
		unk_0xB56F35D8A770F80F(uVar3, uVar2, func_28(iLocal_80), 1, 1);
		func_23(&uVar0);
		while (func_12(&uVar0) < ((system::to_float(func_28(iLocal_80)) / 1000f) + 0,3f))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
			}
			system::wait(0);
		}
	}
	else
	{
		Local_81.f_2 = iLocal_253;
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58,4197f, 0f, -47,9402f;
		
		case 8:
			return 47,6798f, 0f, -55,2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119,8524f, -866,9928f, 42,3211f;
		
		case 8:
			return -846,0496f, 277,5203f, 92,9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_33(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4,0151f, 0f, -47,5544f;
		
		case 8:
			return 2,5127f, 0f, -55,2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119,8524f, -866,9928f, 42,3211f;
		
		case 8:
			return -846,0496f, 277,5203f, 92,9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83,4741f, -835,4191f, 39,5575f;
		
		case 8:
			return -772,8513f, 312,9656f, 84,6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_37()
{
	func_38();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_41(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_40(unk_0x4A8C381C258A124D());
			if (func_39(iVar0) && (!func_117(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_39(Global_113969.f_2366.f_539.f_4321))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_43()
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
	if (unk_0xFC8BFE4B41177C22(iLocal_253))
	{
		unk_0x51C8BEA2005931AB(&iLocal_253);
	}
	func_51(0, 0, 1);
	iLocal_253 = unk_0x43AFC452F25F3A2F(joaat("p_parachute_s"), func_50(iLocal_80), 1, 1, 0, 0);
	unk_0xCF39804E8C88080E(iLocal_253, func_49(iLocal_80), 2, 1);
	func_44(&Var0, &uVar1);
	Var2 = { 0f, 0f, uVar1 };
	uVar3 = unk_0x2EC137C692A52458(Var0, Var2, 2);
	unk_0x381D671BCFC294D9(iLocal_253, uVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0xBF3D28CA44F3BE2D(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar4 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0xF9B66DAE101B699C(uVar4, uVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x4CBC5D1BC117616B(uVar4, 1);
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	while (unk_0xBD3B265153D3BA2D(uVar3) < 0,6f)
	{
		system::wait(0);
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = { func_48(iLocal_80) };
	switch (iLocal_80)
	{
		case 5:
			*uParam1 = -1,8f;
			break;
		
		case 4:
			*uParam1 = func_47(func_68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 111,6f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -104,04f);
			}
			break;
		
		case 8:
			*uParam1 = func_47(func_68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 79,28f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_47(func_68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_47(func_68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_45(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_46(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_47(float fParam0, float fParam1, float fParam2)
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

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829,3729f, -1289,817f, 4,0005f;
		
		case 1:
			return 1208,2f, 174,3914f, 80,1245f;
		
		case 2:
			return 2463,793f, 1509,956f, 35,0349f;
		
		case 3:
			return -274,6549f, 6633,898f, 7,1166f;
		
		case 4:
			return -92,35f, -854,3f, 39,571f;
		
		case 5:
			return -120,92f, -976,05f, 295,49f;
		
		case 6:
			return -1237,2f, 4540,75f, 184,75f;
		
		case 7:
			return -742,5269f, 4493,315f, 75,1444f;
		
		case 8:
			return -801,3582f, 298,8532f, 84,949f;
		
		case 9:
			return -1367,595f, 4381,943f, 41,132f;
		
		case 10:
			return 2517,931f, 4971,752f, 44,7082f;
		
		case 11:
			return 1054,534f, -179,6562f, 70,3066f;
		
		case 12:
			return -767,415f, 4331,792f, 147,682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12,77f;
		
		case 5:
			return 10f, 0f, -134,58f;
		
		case 6:
			return 76f, 0f, -89,95f;
		
		case 8:
			return 12f, 0f, 89,56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_50(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92,25f, -854,28f, 39,85f;
		
		case 5:
			return -120,92f, -976,05f, 295,49f;
		
		case 6:
			return -1237,2f, 4540,75f, 184,75f;
		
		case 8:
			return -801,57f, 298,85f, 85,25f;
		
		case 12:
			return -767,415f, 4331,792f, 147,682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_64(0);
	func_53(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_52(23, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, iParam0);
	}
}

void func_53(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_63(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_62())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_61(1, iParam3, uParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_63(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_61(0, iParam3, uParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_59(unk_0x259BE71D8A81D4FA())) && !func_55(unk_0x259BE71D8A81D4FA(), 0)) && !func_54()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_59(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_54()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1574926;
}

int func_58(var uParam0)
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

int func_59(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
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

bool func_60()
{
	return BitTest(Global_2621446, 3);
}

int func_61(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_62()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_63(int iParam0)
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

void func_64(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_66())
		{
			func_65(1, 1);
		}
		else
		{
			func_65(0, 0);
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
	if (!func_62())
	{
		Global_20930.f_1 = 3;
	}
}

void func_65(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_96(0))
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

bool func_66()
{
	return BitTest(Global_1956920, 5);
}

bool func_67()
{
	return BitTest(Global_1956920, 19);
}

float func_68(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		func_70();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_96(0))
		{
			func_64(0);
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

void func_70()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

Vector3 func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143,586f, -1859,747f, 208,3878f;
		
		case 1:
			return 877,5864f, -436,3322f, 536,9036f;
		
		case 2:
			return 2041,231f, 1978,98f, 585,9358f;
		
		case 3:
			return 405,2326f, 5705,887f, 697,2318f;
		
		case 4:
			return -103,8901f, -870,8046f, 298,7574f;
		
		case 5:
			return -118,2569f, -975,1133f, 297,3781f;
		
		case 6:
			return -1237,465f, 4526,661f, 181,7929f;
		
		case 7:
			return -357,7932f, 4107,914f, 314,8059f;
		
		case 8:
			return -809,6324f, 331,3331f, 233,2818f;
		
		case 9:
			return -1286,926f, 3660,203f, 1076,051f;
		
		case 10:
			return 1022,178f, 3975,738f, 1362,533f;
		
		case 11:
			return 1608,553f, -434,5186f, 1321,916f;
		
		case 12:
			return -756,3533f, 4341,521f, 143,8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_72(struct<3> Param0)
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

Vector3 func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21,7965f, -0,0328f, 70,0438f;
		
		case 1:
			return -26,5541f, 0,0092f, -86,4416f;
		
		case 2:
			return -11,2825f, 0,0213f, 148,5283f;
		
		case 3:
			return -39,935f, 0f, 12,8174f;
		
		case 4:
			return 0,9749f, 0f, -5,2236f;
		
		case 5:
			return -12,889f, 0f, 1,6227f;
		
		case 6:
			return -48,5605f, 0f, 160,4909f;
		
		case 7:
			return -37,0509f, 0,0324f, 24,0288f;
		
		case 8:
			return -17,4118f, 0f, 117,7175f;
		
		case 9:
			return -15,4633f, 0,0328f, -5,1142f;
		
		case 10:
			return -20,9567f, 0f, 170,5743f;
		
		case 11:
			return 1,9344f, 0f, -55,2084f;
		
		case 12:
			return -46,0342f, 0f, 37,5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74(int iParam0)
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
	iVar0 = func_82(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_77(1, iVar1, 1);
		return;
	}
	iVar2 = func_76(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_75(iVar2);
}

void func_75(int iParam0)
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

int func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, int iParam2)
{
	func_78(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_80(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_79();
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

int func_79()
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

int func_80(int iParam0, int iParam1, int iParam2)
{
	if (func_81(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0, int iParam1, int iParam2)
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

int func_82(int iParam0)
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

void func_83()
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

int func_84(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_86(0))
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
		if (!func_133(iParam2))
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
			func_85(iParam0, iParam4);
		}
	}
	return 2;
}

void func_85(var uParam0, int iParam1)
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

int func_86(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_87()
{
	switch (iLocal_80)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_88();
			break;
		
		default:
			break;
	}
}

void func_88()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(uVar0))
	{
		Local_81.f_1 = iVar0;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_253))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_253, 1) };
		if (system::vdist2(Var1, Local_54) > 25f)
		{
			func_89(0);
		}
	}
}

void func_89(int iParam0)
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
	if (func_96(0))
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

int func_94(var uParam0)
{
	return 1;
}

var func_95()
{
	return Global_76498;
}

int func_96(int iParam0)
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

var func_97(int iParam0, int iParam1)
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

bool func_98()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_99()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_103()
{
	return 1;
}

bool func_104()
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

int func_105(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_112()) || Global_113016) || Global_32951) || func_111()) || func_97(8, -1)) || func_110()) || func_109()) || func_108()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_112()) || Global_32951) || func_111()) || func_97(8, -1)) || func_108()) || func_110()) || func_109()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_112()) || Global_113016) || Global_32951) || func_111()) || func_97(8, -1)) || func_108()) || func_110()) || func_109()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_112()) || Global_113016) || Global_32951) || func_111()) || func_97(8, -1)) || func_110()) || func_109()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_112() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_97(8, -1)) || func_99()) || func_107()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_97(8, -1) || func_110()) || func_109()) || func_107()) || func_106())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_112()) || Global_32951) || func_111()) || func_97(8, -1)) || func_109()) || func_108()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_112()) || func_109()) || Global_113016) || Global_32951) || func_111()) || Global_45250) || func_97(8, -1)) || func_108()) || func_107()) || func_99()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_112()) || Global_113016) || Global_32951) || func_111()) || func_97(8, -1)) || func_108()) || func_107()) || func_110()) || func_109()) || func_99())
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

var func_106()
{
	return Global_101572.f_1;
}

int func_107()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_108()
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

bool func_109()
{
	return Global_101585.f_394 > 0;
}

bool func_110()
{
	return Global_101585.f_393 > 0;
}

var func_111()
{
	return Global_1575083;
}

int func_112()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_113()
{
	if (unk_0x486FF5D06E9659F1(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_114()
{
	return Global_97345;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_117(6) || func_117(7))
			{
				return 1;
			}
			else
			{
				return func_115(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_133(5))
			{
				if (func_105(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xC450B06E5AAA0985(Global_33328[iVar0 /*23*/].f_19);
}

bool func_117(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119()
{
	struct<3> Var0;
	
	if (bLocal_252)
	{
		switch (iLocal_80)
		{
			case 4:
			case 5:
			case 8:
				iLocal_253 = unk_0x43AFC452F25F3A2F(joaat("p_parachute_s"), func_50(iLocal_80), 1, 1, 0, 0);
				unk_0xCF39804E8C88080E(iLocal_253, func_49(iLocal_80), 2, 1);
				unk_0x5D7CD709B34C90F0(iLocal_253, 1);
				break;
			
			case 6:
			case 12:
				iLocal_253 = unk_0x43AFC452F25F3A2F(joaat("p_parachute_s"), func_50(iLocal_80), 1, 1, 0, 0);
				unk_0xCF39804E8C88080E(iLocal_253, func_49(iLocal_80), 2, 1);
				unk_0x8225BA395C3FC89D(iLocal_253);
				Var0 = { func_121(iLocal_80) };
				if (!func_35(Var0))
				{
					uLocal_254 = unk_0x5779387E956077A6(joaat("bati"), Var0, func_120(iLocal_80), 1, 1, 0);
					uLocal_254 = uLocal_254;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_120(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165,0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_121(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243,606f, 4543,016f, 185,9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_122()
{
	switch (iLocal_80)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xE100DD4F82A51BDE("pickup_object") && unk_0xE100DD4F82A51BDE("oddjobs@basejump@ig_15")) && func_123(&uLocal_76)) && func_123(&uLocal_78));
			break;
		
		case 12:
			return ((unk_0xE100DD4F82A51BDE("pickup_object") && unk_0xE100DD4F82A51BDE("oddjobs@basejump@ig_15")) && func_123(&uLocal_76));
			break;
		
		default:
			break;
	}
	return (func_123(&uLocal_76) && func_123(&uLocal_78));
}

int func_123(var uParam0)
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

void func_124()
{
	switch (iLocal_80)
	{
		case 5:
		case 8:
			func_126(&uLocal_76, joaat("p_parachute_s"));
			unk_0x80813AC549A1E8AE("pickup_object");
			unk_0x80813AC549A1E8AE("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_126(&uLocal_76, joaat("p_parachute_s"));
			func_126(&uLocal_78, joaat("bati"));
			unk_0x80813AC549A1E8AE("pickup_object");
			unk_0x80813AC549A1E8AE("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_126(&uLocal_76, joaat("p_parachute_s"));
			unk_0x80813AC549A1E8AE("pickup_object");
			unk_0x80813AC549A1E8AE("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_125(&uLocal_76);
	func_125(&uLocal_78);
}

void func_125(var uParam0)
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

int func_126(var uParam0, int iParam1)
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
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)
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

void func_128(int iParam0)
{
	iLocal_57 = iParam0;
}

void func_129(int iParam0, bool bParam1, bool bParam2)
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

int func_130()
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

int func_131()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
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

bool func_133(int iParam0)
{
	return func_134(iParam0, Global_44042);
}

int func_134(int iParam0, int iParam1)
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

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_136()
{
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		func_101(&uLocal_56, 8388608);
		return;
	}
	StringCopy(&Local_49, "bj", 64);
	iLocal_80 = func_140(Local_54, 0);
	switch (iLocal_80)
	{
		case 4:
			iLocal_67 = 129;
			break;
		
		case 5:
			iLocal_67 = 130;
			break;
		
		case 6:
			iLocal_67 = 131;
			break;
		
		case 8:
			iLocal_67 = 133;
			break;
		
		case 12:
			iLocal_67 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_67 == 129)
	{
		if (func_139(19))
		{
			func_138(iLocal_67);
		}
	}
	func_101(&uLocal_56, 4194304);
	iLocal_61 = 0;
	fLocal_64 = (system::to_float(func_137(iLocal_67)) + 5f);
	fLocal_75 = 1,1f;
	sLocal_63 = "PLAY_BASEJUMP_G";
	if (iLocal_67 != 263)
	{
		if (!func_132(0, iLocal_61))
		{
			bLocal_252 = false;
			func_138(iLocal_67);
		}
		else
		{
			bLocal_252 = true;
		}
	}
	else
	{
		bLocal_252 = false;
	}
	if (unk_0x486FF5D06E9659F1(joaat("bj")) > 0)
	{
		func_101(&uLocal_56, 8);
	}
	else
	{
		func_142(&uLocal_56, 8);
	}
	if (func_117(12))
	{
		func_101(&uLocal_56, 8);
	}
	iLocal_59 = 62500;
}

int func_137(int iParam0)
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

void func_138(int iParam0)
{
	if (iLocal_57 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_129(iParam0, 0, 0);
		}
		iLocal_67 = 263;
		func_92(&iLocal_58);
		iLocal_57 = 9;
	}
}

bool func_139(int iParam0)
{
	return Global_113056[iParam0 /*10*/].f_1;
}

int func_140(struct<3> Param0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_141(iVar3))
		{
			fVar1 = system::vdist2(Param0, func_48(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_142(var uParam0, int iParam1)
{
	func_143(uParam0, iParam1);
}

void func_143(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_67 != 263)
		{
			func_129(iLocal_67, 0, 0);
		}
	}
	func_92(&iLocal_58);
	if (func_135(uLocal_56, 2))
	{
		func_5();
		func_142(&uLocal_56, 2);
		func_7(&iLocal_60);
	}
	iLocal_60 = -1;
	func_145();
	unk_0xBBC29EBE6E1A48FA();
}

void func_145()
{
	func_142(&uLocal_56, 4);
	func_146();
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

void func_146()
{
}

