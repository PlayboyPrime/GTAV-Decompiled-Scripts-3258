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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 16;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
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
	struct<3> Local_215 = { 0, 0, 0 } ;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[3] = { 0, 0, 0 };
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223[3] = { 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	var uLocal_231[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_232 = 0;
	bool bLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262[2] = { 0, 0 };
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265[3] = { 0, 0, 0 };
	var uLocal_266[2] = { 0, 0 };
	struct<2> Local_267 = { 0, 5 } ;
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
	var uLocal_283 = 5;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
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
	Local_215 = { ScriptParam_267.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_148();
	}
	if (func_95(Local_215, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x173751E886F8E9AB() || iLocal_244)
		{
			unk_0xECF30459397D5190("RE_CR", 0);
			switch (iLocal_42)
			{
				case 0:
					if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_215, 100f, 100f, 100f, 0, 1, 0))
					{
						func_148();
					}
					if (iLocal_43)
					{
						iLocal_42 = 1;
					}
					else
					{
						func_91();
						iLocal_44 = 1;
					}
					break;
				
				case 1:
					unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_45)
					{
						func_73();
					}
					if (!bLocal_46 && !bLocal_254)
					{
						func_69();
					}
					if (iLocal_238 && !bLocal_45)
					{
						func_68(iLocal_220[0]);
						func_68(iLocal_220[1]);
						func_68(iLocal_220[2]);
					}
					if ((!iLocal_238 && !bLocal_254) && func_87())
					{
						func_67(iLocal_223[0], &(uLocal_231[0]), 1, 0,7f);
						func_67(iLocal_223[0], &(uLocal_231[1]), 5, 0,7f);
						func_67(iLocal_223[0], &(uLocal_231[2]), 0, 0,7f);
						func_67(iLocal_223[0], &(uLocal_231[3]), 4, 0,7f);
						func_67(iLocal_223[1], &(uLocal_231[4]), 1, 0,7f);
						func_67(iLocal_223[1], &(uLocal_231[5]), 5, 0,7f);
						func_67(iLocal_223[1], &(uLocal_231[6]), 0, 0,7f);
						func_67(iLocal_223[1], &(uLocal_231[7]), 4, 0,7f);
						func_67(iLocal_223[2], &(uLocal_231[8]), 1, 0,7f);
						func_67(iLocal_223[2], &(uLocal_231[9]), 5, 0,7f);
						func_67(iLocal_223[2], &(uLocal_231[10]), 0, 0,7f);
						func_67(iLocal_223[2], &(uLocal_231[11]), 4, 0,7f);
						func_67(iLocal_224, &(uLocal_231[12]), 1, 0,7f);
						func_67(iLocal_224, &(uLocal_231[13]), 5, 0,7f);
						func_67(iLocal_224, &(uLocal_231[14]), 0, 0,7f);
						func_67(iLocal_224, &(uLocal_231[15]), 4, 0,7f);
					}
					if (!iLocal_236)
					{
						func_65();
					}
					else
					{
						if (!bLocal_254)
						{
							func_64();
						}
						else if (!iLocal_251 && bLocal_45)
						{
							func_62();
						}
						if (!iLocal_255)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_249)
	{
		if (unk_0x1C2F771CDC87A3A5(iLocal_220[0], 0) || unk_0x4FAFF4BCB7633475(iLocal_220[0]))
		{
			func_59(&uLocal_50, 4);
			iLocal_249 = 1;
		}
	}
	if (!bLocal_232)
	{
		if ((unk_0x1C2F771CDC87A3A5(iLocal_216, 0) || unk_0x4FAFF4BCB7633475(iLocal_216)) || unk_0xC00DCFE53DCBBABA(iLocal_216))
		{
			unk_0xEC9DAA34BBB4658C(joaat("prop_security_case_01"));
			if (unk_0x6252BC0DD8A320DB(joaat("prop_security_case_01")))
			{
				Local_243 = { unk_0x240E88FB0B8CC932(iLocal_216, 1067030938, 1069547520) };
				Local_243.f_2 = (Local_243.f_2 + 0,3f);
				uLocal_262[0] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), Local_243 + Vector(-0,49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0xC450B06E5AAA0985(uLocal_266[0]))
				{
					uLocal_266[0] = func_57(uLocal_262[0]);
				}
				bLocal_232 = true;
				func_59(&uLocal_50, 5);
			}
		}
	}
	if (!bLocal_233)
	{
		if ((unk_0x1C2F771CDC87A3A5(iLocal_217, 0) || unk_0x4FAFF4BCB7633475(iLocal_217)) || unk_0xC00DCFE53DCBBABA(iLocal_217))
		{
			unk_0xEC9DAA34BBB4658C(joaat("prop_security_case_01"));
			if (unk_0x6252BC0DD8A320DB(joaat("prop_security_case_01")))
			{
				Local_243 = { unk_0x240E88FB0B8CC932(iLocal_217, 1067030938, 1069547520) };
				Local_243.f_2 = (Local_243.f_2 + 0,3f);
				uLocal_262[1] = unk_0x6FCBED6282FF5DA5(joaat("pickup_money_case"), Local_243 + Vector(-0,49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0xC450B06E5AAA0985(uLocal_266[1]))
				{
					uLocal_266[1] = func_57(uLocal_262[1]);
				}
				bLocal_233 = true;
				func_59(&uLocal_50, 6);
			}
		}
	}
	if (!bLocal_254)
	{
		if (!iLocal_246)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_216))
			{
				if (unk_0x1C2F771CDC87A3A5(iLocal_216, 0) || unk_0x4FAFF4BCB7633475(iLocal_216))
				{
					if (unk_0x9B3D4335E0EDB0BE(iLocal_216, unk_0x4A8C381C258A124D(), 1))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_263);
						iLocal_246 = 1;
						bLocal_46 = true;
						unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
						if (!unk_0x4FAFF4BCB7633475(iLocal_217))
						{
							unk_0x62A5310368A20EFA(iLocal_217, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x44FB298D6382876D(iLocal_217, 1);
							unk_0xC225BC409BD24794(iLocal_217, unk_0x4A8C381C258A124D());
							unk_0xCAF62AAD9CA7C260(iLocal_217, 1);
							func_59(&uLocal_50, 5);
							func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_245)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_217))
			{
				if (unk_0x1C2F771CDC87A3A5(iLocal_217, 0) || unk_0x4FAFF4BCB7633475(iLocal_217))
				{
					if (unk_0x9B3D4335E0EDB0BE(iLocal_217, unk_0x4A8C381C258A124D(), 1))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_264);
						iLocal_245 = 1;
						bLocal_46 = true;
						unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
						if (!unk_0x4FAFF4BCB7633475(iLocal_216))
						{
							unk_0x62A5310368A20EFA(iLocal_216, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x44FB298D6382876D(iLocal_216, 1);
							unk_0xC225BC409BD24794(iLocal_216, unk_0x4A8C381C258A124D());
							unk_0xCAF62AAD9CA7C260(iLocal_216, 1);
							func_39(&uLocal_50, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 310,6203f, 2642,854f, 43,5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_216) && unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				if (func_38() && !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_215, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_46 && !bLocal_45)
				{
					if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 310,6203f, 2642,854f, 43,5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 310,6203f, 2642,854f, 43,5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_254)
	{
		if (func_38())
		{
			if (unk_0x1C2F771CDC87A3A5(iLocal_216, 0) && unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
			{
				func_7();
			}
			if (bLocal_254)
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_216))
				{
					if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_216, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_46)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0xFC8BFE4B41177C22(iLocal_217))
				{
					if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_217, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_46)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_238 && !bLocal_45)
	{
		unk_0x2AF2D6F164BD6F5A(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		unk_0xEC9DAA34BBB4658C(joaat("ambulance"));
		unk_0x80813AC549A1E8AE("random@countrysiderobbery");
		if (((unk_0x1C2F771CDC87A3A5(iLocal_216, 0) && unk_0x1C2F771CDC87A3A5(iLocal_217, 0)) && unk_0x6252BC0DD8A320DB(joaat("ambulance"))) && unk_0xE100DD4F82A51BDE("random@countrysiderobbery"))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_263);
			unk_0xFE54B8568B2ABD12(&uLocal_264);
			func_59(&uLocal_50, 5);
			func_59(&uLocal_50, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_220)
			{
				if (unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_265[iVar0]));
				}
				iVar0++;
			}
			unk_0xD414C47AFF81382A(1, iLocal_240, joaat("player"));
			unk_0xCC1C92F7E1A3CE9D(5, 1);
			unk_0xCC1C92F7E1A3CE9D(3, 1);
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 267,94f, 2700,48f, 43,6f, 15f, 15f, 15f, 0, 1, 0))
			{
				uLocal_225 = unk_0x5779387E956077A6(joaat("ambulance"), 267,94f, 2700,48f, 43,1f, 180f, 1, 1, 0);
			}
			else
			{
				uLocal_225 = unk_0x5779387E956077A6(joaat("ambulance"), 185,94f, 2603,48f, 46,9f, 0f, 1, 1, 0);
			}
			unk_0x4539850624F18A9E(uLocal_225, 1);
			iLocal_218 = unk_0x8728A378EF2B46B2(uLocal_225, 20, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			iLocal_219 = unk_0x8728A378EF2B46B2(uLocal_225, 20, joaat("s_m_m_paramedic_01"), 0, 1, 1);
			unk_0xBE8796DB2B90A437(iLocal_218, 17, 1);
			unk_0xBE8796DB2B90A437(iLocal_219, 17, 1);
			unk_0x0428AFDCAA63B06E(iLocal_218, 185, 1);
			unk_0x0428AFDCAA63B06E(iLocal_219, 185, 1);
			if (unk_0xFC8BFE4B41177C22(iLocal_216))
			{
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0xCF6CC9EA0D2EFE23(0, uLocal_225, 307,1379f, 2640,042f, 43,4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0xAB3658A740EED98E(0, iLocal_216, -1, 2f, 1f, 10f, 0);
				unk_0xE67051907958B5EB(0, iLocal_216, -1, 2052, 2);
				unk_0x0E95B96CFEFE7B61(0, iLocal_216, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_218, uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				unk_0x44FB298D6382876D(iLocal_218, 1);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_217))
			{
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0x5524CAF18378DF39(0, 15000);
				unk_0xAB3658A740EED98E(0, iLocal_217, -1, 2f, 1f, 10f, 0);
				unk_0xE67051907958B5EB(0, iLocal_217, -1, 2052, 2);
				unk_0x0E95B96CFEFE7B61(0, iLocal_217, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_219, uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				unk_0x44FB298D6382876D(iLocal_219, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]) && unk_0xFC8BFE4B41177C22(iLocal_224))
			{
				unk_0x0428AFDCAA63B06E(iLocal_220[0], 185, 1);
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0xA966E518B752B92A(0, unk_0xD1A6A821F5AC81DB(iLocal_224, 0) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0x71A3A3C67C692798(0, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_220[0], uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				unk_0x44FB298D6382876D(iLocal_220[0], 1);
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_220[1], 0) && unk_0xFC8BFE4B41177C22(iLocal_221))
			{
				unk_0x0428AFDCAA63B06E(iLocal_220[1], 185, 1);
				unk_0x3C0F448853B71C92(iLocal_220[1], joaat("weapon_unarmed"), 1);
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0xA966E518B752B92A(0, unk_0xD1A6A821F5AC81DB(iLocal_221, 0) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0xE237FA90A8AFEE59(0, unk_0xD1A6A821F5AC81DB(iLocal_221, 0), -1, 2052, 2);
				unk_0xCD76801E1106CABE(0, unk_0xD1A6A821F5AC81DB(iLocal_221, 0), 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_220[1], uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				unk_0x44FB298D6382876D(iLocal_220[1], 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]) && unk_0xFC8BFE4B41177C22(iLocal_217))
			{
				unk_0x0428AFDCAA63B06E(iLocal_220[2], 185, 1);
				if (unk_0xFC8BFE4B41177C22(iLocal_217))
				{
					unk_0xB5396F1FB088FE38(&uLocal_241);
					unk_0xA966E518B752B92A(0, unk_0xD1A6A821F5AC81DB(iLocal_217, 0) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0x71A3A3C67C692798(0, 0);
					unk_0x10425721983AE158(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_241);
					unk_0x4BD42B0527065BB6(iLocal_220[2], uLocal_241);
					unk_0xD0557B139A542F12(&uLocal_241);
				}
				unk_0x44FB298D6382876D(iLocal_220[2], 1);
			}
			func_3();
			system::wait(0);
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
			{
				func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			system::wait(0);
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
			{
				func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			system::settimerb(0);
			iLocal_238 = 1;
		}
	}
	if (iLocal_236 && !func_87())
	{
		func_5();
	}
	if (((((unk_0x1C2F771CDC87A3A5(iLocal_216, 0) && unk_0x1C2F771CDC87A3A5(iLocal_217, 0)) && unk_0x1C2F771CDC87A3A5(iLocal_220[0], 0)) && unk_0x1C2F771CDC87A3A5(iLocal_220[1], 0)) && unk_0x1C2F771CDC87A3A5(iLocal_220[2], 0)) && (func_38() || !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 310,6203f, 2642,854f, 43,5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
		unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_21152 = 0;
	func_4();
}

void func_4()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_5()
{
	func_148();
}

void func_6(int iParam0)
{
	Global_113955 = iParam0;
}

void func_7()
{
	if (!bLocal_45)
	{
	}
	while (func_37())
	{
		system::wait(0);
	}
	while (!func_36())
	{
		system::wait(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
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

int func_10(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_6(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1);
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
		func_13();
	}
}

void func_13()
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
		func_15(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_14() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_32948;
}

int func_15(int iParam0, int iParam1)
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

void func_16(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_17()
{
	return Global_1574926;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
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

void func_25()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_29(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_28(unk_0x4A8C381C258A124D());
			if (func_27(iVar0) && (!func_26(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_27(Global_113969.f_2366.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_31(int iParam0)
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

void func_32(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)
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

int func_34()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_35(Var0);
	return uVar1;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_36()
{
	return 1;
}

int func_37()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (bLocal_232 || bLocal_233)
	{
		if (bLocal_232 && bLocal_233)
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_266[0]) && !unk_0xC450B06E5AAA0985(uLocal_266[1]))
			{
				return 1;
			}
		}
		if (bLocal_232 && !bLocal_233)
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_266[0]))
			{
				return 1;
			}
		}
		if (bLocal_233 && !bLocal_232)
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_266[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_45())
	{
		return 0;
	}
	if (func_43(unk_0x259BE71D8A81D4FA()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

var func_44(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_26(14))
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
		Global_20930 = func_51();
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

int func_51()
{
	func_25();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_57(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA1521B7DF72BC9C8(uParam0);
	unk_0x5D3946F818C6B331(uVar0, func_58(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60()
{
	if (!iLocal_252)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_216))
		{
			if (unk_0x7F420695E3F776FB(iLocal_216, 0))
			{
				iLocal_261 = unk_0x6EF03BE64E058E2F(iLocal_216, 0);
				if (((((unk_0x9B3D4335E0EDB0BE(iLocal_261, unk_0x4A8C381C258A124D(), 1) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0)) || unk_0xA6534E6C7AE314D6(iLocal_216)) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_261, 0)) || unk_0x43F53DDC37E17FE9(unk_0x4A8C381C258A124D(), iLocal_261, joaat("weapon_stickybomb"), -1))
				{
					unk_0xAAA71DD7E9059338(iLocal_216, 0);
					unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
					if (unk_0x7F420695E3F776FB(iLocal_216, 0))
					{
						unk_0xB41DEC3AAC1AA107(iLocal_216, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3C0F448853B71C92(iLocal_216, joaat("weapon_microsmg"), 1);
						unk_0xD83588CA24829967(iLocal_216, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_217))
					{
						if (unk_0x7F420695E3F776FB(iLocal_217, 0))
						{
							unk_0xAAA71DD7E9059338(iLocal_217, 0);
							unk_0xB41DEC3AAC1AA107(iLocal_217, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3C0F448853B71C92(iLocal_217, joaat("weapon_microsmg"), 1);
							unk_0xD83588CA24829967(iLocal_217, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_46 = true;
					iLocal_252 = 1;
				}
			}
			if (unk_0x9B3D4335E0EDB0BE(iLocal_216, unk_0x4A8C381C258A124D(), 1))
			{
				unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
				if ((unk_0x7F420695E3F776FB(iLocal_216, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
				{
					if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0xAAA71DD7E9059338(iLocal_216, 0);
						unk_0xB41DEC3AAC1AA107(iLocal_216, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3C0F448853B71C92(iLocal_216, joaat("weapon_microsmg"), 1);
						unk_0xD83588CA24829967(iLocal_216, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_46 = true;
						iLocal_252 = 1;
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_217))
				{
					if ((unk_0x7F420695E3F776FB(iLocal_217, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
					{
						if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xAAA71DD7E9059338(iLocal_217, 0);
							unk_0xB41DEC3AAC1AA107(iLocal_217, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3C0F448853B71C92(iLocal_217, joaat("weapon_microsmg"), 1);
							unk_0xD83588CA24829967(iLocal_217, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_46 = true;
							iLocal_252 = 1;
						}
					}
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_217))
		{
			if (unk_0x7F420695E3F776FB(iLocal_217, 0))
			{
				iLocal_261 = unk_0x6EF03BE64E058E2F(iLocal_217, 0);
				if (((unk_0x9B3D4335E0EDB0BE(iLocal_261, unk_0x4A8C381C258A124D(), 1) || unk_0xA6534E6C7AE314D6(iLocal_217)) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_261, 0)) || unk_0x43F53DDC37E17FE9(unk_0x4A8C381C258A124D(), iLocal_261, joaat("weapon_stickybomb"), -1))
				{
					unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
					if (!unk_0x4FAFF4BCB7633475(iLocal_216))
					{
						if ((unk_0x7F420695E3F776FB(iLocal_216, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
						{
							if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0xAAA71DD7E9059338(iLocal_216, 0);
								unk_0xB41DEC3AAC1AA107(iLocal_216, joaat("weapon_microsmg"), 200, 1, 1);
								unk_0x3C0F448853B71C92(iLocal_216, joaat("weapon_microsmg"), 1);
								unk_0xD83588CA24829967(iLocal_216, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_46 = true;
								iLocal_252 = 1;
							}
						}
					}
					if ((unk_0x7F420695E3F776FB(iLocal_217, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
					{
						if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xAAA71DD7E9059338(iLocal_217, 0);
							unk_0xB41DEC3AAC1AA107(iLocal_217, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3C0F448853B71C92(iLocal_217, joaat("weapon_microsmg"), 1);
							unk_0xD83588CA24829967(iLocal_217, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_46 = true;
							iLocal_252 = 1;
						}
					}
				}
			}
			if (unk_0x9B3D4335E0EDB0BE(iLocal_217, unk_0x4A8C381C258A124D(), 1))
			{
				unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
				if (!unk_0x4FAFF4BCB7633475(iLocal_216))
				{
					if ((unk_0x7F420695E3F776FB(iLocal_216, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
					{
						if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xB41DEC3AAC1AA107(iLocal_216, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3C0F448853B71C92(iLocal_216, joaat("weapon_microsmg"), 1);
							unk_0xD83588CA24829967(iLocal_216, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_46 = true;
							iLocal_252 = 1;
						}
					}
				}
				if ((unk_0x7F420695E3F776FB(iLocal_217, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_261, 0))
				{
					if (unk_0xFAA48325A90263BE(iLocal_261, unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0xB41DEC3AAC1AA107(iLocal_217, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3C0F448853B71C92(iLocal_217, joaat("weapon_microsmg"), 1);
						unk_0xD83588CA24829967(iLocal_217, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_46 = true;
						iLocal_252 = 1;
					}
				}
			}
		}
	}
}

void func_61()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_216) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
	{
		if (!unk_0x848DE0A81098ECCB(iLocal_216, iLocal_224, -1, 0, 0) && !unk_0x848DE0A81098ECCB(iLocal_216, iLocal_224, 0, 0, 0))
		{
			unk_0xFD251F92B546F389(iLocal_216, Local_215, 1000f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_216, 1);
			iLocal_255 = 1;
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_217) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
	{
		if (!unk_0x848DE0A81098ECCB(iLocal_217, iLocal_224, -1, 0, 0) && !unk_0x848DE0A81098ECCB(iLocal_217, iLocal_224, 0, 0, 0))
		{
			unk_0xFD251F92B546F389(iLocal_217, Local_215, 1000f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_217, 1);
			iLocal_255 = 1;
		}
	}
}

void func_62()
{
	if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
	{
		Local_243 = { unk_0xD1A6A821F5AC81DB(iLocal_216, 1) };
	}
	else if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
	{
		Local_243 = { unk_0xD1A6A821F5AC81DB(iLocal_217, 1) };
	}
	Local_243.f_2 = (Local_243.f_2 - 0,11f);
	if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
	{
		system::settimera(0);
		if (!bLocal_46)
		{
			func_3();
			system::wait(0);
			if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
			{
				func_63(&uLocal_50, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
			{
				func_59(&uLocal_50, 5);
				func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
				func_63(&uLocal_50, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0x24703703CFA1C70A(unk_0x165E2DDD2BD0F07D(Local_243, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_251 = 1;
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
	{
		if (unk_0xCECDBB848D53DEB2(iLocal_217, iLocal_224, 0))
		{
			system::settimera(0);
			if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
			{
			}
			else if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
			{
			}
			iLocal_251 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_40(sParam2, iParam4, 0);
}

void func_64()
{
	if (!bLocal_254)
	{
		unk_0x2AF2D6F164BD6F5A(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		if (iLocal_258)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				if (unk_0x49CB27F641DC1328(iLocal_216))
				{
					func_3();
					system::wait(0);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_258 = 1;
				}
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				if (unk_0x49CB27F641DC1328(iLocal_217))
				{
					func_3();
					system::wait(0);
					func_59(&uLocal_50, 5);
					func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_258 = 1;
				}
			}
		}
		if (iLocal_237 == 1)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_216, iLocal_224, 0))
				{
					unk_0x1CA08719184AFC6F(iLocal_216, 2, 1);
					unk_0xB5396F1FB088FE38(&uLocal_241);
					unk_0x13DE13EA38996410(0, iLocal_224, unk_0x4A8C381C258A124D(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x93C0674FC00824D0(uLocal_241);
					unk_0x4BD42B0527065BB6(iLocal_216, uLocal_241);
					unk_0xD0557B139A542F12(&uLocal_241);
					unk_0x44FB298D6382876D(iLocal_216, 1);
					bLocal_254 = true;
				}
			}
		}
		if (iLocal_237 == 2)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_217) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_217, iLocal_224, 0))
				{
					unk_0x1CA08719184AFC6F(iLocal_217, 2, 1);
					unk_0xB5396F1FB088FE38(&uLocal_241);
					unk_0x13DE13EA38996410(0, iLocal_224, unk_0x4A8C381C258A124D(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x93C0674FC00824D0(uLocal_241);
					unk_0x4BD42B0527065BB6(iLocal_217, uLocal_241);
					unk_0xD0557B139A542F12(&uLocal_241);
					unk_0x44FB298D6382876D(iLocal_217, 1);
					bLocal_254 = true;
				}
			}
		}
		if (iLocal_237 == 3)
		{
			if ((!unk_0x4FAFF4BCB7633475(iLocal_217) && !unk_0x4FAFF4BCB7633475(iLocal_216)) && !unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_216, iLocal_224, 0) && unk_0xCECDBB848D53DEB2(iLocal_217, iLocal_224, 0))
				{
					unk_0x1CA08719184AFC6F(iLocal_216, 2, 1);
					unk_0x1CA08719184AFC6F(iLocal_217, 2, 1);
					unk_0xB5396F1FB088FE38(&uLocal_241);
					unk_0x13DE13EA38996410(0, iLocal_224, unk_0x4A8C381C258A124D(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x93C0674FC00824D0(uLocal_241);
					unk_0x4BD42B0527065BB6(iLocal_216, uLocal_241);
					unk_0xD0557B139A542F12(&uLocal_241);
					unk_0xAAA71DD7E9059338(iLocal_217, 0);
					unk_0x44FB298D6382876D(iLocal_216, 1);
					bLocal_254 = true;
				}
			}
			if (unk_0x4FAFF4BCB7633475(iLocal_216) && !unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				func_59(&uLocal_50, 5);
				unk_0xEBA229B2E0BB05E0(iLocal_217, iLocal_224, -1, -1, 2f, 8, 0, 0);
				iLocal_237 = 2;
			}
			if (unk_0x4FAFF4BCB7633475(iLocal_217) && !unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				func_59(&uLocal_50, 6);
				unk_0xEBA229B2E0BB05E0(iLocal_216, iLocal_224, -1, -1, 2f, 8, 0, 0);
				iLocal_237 = 1;
			}
		}
		if (iLocal_237 == 4)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x974022927CB47E68(iLocal_216);
				unk_0xFD251F92B546F389(iLocal_216, Local_215, 1000f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_216, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x974022927CB47E68(iLocal_217);
				unk_0xFD251F92B546F389(iLocal_217, Local_215, 1000f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_217, 1);
			}
			bLocal_254 = true;
		}
	}
}

void func_65()
{
	if ((unk_0x1C2F771CDC87A3A5(iLocal_220[0], 0) && unk_0x1C2F771CDC87A3A5(iLocal_220[1], 0)) && unk_0x1C2F771CDC87A3A5(iLocal_220[2], 0))
	{
		func_59(&uLocal_50, 4);
		iLocal_244 = 1;
		iLocal_236 = 1;
		unk_0xD414C47AFF81382A(1, iLocal_239, joaat("player"));
		if (!bLocal_46 && bLocal_45)
		{
			unk_0xFE54B8568B2ABD12(&uLocal_263);
			unk_0xFE54B8568B2ABD12(&uLocal_264);
		}
		if (!bLocal_46)
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
			{
				func_66(&uLocal_50, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
			{
				func_59(&uLocal_50, 5);
				func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
				func_66(&uLocal_50, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_224, 0))
		{
			unk_0xE4DC7B3DD712372B(iLocal_224);
			if (!unk_0x4FAFF4BCB7633475(iLocal_216) && !unk_0xC00DCFE53DCBBABA(iLocal_216))
			{
				unk_0x4D5D5614C2DF76F4(iLocal_216, 1, 1, 1, 0);
				iLocal_237 = 1;
				unk_0x974022927CB47E68(iLocal_216);
				unk_0x96F4A599D1C6F95A(iLocal_216, 1);
				unk_0xAAA71DD7E9059338(iLocal_216, 1);
				unk_0xE4DC7B3DD712372B(iLocal_216);
				unk_0xE4DC7B3DD712372B(iLocal_224);
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0xEBA229B2E0BB05E0(0, iLocal_224, -1, -1, 2f, 9, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_216, uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				if (!unk_0x4FAFF4BCB7633475(iLocal_217) && !unk_0xC00DCFE53DCBBABA(iLocal_217))
				{
					unk_0x974022927CB47E68(iLocal_217);
					unk_0xAAA71DD7E9059338(iLocal_217, 1);
					unk_0xE4DC7B3DD712372B(iLocal_217);
					unk_0xE4DC7B3DD712372B(iLocal_224);
					unk_0x96F4A599D1C6F95A(iLocal_217, 1);
					unk_0xEBA229B2E0BB05E0(iLocal_217, iLocal_224, -1, 0, 2f, 1, 0, 0);
					iLocal_237 = 3;
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x96F4A599D1C6F95A(iLocal_217, 1);
				unk_0x4D5D5614C2DF76F4(iLocal_217, 1, 1, 1, 0);
				unk_0x974022927CB47E68(iLocal_217);
				unk_0xAAA71DD7E9059338(iLocal_217, 1);
				unk_0xE4DC7B3DD712372B(iLocal_217);
				unk_0xE4DC7B3DD712372B(iLocal_224);
				unk_0xB5396F1FB088FE38(&uLocal_241);
				unk_0xEBA229B2E0BB05E0(0, iLocal_224, -1, -1, 2f, 1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_241);
				unk_0x4BD42B0527065BB6(iLocal_217, uLocal_241);
				unk_0xD0557B139A542F12(&uLocal_241);
				iLocal_237 = 2;
			}
		}
		else
		{
			iLocal_237 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0,5f };
					Var1 = { -0,5f, 0,75f, 0,05f };
					iVar2 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0,5f };
					Var1 = { 0,5f, 0,75f, 0,05f };
					iVar2 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0,5f };
					Var1 = { -0,5f, -0,75f, 0,05f };
					iVar2 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0,5f };
					Var1 = { 0,5f, -0,75f, 0,05f };
					iVar2 = 3;
					break;
			}
			if (unk_0xA646A9FF47E2E515(unk_0x0D1381B6E0F3987D(iParam0, Var0), fParam3, 1, 1) || unk_0xA646A9FF47E2E515(unk_0x0D1381B6E0F3987D(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0xE488FDAA43A181AE(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0x62DFD44586348C12(iParam0, iVar2);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0x2BDD547718FF1F1A(iParam0, Var1, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)
{
	if ((!unk_0x4FAFF4BCB7633475(iParam0) && !func_37()) && system::timera() > 12000)
	{
		func_56(&uLocal_50, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0xFAA48325A90263BE(iParam0, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_39(&uLocal_50, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			system::settimera(0);
		}
	}
}

void func_69()
{
	if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_216, unk_0x4A8C381C258A124D(), 1))
		{
			bLocal_46 = true;
			system::settimera(0);
			unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x62A5310368A20EFA(iLocal_216, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_216, 1);
				unk_0xC225BC409BD24794(iLocal_216, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_216, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x62A5310368A20EFA(iLocal_217, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_217, 1);
				unk_0xC225BC409BD24794(iLocal_217, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_217, 1);
			}
			if (!bLocal_45)
			{
				func_3();
				system::wait(0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
				{
					func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_216))
		{
			if (!func_72() && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
			{
				if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_216) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_216))
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_216, 20f, 20f, 20f, 0, 1, 0) && unk_0x300A997AE991C0A8(iLocal_216, unk_0x4A8C381C258A124D()))
					{
						iLocal_228++;
						if (!iLocal_229 && !func_70("recsb_theaim"))
						{
							func_3();
							system::wait(0);
							if (!unk_0x4FAFF4BCB7633475(iLocal_216))
							{
								func_39(&uLocal_50, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
							{
								func_59(&uLocal_50, 5);
								func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
								func_39(&uLocal_50, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_229 = 1;
						}
						if (iLocal_228 > 45)
						{
							bLocal_46 = true;
							system::settimera(0);
							if (!bLocal_45)
							{
								func_3();
								system::wait(0);
								if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
								{
									func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
								{
									unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_50, 4);
									func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
								{
									unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_50, 4);
									func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_229 || iLocal_230)
				{
					iLocal_228 = 45;
				}
				else
				{
					iLocal_228 = 0;
				}
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_217, unk_0x4A8C381C258A124D(), 1))
		{
			bLocal_46 = true;
			system::settimera(0);
			unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x62A5310368A20EFA(iLocal_217, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_217, 1);
				unk_0xC225BC409BD24794(iLocal_217, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_217, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x62A5310368A20EFA(iLocal_216, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_216, 1);
				unk_0xC225BC409BD24794(iLocal_216, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_216, 1);
			}
			if (!bLocal_45)
			{
				func_3();
				system::wait(0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
				{
					func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_217))
		{
			if (!func_72() && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
			{
				if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_217) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_217))
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_217, 20f, 20f, 20f, 0, 1, 0) && unk_0x300A997AE991C0A8(iLocal_217, unk_0x4A8C381C258A124D()))
					{
						if ((!iLocal_230 && !unk_0x4FAFF4BCB7633475(iLocal_216)) && !func_70("recsb_theaim"))
						{
							func_3();
							system::wait(0);
							if (!unk_0x4FAFF4BCB7633475(iLocal_216))
							{
								func_39(&uLocal_50, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
							{
								func_59(&uLocal_50, 5);
								func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
								func_39(&uLocal_50, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_230 = 1;
						}
						iLocal_227++;
						if (iLocal_227 > 45)
						{
							bLocal_46 = true;
							system::settimera(0);
							if (!bLocal_45)
							{
								func_3();
								system::wait(0);
								if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
								{
									func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
								{
									unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_50, 4);
									func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
								{
									unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_50, 4);
									func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_229 || iLocal_230)
				{
					iLocal_228 = 45;
				}
				else
				{
					iLocal_228 = 0;
				}
			}
		}
	}
	if (!iLocal_259 && bLocal_232)
	{
		if (unk_0x1D56B24774D5E23C(uLocal_262[0]))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				if (unk_0x300A997AE991C0A8(iLocal_216, unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_216, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_46 = true;
					func_3();
					system::wait(0);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_259 = 1;
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				if (unk_0x300A997AE991C0A8(iLocal_217, unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_217, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_46 = true;
					func_59(&uLocal_50, 5);
					func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
					func_3();
					system::wait(0);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_259 = 1;
				}
			}
		}
	}
	if (!iLocal_260 && bLocal_233)
	{
		if (unk_0x1D56B24774D5E23C(uLocal_262[1]))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				if (unk_0x300A997AE991C0A8(iLocal_216, unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_216, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_46 = true;
					func_3();
					system::wait(0);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				if (unk_0x300A997AE991C0A8(iLocal_217, unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_217, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_46 = true;
					func_59(&uLocal_50, 5);
					func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
					func_3();
					system::wait(0);
					func_39(&uLocal_50, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
	{
		if ((unk_0x9B3D4335E0EDB0BE(iLocal_224, unk_0x4A8C381C258A124D(), 1) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_224, 0)) || unk_0x43F53DDC37E17FE9(unk_0x4A8C381C258A124D(), iLocal_224, joaat("weapon_stickybomb"), -1))
		{
			bLocal_46 = true;
			system::settimera(0);
			unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x62A5310368A20EFA(iLocal_216, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_216, 1);
				unk_0xC225BC409BD24794(iLocal_216, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_216, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x62A5310368A20EFA(iLocal_217, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_217, 1);
				unk_0xC225BC409BD24794(iLocal_217, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_217, 1);
			}
			func_3();
			system::wait(0);
			if (!unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_224, 0))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_216))
					{
						func_66(&uLocal_50, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xEBA229B2E0BB05E0(iLocal_216, iLocal_224, -1, -1, 2f, 524296, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
					{
						func_59(&uLocal_50, 5);
						func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
						func_66(&uLocal_50, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xEBA229B2E0BB05E0(iLocal_217, iLocal_224, -1, -1, 2f, 524296, 0, 0);
					}
				}
				else if (!bLocal_45)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
					{
						func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
					{
						unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_50, 4);
						func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
					{
						unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_50, 4);
						func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)
{
	var uVar0;
	
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
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

int func_72()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
		{
			if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("lazer")) || unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_256)
	{
		unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uLocal_242);
		if (unk_0x0101C509A6E67F99(uLocal_242))
		{
			iLocal_222 = unk_0xBD545F8729E9F413(uLocal_242);
		}
		if ((iLocal_222 == iLocal_220[0] || iLocal_222 == iLocal_220[1]) || iLocal_222 == iLocal_220[2])
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_222))
			{
				if (!func_72() && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
				{
					if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_222) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_222))
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_222, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0x300A997AE991C0A8(iLocal_222, unk_0x4A8C381C258A124D()) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_222, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_257)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
										{
											func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
											func_3();
											system::wait(0);
											func_39(&uLocal_50, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_257 = true;
										}
										else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
										{
											unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_50, 4);
											func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
											func_3();
											system::wait(0);
											func_39(&uLocal_50, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_257 = true;
										}
										else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
										{
											unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_50, 4);
											func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
											func_3();
											system::wait(0);
											func_39(&uLocal_50, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_257 = true;
										}
									}
								}
								iLocal_226++;
								if (iLocal_226 > 40)
								{
									bLocal_256 = true;
									bLocal_45 = true;
									if (!unk_0x1C2F771CDC87A3A5(uLocal_242, 0))
									{
										unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
										iVar0 = 0;
										while (iVar0 < iLocal_220)
										{
											if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
											{
												unk_0x62A5310368A20EFA(iLocal_220[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
												unk_0x44FB298D6382876D(iLocal_220[iVar0], 1);
												unk_0xC225BC409BD24794(iLocal_220[iVar0], unk_0x4A8C381C258A124D());
												unk_0xCAF62AAD9CA7C260(iLocal_220[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_257)
					{
						iLocal_226 = 40;
					}
					else
					{
						iLocal_226 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_220)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_220[iVar1]))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_220[iVar1], unk_0x4A8C381C258A124D(), 1))
			{
				bLocal_45 = true;
			}
			if (unk_0xD9F5E1FEFD1329E4(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_220[iVar1], unk_0xDC8D5832207C2EAD(), 1))
				{
					bLocal_45 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_256)
	{
	}
	if (iLocal_238)
	{
		if (system::timerb() > 6000)
		{
			if (system::timerb() > 6000 && system::timerb() < 7000)
			{
				unk_0xD7ABE01242C5B8E3(330,1744f, 2629,238f, 43,5056f, 30f);
			}
			if (!iLocal_234)
			{
				if (bLocal_46)
				{
					if (!func_37())
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
						{
							func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_234 = 1;
					}
				}
				else if (!iLocal_236)
				{
					if (!func_37())
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
						{
							func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_234 = 1;
					}
				}
			}
			if (unk_0x6051CE9D47B0B904(unk_0x4A8C381C258A124D(), Vector(43,5005f, 2626,29f, 326,6079f) - Vector(50f, 50f, 50f), Vector(43,5005f, 2626,29f, 326,6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_45 = true;
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_224, 0))
				{
					bLocal_45 = true;
					func_3();
					system::wait(0);
					if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
					{
						func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
					{
						unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_50, 4);
						func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
					{
						unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_50, 4);
						func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_220)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar1]))
			{
				if (unk_0x1D56B24774D5E23C(uLocal_262[0]) || unk_0x1D56B24774D5E23C(uLocal_262[1]))
				{
					if (unk_0x300A997AE991C0A8(iLocal_220[iVar1], unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_220[iVar1], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_45 = true;
						func_3();
						system::wait(0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
						{
							func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_220[iVar1]))
				{
					unk_0xD414C47AFF81382A(3, iLocal_240, joaat("player"));
					bLocal_45 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]) && !unk_0x1C2F771CDC87A3A5(iLocal_223[2], 0))
		{
			if (!unk_0xFAA48325A90263BE(iLocal_220[1], unk_0x4A8C381C258A124D(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0xF09E30AF1B8FB379(&(iLocal_220[1]));
				unk_0x68298CA6191CDFDB(&(iLocal_223[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_223)
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_223[iVar1], 0))
		{
			if ((unk_0x9B3D4335E0EDB0BE(iLocal_223[iVar1], unk_0x4A8C381C258A124D(), 1) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_223[iVar1], 0)) || unk_0x43F53DDC37E17FE9(unk_0x4A8C381C258A124D(), iLocal_223[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_45 = true;
			}
			if (unk_0xD9F5E1FEFD1329E4(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_223[iVar1], unk_0xDC8D5832207C2EAD(), 1))
				{
					bLocal_45 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x1C2F771CDC87A3A5(uLocal_225, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_225, unk_0x4A8C381C258A124D(), 1) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_225, 0))
		{
			bLocal_45 = true;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck")) || unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck2")))
		{
			uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (iLocal_238)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_224, 0))
				{
					if (unk_0x4A64AADF9B40D2AF(uVar2, iLocal_224))
					{
						bLocal_45 = true;
						func_3();
						system::wait(0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
						{
							func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
						{
							unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_50, 4);
							func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_50, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_223)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_223[iVar1], 0))
				{
					if (unk_0x4A64AADF9B40D2AF(uVar2, iLocal_223[iVar1]))
					{
						bLocal_45 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_225, 0))
			{
				if (unk_0x4A64AADF9B40D2AF(uVar2, iLocal_225))
				{
					bLocal_45 = true;
				}
			}
		}
	}
	if (bLocal_45 || bLocal_256)
	{
		system::settimera(0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
		unk_0x425BBE19F25A57AB(0,1f);
		unk_0x6625908717AE7808(350f);
		bLocal_45 = true;
		if (!unk_0x1C2F771CDC87A3A5(iLocal_224, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_224, 0))
		{
		}
		else
		{
			func_3();
			system::wait(0);
			if (!iLocal_238)
			{
				if (unk_0x4FAFF4BCB7633475(iLocal_216) && !unk_0x4FAFF4BCB7633475(iLocal_217))
				{
					func_59(&uLocal_50, 5);
					func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
				{
					func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
			{
				func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
		if (!func_87())
		{
			system::settimera(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_238)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_220)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar1]))
				{
					unk_0x62A5310368A20EFA(iLocal_220[iVar1], unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x44FB298D6382876D(iLocal_220[iVar1], 1);
					unk_0xC225BC409BD24794(iLocal_220[iVar1], unk_0x4A8C381C258A124D());
					unk_0x4D5D5614C2DF76F4(iLocal_220[iVar1], 1, 1, 1, 0);
					unk_0xCAF62AAD9CA7C260(iLocal_220[iVar1], 1);
					unk_0xD0764B65C2DFEDCA(iLocal_220[iVar1], 2);
					unk_0xBE8796DB2B90A437(iLocal_220[iVar1], 50, 1);
				}
				iVar1++;
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_218))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_218, unk_0x4A8C381C258A124D(), 1))
		{
			unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
			bLocal_45 = true;
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_219))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_219, unk_0x4A8C381C258A124D(), 1))
		{
			unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
			bLocal_45 = true;
		}
	}
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		bLocal_45 = true;
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
	}
}

int func_74(int iParam0)
{
	if (func_78())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_19(Global_113958))
		{
			func_75(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_19(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_77(int iParam0)
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

int func_78()
{
	switch (func_79(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
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
		if (!func_81(iParam2))
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
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
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

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_44042);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	int iVar0;
	
	if ((!unk_0x4FAFF4BCB7633475(iLocal_220[0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(iLocal_216))
	{
	}
	if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 220,6075f, 2615,145f, 35,8465f, 440,8339f, 2684,23f, 72,6324f, 183,125f, 0, 1, 0) && unk_0x7B780C491DEC834E(Local_215, 1f)) || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 325,6556f, 2647,021f, 43,6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_220)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
			{
				unk_0x5355DCB5D35ADF0F(iLocal_220[iVar0], 1, iLocal_239);
				if (!unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
				{
					uLocal_265[iVar0] = func_85(iLocal_220[iVar0], 0, 145);
					unk_0x89FE619BFBB2024B(uLocal_265[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_216, 0) || (!unk_0x4FAFF4BCB7633475(iLocal_216) && !iLocal_247))
		{
			unk_0x5355DCB5D35ADF0F(iLocal_216, 1, iLocal_240);
			uLocal_263 = func_85(iLocal_216, 0, 145);
			unk_0x89FE619BFBB2024B(uLocal_263, 0);
			iLocal_246 = 0;
			iLocal_247 = 1;
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_217, 0) || (!unk_0x4FAFF4BCB7633475(iLocal_217) && !iLocal_248))
		{
			unk_0x5355DCB5D35ADF0F(iLocal_217, 1, iLocal_240);
			uLocal_264 = func_85(iLocal_217, 0, 145);
			unk_0x89FE619BFBB2024B(uLocal_264, 0);
			iLocal_245 = 0;
			iLocal_248 = 1;
		}
		system::settimera(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

var func_85(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_86(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_86(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_58(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_58(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_58(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

int func_87()
{
	if ((Global_113958 == func_34() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	if (!iLocal_250)
	{
		if (!bLocal_45 && !iLocal_238)
		{
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 325,6556f, 2647,021f, 43,6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_220)
				{
					if (unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
					{
						unk_0x89FE619BFBB2024B(uLocal_265[iVar0], 1);
					}
					iVar0++;
				}
				if (unk_0xC450B06E5AAA0985(uLocal_263))
				{
					unk_0x89FE619BFBB2024B(uLocal_263, 1);
				}
				if (unk_0xC450B06E5AAA0985(uLocal_264))
				{
					unk_0x89FE619BFBB2024B(uLocal_264, 1);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
				{
					func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
				{
					unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_50, 4);
					func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_50, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_250 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_236) && !iLocal_238)
	{
		if (iLocal_253 == 0 && !func_37())
		{
			system::settimera(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_50, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_50, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_50, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_253++;
			system::settimera(0);
		}
		if (iLocal_253 == 1 && !func_37())
		{
			system::settimera(0);
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[0]))
			{
				func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[1]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_220[2]))
			{
				unk_0x397CF4F4C8B17365(iLocal_220[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_50, 4);
				func_56(&uLocal_50, 4, iLocal_220[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_253++;
			system::settimera(0);
		}
		if ((iLocal_253 == 2 && system::timera() > 2000) && !func_37())
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				func_39(&uLocal_50, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				func_59(&uLocal_50, 5);
				func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
				func_39(&uLocal_50, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			system::settimera(0);
			iLocal_253++;
		}
		if ((iLocal_253 == 3 && system::timera() > 2000) && !func_37())
		{
			if (!bLocal_46)
			{
				if (!iLocal_235)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_216))
					{
						func_39(&uLocal_50, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_217))
					{
						func_59(&uLocal_50, 5);
						func_56(&uLocal_50, 5, iLocal_217, "RECSBRobber1", 0, 1);
						func_39(&uLocal_50, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_235 = 1;
				}
			}
			if (!bLocal_45)
			{
				func_89(&(iLocal_220[0]), "recsb_copclo");
				func_89(&(iLocal_220[1]), "recsb_copclo");
				func_89(&(iLocal_220[2]), "recsb_copclo");
			}
		}
		if (iLocal_253 == 4 && system::timera() > 5000)
		{
			system::settimera(0);
			iLocal_253++;
		}
	}
}

void func_89(var uParam0, char* sParam1)
{
	if (!unk_0x4FAFF4BCB7633475(*uParam0))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_45)
			{
				func_56(&uLocal_50, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_50, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0xE67051907958B5EB(*uParam0, unk_0x4A8C381C258A124D(), 10000, 48, 4);
			}
			system::settimera(0);
			iLocal_253++;
		}
	}
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_220)
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_265[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x4FAFF4BCB7633475(iLocal_216))
	{
		if (unk_0xC450B06E5AAA0985(uLocal_263))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_263);
		}
	}
	if (unk_0x4FAFF4BCB7633475(iLocal_217))
	{
		if (unk_0xC450B06E5AAA0985(uLocal_264))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_264);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_223)
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_223[iVar0], 0))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_223[iVar0], 0))
			{
				unk_0xBC5009F300C00558(iLocal_223[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_46)
	{
		if (!iLocal_48)
		{
			unk_0xD414C47AFF81382A(5, iLocal_239, joaat("player"));
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_263))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_263);
				}
				if (!unk_0xC450B06E5AAA0985(uLocal_263))
				{
					uLocal_263 = func_85(iLocal_216, 1, 145);
					unk_0x3F58BFCF656F0DF1(iLocal_216, 1);
				}
				unk_0x62A5310368A20EFA(iLocal_216, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_216, 1);
				unk_0xC225BC409BD24794(iLocal_216, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_216, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_264))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_264);
				}
				if (!unk_0xC450B06E5AAA0985(uLocal_264))
				{
					uLocal_264 = func_85(iLocal_217, 1, 145);
					unk_0x3F58BFCF656F0DF1(iLocal_217, 1);
				}
				unk_0x62A5310368A20EFA(iLocal_217, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_217, 1);
				unk_0xC225BC409BD24794(iLocal_217, unk_0x4A8C381C258A124D());
				unk_0xCAF62AAD9CA7C260(iLocal_217, 1);
			}
			iLocal_48 = 1;
		}
		if (bLocal_45)
		{
			if (!iLocal_49)
			{
				unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
				iVar0 = 0;
				while (iVar0 < iLocal_220)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
					{
						unk_0x3F58BFCF656F0DF1(iLocal_220[iVar0], 1);
						if (unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
						{
							unk_0xFE54B8568B2ABD12(&(uLocal_265[iVar0]));
						}
						unk_0x62A5310368A20EFA(iLocal_220[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x44FB298D6382876D(iLocal_220[iVar0], 1);
						unk_0xC225BC409BD24794(iLocal_220[iVar0], unk_0x4A8C381C258A124D());
						unk_0xCAF62AAD9CA7C260(iLocal_220[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_49 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_220)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
				{
					unk_0x3F58BFCF656F0DF1(iLocal_220[iVar0], 0);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_45)
	{
		if (!iLocal_47)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x3F58BFCF656F0DF1(iLocal_216, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x3F58BFCF656F0DF1(iLocal_217, 0);
			}
			iLocal_47 = 1;
		}
		if (!iLocal_49)
		{
			unk_0xD414C47AFF81382A(5, iLocal_240, joaat("player"));
			iVar0 = 0;
			while (iVar0 < iLocal_220)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
				{
					unk_0x3F58BFCF656F0DF1(iLocal_220[iVar0], 1);
					unk_0xC0FC6E3E1A8FBF31(iLocal_220[iVar0]);
					if (unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
					{
						unk_0xFE54B8568B2ABD12(&(uLocal_265[iVar0]));
					}
					if (!unk_0xC450B06E5AAA0985(uLocal_265[iVar0]))
					{
						uLocal_265[iVar0] = func_85(iLocal_220[iVar0], 1, 145);
					}
					unk_0x62A5310368A20EFA(iLocal_220[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x44FB298D6382876D(iLocal_220[iVar0], 1);
					unk_0xC225BC409BD24794(iLocal_220[iVar0], unk_0x4A8C381C258A124D());
					unk_0xCAF62AAD9CA7C260(iLocal_220[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_49 = 1;
		}
	}
}

void func_91()
{
	unk_0xEC9DAA34BBB4658C(joaat("s_m_y_ranger_01"));
	unk_0xEC9DAA34BBB4658C(joaat("a_m_y_genstreet_01"));
	unk_0xEC9DAA34BBB4658C(joaat("s_m_m_paramedic_01"));
	unk_0xEC9DAA34BBB4658C(joaat("sheriff"));
	unk_0xEC9DAA34BBB4658C(joaat("phoenix"));
	if ((((unk_0x6252BC0DD8A320DB(joaat("s_m_y_ranger_01")) && unk_0x6252BC0DD8A320DB(joaat("a_m_y_genstreet_01"))) && unk_0x6252BC0DD8A320DB(joaat("s_m_m_paramedic_01"))) && unk_0x6252BC0DD8A320DB(joaat("sheriff"))) && unk_0x6252BC0DD8A320DB(joaat("phoenix")))
	{
		unk_0xCCA6D8A84EE8C88A(joaat("phoenix"), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		unk_0x425BBE19F25A57AB(0f);
		unk_0xA7B0B03284E7503C(Vector(44,49f, 2630,83f, 335,22f) - Vector(20f, 50f, 50f), Vector(44,49f, 2630,83f, 335,22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1, 1);
		unk_0x5E08BBBF87BC4886(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 0, 0, 1);
		unk_0xA63572E348CC4CFB(Vector(43,4932f, 2612,694f, 328,0555f) - Vector(10f, 10f, 10f), Vector(43,4932f, 2612,694f, 328,0555f) + Vector(10f, 10f, 10f), 0, 1);
		unk_0x60040CDD28AA1BC3(328,0555f, 2612,694f, 43,4932f, 5f, 0, 0, 0, 0, 0, 0, 0);
		iLocal_224 = unk_0x5779387E956077A6(joaat("phoenix"), 326,78f, 2626,56f, 43,5081f, 45,21f, 1, 1, 0);
		iLocal_223[0] = unk_0x5779387E956077A6(joaat("sheriff"), 314,1008f, 2641,67f, 43,5055f, 258,9436f, 1, 1, 0);
		iLocal_223[1] = unk_0x5779387E956077A6(joaat("sheriff"), 330,7097f, 2646,913f, 43,685f, 120,9436f, 1, 1, 0);
		iLocal_223[2] = unk_0x5779387E956077A6(joaat("sheriff"), 321,4496f, 2649,388f, 43,5706f, 105,9436f, 1, 1, 0);
		unk_0x8C9AE8FF021E8F23(iLocal_223[2], 1);
		unk_0x8C9AE8FF021E8F23(iLocal_223[1], 1);
		unk_0x8C9AE8FF021E8F23(iLocal_223[0], 1);
		unk_0x4539850624F18A9E(iLocal_223[2], 1);
		unk_0x4539850624F18A9E(iLocal_223[1], 1);
		unk_0x4539850624F18A9E(iLocal_223[0], 1);
		unk_0xBC5009F300C00558(iLocal_223[0], 1);
		unk_0xBC5009F300C00558(iLocal_223[2], 1);
		unk_0xBC5009F300C00558(iLocal_223[1], 1);
		unk_0x0248EA593ACD1C87(iLocal_224, 1);
		unk_0x0248EA593ACD1C87(iLocal_223[0], 1);
		unk_0x0248EA593ACD1C87(iLocal_223[1], 1);
		unk_0x0248EA593ACD1C87(iLocal_223[2], 1);
		iLocal_216 = unk_0xB1DBFEB95C0EFB88(19, joaat("a_m_y_genstreet_01"), 321,31f, 2615,66f, 43,4963f, 346f, 1, 1);
		iLocal_217 = unk_0xB1DBFEB95C0EFB88(19, joaat("a_m_y_genstreet_01"), 326,25f, 2624,51f, 43,4846f, 341f, 1, 1);
		iLocal_221 = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_ranger_01"), 325,3731f, 2631,16f, 43,5248f, 87f, 1, 1);
		iLocal_220[0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_ranger_01"), 310,6203f, 2642,854f, 43,5173f, 226f, 1, 1);
		iLocal_220[1] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_ranger_01"), 319,5652f, 2650,067f, 43,5411f, 189f, 1, 1);
		iLocal_220[2] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_ranger_01"), 324,0396f, 2650,964f, 43,5983f, 214f, 1, 1);
		unk_0xEB418CA245FFE897(iLocal_220[0], "ped_cops[0]");
		unk_0xEB418CA245FFE897(iLocal_220[1], "ped_cops[1]");
		unk_0xEB418CA245FFE897(iLocal_220[2], "ped_cops[2]");
		unk_0x96A0632EBDD87FA3(iLocal_220[0], 1, -1, 0);
		unk_0x96A0632EBDD87FA3(iLocal_220[1], 1, -1, 0);
		unk_0x96A0632EBDD87FA3(iLocal_220[2], 1, -1, 0);
		unk_0xBB4D4E549F8E6E8C(iLocal_217, 326,25f, 2624,51f, 43,4846f, 3,5f, 0, 0);
		unk_0xBB4D4E549F8E6E8C(iLocal_216, 321,31f, 2615,66f, 43,4963f, 3,5f, 0, 0);
		unk_0xBB4D4E549F8E6E8C(iLocal_220[0], 310,6203f, 2642,854f, 43,5173f, 3,5f, 0, 0);
		unk_0xBB4D4E549F8E6E8C(iLocal_220[1], 319,5652f, 2650,067f, 43,5411f, 3,5f, 0, 0);
		unk_0xBB4D4E549F8E6E8C(iLocal_220[2], 324,0396f, 2650,964f, 43,5983f, 3,5f, 0, 0);
		unk_0x115CA3B4F950226D(iLocal_220[0]);
		unk_0x115CA3B4F950226D(iLocal_220[1]);
		unk_0x115CA3B4F950226D(iLocal_220[2]);
		unk_0xBE8796DB2B90A437(iLocal_220[0], 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_220[1], 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_220[2], 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_220[0], 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_220[1], 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_220[2], 1, 1);
		unk_0xC652B7E19CE29859(iLocal_220[0], 13);
		unk_0xC652B7E19CE29859(iLocal_220[1], 13);
		unk_0xC652B7E19CE29859(iLocal_220[2], 13);
		unk_0xBE8796DB2B90A437(iLocal_217, 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_216, 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_217, 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_216, 1, 1);
		unk_0xBFE60A5CC0C835D8(iLocal_223[0], 0, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_223[0], 1, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_223[1], 1, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_223[1], 0, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_223[2], 1, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_223[2], 0, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_224, 1, 0, 0);
		unk_0xBFE60A5CC0C835D8(iLocal_224, 0, 0, 0);
		unk_0x788F35D395511DFE(iLocal_224, 1, 1);
		unk_0x06CD913C241C765E("robbers", &iLocal_239);
		unk_0x06CD913C241C765E("cops", &iLocal_240);
		unk_0xD25E9BDC14A0B649(iLocal_221, 0, 0, 0);
		unk_0x3CEA1FD137ACE2D9(iLocal_217, iLocal_239);
		unk_0x5355DCB5D35ADF0F(iLocal_217, 0, iLocal_240);
		unk_0xD25E9BDC14A0B649(iLocal_217, 300, 0, 0);
		unk_0xB41DEC3AAC1AA107(iLocal_217, joaat("weapon_pistol"), 200, 1, 1);
		unk_0x25DBF9F9C6BDFFEA(iLocal_217, 100f);
		unk_0x35365D1E3ADB7109(iLocal_217, 100f);
		unk_0xAEFEF83576CF9532(iLocal_217, 35f, 35f, 1);
		unk_0xC652B7E19CE29859(iLocal_217, 13);
		unk_0x3CEA1FD137ACE2D9(iLocal_216, iLocal_239);
		unk_0x5355DCB5D35ADF0F(iLocal_216, 0, iLocal_240);
		unk_0xD25E9BDC14A0B649(iLocal_216, 300, 0, 0);
		unk_0xB41DEC3AAC1AA107(iLocal_216, joaat("weapon_pistol"), 200, 1, 1);
		unk_0x25DBF9F9C6BDFFEA(iLocal_216, 100f);
		unk_0x35365D1E3ADB7109(iLocal_216, 100f);
		unk_0xAEFEF83576CF9532(iLocal_216, 35f, 35f, 1);
		unk_0xC652B7E19CE29859(iLocal_216, 13);
		unk_0x5355DCB5D35ADF0F(iLocal_220[0], 0, iLocal_239);
		unk_0x5355DCB5D35ADF0F(iLocal_220[1], 0, iLocal_239);
		unk_0x5355DCB5D35ADF0F(iLocal_220[2], 0, iLocal_239);
		unk_0xB41DEC3AAC1AA107(iLocal_220[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_220[1], joaat("weapon_pistol"), 200, 1, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_220[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x25DBF9F9C6BDFFEA(iLocal_220[0], 100f);
		unk_0x35365D1E3ADB7109(iLocal_220[0], 100f);
		unk_0x25DBF9F9C6BDFFEA(iLocal_220[1], 100f);
		unk_0x35365D1E3ADB7109(iLocal_220[1], 100f);
		unk_0x25DBF9F9C6BDFFEA(iLocal_220[2], 100f);
		unk_0x35365D1E3ADB7109(iLocal_220[2], 100f);
		unk_0x3CEA1FD137ACE2D9(iLocal_220[0], iLocal_240);
		unk_0x3CEA1FD137ACE2D9(iLocal_220[1], iLocal_240);
		unk_0x3CEA1FD137ACE2D9(iLocal_220[2], iLocal_240);
		unk_0xCC1C92F7E1A3CE9D(5, 0);
		unk_0xCC1C92F7E1A3CE9D(3, 0);
		unk_0xD414C47AFF81382A(1, iLocal_240, joaat("COP"));
		unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_240);
		unk_0xD414C47AFF81382A(1, iLocal_240, joaat("player"));
		unk_0xD414C47AFF81382A(1, iLocal_239, joaat("player"));
		unk_0xD414C47AFF81382A(5, iLocal_240, iLocal_239);
		unk_0xD414C47AFF81382A(5, joaat("COP"), iLocal_239);
		unk_0xD414C47AFF81382A(5, iLocal_239, iLocal_240);
		unk_0x3D948B91131AF671(iLocal_220[0], iLocal_216, 3000, 0);
		unk_0x3D948B91131AF671(iLocal_220[1], iLocal_216, 3000, 0);
		unk_0x3D948B91131AF671(iLocal_220[2], iLocal_216, 3000, 0);
		if (func_51() == 0)
		{
			func_56(&uLocal_50, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_50, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_50, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_50, 4, iLocal_220[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_50, 5, iLocal_216, "RECSBRobber1", 0, 1);
		unk_0x397CF4F4C8B17365(iLocal_220[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x397CF4F4C8B17365(iLocal_216, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x397CF4F4C8B17365(iLocal_216, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_43 = 1;
	}
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_93();
}

void func_93()
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

void func_94(int iParam0)
{
	Global_113958 = iParam0;
}

int func_95(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_34();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_147())
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
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
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
		if (!func_134(iParam1))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_113969.f_24998.f_43[iParam1]))
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
		if (func_130())
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
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_119(iVar4))
				{
					if (func_97(iVar2))
					{
						if (!func_96(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_51() != iVar2)
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

bool func_96(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_102(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_102(float fParam0, float fParam1, float fParam2)
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

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_108(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_109(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	var uVar0;
	
	func_118(&uVar0, unk_0x4BA5A16068183C5E());
	func_117(&uVar0, unk_0x18E502A71E28968C());
	func_116(&uVar0, unk_0x5295501D0862870D());
	func_115(&uVar0, unk_0xB12880C92EA6EE15());
	func_114(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_113(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
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

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_119(int iParam0)
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
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_129()) || Global_113016) || Global_32951) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_129()) || Global_32951) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_129()) || Global_113016) || Global_32951) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_129()) || Global_113016) || Global_32951) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_129()) || Global_32951) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_129()) || func_126()) || Global_113016) || Global_32951) || func_128()) || Global_45250) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_129()) || Global_113016) || Global_32951) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
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

var func_122()
{
	return Global_101572.f_1;
}

int func_123()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
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

bool func_126()
{
	return Global_101585.f_394 > 0;
}

bool func_127()
{
	return Global_101585.f_393 > 0;
}

var func_128()
{
	return Global_1575083;
}

int func_129()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_130()
{
	func_50();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_133(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
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

int func_135(float fParam0, bool bParam1)
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
		if (func_27(func_51()))
		{
			iVar5 = func_24();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_136(iVar1, &Var0);
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

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_138(int iParam0)
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

struct<2> func_139(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_140(iParam0) };
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

struct<2> func_140(int iParam0)
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

int func_141()
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

int func_142()
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_113687 > 0;
}

int func_144()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_146()
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

int func_147()
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

void func_148()
{
	int iVar0;
	
	if (iLocal_44)
	{
		unk_0xFE54B8568B2ABD12(&uLocal_263);
		unk_0xFE54B8568B2ABD12(&uLocal_264);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x425BBE19F25A57AB(1f);
		unk_0xD7186A4A316964F2();
		unk_0xF58D3BBA4A469D70(unk_0x259BE71D8A81D4FA());
		unk_0x2AF2D6F164BD6F5A(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		unk_0x830C51B62E7CD5B2();
		unk_0xA63572E348CC4CFB(Vector(43,4932f, 2612,694f, 328,0555f) - Vector(10f, 10f, 10f), Vector(43,4932f, 2612,694f, 328,0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_220)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_220[iVar0]))
			{
				unk_0xAAA71DD7E9059338(iLocal_220[iVar0], 0);
				if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0x115CA3B4F950226D(iLocal_220[iVar0]);
					unk_0x44FB298D6382876D(iLocal_220[iVar0], 1);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_216))
			{
				unk_0x0428AFDCAA63B06E(iLocal_216, 317, 1);
				unk_0xAAA71DD7E9059338(iLocal_216, 0);
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_224, 0))
				{
					if (unk_0xCECDBB848D53DEB2(iLocal_216, iLocal_224, 0))
					{
						unk_0xA80E7D11DB73C8BA(iLocal_224, 1);
					}
				}
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_217))
			{
				unk_0x0428AFDCAA63B06E(iLocal_217, 317, 1);
				unk_0xAAA71DD7E9059338(iLocal_217, 0);
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_224, 0))
				{
					if (unk_0xCECDBB848D53DEB2(iLocal_217, iLocal_224, 0))
					{
						unk_0xA80E7D11DB73C8BA(iLocal_224, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_149(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_113958, 1), 64);
		if (func_33(Global_113958) > 0)
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
	func_150(&Global_33008);
	Global_113959 = 0;
	func_94(-1);
}

void func_150(var uParam0)
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

char* func_151(int iParam0, bool bParam1)
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

void func_152(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_153(int iParam0)
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_106(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_105(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)
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

