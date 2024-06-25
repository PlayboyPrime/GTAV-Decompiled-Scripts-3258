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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<485> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_34 = 202;
	iLocal_35 = 201;
	iLocal_36 = 24;
	iLocal_37 = 202;
	iLocal_38 = 25;
	iLocal_41 = -1;
	iLocal_43 = -1;
	iLocal_252 = -1;
	if (unk_0x96CFB880BAC634CE(82))
	{
		func_246();
	}
	func_245(3);
	func_234(&(Local_44.f_1), func_244(Global_97542[1 /*19*/], Global_97542[2 /*19*/]));
	func_233(&Local_44, 0);
	while (!func_232(4))
	{
		if (!Global_79660)
		{
			if (!func_231(86) && !func_230(14))
			{
				func_219(&Local_44, 32f, 35f);
			}
			else if (BitTest(Local_44.f_449, 0))
			{
				func_217(&Local_44);
			}
			if (BitTest(Local_44.f_449, 0))
			{
				if (func_216() == 86)
				{
					while (!func_217(&Local_44))
					{
						system::wait(0);
					}
				}
			}
			func_214(&Local_44);
			func_205();
			func_153();
			if (func_151(0) || BitTest(Local_44.f_449, 2))
			{
				func_67(&Local_44);
				func_4(&Local_44);
				func_3(&Local_44);
			}
		}
		if (unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		system::wait(0);
	}
	func_1(3);
	func_246();
}

int func_1(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	
	if (Global_79650)
	{
		return;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return;
	}
	iVar0 = system::round((1f + (1000f * system::timestep())));
	Global_97733.f_8 = (Global_97733.f_8 + iVar0);
}

void func_3(var uParam0)
{
	if (BitTest(Global_97521, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 15);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 16);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 14);
			unk_0x8744D2E3FC95740E(&Global_97521, *uParam0);
		}
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (BitTest(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 5);
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 5);
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 5);
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1DD05E817C89C737();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 5);
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 4);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x1DD05E817C89C737();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_113969.f_1.f_6[*uParam0] = 1;
			unk_0x428C32CC68809A35(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 5);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1DD05E817C89C737();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	uVar0 = unk_0xF761D79754BC3043(2, 13, 1);
	uVar1 = unk_0xF761D79754BC3043(2, 11, 1);
	uVar2 = unk_0xE934399D6F2C3AC5(0, 32, 1);
	uVar3 = unk_0xF761D79754BC3043(0, 1, 1);
	uVar4 = unk_0xE934399D6F2C3AC5(2, 201, 1);
	uVar5 = unk_0xE934399D6F2C3AC5(2, 202, 1);
	if (unk_0xAE231F549813BBDF(2))
	{
		uVar0 = unk_0xF761D79754BC3043(2, 6, 1);
		uVar1 = unk_0xF761D79754BC3043(2, 7, 1);
		uVar2 = unk_0xF761D79754BC3043(0, 29, 1);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0x88F483FBD433696A(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0x74BF156C860580D4(0,6f);
	unk_0xE6B753D52F4CA222();
	switch (uParam0->f_464)
	{
		case 0:
			if (BitTest(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(2);
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar5);
					func_8("PB_H_EXIT");
					unk_0xE6B753D52F4CA222();
				}
				unk_0x88F483FBD433696A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x557F1E2300EF1A3E(false);
				unk_0xE6B753D52F4CA222();
			}
			break;
		
		case 1:
			unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x557F1E2300EF1A3E(false);
			unk_0xE6B753D52F4CA222();
			break;
		
		case 2:
			if (BitTest(uParam0->f_449, 2))
			{
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xE6B753D52F4CA222();
				if (*uParam0 == 2)
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(2);
					func_9(uVar0);
					func_8("PB_H_SELCT");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(3);
					func_9(uVar0);
					func_8("PB_H_SELCT");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(2);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar5);
					func_8("PB_H_UNDO");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					unk_0xE6B753D52F4CA222();
				}
				unk_0x88F483FBD433696A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x557F1E2300EF1A3E(false);
				unk_0xE6B753D52F4CA222();
			}
			break;
		
		case 3:
			if (BitTest(uParam0->f_449, 2))
			{
				if (BitTest(uParam0->f_449, 9))
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar1);
					func_8("PB_H_SELCT");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(2);
					func_9(uVar1);
					func_8("PB_H_SELCT");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					unk_0xE6B753D52F4CA222();
				}
				unk_0x88F483FBD433696A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x557F1E2300EF1A3E(false);
				unk_0xE6B753D52F4CA222();
			}
			break;
		
		case 4:
			if (BitTest(uParam0->f_449, 2))
			{
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(3);
				func_9(uVar2);
				func_8("PB_H_ZOOM");
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(2);
				func_9(uVar3);
				func_8("PB_H_LOOK");
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(1);
				func_9(uVar5);
				func_8("PB_H_UNDO");
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(0);
				func_9(uVar4);
				func_8("PB_H_CONF");
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x557F1E2300EF1A3E(false);
				unk_0xE6B753D52F4CA222();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_9(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

int func_10(int iParam0, int iParam1)
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

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), 18);
	}
}

bool func_12(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_12(uParam0) && !unk_0xA5DAECD045AA8024())
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(uParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
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

void func_15(int iParam0)
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415);
	unk_0xE6B753D52F4CA222();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(8);
			unk_0xE6B753D52F4CA222();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0xE6B753D52F4CA222();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_449, 7))
	{
		if (!BitTest(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_113969.f_1[*uParam0])
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113969.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0x4C705AAF75363287())
					{
						if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							unk_0xAC98CA65AD9A3215("PB_H_CHOICE");
							unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_113969.f_1.f_6[*uParam0])
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113969.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0x4C705AAF75363287())
					{
						if (!BitTest(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_97542[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0xAC98CA65AD9A3215("PB_H_GUNM");
												unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
												break;
											
											case 2:
												unk_0xAC98CA65AD9A3215("PB_H_HACK");
												unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
												break;
											
											case 3:
												unk_0xAC98CA65AD9A3215("PB_H_DRIV");
												unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_113969.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
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
		func_14();
	}
}

void func_23(var uParam0, bool bParam1, int iParam2)
{
	if (!BitTest(uParam0->f_1.f_303, bParam1))
	{
		if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_280[bParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1.f_303), bParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0xD6F9DEE4765092A9(&Param2))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param2 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam3;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x1DD05E817C89C737() + 1000;
	Var0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), Var0, fParam2);
}

void func_26(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_11 = { Param1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * system::cos((90f - fVar6))), (fVar4 * system::sin((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0x21CDF75488EFB98B((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar11 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0x21CDF75488EFB98B((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0,95f), fVar14, (-fVar9 * 0,85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (system::to_float(*uParam1) / system::to_float(iVar0));
	*uParam3 = (system::to_float(uParam1->f_1) / system::to_float(iVar1));
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)
{
	int iVar0;
	
	unk_0x88F483FBD433696A(uParam0->f_413, "CREATE_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415);
	unk_0x330108B080A2132F(1);
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_16));
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_16.f_1));
	unk_0xE6B753D52F4CA222();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(2);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(1);
			unk_0x330108B080A2132F(1);
			unk_0xE6B753D52F4CA222();
			break;
		
		case 1:
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(3);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(1);
			unk_0x330108B080A2132F(4);
			unk_0xE6B753D52F4CA222();
			break;
		
		case 3:
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(6);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(1);
			unk_0x330108B080A2132F(7);
			unk_0xE6B753D52F4CA222();
			break;
		
		case 4:
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(8);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415);
			unk_0x330108B080A2132F(1);
			unk_0x330108B080A2132F(9);
			unk_0xE6B753D52F4CA222();
			break;
	}
	unk_0x88F483FBD433696A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415);
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415);
	unk_0x557F1E2300EF1A3E(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0xE6B753D52F4CA222();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
		unk_0x330108B080A2132F(uParam0->f_415);
		unk_0xE6B753D52F4CA222();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(8);
			unk_0xE6B753D52F4CA222();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0xE6B753D52F4CA222();
		}
		unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
		unk_0x330108B080A2132F(99);
		unk_0xE6B753D52F4CA222();
	}
}

bool func_32(int iParam0, int iParam1)
{
	return BitTest(Global_113969.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0xE6B753D52F4CA222();
}

void func_34(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(uParam0->f_415);
	unk_0xE6B753D52F4CA222();
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_97542[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
	unk_0x330108B080A2132F(iParam1);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0xE6B753D52F4CA222();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_97542[iVar1 /*19*/].f_1[iParam1];
	unk_0x88F483FBD433696A(uParam0->f_413, "CREATE_VIEW");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(0);
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0xE6B753D52F4CA222();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_113969.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_113969.f_1.f_12[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_113969.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
		unk_0x330108B080A2132F(iParam1);
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
		unk_0x330108B080A2132F(iParam1);
		unk_0x557F1E2300EF1A3E(false);
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

int func_37(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_113969.f_1.f_12[iVar0 /*6*/][iVar1] == bParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)
{
	return BitTest(Global_113969.f_1.f_118, iParam0);
}

bool func_39(int iParam0)
{
	return BitTest(Global_113969.f_1.f_116, iParam0);
}

int func_40(int iParam0)
{
	return Global_97388[iParam0 /*5*/];
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(iParam3);
	unk_0x330108B080A2132F(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x330108B080A2132F(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x330108B080A2132F(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x330108B080A2132F(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x330108B080A2132F(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x330108B080A2132F(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x330108B080A2132F(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x330108B080A2132F(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x330108B080A2132F(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x330108B080A2132F(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x330108B080A2132F(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x330108B080A2132F(func_42(iParam1));
	unk_0xE6B753D52F4CA222();
}

var func_42(int iParam0)
{
	return Global_97388[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return system::round(((system::to_float(func_45(iParam0, iParam1)) / system::to_float(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_113969.f_1.f_73[iParam0 /*3*/].f_1, Global_113969.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return system::shift_right(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return system::shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)
{
	return system::round(((system::to_float(func_52(iParam0, iParam1)) / system::to_float(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return system::round(((system::to_float(func_56(iParam0, iParam1)) / system::to_float(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
{
	switch (Global_97388[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_62(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!BitTest(Global_97542[iParam1 /*19*/].f_18, bParam2))
	{
		if (!unk_0x1B79E937E91F40C3(&(Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_97542[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x1B79E937E91F40C3(&(Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_97542[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_97542[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x330108B080A2132F(99);
	unk_0xE6B753D52F4CA222();
	func_18(uParam0);
}

void func_64(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x330108B080A2132F(99);
			unk_0xE6B753D52F4CA222();
			break;
	}
	unk_0x428C32CC68809A35(0);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_205[iParam0];
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!BitTest(uParam0->f_449, 2))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_150(0))
			{
				if (func_141(8))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
						fVar3 = unk_0x1D5CD3EAAA7422B0((uParam0->f_404 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_404;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0x1D5CD3EAAA7422B0((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_404 - fVar2) < fVar3)
								{
									fVar3 = unk_0x1D5CD3EAAA7422B0((uParam0->f_404 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0x1D5CD3EAAA7422B0((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_140(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_139(uParam0->f_451, 1))
			{
				func_137(&(uParam0->f_451));
				func_123(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_137(&(uParam0->f_451));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_79(uParam0);
		if (((!bVar5 && uParam0->f_453 > 15) && (unk_0x875A214D5EBCA509(2, iLocal_34) || unk_0x875A214D5EBCA509(2, 238))) || BitTest(uParam0->f_449, 8))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_453 = 0;
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * system::cos((180f - uParam0->f_404))), (1f * system::sin((180f - uParam0->f_404)))) };
			unk_0xB1EAADCB692D69CE(Var0, &(Var0.f_2), 0, 0);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam0->f_404);
			unk_0x64BB72494B9DF6DC(0);
			unk_0xD815D4BD1AE9E85A(0, 1065353216);
			unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 0, 0, 0);
			unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 134);
	}
	unk_0x37B894853929BF1A(1);
	func_72(0);
	func_71();
	unk_0xCCC82B30A1C53626();
	unk_0xDCFF86AAD108A201(17);
	unk_0x89ACA8B99257E016(0);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0x428C32CC68809A35(1);
	while (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
		system::wait(0);
	}
	iVar1 = unk_0x0E171121A3A25363(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0xBBB6D0F765409642(iVar1);
	}
	unk_0x6CC88053C1AF072D();
	func_64(uParam0);
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), 7);
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), 2);
	Global_97520 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (bParam2)
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			unk_0x4CBC5D1BC117616B(*uParam0, 0);
		}
		unk_0x85E6A1E36B5E2E4D(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xF3E3EA936C653F22();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_71()
{
	Global_23692.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_78();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_150(0))
		{
			func_73(0);
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

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_74())
	{
		Global_20930.f_1 = 3;
	}
}

int func_74()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_76()
{
	return BitTest(Global_1956920, 5);
}

bool func_77()
{
	return BitTest(Global_1956920, 19);
}

void func_78()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_79(var uParam0)
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = unk_0xF761D79754BC3043(0, 1, 1);
	if (!unk_0x1B79E937E91F40C3(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_121();
	func_109(uParam0);
	func_87(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_84(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x1DD05E817C89C737();
	func_80(&(uParam0->f_649), BitTest(uParam0->f_449, 4), (BitTest(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (BitTest(uParam0->f_449, 7))
	{
		if ((!unk_0xFD216000DC314A92() && unk_0x9390801B06EE998F()) && !unk_0x4D9174D8796EA622())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!BitTest(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0xA91A4C18A2DB01BD(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0x37B894853929BF1A(0);
	unk_0x4EB223432F8FA0A0(2);
	unk_0x4EB223432F8FA0A0(1);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(3);
	unk_0x0C9B2F8C2BD128C2();
	unk_0x9A122D542F2BB60E(82, 66);
	unk_0x36A472841BBC9D4A(17, 0,612f, 0,818f);
	unk_0x90B531766063C5CD();
	if (!unk_0xFD216000DC314A92())
	{
		unk_0x4CC1CF98851922CE(2, 201);
	}
	unk_0x4CC1CF98851922CE(2, 202);
	unk_0x4CC1CF98851922CE(2, 188);
	unk_0x4CC1CF98851922CE(2, 187);
	unk_0x4CC1CF98851922CE(2, 189);
	unk_0x4CC1CF98851922CE(2, 190);
	if (!BitTest(uParam0->f_449, 7))
	{
		if (!unk_0xFD216000DC314A92())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0,5f, (2,9f * system::cos((180f - uParam0->f_404))), (2,9f * system::sin((180f - uParam0->f_404)))) };
			unk_0xB1EAADCB692D69CE(Var2, &(Var2.f_2), 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 134);
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var2, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam0->f_404);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 7);
		}
	}
}

void func_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0xE0EEB603997F273F(2);
	func_83(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x660D0B8C8AE85314())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		fVar1 = unk_0x4AAE7492E7D81A57(2, 239);
		fVar2 = unk_0x4AAE7492E7D81A57(2, 240);
		fVar3 = (fVar1 - iParam0->f_29);
		fVar4 = (fVar2 - iParam0->f_30);
		iParam0->f_29 = fVar1;
		iParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -system::round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -system::round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = system::round(((unk_0x4AAE7492E7D81A57(2, 290) * fParam5) * 127f));
			iVar0[3] = system::round(((unk_0x4AAE7492E7D81A57(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_82((iVar0[2] + iParam0->f_24), -127, 127);
		iVar0[3] = func_82((iVar0[3] + iParam0->f_25), -127, 127);
	}
	if (iParam0->f_24 == iVar0[2] && iParam0->f_25 == iVar0[3])
	{
		if (iParam0->f_27 < unk_0x1DD05E817C89C737())
		{
			iParam0->f_24 = 0;
			iParam0->f_25 = 0;
			if (unk_0xAE231F549813BBDF(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				iParam0->f_28 = 1;
			}
		}
	}
	else
	{
		iParam0->f_24 = iVar0[2];
		iParam0->f_25 = iVar0[3];
		iParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
		iParam0->f_28 = 0;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(system::to_float(iVar0[2]) / 127f) * IntToFloat(iParam0->f_20));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_22)) / IntToFloat(iParam0->f_20));
		iParam0->f_8 = (-(system::to_float(iVar0[3]) / 127f) * IntToFloat(iParam0->f_21));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_24 = 0;
		iParam0->f_25 = 0;
	}
	fVar5 = (30f * system::timestep());
	Var6 = { iParam0->f_8 + iParam0->f_11 };
	if ((unk_0xAE231F549813BBDF(2) && bParam2) && !iParam0->f_28)
	{
		iParam0->f_14 = Var6.f_0;
		iParam0->f_14.f_1 = Var6.f_1;
		iParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		iParam0->f_14 = (iParam0->f_14 + func_81(((((Var6.f_0 - iParam0->f_14) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_14.f_1 = (iParam0->f_14.f_1 + func_81(((((Var6.f_1 - iParam0->f_14.f_1) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_14.f_2 = (iParam0->f_14.f_2 + func_81(((((Var6.f_2 - iParam0->f_14.f_2) * 0,05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (iParam0->f_26)
	{
		iParam0->f_14 = func_81(iParam0->f_14, system::to_float(-iParam0->f_21), system::to_float(iParam0->f_21));
		iParam0->f_14.f_1 = func_81(iParam0->f_14.f_1, system::to_float(-iParam0->f_22), system::to_float(iParam0->f_22));
		iParam0->f_14.f_2 = func_81(iParam0->f_14.f_2, system::to_float(-iParam0->f_20), system::to_float(iParam0->f_20));
	}
	if (unk_0xAE231F549813BBDF(0) && bParam1)
	{
		if (iParam0->f_28)
		{
			iParam0->f_17 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_17 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xAE231F549813BBDF(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xDEE3EFEA31A1F555(0, iVar7))
			{
				iParam0->f_17 = (iParam0->f_17 - 5f);
				iParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				iParam0->f_28 = 0;
			}
			else if (unk_0xDEE3EFEA31A1F555(0, iVar8))
			{
				iParam0->f_17 = (iParam0->f_17 + 5f);
				iParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				iParam0->f_28 = 0;
			}
			if (bParam3)
			{
				iParam0->f_17 = func_81(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), iParam0->f_7);
			}
			else
			{
				iParam0->f_17 = func_81(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), (iParam0->f_7 + iParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x6C29A57AC29D7033(2, 207);
			iVar0[3] = unk_0x6C29A57AC29D7033(2, 208);
			if (bParam3)
			{
				if (system::to_float(iVar0[3]) > 127f)
				{
					iParam0->f_17 = (iParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * (iParam0->f_19 / 2f)))));
				}
			}
			else
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * iParam0->f_19))));
				iParam0->f_17 = (iParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * iParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (system::to_float(iVar0[1]) < 0f)
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * iParam0->f_19))));
			}
		}
		else
		{
			iParam0->f_17 = (iParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * iParam0->f_19))));
		}
	}
	iParam0->f_18 = (iParam0->f_18 + (((iParam0->f_17 - iParam0->f_18) * 0,06f) * fVar5));
	unk_0xA3774254665BAA82(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_14, iParam0->f_18, 0, 1, 1, 2);
	if (unk_0x78411E34CF90EA8C(*iParam0))
	{
		if (unk_0xBC886554B5888A64(*iParam0))
		{
			if (unk_0x8DE2438443E6A145(*iParam0))
			{
				unk_0x9D0B099EEAD74270();
			}
		}
	}
}

float func_81(float fParam0, float fParam1, float fParam2)
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

int func_82(int iParam0, int iParam1, int iParam2)
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

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = system::floor((unk_0x4AAE7492E7D81A57(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x4AAE7492E7D81A57(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x4AAE7492E7D81A57(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x4AAE7492E7D81A57(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x5CCBA474776568B7(2, 218))
		{
			*uParam0 = system::floor((unk_0xC3B77DE416935168(2, 218) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 219))
		{
			*uParam1 = system::floor((unk_0xC3B77DE416935168(2, 219) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 220))
		{
			*uParam2 = system::floor((unk_0xC3B77DE416935168(2, 220) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 221))
		{
			*uParam3 = system::floor((unk_0xC3B77DE416935168(2, 221) * 127f));
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (bParam5)
		{
			if (unk_0x660D0B8C8AE85314())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xDD087A873D2E08F0())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_84(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (BitTest(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x1DD05E817C89C737() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x1DD05E817C89C737();
				}
			}
			else if (unk_0x1DD05E817C89C737() > uParam0->f_452)
			{
				bVar0 = false;
				bVar1 = false;
				while (bVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!BitTest(uParam0->f_1.f_303, bVar1 + 4))
						{
							func_86(uParam0, bVar1);
							if (BitTest(uParam0->f_1.f_370, bVar1))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					bVar1++;
				}
				if (!bVar0)
				{
					func_85(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_9088.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_9088.f_99.f_219[iParam0]), bParam1);
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x330108B080A2132F(99);
	unk_0xE6B753D52F4CA222();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x9390801B06EE998F()) && !unk_0xFD216000DC314A92())
	{
		if (uParam0->f_483 > 0)
		{
			if (!BitTest(uParam0->f_449, 13))
			{
				if (func_88(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 13);
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (BitTest(uParam0->f_449, 11))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 11);
			}
			if (BitTest(uParam0->f_449, 13))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_88(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_108(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_89(sParam2, iParam3, 0);
}

int func_89(char* sParam0, int iParam1, bool bParam2)
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
					func_107();
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
		if (func_106(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_105();
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
				func_98();
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
				if (func_97())
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
			if (func_74())
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
			func_96();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_95();
		func_90();
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
		func_107();
	}
	return 0;
}

void func_90()
{
	if (!func_91())
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

int func_91()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_94())
	{
		return 0;
	}
	if (func_92(unk_0x259BE71D8A81D4FA()))
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

bool func_92(int iParam0)
{
	return func_93(iParam0, 20);
}

var func_93(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_94()
{
	return -1;
}

void func_95()
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

void func_96()
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

int func_97()
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

void func_98()
{
	if (func_230(14))
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
		Global_20930 = func_99();
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

var func_99()
{
	func_100();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_100()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_103(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_102(unk_0x4A8C381C258A124D());
			if (func_101(iVar0) && (!func_230(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_101(Global_113969.f_2366.f_539.f_4321))
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

bool func_101(int iParam0)
{
	return iParam0 < 3;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_103(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_103(int iParam0)
{
	if (func_101(iParam0))
	{
		return func_104(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_104(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_105()
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

bool func_106(int iParam0, int iParam1)
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

void func_107()
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

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_453++;
	if (unk_0x7811C74D5B749F76(2))
	{
		func_7(uParam0);
	}
	if (!BitTest(uParam0->f_449, 11))
	{
		if ((unk_0x875A214D5EBCA509(2, iLocal_35) || unk_0x875A214D5EBCA509(2, iLocal_37)) || (unk_0xAE231F549813BBDF(2) && (unk_0x875A214D5EBCA509(2, iLocal_36) || unk_0x875A214D5EBCA509(2, iLocal_38))))
		{
			func_119();
			if (BitTest(uParam0->f_449, 12))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 13);
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 11);
				unk_0x8744D2E3FC95740E(&(uParam0->f_449), 10);
			}
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 12);
		}
	}
	func_83(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0xAE231F549813BBDF(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_82((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_82((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x660D0B8C8AE85314())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x1DD05E817C89C737())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 4);
		}
	}
	if (!BitTest(uParam0->f_449, 10))
	{
		if (!BitTest(uParam0->f_449, 11))
		{
			if ((unk_0x1DD05E817C89C737() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x1DD05E817C89C737() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0x6D05C5731A838CB3(2, 188)) || unk_0x6D05C5731A838CB3(2, 189)) || (unk_0xAE231F549813BBDF(2) && unk_0xDEE3EFEA31A1F555(2, 241)))
					{
						unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x330108B080A2132F(8);
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x6CA3F2B87712B6A4();
						uParam0->f_456 = unk_0x1DD05E817C89C737();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0x6D05C5731A838CB3(2, 187)) || unk_0x6D05C5731A838CB3(2, 190)) || (unk_0xAE231F549813BBDF(2) && unk_0xDEE3EFEA31A1F555(0, 242)))
					{
						unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x330108B080A2132F(9);
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x6CA3F2B87712B6A4();
						uParam0->f_456 = unk_0x1DD05E817C89C737();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0x6D05C5731A838CB3(2, 188)) || (unk_0xAE231F549813BBDF(2) && unk_0xDEE3EFEA31A1F555(0, 40)))
					{
						unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x330108B080A2132F(8);
						unk_0xE6B753D52F4CA222();
						if (uParam0->f_416 != 0)
						{
							unk_0xBF3D28CA44F3BE2D(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (BitTest(uParam0->f_449, 9))
						{
							unk_0x8744D2E3FC95740E(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x1DD05E817C89C737();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0x6D05C5731A838CB3(2, 187)) || (unk_0xAE231F549813BBDF(2) && unk_0xDEE3EFEA31A1F555(0, 41)))
					{
						unk_0x88F483FBD433696A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x330108B080A2132F(9);
						unk_0xE6B753D52F4CA222();
						if (uParam0->f_416 != 1)
						{
							unk_0xBF3D28CA44F3BE2D(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (BitTest(uParam0->f_449, 9))
						{
							unk_0x8744D2E3FC95740E(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x1DD05E817C89C737();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || BitTest(uParam0->f_449, 13))
				{
					if (unk_0x875A214D5EBCA509(2, iLocal_35) || (unk_0xAE231F549813BBDF(2) && unk_0x875A214D5EBCA509(2, iLocal_36)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!BitTest(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x1DD05E817C89C737();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x88F483FBD433696A(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x6CA3F2B87712B6A4();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_113969.f_1[*uParam0] = 1;
											unk_0x428C32CC68809A35(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_97542[iVar1 /*19*/])
									{
										unk_0x88F483FBD433696A(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x6CA3F2B87712B6A4();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_85(4, *uParam0, 1);
									if (!func_118(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_85(5, *uParam0, 1);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_97542[iVar1 /*19*/])
								{
									if (Global_113969.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_113969.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_97542[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												bVar3 = iVar5;
												if (bVar3 != 0)
												{
													if (Global_97388[bVar3 /*5*/] != Global_97542[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!BitTest(Global_113969.f_1.f_116, bVar3))
													{
														bVar4 = false;
													}
													if (BitTest(Global_113969.f_1.f_118, bVar3))
													{
														bVar4 = false;
													}
													if (bVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, bVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_113969.f_1.f_12[iVar1 /*6*/][iVar2] = bVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x875A214D5EBCA509(2, iLocal_37) || (unk_0xAE231F549813BBDF(2) && unk_0x875A214D5EBCA509(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0xBF3D28CA44F3BE2D(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x1DD05E817C89C737();
								}
								else if (!func_232(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x330108B080A2132F(iVar7);
											unk_0xE6B753D52F4CA222();
											unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x330108B080A2132F(iVar7);
											unk_0x557F1E2300EF1A3E(true);
											unk_0xE6B753D52F4CA222();
											iVar7++;
										}
										unk_0xBF3D28CA44F3BE2D(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_115(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0x1DD05E817C89C737();
										uParam0->f_465 = 0;
										func_114(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_115(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_113(8, 0);
									func_85(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = unk_0x1DD05E817C89C737();
									func_5(uParam0, 3, 0);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_97542[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x330108B080A2132F(99);
			unk_0x330108B080A2132F(-1);
			unk_0xE6B753D52F4CA222();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!BitTest(uParam0->f_449, 17))
			{
				iVar10 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x1DD05E817C89C737();
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), 10);
	}
	else if (unk_0x4C705AAF75363287())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0xA6F779AA284EB20E(uParam0->f_680))
		{
			iVar11 = unk_0x5DEF122A58D4F685(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_113(iVar0, iVar1);
			if (!func_118(0))
			{
				func_112(*uParam0);
			}
			unk_0xBF3D28CA44F3BE2D(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_115(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_97542[iVar1 /*19*/])
				{
					unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
					unk_0x330108B080A2132F(iVar12);
					unk_0x557F1E2300EF1A3E(true);
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
					unk_0x330108B080A2132F(iVar12);
					unk_0x557F1E2300EF1A3E(false);
					unk_0xE6B753D52F4CA222();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_85(5, *uParam0, 1);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0x428C32CC68809A35(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0xA6F779AA284EB20E(uParam0->f_681))
		{
			iVar13 = unk_0x5DEF122A58D4F685(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			bVar14 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0x88F483FBD433696A(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_450);
			unk_0x330108B080A2132F(iVar13);
			unk_0x330108B080A2132F(bVar14);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x330108B080A2132F(99);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			unk_0x8744D2E3FC95740E(&(uParam0->f_449), 17);
			func_111(uParam0, bVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x1DD05E817C89C737();
			uParam0->f_457 = uParam0->f_456;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0x428C32CC68809A35(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0xA6F779AA284EB20E(uParam0->f_682))
		{
			iVar15 = unk_0x5DEF122A58D4F685(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0xBF3D28CA44F3BE2D(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_110(uParam0, uParam0->f_427);
	}
}

void func_110(var uParam0, int iParam1)
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (BitTest(Global_113969.f_1.f_119, 14))
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 14);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (BitTest(Global_113969.f_1.f_119, 16))
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 16);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (BitTest(Global_113969.f_1.f_119, 15))
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 15);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (BitTest(Global_113969.f_1.f_119, 17))
					{
						if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 10);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 17);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (!BitTest(uParam0->f_463, bParam1))
	{
		if (!BitTest(Global_113969.f_1.f_119, bParam1))
		{
			if (!unk_0x1B79E937E91F40C3(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 0))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113969.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113969.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 0))
							{
								if (BitTest(Global_113969.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 1))
							{
								if (BitTest(Global_113969.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113969.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (BitTest(Global_113969.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (BitTest(Global_113969.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113969.f_1.f_117, 15))
							{
								if (BitTest(Global_113969.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (BitTest(Global_113969.f_1.f_117, 2))
							{
								if (BitTest(Global_113969.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113969.f_1.f_117, 18))
							{
								if (BitTest(Global_113969.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (BitTest(Global_113969.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (BitTest(Global_113969.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 10))
							{
								if (BitTest(Global_113969.f_1.f_117, 0))
								{
									if (BitTest(Global_113969.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 11))
							{
								if (BitTest(Global_113969.f_1.f_117, 1))
								{
									if (BitTest(Global_113969.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (BitTest(Global_113969.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113969.f_1.f_117, 19))
							{
								if (BitTest(Global_113969.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (BitTest(Global_113969.f_1.f_117, 16))
							{
								if (BitTest(Global_113969.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (BitTest(Global_113969.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_463), bParam1);
	}
}

void func_112(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_113969.f_9088.f_99.f_205[7];
			if (iVar0 == 1)
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_113969.f_9088.f_99.f_205[8];
			if (iVar0 == 3)
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_113969.f_9088.f_99.f_205[10];
			if (iVar0 == 6)
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_113969.f_9088.f_99.f_205[11];
			if (iVar0 == 8)
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0xF1D0B0CE940F620D(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_113(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_205[iParam0] = iParam1;
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_120[bParam0]), bParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_120[bParam0]), bParam1);
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_97521, bParam0);
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_113969.f_9088.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), false);
						break;
					
					case 10:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), true);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 3);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 6);
						break;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_113969.f_9088.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 8);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 9);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 17);
						break;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_113969.f_9088.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 11);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 15);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_117), 20);
						unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_119), 16);
						break;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), false);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), true);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 2);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 3);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 4);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 5);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 7);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 8);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 10);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 11);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 12);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 13);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 14);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 15);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 16);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 17);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 18);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 19);
			unk_0x8744D2E3FC95740E(&(Global_113969.f_1.f_117), 20);
			break;
	}
}

int func_118(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_119()
{
	Global_21152 = 0;
	func_120();
}

void func_120()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_121()
{
	unk_0xC0964AABD3C0CC7E();
	func_122();
}

void func_122()
{
	Global_23692.f_134 = 1;
}

void func_123(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0xFD216000DC314A92())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (Global_45250 == 1)
			{
				func_128(unk_0x4A8C381C258A124D());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0,5f, (2,9f * system::cos((180f - uParam0->f_404))), (2,9f * system::sin((180f - uParam0->f_404)))) };
			unk_0xB1EAADCB692D69CE(Var0, &(Var0.f_2), 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 134);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam0->f_404);
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 7);
	}
	unk_0x37B894853929BF1A(0);
	func_72(1);
	func_127();
	unk_0x5C6622EF2CEA902F();
	unk_0x2094BC4B6731BA68(uParam0->f_401, 5f, 1, 1, 0, 0);
	unk_0xA69DCC67B2B61AD1(uParam0->f_401, 5f);
	unk_0x89ACA8B99257E016(1);
	unk_0x9A122D542F2BB60E(82, 66);
	unk_0x36A472841BBC9D4A(17, 0,612f, 0,818f);
	unk_0x90B531766063C5CD();
	func_126(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = unk_0x0E171121A3A25363(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0x74C1590CC91B3930(iVar1);
	}
	unk_0xDC750660004ECB83(&(Global_97459[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x2EFEB897BDD17B5B(unk_0xC69E0125145BB58A(unk_0x4A8C381C258A124D()));
	}
	func_125(0);
	func_124();
	unk_0x8E1F26D6742EC167(0);
	if (unk_0x761778199FE1211C())
	{
		unk_0x88F483FBD433696A(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x557F1E2300EF1A3E(false);
		unk_0xE6B753D52F4CA222();
	}
	uParam0->f_466 = unk_0xF761D79754BC3043(2, 10, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 2);
	Global_97520 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_113969.f_20413.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
	}
}

void func_125(bool bParam0)
{
	if (!bParam0)
	{
		Global_112608 = unk_0x1DD05E817C89C737() + 250;
	}
	Global_112605 = bParam0;
}

void func_126(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = uParam7;
	*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x3AAB5D3F3D4028CC(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0xCD1B743BDEC39145(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_127()
{
	Global_23692.f_5 = 1;
}

void func_128(int iParam0)
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
	iVar0 = func_136(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_131(1, iVar1, 1);
		return;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_129(iVar2);
}

void func_129(int iParam0)
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

int func_130(int iParam0)
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

void func_131(int iParam0, int iParam1, int iParam2)
{
	func_132(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_134(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_133();
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

int func_133()
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

int func_134(int iParam0, int iParam1, int iParam2)
{
	if (func_135(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, int iParam1, int iParam2)
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

int func_136(int iParam0)
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

void func_137(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_138(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_138(int iParam0)
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

int func_139(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return 0;
	}
	if (func_150(0))
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

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_137(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_99();
				if (!func_101(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_149()) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_106(8, -1)) || func_144()) || func_143()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_106(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_149()) || Global_32951) || func_148()) || func_106(8, -1)) || func_146()) || func_145()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_149()) || func_146()) || Global_113016) || Global_32951) || func_148()) || Global_45250) || func_106(8, -1)) || func_145()) || func_143()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
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

var func_142()
{
	return Global_101572.f_1;
}

int func_143()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_144()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
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

bool func_146()
{
	return Global_101585.f_394 > 0;
}

bool func_147()
{
	return Global_101585.f_393 > 0;
}

var func_148()
{
	return Global_1575083;
}

int func_149()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_150(int iParam0)
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

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_44042);
}

int func_152(int iParam0, int iParam1)
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

void func_153()
{
	int iVar0;
	struct<3> Var1;
	
	if (func_232(17))
	{
		if (!BitTest(uLocal_39, 11))
		{
			unk_0x839AD252B0708F35("JH_1_MCS_4P2", 8);
			unk_0x97A5024CE91641F1("lesterHandler");
			unk_0xF2CB0224D3BE0B42("JHS1AUD", 6);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 11);
		}
		else if (unk_0xB3FA103AA6383C28())
		{
			unk_0x60A0A4CD710160D5("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_232(18))
	{
		if (func_232(17))
		{
			if ((unk_0xC4ADACBD3FE3F266("JH_1_MCS_4P2") && unk_0xA6E4F7A73ABC4A76("lesterHandler")) && unk_0xDCB78A15E5F495DC(6))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
				{
					unk_0xF293D66D4452C854(iLocal_243, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0xF293D66D4452C854(iLocal_243, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_246))
				{
					if (unk_0x5B9219522937741D(iLocal_246))
					{
						unk_0x837D67618BF89034(iLocal_246, 1, 1);
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_246))
				{
					unk_0xF293D66D4452C854(iLocal_246, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0xF293D66D4452C854(iLocal_246, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0xEC9DAA34BBB4658C(joaat("prop_cs_walking_stick"));
				unk_0xEC9DAA34BBB4658C(joaat("prop_laptop_lester2"));
				func_72(1);
				func_125(1);
				func_195(1, 1, 1, 0, 0, 0, 0);
				iLocal_41 = -1;
				unk_0xED65412F8B26ED99(0);
				if (func_118(0))
				{
					unk_0x1837D912F4EDCA95(0, 0, 0, 0);
				}
				func_114(17, 0);
			}
		}
		else if (unk_0xFD216000DC314A92())
		{
			func_121();
			if (BitTest(uLocal_39, 7))
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_246))
				{
					unk_0x4285E11B28063EE0(iLocal_246, 1, 0);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_244))
				{
					unk_0x4285E11B28063EE0(iLocal_244, 1, 0);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_243))
				{
					unk_0x4285E11B28063EE0(iLocal_243, 1, 0);
				}
				unk_0x8744D2E3FC95740E(&uLocal_39, 7);
			}
			if (unk_0xD8FC13DA1BA1DBA2("Lester", 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_243))
				{
					iVar0 = iLocal_243;
					system::start_new_script_with_args("lesterHandler", &iVar0, 1, 1424);
					unk_0xFD49725F3FE7EE13("lesterHandler");
					iLocal_253 = unk_0x1DD05E817C89C737();
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 18);
				}
			}
			if (unk_0xD8FC13DA1BA1DBA2("Michael", 0))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					Var1 = { 709,3766f, -964,2602f, 29,3954f };
					unk_0xB1EAADCB692D69CE(Var1, &(Var1.f_2), 0, 0);
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var1, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 261,7831f);
						if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						{
							unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 2000, 0, 1, 0, 0);
						}
						unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
					}
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
				}
			}
			if (unk_0x2B60F53D06BC6971(0))
			{
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			}
		}
		else if (iLocal_41 == -1 && !func_118(0))
		{
			iLocal_41 = unk_0x1DD05E817C89C737() + 1500;
		}
		else if (unk_0x1DD05E817C89C737() > iLocal_41 || func_118(0))
		{
			if (func_118(0))
			{
				unk_0x8F72AF14CE5AACE4(0);
			}
			else
			{
				Global_64166 = 0;
				Global_101572 = 0;
				func_194();
			}
			unk_0x55098D9E9AD58806(joaat("prop_cs_walking_stick"));
			unk_0x55098D9E9AD58806(joaat("prop_laptop_lester2"));
			func_72(0);
			func_195(0, 1, 1, 0, 0, 0, 0);
			func_192(&(Global_113969.f_2366.f_539), 86);
			func_162(&(Global_113969.f_2366.f_539), 86);
			func_161(&iLocal_43);
			unk_0x8744D2E3FC95740E(&uLocal_39, true);
			unk_0xD7B6A43ACC36D868(uLocal_247, 0);
			if (iLocal_252 != -1)
			{
				if (unk_0xF935563454D3B338(iLocal_252))
				{
					unk_0x8E99C7AF6C6639AB(iLocal_252);
				}
			}
			unk_0x93586F94C370857F();
			unk_0x79CA429D8B4B057A(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, 1, 0);
			unk_0xDAE61414743C8D1D(5);
			func_114(18, 0);
			func_154(0, 0);
		}
	}
	else if (!func_232(17))
	{
		if (unk_0xC4ADACBD3FE3F266("JH_1_MCS_4P2"))
		{
			unk_0xDD291722ADDCBD60();
		}
	}
	if (BitTest(uLocal_39, 18))
	{
		unk_0x66EFB3D6110055C4(0, 26, 1);
		if (unk_0x1DD05E817C89C737() > iLocal_253 + 1000)
		{
			unk_0x8744D2E3FC95740E(&uLocal_39, 18);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_158(4, 1);
						break;
					
					case 4:
						func_158(8, 1);
						break;
					
					case 6:
						func_158(10, 1);
						break;
					
					case 7:
						func_158(1, 1);
						break;
					
					case 8:
						func_158(3, 1);
						break;
					
					case 9:
						func_158(6, 1);
						break;
					
					case 10:
						func_158(9, 1);
						break;
					
					case 12:
						func_158(11, 1);
						break;
					
					case 13:
						func_158(12, 1);
						break;
					
					case 11:
						if (func_157(91))
						{
							func_158(0, 1);
						}
						break;
					
					case 5:
						if (func_157(91))
						{
							func_158(2, 1);
						}
						break;
					
					case 3:
						if (func_157(67))
						{
							func_158(5, 1);
						}
						break;
					
					case 2:
						if (func_157(77))
						{
							func_158(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && BitTest(Global_113969.f_24998.f_8[4], 0))
	{
		func_158(9, 1);
	}
	if (!func_39(13) && BitTest(Global_113969.f_24998.f_8[16], 0))
	{
		func_158(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_158(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_156(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_155("DI_FEED_HST");
	}
}

void func_155(char* sParam0)
{
	unk_0xCCDB0041859B85A6("");
	unk_0xB8ACFA63585700CC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_156(int iParam0)
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

int func_157(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_158(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (bVar0 >= 0 && bVar0 <= 31)
	{
		if (!func_160(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_26437.f_1), bVar0);
			if (!bParam1)
			{
				func_155(func_159(iParam0));
			}
		}
	}
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_160(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return BitTest(Global_113969.f_26437.f_1, iParam0);
	}
	return 0;
}

void func_161(int iParam0)
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

void func_162(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_163(uParam0, 0, 12);
			break;
		
		case 19:
			func_163(uParam0, 1, 13);
			break;
		
		case 29:
			func_163(uParam0, 1, 14);
			break;
		
		case 30:
			func_163(uParam0, 2, 15);
			func_163(uParam0, 1, 29);
			break;
		
		case 32:
			func_163(uParam0, 1, 16);
			func_163(uParam0, 0, 17);
			break;
		
		case 39:
			func_163(uParam0, 0, 21);
			func_163(uParam0, 1, 20);
			break;
		
		case 31:
			func_163(uParam0, 0, 18);
			break;
		
		case 20:
			func_163(uParam0, 2, 22);
			break;
		
		case 66:
			func_163(uParam0, 1, 23);
			break;
		
		case 68:
			func_163(uParam0, 1, 24);
			break;
		
		case 70:
			func_163(uParam0, 1, 67);
			break;
		
		case 8:
			func_163(uParam0, 1, 25);
			func_163(uParam0, 2, 26);
			break;
		
		case 67:
			func_163(uParam0, 1, 27);
			break;
		
		case 9:
			func_163(uParam0, 2, 28);
			break;
		
		case 38:
			func_163(uParam0, 2, 30);
			func_163(uParam0, 1, 19);
			break;
		
		case 83:
			func_163(uParam0, 2, 33);
			break;
		
		case 45:
			func_163(uParam0, 1, 35);
			break;
		
		case 64:
			func_163(uParam0, 0, 36);
			func_163(uParam0, 1, 37);
			break;
		
		case 91:
			func_163(uParam0, 0, 41);
			break;
		
		case 42:
			func_163(uParam0, 0, 58);
			Global_100937[0 /*98*/] = 0;
			func_163(uParam0, 2, 59);
			Global_100937[2 /*98*/] = 0;
			break;
		
		case 41:
			func_163(uParam0, 1, 42);
			func_163(uParam0, 2, 42);
			break;
		
		case 15:
			func_163(uParam0, 0, 46);
			func_163(uParam0, 1, 47);
			break;
		
		case 16:
			func_163(uParam0, 0, 48);
			break;
		
		case 48:
			func_163(uParam0, 1, 50);
			func_163(uParam0, 2, 51);
			break;
		
		case 74:
			func_163(uParam0, 0, 52);
			func_163(uParam0, 1, 66);
			break;
		
		case 76:
			func_163(uParam0, 1, 53);
			func_163(uParam0, 2, 54);
			func_163(uParam0, 0, 62);
			break;
		
		case 75:
			func_163(uParam0, 0, 61);
			func_163(uParam0, 1, 31);
			break;
		
		case 69:
			func_163(uParam0, 1, 63);
			break;
		
		case 84:
			func_163(uParam0, 0, 68);
			func_163(uParam0, 2, 69);
			break;
		
		case 85:
			func_163(uParam0, 0, 64);
			func_163(uParam0, 2, 65);
			break;
		
		case 93:
			func_163(uParam0, 1, 38);
			func_163(uParam0, 2, 39);
			break;
		
		case 11:
			func_163(uParam0, 2, 55);
			break;
		
		case 77:
			func_163(uParam0, 1, 56);
			func_163(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
	{
		iVar0 = Global_113969.f_18536[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_113969.f_18536[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_181();
	if (!func_180(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_179(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_179(Global_99972[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_164(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_100937[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				if (unk_0x26715B0ED6702C87(Global_101240[iParam0 /*3*/], -829,7478f, 192,117f, 76,73248f, -827,1384f, 153,8595f, 59,96172f, 33,25f, 0, 1))
				{
					if (Global_101232[iParam0] == 1)
					{
						*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
						if (system::vmag2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 37,43f, -23,81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28,826f, -1277,56f, -90,961f) - Vector(28,3203f, -1324,195f, -90,0089f) };
			*uParam4 = (1,27f - 194,1887f);
			return 1;
			break;
		
		case 9:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28,764f, -1431,464f, 66,028f) - Vector(28,2954f, -1351,52f, 37,5988f) };
			*uParam4 = (141,28f - 90,0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21,6401f, 38,5601f, 1,9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2,72f, 0,45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29,17f, -1417,047f, 54,081f) - Vector(28,2915f, -1464,68f, 72,2278f) };
			*uParam4 = (0,72f - 156,8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24,9f, -938,8f, 792,3f) - Vector(24,2312f, -906f, 763f) };
			*uParam4 = (2,23f - 7,2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28,701f, -1090,07f, 306,036f) - Vector(28,3684f, -1120,786f, 257,9167f) };
			*uParam4 = (-1f - 97,2736f);
			return 1;
			break;
		
		case 40:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 75:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5,4446f, -2912,043f, 659,5297f) - Vector(5,0589f, -2916,479f, 709,0244f) };
			*uParam4 = (247,4806f - 355,326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5,1176f, -2936,843f, 656,9753f) - Vector(5,1337f, -2917,325f, 643,5248f) };
			*uParam4 = (253,776f - 334,1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5,681f, -2769,795f, 593,033f) - Vector(5,0558f, -2819,085f, 594,4415f) };
			*uParam4 = (2,62f - 299,0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { -1,5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3,8721f, -5,9568f, 0f };
			*uParam4 = (164,2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28,1755f, -550,2679f, -1170,72f) - Vector(30,2361f, -526,9999f, -1257,5f) };
			*uParam4 = (310,4708f - 220,9554f);
			return 1;
			break;
		
		case 52:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 66:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 61:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2,9117f, -15,0499f, -0,3468f };
			*uParam4 = -139,9751f;
			return 1;
			break;
		
		case 64:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36,5734f, -85,1799f, -737,1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64,1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5,5414f, -6,6035f, 1,0473f };
				*uParam4 = -83,2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5,7209f, -12,3958f, 1,0746f };
				*uParam4 = -152,2593f;
			}
			return 1;
			break;
		
		case 112:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
			*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_164(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
				*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12,5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 114:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,9002f, 1,205f, -0,3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 106:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 99:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 3,2267f, 1,0966f, -0,354f };
			*uParam4 = -31,73f;
			return 1;
			break;
		
		case 125:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13,7322f, 1,8783f, 1,0593f };
			*uParam4 = 55,3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 91:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 15,4538f, -8,711f, 5,79f };
			*uParam4 = 2,4942f;
			return 1;
			break;
		
		case 93:
			if (func_164(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8,1f, -9,01f, 0,4439f };
				*uParam4 = 94,03f;
				return 1;
			}
			break;
		
		case 121:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 18,8468f, 40,7721f, 0f };
			*uParam4 = -116,3936f;
			return 1;
			break;
		
		case 115:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,517f, -33,7052f, -531,6035f) - Vector(45,6141f, -21,87f, -511,73f) };
			*uParam4 = ((177,259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1,7826f, 12,2098f, -0,6964f };
			*uParam4 = -96,0001f;
			return 1;
			break;
		
		case 117:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 11,8705f, -1,4684f, -1,6487f };
			*uParam4 = -125,8331f;
			return 1;
			break;
		
		case 94:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13,1578f, 16,3962f, 0,6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -21,0518f, 0,5037f, 0,4091f };
			*uParam4 = -83,1262f;
			return 1;
			break;
		
		case 108:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10,8971f, 2,0809f, -0,7983f };
			*uParam4 = -150,9417f;
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 79,9901f, -52,83f, -0,3533f };
			*uParam4 = 44,7231f;
			return 1;
			break;
		
		case 135:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
			*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
				*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
				*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xD2AA6F822D3A55D2(-5f, 5f), unk_0xD2AA6F822D3A55D2(-5f, 5f), 0f };
				*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2,4845f, 2,3286f, -0,383f };
				*uParam4 = -31,4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12,5f;
				return 1;
			}
			break;
		
		case 142:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7,5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_164(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13,2213f, 16,331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_164(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10,3876f, -10,3585f, -1,2183f };
				*uParam4 = 8,6726f;
				return 1;
			}
			break;
		
		case 158:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1,0793f, 15,631f, 1,1744f };
			*uParam4 = 2,52f;
			return 1;
			break;
		
		case 166:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 171:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 209:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2,19f, -1,23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1,3547f, 2,1615f, -0,3723f };
			*uParam4 = 177,8041f;
			return 1;
			break;
		
		case 213:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,2075f, 1,0943f, 0f };
				*uParam4 = 15,82f;
				return 1;
			}
			break;
		
		case 214:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2,291f, 1,0879f, 0,0635f };
			*uParam4 = 177,798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0,9714f, 1,6112f, -0,2773f };
			*uParam4 = -7,0583f;
			*uParam5 = { Vector(183,8081f, 578,5989f, 174,7651f) - Vector(176,086f, 551,7596f, 10,9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29,4846f, -1457,915f, -17,4132f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam4 = (89,0026f - -1,5f);
			*uParam5 = { Vector(33,6125f, -1563,461f, -147,0307f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,5168f, -33,5909f, -531,4f) - Vector(45,2617f, -28,54f, -521,13f) };
			*uParam4 = (357,1407f - 84,96f);
			return 1;
			break;
		
		case 216:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2,1752f, -2,3781f, 0f };
				*uParam4 = -68,4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3,9761f, 0,2542f, 0f };
				*uParam4 = -70,5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28,225f, -1015,11f, -70,4456f) - Vector(27,5447f, -1019,235f, -78,4023f) };
			*uParam4 = (162,098f - 109,0206f);
			return 1;
			break;
		
		case 192:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,7514f, -1573,632f, -1174,458f) };
			*uParam4 = (302,182f - 105,981f);
			return 1;
			break;
		
		case 193:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,3599f, -1573,692f, -1175,298f) };
			*uParam4 = (302,182f - 172,9187f);
			return 1;
			break;
		
		case 194:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12,74f, 3,26f, 0f };
				*uParam4 = 95,217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1,34f, 7,684f, 0f };
				*uParam4 = 173,52f;
				return 1;
			}
			break;
		
		case 200:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,4055f, -1607,568f, 44,4802f) - Vector(((28,2858f - 0,5f) + 1,5f), -1607,286f, 2,8895f) };
			*uParam4 = (318,2674f - (310,879f - 180f));
			return 1;
			break;
		
		case 201:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,1773f, -1592,787f, 3,6009f) - Vector(29,2903f, -1607,286f, 2,8895f) };
			*uParam4 = (322,6286f - 130,879f);
			return 1;
			break;
		
		case 202:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 91,3579f, 18,1788f, -0,1911f };
			*uParam4 = -90,3475f;
			return 1;
			break;
		
		case 222:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 12,5073f, -3,4625f, -0,3702f };
			*uParam4 = 14,3405f;
			return 1;
			break;
		
		case 223:
			if (func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21,87f, -10,5f, 0f };
				*uParam4 = -104,76f;
				return 1;
			}
			break;
		
		case 224:
			return func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7f, -1356,9f, 24,6f) - Vector(29,3437f, -1351,412f, 28,986f) };
			*uParam4 = ((270,1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -19,8544f, -10,4863f, -0,0334f };
			*uParam4 = -120,12f;
			return 1;
			break;
		
		case 228:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 21,5897f, -6,8544f, 0,6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -7,6041f, 0,1369f, 0,5812f };
			*uParam4 = -145,769f;
			return 1;
			break;
		
		case 230:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -1,6f, 7,6802f, 0,6947f };
			*uParam4 = -50,99f;
			return 1;
			break;
		
		case 238:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22,322f, -6,2034f, 0f };
			*uParam4 = 73,071f;
			return 1;
			break;
		
		case 250:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,2901f, -5,5798f, -0,0357f };
			*uParam4 = 160,56f;
			return 1;
			break;
		
		case 251:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,0739f, 7,7692f, -0,2984f };
				*uParam4 = -48,9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5,778f, -4,2397f, 0,9091f };
				*uParam4 = -12,9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0,6968f, 1,1033f, 0,912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_4)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0,6187f, -1440,421f, 2779,759f) - Vector(0,3109f, -1453,731f, 2789,845f) };
			uParam3->f_2 = (uParam3->f_2 + 0,5f);
			*uParam4 = (340,0835f - 4,44f);
			*uParam3 = { Vector(-0,7f, 16,55f, -3,3962f) + Vector(0,5f, 0,5f, -0,5f) };
			*uParam4 = (23,6441f + 90f);
			*uParam3 = { -4,0164f, 19,9594f, 0f };
			*uParam4 = 113,6465f;
			*uParam3 = { *uParam3 * Vector(1,1f, 1,1f, 1,1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9,8707f, 13,0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7,7078f, 23,9099f, 1,7307f };
			*uParam4 = 24,3187f;
			return 1;
			break;
		
		case 309:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -4,5662f, -3,2485f, (0,9455f - 1,7f) };
			*uParam4 = -138,6056f;
			return 1;
			break;
		
		case 305:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,8797f, 3597,047f, 1399,662f) - Vector(37,9419f, 3602,284f, 1394,208f) };
			*uParam4 = (315,9865f - 122,5269f);
			return 1;
			break;
		
		case 310:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10,5999f, 3,3997f, 1,0212f };
			*uParam4 = -50,3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13,2279f, -7,5348f, 0f };
			*uParam4 = 4,32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11,9596f, 0,345f, -1,0016f };
			*uParam4 = -42,4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3,424f, 7,6462f, 0,8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(7,1164f, -1094,205f, -1243,65f) - Vector(7,1f, -1105,15f, -1242,68f) };
			*uParam4 = (14,0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,8143f, -930,5448f, -1672,535f) - Vector(6,479f, -974,7168f, -1667,148f) };
			*uParam4 = (144,9416f - 171,253f);
			return 1;
			break;
		
		case 258:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,3025f, 6276,12f, -267,5488f) - Vector(30,5054f, 6250,9f, -301,4778f) };
			*uParam4 = (130,9896f - 10,247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,5629f, -387,5143f, -147,166f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (341,4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(24,4283f, -689,1462f, -1306,782f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (214,6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115,2022f - -176,25f);
			return 1;
			break;
		
		case 154:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115,2022f - -147,192f);
			return 1;
			break;
		
		case 165:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,0054f, -441,1681f, -1100,878f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (297,5568f - -144,622f);
			return 1;
			break;
		
		case 159:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,3852f, -199,5354f, -825,3141f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (29,4869f - -62,5f);
			return 1;
			break;
		
		case 160:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,2086f, -144,1027f, -730,8218f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (28,532f - 119f);
			return 1;
			break;
		
		case 167:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(31,7307f, -523,2257f, -1144,174f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (299,2956f - -22,32f);
			return 1;
			break;
		
		case 152:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9436f, 314,6989f, -1421,8f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (335,4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,469f, 255,3143f, -706,187f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (117,3069f - 37,27f);
			return 1;
			break;
		
		case 225:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7165f, -1677,734f, 185,4888f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (54,2538f - -83,8f);
			return 1;
			break;
		
		case 218:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,3218f, -1405,159f, -17,556f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (91,3098f - -70,4124f);
			return 1;
			break;
		
		case 219:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,2611f, -1492,151f, -219,3172f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (139,2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(25,3018f, -1811,693f, -22,6138f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (141,0423f - -117,356f);
			return 1;
			break;
		
		case 206:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(208,5337f, 773,6719f, 164,1308f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (136,3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(108,9995f, 396,924f, -263,3745f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (284,4611f - -95,588f);
			return 1;
			break;
		
		case 274:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(139,5782f, 2030,446f, -1883,836f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (340,5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,0296f, 6560,557f, -200,684f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (134,5505f - 110,5931f);
			return 1;
			break;
		
		case 271:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,4647f, -1083,751f, -1278,023f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115,8919f - 26,3597f);
			return 1;
			break;
		
		case 248:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(102,4417f, 164,5124f, 325,8113f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (68,4108f - 10,77f);
			return 1;
			break;
		
		case 242:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(56,616f, -122,9896f, -1622,22f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (210,8653f - 13,7207f);
			return 1;
			break;
		
		case 254:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,0019f, -213,7796f, 172,442f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (250,3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(17,3426f, -836,0328f, -887,9977f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (270,8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,8359f, -1182,704f, -1264,218f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (298,4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(104,8218f, 289,0073f, -80,4564f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (247,6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (228,6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (228,6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(103,1881f, 177,7729f, 288,977f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (68,9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,7794f, -432,4635f, -161,4589f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (340,0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(202,1143f, 828,3607f, -806,8813f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (101,1612f - -54,347f);
			return 1;
			break;
		
		case 103:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,0174f, -1108,081f, -1724,72f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (319,8931f - 143,4931f);
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,2248f, -628,4899f, -1859,505f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (229,0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,1469f, 90,4242f, -1393,442f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (123,1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(101,921f, 186,1865f, 370,5876f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (159,7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(45,9871f, -188,5636f, -1391,156f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (36,5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(46,0567f, 3076,742f, 2001,918f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (328,101f - -33,128f);
			return 1;
			break;
		
		case 88:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9442f, 314,7191f, -1421,821f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (336,5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(37,4888f, 5643,726f, -569,3535f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (296,1685f - unk_0x97BC40FFA2FFCCD2(7,4998f, -7,4995f));
			return 1;
			break;
		
		case 307:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(47,4526f, 4717,728f, -1555,593f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (236,223f - unk_0x97BC40FFA2FFCCD2(-10,6345f, -0,7246f));
			return 1;
			break;
		
		case 308:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(22,7549f, 4629,148f, -1553,861f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (332,7842f - unk_0x97BC40FFA2FFCCD2(3,4271f, 13,6787f));
			return 1;
			break;
		
		case 278:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,9161f, -1009,745f, 631,8275f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (98,8128f - -33,77f);
			return 1;
			break;
		
		case 279:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(234,6825f, 900,8749f, -111,9033f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (6,1087f - 155,68f);
			return 1;
			break;
		
		case 240:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,5351f, 3636,151f, 1546,323f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (298,4009f - -4,124f);
			return 1;
			break;
		
		case 241:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,512f, 6439,667f, -179,4242f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (225,5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2977f, -1390,545f, 486,7419f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (178,298f - -90f);
			return 1;
			break;
		
		case 266:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,5662f, 143,2342f, -3052,895f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (85,3429f - 68,8227f);
			return 1;
			break;
		
		case 267:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(39,9155f, 4934,08f, 2202,375f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (314,2654f - 56,2037f);
			return 1;
			break;
		
		case 269:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,149f, -782,0952f, 401,2502f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (179,9905f - -106,6605f);
			return 1;
			break;
		
		case 246:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,3919f, -1534,507f, -1195,256f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (305,8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,8792f, -1241,213f, -573,3765f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (316,9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,0002f, -1298,539f, -724,429f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (230,5715f - -32,488f);
			return 1;
			break;
		
		case 260:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(61,203f, 250,8387f, -1309,114f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (10,7756f - -29,093f);
			return 1;
			break;
		
		case 261:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,764f, 60,3233f, 917,6678f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (148,021f - 229,6085f);
			return 1;
			break;
		
		case 270:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = unk_0xD2AA6F822D3A55D2(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -48,5171f, 28,4211f, 3,0057f };
			*uParam4 = -1,3831f;
			return 1;
			break;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_166(int iParam0, var uParam1, int iParam2)
{
	if (Global_100937[iParam0 /*98*/] == 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("blimp"))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_178(iParam0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xEA4F815FDC353FEF(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x00C6FDED3EB75117(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xBA16CD57E37AC32A(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAE447CBB33B40CA3(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0xD3CE8D1E6564B011(Global_100937[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x78B050AFBA6D1517(Global_100937[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_167(Global_100937[iParam0 /*98*/], 0, -1))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_100937[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_100937[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_165(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_100937[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_165(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_100937[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_100937[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_165(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_167(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_177())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_176() && !func_175()) && !func_174()) && !func_173()) && !func_177())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_172() || unk_0x761778199FE1211C()) || func_171())
					{
					}
					else if (!func_174())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_170(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_168(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_168(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_169())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_169()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1240172147:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -143587026:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case 1690421418:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case 258105345:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case 1249425552:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -986656474:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 1307736079:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1737348074:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case -223461503:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1121330119:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case -1628000569:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case -946047670:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 1579902654:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -773802025:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case 1968807591:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case -1958428933:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case 1881415402:
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case -999594302:
			iVar1 = Global_262145.f_35588[17];
			break;
		
		case -1896488056:
			iVar1 = Global_262145.f_35588[18];
			break;
		
		case 1452003510:
			iVar1 = Global_262145.f_35588[19];
			break;
		
		case -1444856003:
			iVar1 = Global_262145.f_35588[20];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

var func_171()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_172()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_173()
{
	return 0;
}

int func_174()
{
	return 1;
}

int func_175()
{
	return 1;
}

int func_176()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_177()
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
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
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

int func_178(int iParam0)
{
	if (Global_100937[iParam0 /*98*/] == joaat("blimp") || Global_100937[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("submersible") || Global_100937[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("burrito2") || Global_100937[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("entityxf") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("cheetah") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("policeb") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("ztype") && !Global_113969.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("polmav") && !Global_113969.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("jb700") && !Global_113969.f_9088.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("monroe") && !Global_113969.f_9088.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_100937[iParam0 /*98*/] == joaat("gauntlet") && !Global_113969.f_9088.f_330[80 /*6*/]) && !Global_113969.f_9088.f_330[81 /*6*/]) && !Global_113969.f_9088.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_179(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_180(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_180(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_180(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_181()
{
	var uVar0;
	
	func_191(&uVar0, unk_0x4BA5A16068183C5E());
	func_190(&uVar0, unk_0x18E502A71E28968C());
	func_189(&uVar0, unk_0x5295501D0862870D());
	func_184(&uVar0, unk_0xB12880C92EA6EE15());
	func_183(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_182(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188(*uParam0);
	iVar1 = func_186(*uParam0);
	if (iParam1 < 1 || iParam1 > func_185(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_185(int iParam0, int iParam1)
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

var func_186(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_187(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_187(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_188(var uParam0)
{
	return uParam0 & 15;
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_180(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_193(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_193(var uParam0)
{
	*uParam0 = -15;
}

int func_194()
{
	if (func_118(0))
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

void func_195(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_204(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_74())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_203(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_204(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_203(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_201(unk_0x259BE71D8A81D4FA())) && !func_197(unk_0x259BE71D8A81D4FA(), 0)) && !func_196()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_201(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_196()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_197(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_200(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_198(-1, 0) == 8;
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

int func_198(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_199();
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

int func_199()
{
	return Global_1574926;
}

int func_200(var uParam0)
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

int func_201(int iParam0)
{
	if (func_197(iParam0, 0))
	{
		return 1;
	}
	if (func_202())
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

bool func_202()
{
	return BitTest(Global_2621446, 3);
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_204(int iParam0)
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

void func_205()
{
	unk_0xCBC55350FF75F537(-1747852954);
	if (func_232(16))
	{
		if (!func_118(0))
		{
			if (!BitTest(uLocal_39, 10))
			{
				unk_0x839AD252B0708F35("JH_1_MCS_4_P1_ALT1", 8);
				func_213();
				func_115(0, 0, 1);
				uLocal_247 = unk_0xA7B0B03284E7503C(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, 0, 1, 1, 1, 1);
				iLocal_252 = unk_0x8CC50AC10D8037C7(Local_44.f_1.f_394, Local_44.f_1.f_397 * Vector(1,5f, 1,5f, 1,5f), 0f, 0, 7);
				unk_0x89C4F1335B4A6633(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397);
				unk_0x79CA429D8B4B057A(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 10);
			}
			else if (unk_0xB3FA103AA6383C28())
			{
				unk_0x60A0A4CD710160D5("LESTER", 1, 0, 0, 0);
			}
			if (func_157(86))
			{
				if (!BitTest(uLocal_39, 1))
				{
					if (func_151(0))
					{
						if (func_210(&iLocal_43, 0, 0, 0, 0) == 1)
						{
							func_203(1, 0, 1, 0);
							if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
							{
								unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
								unk_0xDAE61414743C8D1D(0);
							}
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, true);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 2);
						}
					}
				}
			}
			if (BitTest(uLocal_39, 2))
			{
				switch (iLocal_40)
				{
					case 0:
						if (unk_0x78411E34CF90EA8C(uLocal_248))
						{
							unk_0x85E6A1E36B5E2E4D(uLocal_248, 0);
						}
						if (unk_0x78411E34CF90EA8C(uLocal_249))
						{
							unk_0x85E6A1E36B5E2E4D(uLocal_249, 0);
						}
						uLocal_248 = unk_0x96A32328480B485C(26379945, 724,4682f, -992,0684f, 24,25137f, 5,259225f, 0,000715f, 25,88918f, 44,13121f, 0, 2);
						uLocal_249 = unk_0x96A32328480B485C(26379945, 724,3727f, -991,3205f, 24,43304f, 31,49925f, 0,000715f, -4,206256f, 44,13121f, 0, 2);
						if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[0]))
						{
							if (!unk_0x1C2F771CDC87A3A5(Global_98010.f_9[0], 0))
							{
								iLocal_243 = Global_98010.f_9[0];
								unk_0xEE0BCDB1B5E36BCB(iLocal_243, 0, 1);
							}
						}
						if (unk_0xFC8BFE4B41177C22(Global_98010[0]))
						{
							if (!unk_0x1C2F771CDC87A3A5(Global_98010[0], 0))
							{
								iLocal_245 = Global_98010[0];
							}
						}
						iLocal_40++;
						break;
					
					case 1:
						func_195(1, 1, 0, 0, 0, 0, 0);
						unk_0x37B894853929BF1A(0);
						unk_0x747786364137DC63(0);
						if (unk_0xFC8BFE4B41177C22(iLocal_245))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_245, 0))
							{
								unk_0xD6B4D02A102485DC(uLocal_248, iLocal_245, 0f, 0f, 0f, 1);
							}
						}
						unk_0xB56F35D8A770F80F(uLocal_249, uLocal_248, 5000, 1, 1);
						unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
						iLocal_41 = unk_0x1DD05E817C89C737();
						iLocal_40++;
						break;
					
					case 2:
						if ((unk_0x1DD05E817C89C737() - iLocal_41) > 1200)
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
							{
								if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_245, 0))
									{
										if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_245, 0))
										{
											unk_0xB5396F1FB088FE38(&uLocal_250);
											unk_0x23EB5FC236231892(0, iLocal_245, 0);
											unk_0xA966E518B752B92A(0, 718,1777f, -976,126f, 23,9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x93C0674FC00824D0(uLocal_250);
											unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
											unk_0x4BD42B0527065BB6(unk_0x4A8C381C258A124D(), uLocal_250);
										}
									}
								}
							}
							iLocal_40++;
						}
						break;
					
					case 3:
						if ((unk_0x1DD05E817C89C737() - iLocal_41) > 2400)
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_245))
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_245, 0))
									{
										if (unk_0xCECDBB848D53DEB2(iLocal_243, iLocal_245, 0))
										{
											unk_0xB5396F1FB088FE38(&uLocal_251);
											unk_0x23EB5FC236231892(0, iLocal_245, 0);
											unk_0xA966E518B752B92A(0, 718,1777f, -976,126f, 23,9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x93C0674FC00824D0(uLocal_251);
											unk_0x974022927CB47E68(iLocal_243);
											unk_0x4BD42B0527065BB6(iLocal_243, uLocal_251);
										}
									}
								}
							}
							iLocal_40++;
						}
						break;
					
					case 4:
						if ((unk_0x1DD05E817C89C737() - iLocal_41) > 5000)
						{
							unk_0x8744D2E3FC95740E(&uLocal_39, 2);
						}
						break;
					}
			}
			if (BitTest(uLocal_39, 1) && !BitTest(uLocal_39, 2))
			{
				if (unk_0xC4ADACBD3FE3F266("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0xFD216000DC314A92())
					{
						iLocal_244 = unk_0x4A8C381C258A124D();
						if (!unk_0x1C2F771CDC87A3A5(iLocal_244, 0))
						{
							unk_0xF293D66D4452C854(iLocal_244, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
						{
							unk_0xF293D66D4452C854(iLocal_243, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 9);
						unk_0xF293D66D4452C854(iLocal_246, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 8);
						func_209(&(Local_44.f_484), 0, 0, "MICHAEL", 1, 1);
						func_209(&(Local_44.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_41 = unk_0x1DD05E817C89C737();
						unk_0xED65412F8B26ED99(2048);
					}
					else
					{
						func_121();
						if (!BitTest(uLocal_39, 17))
						{
							if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
							{
								unk_0x10B228D2FDB7AF16(800);
							}
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 17);
						}
						if (unk_0xD9E3F021F9D8CEF9())
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 16);
						}
						if (BitTest(uLocal_39, 16))
						{
							if (unk_0x15CCE8886267624F())
							{
								if (!BitTest(uLocal_39, 12))
								{
									func_115(0, 1, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 12);
								}
								if (!BitTest(uLocal_39, 13))
								{
									func_115(0, 2, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 13);
								}
								if (!BitTest(uLocal_39, 14))
								{
									func_115(0, 3, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 14);
								}
								if (!BitTest(uLocal_39, 15))
								{
									func_115(0, 4, 1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 15);
								}
								func_207(&Local_44);
								if (!BitTest(uLocal_39, 0))
								{
									func_206();
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, false);
								}
							}
						}
						if (!BitTest(uLocal_39, 5))
						{
							if (unk_0x78411E34CF90EA8C(uLocal_248))
							{
								unk_0x4CBC5D1BC117616B(uLocal_248, 0);
							}
							if (unk_0x78411E34CF90EA8C(uLocal_249))
							{
								unk_0x4CBC5D1BC117616B(uLocal_249, 0);
							}
							unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
							if (unk_0x78411E34CF90EA8C(uLocal_249))
							{
								unk_0x85E6A1E36B5E2E4D(uLocal_249, 0);
							}
							if (unk_0x78411E34CF90EA8C(uLocal_249))
							{
								unk_0x85E6A1E36B5E2E4D(uLocal_249, 0);
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_243))
							{
								unk_0x734A9F4537A31459(&iLocal_243);
							}
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 5);
						}
						if (!BitTest(uLocal_39, 6))
						{
							if (iLocal_42 > 0)
							{
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 6);
							}
						}
						if (!BitTest(uLocal_39, 12))
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_41) > 14058)
							{
								func_115(0, 1, 1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 12);
							}
						}
						else if (!BitTest(uLocal_39, 13))
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_41) > 22887)
							{
								func_115(0, 2, 1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 13);
							}
						}
						else if (!BitTest(uLocal_39, 14))
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_41) > 27988)
							{
								func_115(0, 3, 1);
								func_207(&Local_44);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 14);
							}
						}
						else if (!BitTest(uLocal_39, 15))
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_41) > 42084)
							{
								func_115(0, 4, 1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 15);
							}
						}
						if (BitTest(uLocal_39, 8))
						{
							if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_246 = unk_0x0646D07BB2D516CD(unk_0x4240B5D04F91480C("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0x8744D2E3FC95740E(&uLocal_39, 8);
							}
						}
						if (BitTest(uLocal_39, 9))
						{
							if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_243 = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Lester", joaat("ig_lestercrest")));
								unk_0x8744D2E3FC95740E(&uLocal_39, 9);
							}
						}
						if (unk_0xD8FC13DA1BA1DBA2("Michael", 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_244, 0))
							{
								unk_0xAAA71DD7E9059338(iLocal_244, 1);
								unk_0x0428AFDCAA63B06E(iLocal_244, 208, 1);
								unk_0x0428AFDCAA63B06E(iLocal_244, 118, 0);
								unk_0x0428AFDCAA63B06E(iLocal_244, 213, 0);
								unk_0x63C8DCBEC1CF8225(iLocal_244, 708,8129f, -966,3621f, 29,3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0xD8FC13DA1BA1DBA2("Lester", 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_246))
								{
									unk_0x4D306DD94DD6FDBA(iLocal_246, iLocal_243, unk_0x72F7E39FB49FC0BA(iLocal_243, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
								}
							}
							if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
							{
								unk_0xAAA71DD7E9059338(iLocal_243, 1);
								unk_0x0428AFDCAA63B06E(iLocal_243, 208, 1);
								unk_0x0428AFDCAA63B06E(iLocal_243, 118, 0);
								unk_0x0428AFDCAA63B06E(iLocal_243, 213, 0);
								unk_0x63C8DCBEC1CF8225(iLocal_243, 708,3643f, -963,9194f, 29,4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x2B60F53D06BC6971(0))
						{
							if (!BitTest(uLocal_39, 0))
							{
								func_206();
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, false);
							}
							if (!BitTest(uLocal_39, 7))
							{
								if (!unk_0x1C2F771CDC87A3A5(iLocal_244, 0))
								{
									unk_0x4285E11B28063EE0(iLocal_244, 0, 0);
								}
								if (!unk_0x1C2F771CDC87A3A5(iLocal_243, 0))
								{
									unk_0x4285E11B28063EE0(iLocal_243, 0, 0);
								}
								if (unk_0xFC8BFE4B41177C22(iLocal_246))
								{
									unk_0x4285E11B28063EE0(iLocal_246, 0, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, 7);
							}
							func_114(16, 0);
						}
						iLocal_42++;
					}
				}
			}
		}
		else
		{
			func_209(&(Local_44.f_484), 0, 0, "MICHAEL", 1, 1);
			func_209(&(Local_44.f_484), 3, 0, "LESTER", 1, 1);
			if (func_151(0))
			{
				if (func_210(&iLocal_43, 0, 0, 0, 0) == 1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_39, true);
				}
			}
			if (BitTest(uLocal_39, 1))
			{
				func_206();
				func_114(16, 0);
			}
		}
	}
	else
	{
		if (unk_0xC4ADACBD3FE3F266("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0xDD291722ADDCBD60();
		}
		if (BitTest(uLocal_39, 10))
		{
			unk_0x8744D2E3FC95740E(&uLocal_39, 10);
		}
	}
}

void func_206()
{
	func_85(1, 0, 1);
	func_85(2, 0, 1);
	func_214(&Local_44);
	func_67(&Local_44);
}

void func_207(var uParam0)
{
	if (BitTest(uParam0->f_449, 1))
	{
		if (!unk_0xFD216000DC314A92())
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_208(uParam0);
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), true);
		unk_0x8744D2E3FC95740E(&Global_97522, *uParam0);
	}
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_428[iVar0]))
		{
			unk_0x51C8BEA2005931AB(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_209(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_210(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_212(0))
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
		if (!func_151(iParam2))
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
			func_211(iParam0, iParam4);
		}
	}
	return 2;
}

void func_211(var uParam0, int iParam1)
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

int func_212(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_213()
{
	Global_101572 = 1;
}

void func_214(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_69(uParam0, func_215(*uParam0));
				func_85(2, *uParam0, 0);
			}
			else
			{
				func_123(uParam0);
				func_85(2, *uParam0, 0);
			}
		}
	}
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_232(18);
			break;
		
		case 1:
			return func_232(22);
			break;
		
		case 2:
			return func_232(40);
			break;
		
		case 3:
			return func_232(8);
			break;
		
		case 4:
			return func_232(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_216()
{
	return Global_79652;
}

int func_217(var uParam0)
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_207(uParam0);
	}
	if (BitTest(uParam0->f_449, 0))
	{
		func_218(uParam0);
	}
	return 1;
}

void func_218(var uParam0)
{
	unk_0x48FA483FE4F18CFE("HEIST_BULLETIN_BOARD");
	unk_0x55098D9E9AD58806(joaat("prop_ld_planning_pin_01"));
	unk_0x55098D9E9AD58806(joaat("prop_ld_planning_pin_02"));
	unk_0x55098D9E9AD58806(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_414));
	}
	unk_0xA790E8E6FD7393AC(5, 0);
	unk_0x8744D2E3FC95740E(&Global_97523, *uParam0);
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), false);
}

void func_219(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		fVar0 = system::vdist2(uParam0->f_401, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
		if (BitTest(uParam0->f_449, 1))
		{
			func_227(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || BitTest(Global_97522, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (func_226(uParam0))
				{
					if (BitTest(Global_97522, *uParam0))
					{
						if (BitTest(Global_97524, *uParam0))
						{
							func_221(uParam0);
						}
					}
					else
					{
						func_221(uParam0);
					}
				}
			}
			else
			{
				func_220(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !BitTest(Global_97522, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (BitTest(uParam0->f_449, 1))
				{
					func_207(uParam0);
				}
				func_218(uParam0);
			}
		}
	}
}

void func_220(var uParam0)
{
	if (!unk_0x369A4B2B92F12461())
	{
		return;
	}
	unk_0xF2CB0224D3BE0B42(&(uParam0->f_1.f_272), 5);
	unk_0xD7E1DF759CD0FFF2("HEIST_BULLETIN_BOARD", 0, -1);
	if (*uParam0 != 1)
	{
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_planning_pin_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_planning_pin_02"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0x5AF05959A6F22BB4(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0x5AF05959A6F22BB4("INSTRUCTIONAL_BUTTONS");
	unk_0x0B0C9A0F9AAEB7F0(&Global_97521, *uParam0);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), false);
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_225(uParam0);
		func_224(uParam0);
		func_222(uParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), true);
	}
}

void func_222(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (system::to_float((unk_0xC5935DFB3F39785A(0, 65535) - 32767)) / 4000f);
			fVar3 = (system::to_float((unk_0xC5935DFB3F39785A(0, 65535) - 32767)) / 4000f);
			Var4 = { func_223(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0x4E55EAB577C13329(iVar1, Var4, 1, 1, 0);
			unk_0xCF39804E8C88080E(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_428[iVar0], 1, 0);
			unk_0x935364B4448CD584(uParam0->f_428[iVar0], 1);
			unk_0x44C48AC14D3C09ED(uParam0->f_428[iVar0], 0, 0);
			unk_0xBF861D73D95BF415(uParam0->f_428[iVar0], 0);
			unk_0x5D7CD709B34C90F0(uParam0->f_428[iVar0], 1);
		}
		iVar0++;
	}
	unk_0x8744D2E3FC95740E(&Global_97524, *uParam0);
}

Vector3 func_223(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * system::cos((90f - fVar6))), (fVar4 * system::sin((90f - fVar6)))) };
	return Var7;
}

void func_224(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		uVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = BitTest(Global_113969.f_1.f_120[iVar1], uVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x330108B080A2132F(uParam0->f_1.f_118[iVar0]);
			unk_0x557F1E2300EF1A3E(bVar3);
			unk_0xE6B753D52F4CA222();
		}
		else
		{
			unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x330108B080A2132F(uParam0->f_1.f_118[iVar0]);
			unk_0x557F1E2300EF1A3E(bVar3);
			unk_0x330108B080A2132F(false);
			unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0xE6B753D52F4CA222();
		}
		iVar0++;
	}
}

void func_225(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x88F483FBD433696A(uParam0->f_413, "CREATE_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415 + 1);
	unk_0x330108B080A2132F(2);
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_14));
	unk_0x74BF156C860580D4(system::to_float(uParam0->f_1.f_14.f_1));
	unk_0xE6B753D52F4CA222();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(uParam0->f_415 + 1);
			unk_0x330108B080A2132F(iVar1);
			unk_0x330108B080A2132F(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0xE6B753D52F4CA222();
			bVar1++;
		}
		iVar2++;
	}
	unk_0x88F483FBD433696A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x330108B080A2132F(uParam0->f_415 + 1);
	unk_0xE6B753D52F4CA222();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
		unk_0x330108B080A2132F(uParam0->f_415 + 1);
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_VIEW");
		unk_0x330108B080A2132F(uParam0->f_415 + 1);
		unk_0x557F1E2300EF1A3E(false);
		unk_0xE6B753D52F4CA222();
	}
}

int func_226(var uParam0)
{
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0xDCB78A15E5F495DC(5))
	{
		return 0;
	}
	if (unk_0x369A4B2B92F12461())
	{
		if (!unk_0xD7E1DF759CD0FFF2("HEIST_BULLETIN_BOARD", 0, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0x6252BC0DD8A320DB(joaat("prop_ld_planning_pin_01")) || !unk_0x6252BC0DD8A320DB(joaat("prop_ld_planning_pin_02"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_97523, *uParam0);
	return 1;
}

void func_227(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_228(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0,5f);
		fVar1 = (uParam0->f_1.f_5 * 0,5f);
		unk_0x3D1B3BF5963D08DE(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * system::cos((90f - uParam0->f_404))), (fVar0 * system::sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (BitTest(Global_97521, *uParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 16);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 15);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 14);
		unk_0x8744D2E3FC95740E(&Global_97521, *uParam0);
	}
	if (BitTest(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0x88F483FBD433696A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x330108B080A2132F(uParam0->f_1.f_118[iVar0]);
			unk_0x557F1E2300EF1A3E(bVar2);
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), 16);
	}
	if (BitTest(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (system::to_float((unk_0xC5935DFB3F39785A(0, 65535) - 32767)) / 4000f);
					fVar5 = (system::to_float((unk_0xC5935DFB3F39785A(0, 65535) - 32767)) / 4000f);
					Var6 = { func_223(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0x4E55EAB577C13329(iVar3, Var6, 1, 1, 0);
					unk_0xCF39804E8C88080E(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0xEE0BCDB1B5E36BCB(uParam0->f_428[iVar0], 1, 0);
					unk_0x935364B4448CD584(uParam0->f_428[iVar0], 1);
					unk_0x44C48AC14D3C09ED(uParam0->f_428[iVar0], 0, 0);
					unk_0xBF861D73D95BF415(uParam0->f_428[iVar0], 0);
					unk_0x5D7CD709B34C90F0(uParam0->f_428[iVar0], 1);
				}
			}
			else if (!unk_0xFC8BFE4B41177C22(uParam0->f_428[iVar0]))
			{
				unk_0x51C8BEA2005931AB(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), 15);
	}
	if (BitTest(uParam0->f_449, 14))
	{
		func_229(uParam0);
		func_33(uParam0);
		func_225(uParam0);
		unk_0x8744D2E3FC95740E(&(uParam0->f_449), 14);
	}
}

void func_229(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(uParam0->f_415 + 1);
	unk_0xE6B753D52F4CA222();
}

bool func_230(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_231(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95498[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92265)
	{
		if (Global_92265[iVar0 /*5*/] != -1)
		{
			if (Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_232(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_233(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	
	*uParam0 = iParam1;
	Var0 = { Global_97459[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_97459[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar1;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * system::cos((360f - fVar1))), (-uParam0->f_1.f_8 * system::sin((360f - fVar1)))) };
	uParam0->f_408 = { -0,85f, 0f, fVar1 };
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), false);
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), true);
	unk_0x8744D2E3FC95740E(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_234(var uParam0, var uParam1)
{
	func_243(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708,9957f, -965,256f, 31,39533f, 5,5f, 6,25f, 4f);
	func_242(uParam0, 750, 540, 2,1f, 1,47f, 3,6f, 2,05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_241(uParam0, 20f, 22f, 28f);
	func_240(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_239(uParam0, 1, "CRW_GM", "");
	func_239(uParam0, 4, "CRW_NR", "");
	func_239(uParam0, 6, "CRW_PH", "");
	func_239(uParam0, 7, "CRW_CF", "");
	func_239(uParam0, 8, "CRW_ET", "");
	func_239(uParam0, 9, "CRW_KD", "");
	func_239(uParam0, 10, "CRW_PM", "CRM_PM");
	func_239(uParam0, 12, "CRW_RL", "CRM_RL");
	func_238(uParam0, 0, 0, 0, 0);
	func_238(uParam0, 6, 0, 0, 0);
	func_238(uParam0, 1, 0, 0, 0);
	func_238(uParam0, 3, 1, 0, 0);
	func_238(uParam0, 11, 2, 0, 0);
	func_238(uParam0, 5, 3, 0, 0);
	func_238(uParam0, 9, 3, 0, 0);
	func_238(uParam0, 2, 4, 0, 0);
	func_238(uParam0, 7, 9, 0, 0);
	func_238(uParam0, 10, 10, 0, 0);
	func_237(uParam0, 2, 2, "H_TD_SEC");
	func_237(uParam0, 2, 2, "H_TD_PHOTO");
	func_237(uParam0, 2, 5, "H_TD_PLAN");
	func_237(uParam0, 2, 6, "H_TD_CREW");
	func_237(uParam0, 7, 11, "H_TD_CARB");
	func_237(uParam0, 8, 9, "H_TD_BUGS");
	func_237(uParam0, 8, 10, "H_TD_GAS");
	func_236(uParam0, 0, 203, 74);
	func_236(uParam0, 1, 368, 181);
	func_236(uParam0, 1, 556, 189);
	func_236(uParam0, 2, 690, 63);
	func_236(uParam0, 2, 673, 308);
	func_236(uParam0, 2, 671, 406);
	func_236(uParam0, 3, 245, 244);
	func_236(uParam0, 4, 70, 68);
	func_235(uParam0, 0, "JHP12", 214, 165, 1);
	func_235(uParam0, 0, "JHP13", 254, 46, 1);
	func_235(uParam0, 0, "JHP14", 70, 97, 1);
	func_235(uParam0, 0, "JHP15", 254, 275, 1);
	func_235(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_237(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_239(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0x1B79E937E91F40C3(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_240(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var1 };
	uParam0->f_108[0 /*4*/] = { Var2 };
	uParam0->f_108[1 /*4*/] = { Var3 };
	uParam0->f_280[1 /*2*/] = { Var4 };
	uParam0->f_280[2 /*2*/] = { Var5 };
	uParam0->f_280[0 /*2*/] = { Var6 };
	uParam0->f_280[3 /*2*/] = { Var7 };
}

void func_241(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_242(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_243(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { Param11 };
	uParam0->f_397 = { Param12 };
}

int func_244(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_245(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_246()
{
	if (unk_0xC4ADACBD3FE3F266("JH_1_MCS_4P2") || unk_0xC4ADACBD3FE3F266("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0xDD291722ADDCBD60();
	}
	func_114(16, 0);
	func_114(17, 0);
	func_114(18, 0);
	func_85(1, 0, 0);
	func_85(2, 0, 0);
	unk_0xD7B6A43ACC36D868(uLocal_247, 0);
	if (iLocal_252 != -1)
	{
		if (unk_0xF935563454D3B338(iLocal_252))
		{
			unk_0x8E99C7AF6C6639AB(iLocal_252);
		}
	}
	unk_0x93586F94C370857F();
	unk_0x79CA429D8B4B057A(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, 1, 0);
	unk_0xDAE61414743C8D1D(5);
	if (iLocal_43 != -1)
	{
		func_161(&iLocal_43);
	}
	while (!func_217(&Local_44))
	{
		system::wait(0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

