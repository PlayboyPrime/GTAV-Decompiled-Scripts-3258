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
	struct<55> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_63 = 0;
	struct<5> Local_64[32];
	int iLocal_65 = 0;
	int iLocal_66[3] = { 0, 0, 0 };
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_251[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	struct<21> Local_256 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	bLocal_68 = -1;
	iLocal_71 = -1;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_576(ScriptParam_256);
	}
	while (true)
	{
		func_575();
		if (func_568())
		{
			func_565();
		}
		uLocal_73 = unk_0x7E3F74F641EE6B27();
		func_556();
		func_553();
		func_548();
		func_547();
		switch (func_546(unk_0x383461852896D73D()))
		{
			case 0:
				if (func_545() == 1)
				{
					Local_64[unk_0x383461852896D73D() /*5*/] = 1;
				}
				else if (func_545() == 4)
				{
					Local_64[unk_0x383461852896D73D() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_545() == 1)
				{
					func_539();
				}
				else if (func_545() == 0)
				{
					func_533();
					Local_64[unk_0x383461852896D73D() /*5*/] = 0;
				}
				else if (func_545() == 4)
				{
					Local_64[unk_0x383461852896D73D() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_508();
				func_506(&(Local_62.f_54));
				if (func_505(&(Local_62.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_504(bLocal_68))
					{
						func_508();
						iVar0++;
					}
					Local_64[unk_0x383461852896D73D() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_64[unk_0x383461852896D73D() /*5*/] = 4;
			
			case 4:
				func_272();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			func_270();
			func_269();
			func_268();
			switch (func_545())
			{
				case 0:
					func_267();
					if (func_263())
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iLocal_70), 0))
						{
							func_261(unk_0x56E414973C2A8C0E(iLocal_70));
						}
						else
						{
							Local_62.f_36 = { Local_72 };
						}
						unk_0x8744D2E3FC95740E(&(Local_62.f_2), 6);
						Local_62.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_71())
					{
						func_70();
						func_69();
					}
					func_51();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_545() < 4)
	{
		if (func_23())
		{
			iLocal_74 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_504(bLocal_68) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_62.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<15> Var1;
	
	if (BitTest(Local_62.f_10[iLocal_74 /*7*/].f_2, 1) || BitTest(Local_62.f_10[iLocal_74 /*7*/].f_2, 6))
	{
		if (unk_0x2FC2FDC413532977(Local_62.f_10[iLocal_74 /*7*/]))
		{
			if (unk_0xFC8BFE4B41177C22(unk_0xC35A3A4C05A4831B(Local_62.f_10[iLocal_74 /*7*/])))
			{
				if (unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_62.f_10[iLocal_74 /*7*/]), 0))
				{
					if (!BitTest(Local_62.f_10[iLocal_74 /*7*/].f_2, 6))
					{
						if (bLocal_68 == 0)
						{
							Local_62.f_48++;
							if (!BitTest(Local_62.f_2, 12))
							{
								if (unk_0x7B8DC32252146679(Local_62.f_10[iLocal_74 /*7*/], &uVar0) == iLocal_70)
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 12);
								}
							}
							if ((Local_62.f_42 == iLocal_74 && !BitTest(Local_62.f_2, 5)) || Local_62.f_48 == func_504(bLocal_68))
							{
								Var1.f_3 = -578453253;
								Var1.f_11 = iLocal_70;
								Var1.f_12 = iLocal_69;
								if (func_504(bLocal_68) > 1)
								{
									Var1.f_13 = unk_0xB23E0F9B63D009A8(true);
								}
								else
								{
									Var1.f_13 = unk_0xB23E0F9B63D009A8(false);
								}
								Var1.f_4 = Local_62.f_43;
								func_21(Var1, func_22(1));
								if (Local_62.f_42 == iLocal_74)
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 5);
								}
							}
							else if (!BitTest(Local_62.f_2, 5))
							{
								Var1.f_3 = 1590597533;
								Var1.f_12 = iLocal_69;
								func_21(Var1, func_22(1));
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iLocal_74 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_62.f_10[iLocal_74 /*7*/].f_2, 5))
					{
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 2);
					}
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, true);
				}
			}
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, true);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 2);
	}
	func_3(iLocal_74);
	iLocal_74++;
	if (iLocal_74 >= func_504(bLocal_68))
	{
		iLocal_74 = 0;
		if (BitTest(Local_62.f_1, 0))
		{
			if (!BitTest(iLocal_65, 1))
			{
				if (!BitTest(Local_62.f_1, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), true);
				}
			}
			if (!BitTest(iLocal_65, 2))
			{
				if (!BitTest(Local_62.f_1, 9))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 9);
				}
			}
		}
		unk_0x8744D2E3FC95740E(&iLocal_65, true);
		unk_0x8744D2E3FC95740E(&iLocal_65, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x93E08E0F531E2C35())
	{
		if (unk_0x2FC2FDC413532977(Local_62.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_62.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_20(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_62.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x604F9A1C471B5137(iVar0) == 2 || (Global_2657971[iLocal_70 /*465*/].f_247 != -1 && func_19(Global_2657971[iLocal_70 /*465*/].f_247) == 4)) || BitTest(Global_1845281[iLocal_70 /*883*/].f_879, 14)) || func_17(iLocal_70, 0)) || func_9(iLocal_70))
								{
									Local_62.f_10[iParam0 /*7*/].f_3 = uLocal_73;
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x604F9A1C471B5137(iVar0) != 2 && Global_2657971[iLocal_70 /*465*/].f_247 == -1) && !BitTest(Global_1845281[iLocal_70 /*883*/].f_879, 14)) && !func_17(iLocal_70, 0)) && !func_9(iLocal_70))
							{
								unk_0x8744D2E3FC95740E(&(Local_62.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x775142054EC39277(uLocal_73, Local_62.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x604F9A1C471B5137(iVar0) != 2)
							{
								if (!BitTest(Local_62.f_2, 10))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 10);
									Local_62.f_39 = { func_8(iLocal_70) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_504(bLocal_68))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x864E9BBAA7BFA064(iVar0) == 3f && !unk_0x49F8918E2DC5FFBC(iVar0, 118, 1))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_62.f_2, 1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_70, 1, 1))
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1), 25f) || !func_5(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1), 625f))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1)) || (unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x56E414973C2A8C0E(iLocal_70)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_62.f_2, 1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_70, 1, 1))
						{
							if (!func_4(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1)) && !(unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x56E414973C2A8C0E(iLocal_70)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x49F8918E2DC5FFBC(iVar0, 118, 1))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0x1D5CD3EAAA7422B0((Param1.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var1.f_0 = Param1.f_0;
		Var1.f_1 = Param1.f_1;
		if (func_5(Var0, Var1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (system::vdist2(Param0, Param1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_62.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x762604C40829DB72(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			iVar0 = unk_0x56E414973C2A8C0E(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xFC8BFE4B41177C22(iVar1))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					if (unk_0xCECDBB848D53DEB2(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x77B62CAA5DF0922A("MPBitset", 3) && unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_15(iParam0, 1))
	{
		return Global_2738934.f_5249.f_229[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

int func_14(int iParam0)
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

int func_15(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_16(iParam0))
		{
			return 0;
		}
	}
	return func_14(Global_1887305[iParam0 /*610*/].f_10);
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_14(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0x7F420695E3F776FB(iVar0, iParam1))
		{
			if (func_18(unk_0x6EF03BE64E058E2F(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1)
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

int func_19(int iParam0)
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

int func_20(int iParam0, bool bParam1)
{
	if (unk_0x77B62CAA5DF0922A("AttributeDamage", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "AttributeDamage"))
		{
			if (BitTest(unk_0xE2F6FE9B61232165(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_21(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_22(int iParam0)
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
			if (func_6(iVar2, 0, 0))
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

int func_23()
{
	if (BitTest(Local_62.f_1, 0))
	{
		if (bLocal_68 == 1)
		{
			if (BitTest(Local_62.f_1, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_62.f_1, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), false);
			return 1;
		}
	}
	else if (BitTest(Local_62.f_1, 2))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), true);
		unk_0x0B0C9A0F9AAEB7F0(&Global_1919965, bLocal_68);
		return 1;
	}
	if (BitTest(Local_62.f_3, 12))
	{
		return 1;
	}
	if (bLocal_68 == 0)
	{
		if (BitTest(Local_62.f_2, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 2);
			return 1;
		}
		if (BitTest(Local_62.f_2, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 8);
			return 1;
		}
		if (BitTest(Local_62.f_2, 5))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 3);
			return 1;
		}
		if (BitTest(Local_62.f_2, 9))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 9);
			return 1;
		}
		if (BitTest(Local_62.f_1, 15))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_70, 0, 1))
	{
		if (bLocal_68 != 0 || !BitTest(Local_62.f_2, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_49(iLocal_70, 129))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 8);
			return 1;
		}
		if (func_49(iLocal_70, 131) || BitTest(Global_1887305[iLocal_70 /*610*/].f_1, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_49(iLocal_70, 136) || (func_48(unk_0x259BE71D8A81D4FA(), 24) && func_47(iLocal_70)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_49(iLocal_70, 146))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_46(unk_0x259BE71D8A81D4FA()) && ((func_45(unk_0x259BE71D8A81D4FA()) == 148 || func_45(unk_0x259BE71D8A81D4FA()) == 142) || func_45(unk_0x259BE71D8A81D4FA()) == 164))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(unk_0x259BE71D8A81D4FA()) == 153)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(unk_0x259BE71D8A81D4FA()) && func_45(unk_0x259BE71D8A81D4FA()) == 170)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(unk_0x259BE71D8A81D4FA()) == 167)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(unk_0x259BE71D8A81D4FA()) == 168)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(unk_0x259BE71D8A81D4FA()) && func_45(unk_0x259BE71D8A81D4FA()) == 238)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(unk_0x259BE71D8A81D4FA()) && func_45(unk_0x259BE71D8A81D4FA()) == 249)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		switch (func_42(unk_0x259BE71D8A81D4FA()))
		{
			case 6:
			case 7:
				if (func_41())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_40(iLocal_70))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_36(iLocal_70))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_35(iLocal_70))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_70) == 276)
		{
			if (func_33(iLocal_70) == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
				return 1;
			}
		}
		if (func_45(iLocal_70) == 309)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_70) == 318)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_32(func_45(iLocal_70)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_70) == 324)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			return 1;
		}
		if (unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iLocal_70), 0))
		{
			if (bLocal_68 == 1)
			{
				if (BitTest(Local_62.f_1, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (bLocal_68 == 1)
			{
				if (func_49(iLocal_70, 146))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_62.f_1, 16))
				{
					if (unk_0x775142054EC39277(uLocal_73, Local_62.f_9) > func_31())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 7);
						return 1;
					}
				}
				if (func_28())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 7);
					return 1;
				}
				if (func_24(iLocal_70, func_12(iLocal_69), 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 7);
					return 1;
				}
			}
			if (iLocal_71 != unk_0x70E57E9927B6BA58(unk_0xBD6CA019F46AB947(iLocal_70)))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_24(int iParam0, int iParam1, bool bParam2)
{
	return func_25(iParam0, iParam1, bParam2, 1);
}

int func_25(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_14(iParam1) && func_14(iParam0))
	{
		if (!bParam2)
		{
			if (func_27(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1887305[iParam0 /*610*/].f_10 != func_13())
		{
			if (iParam1 == Global_1887305[iParam0 /*610*/].f_10)
			{
				return func_26(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (func_16(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (func_14(Global_1887305[iParam0 /*610*/].f_10))
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					if (Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_28()
{
	if (((func_30(iLocal_70, 1, 1) || func_48(iLocal_70, 0)) || func_48(iLocal_70, 7)) || func_29(iLocal_70))
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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

int func_31()
{
	if (Local_62.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 316:
		case 315:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)
{
	if (func_14(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_36(int iParam0)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (func_39(iParam0))
	{
		return 1;
	}
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_37(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_433.f_3, 6);
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 29);
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_433.f_2, 16);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2708056;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_41()
{
	return Global_1835494;
}

int func_42(int iParam0)
{
	if (func_45(iParam0) == 243)
	{
		return func_33(iParam0);
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_44(iParam0, 9);
	}
	return 0;
}

var func_44(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_45(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_34(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_46(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

var func_47(int iParam0)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_1, 4);
}

var func_48(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_49(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_50(iParam0);
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

void func_51()
{
	func_62();
	if (bLocal_68 != 1)
	{
		func_2();
	}
	func_52();
}

void func_52()
{
	int iVar0;
	
	if (func_6(unk_0xB23E0F9B63D009A8(iLocal_75), 0, 1))
	{
		if (bLocal_68 == 1)
		{
			if (unk_0xB23E0F9B63D009A8(bLocal_75) == iLocal_70)
			{
				if (!BitTest(Local_62.f_1, 16))
				{
					if (BitTest(Local_64[bLocal_75 /*5*/].f_1, 3))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_62.f_1, 11))
			{
				if (func_58(unk_0xB23E0F9B63D009A8(bLocal_75)))
				{
					if (!BitTest(Local_62.f_4, bLocal_75))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 11);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_4), bLocal_75);
					}
				}
				else if (BitTest(Local_62.f_4, bLocal_75))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 11);
					unk_0x8744D2E3FC95740E(&(Local_62.f_4), bLocal_75);
				}
			}
			else if (BitTest(Local_64[bLocal_75 /*5*/].f_1, 2))
			{
				unk_0x8744D2E3FC95740E(&(Local_62.f_1), 11);
			}
			if (bLocal_68 == 0)
			{
				if (BitTest(Local_64[bLocal_75 /*5*/].f_1, 0))
				{
					if (Local_64[bLocal_75 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_62.f_2, 1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), true);
							Local_62.f_42 = Local_64[bLocal_75 /*5*/].f_2;
							Local_62.f_43 = Local_64[bLocal_75 /*5*/].f_3;
							if (!func_57())
							{
								func_56();
							}
						}
					}
					else if (!BitTest(Local_62.f_2, 9))
					{
						if (!func_57())
						{
							func_55();
						}
						iVar0 = 0;
						while (iVar0 < func_504(bLocal_68))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 9);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), true);
					}
				}
				if (func_57())
				{
					if (!BitTest(iLocal_65, 17))
					{
						if (BitTest(Local_64[bLocal_75 /*5*/].f_1, 5))
						{
							func_56();
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 17);
						}
						else if (BitTest(Local_64[bLocal_75 /*5*/].f_1, 6))
						{
							func_55();
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 17);
						}
					}
				}
				if (!BitTest(Local_64[bLocal_75 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_65, 3))
					{
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 3);
					}
				}
				else if (unk_0xB23E0F9B63D009A8(bLocal_75) == iLocal_70)
				{
					if (bLocal_68 == 0)
					{
						if (!BitTest(Local_62.f_2, 1))
						{
							if (!BitTest(Local_62.f_2, 6))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_75++;
	if (bLocal_75 >= 32)
	{
		bLocal_75 = false;
		if (bLocal_68 == 0)
		{
			if (!BitTest(iLocal_65, 3))
			{
				func_54();
			}
			else
			{
				func_53();
			}
			unk_0x8744D2E3FC95740E(&iLocal_65, 3);
		}
	}
}

void func_53()
{
	if (BitTest(Local_62.f_2, 3))
	{
		unk_0x8744D2E3FC95740E(&(Local_62.f_2), 3);
	}
}

void func_54()
{
	if (!BitTest(Local_62.f_2, 3))
	{
		Local_62.f_6 = uLocal_73;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 3);
	}
}

void func_55()
{
	struct<15> Var0;
	
	Var0.f_3 = -1209401092;
	Var0.f_11 = iLocal_70;
	Var0.f_12 = iLocal_69;
	func_21(Var0, func_22(1));
}

void func_56()
{
	struct<15> Var0;
	
	Var0.f_3 = -1079941038;
	Var0.f_11 = iLocal_70;
	Var0.f_12 = iLocal_69;
	if (func_504(bLocal_68) > 1)
	{
		Var0.f_13 = unk_0xB23E0F9B63D009A8(true);
	}
	else
	{
		Var0.f_13 = unk_0xB23E0F9B63D009A8(false);
	}
	Var0.f_4 = Local_62.f_43;
	func_21(Var0, func_22(1));
}

int func_57()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

bool func_58(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return func_61();
	}
	return BitTest(Global_1668667.f_241.f_136[func_60(10) /*33*/][iParam0], func_59(10));
}

int func_59(int iParam0)
{
	return (iParam0 % 32);
}

int func_60(int iParam0)
{
	return (iParam0 / 32);
}

var func_61()
{
	return Global_1574582;
}

void func_62()
{
	int iVar0;
	
	if (bLocal_68 == 0)
	{
		if (BitTest(Local_62.f_2, 3))
		{
			if (unk_0x775142054EC39277(uLocal_73, Local_62.f_6) > 10000)
			{
				if (BitTest(Local_62.f_2, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 2);
				}
			}
		}
		if (BitTest(Local_62.f_1, 8))
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				if (func_66())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 6);
					func_65();
				}
			}
		}
		if (!BitTest(Local_62.f_1, 0))
		{
			if (func_6(iLocal_70, 1, 1))
			{
				iVar0 = unk_0x56E414973C2A8C0E(iLocal_70);
				if (func_64(iVar0))
				{
					func_261(iVar0);
				}
			}
		}
		if (!BitTest(Local_62.f_2, 1))
		{
			if (!func_6(iLocal_70, 1, 1) || func_29(iLocal_70))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 15);
			}
		}
	}
	if (BitTest(Local_62.f_1, 0))
	{
		if (BitTest(Local_62.f_1, 5))
		{
			if (!BitTest(Local_62.f_1, 4))
			{
				if (unk_0x775142054EC39277(uLocal_73, Local_62.f_5) > 600000)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_62.f_3, 12))
		{
			if (func_63())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_3), 12);
			}
		}
	}
}

int func_63()
{
	switch (Local_62.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_827 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_827 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
	}
	if (BitTest(Local_62.f_1, 17))
	{
		if (!unk_0x69799E0840A34AFB(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_62.f_36, unk_0xD1A6A821F5AC81DB(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	func_533();
	Local_62.f_0 = 0;
}

int func_66()
{
	if ((((((((BitTest(Local_62.f_2, 6) || unk_0xD5FF242D0AFC5855(iLocal_70)) || func_30(iLocal_70, 1, 1)) || func_68(iLocal_70)) || func_48(iLocal_70, 0)) || func_48(iLocal_70, 7)) || func_29(iLocal_70)) || Global_2657971[iLocal_70 /*465*/].f_249) || func_67(unk_0x56E414973C2A8C0E(iLocal_70), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_70 != -1)
	{
		if (BitTest(Local_64[iLocal_70 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (unk_0x27E68848F0E5D7D9(iParam0))
			{
				uVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
				if (unk_0xFC8BFE4B41177C22(uVar0))
				{
					if (unk_0x4B423FAA24E8ABF0(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_68(int iParam0)
{
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	if (!BitTest(Local_62.f_1, 5))
	{
		Local_62.f_5 = uLocal_73;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 5);
	}
}

void func_70()
{
	if (BitTest(Local_62.f_1, 5))
	{
		unk_0x8744D2E3FC95740E(&(Local_62.f_1), 5);
	}
}

int func_71()
{
	bool bVar0;
	
	if (BitTest(Local_62.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_263())
		{
			if (bLocal_68 == 1)
			{
				bVar0 = true;
			}
			else if (func_258())
			{
				if (func_254())
				{
					if (func_253())
					{
						bVar0 = true;
					}
					else if (func_251(func_252(bLocal_68)))
					{
						if (func_77())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_69();
			if (func_72())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x93E08E0F531E2C35())
	{
		if (BitTest(Local_62.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (bLocal_68)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_504(bLocal_68))
					{
						if ((!unk_0x2FC2FDC413532977(Local_62.f_10[iVar0 /*7*/]) && !BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_73(iVar0, func_76(bLocal_68), Local_62.f_32, Local_62.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_68 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_504(bLocal_68))
				{
					if (!unk_0x2FC2FDC413532977(Local_62.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, true);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 2);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 3);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 4);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), false);
			unk_0x0B0C9A0F9AAEB7F0(&Global_1919966, bLocal_68);
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1, struct<3> Param2, var uParam3)
{
	if (unk_0x93E08E0F531E2C35())
	{
		if (!unk_0x2FC2FDC413532977(Local_62.f_10[iParam0 /*7*/]))
		{
			if (unk_0x594FD1B13DCC309E(0) < unk_0xA0522491D076C1E6(false, 0))
			{
				if (unk_0xADCE9BCAFCB83364(1))
				{
					if (func_251(func_252(bLocal_68)))
					{
						if (func_75(&(Local_62.f_10[iParam0 /*7*/]), 7, func_252(bLocal_68), Param2, uParam3, 1, 1, 1))
						{
							Local_62.f_10[iParam0 /*7*/].f_1 = bLocal_68;
							Local_62.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_74(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_74(int iParam0)
{
	char cVar0[16];
	
	if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), Global_1837311);
				unk_0x753DE44F9049D173(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 1);
				unk_0xF24ADF73381B85C1(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xD0F1DB0E50B367AD(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 2);
			unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 13, 1);
			unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 41, 1);
			unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 132, 1);
			unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 118, 0);
			unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 311, 1);
			unk_0xDC914F868C070C56(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0xEB418CA245FFE897(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_62.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0, 0);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 2, 0);
					unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 2);
					unk_0x1090EAA386FB31A8(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0);
					unk_0x96A0632EBDD87FA3(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 32, 1);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 4, 0);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 128, 1);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 32, 0);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 8, 0);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 64, 0);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 256, 1);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 1, 0);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 2, 1);
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 16, 1);
					if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 512, 1);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 17, 0);
					unk_0xB41DEC3AAC1AA107(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0x886FA295C1257AAA(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 0);
					unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), unk_0x56E414973C2A8C0E(iLocal_70), -1, 0, 2);
					unk_0xD8347AAB0A3EF3A0(Local_62.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), system::round((Global_262145.f_156 * IntToFloat(unk_0x8D91ADE44AC79BC9(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]))))), 0, 0);
			if (!BitTest(Local_62.f_1, 8))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 8);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_75(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	var uVar0;
	
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	uVar0 = unk_0xB1DBFEB95C0EFB88(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0x9F7A52B1537567AC(uVar0);
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(uVar0, iParam7);
		if (unk_0xC8D49539708A80B4(uVar0))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_77()
{
	struct<6> Var0;
	
	if (BitTest(Local_62.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (bLocal_68)
		{
			case 0:
				if (unk_0x762604C40829DB72(iLocal_70) && func_6(iLocal_70, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1) };
					Var0.f_5 = 20f;
					if (func_78(Local_62.f_36, 40f, &(Local_62.f_32), &(Local_62.f_35), &Var0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xAE83F6C70E4B78E3();
					unk_0xE07943643E972CC4();
					if (Global_2635563.f_2772)
					{
						unk_0x81F9331288182129();
						Global_2635563.f_2772 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_78(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_79(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_79(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635563.f_2766 == *uParam0 || !Global_2635563.f_2766.f_1 == uParam0->f_1) || !Global_2635563.f_2766.f_2 == uParam0->f_2) || !Global_2635563.f_2769 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635563.f_2780 == uParam0->f_8 || !Global_2635563.f_2780.f_1 == uParam0->f_8.f_1) || !Global_2635563.f_2780.f_2 == uParam0->f_8.f_2) || !Global_2635563.f_2783 == uParam0->f_11) || !Global_2635563.f_2783.f_1 == uParam0->f_11.f_1) || !Global_2635563.f_2783.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635563.f_2780 == uParam0->f_8 || !Global_2635563.f_2780.f_1 == uParam0->f_8.f_1) || !Global_2635563.f_2780.f_2 == uParam0->f_8.f_2) || !Global_2635563.f_2783 == uParam0->f_11) || !Global_2635563.f_2783.f_1 == uParam0->f_11.f_1) || !Global_2635563.f_2783.f_2 == uParam0->f_11.f_2) || !Global_2635563.f_2786 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635563.f_2787 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0xF40767E41852FB72(Global_2635563.f_2773) && !Global_2635563.f_2773 == unk_0x8F76B2250AC806FA())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2635563.f_2764 == 1)
		{
			if (unk_0xF40767E41852FB72(Global_2635563.f_2773))
			{
				if (Global_2635563.f_2773 == unk_0x8F76B2250AC806FA())
				{
					if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) < func_250(0))
					{
						return 0;
					}
				}
				else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) < func_250(0))
				{
					return 0;
				}
			}
			unk_0xAE83F6C70E4B78E3();
			unk_0xE07943643E972CC4();
			func_249();
		}
		Global_2635563.f_2764 = 0;
	}
	else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) > func_250(0))
	{
		Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
		func_243();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x693ACD1AA0BDB375(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	Var7 = { Var6 + Vector(-0,1f, -0,1f, -0,1f) };
	Var8 = { Var6 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2635563.f_2764)
	{
		unk_0xAE83F6C70E4B78E3();
		unk_0xE07943643E972CC4();
		func_249();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (system::vmag(*uParam0) > 0f)
			{
				if (func_242(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xBC88293FA9783DEB())
		{
			Global_2635563.f_2787 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635563.f_2766 = { *uParam0 };
					Global_2635563.f_2769 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635563.f_2780 = { uParam0->f_8 };
					Global_2635563.f_2783 = { uParam0->f_11 };
					Global_2635563.f_2786 = 0f;
					Global_2635563.f_2766 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635563.f_2780 = { uParam0->f_8 };
					Global_2635563.f_2783 = { uParam0->f_11 };
					Global_2635563.f_2786 = uParam0->f_14;
					Global_2635563.f_2766 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_241(Var6.f_0, Var6.f_1);
			}
			Global_2635563.f_2765 = 1;
			Global_2635563.f_2764 = 1;
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2770 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2773 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635563.f_2764)
	{
		if (Global_2635563.f_2765 == 1)
		{
			if (unk_0xFFEB5F24B372DFF6(fVar2, fVar3, fVar4, fVar5) || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 5000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_240(Global_4718592.f_185586))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_213(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_212(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635563.f_2765 = 9;
				}
				else
				{
					Global_2635563.f_2765 = 2;
				}
			}
		}
		if (Global_2635563.f_2765 == 2)
		{
			if ((unk_0x75A7B7B3DF681621(Var7, Var8) || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 15000) || unk_0x758F97A0C79EEFBF(Var7, Var8) == 0)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (uParam0->f_5 && !func_209(unk_0x259BE71D8A81D4FA(), 0))
				{
					Global_2635563.f_2765 = 3;
				}
				else
				{
					Global_2635563.f_2765 = 4;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2775) > 7000)
			{
				func_208(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2635563.f_2765 == 3)
		{
			if (func_207() || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 10000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 4;
			}
		}
		if (Global_2635563.f_2765 == 4)
		{
			if (unk_0xBC88293FA9783DEB())
			{
				unk_0xAE83F6C70E4B78E3();
				unk_0xE07943643E972CC4();
			}
			else
			{
				iVar0 = 0;
				func_243();
				if (uParam0->f_5)
				{
					if (system::vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x4249B4032FDD750E(unk_0x259BE71D8A81D4FA(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
						
						case 1:
							func_206(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x243CFDECC076762E(unk_0x259BE71D8A81D4FA(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
						
						case 2:
							if (unk_0x243CFDECC076762E(unk_0x259BE71D8A81D4FA(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					Global_2635563.f_2765 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x965EA50BC3B24F5B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_206(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0xC9666089A105E4BD(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xC9666089A105E4BD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635563.f_2765 == 5)
		{
			if (func_132(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635563.f_2791.f_5)
				{
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					Global_2635563.f_2765 = 6;
				}
				else
				{
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					if (!uParam0->f_5)
					{
						if (!system::vmag(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635563.f_2765 = 9;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 20000)
			{
				unk_0xAE83F6C70E4B78E3();
				unk_0xE07943643E972CC4();
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 8;
			}
		}
		if (Global_2635563.f_2765 == 6)
		{
			iVar0 = 0;
			Global_2635563.f_2791.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_131(uParam0->f_4))
				{
					if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_130(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2765 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x965EA50BC3B24F5B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_206(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0xC9666089A105E4BD(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xC9666089A105E4BD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635563.f_2765 == 7)
		{
			if (func_132(uParam2, uParam0, uParam1, 1))
			{
				if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!system::vmag(Global_2635563.f_2925[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_212(Global_2635563.f_2925[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_128(Global_2635563.f_2925[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x26715B0ED6702C87(Global_2635563.f_2925[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_82(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (!system::vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2635563.f_2765 = 9;
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 20000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 8;
			}
		}
		if (Global_2635563.f_2765 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_81(Global_2635563.f_489))
				{
				}
			}
			else if (Global_2635563.f_2791.f_2)
			{
				func_80(uParam2, &(Global_2635563.f_2791.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635563.f_2766 };
				func_82(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2765 = 9;
		}
		if (Global_2635563.f_2765 == 9)
		{
			Global_2635563.f_2764 = 0;
			unk_0xAE83F6C70E4B78E3();
			unk_0xE07943643E972CC4();
			func_249();
			return 1;
		}
		Global_2635563.f_2770 = unk_0x7E3F74F641EE6B27();
	}
	return 0;
}

void func_80(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_81(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_82(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_131(uParam5->f_4) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_130(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_130(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_96(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_94(unk_0x259BE71D8A81D4FA(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_213(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_93(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_96(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_93(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0xB1EAADCB692D69CE(Var0, &uVar3, 0, 0))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_83(uParam0, 1, 1, 1, 1))
			{
				func_82(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0xB1EAADCB692D69CE(Var0, &uVar3, 0, 0))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635563.f_667 = 1;
}

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_2640820[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640820[iVar0 /*17*/].f_16))
			{
				if (func_92(*uParam0, &(Global_2640820[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640820[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640820[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_84(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_83(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_84(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_84(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_91(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_91(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_91(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_89(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_88(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_85(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_85(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_87(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(system::vmag(Var2)) };
	fVar3 = (system::vmag(Var1) * system::sin(unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_86(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_86(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0,5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = system::vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_87(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0,5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_87(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		fVar3 = (system::vmag(Var11) * system::sin(unk_0x20A3B1C2EC4167BB(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_86(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_86(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0,5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (system::vdist(Var4, *uParam0, uParam0->f_1, 0f) < system::vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_86(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_87(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_88(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

void func_89(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (system::vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_90(&Var0, 0f, 0f, unk_0xD2AA6F822D3A55D2(0f, 360f));
		}
		else
		{
			func_90(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

void func_90(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = system::cos(Param1.f_0);
	fVar1 = system::sin(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = system::cos(Param1.f_1);
	fVar1 = system::sin(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = system::cos(Param1.f_2);
	fVar1 = system::sin(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_91(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_89(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_88(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_85(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x8B777C12D64DF209(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_212(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_128(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x26715B0ED6702C87(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_92(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_212(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_128(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_93(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (system::vdist(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_128(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x26715B0ED6702C87(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_13())
			{
				return func_95(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_95(int iParam0)
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

int func_96(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_127(Param0, uParam1))
	{
		if (func_97(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xC0EEE6A2207F3CB8(Param0, 0, uParam1, iParam2))
	{
		if (func_97(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(struct<3> Param0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = system::vdist(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_113(Global_2635563.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_101(*uParam1, 1056964608))
			{
				if (!func_98(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_98(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_100(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642438[iVar2])
	{
		if (func_99(Var1, &(Global_2641042[iVar2 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_85(&Var1, Global_2641042[iVar2 /*155*/][iVar0 /*7*/], Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642438[8])
	{
		if (func_99(Var1, &(Global_2641042[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_85(&Var1, Global_2641042[8 /*155*/][iVar0 /*7*/], Global_2641042[8 /*155*/][iVar0 /*7*/].f_3, Global_2641042[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_99(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_100(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2642449[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642449[1])
	{
		if (Param0.f_0 < Global_2642453[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642449[2])
	{
		if (Param0.f_0 < Global_2642453[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642453[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642453[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_101(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_110(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		if (Global_4980736.f_47367 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_47367)
			{
				if (Global_4980736.f_47368[iVar0 /*163*/].f_7 != 0)
				{
					if (func_102(Param0, Global_4980736.f_47368[iVar0 /*163*/], Global_4980736.f_47368[iVar0 /*163*/].f_6, Global_4980736.f_47368[iVar0 /*163*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_6999 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_6999)
			{
				if (Global_4980736.f_7002[iVar0 /*609*/].f_15 != 0)
				{
					if (func_102(Param0, Global_4980736.f_7002[iVar0 /*609*/], Global_4980736.f_7002[iVar0 /*609*/].f_3, Global_4980736.f_7002[iVar0 /*609*/].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_98444 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_98444)
			{
				if (Global_4980736.f_98448[iVar0 /*600*/].f_12 != 0)
				{
					if (func_102(Param0, Global_4980736.f_98448[iVar0 /*600*/], Global_4980736.f_98448[iVar0 /*600*/].f_3, Global_4980736.f_98448[iVar0 /*600*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_268)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_233[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058116.f_233[iVar0], 0))
				{
					if (func_102(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_233[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_233[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_266)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_119[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058116.f_119[iVar0], 0))
				{
					if (func_102(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_119[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_119[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_119[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (system::vdist(Param0, Param1) < func_109(iParam3, 1008981770))
	{
		func_103(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x26715B0ED6702C87(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_90(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	func_104(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0));
}

void func_104(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_107(iParam0);
		if (iVar0 != 0)
		{
			func_105(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (system::vmag(*uParam1) <= 0,01f || system::vmag(*uParam2) <= 0,01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20,7f)
			{
				fParam4 = 20,7f;
			}
			if (fParam3 < 137,2f)
			{
				fParam3 = 137,2f;
			}
			if (fParam5 < 21,1f)
			{
				fParam5 = 21,1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_105(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_106(iParam0, &Global_1578033);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x441B9C85D0FFA9ED(Global_1578033[iVar0]))
		{
			unk_0xC93BAF616F1C680F(Global_1578033[iVar0], &(Global_1578037[iVar0 /*3*/]), &(Global_1578044[iVar0 /*3*/]));
		}
		if (system::vmag(Global_1578037[iVar0 /*3*/]) <= 0,01f || system::vmag(Global_1578044[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1578037[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1578044[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1578037[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1578044[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1578037[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1578044[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1578051[iVar0] = (Global_1578044[iVar0 /*3*/] - Global_1578037[iVar0 /*3*/]);
		Global_1578054[iVar0] = (Global_1578044[iVar0 /*3*/].f_1 - Global_1578037[iVar0 /*3*/].f_1);
		Global_1578057[iVar0] = (Global_1578044[iVar0 /*3*/].f_2 - Global_1578037[iVar0 /*3*/].f_2);
		if (Global_1578051[iVar0] > Global_1578060)
		{
			Global_1578060 = Global_1578051[iVar0];
		}
		if (Global_1578057[iVar0] > Global_1578061)
		{
			Global_1578061 = Global_1578057[iVar0];
		}
		iVar0++;
	}
	Global_1578062 = (Global_1578060 * -0,5f);
	Global_1578065 = (Global_1578060 * 0,5f);
	Global_1578062.f_1 = ((((0,5f * Global_1578054[0]) + Global_1578054[1]) + Global_1578033.f_3) * -1f);
	Global_1578065.f_1 = (0,5f * Global_1578054[0]);
	Global_1578062.f_2 = (Global_1578057[0] * -0,5f);
	Global_1578065.f_2 = (Global_1578057[0] * 0,5f);
	*uParam1 = { Global_1578062 };
	*uParam2 = { Global_1578065 };
}

void func_106(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_108(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_109(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_104(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (system::sqrt(((((Var2.f_0 * 0,5f) * (Var2.f_0 * 0,5f)) + ((Var2.f_1 * 0,5f) * (Var2.f_1 * 0,5f))) + ((Var2.f_2 * 0,5f) * (Var2.f_2 * 0,5f)))) + fParam1);
	return fVar3;
}

int func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_111(iParam0))
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

bool func_111(int iParam0)
{
	return func_112(iParam0);
}

var func_112(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_113(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_120(Param0))
	{
		if (func_83(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_115(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_114(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (system::vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_89(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_114(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (system::vdist(Param0, Global_2635563.f_3037[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_117(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_84(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_117(Var2, &uVar1) || func_116(Var2))
			{
				Var2 = { *uParam0 };
				func_84(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_116(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635563.f_596 > 0f)
	{
		fVar0 = system::vdist(Param0, Global_2635563.f_593);
		if (fVar0 < Global_2635563.f_596)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_119())
	{
		return 0;
	}
	iVar1 = func_118();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_92(Param0, &(Global_2635563.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_119()
{
	return Global_1943520.f_559;
}

int func_120(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635563.f_515 && !Global_2635563.f_516)
	{
		if (!Global_2635563.f_45.f_317)
		{
			if (!func_124(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 1;
			}
			if (!func_123(Param0, 1008981770))
			{
				if (!func_83(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_83(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_122(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_121(&(Global_2635563.f_45[iVar0 /*12*/])) };
					if (!func_83(&Var1, 0, 0, 0, 1))
					{
						if (!func_83(&Param0, 0, 0, 0, 1))
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

Vector3 func_121(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_122(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_92(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_123(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_92(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_124(int iParam0, bool bParam1)
{
	if (func_126() != 0)
	{
		return func_125(iParam0) != 0;
	}
	return func_110(iParam0, bParam1, 0);
}

int func_125(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_126()
{
	return Global_32948;
}

int func_127(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2635563.f_2562 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635563.f_2562)
		{
			fVar3 = system::vdist(Global_2635563.f_2563[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2635563.f_2563[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_128(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_129(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_129(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_130(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.f_0 > Param1.f_0)
	{
		Var1.f_0 = Param0.f_0;
		Var0.f_0 = Param1.f_0;
	}
	else
	{
		Var1.f_0 = Param1.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (system::vmag(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_131(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_132(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2635563.f_2791.f_1 == 0 && Global_2635563.f_2791 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xC86D271C3C15DE36(&(Global_2635563.f_2791.f_1)))
			{
				case 0:
					func_204(uParam1, uParam2);
					if (!Global_2635563.f_2791.f_2)
					{
						if (uParam2->f_7 && Global_2635563.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
							}
							if (uParam1->f_5 && func_81(Global_2635563.f_489))
							{
								if (!Global_2635563.f_2791.f_5)
								{
									Global_2635563.f_2791.f_5 = 1;
								}
								else
								{
									func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_82(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_204(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xBC88293FA9783DEB())
		{
			if (!unk_0x54CEFF81D65925A1())
			{
				if (unk_0x35705F8A1AB3E367())
				{
					func_204(uParam1, uParam2);
					Global_2635563.f_2791.f_1 = unk_0x53367B4589EB191D();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xE07943643E972CC4();
				func_204(uParam1, uParam2);
				if (!Global_2635563.f_2791.f_2)
				{
					Global_2635563.f_2791.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_201(Global_2635563.f_555, &(Global_2635563.f_2791.f_57), &(Global_2635563.f_2791.f_90));
	}
	if (uParam2->f_7 && !Global_2635563.f_2791.f_4)
	{
		Global_2635563.f_2791.f_4 = 1;
		func_140(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2635563.f_2791.f_1 > 0 || Global_2635563.f_2791 > 0)
	{
		if (uParam1->f_5 || unk_0xBC88293FA9783DEB())
		{
			iVar2 = 0;
			while (iVar2 < Global_2635563.f_2791.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2635563.f_2791.f_3)
					{
						iVar2 = Global_2635563.f_2791.f_3 + 1;
					}
					if (iVar2 > (Global_2635563.f_2791.f_1 - 1))
					{
						iVar2 = (Global_2635563.f_2791.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x308E9BE8B02DA53E(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57,29578f);
					}
					else
					{
						unk_0x47B485915DC62445(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0xD47DD48CBAF4A6B5(iVar2);
					}
					else
					{
						unk_0xD0905E590E711B1A(iVar2, &iVar3);
					}
					func_140(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2635563.f_2791.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2635563.f_2791.f_1;
		}
		if (Global_2635563.f_2791.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2635563.f_3198)
			{
				func_134(&(Global_2635563.f_2791.f_6[0 /*10*/]), &(Global_2635563.f_2791.f_6[1 /*10*/]), &(Global_2635563.f_2791.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_81(Global_2635563.f_489))
			{
				if (Global_2635563.f_2791.f_2)
				{
					func_80(uParam0, &(Global_2635563.f_2791.f_6));
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
					func_82(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635563.f_2791.f_2)
			{
				func_80(uParam0, &(Global_2635563.f_2791.f_6));
				func_133(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2791.f_1);
				unk_0x308E9BE8B02DA53E(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_98(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
					func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
				func_82(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
				func_133(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
		if (uParam1->f_5 && func_81(Global_2635563.f_489))
		{
			if (!Global_2635563.f_2791.f_5)
			{
				Global_2635563.f_2791.f_5 = 1;
			}
			else
			{
				func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_82(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
		func_133(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_133(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635563.f_2925[(3 - iVar0) /*3*/] = { Global_2635563.f_2925[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635563.f_2925[0 /*3*/] = { Param0 };
}

void func_134(var uParam0, var uParam1, var uParam2)
{
	if (func_81(Global_2635563.f_489) && func_139() < 4096)
	{
		func_138(uParam0, 0f);
		func_138(uParam1, uParam0->f_2);
		func_138(uParam2, uParam1->f_2);
	}
	else
	{
		func_137(uParam0);
		func_136(uParam2, uParam0->f_4);
		func_135(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_135(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			fVar2 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param1);
			fVar3 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638815[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_136(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			fVar2 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638815[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_137(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638815[iVar0 /*10*/].f_1;
				Var2 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_138(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_2 < fVar1 && Global_2638815[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638815[iVar0 /*10*/].f_2;
				Var2 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_139()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638815[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_140(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2635563.f_489 == 1)
		{
			if (unk_0x1D5CD3EAAA7422B0((Global_2635563.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_198(unk_0x259BE71D8A81D4FA()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_197(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x830B1CF1020074B8(unk_0x4A8C381C258A124D(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x830B1CF1020074B8(unk_0x4A8C381C258A124D(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_196(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (system::vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!system::vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((system::vmag(uParam3->f_23) > 0f && system::vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x26715B0ED6702C87(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_190(Param0, fParam1, uParam2->f_15, func_195(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635563.f_3;
		}
	}
	else if (!func_187(Param0, 25f, unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_183(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_183(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2635563.f_701)
		{
			Var12 = { Global_2635563.f_512 };
			if (Global_2635563.f_489 == 26)
			{
				Var12 = { Global_2635563.f_555.f_18 };
			}
			if (!func_114(Param0, 0,5f))
			{
				if (func_120(Var12))
				{
					if (!func_83(&Param0, 0, 0, 0, 1) && !func_182(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_182(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_181(Param0, 2,5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_180(unk_0x259BE71D8A81D4FA()) && func_179(unk_0x259BE71D8A81D4FA())))
		{
			if (!func_178(&Param0, &(Global_2635563.f_2791.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_179(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_177(Param0, &(Global_2635563.f_2791.f_57), &(Global_2635563.f_2791.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_176(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_81(Global_2635563.f_489))
			{
				if (func_123(Param0, 0,01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_175(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635563.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2635563.f_701)
		{
			if (!func_115(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_98(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_122(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_174(Param0, &Var15, &Var16, &fVar17);
			if (!func_169(&(Global_2635563.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_101(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0,3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x913602ADD2D86A7A(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_168(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2635563.f_3198 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_159(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_159(Param0, Global_2635563.f_2766, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_81(Global_2635563.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = func_157(Param0);
			}
			uVar7 = func_146(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_145(Var19);
			Global_2635563.f_2791.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2635563.f_2791.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_159(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_159(Param0, Global_2635563.f_2766, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_81(Global_2635563.f_489) && iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_157(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2635563.f_2791.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_144(Var19, iVar18);
							Global_2635563.f_2791.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635563.f_2791.f_6[iVar18 /*10*/] || (iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/] && fVar0 > Global_2635563.f_2791.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_144(Var19, iVar18);
						Global_2635563.f_2791.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_142(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_146(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_141(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_141(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2635563.f_2791.f_6[iVar18 /*10*/] || (iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/] && fVar3 > Global_2635563.f_2791.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_144(Var19, iVar18);
						Global_2635563.f_2791.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_141(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_142(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				if (unk_0x7B780C491DEC834E(Param0, fParam1))
				{
					fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_209(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if (func_143(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam5 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
							{
								fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return system::sqrt(fVar3);
	}
	return -1f;
}

int func_143(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

void func_144(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635563.f_2791.f_6[iParam1 /*10*/] };
	Global_2635563.f_2791.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_144(Var0, iParam1 + 1);
	}
}

void func_145(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_139();
	if (Param0.f_0 > iVar2)
	{
		iVar2 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] < iVar2)
		{
			Global_2638815[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] == 0)
		{
			Global_2638815[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999,9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2638815[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2638815[iVar4 /*10*/] = { Param0 };
	}
}

float func_146(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1) || (iParam5 == 1 && func_6(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x259BE71D8A81D4FA() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_147(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x1864096A95E36EBA(iVar7) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
					{
						if (!unk_0x1864096A95E36EBA(iVar7) == -1 || !func_124(unk_0x259BE71D8A81D4FA(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar7) || !bParam4)
					{
						if (func_143(iVar7))
						{
							Var5 = { func_8(iVar7) };
							if (!iVar7 == unk_0x259BE71D8A81D4FA())
							{
								Var6 = { unk_0x4D867CF71882EEA6(unk_0x56E414973C2A8C0E(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var5, 1);
							fVar2 = unk_0xED977E2AE2CB16EE(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_147(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_155(iParam0))
		{
			if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (!unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
				{
					if (func_110(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_152(unk_0x1864096A95E36EBA(iParam0), unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
				{
					if (!func_110(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_148(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (func_151(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_150(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_149(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (func_14(iVar0))
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_150(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_151(int iParam0, int iParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_150(iParam0) };
		Global_2707320 = { func_150(iParam1) };
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

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
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

int func_153(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		if (((!func_6(iVar1, 1, 1) || func_209(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_154(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
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

var func_154(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_155(int iParam0)
{
	if (func_209(iParam0, 0))
	{
		return 1;
	}
	if (func_156())
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

bool func_156()
{
	return BitTest(Global_2621446, 3);
}

float func_157(struct<3> Param0)
{
	var uVar0;
	
	return func_158(Param0, &(Global_2635563.f_45), &uVar0);
}

float func_158(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = system::vdist(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635563.f_3035) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_159(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (system::to_float(iParam5) / system::to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_141(system::vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_146(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_141(fVar4, 0f, func_167(), func_165(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_163(Param0);
	fVar0 = func_141(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && !func_124(unk_0x259BE71D8A81D4FA(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_161(Param0, unk_0x259BE71D8A81D4FA(), 0);
	fVar0 = func_141(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_160(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_141(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_141(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_141(system::vdist(Global_2635563.f_512, Param0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_160(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = unk_0x990DA6AEDBBBA89A(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x2EE1ADDFD32F7C35(uVar1))
	{
		unk_0xAAB540AD076E01F8(uVar1, &Var0);
		*uParam1 = system::vdist(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam2 = unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_161(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999,9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(iVar3) != unk_0x1864096A95E36EBA(iParam1) || (unk_0x1864096A95E36EBA(iVar3) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1))
					{
						if (!func_162(iVar3, iParam1))
						{
							if (Global_2648938.f_261[iVar2])
							{
								fVar1 = system::vdist(Global_2648938.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_14(iParam0) && func_14(iParam1))
	{
		iVar0 = func_12(iParam0);
		if (iVar0 != func_13())
		{
			return iVar0 == func_12(iParam1);
		}
	}
	return 0;
}

float func_163(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xFC8BFE4B41177C22(uVar4[iVar2]))
		{
			if (!unk_0x1C2F771CDC87A3A5(uVar4[iVar2], 0))
			{
				if (func_164(uVar4[iVar2]))
				{
					Var3 = { unk_0xD1A6A821F5AC81DB(uVar4[iVar2], 1) };
					fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635563.f_3243)
	{
		if (Global_1058116.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058116.f_267)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_152[iVar2]))
				{
					if (!unk_0x1C2F771CDC87A3A5(Global_1058116.f_152[iVar2], 0))
					{
						if (func_164(Global_1058116.f_152[iVar2]))
						{
							Var3 = { unk_0xD1A6A821F5AC81DB(Global_1058116.f_152[iVar2], 1) };
							fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_164(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x2A661A0285B74A27(uParam0);
	switch (unk_0x048553DADAD2512F(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xB2AE1A67479A5AF3(Global_1837276[unk_0x259BE71D8A81D4FA()]))
	{
		switch (unk_0x048553DADAD2512F(uVar0, Global_1837276[unk_0x259BE71D8A81D4FA()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0)
	{
		iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xB2AE1A67479A5AF3(Global_1836986[iVar1]))
			{
				switch (unk_0x048553DADAD2512F(uVar0, Global_1836986[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_165()
{
	if (func_166())
	{
		if ((unk_0x00C6FDED3EB75117(Global_2635563.f_45.f_67) || unk_0xBA16CD57E37AC32A(Global_2635563.f_45.f_67)) || Global_2635563.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_166()
{
	if (Global_2635563.f_45.f_65 && !Global_2635563.f_45.f_304)
	{
		if (!func_155(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	return 0;
}

float func_167()
{
	if (func_166())
	{
		if ((unk_0x00C6FDED3EB75117(Global_2635563.f_45.f_67) || unk_0xBA16CD57E37AC32A(Global_2635563.f_45.f_67)) || Global_2635563.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_168(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x913602ADD2D86A7A(Param0, fParam5)) || (fVar0 > 0f && unk_0x2DBCF31839B069B4(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x80F249EA6DFE8476(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x80F249EA6DFE8476(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_169(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_173(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_172(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_170(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_170(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_171(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_171(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0,01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_87(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(system::vmag(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0,5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 };
}

int func_172(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.f_0, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.f_0, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.f_0, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_173(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_174(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_100(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642438[iVar2])
	{
		if (func_99(Var1, &(Global_2641042[iVar2 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2641042[iVar2 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642438[8])
	{
		if (func_99(Var1, &(Global_2641042[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2641042[8 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2641042[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2641042[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_175(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2635563.f_45.f_55)
	{
		if (unk_0xF8A8852F99E201DD(Global_2635563.f_45.f_56))
		{
			if (!unk_0x7830326EF9D54DBB(Param0))
			{
				uVar0 = unk_0x0E171121A3A25363(Param0);
				if (unk_0xF8A8852F99E201DD(uVar0))
				{
					iVar1 = unk_0x1F6CFCD52206CDB0(uVar0);
					if (!iVar1 == Global_2635563.f_45.f_57)
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
		}
	}
	return 1;
}

int func_176(struct<3> Param0)
{
	switch (Global_2635563.f_2787)
	{
		case 0:
			return func_212(Param0, Global_2635563.f_2766, Global_2635563.f_2769, 0, 0);
			break;
		
		case 1:
			return func_128(Param0, Global_2635563.f_2780, Global_2635563.f_2783, 0, 0);
			break;
		
		case 2:
			return unk_0x26715B0ED6702C87(Param0, Global_2635563.f_2780, Global_2635563.f_2783, Global_2635563.f_2786, 0, 1);
			break;
	}
	return 0;
}

int func_177(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (system::vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x26715B0ED6702C87(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_178(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (system::vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_89(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (func_126())
	{
		case 0:
			if (!func_29(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_180(int iParam0)
{
	if (func_110(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_181(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (system::vdist2(Global_2635563.f_2925[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_116(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xD2AA6F822D3A55D2(0,01f, 360f);
			func_89(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 0, fVar2);
			if (func_117(Var1, &uVar0) || func_116(Var1))
			{
				Var1 = { *uParam0 };
				func_89(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_184(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_6(iVar1, 1, 1))
		{
			if (!func_209(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_143(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
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
								if (unk_0xED977E2AE2CB16EE(func_184(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_184(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

Vector3 func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_186() && Global_1845281[iVar0 /*883*/].f_860) && !func_185(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_8(iParam0);
}

int func_185(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_186()
{
	return Global_2684504.f_19;
}

int func_187(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_189(Param0, fParam1, iParam2, iParam3, 0) || func_188(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_188(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_102(Param0, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_189(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2648938.f_261[iVar0])
					{
						if (system::vdist(Global_2648938.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648938.f_261[iVar0])
				{
					if (system::vdist(Global_2648938.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (system::vdist(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_190(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2635563.f_3 = 0;
	if (!func_187(Param0, 0,5f, unk_0x259BE71D8A81D4FA(), 0, 0))
	{
		Global_2635563.f_3++;
		if (bParam3)
		{
			if (func_242(Param0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
				if (!func_194(Param0, fParam10))
				{
					Global_2635563.f_3++;
					if (!func_101(Param0, 1056964608))
					{
						Global_2635563.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_242(Param0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
				if (!func_194(Param0, fParam10))
				{
					Global_2635563.f_3++;
					if (!func_191(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2635563.f_3++;
						if (!func_101(Param0, 1056964608))
						{
							Global_2635563.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			}
		}
		else if (func_242(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			if (!func_194(Param0, fParam10))
			{
				Global_2635563.f_3++;
				if (!func_191(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2635563.f_3++;
					if (!func_101(Param0, 1056964608))
					{
						Global_2635563.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
		}
	}
	return 0;
}

int func_191(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x259BE71D8A81D4FA() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_143(iVar1)) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (!func_193(unk_0x259BE71D8A81D4FA(), iVar1, -2, 0))
				{
					if (func_192(func_8(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_192(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.f_0 = system::sin(fParam2);
	Var0.f_1 = system::cos(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x26715B0ED6702C87(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_193(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_194(struct<3> Param0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_143(iVar1)) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
		{
			if ((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && unk_0x1864096A95E36EBA(iVar1) == -1) && !func_124(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 0;
			}
			else if ((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && !unk_0x259BE71D8A81D4FA() == iVar1) || !func_193(unk_0x259BE71D8A81D4FA(), iVar1, -2, 0))
			{
				if (system::vdist(Param0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_195(int iParam0)
{
	if ((Global_2635563.f_489 == 9 || Global_2635563.f_489 == 9) || (Global_2635563.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_143(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam7) && bParam4) && func_148(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_8(iVar1), Param0, 1) < fParam1)
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

int func_197(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_209(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1)) && iVar1 != unk_0x259BE71D8A81D4FA())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x1864096A95E36EBA(iVar1) == iVar3)
					{
						if (unk_0xED977E2AE2CB16EE(func_8(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (((func_124(iParam0, 1) || func_200(iParam0)) || func_34(iParam0, 0)) || func_199(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2);
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

void func_201(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_4544411[iVar1 /*26*/].f_12, 11))
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_4544411[iVar1 /*26*/].f_3, Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4544411[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4544411[iVar1 /*26*/].f_6.f_2;
					func_203(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_262145.f_6218[iVar1 /*3*/], Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6218[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_203(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_262145.f_6276[iVar1 /*19*/][iVar2 /*3*/], Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6276[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_203(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (system::vmag(*(uParam2[iVar0 /*10*/])) == 0f || system::vdist(Var5, Param0) < system::vdist(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_4544087[iVar1 /*3*/] };
				func_202(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_202(var uParam0, var uParam1, int iParam2)
{
	Global_2643444 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_202(&Global_2643444, uParam1, iParam2 + 1);
	}
}

void func_203(var uParam0, var uParam1, int iParam2)
{
	Global_2643440 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_203(&Global_2643440, uParam1, iParam2 + 1);
	}
}

void func_204(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2635563.f_2562 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635563.f_2562)
		{
			if (func_205(Global_2635563.f_2563[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2635563.f_2563[iVar0 /*4*/].f_3;
				if (system::vmag(*uParam1) > 0,01f)
				{
					Var1 = { *uParam1 - Global_2635563.f_2563[iVar0 /*4*/] };
					fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
				}
				func_140(Global_2635563.f_2563[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635563.f_2791++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635563.f_3198)
	{
		func_134(&(Global_2635563.f_2791.f_6[0 /*10*/]), &(Global_2635563.f_2791.f_6[1 /*10*/]), &(Global_2635563.f_2791.f_6[2 /*10*/]));
	}
}

int func_205(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_93(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_93(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_206(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_129(&Param0, &Param1);
	fVar0 = (Param1.f_0 - Param0.f_0);
	*uParam2 = (Param0.f_0 + (fVar0 * 0,5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0,5f);
}

var func_207()
{
	return Global_1573131.f_4;
}

void func_208(var uParam0, var uParam1)
{
	func_249();
	func_241(uParam0, uParam1);
}

bool func_209(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_210(-1, 0) == 8;
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

int func_210(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_211();
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

int func_211()
{
	return Global_1574926;
}

bool func_212(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
}

void func_213(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635563.f_2054 > 0)
	{
		iVar0 = 0;
		while (func_235(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_214(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_214(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!system::vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_113(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_234(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2,75f;
			fVar12 = 7,5f;
			break;
		
		default:
			fVar11 = 2,5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2643454.f_162 = 0;
	Global_2643454.f_163 = 0;
	Global_2643454.f_164 = -99;
	Global_2643454.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2643454[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2643454.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_107(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x990DA6AEDBBBA89A(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x2EE1ADDFD32F7C35(iVar6))
		{
			unk_0xAAB540AD076E01F8(iVar6, &Var1);
			bVar10 = false;
			if (Global_2643454.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2643454.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xD2507ABB3A05C571(iVar6)) || unk_0x8D4953B2FFED058B(iVar6))
			{
				unk_0x99FBD9356770254E(Var1, &uVar4, &uVar5);
				if (system::vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_182(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_233(Var1))
									{
										Var1 = { func_229(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (system::vmag(Var1) > 0f)
										{
											if (!func_101(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_228(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_234(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (system::vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && system::vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_224(Var1, fVar2, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_113(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0,375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_223(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_242(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_242(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_221(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_220(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643454.f_162)
																										{
																											Global_2643454[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2643454.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2643454.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643454.f_162 == 0)
																									{
																										Global_2643454[0 /*3*/] = { Var1 };
																										Global_2643454.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643454.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (system::vdist2(Var1, uParam2->f_35) < system::vdist2(Global_2643454[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_219(Var1, fVar2, iVar14);
																													iVar14 = Global_2643454.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2643454.f_162++;
																									if (Global_2643454.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643454.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643454[Global_2643454.f_162 /*3*/] = { Var1 };
																									Global_2643454.f_121[Global_2643454.f_162] = fVar2;
																									Global_2643454.f_162++;
																									if (func_228(Var1, uParam2))
																									{
																										Global_2643454.f_163++;
																									}
																									if (Global_2643454.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643454.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2643454.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643454[0 /*3*/] };
						*uParam1 = Global_2643454.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643454.f_163 > 0 && !Global_2643454.f_163 == Global_2643454.f_162)
						{
							func_217(0, uParam2);
						}
						iVar24 = unk_0xC5935DFB3F39785A(0, Global_2643454.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2643454[0 /*3*/] };
						uVar26 = Global_2643454.f_121[0];
						Global_2643454[0 /*3*/] = { Global_2643454[iVar24 /*3*/] };
						Global_2643454.f_121[0] = Global_2643454.f_121[iVar24];
						Global_2643454[iVar24 /*3*/] = { Var25 };
						Global_2643454.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2643454[0 /*3*/] };
						*uParam1 = Global_2643454.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_216(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_113(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_234(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_215(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643454.f_164 = iVar6;
	}
	return 0;
}

void func_215(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = system::vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_187(*(uParam0[iVar2 /*4*/]), 5f, unk_0x259BE71D8A81D4FA(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_216(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xC5935DFB3F39785A((1 + iParam0), (40 + iParam0));
		if (unk_0x6009FBA2EAAA60BE(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (system::vmag(*uParam3) > 0f)
			{
				*uParam3 = { func_229(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_233(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_217(int iParam0, var uParam1)
{
	if (!func_228(Global_2643454[iParam0 /*3*/], uParam1))
	{
		Global_2643454.f_162 = (Global_2643454.f_162 - 1);
		func_218(iParam0);
		if (Global_2643454.f_162 > Global_2643454.f_163)
		{
			func_217(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_217(iParam0 + 1, uParam1);
	}
}

void func_218(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643454[iParam0 /*3*/] = { Global_2643454[iParam0 + 1 /*3*/] };
			Global_2643454.f_121[iParam0] = Global_2643454.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_219(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2643454[iParam2 /*3*/] };
	uVar1 = Global_2643454.f_121[iParam2];
	Global_2643454[iParam2 /*3*/] = { Param0 };
	Global_2643454.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2643454.f_162 && iParam2 < 39)
	{
		if (system::vmag(Var0) > 0f)
		{
			func_219(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_220(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_147(iVar3))
		{
			Var1 = { func_8(iVar3) };
			fVar5 = system::vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_221(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam6 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_143(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam8) && bParam5) && func_148(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar1), 0))
								{
									iVar3 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar1), 0);
									if (unk_0xFC8BFE4B41177C22(iVar3) && !unk_0x1C2F771CDC87A3A5(iVar3, 0))
									{
										iVar4 = unk_0x4B423FAA24E8ABF0(iVar3);
										Var5 = { unk_0xD1A6A821F5AC81DB(iVar3, 0) };
										fVar6 = unk_0xCFC0C995455A6204(iVar3);
										if (func_222(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_102(func_8(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_222(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_102(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_103(Param0, fParam1, iParam2, &Global_1975334, &(Global_1975334.f_3), &(Global_1975334.f_6), 1036831949);
	func_103(Param3, fParam4, iParam5, &(Global_1975334.f_7), &(Global_1975334.f_10), &(Global_1975334.f_13), 1036831949);
	if (unk_0x298E7BBD04F29848(Global_1975334, Global_1975334.f_3, Global_1975334.f_6, Global_1975334.f_7, Global_1975334.f_10, Global_1975334.f_13))
	{
		return 1;
	}
	return 0;
}

int func_223(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_222(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_222(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_224(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_227(Param0, fParam1, iParam2, iParam3, iParam4) || func_225(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_225(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_226(Param0, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_222(Param0, fParam1, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_226(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_109(iParam1, 1008981770);
	fVar1 = func_109(iParam3, 1008981770);
	fVar2 = system::vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_227(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2648938.f_261[iVar0])
				{
					if (func_102(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_102(func_8(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648938.f_261[iVar0])
			{
				if (func_102(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
				{
					if (func_102(func_8(iVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_228(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_212(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_128(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_229(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (system::vmag(Param4) > 0f)
		{
			if (!func_232(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x99FBD9356770254E(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x748728E3BFD8E371(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xBA16CD57E37AC32A(iParam7) && func_231(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar4) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar5) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0,95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0,5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4,2f * -0,5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_230(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_230(iParam7, 1,5f);
				}
				if (fVar10 > 1,8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (system::vmag(Param4) > 0f)
	{
		if (!func_232(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x5053D36357207FD6(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(system::vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_230(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_230(iParam7, 1,5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0,5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_230(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_104(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_231(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xB1EAADCB692D69CE(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_232(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_90(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_86(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_233(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_100(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643161[iVar1])
	{
		if (func_99(Param0, &(Global_2642458[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643161[8])
	{
		if (func_99(Param0, &(Global_2642458[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635563.f_26.f_18)
	{
		switch (Global_2635563.f_26.f_17)
		{
			case 0:
				if (func_212(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_128(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, Global_2635563.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_91(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, Global_2635563.f_26.f_16, Global_2635563.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_235(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2635563.f_2054 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!system::vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_113(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_234(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2643454.f_162 = 0;
		Global_2643454.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2643454[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2643454.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_238(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_237();
		}
		else
		{
			func_236();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635563.f_2054)
		{
			iVar2 = Global_2635563.f_2460[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635563.f_2055[iVar2 /*4*/] };
				fVar4 = Global_2635563.f_2055[iVar2 /*4*/].f_3;
				if (system::vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && system::vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && system::vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_224(Var3, fVar4, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_113(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0,375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0,375f);
												}
											}
										}
										bVar10 = false;
										if (!func_223(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_242(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_242(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_221(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_220(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2643454.f_162)
															{
																Global_2643454[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2643454.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2643454.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643454.f_162 == 0)
														{
															Global_2643454[0 /*3*/] = { Var3 };
															Global_2643454.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2643454.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (system::vdist2(Var3, uParam2->f_35) < system::vdist2(Global_2643454[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_219(Var3, fVar4, iVar5);
																		iVar5 = Global_2643454.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2643454.f_162++;
														if (Global_2643454.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635563.f_2054;
															}
															else if (Global_2643454.f_162 == 40)
															{
																iVar1 = Global_2635563.f_2054;
															}
														}
													}
													else
													{
														Global_2643454[Global_2643454.f_162 /*3*/] = { Var3 };
														Global_2643454.f_121[Global_2643454.f_162] = fVar4;
														Global_2643454.f_162++;
														if (Global_2643454.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635563.f_2054;
															}
															else if (Global_2643454.f_162 == 40)
															{
																iVar1 = Global_2635563.f_2054;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643454.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643454[0 /*3*/] };
				*uParam1 = Global_2643454.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643454.f_163 > 0 && !Global_2643454.f_163 == Global_2643454.f_162)
				{
					func_217(0, uParam2);
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2643454.f_162);
				Var13 = { Global_2643454[0 /*3*/] };
				uVar14 = Global_2643454.f_121[0];
				Global_2643454[0 /*3*/] = { Global_2643454[iVar0 /*3*/] };
				Global_2643454.f_121[0] = Global_2643454.f_121[iVar0];
				Global_2643454[iVar0 /*3*/] = { Var13 };
				Global_2643454.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2643454[0 /*3*/] };
				*uParam1 = Global_2643454.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635563.f_2054 > 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
				*uParam0 = { Global_2635563.f_2055[iVar0 /*4*/] };
				*uParam1 = Global_2635563.f_2055[iVar0 /*4*/].f_3;
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

void func_236()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		Global_2635563.f_2460[iVar0] = iVar0;
		iVar0++;
	}
}

void func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		Global_2635563.f_2460[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
		iVar2 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
		uVar3 = Global_2635563.f_2460[iVar1];
		Global_2635563.f_2460[iVar1] = Global_2635563.f_2460[iVar2];
		Global_2635563.f_2460[iVar2] = uVar3;
		iVar0++;
	}
}

void func_238(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635563.f_2054)
	{
		uVar1 = func_239(Param0, fVar0, &fVar0);
		Global_2635563.f_2460[iVar2] = uVar1;
		iVar2++;
	}
}

int func_239(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635563.f_2054)
	{
		fVar2 = system::vdist2(Param0, Global_2635563.f_2055[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_240(int iParam0)
{
	return iParam0 == 50;
}

void func_241(var uParam0, var uParam1)
{
	unk_0x8998A86E45C5155C(uParam0, uParam1, 0,1f);
	Global_2635563.f_2774 = unk_0x8F76B2250AC806FA();
	Global_2635563.f_2772 = 1;
	Global_2635563.f_2775 = unk_0x7E3F74F641EE6B27();
}

int func_242(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635563.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam12 > 0f)
	{
		if (func_196(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_183(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

void func_243()
{
	func_248();
	func_247();
	func_246();
	func_245();
	func_244();
}

void func_244()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2638815[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_245()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2635563.f_2791.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_246()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2635563.f_2791.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_247()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2635563.f_2791.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_248()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635563.f_2791 = { Var0 };
}

void func_249()
{
	if (Global_2635563.f_2772)
	{
		if (unk_0x8F76B2250AC806FA() == Global_2635563.f_2774)
		{
			unk_0x81F9331288182129();
		}
		else
		{
			unk_0x81F9331288182129();
		}
		Global_2635563.f_2772 = 0;
	}
}

int func_250(bool bParam0)
{
	if (unk_0x15CCE8886267624F())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_62.f_49;
			break;
	}
	return 0;
}

int func_253()
{
	if (bLocal_68 == 0)
	{
		if (BitTest(Local_62.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!BitTest(Local_62.f_2, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), false);
		if (bLocal_68 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_70, 1, 1))
		{
			if (unk_0xA0522491D076C1E6(false, 0) - unk_0x594FD1B13DCC309E(0)) >= func_504(bLocal_68)
			{
				if (unk_0xADCE9BCAFCB83364(func_504(bLocal_68)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x56E414973C2A8C0E(iLocal_70);
					iVar3 = unk_0xAA3F0A9E20917995(iVar2, &uLocal_251, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_504(bLocal_68))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x2FC2FDC413532977(Local_62.f_10[iVar1 /*7*/]) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0xFC8BFE4B41177C22(uLocal_251[iVar0]))
								{
									if (!unk_0x1C2F771CDC87A3A5(uLocal_251[iVar0], 0))
									{
										if (!unk_0x501EBB0523078750(uLocal_251[iVar0]))
										{
											if (func_256(unk_0x4B423FAA24E8ABF0(uLocal_251[iVar0])))
											{
												if (!unk_0x110821AE6C63DD4F(uLocal_251[iVar0]))
												{
													if (!unk_0x7F420695E3F776FB(uLocal_251[iVar0], 0))
													{
														if (func_5(unk_0xD1A6A821F5AC81DB(uLocal_251[iVar0], 1), unk_0xD1A6A821F5AC81DB(iVar2, 1), 625f))
														{
															unk_0xEE0BCDB1B5E36BCB(uLocal_251[iVar0], 1, 0);
															Local_62.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_62.f_1, 12))
															{
																Local_62.f_8 = uLocal_73;
																unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_62.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_504(bLocal_68))
		{
			if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x110821AE6C63DD4F(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x1B1A446EFA398EB5(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xF093E270C0B6B318(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x1834D30866818A23(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6], 1);
							Local_62.f_10[iVar6 /*7*/] = unk_0x9F7A52B1537567AC(uLocal_251[Local_62.f_10[iVar6 /*7*/].f_6]);
							unk_0x3C1752E361ED8FC9(Local_62.f_10[iVar6 /*7*/], 1);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iVar6 /*7*/].f_2), false);
							Local_62.f_10[iVar6 /*7*/].f_1 = bLocal_68;
							Local_62.f_10[iVar6 /*7*/].f_4 = func_76(bLocal_68);
							func_74(iVar6);
							unk_0x8744D2E3FC95740E(&(Local_62.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x775142054EC39277(uLocal_73, Local_62.f_8) > 5000)
		{
			if (iVar7 >= func_504(bLocal_68))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_251[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_504(bLocal_68))
			{
				if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_255(&(Local_62.f_10[iVar6 /*7*/]));
					unk_0x8744D2E3FC95740E(&(Local_62.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x8744D2E3FC95740E(&(Local_62.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_255(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

int func_256(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01")) || func_257(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_chimp"):
		case joaat("a_c_chimp_02"):
		case joaat("a_c_chop"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_crow"):
		case joaat("a_c_deer"):
		case joaat("a_c_dolphin"):
		case joaat("a_c_fish"):
		case joaat("a_c_hen"):
		case joaat("a_c_humpback"):
		case joaat("a_c_husky"):
		case joaat("a_c_killerwhale"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_rabbit_02"):
		case joaat("a_c_rat"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rhesus"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_seagull"):
		case joaat("a_c_sharkhammer"):
		case joaat("a_c_sharktiger"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_stingray"):
		case joaat("a_c_westy"):
		case joaat("ig_orleans"):
			return 1;
		
		default:
	}
	return 0;
}

int func_258()
{
	if (BitTest(Local_62.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_68 == 0)
	{
		Local_62.f_49 = func_259(Local_62.f_36, 1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 6);
		return 1;
	}
	return 0;
}

int func_259(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	if (func_260(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_260(Param0, 1100f, -196f, 300f, 350f, 0) || func_260(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_260(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_260(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_260(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_260(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_260(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_260(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	return unk_0xED977E2AE2CB16EE(Param0, Param1, iParam3) <= fParam2;
}

void func_261(int iParam0)
{
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
	}
	Local_62.f_36 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	if (func_262(iParam0, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 17);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Local_62.f_1), 17);
	}
}

int func_262(int iParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) || iParam1)
		{
			if (unk_0x69799E0840A34AFB(iParam0))
			{
				if (unk_0x837FF265C016E3B7(iParam0) >= 0,7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_263()
{
	bool bVar0;
	
	if (unk_0x93E08E0F531E2C35())
	{
		if (BitTest(Local_62.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_68)
			{
				case 0:
					if (BitTest(Local_62.f_2, 11))
					{
						if (func_6(iLocal_70, 1, 1))
						{
							if (system::vdist2(func_8(iLocal_70), Local_62.f_39) > 625f)
							{
								unk_0x8744D2E3FC95740E(&(Local_62.f_2), 11);
								unk_0x8744D2E3FC95740E(&iLocal_65, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_70, 1, 1))
						{
							bVar0 = true;
							if (func_266())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_69();
						}
						else
						{
							func_70();
						}
						if (BitTest(Local_62.f_1, 5))
						{
							if (func_265())
							{
								func_70();
								unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_70, 1, 1))
					{
						bVar0 = true;
						if (func_264())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_69();
					}
					else
					{
						func_70();
					}
					if (BitTest(Local_62.f_1, 5))
					{
						if (unk_0x775142054EC39277(uLocal_73, Local_62.f_5) > 30000)
						{
							func_70();
							unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_264()
{
	int iVar0;
	
	iVar0 = unk_0x56E414973C2A8C0E(iLocal_70);
	if (((((unk_0x3F18810075C77D41(iVar0) || unk_0x69799E0840A34AFB(iVar0)) || func_30(iLocal_70, 1, 1)) || func_48(iLocal_70, 0)) || func_48(iLocal_70, 7)) || func_29(iLocal_70))
	{
		return 1;
	}
	if (func_124(iLocal_70, 1))
	{
		if (iLocal_70 > -1)
		{
			if (Global_1845281[iLocal_70 /*883*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265()
{
	if (!BitTest(Local_62.f_1, 18))
	{
		if (unk_0x775142054EC39277(uLocal_73, Local_62.f_5) > 5000)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x775142054EC39277(uLocal_73, Local_62.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	int iVar0;
	
	iVar0 = unk_0x56E414973C2A8C0E(iLocal_70);
	if (((((((((unk_0xDF93B3CFAC96698F(iVar0) > 10f || unk_0x3F18810075C77D41(iVar0)) || unk_0x69799E0840A34AFB(iVar0)) || func_30(iLocal_70, 1, 1)) || func_68(iLocal_70)) || func_48(iLocal_70, 0)) || func_48(iLocal_70, 7)) || func_29(iLocal_70)) || Global_2657971[iLocal_70 /*465*/].f_249) || func_67(unk_0x56E414973C2A8C0E(iLocal_70), joaat("titan")))
	{
		return 1;
	}
	if (func_124(iLocal_70, 1))
	{
		if (iLocal_70 > -1)
		{
			if (Global_1845281[iLocal_70 /*883*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_70 != -1)
	{
		if (BitTest(Local_64[iLocal_70 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_267()
{
	if (!BitTest(Local_62.f_1, 14))
	{
		Local_62.f_9 = uLocal_73;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 14);
	}
}

void func_268()
{
	if (Local_62.f_44 != Local_64[iLocal_69 /*5*/].f_4)
	{
		Local_62.f_44 = Local_64[iLocal_69 /*5*/].f_4;
	}
}

void func_269()
{
	if (!BitTest(Local_62.f_1, 10))
	{
		Local_62.f_45 = func_504(bLocal_68);
		Local_62.f_46 = 0;
		Local_62.f_47 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_1), 10);
	}
}

void func_270()
{
	func_271();
	if (!BitTest(Local_62.f_1, 8))
	{
		if (BitTest(Local_62.f_2, 7))
		{
			if (unk_0x775142054EC39277(uLocal_73, Local_62.f_7) > 300000)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 8);
			}
		}
	}
}

void func_271()
{
	if (!BitTest(Local_62.f_2, 7))
	{
		Local_62.f_7 = uLocal_73;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 7);
	}
}

void func_272()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
	if (BitTest(Local_62.f_3, 1))
	{
	}
	if (BitTest(Local_62.f_3, 2))
	{
	}
	if (BitTest(Local_62.f_3, 3))
	{
	}
	if (BitTest(Local_62.f_3, 9))
	{
	}
	if (BitTest(Local_62.f_3, 4))
	{
	}
	if (BitTest(Local_62.f_3, 5))
	{
	}
	if (BitTest(Local_62.f_3, 11))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 7);
			if (Local_62.f_50 || Local_62.f_52)
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
			}
			else if (func_397("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
			}
		}
	}
	if (BitTest(Local_62.f_3, 6))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 7);
			if (Local_62.f_50 || Local_62.f_52)
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
			}
			else if (func_397("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
			}
		}
	}
	if (BitTest(Local_62.f_3, 7))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 7);
			if (func_351())
			{
				if (!Local_62.f_50)
				{
					if (Local_62.f_52)
					{
						iLocal_252 = func_350(Local_62.f_53);
					}
					else
					{
						iLocal_252 = func_346(12);
					}
					if (iLocal_252 > 0)
					{
						func_344(iLocal_252, 1, 0, 0f);
						func_329(iLocal_252, 4, 1, 1);
					}
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 0))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				unk_0x8744D2E3FC95740E(&iLocal_65, 7);
				if (func_397("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
			}
		}
		else if (unk_0x259BE71D8A81D4FA() == iLocal_70)
		{
			if (BitTest(Local_62.f_2, 1))
			{
				if (BitTest(Local_62.f_2, 12))
				{
					iVar0 = system::round((IntToFloat(Global_262145.f_7176) * Global_262145.f_3987));
					func_288(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_274(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 8))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 7);
			if (func_351())
			{
				if (bLocal_68 == 0)
				{
					iLocal_252 = (func_346(2) * func_504(bLocal_68));
					iVar1 = 3;
				}
				else
				{
					if (Local_62.f_52)
					{
						iLocal_252 = func_350(Local_62.f_53);
					}
					else
					{
						iLocal_252 = func_346(12);
					}
					iVar1 = 4;
				}
				if (!Local_62.f_50)
				{
					if (iLocal_252 > 0)
					{
						func_344(iLocal_252, 1, 0, 0f);
						func_329(iLocal_252, iVar1, 1, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 10))
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 7);
			if (func_351())
			{
				if (bLocal_68 == 0)
				{
					iLocal_252 = (func_346(2) * func_504(bLocal_68));
					iVar2 = 3;
				}
				else
				{
					if (Local_62.f_52)
					{
						iLocal_252 = func_350(Local_62.f_53);
					}
					else
					{
						iLocal_252 = func_346(12);
					}
					iVar2 = 4;
				}
				if (!Local_62.f_50)
				{
					if (iLocal_252 > 0)
					{
						func_344(iLocal_252, 1, 0, 0f);
						func_329(iLocal_252, iVar2, 1, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_65, 7))
	{
		func_273();
	}
}

void func_273()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x383461852896D73D() /*883*/].f_141), bLocal_68);
	Global_1845281[unk_0x383461852896D73D() /*883*/].f_142 = -1;
	if (bLocal_68 == 1)
	{
		if (unk_0x5BA108AB15E668B7(uLocal_250))
		{
			unk_0x3D09B44C2ACEA592(uLocal_250);
		}
	}
	func_533();
	func_565();
}

int func_274(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_275(iParam0, iParam1);
}

int func_275(int iParam0, int iParam1)
{
	if (func_287(14) && !func_286(iParam0))
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
	if (func_285(&Global_4543384))
	{
		if (func_283(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_276(&Global_4543384, iParam0))
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

int func_276(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_287(14) && !func_286(iParam1))
	{
		return 0;
	}
	if (func_283(uParam0, iParam1))
	{
		return 0;
	}
	if (func_282(uParam0) < 0f)
	{
		func_281(uParam0, 0);
	}
	func_279(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_277(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_277(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_287(14) && !func_286(iParam1))
	{
		return 0;
	}
	if (func_283(uParam0, iParam1))
	{
		return 0;
	}
	if (func_282(uParam0) < 0f)
	{
		func_281(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_278(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_278(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_279(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_280(uParam0, iVar0);
		iVar0++;
	}
	func_281(uParam0, (Global_4543383 - 0,5f));
}

void func_280(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_281(var uParam0, float fParam1)
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

float func_282(var uParam0)
{
	return uParam0->f_80;
}

bool func_283(var uParam0, int iParam1)
{
	return func_284(uParam0, iParam1) != -1;
}

int func_284(var uParam0, int iParam1)
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

bool func_285(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_286(int iParam0)
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

bool func_287(int iParam0)
{
	return Global_44042 == iParam0;
}

var func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_289(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_289(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_290(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_290(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_321();
	if (func_320(uParam2))
	{
	}
	if (func_319())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_317(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_316(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_314(0, &iVar1);
					break;
				
				case 3:
					func_314(1, &iVar1);
					break;
				
				case 1:
					func_312(&iVar1);
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
			func_311(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_298((func_310(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_2 != -1)
				{
					func_311(1166, iVar1, -1);
				}
				func_295(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_291((func_293(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_291((func_293(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_291(int iParam0)
{
	if (func_319())
	{
		Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_5 = iParam0;
		func_292(joaat("mpply_globalxp"), iParam0);
	}
}

void func_292(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_293(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_294(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_294(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_294(int iParam0)
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

void func_295(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_150(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_296(func_297(&Var0));
			if (iVar1 == 0)
			{
				func_292(joaat("mpply_crew_local_xp_0"), (func_294(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar1 == 1)
			{
				func_292(joaat("mpply_crew_local_xp_1"), (func_294(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar1 == 2)
			{
				func_292(joaat("mpply_crew_local_xp_2"), (func_294(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar1 == 3)
			{
				func_292(joaat("mpply_crew_local_xp_3"), (func_294(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar1 == 4)
			{
				func_292(joaat("mpply_crew_local_xp_4"), (func_294(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_296(int iParam0)
{
	if (iParam0 == func_294(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_294(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_294(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_294(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_294(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_297(var uParam0)
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

void func_298(int iParam0, int iParam1, int iParam2)
{
	if (func_319())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_309(640, -1))
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_309(640, -1))
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
		if (func_308(unk_0x259BE71D8A81D4FA()))
		{
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_6 = func_305(iParam0, 1);
		}
		func_302(640, iParam0, -1, 1);
		func_302(641, func_305(iParam0, 1), -1, 1);
		func_299(-1109644434, 7, 0);
	}
}

void func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_301(iParam1, iParam2))
	{
		iVar0 = func_300();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_300()
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

int func_301(int iParam0, var uParam1)
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

void func_302(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_303(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_303(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_304(uParam1));
}

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_211();
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

int func_305(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_306(iParam0, 0);
}

int func_306(int iParam0, int iParam1)
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
		if (func_307(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_307(iVar3) < iParam0)
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

int func_307(int iParam0)
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

int func_308(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_309(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_303(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_309(640, -1);
			}
			else if (func_308(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_309(640, -1);
	}
	return 0;
}

void func_311(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_309(iParam0, func_304(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_302(iParam0, iVar0, iParam2, 1);
}

void func_312(int iParam0)
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
				if (unk_0x1864096A95E36EBA(iVar5) == iVar1 || func_152(unk_0x1864096A95E36EBA(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_151(unk_0x259BE71D8A81D4FA(), iVar5))
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
		iVar6 = system::round((func_313(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_313(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_313(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_314(bool bParam0, int iParam1)
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
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_151(unk_0x259BE71D8A81D4FA(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_315(unk_0x259BE71D8A81D4FA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_151(unk_0x259BE71D8A81D4FA(), iVar4))
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
		iVar5 = system::round((func_313(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_313(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_315(int iParam0, int iParam1)
{
	return system::vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_316(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_313(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_317(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_310(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_310(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_318(8000, 0, 0) > 0)
	{
		if (func_318(8000, 0, 0) < (iParam0 + func_310(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_318(8000, 0, 0) - func_310(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_318(int iParam0, bool bParam1, int iParam2)
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
	return func_307(iParam0);
}

int func_319()
{
	return 1;
}

int func_320(var uParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_321()
{
	int iVar0;
	
	if (func_328(unk_0x259BE71D8A81D4FA()) || func_327(unk_0x259BE71D8A81D4FA()))
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
	else if (func_325() || func_323(unk_0x259BE71D8A81D4FA()))
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
	else if (func_322(Global_4718592.f_185586))
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

bool func_322(int iParam0)
{
	return iParam0 == 89;
}

int func_323(int iParam0)
{
	return func_324(func_45(iParam0));
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_325()
{
	if (unk_0x834C960822A4683F())
	{
		return func_186();
	}
	return func_326(Global_4718592.f_127178);
}

int func_326(int iParam0)
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

bool func_327(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_328(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

void func_329(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_343(iParam1), 16);
	StringCopy(&Var1, func_342(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = joaat("service_earn_refund_backup_vagos");
			break;
		
		case 1:
			iVar2 = joaat("service_earn_refund_backup_lost");
			break;
		
		case 2:
			iVar2 = joaat("service_earn_refund_backup_families");
			break;
		
		case 3:
			iVar2 = joaat("service_earn_refund_hire_mugger");
			break;
		
		case 4:
			iVar2 = joaat("service_earn_refund_hire_mercenary");
			break;
		
		case 5:
			iVar2 = joaat("service_earn_refund_buy_cardropoff");
			break;
		
		case 6:
			iVar2 = joaat("service_earn_refund_heli_pickup");
			break;
		
		case 7:
			iVar2 = joaat("service_earn_refund_boat_pickup");
			break;
		
		case 8:
			iVar2 = joaat("service_earn_refund_clear_wanted");
			break;
		
		case 9:
			iVar2 = joaat("service_earn_refund_head_2_head");
			break;
		
		case 10:
			iVar2 = joaat("service_earn_refund_challenge");
			break;
		
		case 11:
			iVar2 = joaat("service_earn_refund_share_last_job");
			break;
		
		case 12:
			iVar2 = joaat("service_earn_refund_lottery");
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = joaat("service_earn_refundammodrop");
			break;
		
		case 15:
			iVar2 = joaat("service_earn_refund_orbital_manual");
			break;
		
		case 16:
			iVar2 = joaat("service_earn_refund_orbital_auto");
			break;
		
		case 17:
			iVar2 = joaat("service_earn_refund_arena_spec_box_entry");
			break;
	}
	if (func_57())
	{
		func_330(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4535950[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4535950[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x9CBD6E7B088910A1(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_330(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
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
				func_331(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_331(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_331(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_331(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_331(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_211()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_338(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_337(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_332(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_332(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_333(iParam0);
	}
}

void func_333(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_336(iParam0))
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
		func_334(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_334(var uParam0)
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
	func_335(&(uParam0->f_14));
	func_335(&(uParam0->f_14.f_13));
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

void func_335(var uParam0)
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

int func_336(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_337(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_338(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
				func_339(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_339(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_341(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_340();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_340()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_341(bool bParam0)
{
	var uVar0;
	
	if (func_14(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_344(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_4 = iVar1;
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 = (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_345(iVar1, 0);
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_349(iParam0) >= 0)
	{
		iVar0 = func_349(iParam0);
	}
	else
	{
		iVar0 = func_347(iParam0);
	}
	return iVar0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_348())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return 200;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return 400;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return 600;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return 800;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_348()
{
	return BitTest(func_309(6427, -1), 19);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7179;
			break;
		
		case 10:
			return Global_262145.f_3836;
			break;
		
		case 11:
			return Global_262145.f_3837;
			break;
		
		case 8:
			return Global_262145.f_3834;
			break;
		
		case 0:
			return Global_262145.f_3831;
			break;
		
		case 9:
			return Global_262145.f_3835;
			break;
		
		case 13:
			return Global_262145.f_3839;
			break;
		
		case 12:
			return Global_262145.f_3838;
			break;
		
		case 2:
			return Global_262145.f_3832;
			break;
		
		case 14:
			return Global_262145.f_3840;
			break;
		
		case 20:
			if (func_348())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return Global_262145.f_7186;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return Global_262145.f_7187;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return Global_262145.f_7188;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return Global_262145.f_7189;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return Global_262145.f_7190;
			}
			break;
		
		case 6:
			return Global_262145.f_3833;
			break;
		
		case 22:
			return Global_262145.f_3841;
			break;
		
		case 23:
			return Global_262145.f_3842;
			break;
		
		case 24:
			return Global_262145.f_3843;
			break;
		
		case 25:
			return Global_262145.f_3844;
			break;
		
		case 26:
			return Global_262145.f_3845;
			break;
		
		case 35:
			return Global_262145.f_7872;
			break;
		
		case 15:
			return Global_262145.f_7180;
			break;
		
		case 17:
			return Global_262145.f_7180;
			break;
		
		case 18:
			return Global_262145.f_7180;
			break;
		
		case 19:
			return Global_262145.f_7180;
			break;
		
		case 21:
			return Global_262145.f_7180;
			break;
		
		case 36:
			return Global_262145.f_8339;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13326;
			break;
		
		case 41:
			return Global_262145.f_13327;
			break;
		
		case 42:
			return Global_262145.f_13328;
			break;
		
		case 43:
			return Global_262145.f_15836;
			break;
		
		case 44:
			return Global_262145.f_15837;
			break;
		
		case 57:
			return Global_262145.f_3843;
			break;
		
		case 58:
			return Global_262145.f_25373;
			break;
		
		case 62:
			return Global_262145.f_25374;
			break;
		
		case 63:
			return Global_262145.f_28760;
			break;
		
		case 64:
			return Global_262145.f_7180;
			break;
		
		case 72:
			return Global_262145.f_25374;
			break;
		
		case 73:
			return Global_262145.f_31111;
			break;
		
		case 74:
			return Global_262145.f_31113;
			break;
		
		case 75:
			return Global_262145.f_31115;
			break;
	}
	return 0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23606;
		
		case 2:
			return Global_262145.f_23607;
		
		case 3:
			return Global_262145.f_23608;
		
		default:
	}
	return 9999999;
}

int func_351()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_62.f_50 || Local_62.f_52)
	{
		if (!Local_62.f_51)
		{
			if (!BitTest(Local_62.f_3, 7))
			{
				func_352("HS_UNABLE", iLocal_70, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (bLocal_68)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_397(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_352(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_14(iParam1))
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
					unk_0x4E5A3D96808F7F84(func_395(iVar1, iParam1, 0));
				}
				else
				{
					unk_0x4E5A3D96808F7F84(func_360(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				unk_0x4E5A3D96808F7F84(func_360(iParam1, -2, 1, 0, 0));
			}
			unk_0x60D332F23943B34F(func_358(&Var2));
			if (!bParam4)
			{
				iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
			}
			else
			{
				Global_2707307 = { func_150(iParam1) };
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
							Var2 = { func_357(&Var2) };
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
			func_353(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_353(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_356() || !unk_0x834C960822A4683F()) || !func_209(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_354(iParam2);
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

int func_354(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_355(iVar0);
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

void func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_356()
{
	return unk_0x087611B922B50F13(-1762644250);
}

struct<16> func_357(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_358(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_359(&cVar0);
}

var func_359(char[4] cParam0)
{
	return cParam0;
}

int func_360(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (!func_14(iParam0))
	{
		return 1;
	}
	if (func_155(iParam0) && !bParam4)
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
	if (((func_155(unk_0x259BE71D8A81D4FA()) || (func_394() && func_393())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		uVar1 = func_392();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_6(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_395(iParam1, iParam0, 0);
							}
							else
							{
								return func_372(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_372(iParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_395(iParam1, iParam0, 0);
				}
				else
				{
					return func_361(0, -1, 0);
				}
			}
			else
			{
				return func_361(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_395(iParam1, iParam0, 0);
		}
		else
		{
			return func_372(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_372(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_361(bool bParam0, int iParam1, bool bParam2)
{
	return func_362(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_362(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(iParam0);
	if ((func_371() || (func_370() && func_368())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_367(iParam2, iVar0);
		}
		else
		{
			return func_367(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_152(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_366(1);
				}
				else
				{
					return func_366(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_363(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_363(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_366(1);
	}
	return func_366(0);
}

int func_363(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_365(iParam0, iParam1, iParam3);
	if (func_364(Global_4718592.f_127178, 1))
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

int func_364(int iParam0, bool bParam1)
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

int func_365(int iParam0, int iParam1, int iParam2)
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
			if (!func_152(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_366(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_365(iParam1, iParam0, 4);
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

int func_368()
{
	if (func_369())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_369()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_370()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_371()
{
	if (func_369() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_377())
			{
				iVar3 = func_376(iParam0);
				if (!iVar3 == -1)
				{
					return func_374(iVar3);
				}
			}
			if ((func_193(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_152(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_366(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_373(1);
			}
			else
			{
				return func_362(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_366(1);
			}
			else
			{
				return func_362(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_376(iParam0);
	if (!iVar4 == -1)
	{
		return func_374(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_373(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_374(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_375(iParam0);
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

var func_375(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_376(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_377()
{
	if ((((((((func_391() || func_390()) || func_186()) || func_389()) || func_388()) || func_386()) || func_384()) || func_381()) || func_378())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_378()
{
	return func_379(Global_4718592.f_127178);
}

int func_379(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_380(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_381()
{
	return func_382(Global_4718592.f_127178);
}

int func_382(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_383(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_383(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_384()
{
	return func_385(Global_4718592.f_127178);
}

int func_385(int iParam0)
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

int func_386()
{
	return func_387(Global_4718592.f_127178);
}

int func_387(int iParam0)
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

var func_388()
{
	return Global_2684504.f_24;
}

var func_389()
{
	return Global_2684504.f_21;
}

var func_390()
{
	return Global_2684504.f_18;
}

var func_391()
{
	return Global_2684504.f_17;
}

var func_392()
{
	return Global_2621446.f_2;
}

var func_393()
{
	return BitTest(Global_2621446, 4);
}

var func_394()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

int func_395(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_377())
	{
		iVar2 = func_376(iParam1);
		if (!iVar2 == -1)
		{
			return func_374(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
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
			iVar0 = func_362(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_396(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_152(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_373(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_396(int iParam0)
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

int func_397(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x1B79E937E91F40C3(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_67, 0))
		{
			func_503(&uLocal_85, 3, 0, sParam1, 0, 1);
			if (func_399(&uLocal_85, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_67, false);
			}
		}
		else if (!BitTest(iLocal_67, 1))
		{
			if (func_398(0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_67, true);
			}
		}
		else if (!func_398(0))
		{
			iLocal_67 = 0;
			return 1;
		}
	}
	return 0;
}

int func_398(int iParam0)
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

int func_399(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_501())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_400(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_400(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_499(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xD6F9DEE4765092A9(iParam7))
	{
		iVar2 = unk_0x70E57E9927B6BA58(iParam7);
	}
	if (func_498(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_493(uParam6))
	{
		return 0;
	}
	if (func_490(iVar0, iVar1, iVar2))
	{
		if (func_489())
		{
			return 0;
		}
		func_488();
		return func_407(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_406(iParam4))
	{
		return 0;
	}
	func_401(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_401(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_402(iParam4);
	func_488();
	Global_1663588.f_40.f_13 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 7000);
}

void func_402(int iParam0)
{
	if (func_405(iParam0))
	{
		func_404();
		return;
	}
	func_403();
}

void func_403()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_404()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_405(int iParam0)
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

bool func_406(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_407(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_487();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_484(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_481(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_484(uParam0, sParam3, sParam4);
		}
		return func_463(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_462(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_450(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_449(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_408(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_408(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_448();
	bVar0 = true;
	if (func_410(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_409(120000);
		return 1;
	}
	return 0;
}

void func_409(int iParam0)
{
	Global_1663588.f_40.f_11 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_410(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_442(iVar0);
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
	sVar4 = func_441(uParam5, bParam6, &iVar3);
	uVar5 = func_439(iParam7, &iVar3);
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
		bVar12 = func_438(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_414(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_413();
	}
	func_448();
	func_412();
	func_411();
	return 1;
}

void func_411()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_412()
{
	Global_1663588.f_40 = 3;
}

void func_413()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 8);
}

int func_414(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_415(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_415(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_431();
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
	if (func_430() == 0)
	{
		func_428();
		return 0;
	}
	func_427(Global_4543068);
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
	func_431();
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
				func_426(0);
				break;
			
			case 1:
				func_426(1);
				break;
			
			case 2:
				func_426(2);
				break;
			
			case 3:
				func_426(3);
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
		func_431();
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
			if (!func_425())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_424(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_420(1);
			func_424(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_416(iParam0, sParam1, bVar1, func_419(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_416(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_417())
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

int func_417()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_13())
	{
		return 0;
	}
	if (func_418(unk_0x259BE71D8A81D4FA()))
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

bool func_418(int iParam0)
{
	return func_44(iParam0, 20);
}

var func_419(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_420(int iParam0)
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
	func_423();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_287(14))
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
								func_422(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_422(&(Global_8807[iVar1 /*15*/]));
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
								func_422(&(Global_8807[iVar1 /*15*/]));
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
								func_422(&(Global_8807[iVar1 /*15*/]));
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
								func_422(&(Global_8807[iVar1 /*15*/]));
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
								func_422(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_421(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_421(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_422(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_422(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_422(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_422(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_422(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_422(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_423()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_424(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_425()
{
	return Global_1575083;
}

void func_426(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_427(int iParam0)
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

void func_428()
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
		if (!func_429(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_429(struct<6> Param0, struct<6> Param1)
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

int func_430()
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
			if (!func_429(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
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

void func_431()
{
	if (func_287(14))
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
		Global_20930 = func_432();
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

var func_432()
{
	func_433();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_433()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_436(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_435(unk_0x4A8C381C258A124D());
			if (func_434(iVar0) && (!func_287(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_434(Global_113969.f_2366.f_539.f_4321))
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

bool func_434(int iParam0)
{
	return iParam0 < 3;
}

int func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_436(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_436(int iParam0)
{
	if (func_434(iParam0))
	{
		return func_437(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_437(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_438(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_415(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_439(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_440(2, iParam1);
	return iParam0;
}

void func_440(int iParam0, var uParam1)
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

var func_441(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_440(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFACCDE46E24AD056(sParam0);
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = func_445(iParam0);
	if (iVar0 == -1)
	{
		func_443(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_443(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_445(iParam0) != -1)
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
	if (func_444(iParam0))
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

int func_444(int iParam0)
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

int func_445(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
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
			func_446(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_446(int iParam0)
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
	func_447(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_447(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

void func_448()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_449(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_448();
	bVar0 = false;
	return func_410(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_450(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_451(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_451(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_442(iVar0);
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
	sVar4 = func_441(uParam5, bParam6, &iVar3);
	uVar5 = func_439(iParam7, &iVar3);
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
		bVar12 = func_461(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_453(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_413();
	}
	func_452();
	func_412();
	func_411();
	return 1;
}

void func_452()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_453(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_455(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_454(iParam0) };
			Global_9487 = iParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_454(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_455(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_431();
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
	if (func_460() == 0)
	{
		func_458();
		return 0;
	}
	func_457(Global_23353);
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
		func_426(0);
		func_426(2);
		func_426(1);
	}
	else
	{
		func_431();
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
					func_426(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_426(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_426(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_426(3);
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
		func_431();
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
			if (!func_425())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_424(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_420(1);
			func_424(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_456(iParam0, sParam1, bVar1, func_419(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_456(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_417())
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

void func_457(int iParam0)
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

void func_458()
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
		if (!func_459(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_459(struct<6> Param0, struct<6> Param1)
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

int func_460()
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
			if (!func_459(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
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

int func_461(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_455(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_454(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_462(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	func_452();
	bVar0 = true;
	if (func_451(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_409(120000);
		return 1;
	}
	return 0;
}

int func_463(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_480(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_469(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_468(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_467(1);
		}
		func_466();
		func_412();
		func_465();
		func_464();
		return 1;
	}
	return 0;
}

void func_464()
{
	Global_2749372 = 0;
}

void func_465()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_466()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_467(int iParam0)
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

void func_468(int iParam0)
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

int func_469(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_479(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_470(sParam3, iParam4, bParam7);
}

int func_470(char* sParam0, int iParam1, bool bParam2)
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
					func_478();
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
		if (func_477(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_476();
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
				func_431();
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
				if (func_475())
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
			if (func_474())
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
			func_473();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_472();
		func_471();
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
		func_478();
	}
	return 0;
}

void func_471()
{
	if (!func_417())
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

void func_472()
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

void func_473()
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

int func_474()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_475()
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

void func_476()
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

bool func_477(int iParam0, int iParam1)
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

void func_478()
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

void func_479(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_480(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_479(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_470(sParam3, iParam4, bParam7);
}

int func_481(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (func_483(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_482();
		func_466();
		func_412();
		func_465();
		func_464();
		return 1;
	}
	return 0;
}

void func_482()
{
	Global_23304 = 0;
}

bool func_483(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_479(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_470(sParam3, iParam4, bParam8);
}

int func_484(var uParam0, char* sParam1, char* sParam2)
{
	if (func_486(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_485();
		func_412();
		func_465();
		return 1;
	}
	return 0;
}

void func_485()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_486(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_479(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_470(sParam2, iParam3, 0);
}

void func_487()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_488()
{
	Global_1663588.f_40 = 1;
}

bool func_489()
{
	return Global_1663588.f_40 == 1;
}

int func_490(int iParam0, int iParam1, int iParam2)
{
	if (!func_491(iParam0))
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

int func_491(int iParam0)
{
	if (!func_492())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_492()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_493(var uParam0)
{
	if (func_497())
	{
		return 0;
	}
	if (func_496())
	{
		return 0;
	}
	if (func_398(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_495())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_494())
		{
			return 0;
		}
	}
	return 1;
}

bool func_494()
{
	return unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1680101);
}

int func_495()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_496()
{
	return Global_1663588.f_40 == 3;
}

bool func_497()
{
	return func_474();
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	if (!func_496())
	{
		return 0;
	}
	return func_490(iParam0, iParam1, iParam2);
}

int func_499(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

bool func_500()
{
	return Global_2746025.f_1;
}

int func_501()
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_502();
}

bool func_502()
{
	return func_497();
}

void func_503(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_504(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_505(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_506(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_507(uParam0, 0, 0);
		}
	}
}

void func_507(var uParam0, bool bParam1, bool bParam2)
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

void func_508()
{
	if (unk_0x93BF17E19A9F0E9B(Local_62.f_10[iLocal_76 /*7*/]) && !unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_62.f_10[iLocal_76 /*7*/]), 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (func_5(unk_0xD1A6A821F5AC81DB(unk_0xC35A3A4C05A4831B(Local_62.f_10[iLocal_76 /*7*/]), 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50625f))
			{
				if (!BitTest(iLocal_65, 4))
				{
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 4);
				}
			}
			else if (!BitTest(iLocal_65, 5))
			{
				if (Local_62.f_42 != -1)
				{
					if (iLocal_76 == Local_62.f_42)
					{
						if (!BitTest(iLocal_65, 5))
						{
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 5);
						}
					}
				}
			}
		}
	}
	func_509(iLocal_76);
	iLocal_76++;
	if (iLocal_76 >= func_504(bLocal_68))
	{
		if ((!BitTest(iLocal_65, 4) && BitTest(Local_62.f_1, 8)) || BitTest(iLocal_65, 5))
		{
			if (!BitTest(Local_64[unk_0x383461852896D73D() /*5*/].f_1, 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), true);
			}
		}
		else if (BitTest(Local_64[unk_0x383461852896D73D() /*5*/].f_1, 1))
		{
			unk_0x8744D2E3FC95740E(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), true);
		}
		unk_0x8744D2E3FC95740E(&iLocal_65, 4);
		unk_0x8744D2E3FC95740E(&iLocal_65, 5);
		iLocal_76 = 0;
	}
}

void func_509(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0x2FC2FDC413532977(Local_62.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]);
		if (bLocal_68 == 0)
		{
			if (unk_0x259BE71D8A81D4FA() == iLocal_70)
			{
				if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_62.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_66[iParam0], 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_1835491, false);
					unk_0x0B0C9A0F9AAEB7F0(&(iLocal_66[iParam0]), false);
				}
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_66[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (BitTest(iLocal_66[iParam0], 1))
				{
					unk_0x8744D2E3FC95740E(&(iLocal_66[iParam0]), true);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0x2FC2FDC413532977(Local_62.f_10[iParam0 /*7*/]))
			{
				if (!unk_0xEADBDBE0422CF7E6(Local_62.f_10[iParam0 /*7*/]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_62.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0xEADBDBE0422CF7E6(Local_62.f_10[iParam0 /*7*/]))
		{
			if (unk_0x259BE71D8A81D4FA() == iLocal_69)
			{
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_66[iParam0], 1))
				{
					if (unk_0x926910F3168C206A(iVar0, unk_0x259BE71D8A81D4FA()))
					{
						switch (Local_62.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_532(iVar0, 3);
								break;
						}
						unk_0x0B0C9A0F9AAEB7F0(&(iLocal_66[iParam0]), true);
					}
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x4FAFF4BCB7633475(iVar0))
			{
				switch (Local_62.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x0FB8E752BCC547A9(iVar0, 187, 1);
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0xA6897CC743103C98(iVar0, 3f);
									unk_0xAAA71DD7E9059338(iVar0, 1);
									unk_0x0428AFDCAA63B06E(iVar0, 118, 0);
								}
							}
						}
						if (unk_0x259BE71D8A81D4FA() == iLocal_70 && func_5(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1), 25f))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4710), false);
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Global_2738934.f_4710), false);
						}
						if (!unk_0xCA038E64C65D1F9D(iVar0))
						{
							if (!unk_0x81ECDD5A759C026D(iVar0, 29))
							{
								if (func_6(iLocal_70, 1, 1))
								{
									if (!BitTest(Local_62.f_2, 13))
									{
										if (func_531(iLocal_70) && !unk_0xC3174723CF144560(unk_0x56E414973C2A8C0E(iLocal_70)))
										{
											if (!func_530(iVar0, joaat("script_task_enter_vehicle")))
											{
												if (func_529(iVar0))
												{
													uVar1 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iLocal_70), 0);
													if (unk_0xFC8BFE4B41177C22(uVar1))
													{
														if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
														{
														}
														if (!unk_0x22007BC82AF0074B(iVar1, func_528(unk_0x56E414973C2A8C0E(iLocal_70), 0)))
														{
															unk_0xEBA229B2E0BB05E0(iVar0, iVar1, -1, func_527(unk_0x56E414973C2A8C0E(iLocal_70), iVar1), func_526(iParam0), 1179977, 0, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x56E414973C2A8C0E(iLocal_70)) && !unk_0x7F420695E3F776FB(iVar0, 1))
										{
											if (func_530(iVar0, joaat("script_task_enter_vehicle")))
											{
												unk_0x974022927CB47E68(iVar0);
											}
											if (!func_530(iVar0, joaat("script_task_go_to_entity")))
											{
												if (func_529(iVar0))
												{
													unk_0xAB3658A740EED98E(iVar0, unk_0x56E414973C2A8C0E(iLocal_70), -1, 0f, func_526(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x0FB8E752BCC547A9(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x259BE71D8A81D4FA() == iLocal_70 && func_5(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iLocal_70), 1), 25f))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4710), false);
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Global_2738934.f_4710), false);
						}
						if (unk_0x259BE71D8A81D4FA() == iLocal_70)
						{
							if (!BitTest(Local_64[unk_0x383461852896D73D() /*5*/].f_1, 0))
							{
								if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
								{
									if ((func_4(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) && (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) || unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()))) || (unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x4A8C381C258A124D()))
									{
										iVar2 = func_524(unk_0x259BE71D8A81D4FA());
										fVar5 = (system::to_float(Global_262145.f_7184) / 100f);
										iVar2 = system::round((system::to_float(iVar2) * fVar5));
										iVar6 = func_419(unk_0x259BE71D8A81D4FA());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_7185))
										{
											iVar2 = (iVar6 * Global_262145.f_7185);
										}
										if (iVar2 > 0)
										{
											unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 16);
										}
										unk_0x8A43FAF3B2368B62(unk_0x4A8C381C258A124D(), 5000, 10000, 4);
										if (!(unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x56E414973C2A8C0E(iLocal_70)))
										{
											Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(iVar0, 1) };
											Var3 = { func_523(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0xE592D924D5438108(unk_0x4A8C381C258A124D(), 1, Var3, 0f, 0f, 0,5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0x1CA08719184AFC6F(iVar0, 512, 0);
										unk_0xBE8796DB2B90A437(iVar0, 17, 1);
										if (((unk_0x7F420695E3F776FB(iVar0, 1) || unk_0x49CB27F641DC1328(iVar0)) && func_521(iVar0)) && func_528(iVar0, 0) == -1)
										{
											unk_0x1CA08719184AFC6F(iVar0, 2, 1);
											unk_0xBE8796DB2B90A437(iVar0, 3, 0);
											unk_0xBE8796DB2B90A437(iVar0, 6, 1);
										}
										else
										{
											unk_0x974022927CB47E68(iVar0);
											unk_0xD844F5E50DAB6FF7(iVar0, unk_0x4A8C381C258A124D(), 10000f, -1, 1, 0);
										}
										Local_64[unk_0x383461852896D73D() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_64[unk_0x383461852896D73D() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_64[unk_0x383461852896D73D() /*5*/].f_2 = -1;
										}
										unk_0x3CEA1FD137ACE2D9(iVar0, Global_1837316);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), false);
										unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4710), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x025281901DECB32C(iVar0, 187))
						{
							unk_0x0FB8E752BCC547A9(iVar0, 187, 0);
						}
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0xAAA71DD7E9059338(iVar0, 0);
								unk_0x0428AFDCAA63B06E(iVar0, 118, 1);
							}
						}
						if (!(unk_0x49CB27F641DC1328(iVar0) && unk_0x3DEAB4931240C1E3(iVar0) == unk_0x56E414973C2A8C0E(iLocal_70)))
						{
							if (!unk_0xCA038E64C65D1F9D(iVar0))
							{
								if (func_529(iVar0))
								{
									if ((unk_0x7F420695E3F776FB(iVar0, 1) || unk_0x49CB27F641DC1328(iVar0)) && !BitTest(Local_62.f_2, 10))
									{
										if (!func_530(iVar0, joaat("script_task_vehicle_drive_wander")) && !func_530(iVar0, joaat("script_task_vehicle_mission")))
										{
											if (unk_0x27E68848F0E5D7D9(iVar0))
											{
												uVar7 = unk_0x6EF03BE64E058E2F(iVar0, 1);
												iVar8 = unk_0x4B423FAA24E8ABF0(uVar7);
												if (BitTest(Local_62.f_2, 13))
												{
													unk_0xBE8796DB2B90A437(iVar0, 17, 1);
													unk_0xBE8796DB2B90A437(iVar0, 6, 0);
													unk_0xBE8796DB2B90A437(iVar0, 1, 0);
												}
												else if (unk_0xBA16CD57E37AC32A(iVar8))
												{
													unk_0xDAC27BA46D21818F(iVar0, iVar7, 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0x00C6FDED3EB75117(iVar8))
												{
													unk_0x8737E7B1F3150A9F(iVar0, iVar7, 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x4B423FAA24E8ABF0(iVar7) == joaat("taxi") || func_520(iVar7, 1))
												{
													unk_0x1CA08719184AFC6F(iVar0, 2, 0);
													unk_0xBE8796DB2B90A437(iVar0, 3, 1);
													unk_0xBE8796DB2B90A437(iVar0, 6, 0);
													unk_0xD844F5E50DAB6FF7(iVar0, unk_0x56E414973C2A8C0E(iLocal_70), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x7C8E9DE09D4AD3FF(iVar0, unk_0x6EF03BE64E058E2F(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_530(iVar0, joaat("script_task_smart_flee_ped")))
									{
										if (func_6(iLocal_70, 1, 1))
										{
											unk_0xD844F5E50DAB6FF7(iVar0, unk_0x56E414973C2A8C0E(iLocal_70), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_518(Local_62.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_62.f_2, 13))
				{
					unk_0x974022927CB47E68(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]));
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 17, 1);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 6, 0);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_62.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_510(iVar0);
			}
		}
	}
}

void func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_65, 16))
	{
		iVar0 = Local_64[unk_0x383461852896D73D() /*5*/].f_3;
		iVar1 = func_511(iVar0);
		if (iVar1 == 1)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 15);
			unk_0x8744D2E3FC95740E(&iLocal_65, 16);
			if (!func_57())
			{
				unk_0x47E7DCF167AAD291(iVar0, 0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8592)
			{
				iVar0 = Global_262145.f_8592;
			}
			unk_0x886FA295C1257AAA(iParam0, iVar0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x8744D2E3FC95740E(&iLocal_65, 15);
			unk_0x8744D2E3FC95740E(&iLocal_65, 16);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_511(int iParam0)
{
	if (func_57())
	{
		if (func_514(uParam0))
		{
			if (func_513(iLocal_253) == 2)
			{
				unk_0x1F4C0FAC35E805F4(func_512(iLocal_253));
				unk_0x47E7DCF167AAD291(uParam0, 0, 0, 0);
				func_333(iLocal_253);
				return 1;
			}
			else
			{
				func_333(iLocal_253);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_512(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_513(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_514(var uParam0)
{
	if (!BitTest(iLocal_65, 15))
	{
		func_331(&iLocal_253, -1135378931, 537254313, 1474183246, joaat("service_spend_robbed_by_mugger"), uParam0, 4, 3);
		func_517(&uLocal_254, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 15);
	}
	else if (func_516(iLocal_253) || func_515(&uLocal_254, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_515(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_507(uParam0, bParam2, 0);
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

int func_516(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_517(var uParam0, bool bParam1, bool bParam2)
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

void func_518(var uParam0, bool bParam1)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		if (unk_0xEADBDBE0422CF7E6(uParam0))
		{
			if (!func_519(uParam0))
			{
				if (BitTest(Local_62.f_2, 13))
				{
					unk_0x974022927CB47E68(unk_0xC35A3A4C05A4831B(uParam0));
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(uParam0), 17, 1);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(uParam0), 6, 0);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x974022927CB47E68(unk_0xC35A3A4C05A4831B(uParam0));
					}
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(uParam0), 6, 1);
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(uParam0), 1, 1);
				}
			}
		}
		func_255(&uParam0);
	}
}

int func_519(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

int func_520(int iParam0, bool bParam1)
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

int func_521(int iParam0)
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 1))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(iParam0, 1);
	}
	if (unk_0x49CB27F641DC1328(iParam0))
	{
		uVar0 = unk_0x31945A289F1359A1(iParam0);
	}
	if (!unk_0xFC8BFE4B41177C22(uVar0))
	{
		if (func_531(iLocal_70))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iLocal_70), 1);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (func_522(iVar0))
		{
			return 0;
		}
		if (unk_0xE70AAE8EBF7D65BD(iParam0) || unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(iVar0)))
		{
			if (!unk_0x69799E0840A34AFB(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_522(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
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

Vector3 func_523(struct<3> Param0)
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

int func_524(int iParam0)
{
	var uVar0;
	
	uVar0 = func_525(iParam0);
	return uVar0;
}

int func_525(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return unk_0x00BDC89742B13CD2(-1);
		}
		else if (func_308(iParam0))
		{
			return Global_1845281[iParam0 /*883*/].f_206.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_526(int iParam0)
{
	if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_527(int iParam0, int iParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		if (unk_0xF4244288C3EF3306(iParam0, iParam1))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_528(int iParam0, int iParam1)
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

int func_529(int iParam0)
{
	if ((!unk_0x4FAFF4BCB7633475(iParam0) && !unk_0x11BF418D1AFD7970(iParam0, 0)) && !unk_0x8BF5256C439DF778(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)
{
	if (unk_0x423F801F012D944B(iParam0))
	{
		return 0;
	}
	if (unk_0x27E68848F0E5D7D9(unk_0x56E414973C2A8C0E(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_532(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(iParam0, "AttributeDamage");
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, iParam1);
	unk_0xEE8559BBFC27701B(iParam0, "AttributeDamage", iVar0);
}

void func_533()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_62.f_2, 6);
	bVar1 = BitTest(Local_62.f_2, 10);
	func_538();
	if (bLocal_68 != 1)
	{
		if (BitTest(Local_62.f_3, 12))
		{
			func_535();
		}
	}
	if (unk_0xC450B06E5AAA0985(uLocal_77))
	{
		func_534(&uLocal_77);
	}
	iVar3 = 0;
	while (iVar3 < func_504(bLocal_68))
	{
		iLocal_66[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x93E08E0F531E2C35())
	{
		Local_62.f_42 = -1;
		Local_62.f_5 = uLocal_73;
		Local_62.f_6 = uLocal_73;
		Local_62.f_7 = uLocal_73;
		Local_62.f_1 = 0;
		Local_62.f_4 = 0;
		Local_62.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_504(bLocal_68))
		{
			bVar2 = BitTest(Local_62.f_10[iVar3 /*7*/].f_2, 6);
			Local_62.f_10[iVar3 /*7*/].f_2 = 0;
			Local_62.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_64[unk_0x383461852896D73D() /*5*/].f_1 = 0;
	Local_64[unk_0x383461852896D73D() /*5*/].f_2 = -1;
	iLocal_65 = 0;
	if (bVar0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_62.f_2), 11);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 8);
	}
	unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 4);
	unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 11);
}

void func_534(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_535()
{
	switch (bLocal_68)
	{
		case 0:
			func_537(&(Global_1837324[3]));
			break;
		
		case 1:
			func_536();
			break;
	}
}

void func_536()
{
	int iVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xD414C47AFF81382A(3, Global_1837276[iVar0], -1467815081);
			unk_0xD414C47AFF81382A(3, -1467815081, Global_1837276[iVar0]);
			iVar0++;
		}
	}
}

void func_537(var uParam0)
{
	int iVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xD414C47AFF81382A(3, Global_1837276[iVar0], *uParam0);
			unk_0xD414C47AFF81382A(3, *uParam0, Global_1837276[iVar0]);
			iVar0++;
		}
	}
}

void func_538()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_504(bLocal_68))
	{
		bVar1 = false;
		if (bLocal_68 == 0)
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_518(Local_62.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_539()
{
	func_540();
	if (bLocal_68 != 1)
	{
		func_508();
	}
}

void func_540()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_504(bLocal_68))
	{
		if (unk_0x2FC2FDC413532977(Local_62.f_10[iVar0 /*7*/]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_62.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0xC35A3A4C05A4831B(Local_62.f_10[iVar0 /*7*/]);
				if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
				{
					unk_0x0FB8E752BCC547A9(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2738934.f_1818)
	{
	}
	if (bLocal_68 == 1)
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_70)
		{
			if (BitTest(Local_62.f_1, 0))
			{
				if (!unk_0x5BA108AB15E668B7(uLocal_250))
				{
					if (func_6(iLocal_70, 1, 1))
					{
						if (Local_62.f_50)
						{
							unk_0xDD121F61016F3CE0(15, unk_0x56E414973C2A8C0E(iLocal_70), 4, 0f, &uLocal_250, -1467815081, 0);
						}
						else if (Local_62.f_52)
						{
							unk_0xDD121F61016F3CE0(16, unk_0x56E414973C2A8C0E(iLocal_70), 4, 0f, &uLocal_250, -1467815081, Local_62.f_53);
						}
						else
						{
							unk_0xDD121F61016F3CE0(14, unk_0x56E414973C2A8C0E(iLocal_70), 4, 0f, &uLocal_250, 0, 0);
						}
					}
				}
				if (Global_2738934.f_1818)
				{
					if (!BitTest(Local_64[unk_0x383461852896D73D() /*5*/].f_1, 3))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0x383461852896D73D() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_68 == 0)
	{
		if (Local_62.f_42 != -1)
		{
			if (unk_0x93BF17E19A9F0E9B(Local_62.f_10[Local_62.f_42 /*7*/]))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_62.f_10[Local_62.f_42 /*7*/]), 0) && !func_544(unk_0xC35A3A4C05A4831B(Local_62.f_10[Local_62.f_42 /*7*/])))
				{
					if (Local_62.f_10[Local_62.f_42 /*7*/].f_5 == 3)
					{
						func_541(Local_62.f_10[Local_62.f_42 /*7*/], &uLocal_77, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
						if (unk_0xC450B06E5AAA0985(uLocal_77))
						{
							if (!BitTest(iLocal_65, 6))
							{
								unk_0x594D5D0D7071B0DE(uLocal_77, "FM_MGR_BLP");
								unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 6);
							}
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_77))
				{
					func_534(&uLocal_77);
				}
			}
			if (unk_0x259BE71D8A81D4FA() == iLocal_69)
			{
				if (!BitTest(iLocal_65, 14))
				{
					if (func_397("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 14);
					}
				}
			}
		}
	}
}

void func_541(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		if (func_543(0))
		{
			Global_2672855 = unk_0x259BE71D8A81D4FA();
		}
		if (bParam3)
		{
			func_542(unk_0xC35A3A4C05A4831B(uParam0), uParam1, 1, Global_2672855, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_542(unk_0xC35A3A4C05A4831B(uParam0), uParam1, -1, Global_2672855, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (unk_0xC450B06E5AAA0985(*uParam1))
	{
		func_534(uParam1);
	}
}

int func_542(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(iParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x8B185FD7C0308117(iParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(iParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(iParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(iParam0, uParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, uParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(uParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(sParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(sParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(sParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(sParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(sParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_543(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_544(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x7F420695E3F776FB(uParam0, 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iVar0, "MPBitset"))
				{
					uVar1 = unk_0xE2F6FE9B61232165(iVar0, "MPBitset");
				}
				if (BitTest(uVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_545()
{
	return Local_62.f_0;
}

int func_546(int iParam0)
{
	return Local_64[iParam0 /*5*/];
}

void func_547()
{
	if (unk_0x259BE71D8A81D4FA() == iLocal_70)
	{
		if (Global_33100)
		{
			if (!BitTest(Local_64[bLocal_75 /*5*/].f_1, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_64[bLocal_75 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Local_64[bLocal_75 /*5*/].f_1), 4);
		}
	}
}

void func_548()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x259BE71D8A81D4FA() == iLocal_69)
	{
		if (BitTest(Global_1835491, 0))
		{
			unk_0x8744D2E3FC95740E(&Global_1835491, false);
			bVar0 = true;
		}
		if (!BitTest(Local_64[iLocal_69 /*5*/].f_1, 2))
		{
			if (BitTest(Local_62.f_1, 11))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_64[iLocal_69 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_62.f_1, 11))
		{
			unk_0x8744D2E3FC95740E(&(Local_64[iLocal_69 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_64[unk_0x383461852896D73D() /*5*/].f_4 = func_552();
			func_549(Local_64[unk_0x383461852896D73D() /*5*/].f_4);
		}
	}
	else if (Local_64[unk_0x383461852896D73D() /*5*/].f_4 != Local_62.f_44)
	{
		Local_64[unk_0x383461852896D73D() /*5*/].f_4 = Local_62.f_44;
		func_549(Local_64[unk_0x383461852896D73D() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_549(var uParam0)
{
	switch (bLocal_68)
	{
		case 0:
			func_551(&(Global_1837324[3]), uParam0);
			break;
		
		case 1:
			func_550(uParam0);
			break;
	}
}

void func_550(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			unk_0xD414C47AFF81382A(1, Global_1837276[bVar0], -1467815081);
			unk_0xD414C47AFF81382A(1, -1467815081, Global_1837276[bVar0]);
		}
		else
		{
			unk_0xD414C47AFF81382A(3, Global_1837276[bVar0], -1467815081);
			unk_0xD414C47AFF81382A(3, -1467815081, Global_1837276[bVar0]);
		}
		bVar0++;
	}
}

void func_551(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			unk_0xD414C47AFF81382A(1, Global_1837276[bVar0], *uParam0);
			unk_0xD414C47AFF81382A(1, *uParam0, Global_1837276[bVar0]);
		}
		else
		{
			unk_0xD414C47AFF81382A(3, Global_1837276[bVar0], *uParam0);
			unk_0xD414C47AFF81382A(3, *uParam0, Global_1837276[bVar0]);
		}
		bVar0++;
	}
}

int func_552()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (bLocal_68 == 1 || bLocal_68 == 0)
		{
			if (iLocal_69 == unk_0xB23E0F9B63D009A8(iVar1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, bVar1);
			}
		}
		else if (unk_0x259BE71D8A81D4FA() == unk_0xB23E0F9B63D009A8(bVar1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, bVar1);
		}
		else if (func_6(unk_0xB23E0F9B63D009A8(bVar1), 0, 1))
		{
			if (func_58(unk_0xB23E0F9B63D009A8(bVar1)))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_553()
{
	switch (bLocal_68)
	{
		case 0:
			if (!BitTest(iLocal_65, 11))
			{
				if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
				{
					if (func_6(iLocal_70, 1, 1))
					{
						func_352("GC_TCK_60", iLocal_70, 0, 0, 0, 1, 0);
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 11);
					}
				}
			}
			if (!BitTest(iLocal_65, 12))
			{
				if (BitTest(Local_62.f_1, 8))
				{
					if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
					{
						if (func_6(iLocal_70, 1, 1))
						{
							func_352("GC_TCK_62", iLocal_70, 0, 0, 0, 1, 0);
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 12);
						}
					}
				}
			}
			if (BitTest(Local_62.f_2, 10))
			{
				if (!BitTest(iLocal_65, 8))
				{
					if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
					{
						if (func_6(iLocal_70, 1, 1))
						{
							func_352("GC_TCK_65", iLocal_70, 0, 0, 0, 1, 0);
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_65, 13))
			{
				if (!BitTest(Local_62.f_2, 11))
				{
					if (BitTest(Local_62.f_1, 8))
					{
						if (BitTest(Local_62.f_2, 6))
						{
							if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
							{
								if (func_6(iLocal_70, 1, 1))
								{
									func_352("GC_TCK_63", iLocal_70, 0, 0, 0, 1, 0);
									unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(iLocal_65, 11))
			{
				if (unk_0x259BE71D8A81D4FA() == iLocal_69)
				{
					if (func_6(iLocal_70, 1, 1) && unk_0x259BE71D8A81D4FA() != iLocal_70)
					{
						if (Local_62.f_50)
						{
							func_352("HS_SUCC", iLocal_70, 0, 0, 0, 1, 0);
						}
						else if (Local_62.f_52)
						{
							func_352("GO_ASS_SUCC", iLocal_70, 0, 0, 0, 1, 0);
						}
						else
						{
							func_352("GC_TCK_70", iLocal_70, 0, 0, 0, 1, 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 11);
					}
				}
				else if (unk_0x259BE71D8A81D4FA() == iLocal_70)
				{
					if (func_6(iLocal_69, 1, 1))
					{
						if (Local_62.f_50)
						{
							if (Local_62.f_51)
							{
								func_555("HS_A_SUCC", 0);
							}
							else
							{
								func_352("HS_SENT", iLocal_69, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_62.f_52)
						{
							func_352("GO_ASS_SENT", iLocal_69, 0, 0, 0, 1, 0);
						}
						else
						{
							func_352("GC_TCK_71", iLocal_69, 0, 0, 0, 1, 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 11);
					}
				}
			}
			if (!BitTest(iLocal_65, 10))
			{
				if (BitTest(Local_62.f_1, 0))
				{
					if (BitTest(Local_62.f_3, 6))
					{
						if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
						{
							if (func_6(iLocal_70, 0, 1))
							{
								func_554(-1, 1);
								if (Local_62.f_50)
								{
									if (!Local_62.f_51)
									{
										func_352("HS_KILLED", iLocal_70, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_62.f_52)
								{
									func_352("GO_ASS_KILL", iLocal_70, 0, 0, 0, 1, 0);
								}
								else
								{
									func_352("GC_TCK_73", iLocal_70, 0, 0, 0, 1, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_65, 9))
			{
				if (BitTest(Local_62.f_1, 0))
				{
					if (BitTest(Local_62.f_3, 7))
					{
						if (unk_0x259BE71D8A81D4FA() == iLocal_69 && unk_0x259BE71D8A81D4FA() != iLocal_70)
						{
							if (func_6(iLocal_70, 0, 1))
							{
								if (Local_62.f_50)
								{
									func_352("HS_ESCAPED", iLocal_70, 0, 0, 0, 1, 0);
								}
								else if (Local_62.f_52)
								{
									func_352("GO_ASS_ESC", iLocal_70, 0, 0, 0, 1, 0);
								}
								else
								{
									func_352("GC_TCK_75", iLocal_70, 0, 0, 0, 1, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&iLocal_65, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_554(bool bParam0, int iParam1)
{
	if (Global_1836671)
	{
		if (Global_1836675 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 148)
		{
			if (Global_1836148.f_14 == unk_0xB23E0F9B63D009A8(iParam0))
			{
				Global_1881806 = (Global_1881806 + iParam1);
			}
		}
		else
		{
			Global_1881806 = (Global_1881806 + iParam1);
		}
	}
}

int func_555(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xCCDB0041859B85A6(sParam0);
	iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
	func_353(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_556()
{
	if (unk_0xA0522491D076C1E6(false, 0) != Local_62.f_45)
	{
		if (func_564(Local_62.f_45, 0, 1))
		{
			if (unk_0x594FD1B13DCC309E(0) <= Local_62.f_45)
			{
				unk_0x17C7D9B3979F5759(Local_62.f_45);
			}
		}
	}
	if (unk_0xF46F370442FAD8F9(false, 0) != Local_62.f_46)
	{
		if (func_563(Local_62.f_45, 0, 1))
		{
			if (unk_0x92D994BC2EF590F9(0) <= Local_62.f_46)
			{
				unk_0x552B3BADB43FF551(Local_62.f_46);
			}
		}
	}
	if (unk_0xD1797191721E17CE(false, 0) != Local_62.f_47)
	{
		if (func_557(Local_62.f_45, 0, 1))
		{
			if (unk_0xD1C2A76DD73A4387(0) <= Local_62.f_47)
			{
				unk_0xB7F37A0A1E8A175E(Local_62.f_47);
			}
		}
	}
}

bool func_557(int iParam0, bool bParam1, bool bParam2)
{
	return func_558(2, iParam0, 1, bParam1, bParam2);
}

int func_558(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_562(iParam0) - func_561(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_561(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_562(iParam0) - func_560(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_561(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_562(iParam0) - func_561(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_559(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_559(int iParam0)
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

int func_560(int iParam0)
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

int func_561(int iParam0, bool bParam1)
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

int func_562(int iParam0)
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

bool func_563(int iParam0, bool bParam1, bool bParam2)
{
	return func_558(1, iParam0, 1, bParam1, bParam2);
}

bool func_564(int iParam0, bool bParam1, bool bParam2)
{
	return func_558(0, iParam0, 1, bParam1, bParam2);
}

void func_565()
{
	if (Local_62.f_50)
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			func_567(3);
		}
		else if (unk_0x259BE71D8A81D4FA() == iLocal_70)
		{
			func_567(4);
		}
	}
	else if (Local_62.f_52)
	{
	}
	func_566();
}

void func_566()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_567(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_5), iParam0);
}

int func_568()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_574())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_573())
	{
		return 1;
	}
	if (func_572(159))
	{
		if (!func_571())
		{
			return 1;
		}
	}
	if (func_572(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_569() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_569()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_569()
{
	switch (func_126())
	{
		case 0:
			return func_570();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_570()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_571()
{
	return Global_2684504.f_700;
}

int func_572(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_573()
{
	return Global_2696172;
}

bool func_574()
{
	return Global_2684504.f_695;
}

void func_575()
{
	system::wait(0);
}

void func_576(struct<21> Param0)
{
	func_582(32, Param0);
	func_581(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_62, 56, 0);
	unk_0x7B13DC83218D9AF5(&Local_64, 161, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_580())
	{
		func_273();
	}
	bLocal_68 = Param0.f_16;
	iLocal_69 = unk_0xB23E0F9B63D009A8(Param0.f_17);
	if (unk_0x762604C40829DB72(iLocal_69))
	{
	}
	iLocal_70 = unk_0xB23E0F9B63D009A8(Param0.f_18);
	if (unk_0x762604C40829DB72(iLocal_70))
	{
		iLocal_71 = unk_0x70E57E9927B6BA58(unk_0xBD6CA019F46AB947(iLocal_70));
	}
	if (func_579(iLocal_69, 3) && bLocal_68 == 1)
	{
		Local_62.f_50 = 1;
		if (func_579(iLocal_70, 4))
		{
			Local_62.f_51 = 1;
		}
	}
	if (bLocal_68 == 1)
	{
		if (func_578(iLocal_69))
		{
			Local_62.f_52 = 1;
			Local_62.f_53 = func_577(iLocal_69);
		}
	}
	Local_72 = { Param0.f_10 };
	if (bLocal_68 == 1)
	{
		if (unk_0x259BE71D8A81D4FA() == iLocal_69)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1835491, false);
		}
	}
	Global_1919965 = 0;
	Global_1919966 = 0;
	if (bLocal_68 == 1)
	{
		Global_2738934.f_1818 = 0;
	}
	Local_64[unk_0x383461852896D73D() /*5*/] = 0;
}

var func_577(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_181.f_4;
}

bool func_578(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_181 != func_13();
}

bool func_579(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_5, iParam1);
}

int func_580()
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
		if (func_574())
		{
			return 0;
		}
		if (func_572(157))
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

int func_581(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_566();
			}
			else
			{
				return 0;
			}
		}
		if (!func_543(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_566();
					}
					else
					{
						return 0;
					}
				}
				if (func_574())
				{
					if (!bParam2)
					{
						func_566();
					}
					else
					{
						return 0;
					}
				}
				if (func_572(157))
				{
					if (!bParam2)
					{
						func_566();
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
					func_566();
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
				func_566();
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
			func_566();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_582(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_566();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}

