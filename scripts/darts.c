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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_32 = 0f;
	struct<3> Local_33 = { 0, 0, 0 } ;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<9> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	char* sLocal_55 = NULL;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
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
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_105 = 0;
	struct<68> Local_106 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_129 = 0f;
	var uLocal_130 = 0;
	float fLocal_131 = 0f;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<3> Local_136 = { 0, 0, 0 } ;
	var uLocal_137[2] = { 0, 0 };
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	bool bLocal_153 = 0;
	bool bLocal_154 = 0;
	bool bLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
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
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	float fLocal_213 = 0f;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	char* sLocal_218 = NULL;
	char* sLocal_219 = NULL;
	int iLocal_220 = 0;
	char* sLocal_221 = NULL;
	char* sLocal_222 = NULL;
	char* sLocal_223[3] = { NULL, NULL, NULL };
	char* sLocal_224[3] = { NULL, NULL, NULL };
	char* sLocal_225[3] = { NULL, NULL, NULL };
	char* sLocal_226[3] = { NULL, NULL, NULL };
	struct<5> Local_227 = { 0, 0, 0, 0, 0 } ;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26[20];
	var uVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_26 = joaat("prop_dart_1");
	iLocal_27 = joaat("prop_dart_2");
	iLocal_30 = joaat("prop_dart_bd_cab_01");
	fLocal_32 = 0,063f;
	Local_33 = { -0,0035f, 0f, -0,001f };
	iLocal_35 = joaat("prop_target_bull");
	Local_40 = { 987,8541f, -98,4173f, 73,8599f };
	fLocal_45 = 0,1f;
	iLocal_56 = 3;
	fLocal_59 = 80f;
	fLocal_60 = 140f;
	fLocal_61 = 180f;
	iLocal_67 = 1;
	iLocal_68 = 65;
	iLocal_69 = 49;
	iLocal_70 = 64;
	iLocal_93 = 65;
	iLocal_95 = 660;
	fLocal_100 = 0,27f;
	fLocal_101 = 0,1f;
	fLocal_102 = -120f;
	fLocal_103 = 127f;
	fLocal_129 = ((0,05f + 0,275f) - 0,01f);
	fLocal_131 = 0f;
	Local_136 = { 500f, 500f, 500f };
	bLocal_147 = true;
	Local_208 = { -573,1373f, 294,0269f, 78,1765f };
	Local_209 = { -574,1169f, 292,7964f, 78,1766f };
	Local_210 = { 1995,295f, 3050,084f, 46,91535f };
	Local_211 = { 1995,488f, 3047,383f, 46,91535f };
	fLocal_212 = 172,6813f;
	fLocal_213 = 274,5094f;
	fLocal_214 = 142,6717f;
	fLocal_215 = 44,8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_221 = "facials@gen_female@variations@happy";
	switch (func_508(unk_0x4A8C381C258A124D()))
	{
		case 0:
			sLocal_222 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_222 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_222 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_223[0] = "mood_happy_1";
	sLocal_223[1] = "mood_happy_2";
	sLocal_223[2] = "mood_happy_3";
	sLocal_224[0] = "darts_outro_01_guy1";
	sLocal_224[1] = "darts_outro_02_guy2";
	sLocal_224[2] = "darts_outro_03_guy2";
	sLocal_225[0] = "darts_outro_01_guy2";
	sLocal_225[1] = "darts_outro_02_guy1";
	sLocal_225[2] = "darts_outro_03_guy1";
	sLocal_226[0] = "darts_outro_01_cam";
	sLocal_226[1] = "darts_outro_02_cam";
	sLocal_226[2] = "darts_outro_03_cam";
	uLocal_137[0] = unk_0x4A8C381C258A124D();
	bLocal_150 = true;
	Var17 = { 1992,293f, 3050,583f, 47,98973f };
	Var18 = { -572,0406f, 294,1958f, 79,9374f };
	func_507();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iLocal_174 = 1;
		switch (unk_0xC5935DFB3F39785A(0, 2))
		{
			case 0:
				iLocal_171 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_171 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_169 = 10;
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0xFC8BFE4B41177C22(ScriptParam_227.f_4))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (iLocal_174 == 2)
			{
				ScriptParam_227 = { Var18 };
				ScriptParam_227.f_3 = -0,09f;
			}
			else
			{
				ScriptParam_227 = { Var17 };
				ScriptParam_227.f_3 = 57,78315f;
			}
			if (unk_0xE10356B235A70E70(ScriptParam_227, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_227.f_4 = unk_0x8366ABB82B1ABC59(ScriptParam_227, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x8679173785B8D495(ScriptParam_227, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_227, &Var19, 0);
				ScriptParam_227.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { unk_0xD1A6A821F5AC81DB(ScriptParam_227.f_4, 1) };
	}
	if (!unk_0x1C2F771CDC87A3A5(func_506(), 0))
	{
		func_504(iLocal_169, 1);
		if (unk_0x7F420695E3F776FB(func_506(), 0))
		{
			unk_0x092B9247AF00F5CF(func_506(), 0, 0);
		}
		uLocal_137[1] = func_506();
	}
	else
	{
		unk_0x925970A93719CADE(1);
	}
	if (unk_0x96CFB880BAC634CE(67))
	{
		func_495();
		func_477(&Var0, &Var5, &Var6);
	}
	unk_0x82BC6786EE477292(0);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
	func_475(1);
	iLocal_165 = func_472(func_508(uLocal_137[0]), 1);
	fVar15 = (system::to_float(iLocal_165) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_95 = system::round(fVar16);
	if (iLocal_95 < 660)
	{
		iLocal_95 = 660;
	}
	func_471(23, 1);
	while (true)
	{
		system::wait(0);
		unk_0x4EB223432F8FA0A0(2);
		unk_0x43AE50D2A33F6E2A();
		unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
		if (iLocal_157 && Var0.f_0 < 13)
		{
			unk_0x3D1B3BF5963D08DE(Var4.f_0, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0x4FAFF4BCB7633475(ScriptParam_227.f_5) && !unk_0xFC8BFE4B41177C22(func_506())) || (unk_0xFC8BFE4B41177C22(func_506()) && unk_0x4FAFF4BCB7633475(func_506())))
		{
			func_477(&Var0, &Var5, &Var6);
		}
		if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]))
		{
			unk_0x0FB8E752BCC547A9(uLocal_137[0], 239, 1);
			unk_0x0FB8E752BCC547A9(uLocal_137[0], 124, 1);
			func_470();
			unk_0xE0EEB603997F273F(0);
			unk_0xE0EEB603997F273F(2);
			iVar14 = 0;
			while (iVar14 < unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar26, -1))
			{
				if (uVar26[iVar14] != uLocal_137[1])
				{
					if (!unk_0x4FAFF4BCB7633475(uVar26[iVar14]))
					{
						unk_0x0FB8E752BCC547A9(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x428C32CC68809A35(1);
					func_469(&(Var0.f_243), &ScriptParam_227);
					func_468(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xFC8BFE4B41177C22(Var0.f_243))
					{
						Local_206 = { unk_0x0D1381B6E0F3987D(Var0.f_243, 0,7792f, -1,138f, 0,1814f) };
						Local_207 = { -7,9947f, 0f, (Var0.f_243.f_4 + 36,19176f) };
						uLocal_82 = unk_0x96A32328480B485C(26379945, Local_206, Local_207, 65f, 0, 2);
						unk_0x58BDA5D9262F5D30(uLocal_82, 30f);
					}
					func_467();
					system::settimera(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (system::timera() > 500 && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
					{
						unk_0x2094BC4B6731BA68(ScriptParam_227, 0,5f, 1, 0, 0, 0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
						{
							unk_0xD0557B139A542F12(&uLocal_172);
							unk_0xB5396F1FB088FE38(&uLocal_172);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_172);
							unk_0x4BD42B0527065BB6(unk_0x4A8C381C258A124D(), uLocal_172);
						}
						Local_40 = { Local_40 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_466(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_466(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_465(0);
					func_463(&Var4, iLocal_174, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xFC8BFE4B41177C22(Var0.f_243))
					{
						Var19 = { unk_0xAD8278DAEC2CC059(Var0.f_243, Var4.f_18) };
					}
					func_460(&Var4, &Var5);
					unk_0x8E1F26D6742EC167(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_457(&Var4, &Var5))
					{
						func_454(&(Var0.f_243), &Var2, &Var3, 0);
						iLocal_216 = func_508(uLocal_137[0]);
						switch (iLocal_216)
						{
							case 0:
								sLocal_218 = func_453("MICHAEL");
								if (!BitTest(Global_113930, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_218 = func_453("FRANKLIN");
								bLocal_154 = true;
								if (!BitTest(Global_113930, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_218 = func_453("TREVOR");
								if (!BitTest(Global_113930, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x1C2F771CDC87A3A5(func_506(), 0))
						{
							iLocal_217 = func_508(func_506());
							if (iLocal_217 == 145)
							{
								iLocal_217 = func_450(func_506());
							}
							switch (iLocal_217)
							{
								case 0:
									sLocal_219 = func_453("MICHAEL");
									break;
								
								case 1:
									sLocal_219 = func_453("FRANKLIN");
									break;
								
								case 2:
									sLocal_219 = func_453("TREVOR");
									break;
								
								case 19:
									sLocal_219 = func_453("LAMAR");
									unk_0xD1C578C204015E1F(func_506(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_219 = func_453("JIMMY");
									break;
								
								default:
									sLocal_219 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0xC5935DFB3F39785A(0, 200);
							if (iLocal_174 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_219 = func_453("RAYMOND");
									iLocal_220 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_219 = func_453("JOHAN");
									iLocal_220 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_219 = func_453("STAN");
									iLocal_220 = 1891555423;
								}
								else
								{
									sLocal_219 = func_453("VINCE");
									iLocal_220 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_219 = func_453("KRISTY");
								iLocal_220 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_219 = func_453("MARLENE");
								iLocal_220 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_219 = func_453("LORIE");
								iLocal_220 = 1954368234;
							}
							else
							{
								sLocal_219 = func_453("SHELLEY");
								iLocal_220 = -863218904;
							}
						}
						uLocal_34 = unk_0x4E55EAB577C13329(iLocal_35, Var3, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0xB2A95909624C195B())
					{
						uVar27 = unk_0x4E55EAB577C13329(joaat("prop_dart_1"), Var3, 1, 1, 0);
						func_447(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_227);
						func_446(&Var4, sLocal_218, sLocal_219);
						unk_0x974022927CB47E68(uLocal_137[1]);
						uLocal_173 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_445(&(Var0.f_257), 0, unk_0x4A8C381C258A124D(), sLocal_218, 0, 1);
						if (unk_0x1C2F771CDC87A3A5(func_506(), 0))
						{
							if (iLocal_174 == 2)
							{
								func_445(&(Var0.f_257), 3, uLocal_137[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_445(&(Var0.f_257), 3, uLocal_137[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_445(&(Var0.f_257), 3, func_506(), sLocal_219, 0, 1);
							func_443(&uVar25);
							iVar13 = 6;
						}
						if (!BitTest(Global_113930, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_442(&Var4, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x4FAFF4BCB7633475(uLocal_137[1]) && unk_0x5B3431FA66D59A4C(uLocal_137[0])) && !unk_0x7F420695E3F776FB(uLocal_137[0], 1)) && unk_0x5B3431FA66D59A4C(uLocal_137[1])) && !unk_0x7F420695E3F776FB(uLocal_137[1], 1))
					{
						bLocal_145 = func_440(&uLocal_161);
						if ((func_439() && unk_0x1DD05E817C89C737() >= iLocal_163 + 1000) && iVar13 != 9)
						{
							if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
							{
								unk_0x8F72AF14CE5AACE4(500);
							}
						}
						if (unk_0x15CCE8886267624F() && iVar13 != 9)
						{
							func_435(0);
							func_433();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
								{
									uLocal_167 = unk_0x2EC137C692A52458(unk_0x0D1381B6E0F3987D(ScriptParam_227.f_4, 0,337842f, -0,243051f, -0,329731f), 0f, 0f, (unk_0xCFC0C995455A6204(ScriptParam_227.f_4) - 3,783146f), 2);
									uLocal_173 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xF9B66DAE101B699C(uLocal_173, uLocal_167, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x4CBC5D1BC117616B(uLocal_173, 1);
									unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
									unk_0x84B06A81C98DA4B8(uLocal_137[0]);
									unk_0x84B06A81C98DA4B8(uLocal_137[1]);
									unk_0x19626F992DC71FB9(uLocal_137[0]);
									unk_0x19626F992DC71FB9(uLocal_137[1]);
									unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x10425721983AE158(uLocal_137[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x10425721983AE158(uLocal_137[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x381D671BCFC294D9(uVar27, uLocal_167, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_432(&uVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0x5266F1D2AEF6F73A(uLocal_167))
								{
									if (!bVar9)
									{
										if (func_431(&uVar25) > 1,5f)
										{
											func_430(uLocal_137[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_429(&uVar25);
										}
									}
									else if (!unk_0x912159A05BE6B52E(uLocal_137[0]))
									{
										if (!bVar10)
										{
											if (!func_428(&uVar25))
											{
												func_443(&uVar25);
											}
											else if (func_431(&uVar25) > 0,5f)
											{
												func_427(uLocal_137[1]);
												func_429(&uVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_29)
									{
										case 0:
											func_432(&uVar25);
											func_426("DARTS_HOW_TO_2", -1);
											iLocal_29++;
											break;
										
										case 1:
											if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,25f)
											{
												func_432(&uVar25);
												func_426("DARTS_HOW_TO_3", -1);
												iLocal_29++;
											}
											break;
										
										case 2:
											if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,55f)
											{
												func_426("DARTS_HOW_3A", -1);
												iLocal_29++;
											}
											break;
										
										case 3:
											if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,85f)
											{
												func_426("DARTS_HOW_3A", -1);
												iLocal_29++;
											}
											break;
									}
									if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,95f)
									{
										iLocal_157 = 1;
										iVar13++;
									}
									else if ((unk_0x1DD05E817C89C737() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,99f)
								{
									if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
									{
										func_423(Var0.f_243.f_1, Var0.f_243.f_4, func_425(2), func_424(0), 0, 1);
										iLocal_29 = 0;
										unk_0x428C32CC68809A35(1);
										unk_0x85E6A1E36B5E2E4D(uLocal_173, 0);
										unk_0x974022927CB47E68(uLocal_137[0]);
										unk_0x974022927CB47E68(uLocal_137[1]);
										unk_0xC0086E5CBF13BBF7(uVar27, -1000f, 0);
										unk_0x51C8BEA2005931AB(&uVar27);
										unk_0xB43467C43086A6A1(func_422(0));
										func_429(&uVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
								{
									uLocal_167 = unk_0x2EC137C692A52458(unk_0x0D1381B6E0F3987D(ScriptParam_227.f_4, 0,337842f, -0,243051f, -0,329731f), 0f, 0f, (unk_0xCFC0C995455A6204(ScriptParam_227.f_4) - 3,783146f), 2);
									uLocal_173 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xF9B66DAE101B699C(uLocal_173, uLocal_167, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x4CBC5D1BC117616B(uLocal_173, 1);
									unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
									unk_0x84B06A81C98DA4B8(uLocal_137[0]);
									unk_0x84B06A81C98DA4B8(uLocal_137[1]);
									unk_0x19626F992DC71FB9(uLocal_137[0]);
									unk_0x19626F992DC71FB9(uLocal_137[1]);
									unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x10425721983AE158(uLocal_137[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x10425721983AE158(uLocal_137[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x381D671BCFC294D9(uVar27, uLocal_167, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_432(&uVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0x5266F1D2AEF6F73A(uLocal_167))
								{
									if (!bVar9)
									{
										if (func_431(&uVar25) > 0,5f)
										{
											func_430(uLocal_137[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_429(&uVar25);
										}
									}
									else if (!unk_0x912159A05BE6B52E(uLocal_137[0]))
									{
										if (!bVar10)
										{
											if (!func_428(&uVar25))
											{
												func_443(&uVar25);
											}
											else if (func_431(&uVar25) > 0,25f)
											{
												func_427(uLocal_137[1]);
												func_429(&uVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,95f)
									{
										iLocal_157 = 1;
										iVar13++;
									}
									else if ((unk_0x1DD05E817C89C737() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0xBD3B265153D3BA2D(uLocal_167) > 0,99f)
								{
									if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
									{
										func_421();
										unk_0x85E6A1E36B5E2E4D(uLocal_173, 0);
										unk_0x974022927CB47E68(uLocal_137[0]);
										unk_0x974022927CB47E68(uLocal_137[1]);
										unk_0xC0086E5CBF13BBF7(uVar27, -1000f, 0);
										unk_0x51C8BEA2005931AB(&uVar27);
										unk_0xB43467C43086A6A1(func_422(0));
										func_429(&uVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x15CCE8886267624F())
								{
									iLocal_157 = 1;
									iLocal_29 = 0;
									unk_0x428C32CC68809A35(1);
									if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
									{
										unk_0xB2BD5837A8D3CEDA(uLocal_137[0], Var2, 1, 0, 0, 1);
										unk_0x5C96CEA06531AB03(uLocal_137[0], Var0.f_243.f_4);
										unk_0xB2BD5837A8D3CEDA(uLocal_137[1], Var2.f_3, 1, 0, 0, 1);
										unk_0x5C96CEA06531AB03(uLocal_137[1], Var0.f_243.f_4);
										unk_0x974022927CB47E68(uLocal_137[0]);
										unk_0x974022927CB47E68(uLocal_137[1]);
									}
									unk_0x85E6A1E36B5E2E4D(uLocal_173, 0);
									unk_0xC0086E5CBF13BBF7(uVar27, -1000f, 0);
									unk_0x51C8BEA2005931AB(&uVar27);
									if (!BitTest(Global_113930, 0))
									{
										func_423(Var0.f_243.f_1, Var0.f_243.f_4, func_425(2), func_424(0), 0, 1);
									}
									else
									{
										func_421();
									}
									unk_0xB43467C43086A6A1(func_422(0));
									func_429(&uVar25);
									unk_0x10B228D2FDB7AF16(500);
									Var0.f_0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_163 = unk_0x1DD05E817C89C737();
							if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
							{
								unk_0xB2BD5837A8D3CEDA(uLocal_137[0], Var2, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(uLocal_137[0], Var0.f_243.f_4);
								unk_0xB2BD5837A8D3CEDA(uLocal_137[1], Var2.f_3, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(uLocal_137[1], Var0.f_243.f_4);
							}
							unk_0xCAC4020CCF361AC8(func_422(1));
							iVar13 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x1DD05E817C89C737() - iLocal_163) > 1500)
							{
								func_419(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_418(&(Var5.f_57), 1, 0))
							{
								unk_0xCAC4020CCF361AC8(func_422(1));
								iVar13 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!BitTest(Global_113930, 0))
					{
						if (func_415(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar24))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x4CBC5D1BC117616B(uLocal_73, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x15CCE8886267624F())
					{
						unk_0x10B228D2FDB7AF16(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0xFC8BFE4B41177C22(func_506()))
							{
								if (!BitTest(Global_113930, 10))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 10);
								}
								else
								{
									unk_0x8744D2E3FC95740E(&Global_113930, 10);
								}
								func_413(&Var5);
								iVar13++;
							}
							else
							{
								func_413(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0x761778199FE1211C())
							{
								if (fLocal_87 != unk_0x4AE9635532D92447(0))
								{
									fLocal_87 = unk_0x4AE9635532D92447(0);
									unk_0x58BDA5D9262F5D30(uLocal_73, func_412(fLocal_87));
									unk_0x58BDA5D9262F5D30(uLocal_74, func_412(fLocal_87));
								}
							}
							if (func_351(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xB43467C43086A6A1(func_422(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_350(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_347(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_340(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_113969.f_18973.f_5 >= 5 && Global_113969.f_18973.f_7 >= 0,8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_113969.f_18973.f_5 >= 3 && Global_113969.f_18973.f_7 >= 0,66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_339(Global_113969.f_18973.f_5, &iLocal_166))
						{
							func_338(&(Var5.f_666), 24, 1);
						}
						fLocal_43 = func_337(Global_113969.f_18973.f_5);
						fLocal_44 = func_336(Global_113969.f_18973.f_5);
						fLocal_41 = fLocal_43;
						fLocal_42 = fLocal_44;
						iLocal_104[4]++;
						if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
						{
							unk_0x19626F992DC71FB9(uLocal_137[1]);
							unk_0xB2BD5837A8D3CEDA(uLocal_137[1], Var2.f_3, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(uLocal_137[1], Var0.f_243.f_4);
						}
						if (func_428(&uVar23))
						{
							func_429(&uVar23);
						}
						unk_0xCAC4020CCF361AC8(func_422(2));
						func_335(uLocal_137[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x761778199FE1211C())
					{
						if (fLocal_87 != unk_0x4AE9635532D92447(0))
						{
							fLocal_87 = unk_0x4AE9635532D92447(0);
							unk_0x58BDA5D9262F5D30(uLocal_73, func_412(fLocal_87));
							unk_0x58BDA5D9262F5D30(uLocal_74, func_412(fLocal_87));
						}
					}
					if (!bLocal_155)
					{
						unk_0x80813AC549A1E8AE("mini@dartsoutro");
						bLocal_155 = true;
					}
					if (!iLocal_156)
					{
						if (bLocal_155)
						{
							if (!unk_0xE100DD4F82A51BDE("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_156 = 1;
							}
						}
					}
					func_253(&Var0, &Var3, &Var4, &Var5, &uVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_431(&(Var0.f_254)) > 0,5f)
							{
								unk_0x428C32CC68809A35(1);
								unk_0x406CBCEA35499884();
								func_252(unk_0x4A8C381C258A124D());
								func_350(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_251(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_250(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_248(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_248(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_248(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_248(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0x4AE9635532D92447(1);
								if (fVar34 > 2f)
								{
									Var20 = { 1992,294f, 3047,577f, 46,21517f };
									Var21 = { 0f, 0f, 138,74f };
								}
								else
								{
									Var20 = { 1992,336f, 3047,924f, 46,21517f };
									Var21 = { 0f, 0f, 136,74f };
								}
								iVar33 = func_247();
								uLocal_167 = unk_0x2EC137C692A52458(Var20, Var21, 2);
								uLocal_173 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xF9B66DAE101B699C(uLocal_173, uLocal_167, sLocal_226[iVar33], "mini@dartsoutro");
								unk_0x4CBC5D1BC117616B(uLocal_173, 1);
								unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
								if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]) && !unk_0x4FAFF4BCB7633475(uLocal_137[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0xBF3D28CA44F3BE2D(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_246(&uLocal_137, iVar35);
										unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsoutro", sLocal_224[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), sLocal_222, sLocal_223[unk_0xC5935DFB3F39785A(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xBF3D28CA44F3BE2D(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_245(&uLocal_137);
										unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsoutro", sLocal_224[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x10425721983AE158(uLocal_137[1], sLocal_221, sLocal_223[unk_0xC5935DFB3F39785A(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_243(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_429(&(Var0.f_254));
							iLocal_151 = 0;
							unk_0xB43467C43086A6A1(func_422(3));
							func_421();
							if (unk_0x78411E34CF90EA8C(uLocal_173))
							{
								unk_0x85E6A1E36B5E2E4D(uLocal_173, 0);
							}
							iVar13 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_431(&(Var0.f_254)) > 0,92f)
					{
						func_44(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0x1C2F771CDC87A3A5(func_506(), 0))
					{
						unk_0x974022927CB47E68(uLocal_137[1]);
						Var0.f_0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0x974022927CB47E68(uLocal_137[0]);
							if (!bLocal_153)
							{
								unk_0xE37AF9002E782BA0(0, bLocal_153, 3000, 1, 0, 0);
							}
							else
							{
								unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
							}
							unk_0x64BB72494B9DF6DC(0);
							unk_0xD815D4BD1AE9E85A(0, 1065353216);
							unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
							unk_0x406CBCEA35499884();
							unk_0xE67051907958B5EB(uLocal_137[0], uLocal_137[1], 5000, 2049, 3);
							func_443(&uVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&uVar25) > 0,1f)
							{
								if (!bVar7)
								{
								}
								func_443(&uVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&uVar25) > 0,3f)
							{
								if (!unk_0x4FAFF4BCB7633475(uLocal_137[1]))
								{
									if (!bVar7)
									{
										func_4(uLocal_137[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_443(&uVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0.f_0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x2645430E708CBFAC(2, 201))
					{
						func_1(uLocal_137[1]);
						iLocal_170 = 2;
						bVar7 = true;
						if (unk_0xBC2EE32DE886BD08(func_422(2)))
						{
							unk_0xB43467C43086A6A1(func_422(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x2645430E708CBFAC(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_53 = 0;
						}
						func_338(&(Var5.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_477(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0x4D9174D8796EA622())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_338(&(uParam0->f_666), 8, 1);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 16, 0);
			func_338(&(uParam0->f_666), 17, 0);
		}
		unk_0xFFD79EDD25B8EC72();
		hud::set_warning_message_with_header("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_338(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x1C2F771CDC87A3A5(func_506(), 0) || iParam2)
	{
		func_430(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_55, iParam3, 0);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_6(iParam3), iParam4);
}

int func_6(int iParam0)
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

float func_7(var uParam0)
{
	if (func_428(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(var uParam0)
{
	return BitTest(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x8034325BF6D6E41F() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0x8034325BF6D6E41F();
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x89568FA9A6BC0B4A(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 1))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x7FB6C108C1694163(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
		{
			unk_0x6FF322107B12B749(1);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
			{
				unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
	}
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(19);
	unk_0x66EFB3D6110055C4(2, 19, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 21, 1);
	unk_0x66EFB3D6110055C4(0, 28, 1);
	unk_0x66EFB3D6110055C4(0, 29, 1);
	unk_0x66EFB3D6110055C4(0, 171, 1);
	func_41(0);
	if (unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x3CC2AA893E5C4911() || (unk_0x15CCE8886267624F() && !unk_0xDDED2C93E8FD5B69()))
		{
			unk_0xA6DB7FC56DBDFB82();
		}
	}
	Global_44592 = 1;
	if (!uParam0->f_567)
	{
		switch (func_508(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4())))
		{
			case 1:
				unk_0xDCAFFD08A08087EB("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xDCAFFD08A08087EB("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xDCAFFD08A08087EB("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + system::floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_40(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_40(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_40((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_40(30f) - func_40(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_39(1);
		uParam0->f_576 = (uParam0->f_576 + system::round((0f + (1000f * system::timestep()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * system::timestep())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0,75f;
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE6B753D52F4CA222();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * system::timestep())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x88F483FBD433696A(uParam0->f_1, "TRANSITION_OUT");
			unk_0xE6B753D52F4CA222();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * system::timestep())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0x7811C74D5B749F76(2))
			{
				if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x875A214D5EBCA509(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0xA0C7B98BCF1EEF9E(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE6B753D52F4CA222();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0,75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE6B753D52F4CA222();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0,75f;
				}
				func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0,75f;
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE6B753D52F4CA222();
				}
				uParam0->f_563 = func_14((uParam0->f_563 + (((1f / 0,3f) * uParam0->f_577) * system::timestep())), 0f, 1f);
				uParam0->f_577 = func_14((uParam0->f_577 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14((uParam0->f_563 - ((((1f / 0,3f) * uParam0->f_577) * 0,01f) * system::timestep())), 0f, 1f);
			uParam0->f_577 = func_14((uParam0->f_577 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0x875A214D5EBCA509(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			system::wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_39(0);
			}
			return !bVar0;
		}
	}
	func_39(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0->f_4, "CLEAR_ALL");
	unk_0xE6B753D52F4CA222();
	if (unk_0x761778199FE1211C())
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(0);
	func_13(unk_0xE934399D6F2C3AC5(2, 215, 1));
	func_12("ES_HELP");
	if (unk_0x761778199FE1211C())
	{
		unk_0x557F1E2300EF1A3E(true);
		unk_0x330108B080A2132F(215);
	}
	unk_0xE6B753D52F4CA222();
	if (bParam1)
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(1);
		func_13(unk_0xE934399D6F2C3AC5(2, 216, 1));
		func_12("ES_XPAND");
		if (unk_0x761778199FE1211C())
		{
			unk_0x557F1E2300EF1A3E(true);
			unk_0x330108B080A2132F(216);
		}
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE6B753D52F4CA222();
}

void func_12(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_13(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = system::round((uParam0->f_547 * 255f));
	fVar1 = (func_38() * 0,25f);
	if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x88F483FBD433696A(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_37(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					unk_0x330108B080A2132F(150);
				}
				else
				{
					unk_0x330108B080A2132F(100);
				}
				unk_0x557F1E2300EF1A3E(true);
				if (uParam0->f_560 == 4)
				{
					unk_0x330108B080A2132F((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x330108B080A2132F(uParam0->f_56);
				}
				unk_0x557F1E2300EF1A3E(bParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0x330108B080A2132F(2);
				}
				else
				{
					unk_0x330108B080A2132F(69);
				}
				unk_0xE6B753D52F4CA222();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0x88F483FBD433696A(uParam0->f_1, "TRANSITION_UP");
				unk_0x74BF156C860580D4(0,15f);
				unk_0x557F1E2300EF1A3E(true);
				unk_0xE6B753D52F4CA222();
				uParam0->f_3 = 1;
			}
		}
		func_36();
		unk_0xA91A4C18A2DB01BD(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0,1388889f + func_40((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_38());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_35(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0x4AE9635532D92447(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_554)))
		{
			fVar7 = func_34(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_35(&(uParam0->f_550));
		}
		fVar8 = (((0,119f + 0,05f) / func_38()) / 2,5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x4CC1CF98851922CE(2, 215);
	unk_0x4CC1CF98851922CE(2, 216);
	unk_0x4CC1CF98851922CE(2, 200);
	unk_0x66EFB3D6110055C4(2, 200, 1);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0,95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_31((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0,166f) * system::timestep())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0x15CCE8886267624F())
			{
				unk_0x6B91FA4E397DAB8D();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0x4EB223432F8FA0A0(6);
				unk_0xA91A4C18A2DB01BD(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0x66EFB3D6110055C4(0, 140, 1);
				unk_0x66EFB3D6110055C4(0, 141, 1);
				unk_0x66EFB3D6110055C4(0, 142, 1);
				unk_0x66EFB3D6110055C4(2, 188, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 188))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x66EFB3D6110055C4(2, 187, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 187))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x66EFB3D6110055C4(2, 202, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 202))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0x4EB223432F8FA0A0(6);
				unk_0x66EFB3D6110055C4(0, 140, 1);
				unk_0x66EFB3D6110055C4(0, 141, 1);
				unk_0x66EFB3D6110055C4(0, 142, 1);
				if (unk_0x875A214D5EBCA509(2, 215) || unk_0xDEE3EFEA31A1F555(2, 200))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xA306E6FD2A6558E6(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x5A18938160AE52D0(iVar13, iVar14, iVar15, iVar0);
	unk_0xE05EB1EAE7CCDC59(fVar9, fVar10);
	unk_0x2873B596E322DCDA(0);
	unk_0xBFE94E91C83D8794(1f, 0,4f);
	fVar1 = (fVar1 - func_40(6f));
	fVar1 = (fVar1 + (func_40(30f) - func_40((2f * 2f))));
	fVar11 = (fVar2 - func_40((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0,6f * func_40(25f))), 0f, 1f);
		func_36();
		unk_0x81645EE95A114FAE(0,5f, (fVar1 - (func_40((2f - 0,5f)) - 0,001388889f)), fVar6, func_30(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_40((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0,8f * func_40(25f))), 0f, 1f);
			func_27(uParam0, iVar17, (fVar1 + func_40(2f)), fVar9, fVar10, system::round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_40(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_40((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_38())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_40(2f));
					fVar12 = func_14((fVar11 / (0,6f * func_40(25f))), 0f, 1f);
					func_36();
					unk_0x81645EE95A114FAE(0,5f, (fVar1 + func_40((2f * 0,5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_40((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_40((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_40(2f));
			fVar12 = func_14((fVar11 / (0,6f * func_40(25f))), 0f, 1f);
			func_36();
			unk_0x81645EE95A114FAE(0,5f, (fVar1 + func_40((2f * 0,5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_40((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0,8f * func_40(25f))), 0f, 1f);
			unk_0x5A18938160AE52D0(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			func_19(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x8608526719A575EE() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_38()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_38()) / 2,5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_38()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_38()) / 2,5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0xE05EB1EAE7CCDC59(fVar20, fVar21);
				unk_0x2873B596E322DCDA(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0x2873B596E322DCDA(0);
			}
			unk_0xBFE94E91C83D8794(1f, 0,4f);
			if (unk_0xD6F9DEE4765092A9(&(uParam0->f_554)))
			{
				func_18(&(uParam0->f_550), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_17(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0);
			}
			unk_0xE05EB1EAE7CCDC59(fVar20, fVar21);
			unk_0x2873B596E322DCDA(2);
			unk_0xBFE94E91C83D8794(1f, 0,4f);
			unk_0xEAF65721ACB2FDFB(0);
			func_36();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xE05EB1EAE7CCDC59(fVar20, fVar22);
			unk_0x5A18938160AE52D0(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0xEAEB6E7D3FAEBD5B("PERCENTAGE");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xEAEB6E7D3FAEBD5B("FO_TWO_NUM");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x511D14ED2DA887E1(uParam0->f_559);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xEAEB6E7D3FAEBD5B("MTPHPER_XPNO");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xEAEB6E7D3FAEBD5B("ESDOLLA");
					unk_0xB5DF3215F3864B3F(uParam0->f_558, 1);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
			}
			unk_0xD0D00ED689D6CA81(&cVar23, 0);
			if (uParam0->f_561 != 0 && unk_0x38D063D8CF6D1967(&cVar23))
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0xA306E6FD2A6558E6(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xA306E6FD2A6558E6(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xA306E6FD2A6558E6(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0,001388889f * 5f);
				fVar30 = ((0,00078125f * 16f) * 2f);
				fVar31 = ((0,001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0,006f);
				fVar33 = ((fVar1 + func_40(10f)) + fVar29);
				if (uParam0->f_560 == -1)
				{
					fVar32 = (fVar32 - (0,006f * 6f));
				}
				fVar30 = (fVar30 * 0,65f);
				fVar31 = (fVar31 * 0,65f);
				unk_0xFFA2B456A81EA1EB(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, system::round((fVar12 * IntToFloat(iVar0))), 0, 0);
			}
			fVar1 = (fVar1 + (func_40(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0,00078125f);
}

void func_17(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	unk_0xEAF65721ACB2FDFB(iParam4);
	unk_0x8413CD3BCEEAD8DC(iParam5);
	func_36();
	unk_0xEAEB6E7D3FAEBD5B(sParam0);
	unk_0x60D332F23943B34F(sParam1);
	unk_0x25DD447A6EB3A86F(fParam2, fParam3, 0);
}

void func_18(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xEAF65721ACB2FDFB(iParam3);
	unk_0x8413CD3BCEEAD8DC(iParam5);
	func_36();
	if (bParam4)
	{
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(sParam0);
	}
	else
	{
		unk_0xEAEB6E7D3FAEBD5B(sParam0);
	}
	unk_0x25DD447A6EB3A86F(fParam1, fParam2, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_26(iParam0), 64);
	StringCopy(&cVar1, func_23(iParam0, bParam1), 64);
	if (unk_0x70E57E9927B6BA58(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_21(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x32D86930C15E1159(&cVar0, &cVar1) };
		fVar6 = (func_20(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x485ADB2D2728D748() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_20(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0,5f;
			break;
		
		case 64:
			return 0,8f;
			break;
	}
	return 1f;
}

void func_21(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x5949C3C031610A30(uParam1, uParam2);
		return;
	}
	unk_0x21564F65F997D833(uParam1, uParam2);
	fVar0 = system::to_float(*uParam1);
	fVar1 = system::to_float(*uParam2);
	fVar2 = unk_0x4AE9635532D92447(0);
	if (func_22(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = system::round((fVar1 * fVar2));
		*uParam2 = system::round(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = system::round((fVar0 / *fParam3));
	*uParam2 = system::round((fVar1 / *fParam3));
}

bool func_22(int iParam0, int iParam1)
{
	return (system::to_float(iParam0) / system::to_float(iParam1)) > 3,5f;
}

var func_23(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var2 = { func_25(unk_0x259BE71D8A81D4FA()) };
			if (unk_0xE460920F3D75C34D(&Var2, &uVar1))
			{
				return func_24(&uVar1);
			}
		}
		else
		{
			return func_24(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_24(var uParam0)
{
	return uParam0;
}

struct<13> func_25(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

char* func_26(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var1 = { func_25(unk_0x259BE71D8A81D4FA()) };
			unk_0xE460920F3D75C34D(&Var1, &uVar0);
			return func_24(&uVar0);
		}
		else
		{
			return func_24(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iParam5);
	unk_0xE05EB1EAE7CCDC59(fParam3, fParam4);
	unk_0x2873B596E322DCDA(1);
	unk_0xBFE94E91C83D8794(1f, func_29(14f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0x8413CD3BCEEAD8DC(0);
	func_36();
	if (uParam0->f_531[iParam1])
	{
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xEAEB6E7D3FAEBD5B(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x511D14ED2DA887E1(uParam0->f_489[iParam1]);
		}
	}
	unk_0x25DD447A6EB3A86F(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_19(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_23(7, 0), (fParam4 - 0,006f), ((fParam2 + func_40(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_19(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_23(5, 0), (fParam4 - 0,006f), ((fParam2 + func_40(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_19(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_23(6, 0), (fParam4 - 0,006f), ((fParam2 + func_40(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x2873B596E322DCDA(1);
	}
	else
	{
		unk_0x2873B596E322DCDA(2);
	}
	unk_0xBFE94E91C83D8794(1f, func_29(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xE05EB1EAE7CCDC59(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xE05EB1EAE7CCDC59(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xEAF65721ACB2FDFB(0);
	unk_0x8413CD3BCEEAD8DC(0);
	func_36();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xBFE94E91C83D8794(1f, func_29(18f));
			unk_0x8413CD3BCEEAD8DC(4);
			if (iParam0 < 0)
			{
				unk_0x282D5DA1EE14950F("ESMINDOLLA");
				unk_0xB5DF3215F3864B3F((-1 * iParam0), 1);
				fVar1 = unk_0x43026780D77E3DC0(0);
			}
			else
			{
				unk_0x282D5DA1EE14950F("ESDOLLA");
				unk_0xB5DF3215F3864B3F(iParam0, 1);
				fVar1 = unk_0x43026780D77E3DC0(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xBFE94E91C83D8794(1f, func_29(14f));
			break;
	}
	unk_0x4E5A3D96808F7F84(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xEAEB6E7D3FAEBD5B("PERCENTAGE");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 1:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("FO_NUM");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 2:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("FO_TWO_NUM");
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xBFE94E91C83D8794(1f, func_29(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xEAEB6E7D3FAEBD5B("ESMINDOLLA");
				unk_0xB5DF3215F3864B3F((-1 * iParam0), 1);
			}
			else
			{
				unk_0xEAEB6E7D3FAEBD5B("ESDOLLA");
				unk_0xB5DF3215F3864B3F(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			break;
		
		case 7:
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0x60D332F23943B34F(sParam4);
			break;
		
		case 8:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 14);
			break;
		
		case 9:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 6);
			break;
		
		case 10:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 2055);
			break;
		
		case 12:
			unk_0xEAEB6E7D3FAEBD5B("AHD_DIST");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 13:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 16:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 20:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x25DD447A6EB3A86F((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0xBFE94E91C83D8794(1f, func_29(14f));
		}
		else
		{
			unk_0x25DD447A6EB3A86F(fParam2, fParam3, 0);
		}
	}
}

float func_29(float fParam0)
{
	return (fParam0 * 0,025f);
}

float func_30(float fParam0)
{
	return (fParam0 * 0,0009259259f);
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_32(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_32(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

float func_34(char* sParam0, char* sParam1)
{
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x60D332F23943B34F(uParam1);
	return (unk_0x43026780D77E3DC0(1) / 2f);
}

float func_35(char* sParam0)
{
	unk_0x282D5DA1EE14950F(sParam0);
	return (unk_0x43026780D77E3DC0(1) / 2f);
}

void func_36()
{
	unk_0xA4F67CEB594AE064(1);
	if (unk_0x78ABC1D11B34F324() || unk_0x15CCE8886267624F())
	{
		unk_0xA4F67CEB594AE064(7);
	}
	unk_0xA66AC5949E305457(0);
}

void func_37(char* sParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

float func_38()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x761778199FE1211C())
	{
	}
	return fVar0;
}

void func_39(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

float func_40(float fParam0)
{
	return (fParam0 * 0,001388889f);
}

void func_41(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_42(0))
		{
			func_435(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

int func_42(int iParam0)
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

bool func_43()
{
	return BitTest(Global_1956920, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xAE231F549813BBDF(2))
	{
		unk_0x66EFB3D6110055C4(2, 199, 1);
	}
	if (unk_0x99DFE4CAC19D527F())
	{
		if (!iLocal_158)
		{
			if (func_220(uParam1, 0, &iLocal_159))
			{
				func_338(&(uParam1->f_666), 9, 0);
				iLocal_158 = 1;
			}
		}
	}
	if (iLocal_140)
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			unk_0xA6DB7FC56DBDFB82();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x99DFE4CAC19D527F())
			{
				uParam1->f_646 = func_211(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_128(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_124(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x875A214D5EBCA509(2, 202))
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x875A214D5EBCA509(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x875A214D5EBCA509(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_123(&(uParam1->f_72)))
			{
				if (!bLocal_160)
				{
					bLocal_160 = true;
					func_122(&(uParam1->f_509), 0, 0, 1, 1);
					func_121(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_121(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_121(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_118(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_111(uParam1, 0, 0, iLocal_158);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0x5266F1D2AEF6F73A(uLocal_167) && unk_0xBD3B265153D3BA2D(uLocal_167) >= 0,995f) || !unk_0x5266F1D2AEF6F73A(uLocal_167))
		{
			bLocal_153 = true;
			if (unk_0x78411E34CF90EA8C(uLocal_173))
			{
				unk_0x85E6A1E36B5E2E4D(uLocal_173, 0);
				if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]) && !unk_0x4FAFF4BCB7633475(uLocal_137[1]))
				{
					unk_0x19626F992DC71FB9(uLocal_137[0]);
					unk_0x19626F992DC71FB9(uLocal_137[1]);
					unk_0xD8ED11B32DF72E0B(uLocal_137[0], 0, 0);
					unk_0xD8ED11B32DF72E0B(uLocal_137[1], 0, 0);
				}
			}
			func_110();
		}
		if (func_431(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_151)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_246(&uLocal_137, iVar2);
				}
				else
				{
					func_245(&uLocal_137);
				}
				iLocal_151 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x428C32CC68809A35(1);
			unk_0xB43467C43086A6A1(func_422(3));
			if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]) && !unk_0x4FAFF4BCB7633475(uLocal_137[1]))
			{
				unk_0x84B06A81C98DA4B8(uLocal_137[0]);
				unk_0x84B06A81C98DA4B8(uLocal_137[1]);
			}
			func_109(uParam3);
			if (bParam4)
			{
				func_350(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_28 = 1;
			func_429(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_151 = 0;
			iLocal_149 = 0;
			bLocal_153 = false;
			func_106();
			iLocal_158 = 0;
			iLocal_133 = 0;
			uParam1->f_680 = 0;
			iLocal_159 = 0;
			bLocal_160 = false;
			func_98(&(uParam1->f_72), 0);
			func_467();
		}
		else if (iVar0 == 2)
		{
			func_97(uParam3);
			unk_0xB43467C43086A6A1(func_422(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_56(func_92(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x406CBCEA35499884();
			*uParam0 = 13;
		}
		else if (((unk_0x875A214D5EBCA509(0, 234) || unk_0x875A214D5EBCA509(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_139)
			{
				Var3 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_55(Var3, 0, iLocal_139);
				iLocal_139 = 0;
			}
			else if (unk_0x875A214D5EBCA509(2, 190))
			{
				iLocal_162++;
				if (iLocal_162 >= uParam0->f_436)
				{
					iLocal_162 = 0;
				}
				Var3 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_53(Var3);
			}
			else if (unk_0x875A214D5EBCA509(2, 189))
			{
				iLocal_162 = (iLocal_162 - 1);
				if (iLocal_162 < 0)
				{
					iLocal_162 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_53(Var3);
			}
		}
		else if (((unk_0x875A214D5EBCA509(0, 211) || unk_0xDEE3EFEA31A1F555(0, 211)) && bVar1) && (iLocal_158 || !unk_0x99DFE4CAC19D527F()))
		{
			uParam1->f_680 = 1;
			func_122(&(uParam1->f_509), 0, 0, 1, 1);
			func_121(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_121(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_160)
			{
				func_121(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_118(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x428C32CC68809A35(1);
		unk_0x406CBCEA35499884();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_28], uParam0->f_432[iLocal_28], iLocal_104[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0x4AE9635532D92447(1);
		if (fVar4 > 2f)
		{
			Var5 = { 1992,294f, 3047,577f, 46,21517f };
			Var6 = { 0f, 0f, 138,74f };
		}
		else
		{
			Var5 = { 1992,336f, 3047,924f, 46,21517f };
			Var6 = { 0f, 0f, 136,74f };
		}
		iVar7 = func_247();
		uLocal_167 = unk_0x2EC137C692A52458(Var5, Var6, 2);
		uLocal_173 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xF9B66DAE101B699C(uLocal_173, uLocal_167, sLocal_226[iVar7], "mini@dartsoutro");
		unk_0x4CBC5D1BC117616B(uLocal_173, 1);
		unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
		if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]) && !unk_0x4FAFF4BCB7633475(uLocal_137[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsoutro", sLocal_224[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), sLocal_222, sLocal_223[unk_0xC5935DFB3F39785A(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3DA436E63AB0F541(uLocal_137[1], uLocal_167, "mini@dartsoutro", sLocal_224[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(uLocal_137[0], uLocal_167, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x10425721983AE158(uLocal_137[1], sLocal_221, sLocal_223[unk_0xC5935DFB3F39785A(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_153 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x1DD05E817C89C737();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_251(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_250(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0x1DD05E817C89C737() - uParam1->f_671) > 400 && func_45(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xBF3D28CA44F3BE2D(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_140 = 1;
	}
}

int func_45(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_48(uParam0);
	func_47(uParam0);
	if (unk_0x1B79E937E91F40C3(&(uParam0->f_550), "SPR_RESULT") || (unk_0x1B79E937E91F40C3(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xD0D00ED689D6CA81("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xD0D00ED689D6CA81("CommonMenu", 0);
		unk_0xD0D00ED689D6CA81("MPLeaderboard", 0);
		unk_0xD0D00ED689D6CA81("MPHud", 0);
		uParam0->f_1 = unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x5AF05959A6F22BB4("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA0C7B98BCF1EEF9E(uParam0->f_1) || !unk_0x38D063D8CF6D1967("CommonMenu")) || !unk_0x38D063D8CF6D1967("MPLeaderboard")) || !unk_0x38D063D8CF6D1967("MPHud"))
		{
			system::wait(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA0C7B98BCF1EEF9E(uParam0->f_1) || !unk_0x38D063D8CF6D1967("CommonMenu")) || !unk_0x38D063D8CF6D1967("MPLeaderboard")) || !unk_0x38D063D8CF6D1967("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_46(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_79651 = 1;
	return 1;
}

void func_46(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0->f_4, "CLEAR_ALL");
	unk_0xE6B753D52F4CA222();
	if (unk_0x761778199FE1211C())
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(2);
	func_13(unk_0xE934399D6F2C3AC5(2, 188, 1));
	func_12("ES_HELP_TU");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(1);
	func_13(unk_0xE934399D6F2C3AC5(2, 187, 1));
	func_12("ES_HELP_TD");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(0);
	func_13(unk_0xE934399D6F2C3AC5(2, 202, 1));
	func_12("ES_HELP_AB");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE6B753D52F4CA222();
}

void func_47(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x2873B596E322DCDA(0);
	unk_0xBFE94E91C83D8794(1f, func_29(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x282D5DA1EE14950F("STRING");
			unk_0x60D332F23943B34F(&(uParam0->f_13));
			fVar0 = unk_0x43026780D77E3DC0(1);
		}
		else
		{
			unk_0x282D5DA1EE14950F(&(uParam0->f_13));
			fVar0 = unk_0x43026780D77E3DC0(1);
		}
	}
	else
	{
		unk_0x282D5DA1EE14950F("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x511D14ED2DA887E1(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xACF853FB3F6EA7D4(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x60D332F23943B34F(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x43026780D77E3DC0(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_48(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_565 = 1;
	if (bParam1)
	{
		func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_51(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_39(1);
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_53(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bLocal_86)
	{
		unk_0x1761457F86AD0EE2(uLocal_84, Var0);
		unk_0xB56F35D8A770F80F(uLocal_84, uLocal_83, 500, 1, 1);
		bLocal_86 = false;
	}
	else
	{
		unk_0x1761457F86AD0EE2(uLocal_83, Var0);
		unk_0xB56F35D8A770F80F(uLocal_83, uLocal_84, 500, 1, 1);
		bLocal_86 = true;
	}
}

Vector3 func_54(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 0,3495f, -0,0276f, -0,0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_55(struct<3> Param0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bParam1)
	{
		unk_0x1761457F86AD0EE2(uLocal_83, Var0);
		unk_0xB56F35D8A770F80F(uLocal_83, uLocal_82, 1500, 1, 1);
		unk_0x4CBC5D1BC117616B(uLocal_82, 0);
		unk_0x1761457F86AD0EE2(uLocal_84, Var0);
		bLocal_86 = true;
	}
	else if (bParam2)
	{
		unk_0x1761457F86AD0EE2(uLocal_83, Var0);
		unk_0xB56F35D8A770F80F(uLocal_83, uLocal_75, 2000, 1, 1);
		bLocal_86 = true;
	}
	else
	{
		if (bLocal_86)
		{
			unk_0xB56F35D8A770F80F(uLocal_82, uLocal_83, 1500, 1, 1);
		}
		else
		{
			unk_0xB56F35D8A770F80F(uLocal_82, uLocal_84, 1500, 1, 1);
		}
		unk_0x4CBC5D1BC117616B(uLocal_83, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) == 3)
	{
		return;
	}
	if (func_91(iParam0) == 4)
	{
		return;
	}
	func_57(func_91(iParam0), 1, iParam1, iParam2, 0);
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

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
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
					func_89(99, 1);
					func_88(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_72(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
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
							func_88(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_88(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_property"), iParam3);
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
									func_88(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
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
					func_88(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_total_cash_earned"), iParam3);
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
	func_59(iParam0);
	if (Global_44042 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)
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

void func_59(int iParam0)
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

void func_60(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_67(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_67(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_67(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_67(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_62() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_61(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_61(bool bParam0)
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

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_64(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_64(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_65(uParam1));
}

int func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_66();
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

int func_66()
{
	return Global_1574926;
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_66();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_68(int iParam0)
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

int func_69(int iParam0)
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
		return func_71(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_71(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_71(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_71(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_70(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_70(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_70(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_70(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_70(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_70(8277, -1);
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
	return BitTest(Global_2359296[func_62() /*5570*/].f_681.f_10, iParam0);
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_64(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_71(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_66();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_72(bool bParam0)
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
		func_87(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_73(27, 1);
	return 1;
}

int func_73(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_74(iParam0, iParam1);
}

int func_74(int iParam0, int iParam1)
{
	if (func_86(14) && !func_85(iParam0))
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
	if (func_84(&Global_4543384))
	{
		if (func_82(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_75(&Global_4543384, iParam0))
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

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_86(14) && !func_85(iParam1))
	{
		return 0;
	}
	if (func_82(uParam0, iParam1))
	{
		return 0;
	}
	if (func_81(uParam0) < 0f)
	{
		func_80(uParam0, 0);
	}
	func_78(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_76(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_86(14) && !func_85(iParam1))
	{
		return 0;
	}
	if (func_82(uParam0, iParam1))
	{
		return 0;
	}
	if (func_81(uParam0) < 0f)
	{
		func_80(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_77(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_77(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_78(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_79(uParam0, iVar0);
		iVar0++;
	}
	func_80(uParam0, (Global_4543383 - 0,5f));
}

void func_79(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_80(var uParam0, float fParam1)
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

float func_81(var uParam0)
{
	return uParam0->f_80;
}

bool func_82(var uParam0, int iParam1)
{
	return func_83(uParam0, iParam1) != -1;
}

int func_83(var uParam0, int iParam1)
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

bool func_84(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_85(int iParam0)
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

bool func_86(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_87(int iParam0, int iParam1)
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

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_89(int iParam0, int iParam1)
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

void func_90()
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

int func_91(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_92()
{
	func_93();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_93()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_95(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_508(unk_0x4A8C381C258A124D());
			if (func_94(iVar0) && (!func_86(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_94(Global_113969.f_2366.f_539.f_4321))
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

bool func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	if (func_94(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_97(var uParam0)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_104(uParam0);
		func_103(uParam0);
		func_102(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_100();
	}
	if (unk_0xBC2EE32DE886BD08("LEADERBOARD_SCENE"))
	{
		unk_0xB43467C43086A6A1("LEADERBOARD_SCENE");
	}
	if (unk_0x261E3728EE56B3AC())
	{
		func_99(&(Global_2103068.f_49));
	}
	Global_2738934.f_4084 = 0;
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_100()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_101(&(Global_2097536.f_2780));
	func_99(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_99(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_99(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_101(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_99(&(Global_2097536.f_2830));
}

void func_103(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_99(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_104(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_105(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_99(&(Global_2097152.f_1));
	unk_0x92E48B0F5D4E76F2(*uParam2, uParam2->f_1, -1);
}

void func_106()
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_108(&(Global_2097157.f_73));
	func_108(&(Global_2097157.f_142));
	func_108(&(Global_2097157.f_211));
	func_108(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_107(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_107(var uParam0)
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

void func_108(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_109(var uParam0)
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_110()
{
	unk_0x4CBC5D1BC117616B(uLocal_79, 1);
}

int func_111(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_122(&(uParam0->f_509), 0, 0, 1, 1);
			func_121(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_121(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_121(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x99DFE4CAC19D527F())
			{
				func_121(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_114(func_117(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_116(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
					func_114(func_117(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_116(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
				else
				{
					func_114(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
				func_418(&(uParam0->f_57), 0, 0);
			}
			func_124(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x4D9174D8796EA622())
		{
			if ((unk_0x1DD05E817C89C737() - uParam0->f_671) > 900)
			{
				if (unk_0x6D05C5731A838CB3(2, 216))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_338(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x875A214D5EBCA509(2, 215))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_113();
					func_112();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x2645430E708CBFAC(2, 201))
		{
			return 2;
		}
		else if (unk_0x2645430E708CBFAC(2, 202))
		{
			func_338(&(uParam0->f_666), 9, 0);
			func_338(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_112()
{
	if (Global_2672855.f_2557[0 /*80*/].f_2 != 0)
	{
		Global_2672855.f_2557[0 /*80*/].f_2 = 5;
	}
}

void func_113()
{
	Global_33093 = 1;
}

void func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	if (func_115(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_32(3, iVar0);
		Global_1670224.f_2872[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_2872.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_2872.f_183[iVar0] = iParam3;
		Global_1670224.f_2872.f_172[iVar0] = iParam2;
		Global_1670224.f_2872.f_205[iVar0] = iParam4;
		Global_1670224.f_2872.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1670224.f_2872.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_2872.f_420[iVar0] = iParam7;
		Global_1670224.f_2872.f_453[iVar0] = iParam8;
		Global_1670224.f_2872.f_431[iVar0] = iParam9;
		Global_1670224.f_2872.f_442[iVar0] = iParam10;
		Global_1670224.f_2872.f_464[iVar0] = iParam11;
		Global_1670224.f_2872.f_475[iVar0] = iParam12;
		Global_1670224.f_2872.f_486[iVar0] = iParam13;
		Global_1670224.f_2872.f_497[iVar0] = iParam14;
		Global_1670224.f_2872.f_508[iVar0] = iParam15;
	}
}

int func_115(var uParam0)
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

char* func_116(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_117(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 1024);
	}
	else
	{
		func_119(&(uParam0->f_1), 1024);
	}
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_121(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5AF05959A6F22BB4("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 32);
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_120(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x2EE4366DBD59BB7A(*uParam0, 1);
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (bParam3)
		{
			func_120(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_120(&(uParam0->f_1), 8192);
	}
}

int func_123(var uParam0)
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69()) || unk_0x15CCE8886267624F()) || unk_0x114ABA9988FF784B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_127(uParam0))
	{
		return;
	}
	unk_0x6B91FA4E397DAB8D();
	unk_0xA4F67CEB594AE064(iParam2);
	if (!func_126(uParam0->f_1, 256) || (func_126(uParam0->f_1, 8192) && unk_0x7811C74D5B749F76(2)))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_CLEAR_SPACE");
		unk_0x74BF156C860580D4(fParam1);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(fParam5);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE6B753D52F4CA222();
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(func_126(uParam0->f_1, 4096));
			unk_0xE6B753D52F4CA222();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xAE231F549813BBDF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xAE231F549813BBDF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x330108B080A2132F(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = unk_0xE934399D6F2C3AC5(iVar0, uVar1, iVar2);
						}
						else
						{
							sVar3 = unk_0xF761D79754BC3043(iVar0, iVar1, iVar2);
						}
						if (!unk_0xD6F9DEE4765092A9(sVar3))
						{
							func_13(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xD6F9DEE4765092A9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x761778199FE1211C())
					{
						if (func_126(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x557F1E2300EF1A3E(true);
								unk_0x330108B080A2132F(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x557F1E2300EF1A3E(false);
								unk_0x330108B080A2132F(-1);
							}
						}
					}
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar6++;
		}
		fVar8 = func_125(bParam4, func_125(func_126(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x74BF156C860580D4(fVar8);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(80f);
		unk_0xE6B753D52F4CA222();
		func_120(&(uParam0->f_1), 256);
		func_119(&(uParam0->f_1), 128);
	}
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 0, 0);
}

float func_125(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_127(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			func_120(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_128(var uParam0, var uParam1)
{
	func_129(uParam1, uParam0);
}

void func_129(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_210(&(Global_2103068.f_49), 1, 0);
	unk_0x7009D885379C8CDF();
	func_209();
	func_41(0);
	unk_0x43AE50D2A33F6E2A();
	func_207(1);
	unk_0x4EB223432F8FA0A0(10);
	func_206(1);
	func_205(1);
	if (!func_202())
	{
		if (!unk_0xBC2EE32DE886BD08("LEADERBOARD_SCENE"))
		{
			unk_0xCAC4020CCF361AC8("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_201();
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), 3);
	}
	Var10 = { func_25(unk_0x259BE71D8A81D4FA()) };
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		if (((!unk_0x1595D1B690089487() || !unk_0x99DFE4CAC19D527F()) || (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())) || Global_2097536.f_2832 != 0)
		{
			if (!unk_0x99DFE4CAC19D527F())
			{
				if (Global_2097536.f_2829 != 2)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())
			{
				if (Global_2097536.f_2829 != 3)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!unk_0x1595D1B690089487())
			{
				if (Global_2097536.f_2829 != 4)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xE6B753D52F4CA222();
				func_200(*uParam0, Global_2097536.f_2780);
				if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_199(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							cVar6 = { Global_2097536.f_2780.f_9 };
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_197(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
				func_196(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
				func_196(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
				func_196(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), 1);
				func_195(*uParam0);
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
				unk_0x428C32CC68809A35(1);
			}
			else
			{
				func_195(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
				Global_2097536.f_2829 = 1;
			}
			if (!func_158(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
				if (!BitTest(uParam1->f_42, 0))
				{
					unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE6B753D52F4CA222();
					func_200(*uParam0, Global_2097536.f_2780);
					if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar6 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_197(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), 0);
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 7);
						func_157(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_99(&(Global_2097536.f_2823));
				}
				else if (func_155(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
							func_196(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 7);
						func_157(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_99(&(Global_2097536.f_2823));
				}
				func_195(*uParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), false);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE6B753D52F4CA222();
					func_200(*uParam0, Global_2097536.f_2780);
					if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar6 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_197(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_102(&Global_2101867);
						func_151(uParam1, &Global_2101867);
						func_150(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
									func_196(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_196(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_196(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
									if (!unk_0xFE087BC8EB584AA2())
									{
										bVar14 = true;
									}
									else if (!unk_0xEBF44C5F6EF789C0())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_196(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_196(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_149(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_199(uParam1->f_44))
								{
									unk_0x4DE98A9A01197527(unk_0x259BE71D8A81D4FA(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && unk_0x1B79E937E91F40C3(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_148(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x0B0C9A0F9AAEB7F0(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x0B0C9A0F9AAEB7F0(&iVar9, 3);
											}
										}
									}
									if (func_199(uParam1->f_44))
									{
										cVar6 = { Global_2101867[iVar0 /*100*/] };
										if (!unk_0xD6F9DEE4765092A9(&(Global_2101867[iVar0 /*100*/].f_84)) && !unk_0x1B79E937E91F40C3(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar6, "/", 64);
											StringConCat(&cVar6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_147(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &cVar6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_147(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_138(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_138(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_135(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_135(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_134();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x0B0C9A0F9AAEB7F0(&iVar9, 2);
											unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_133(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
						func_196(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
						func_196(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
						func_196(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), 1);
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
					func_195(*uParam0);
					unk_0x428C32CC68809A35(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_195(*uParam0);
					func_130(uParam0, uParam1);
				}
			}
		}
	}
}

void func_130(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xAE231F549813BBDF(2))
	{
		unk_0xA6DB7FC56DBDFB82();
		unk_0x4CC1CF98851922CE(2, 239);
		unk_0x4CC1CF98851922CE(2, 240);
		unk_0x4CC1CF98851922CE(2, 237);
		unk_0x4CC1CF98851922CE(2, 238);
		unk_0x66EFB3D6110055C4(2, 200, 1);
		if (unk_0x4465D55576678706(2, 241))
		{
			unk_0x11E5CA6A9B6D7D2A(2, 188, 1f);
		}
		if (unk_0x4465D55576678706(2, 242))
		{
			unk_0x11E5CA6A9B6D7D2A(2, 187, 1f);
		}
		if (unk_0xEE00DCC111704F16(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x11E5CA6A9B6D7D2A(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xAE231F549813BBDF(2))
	{
		func_132(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((unk_0x6D05C5731A838CB3(2, 188) || unk_0x4465D55576678706(2, 188)) || iVar6 < -100)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 0);
				func_99(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_131(uParam1, 188))
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_246), false);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((unk_0x6D05C5731A838CB3(2, 187) || unk_0x4465D55576678706(2, 187)) || iVar6 > 100)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 1);
				func_99(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_131(uParam1, 187))
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((unk_0x6D05C5731A838CB3(2, 204) || unk_0xDEE3EFEA31A1F555(2, 204)) || unk_0x875A214D5EBCA509(2, 237))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 3);
			func_99(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_131(uParam1, 204))
	{
		unk_0x8744D2E3FC95740E(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_133(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
		}
		if (func_149(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (unk_0x6D05C5731A838CB3(2, 217) || unk_0xDEE3EFEA31A1F555(2, 217))
				{
					if (!unk_0xEF37E704F02B50F3())
					{
						unk_0xBF3D28CA44F3BE2D(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 2);
						unk_0xAD9DEC6201018EA3(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x6D05C5731A838CB3(2, 217))
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_131(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_132(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x6D05C5731A838CB3(2, iParam1) && !unk_0x4465D55576678706(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_155(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x6D05C5731A838CB3(2, iParam1) && !unk_0x4465D55576678706(2, iParam1)) || func_155(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = system::floor((unk_0xB504E1B50AA21FC5(2, 218) * 127f));
	*uParam1 = system::floor((unk_0xB504E1B50AA21FC5(2, 219) * 127f));
	*uParam2 = system::floor((unk_0xB504E1B50AA21FC5(2, 220) * 127f));
	*uParam3 = system::floor((unk_0xB504E1B50AA21FC5(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0xF069618D9974EB9D(2, 218) * 127f));
			*uParam1 = system::floor((unk_0xF069618D9974EB9D(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0xF069618D9974EB9D(2, 220) * 127f));
			*uParam3 = system::floor((unk_0xF069618D9974EB9D(2, 221) * 127f));
		}
	}
}

void func_133(var uParam0, int iParam1, int iParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT_STATE");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0xE6B753D52F4CA222();
}

void func_134()
{
	unk_0xE6B753D52F4CA222();
}

void func_135(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[bParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x7DCF91CE9137DE0E(fParam15, 2);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(system::floor(fParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 18 || Param0.f_29[bParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x4721B5E26C8861C8())
				{
					if (Param0.f_29[bParam14] == 19 || Param0.f_29[bParam14] == 20)
					{
						fParam15 = func_137(fParam15);
					}
					else
					{
						fParam15 = func_136(fParam15);
					}
				}
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x7DCF91CE9137DE0E(fParam15, 2);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 0:
			break;
	}
}

float func_136(float fParam0)
{
	return (fParam0 / 0,3048f);
}

float func_137(float fParam0)
{
	return (fParam0 / 1609,344f);
}

void func_138(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(-iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else if (Param0.f_29[bParam14] == 9)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 6);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
					unk_0xCFAD3D478C87321A();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else if (Param0.f_29[bParam14] == 10)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 6);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xE7D342E0F16AAA8F(iParam15))
				{
					unk_0x882AEFD55B8D51FB("SCLB_VEH_CUST");
					unk_0xACF853FB3F6EA7D4(unk_0x93E7527CFECC7CD8(iParam15));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
					unk_0xCFAD3D478C87321A();
				}
			}
			else if (unk_0xE7D342E0F16AAA8F(iParam15))
			{
				unk_0x882AEFD55B8D51FB(unk_0x93E7527CFECC7CD8(iParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 8:
			if (func_146(iParam15) != 0)
			{
				unk_0x882AEFD55B8D51FB(func_143(func_146(iParam15), 0));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 14 || Param0.f_29[bParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x4721B5E26C8861C8())
				{
					if (Param0.f_29[bParam14] == 15 || Param0.f_29[bParam14] == 16)
					{
						iParam15 = system::floor(func_137(system::to_float(iParam15)));
					}
					else
					{
						iParam15 = system::floor(func_136(system::to_float(iParam15)));
					}
				}
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				Var0 = { func_142(iParam15) };
				unk_0x882AEFD55B8D51FB(&Var0);
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 22:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(func_139(iParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 0:
			break;
	}
}

int func_139(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_141(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (system::to_float(iParam0) - system::to_float(iVar0));
		iVar2 = system::floor((fVar1 / system::to_float(Global_262145.f_30385)));
		return (199 + iVar2);
	}
	fVar3 = (system::to_float(Global_262145.f_30384) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return system::floor(func_140(-fVar5, -fVar6, fVar7, 1));
}

float func_140(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - system::sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + system::sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_141(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = (system::to_float(Global_262145.f_30384) / 2f);
	return system::round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_142(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_143(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case joaat("weapon_precisionrifle"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("weapon_pistolxm3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3";
			}
			else
			{
				return "WT_PISTOLXM3";
			}
			break;
		
		case joaat("weapon_candycane"):
			if (bParam1)
			{
				return "WTU_CANDYCANE";
			}
			else
			{
				return "WT_CANDYCANE";
			}
			break;
		
		case joaat("weapon_railgunxm3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3";
			}
			else
			{
				return "WT_RAILGUNXM3";
			}
			break;
		
		case 350597077:
			if (bParam1)
			{
				return "WTU_TECPISTOL";
			}
			else
			{
				return "WT_TECPISTOL";
			}
			break;
		
		case joaat("vehicle_weapon_trailer_dualaa"):
			if (bParam1)
			{
				return "WT_UV_DUALAA";
			}
			else
			{
				return "WT_V_DUALAA";
			}
			break;
		
		case joaat("weapon_snowball"):
			if (bParam1)
			{
				return "FMMC_U_SNOWBALL";
			}
			else
			{
				return "FMMC_SNOWBALL";
			}
			break;
		
		case joaat("weapon_battlerifle"):
			if (bParam1)
			{
				return "WTU_BATTLERIFLE";
			}
			else
			{
				return "WT_BATTLERIFLE";
			}
			break;
		
		case joaat("weapon_snowlauncher"):
			if (bParam1)
			{
				return "WTU_SNOWLNCHR";
			}
			else
			{
				return "WT_SNOWLNCHR";
			}
			break;
		
		case -624951259:
			if (bParam1)
			{
				return "WTU_STUNROD";
			}
			else
			{
				return "WT_STUNROD";
			}
			break;
		
		default:
			if (func_145(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_144(&(Var0.f_31));
				}
				else
				{
					return func_144(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_144(var uParam0)
{
	return uParam0;
}

int func_145(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	if (iParam3 > 0)
	{
		unk_0x882AEFD55B8D51FB("NUMBER");
		unk_0x511D14ED2DA887E1(iParam3);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
		unk_0xCFAD3D478C87321A();
	}
	unk_0xCE3E870AC37B4253(cParam4);
	unk_0xCE3E870AC37B4253(uParam5);
}

int func_148(var uParam0, var uParam1)
{
	if (!func_149(*uParam0))
	{
		return 0;
	}
	if (!func_149(*uParam1))
	{
		return 0;
	}
	if (unk_0xD43ED7463CB7671C(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_150(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_151(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_154(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_154(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_154(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_152(uParam1);
	}
}

void func_152(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_25(unk_0x259BE71D8A81D4FA()) };
	if (unk_0xC0967BD19C389A28(Global_2097536.f_2826))
	{
		iVar4 = unk_0xEDF2663D6A2097BD(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_153(&Global_2101737);
				iVar2 = 0;
				unk_0x4B9EEFBC1906C36A(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_148(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_153(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_154(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_25(unk_0x259BE71D8A81D4FA()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = system::floor(system::to_float((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_155(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_156(uParam0, bParam2, 0);
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

void func_156(var uParam0, bool bParam1, bool bParam2)
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

void func_157(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x0B0C9A0F9AAEB7F0(&iParam2, 7);
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x882AEFD55B8D51FB(sParam3);
	unk_0xF84BAB6A609E97D4();
	unk_0xE6B753D52F4CA222();
}

int func_158(var uParam0)
{
	if (!Global_2097532)
	{
		if (!func_194(&(Global_2097536.f_2827)))
		{
			func_156(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_155(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x1595D1B690089487() || !unk_0x99DFE4CAC19D527F()) || (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())) || Global_2097536.f_2832 != 0)
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_193(uParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_191(uParam0))
	{
		return 0;
	}
	if (!func_189(uParam0))
	{
		return 0;
	}
	if (!func_176(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_102(&Global_2101867);
		func_151(uParam0, &Global_2101867);
		func_150(uParam0, &Global_2101867);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_194(&(Global_2097536.f_2830)))
		{
			func_156(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_155(&(Global_2097536.f_2830), 30000, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 7);
		}
		if (func_173(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_170(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_163(&Global_2101867))
		{
			func_159(&Global_2101867);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 7);
			func_159(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_159(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_162(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_161(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_153(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x1B79E937E91F40C3(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_149((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2101737.f_61), 0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2101737.f_61), false);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			unk_0x6353C1BD2A5E7EA9(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_160(unk_0x259BE71D8A81D4FA()) };
}

Vector3 func_160(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xC0967BD19C389A28(Global_2100721.f_81[iParam1]))
		{
			unk_0xEB551BF55D9D9721(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xC0967BD19C389A28(iParam0))
		{
			unk_0xEB551BF55D9D9721(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xC0967BD19C389A28(Global_2100721.f_81[iVar0]))
		{
			iVar3 = unk_0x992FDA8495111E7E(Global_2100721.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_169(uParam0);
			if ((func_168() || func_167()) && !unk_0x97DD063A9C6137F8(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_149((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_166(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_164(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_149((uParam0[iVar0 /*100*/])->f_32) && func_149(Global_2103169[iVar1 /*13*/]))
					{
						if (unk_0xD43ED7463CB7671C(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_164(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x51BEADCE3428DB6F())
			{
			}
			else
			{
				unk_0x96B33F4FC167DB47();
				unk_0xAC93CF5F25CF17A8(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x51BEADCE3428DB6F())
			{
				if (unk_0xCE1D2FC338EEA6AA())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x2C34F64CC58753D7(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_165(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x51BEADCE3428DB6F())
			{
				unk_0xFAE42E9AE7B80A4C();
			}
			else
			{
				unk_0x96B33F4FC167DB47();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_165(var uParam0, var uParam1)
{
	unk_0x29B9959EF2236634(uParam0, 35, uParam1);
}

int func_166(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_149(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xD43ED7463CB7671C(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_167()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

bool func_168()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_169(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_107(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x51BEADCE3428DB6F())
		{
			unk_0x96B33F4FC167DB47();
		}
	}
	if (unk_0x51BEADCE3428DB6F())
	{
		unk_0xFAE42E9AE7B80A4C();
	}
	Global_2103169.f_206 = 0;
}

int func_170(var uParam0)
{
	int iVar0;
	
	if (unk_0x761778199FE1211C())
	{
		return 1;
	}
	else if (func_167() || func_168())
	{
		if (!func_172(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_171(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_171(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_149(*uParam1))
			{
				if (!unk_0xBE0146369C46314B(uParam1))
				{
					if (func_167() || func_168())
					{
						if (unk_0x8F46B8E54248FD48(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x1226C55CA7D2269A())
					{
						if (unk_0x8F46B8E54248FD48(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x6E4BB594E2A075CC(uParam1), 64);
						if (unk_0x0BA1A956D36B210F())
						{
						}
						else if (func_168())
						{
						}
						else if (unk_0x761778199FE1211C())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xBE0146369C46314B(uParam1))
			{
				if (!unk_0x6B6DB41744C41D5E())
				{
					if (unk_0xA44A2B8A83947D02())
					{
						StringCopy(sParam2, unk_0x6E4BB594E2A075CC(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_167() && !func_168())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_107(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_149((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x310461CE0659232F(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xD61DBE5217500D72((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_149((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_173(var uParam0)
{
	int iVar0;
	
	if (func_167() || func_168())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_175(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_174(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xD6F9DEE4765092A9(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xF1DAEAF3D760B0ED(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_149(Var0))
			{
				if (!unk_0xBE0146369C46314B(&Var0))
				{
					if ((unk_0x1226C55CA7D2269A() || func_167()) || func_168())
					{
						if (unk_0x8F46B8E54248FD48(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x6E4BB594E2A075CC(&Var0), 64);
						if (unk_0x0BA1A956D36B210F())
						{
						}
						else if (func_168())
						{
						}
						else if (unk_0x761778199FE1211C())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xBE0146369C46314B(&Var0))
			{
				if (!unk_0x6B6DB41744C41D5E())
				{
					if (unk_0xA44A2B8A83947D02())
					{
						StringCopy(sParam17, unk_0x6E4BB594E2A075CC(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_167() && !func_168())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xF1DAEAF3D760B0ED(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_149(Var1[0 /*13*/]))
			{
				if (!unk_0xBE0146369C46314B(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x310461CE0659232F(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xD61DBE5217500D72(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_176(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_25(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_2097536.f_2775[iVar9] = -1;
			Global_2097536.f_2704[iVar9] = 0;
			Global_2097157.f_374 = -1;
			if (unk_0x7260716F2E4D7661())
			{
				if (unk_0xE582BF3EDDBB1A68(&Var12))
				{
					if (unk_0xC07B1AA6155EC337(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_188(), 0, 0, 0))
			{
				func_186(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_188())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xA8236CAFF38CEF7C(iVar7, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_148(&Var0, &Var12) || func_148(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_185(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_188() && iVar5 == 0)
								{
									func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[iVar9] = 0;
									Global_2097536.f_2704[iVar9]++;
								}
								if (func_188() && (func_148(&Var0, &Var12) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_148(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_2097536.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						if (!func_188())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_185(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar7, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_188() && iVar5 == iVar7)
								{
									if (!func_148(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_188() && (func_148(&Var0, &Var12) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar9] < 11)
								{
									if (func_149(Var0) && !func_148(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&Var0, &Var12))
										{
											if (Global_2097536.f_2775[iVar9] < 0)
											{
												Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar4 = unk_0x575A7688415EEE2A(iVar7, Global_2097536.f_2709);
											if (iVar4 == 1)
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(iVar7, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(iVar7, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[iVar9]++;
									}
								}
							}
							func_185(&Var0);
							iVar7++;
						}
						unk_0x612EE6D9325A3B16();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_2097536.f_2775[iVar9] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						unk_0x612EE6D9325A3B16();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_186(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xA8236CAFF38CEF7C(iVar2, &Var0);
							bVar10 = false;
							if (Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_2097536.f_2704[iVar9] < 11 || bVar10)
							{
								if (func_188() && (func_148(&Var0, &Var12) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_2097536.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_2097536.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_2097536.f_2704[iVar9] < 11)
								{
									MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_183(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(iVar2, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(iVar2, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(iVar2, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_2097536.f_2704[iVar9]++;
									}
								}
							}
							func_185(&Var0);
							iVar2++;
						}
					}
					unk_0x612EE6D9325A3B16();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0x612EE6D9325A3B16();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar9);
					Global_2097536.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_2097536.f_2775[iVar9] == -1 && func_188())
				{
					if (Global_2097536.f_2704[iVar9] >= 1)
					{
						func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
					}
					Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
					Global_2097536.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_177(iVar9, Global_2097157.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_188() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[iParam0])
			{
				if (iVar0 != Global_2097536.f_2775[iParam0])
				{
					if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_188())
		{
		}
		if (Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0])
		{
		}
		if (Global_2097536.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_178(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (unk_0xCB7FE0F272C209AB(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_179(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_2097152 = 1;
	func_210(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

int func_180()
{
	if (unk_0x4D9174D8796EA622() && !func_202())
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if (unk_0x5824DB463E853B3E() || Global_2097152)
	{
		func_182();
		return 1;
	}
	return 0;
}

void func_182()
{
	if (func_155(&(Global_2097152.f_1), 120000, 1))
	{
		unk_0x92E48B0F5D4E76F2(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_99(&(Global_2097152.f_1));
	}
}

int func_183(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_199(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), 64);
		sParam1->f_32 = { func_25(unk_0x259BE71D8A81D4FA()) };
	}
	sParam1->f_59 = iParam2;
	if (func_183(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_185(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_186(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_187(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2097157.f_211.f_36[0];
	uVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (unk_0x9A9BC0C3D955A625(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x40ED52FB5B42D9FB(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x15A7798AEEFAC562(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_188()
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_25(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0xFD8C855412F74D0F();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_188())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_186(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
					{
						if (func_188())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xA8236CAFF38CEF7C(iVar6, &Var0);
									if (func_199(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_148(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_185(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_188() && iVar4 == 0)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								Global_2097536.f_2775[iVar9] = 0;
								Global_2097536.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xA8236CAFF38CEF7C(0, &Var0);
							if (func_188() && (func_148(&Var0, &Var10) || func_148(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_149(Var0) && Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_148(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_183(uParam0->f_44))
								{
									iVar7 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
									if (iVar7 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_199(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar2]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_185(&Var0);
								unk_0x612EE6D9325A3B16();
								func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[iVar9] == -1 && func_188())
								{
									if (Global_2097536.f_2704[iVar9] >= 1)
									{
										func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
									}
									Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
									Global_2097536.f_2704[iVar9]++;
								}
								return 0;
							}
							func_185(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_185(&Var0);
							unk_0x612EE6D9325A3B16();
							func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[iVar9] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_188())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar6, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_188() && iVar4 == iVar6)
								{
									if (!func_148(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_188() && (func_148(&Var0, &Var10) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_149(Var0) && !func_148(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&Var0, &Var10))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar7 = unk_0x575A7688415EEE2A(iVar6, Global_2097536.f_2709);
											if (iVar7 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(iVar6, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(iVar6, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_185(&Var0);
							iVar6++;
						}
						unk_0x612EE6D9325A3B16();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[iVar9] == -1 && func_188())
						{
							if (Global_2097536.f_2704[iVar9] >= 1)
							{
								func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_184(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
							}
							Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
							Global_2097536.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_177(iVar9, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_190(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (stats::leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_191(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_25(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_2097536.f_2775[iVar10] = -1;
			Global_2097536.f_2704[iVar10] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_192(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_188(), 0, 0, 0))
			{
				func_186(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_188())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xA8236CAFF38CEF7C(iVar8, &Var1);
								if (Global_2097157.f_374 < 0)
								{
									if (func_148(&Var1, &Var0) || func_148(&Var1, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_185(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xA8236CAFF38CEF7C(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar10] < 11)
							{
								if (func_188() && iVar6 == 0)
								{
									func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_2097536.f_2775[iVar10] = 0;
									Global_2097536.f_2704[iVar10]++;
								}
								if (func_188() && (func_148(&Var1, &Var0) || func_148(&Var1, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_148(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_2097536.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar5 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar5 == 1)
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						if (!func_188())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_185(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar8, &Var1);
							if (Global_2097536.f_2704[iVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_188() && iVar6 == iVar8)
								{
									if (!func_148(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
										Global_2097536.f_2704[iVar10]++;
									}
								}
								if (func_188() && (func_148(&Var1, &Var0) || func_148(&Var1, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar10] < 11)
								{
									if (func_149(Var1) && !func_148(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_148(&Var1, &Var0))
										{
											if (Global_2097536.f_2775[iVar10] < 0)
											{
												Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(iVar8, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(iVar8, Global_2097536.f_2710[iVar3]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(iVar8, Global_2097536.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_2097536.f_2704[iVar10]++;
									}
								}
							}
							func_185(&Var1);
							iVar8++;
						}
						unk_0x612EE6D9325A3B16();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_2097536.f_2775[iVar10] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar10] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
								Global_2097536.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						unk_0x612EE6D9325A3B16();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_186(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xA8236CAFF38CEF7C(iVar3, &Var1);
							if (func_188() && (func_148(&Var1, &Var0) || func_148(&Var1, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_2097536.f_2704[iVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_183(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xFF7C26AC7D71757C(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_2097536.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_2097536.f_2704[iVar10]++;
											}
										}
										else if (Global_2097536.f_2704[iVar10] == 1 && Global_2097536.f_2775[iVar10] == -1)
										{
											Global_2097536.f_2704[iVar10]++;
										}
									}
									else if (Global_2097536.f_2704[iVar10] < 11)
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_183(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0xFF7C26AC7D71757C(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_2097536.f_2704[iVar10]++;
										}
									}
								}
							}
							func_185(&Var1);
							iVar3++;
						}
					}
					unk_0x612EE6D9325A3B16();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar10);
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[iVar10] == -1 && func_188())
			{
				if (Global_2097536.f_2704[iVar10] >= 1)
				{
					func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_184(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
				}
				Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
				Global_2097536.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_177(iVar10, Global_2097157.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_192(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x1B79E937E91F40C3(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x1B79E937E91F40C3(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_193(var uParam0)
{
	int iVar0;
	
	if (unk_0xC0967BD19C389A28(Global_2097536.f_2826))
	{
		iVar0 = unk_0x992FDA8495111E7E(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_42), 5);
			func_161(Global_2097536.f_2826, -1);
		}
	}
}

bool func_194(var uParam0)
{
	return uParam0->f_1;
}

void func_195(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(uParam0))
	{
		unk_0xA91A4C18A2DB01BD(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_196(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x261E3728EE56B3AC() && unk_0x7260716F2E4D7661())
		{
			if ((func_168() || func_167()) && !unk_0x97DD063A9C6137F8(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_25(unk_0x259BE71D8A81D4FA()) };
				if (unk_0xE582BF3EDDBB1A68(&Var4))
				{
					unk_0xC07B1AA6155EC337(&Var1, 35, &Var4);
					if (!unk_0xD6F9DEE4765092A9(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(*iParam1);
	unk_0x330108B080A2132F(iParam2);
	if (bVar3)
	{
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xB993F5B7A74B2A85(&Var2);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xCFAD3D478C87321A();
	}
	unk_0xE6B753D52F4CA222();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 7);
		unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
		unk_0x330108B080A2132F(*iParam1);
		unk_0x330108B080A2132F(iVar5);
		if (!unk_0x261E3728EE56B3AC())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x1595D1B690089487())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xF84BAB6A609E97D4();
		unk_0xE6B753D52F4CA222();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (BitTest(iParam2, 5))
		{
			if (unk_0xFD8C855412F74D0F() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (unk_0xFE087BC8EB584AA2())
			{
				if (unk_0xEBF44C5F6EF789C0())
				{
					if (unk_0x261E3728EE56B3AC() && unk_0x7260716F2E4D7661())
					{
						if ((func_168() || func_167()) && !unk_0x97DD063A9C6137F8(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_25(unk_0x259BE71D8A81D4FA()) };
							if (unk_0xE582BF3EDDBB1A68(&Var6))
							{
								unk_0xC07B1AA6155EC337(&Var1, 35, &Var6);
								if (!unk_0xD6F9DEE4765092A9(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar7, 7);
		unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
		unk_0x330108B080A2132F(*iParam1);
		unk_0x330108B080A2132F(iVar7);
		if (bVar3)
		{
			unk_0x882AEFD55B8D51FB(sVar0);
			unk_0xB993F5B7A74B2A85(&Var2);
			unk_0xF84BAB6A609E97D4();
		}
		else
		{
			unk_0x882AEFD55B8D51FB(sVar0);
			unk_0xF84BAB6A609E97D4();
		}
		unk_0xE6B753D52F4CA222();
		*iParam1++;
	}
}

void func_197(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x88F483FBD433696A(uParam0, "SET_TITLE");
	unk_0x882AEFD55B8D51FB(sParam1);
	unk_0xCFAD3D478C87321A();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x882AEFD55B8D51FB(uParam2[iVar0 /*6*/]);
		unk_0xCFAD3D478C87321A();
		iVar0++;
	}
	unk_0xE6B753D52F4CA222();
}

void func_198(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x882AEFD55B8D51FB(sParam1);
	if (!unk_0xD6F9DEE4765092A9(sParam2))
	{
		unk_0xACF853FB3F6EA7D4(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				unk_0xB993F5B7A74B2A85(sParam3);
			}
		}
		else if (!unk_0xD6F9DEE4765092A9(sParam3))
		{
			unk_0xACF853FB3F6EA7D4(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				unk_0xB993F5B7A74B2A85(sParam3);
			}
		}
		else if (!unk_0xD6F9DEE4765092A9(sParam3))
		{
			unk_0xACF853FB3F6EA7D4(sParam3);
		}
		unk_0x511D14ED2DA887E1(iParam5);
	}
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
}

int func_199(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_200(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_DISPLAY_TYPE");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

var func_201()
{
	return unk_0x8DE4F68A9728925E("SC_LEADERBOARD");
}

bool func_202()
{
	return func_203(unk_0x259BE71D8A81D4FA());
}

int func_203(int iParam0)
{
	switch (func_204(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_204(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193;
}

void func_205(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_206(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		func_209();
	}
	func_208(4, -1);
	func_208(6, -1);
	func_208(7, -1);
	func_208(3, -1);
	func_208(1, -1);
	func_208(2, -1);
	func_208(11, -1);
	func_208(13, -1);
	func_208(14, -1);
	func_208(16, -1);
}

void func_208(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668667.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_209()
{
	Global_2738934.f_4651 = 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
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

int func_211(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < unk_0x8034325BF6D6E41F() && Global_2103068.f_2 > 0)
	{
		func_99(&Global_2103068);
		func_99(&(Global_2103068.f_49));
		*uParam0 = 0;
		Global_2103068.f_2 = 0;
		func_219(0);
	}
	Global_2103068.f_2 = unk_0x8034325BF6D6E41F();
	iVar1 = -1;
	if (func_168())
	{
		if (unk_0xECBFC40AE72FA489() == 0)
		{
			iVar1 = unk_0x444B1E9E9A9D726B();
		}
	}
	if ((func_168() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_217() && unk_0x261E3728EE56B3AC()))
	{
		if (unk_0x9A98CA859043585F())
		{
			func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
			if (!BitTest(*uParam0, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_217())
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*uParam0, 0))
			{
				if (!unk_0x6D05C5731A838CB3(2, 201))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 0);
				}
			}
			else if (unk_0x2645430E708CBFAC(2, 201))
			{
				func_99(&(Global_2103068.f_49));
				func_99(&Global_2103068);
				*uParam0 = 0;
				Global_2103068.f_2 = 0;
				func_219(0);
				return 1;
			}
		}
	}
	else
	{
		func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
		if ((func_194(&(Global_2103068.f_49)) && !func_155(&(Global_2103068.f_49), 2000, 1)) && !unk_0x261E3728EE56B3AC())
		{
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_212(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*uParam0, 3))
		{
			if (!BitTest(*uParam0, 1))
			{
				unk_0xC296E8407A7E3E69(0);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), 0);
			}
		}
		if (func_194(&Global_2103068))
		{
			if (!func_155(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x261E3728EE56B3AC())
				{
					if (unk_0x6B47B305B6557EF9())
					{
						hud::set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xEF37E704F02B50F3())
					{
						if (!BitTest(*uParam0, 0))
						{
							if (!unk_0x6D05C5731A838CB3(2, 201))
							{
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 0);
							}
						}
						else if (unk_0x2645430E708CBFAC(2, 201))
						{
							func_99(&Global_2103068);
							*uParam0 = 0;
							Global_2103068.f_2 = 0;
							func_219(0);
							return 1;
						}
					}
				}
				else
				{
					func_99(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_219(0);
					return 1;
				}
			}
			else if (BitTest(*uParam0, 3))
			{
				if (unk_0x6B47B305B6557EF9())
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*uParam0, 0))
				{
					if (!unk_0x6D05C5731A838CB3(2, 201))
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 0);
					}
				}
				else if (unk_0x2645430E708CBFAC(2, 201))
				{
					func_99(&(Global_2103068.f_49));
					func_99(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_219(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x6B47B305B6557EF9())
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xEF37E704F02B50F3())
				{
					if (!BitTest(*uParam0, 0))
					{
						if (!unk_0x6D05C5731A838CB3(2, 201))
						{
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 0);
						}
					}
					else if (unk_0x2645430E708CBFAC(2, 201))
					{
						func_99(&(Global_2103068.f_49));
						func_99(&Global_2103068);
						*uParam0 = 0;
						Global_2103068.f_2 = 0;
						func_219(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_212(var uParam0, bool bParam1)
{
	func_213(uParam0);
	if (bParam1)
	{
		func_219(0);
	}
	uParam0->f_35 = 1;
}

void func_213(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_215(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0xBD34A69071611974(uParam0->f_33, 70);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_215(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_216(var uParam0)
{
	return uParam0->f_35;
}

int func_217()
{
	if (func_218())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_218()
{
	return Global_2696683;
}

void func_219(bool bParam0)
{
	unk_0x65662724C6BC4810();
	if (bParam0)
	{
		unk_0x8CBD7E751A3A6A85();
	}
}

int func_220(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_133)
	{
		func_232(&(uParam0->f_72), bParam1);
		iLocal_133 = 1;
		func_338(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_229(190, bParam1);
			Global_2097157.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_221(&(uParam0->f_72)))
		{
			Global_2097532 = 1;
			return 1;
		}
	}
	return 0;
}

int func_221(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_199(uParam0->f_44))
	{
		Var3 = { Global_2097157.f_361 };
	}
	else
	{
		Var3 = { func_25(unk_0x259BE71D8A81D4FA()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_228(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_186(&Var1, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = unk_0x6D2024112D9A9660(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_2097157.f_142.f_1)
				{
					if (!func_227(uParam0->f_44, iVar4))
					{
						if (func_226(uParam0->f_44, 4, iVar4))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), iVar4);
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), iVar4);
						}
					}
					bVar4++;
				}
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_149(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							bVar4 = false;
							while (bVar4 < Global_2097157.f_142.f_1)
							{
								if (!func_227(uParam0->f_44, bVar4))
								{
									if (func_226(uParam0->f_44, 4, bVar4))
									{
										Global_2097157.f_73.f_36[bVar4] = unk_0x575A7688415EEE2A(0, bVar4);
										if (Global_2097157.f_73.f_36[bVar4] == -1)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[bVar4] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[bVar4] = unk_0xFF7C26AC7D71757C(0, bVar4);
										if (Global_2097157.f_73.f_3[bVar4] == -1f)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[bVar4] = 0f;
											}
										}
									}
								}
								bVar4++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					unk_0x612EE6D9325A3B16();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_225();
				if (Global_2097157.f_4)
				{
					if (func_224(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xAB3A622E50A5CCE2(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x76CD105BCAC6EB9F() && func_223())
			{
				if (func_222())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_224(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var2.f_0 = Global_2097157.f_142;
				Var2.f_1 = Global_2097157.f_142.f_1;
				Var2.f_2 = Global_2097157.f_142.f_2;
				unk_0xAB3A622E50A5CCE2(&Var2, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_186(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (unk_0x1B79E937E91F40C3(&(Var0.f_13), ""))
						{
							Global_1057195.f_1 = -1;
						}
						else
						{
							Global_1057195.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057195.f_1 = -1;
					}
					unk_0x612EE6D9325A3B16();
				}
				else
				{
					Global_1057195.f_1 = -1;
				}
				Global_2097157 = 999;
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_222()
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_223()
{
	return Global_2693440.f_3;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_225()
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x3C041FAC0ACE6A45(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	if (unk_0x54F72D02D777FBCB(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_228(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (unk_0xFAFBA6521BA828B9(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x99DFE4CAC19D527F())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_231(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_230(190, 131, 0, 0f, 1);
		func_230(190, 103, iLocal_104[1], 0f, 0);
		func_230(190, 99, iLocal_104[2], 0f, 0);
		func_230(190, 109, iLocal_104[3], 0f, 0);
		func_230(190, 106, iLocal_104[5], 0f, 0);
		func_230(190, 2, iLocal_104[10], 0f, 0);
		func_230(190, 107, iLocal_104[8], 0f, 0);
		func_230(190, 116, iLocal_104[6], 0f, 0);
		iLocal_104[1] = 0;
		iLocal_104[2] = 0;
		iLocal_104[3] = 0;
		iLocal_104[5] = 0;
		iLocal_104[10] = 0;
		iLocal_104[8] = 0;
		iLocal_104[6] = 0;
	}
}

void func_230(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x3573EC2255786C32(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = unk_0x6D2024112D9A9660(Global_2097157.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_226(iParam0, 4, iVar1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == unk_0x54F72D02D777FBCB(iParam0, 4, bVar1))
		{
			iVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_2097157.f_142.f_36[iVar0] = iParam2;
	Global_2097157.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), iVar0);
	}
}

int func_231(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x261E3728EE56B3AC())
	{
	}
	if ((!unk_0xB10D024D4A098884() && (unk_0xD25970CBEE074E07() || !unk_0xB0DF27929B02C57E())) && unk_0xAE6B753124318E29())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x7260716F2E4D7661())
			{
				Var2 = { func_25(unk_0x259BE71D8A81D4FA()) };
				if (unk_0xE582BF3EDDBB1A68(&Var2))
				{
					if (unk_0xC07B1AA6155EC337(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x76CD105BCAC6EB9F() && Global_2693440.f_3)
			{
				unk_0xFFC169CFE58B4AE2(&Var0, &(Global_1928632.f_10));
			}
			else
			{
				unk_0x41B592D7008A639E(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xB10D024D4A098884())
	{
	}
	if (!unk_0xD25970CBEE074E07())
	{
	}
	if (unk_0xB0DF27929B02C57E())
	{
	}
	if (!unk_0xAE6B753124318E29())
	{
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_233(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xD6F9DEE4765092A9(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	if ((iParam1 == 2 && iParam4 == 30) || iParam1 == 335)
	{
		if (iParam5 > 0 && !func_242())
		{
			uParam0->f_44 = 826;
		}
		else
		{
			uParam0->f_44 = 815;
		}
		uParam0->f_44.f_1 = 5;
		uParam0->f_44.f_3 = 1;
		StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
		uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
		if (iParam5 > 0 && !func_242())
		{
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
			StringCopy(&Var1, "", 32);
			StringIntConCat(&Var1, iParam5, 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
			Global_2097536.f_2780.f_26 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				if (iParam5 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
			}
			else if (iParam5 == 1)
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
			}
		}
		else
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
			}
			Global_2097536.f_2780.f_26 = -1;
		}
		Global_2097536.f_2780 = 1;
		StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
		StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_DRIFT", 24);
		StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
		StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
		Global_2097536.f_2710[0] = 0;
		Global_2097536.f_2710[1] = 1;
		Global_2097536.f_2710[2] = 3;
		Global_2097536.f_2710[3] = 0;
		Global_2097536.f_2709 = 4;
		Global_2097536.f_2708 = 3;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
		Global_2097536.f_2780.f_28 = 5;
		Global_2097536.f_2780.f_29[0] = 5;
		Global_2097536.f_2780.f_29[1] = 5;
		Global_2097536.f_2780.f_29[2] = 3;
		Global_2097536.f_2780.f_29[3] = 5;
		Global_2097536.f_2779 = 0;
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Global_2097536.f_2708)
		{
			if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2770), iVar2);
			}
			iVar2++;
		}
		Global_2097536.f_2826 = func_241(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
		return;
	}
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x4DE98A9A01197527(unk_0x259BE71D8A81D4FA(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_240(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_3548 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_239(Global_4718592.f_185586) || func_236(Global_4718592.f_185586))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_235(Global_4718592.f_185586))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2768), 1);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_234(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_2097536.f_2826 = func_241(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

struct<6> func_234(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_235(int iParam0)
{
	return iParam0 == 74;
}

var func_236(int iParam0)
{
	return (func_238(iParam0) || func_237(iParam0));
}

bool func_237(int iParam0)
{
	return iParam0 == 44;
}

bool func_238(int iParam0)
{
	return iParam0 == 45;
}

bool func_239(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_240(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_241(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_199(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

int func_242()
{
	if ((((((((((((((Global_4718592.f_117195 == 1 || Global_4718592.f_117195 == 3) || Global_4718592.f_117195 == 5) || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 19) || Global_4718592.f_117195 == 8) || Global_4718592.f_117195 == 9) || Global_4718592.f_117195 == 11) || Global_4718592.f_117195 == 13) || Global_4718592.f_117195 == 21) || Global_4718592.f_117195 == 23) || Global_4718592.f_117195 == 25) || Global_4718592.f_117195 == 26) || Global_4718592.f_117195 == 31) || Global_4718592.f_117195 == 32)
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, int iParam1)
{
	if (!func_428(&(uParam0->f_2)))
	{
		func_443(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x875A214D5EBCA509(2, 201) || uParam0->f_8)
		{
			if (!func_428(&(uParam0->f_5)))
			{
				func_443(&(uParam0->f_5));
				func_244(uParam0, 1051260355);
			}
		}
		if (func_428(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0,33f)
			{
				func_429(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_428(&(uParam0->f_5)))
		{
			func_443(&(uParam0->f_5));
			func_244(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0,33f)
		{
			func_429(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_244(var uParam0, float fParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x330108B080A2132F(uParam0->f_9);
	unk_0x74BF156C860580D4(fParam1);
	unk_0xE6B753D52F4CA222();
}

void func_245(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x4FAFF4BCB7633475((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_246(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x4FAFF4BCB7633475((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_247()
{
	int iVar0;
	
	if (!bLocal_154)
	{
		iVar0 = (unk_0xC5935DFB3F39785A(0, 65535) % 3);
	}
	else
	{
		iLocal_168++;
		iVar0 = (iLocal_168 % 2);
	}
	return iVar0;
}

void func_248(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_249(iParam4);
	if (iParam4 != 5)
	{
		unk_0x88F483FBD433696A(*uParam0, "RESET_MOVIE");
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(*uParam0, sVar0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xCFAD3D478C87321A();
	func_12(sParam2);
	unk_0xE6B753D52F4CA222();
	func_443(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x76CD105BCAC6EB9F())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_250(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "CLEAR_SCORES");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

int func_251(var uParam0)
{
	uParam0->f_2 = { 0f, -2,3685f, -0,2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x51C8BEA2005931AB(uParam0);
	}
	return 1;
}

void func_252(int iParam0)
{
	unk_0xB56F35D8A770F80F(uLocal_75, uLocal_73, 1500, 1, 1);
	unk_0x4CBC5D1BC117616B(uLocal_76, 1);
	unk_0xB56F35D8A770F80F(uLocal_75, uLocal_76, 8000, 1, 1);
	unk_0x03F10D56CCA2C055(uLocal_78, iParam0, -0,0301f, 1,498f, 0,7435f, 1);
	unk_0xD6B4D02A102485DC(uLocal_78, iParam0, 0,0557f, -1,4905f, 0,4958f, 1);
	unk_0x58BDA5D9262F5D30(uLocal_78, 35f);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x323C4A67159DAD02(uLocal_73))
	{
		bVar0 = false;
		func_334(uParam0);
		if (!bLocal_146)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x428C32CC68809A35(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_105)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!BitTest(Global_113930, 3))
						{
							func_426("DARTS_INSTR_W", -1);
							unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 3);
						}
						func_338(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!BitTest(Global_113930, 4))
						{
							func_426("DARTS_INSTR_B", -1);
							unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 4);
						}
						func_338(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x428C32CC68809A35(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x323C4A67159DAD02(uLocal_82) && uParam0->f_3 == 2)
			{
				func_333(uParam3);
			}
		}
		else
		{
			func_331(uParam3, iLocal_28);
		}
		func_330(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_327(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_319(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_312(uParam0->f_422[iLocal_28], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x6D05C5731A838CB3(2, 228) && iLocal_28 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_28 == 0)
			{
				func_311(iLocal_29, 0);
				if (((((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B")) && !func_310("DARTS_AIM_HLP")) && !func_310("DARTS_STD_HLP")) && !func_310("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_426("DARTS_LEVEL", -1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_18973.f_6), iLocal_166);
						func_338(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_28] % 2) == 0 && uParam0->f_422[iLocal_28] < 41) && iLocal_29 == 0) && !iLocal_144)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_338(&(uParam3->f_666), 6, 1);
					}
					iLocal_144 = 1;
				}
				else if (uParam0->f_422[iLocal_28] == 50 && !iLocal_144)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_338(&(uParam3->f_666), 6, 1);
					}
					iLocal_144 = 1;
				}
				else if (func_300(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x406CBCEA35499884();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_141)
				{
					if (!func_428(uParam4))
					{
						func_298(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_297(uLocal_137[(1 - iLocal_28)]);
						func_429(uParam4);
						iLocal_141 = 1;
					}
				}
			}
			else if (iLocal_29 == 0)
			{
				iLocal_164 = 0;
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (system::timera() > unk_0xC5935DFB3F39785A(1250, 2500))
			{
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_280(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_279(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_262(uParam0, uParam3);
			break;
		
		case 5:
			func_255(uParam0, uParam2, uParam3);
			if (func_428(uParam4))
			{
				func_429(uParam4);
			}
			break;
		
		case 6:
			func_254(uParam0, uParam3);
			break;
	}
}

void func_254(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_164++;
	iLocal_28 = 1;
	iLocal_29 = 0;
	iLocal_148 = 1;
	while (iLocal_29 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25)
			{
				iLocal_29++;
			}
			else
			{
				func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
				func_262(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24)
		{
			if (bLocal_147)
			{
				if (unk_0xFC8BFE4B41177C22(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
				{
					unk_0x51C8BEA2005931AB(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				Var0 = { unk_0xF10F2A2453AF1DFB(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_32), uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
				if (unk_0xFC8BFE4B41177C22(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
				{
					unk_0xB2BD5837A8D3CEDA(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
			func_262(uParam0, uParam1);
			if (bLocal_147)
			{
				if (iLocal_149)
				{
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/] = unk_0x4E55EAB577C13329(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_1, Local_38, 1, 1, 0);
					Var0 = { unk_0xF10F2A2453AF1DFB(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_32), uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
					unk_0xB2BD5837A8D3CEDA(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], Var0, 1, 0, 0, 1);
					fVar1 = unk_0xD2AA6F822D3A55D2(0f, 90f);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0xCF39804E8C88080E(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_296(&(uParam0->f_422), &(uParam0->f_249));
			func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_28] == 0)
			{
				if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_28]++;
				}
				func_338(&(uParam1->f_666), 2, 0);
				func_338(&(uParam1->f_666), 3, 0);
				func_338(&(uParam1->f_666), 4, 0);
				func_338(&(uParam1->f_666), 5, 1);
				system::settimerb(0);
			}
			func_262(uParam0, uParam1);
			if (bLocal_147)
			{
				if (iLocal_149)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_29 + 1)
					{
						if (!uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/] = unk_0x4E55EAB577C13329(uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_1, Local_38, 1, 1, 0);
							Var0 = { unk_0xF10F2A2453AF1DFB(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_32), uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0xFC8BFE4B41177C22(uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/]))
							{
								unk_0xB2BD5837A8D3CEDA(uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar3 = unk_0xD2AA6F822D3A55D2(0f, 90f);
							uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0xCF39804E8C88080E(uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_28 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_164 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_255(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_261();
			}
			if (iLocal_28 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_259("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_260("DARTS_SWITCH_C", uParam0->f_422[iLocal_28], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_260("DARTS_OPP_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_259("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_260("DARTS_SWITCH_B", uParam0->f_422[iLocal_28], 5000, 0);
			}
			system::settimerb(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x875A214D5EBCA509(2, 190))
			{
				iLocal_162++;
				if (iLocal_162 >= uParam0->f_436)
				{
					iLocal_162 = 0;
				}
				Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_53(Var0);
			}
			if (unk_0x875A214D5EBCA509(2, 189))
			{
				iLocal_162 = (iLocal_162 - 1);
				if (iLocal_162 < 0)
				{
					iLocal_162 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_53(Var0);
			}
			if (unk_0x875A214D5EBCA509(2, 202))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_55(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x875A214D5EBCA509(2, 201))
			{
				iLocal_138 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x875A214D5EBCA509(2, 201) || (iLocal_148 && bLocal_147))
			{
				iLocal_138 = 1;
			}
			if ((unk_0x875A214D5EBCA509(2, 189) || unk_0x875A214D5EBCA509(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_5[iLocal_28 /*79*/][iLocal_162 /*26*/], 1) };
				func_55(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_143)
				{
					if (func_258(iLocal_28 == 0, &(uLocal_137[1]), (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_143 = 1;
					}
				}
				else if ((unk_0x1DD05E817C89C737() % 500) < 50)
				{
				}
			}
			else if (!iLocal_143)
			{
				if (func_257(iLocal_28 == 0, &(uLocal_137[1]), (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_143 = 1;
				}
			}
			else if ((unk_0x1DD05E817C89C737() % 500) < 50)
			{
			}
			if (iLocal_138 || system::timerb() > 2000)
			{
				iLocal_148 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_251(&(uParam0->f_5[iLocal_28 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_28] != uParam0->f_422[iLocal_28])
				{
					func_256(uParam1, iLocal_28, uParam0->f_422[iLocal_28]);
					unk_0xF37CDE164C892195(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_28] = uParam0->f_422[iLocal_28];
				iLocal_29 = 0;
				uParam0->f_428 = 0;
				if (iLocal_28 == 0)
				{
					iLocal_28 = 1;
				}
				else
				{
					iLocal_28 = 0;
				}
				func_442(uParam1, iLocal_28);
				iLocal_52 = 0;
				func_421();
				if (!bLocal_147)
				{
					unk_0xFFD79EDD25B8EC72();
				}
				iLocal_46 = 0;
				uParam2->f_670 = 3;
				iLocal_144 = 0;
				iLocal_141 = 0;
				iLocal_143 = 0;
				iLocal_138 = 0;
				iLocal_162 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	unk_0x88F483FBD433696A(*uParam0, "ADD_DARTS_SCORE");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0xE6B753D52F4CA222();
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 3);
		}
	}
	iVar1 = unk_0xC5935DFB3F39785A(0, 100);
	iVar2 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar2 < 85)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_258(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 3);
		}
	}
	iVar1 = unk_0xC5935DFB3F39785A(0, 100);
	iVar2 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar2 < 75)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0xFC8BFE4B41177C22(func_506()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x4A8C381C258A124D(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_259(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_260(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

void func_261()
{
	unk_0x4CBC5D1BC117616B(uLocal_82, 1);
	unk_0x4CBC5D1BC117616B(uLocal_73, 0);
}

void func_262(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_28] = (uParam0->f_422[iLocal_28] - uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_274(uParam0);
		func_338(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_28]++;
		if (iLocal_28 == 0)
		{
			func_272(4);
			iLocal_104[10]++;
		}
		if ((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_28] == 0)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28]++;
				if (iLocal_28 == 0)
				{
					func_272(0);
					iLocal_104[1]++;
				}
			}
			func_338(&(uParam1->f_666), 2, 0);
			func_338(&(uParam1->f_666), 3, 0);
			func_338(&(uParam1->f_666), 4, 0);
			func_338(&(uParam1->f_666), 5, 1);
			func_274(uParam0);
			func_338(&(uParam1->f_666), 5, 0);
			system::settimerb(0);
		}
		else if ((uParam0->f_422[iLocal_28] == 1 || uParam0->f_422[iLocal_28] < 0) || (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
			{
				func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				func_338(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_28] == 1)
			{
				func_338(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_28 == 1)
			{
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_143)
			{
				if (func_271(uLocal_137[(1 - iLocal_28)]))
				{
					iLocal_143 = 1;
				}
			}
			uParam0->f_422[iLocal_28] = uParam0->f_425[iLocal_28];
			if (uParam0->f_1 == 6)
			{
			}
			system::settimera(0);
			uParam0->f_1 = 5;
			if (iLocal_28 == 0)
			{
				uParam0->f_435++;
			}
			func_338(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28]++;
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 1);
					func_272(0);
					iLocal_104[1]++;
				}
				if (!iLocal_143 && !iLocal_148)
				{
					if (func_269(uLocal_137[iLocal_28]))
					{
						iLocal_143 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 0)
			{
				if (!iLocal_143 && !iLocal_148)
				{
					func_268(uLocal_137[(1 - iLocal_28)]);
					iLocal_143 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_143 && !iLocal_148)
				{
					if (func_267(uLocal_137[1], iLocal_28 == 0))
					{
						iLocal_143 = 1;
					}
				}
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 0);
					func_272(1);
					iLocal_104[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_143 && !iLocal_148)
				{
					if (func_265(uLocal_137[iLocal_28], iLocal_28 == 0))
					{
						iLocal_143 = 1;
					}
				}
			}
			if (iLocal_28 == 0)
			{
				if (iLocal_29 < 2)
				{
					if (uParam0->f_422[iLocal_28] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_338(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_338(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_28] < 41 && uParam0->f_422[iLocal_28] > 0) && (uParam0->f_422[iLocal_28] % 2) == 0) || uParam0->f_422[iLocal_28] == 50)
					{
						if (uParam0->f_422[iLocal_28] == 50)
						{
						}
						if (!iLocal_142)
						{
							func_264(uLocal_137[1]);
							iLocal_142 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_338(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_28 == 0 && iLocal_29 < 2)
			{
				func_263("DARTS_REMAIN", (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[iLocal_28], 7500, 0);
			}
			else if (iLocal_28 == 1 && iLocal_29 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_330(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25 = 1;
			iLocal_29++;
			system::settimera(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_29 == 3)
			{
				iLocal_29 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_28 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_338(&(uParam1->f_666), 3, 0);
			func_338(&(uParam1->f_666), 2, 0);
			func_338(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x0A3136AD174470CC(iParam3, 1);
}

void func_264(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_265(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xFC8BFE4B41177C22(func_506()))
		{
			if (bParam1)
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_506(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_266())
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_266()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xFC8BFE4B41177C22(func_506()))
		{
			if (bParam1)
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_506(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_266())
			{
				func_4(unk_0x4A8C381C258A124D(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			iVar1 = 1;
		}
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_271(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x4A8C381C258A124D())
	{
		iVar0 = 1;
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_113969.f_18973++;
			func_273("DARTS_STAT_NUM_BULLSEYES", Global_113969.f_18973);
			break;
		
		case 1:
			Global_113969.f_18973.f_1++;
			func_273("DARTS_STAT_NUM_180S", Global_113969.f_18973.f_1);
			break;
		
		case 2:
			Global_113969.f_18973.f_2++;
			func_273("DARTS_STAT_NUM_WINS", Global_113969.f_18973.f_2);
			break;
		
		case 3:
			Global_113969.f_18973.f_3++;
			func_273("DARTS_STAT_NUM_LOSS", Global_113969.f_18973.f_3);
			break;
		
		case 4:
			Global_113969.f_18973.f_4++;
			func_273("DARTS_STAT_DARTS_THROWN", Global_113969.f_18973.f_4);
			break;
		
		case 5:
			Global_113969.f_18973.f_5++;
			func_273("DARTS_STAT_NUM_GAMES", Global_113969.f_18973.f_5);
			break;
		
		case 7:
			Global_113969.f_18973.f_7 = (system::to_float(Global_113969.f_18973.f_2) / system::to_float(Global_113969.f_18973.f_5));
			break;
		
		case 8:
			Global_113969.f_18973.f_8 = (system::to_float(Global_113969.f_18973.f_4) / system::to_float(Global_113969.f_18973.f_5));
			break;
	}
}

void func_273(char* sParam0, var uParam1)
{
}

void func_274(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_272(5);
	unk_0xFFD79EDD25B8EC72();
	unk_0x428C32CC68809A35(1);
	if (unk_0xBC2EE32DE886BD08(func_422(2)))
	{
		unk_0xB43467C43086A6A1(func_422(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_261();
	}
	if (iLocal_28 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_152 = 1;
		uParam0->f_446[iLocal_28]++;
		uParam0->f_437[iLocal_28]++;
		func_272(2);
		iLocal_104[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_28]++;
		uParam0->f_437[iLocal_28]++;
		func_272(3);
		iLocal_104[9]++;
	}
	func_272(7);
	func_443(&(uParam0->f_254));
	if (func_276(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_28]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_275(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_104[3]++;
			iLocal_170 = 0;
		}
		else
		{
			iLocal_104[5]++;
			iLocal_170 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xCAC4020CCF361AC8(func_422(3));
	iLocal_149 = 1;
	uParam0->f_428 = 0;
	iLocal_52 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_275(bool bParam0)
{
	char* sVar0;
	
	unk_0x8E1F26D6742EC167(0);
	switch (func_92())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xFAE22BD3C12AEFB4(sVar0);
}

int func_276(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_117(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_104[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0,0041f);
	Var3.f_2 = (Var3.f_2 + 0,0002f);
	fVar1 = unk_0x20A3B1C2EC4167BB(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_278(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0xF37CDE164C892195(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0,009f)
	{
		unk_0xF37CDE164C892195(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0,021f)
	{
		unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0,3f)
	{
		unk_0xF37CDE164C892195(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0,226f)
	{
		unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0,1285f && fVar0 < 0,1405f)
		{
			uParam0->f_21 = 3;
			unk_0xF37CDE164C892195(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0,2132f && fVar0 < 0,226f)
		{
			uParam0->f_21 = 2;
			unk_0xF37CDE164C892195(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8,1f) && fVar1 >= (fVar2 - 9,9f)) || (fVar1 >= (fVar2 + 8,1f) && fVar1 <= (fVar2 + 9,9f)))
				{
					unk_0xF37CDE164C892195(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_31[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_278(struct<3> Param0)
{
	return system::sqrt(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_279(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_29)
	{
		if (((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 > (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8 - 0,008f) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 < (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8 + 0,008f)) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8.f_2 - 0,008f)) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8.f_2 + 0,008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_280(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_28 == 0 && iParam2 == 1)
	{
		func_281("Darts", "Dart_Reticules", &Local_37, 1, 0, 4, 0);
	}
	fVar2 = unk_0x0B852B0BF94A8DC1();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8,5f, 8,5f, 8,5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0,04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_32), uParam0->f_11.f_2) };
		unk_0xB2BD5837A8D3CEDA(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_32), uParam0->f_2.f_2) };
	unk_0xB2BD5837A8D3CEDA(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0xCF39804E8C88080E(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_281(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_292(&Var0);
			break;
		
		case 1:
			func_291(&Var0);
			break;
		
		case 5:
			func_290(&Var0);
			break;
		
		case 6:
			func_289(&Var0);
			break;
		
		case 7:
			func_288(&Var0);
			break;
		
		case 8:
			func_287(&Var0);
			break;
		
		case 9:
			func_286(&Var0);
			break;
	}
	if (func_284())
	{
		unk_0xA4F67CEB594AE064(iParam5);
		if (iParam3 == 1)
		{
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_283(Var0.f_0), func_282(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		else
		{
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_283(Var0.f_0), func_282(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		unk_0xA4F67CEB594AE064(4);
	}
}

var func_282(var uParam0)
{
	return uParam0;
}

var func_283(var uParam0)
{
	return uParam0;
}

int func_284()
{
	if (func_285())
	{
		return 1;
	}
	if (unk_0x15CCE8886267624F())
	{
		return 0;
	}
	if (unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69())
	{
		return 0;
	}
	if (unk_0x114ABA9988FF784B())
	{
		return 0;
	}
	return 1;
}

bool func_285()
{
	return Global_1574604;
}

void func_286(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_287(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_288(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_289(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_290(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_291(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_292(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_293(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0xD2AA6F822D3A55D2(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0,14f;
		fVar4 = unk_0xD2AA6F822D3A55D2(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0,1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0,218f;
		}
		else
		{
			fVar3 = 0,18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_31[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0xC5935DFB3F39785A(0, 100);
		iVar6 = unk_0xC5935DFB3F39785A(func_295(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xD2AA6F822D3A55D2(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xD2AA6F822D3A55D2(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0xC5935DFB3F39785A(0, 100);
		iVar6 = unk_0xC5935DFB3F39785A(func_295(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-0,25f, 0,25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-0,07f, 0,07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-0,15f, 0,15f);
		}
		else
		{
			fVar0 = unk_0xD2AA6F822D3A55D2(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xD2AA6F822D3A55D2(-1f, -0,3f);
			}
			else
			{
				fVar0 = unk_0xD2AA6F822D3A55D2(0,3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (system::sin(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0,23f;
	uParam0->f_8.f_2 = (system::cos(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0,0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0,0002f);
	if (*uParam2 == 6)
	{
		func_294(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_294(uParam0);
		*uParam0 = unk_0x4E55EAB577C13329(uParam0->f_1, Local_38, 0, 0, 0);
		fVar1 = unk_0xD2AA6F822D3A55D2(0f, 90f);
		Var7 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, Local_39) };
		Var8 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_32), uParam0->f_8.f_2) };
		fVar2 = unk_0x97BC40FFA2FFCCD2((Var7.f_0 - Var8.f_0), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0xCF39804E8C88080E(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_39 };
		*uParam2 = 3;
		unk_0xBD618A73193F9982(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_294(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0,08f;
	uParam0->f_8.f_1 = -0,213f;
	Var0 = { Local_39 - uParam0->f_8 };
	fVar1 = system::vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0x97BC40FFA2FFCCD2(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0xD1AA84345B760931(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_39 - uParam0->f_11 };
	fVar1 = system::vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

int func_295(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_296(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_28] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_28] > 60)
	{
		if (((*uParam0)[iLocal_28] % 2) == 1)
		{
			if (func_266())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_28] < 61)
	{
		if ((*uParam0)[iLocal_28] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_28] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_28] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_28] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_28] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_28] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_28] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_28] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_28] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_297(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	func_299(uParam0, 0f);
}

void func_299(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(BitTest(*uParam0, 4)) + fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_300(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_50)
			{
				if (system::timerb() > 50)
				{
					iLocal_51 = 0;
					iLocal_52 = 0;
					iLocal_54 = 0;
					if (func_309(uParam0, uParam1, 0))
					{
						unk_0xBD618A73193F9982(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_50 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x875A214D5EBCA509(2, 223) && iLocal_54) && !bParam4)
				{
					iLocal_51 = 1;
					iLocal_52 = 1;
					if (!iLocal_53)
					{
						func_308(uParam0, *uParam2);
						iLocal_53 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_307();
						}
						func_306(uParam0, iParam6);
						func_305(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xD2AA6F822D3A55D2(0,02f, 0,1f);
						iVar1 = unk_0xC5935DFB3F39785A(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0,33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0,33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0xD2AA6F822D3A55D2(0,02f, 0,1f);
						iVar1 = unk_0xC5935DFB3F39785A(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0,29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0,29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_39 };
						iLocal_51 = 1;
						iLocal_52 = 1;
					}
					if (iLocal_51 && iLocal_52)
					{
						if (!iLocal_50)
						{
							unk_0x406CBCEA35499884();
							iLocal_50 = 1;
							system::settimerb(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_50)
			{
				func_281("Darts", "Dart_Reticules", &Local_36, 1, 0, 4, 0);
				if (system::timerb() > 25)
				{
					if (func_309(uParam0, uParam1, 1))
					{
						unk_0xBD618A73193F9982(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_50 = 0;
						return 1;
					}
				}
			}
			else if (!func_301(uParam0))
			{
				if (!iLocal_53)
				{
					func_308(uParam0, *uParam2);
				}
				else
				{
					func_307();
					func_306(uParam0, iParam6);
					func_305(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_50)
			{
				iLocal_50 = 1;
				system::settimerb(0);
			}
			break;
	}
	return 0;
}

int func_301(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0xB504E1B50AA21FC5(2, 220);
	fVar2 = unk_0xB504E1B50AA21FC5(2, 221);
	iLocal_89 = system::round(fVar2);
	switch (iLocal_88)
	{
		case 0:
			if (iLocal_89 > 120)
			{
				iLocal_90 = unk_0x1DD05E817C89C737();
				iLocal_88 = 1;
			}
			if (iLocal_89 < -100)
			{
				iLocal_94 = system::round(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_89 > 120)
			{
				iLocal_90 = unk_0x1DD05E817C89C737();
			}
			else if ((iLocal_89 < 120 && iLocal_89 > -120) && (unk_0x1DD05E817C89C737() - iLocal_90) > 500)
			{
				iLocal_88 = 0;
			}
			else if (iLocal_89 < -100)
			{
				iLocal_91 = unk_0x1DD05E817C89C737();
				if ((iLocal_91 - iLocal_90) < 500)
				{
					iLocal_94 = system::round(fVar1);
					iLocal_92 = (iLocal_91 - iLocal_90);
					iLocal_88 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_92 > iLocal_93)
			{
				if (iLocal_92 > 100 && iLocal_92 < 150)
				{
					fLocal_97 = 0,066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_97);
				}
				else
				{
					fLocal_96 = (system::to_float(iLocal_93) / system::to_float(iLocal_92));
					fLocal_97 = ((1f - fLocal_96) * fLocal_100);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_97);
				}
			}
			else
			{
				fLocal_97 = 0f;
			}
			if (iLocal_94 > 7)
			{
				fLocal_98 = (system::to_float(iLocal_94) / fLocal_103);
				fLocal_99 = (fLocal_101 * fLocal_98);
				uParam0->f_8 = (uParam0->f_8 + fLocal_99);
			}
			else if (iLocal_94 < -7)
			{
				fLocal_98 = (system::to_float(iLocal_94) / fLocal_102);
				fLocal_99 = (fLocal_101 * fLocal_98);
				uParam0->f_8 = (uParam0->f_8 - fLocal_99);
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (fLocal_97 < 0,066477f && fLocal_99 == 0f)
			{
				func_304();
			}
			else if (fLocal_97 <= 0,066477f && fLocal_99 < 0,06f)
			{
				func_303();
			}
			else
			{
				func_302();
			}
			iVar0 = 1;
			iLocal_88 = 0;
			break;
	}
	return iVar0;
}

void func_302()
{
	Local_37.f_4 = 210;
	Local_37.f_5 = 23;
	Local_37.f_6 = 19;
}

void func_303()
{
	Local_37.f_4 = 183;
	Local_37.f_5 = 137;
	Local_37.f_6 = 0;
}

void func_304()
{
	Local_37.f_4 = 16;
	Local_37.f_5 = 184;
	Local_37.f_6 = 10;
}

void func_305(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_32), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_32), uParam0->f_14.f_2) };
	}
	unk_0x2F8A75C70AF54208(Var0, &Local_36, &(Local_36.f_1));
	if ((unk_0x1DD05E817C89C737() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_47)
		{
			func_281("Darts", "Dart_Reticules_Zoomed", &Local_36, 1, 0, 4, 0);
		}
		else
		{
			func_281("Darts", "Dart_Reticules", &Local_36, 1, 0, 4, 0);
		}
		if (!iLocal_54)
		{
			iLocal_54 = 1;
		}
	}
}

void func_306(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0,033367f;
	bVar7 = false;
	fVar3 = unk_0x4AAE7492E7D81A57(2, 218);
	fVar4 = unk_0x4AAE7492E7D81A57(2, 219);
	fVar5 = unk_0xB504E1B50AA21FC5(2, 220);
	fVar6 = unk_0xB504E1B50AA21FC5(2, 221);
	if (unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x1D5CD3EAAA7422B0(fVar5) > unk_0x1D5CD3EAAA7422B0(fVar3) || unk_0x1D5CD3EAAA7422B0(fVar6) > unk_0x1D5CD3EAAA7422B0(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xDD087A873D2E08F0())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x660D0B8C8AE85314())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x6D05C5731A838CB3(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0,06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0,06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0,03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0,03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0,33f, 0,33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0,29f, 0,29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_45 * fVar0)) < 0,33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_45 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_45 * fVar0)) > -0,33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_45 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_45 * fVar0)) > -0,29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_45 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_45 * fVar0)) < 0,29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_45 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0xD2AA6F822D3A55D2((0f - fLocal_42), (0f + fLocal_42));
		fVar1 = unk_0xD2AA6F822D3A55D2((0f - fLocal_41), (0f + fLocal_41));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xD2AA6F822D3A55D2((0f - fLocal_42), (0f + fLocal_42));
		fVar1 = unk_0xD2AA6F822D3A55D2((0f - fLocal_41), (0f + fLocal_41));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0,29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0,29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_45 = 0,5f;
		if (iLocal_88 == 1)
		{
			fVar8 = 0,06f;
			fVar9 = 0,08f;
		}
		else
		{
			fVar8 = 0,02f;
			fVar9 = 0,03f;
		}
		fVar2 = unk_0xD2AA6F822D3A55D2((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xD2AA6F822D3A55D2((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xD2AA6F822D3A55D2((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xD2AA6F822D3A55D2((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_307()
{
	if (unk_0x6D05C5731A838CB3(2, 227))
	{
		fLocal_45 = 0,3f;
	}
	else
	{
		fLocal_45 = 0,1f;
	}
	if (unk_0x6D05C5731A838CB3(2, 229))
	{
		if (bLocal_47)
		{
			if (system::timera() > iLocal_95)
			{
				fLocal_41 = fLocal_43;
				fLocal_42 = fLocal_44;
				fLocal_45 = 0,1f;
				bLocal_47 = false;
			}
		}
		else if (iLocal_46 < 1)
		{
			fLocal_41 = 0,03f;
			fLocal_42 = 0,05f;
			fLocal_45 = 0,1f;
			system::settimera(0);
			bLocal_47 = true;
			iLocal_46++;
		}
		else if ((((((!func_310("DARTS_FST_HLP") && !func_310("DARTS_AIM_HLP")) && !func_310("DARTS_CLOCK")) && !func_310("DARTS_STD_HLP")) && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B")) && !iLocal_48)
		{
			iLocal_48 = 1;
			if (!BitTest(Global_113930, 1))
			{
				func_426("DARTS_SHT_USE", -1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 1);
			}
		}
	}
	else if (bLocal_47)
	{
		fLocal_41 = fLocal_43;
		fLocal_42 = fLocal_44;
		fLocal_45 = 0,1f;
		bLocal_47 = false;
	}
}

void func_308(var uParam0, struct<4> Param1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0xD2AA6F822D3A55D2(-0,1f, 0,1f));
	Var0.f_2 = (Var0.f_2 + unk_0xD2AA6F822D3A55D2(-0,1f, 0,1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_39 };
}

int func_309(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0xB2BD5837A8D3CEDA(*uParam0, Local_38, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x4E55EAB577C13329(uParam0->f_1, Local_38, 0, 0, 0);
	}
	bLocal_47 = false;
	fLocal_45 = 0,1f;
	fLocal_41 = fLocal_43;
	fLocal_42 = fLocal_44;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_294(uParam0);
	fVar4 = unk_0xD2AA6F822D3A55D2(0f, 90f);
	Var1 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, Local_39) };
	Var2 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0,0035f), (uParam0->f_14.f_1 + fLocal_32), uParam0->f_14.f_2) };
	fVar5 = unk_0x97BC40FFA2FFCCD2((Var1.f_0 - Var2.f_0), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0xCF39804E8C88080E(*uParam0, uParam0->f_17, 0, 1);
	iLocal_51 = 0;
	iLocal_53 = 0;
	if (bParam2)
	{
		func_281("Darts", "Dart_Reticules", &Local_36, 1, 0, 4, 0);
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_32), uParam0->f_8.f_2) };
	unk_0x2F8A75C70AF54208(Var0, &Local_37, &(Local_37.f_1));
	return 1;
}

bool func_310(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_311(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113930, 9))
		{
			if ((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_AIM_HLP", -1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113930, 7))
		{
			if ((!func_310("DARTS_AIM_HLP") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_CLOCK", -1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113930, 8))
		{
			if ((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_STD_HLP", -1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_49 && !func_310("DARTS_SHT_USE")) && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113930, 2))
			{
				func_426("DARTS_FST_HLP", -1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_113930, 2);
			}
			iLocal_49 = 1;
		}
	}
}

int func_312(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_315(iParam0) };
			*uParam3 = { unk_0x0D1381B6E0F3987D(*uParam1, Var0) };
			func_314(*uParam3);
			system::settimerb(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (system::timerb() > 3000 || unk_0x875A214D5EBCA509(2, 201))
			{
				func_313();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_313()
{
	unk_0xB56F35D8A770F80F(uLocal_73, uLocal_85, 2000, 1, 1);
	unk_0x85E6A1E36B5E2E4D(uLocal_85, 0);
}

void func_314(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5,5606f, -0,0106f, -131,6781f };
	uLocal_85 = unk_0x96A32328480B485C(26379945, Param0, Var0, 65f, 0, 2);
	unk_0xB56F35D8A770F80F(uLocal_85, uLocal_73, 2000, 1, 1);
}

Vector3 func_315(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0,5f, 0f };
	}
	else
	{
		fVar0 = func_318(iParam0);
		Var1.f_1 = -0,5f;
		Var1.f_0 = func_317(fVar0);
		Var1.f_2 = func_316(fVar0);
	}
	return Var1;
}

float func_316(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0,218f;
	fVar1 = (system::cos(fParam0) * fVar0);
	return fVar1;
}

float func_317(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0,218f;
	fVar1 = (system::sin(fParam0) * fVar0);
	return fVar1;
}

var func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_31[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_319(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x6D05C5731A838CB3(2, 228))
			{
				func_326(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x6D05C5731A838CB3(2, 228))
			{
				if (!unk_0x323C4A67159DAD02(uLocal_82))
				{
					func_324();
					func_323(&uLocal_175, Local_206, Local_207, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x6D05C5731A838CB3(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_320(&uLocal_175, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_326(0);
			func_507();
			if (unk_0x78411E34CF90EA8C(uLocal_175))
			{
				if (unk_0xBC886554B5888A64(uLocal_175))
				{
					unk_0x4CBC5D1BC117616B(uLocal_175, 0);
				}
				unk_0x85E6A1E36B5E2E4D(uLocal_175, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_320(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
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
	func_322(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x660D0B8C8AE85314())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		fVar1 = unk_0x4AAE7492E7D81A57(2, 239);
		fVar2 = unk_0x4AAE7492E7D81A57(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
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
		iVar0[2] = func_321((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_321((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x1DD05E817C89C737())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xAE231F549813BBDF(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(system::to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(system::to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * system::timestep());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xAE231F549813BBDF(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.f_0;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var6.f_0 - uParam0->f_14) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var6.f_1 - uParam0->f_14.f_1) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var6.f_2 - uParam0->f_14.f_2) * 0,05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, system::to_float(-uParam0->f_21), system::to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, system::to_float(-uParam0->f_22), system::to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, system::to_float(-uParam0->f_20), system::to_float(uParam0->f_20));
	}
	if (unk_0xAE231F549813BBDF(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
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
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xDEE3EFEA31A1F555(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (system::to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0,06f) * fVar5));
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			if (unk_0x8DE2438443E6A145(*uParam0))
			{
				unk_0x9D0B099EEAD74270();
			}
		}
	}
}

int func_321(int iParam0, int iParam1, int iParam2)
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

void func_322(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_323(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
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
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
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

void func_324()
{
	if (iLocal_135)
	{
		return;
	}
	func_325();
	unk_0x005E8B7CFA7D52A6("Darts Zoom");
	iLocal_135 = 1;
}

void func_325()
{
	if (iLocal_134 || iLocal_135)
	{
		unk_0x4E6A84BCEF2DCCBF();
		iLocal_134 = 0;
		iLocal_135 = 0;
	}
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB56F35D8A770F80F(uLocal_82, uLocal_73, 1000, 1, 1);
	}
	else
	{
		unk_0xB56F35D8A770F80F(uLocal_73, uLocal_82, 1000, 1, 1);
	}
}

void func_327(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_248(&(uParam0->f_62), func_329(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_243(&(uParam0->f_62), 0))
			{
				func_328(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_328(var uParam0)
{
	uParam0->f_8 = 0;
	func_429(&(uParam0->f_2));
	func_429(&(uParam0->f_5));
}

char* func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_330(var uParam0)
{
	if (!iLocal_52)
	{
		if (!unk_0x6D05C5731A838CB3(2, 201))
		{
			iLocal_52 = 1;
		}
	}
	if ((iLocal_28 == 1 && iLocal_29 < 3) && *uParam0 != 5)
	{
		if ((unk_0x6D05C5731A838CB3(2, 201) || unk_0x875A214D5EBCA509(2, 223)) && iLocal_52)
		{
			*uParam0 = 6;
		}
	}
}

void func_331(var uParam0, int iParam1)
{
	if (!unk_0x4D9174D8796EA622())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_46 > 0)
			{
				func_122(&(uParam0->f_509), 0, 0, 0, 1);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), 1);
				func_338(&(uParam0->f_666), 8, 0);
				func_338(&(uParam0->f_666), 16, 0);
				func_338(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_46 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_122(&(uParam0->f_509), 0, 0, 0, 1);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), 1);
				func_338(&(uParam0->f_666), 8, 0);
				func_338(&(uParam0->f_666), 16, 0);
				func_338(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_122(&(uParam0->f_509), 1, 0, 0, 1);
			func_121(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 16, 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 17, 0);
			func_338(&(uParam0->f_666), 23, 0);
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		unk_0x90B531766063C5CD();
		func_206(func_117(func_3(&(uParam0->f_666), 16), 1, 2));
		func_124(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, 0);
		func_338(&(uParam0->f_666), 16, 0);
		func_338(&(uParam0->f_666), 23, 0);
	}
}

int func_332(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_333(var uParam0)
{
	if (!unk_0x4D9174D8796EA622())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_122(&(uParam0->f_509), 0, 0, 0, 1);
			func_332(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_121(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 23, 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 16, 0);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 17, 0);
		}
		func_124(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, 0);
		func_338(&(uParam0->f_666), 16, 0);
		func_338(&(uParam0->f_666), 23, 0);
		func_338(&(uParam0->f_666), 17, 0);
	}
}

void func_334(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_52)
	{
		if (!unk_0x6D05C5731A838CB3(2, 201) && !unk_0x6D05C5731A838CB3(2, 202))
		{
			iLocal_52 = 1;
		}
		else
		{
			iLocal_52 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_52 && iLocal_51 == 0)
			{
				iLocal_52 = 0;
				bVar0 = false;
				bLocal_146 = false;
				unk_0x428C32CC68809A35(1);
			}
		}
		if (unk_0x2645430E708CBFAC(2, 235) || unk_0x61C3701AD6D746B2(2, 235))
		{
			if (!bLocal_146)
			{
				*uParam0 = 14;
				bLocal_146 = true;
				unk_0x428C32CC68809A35(1);
			}
		}
		else if (func_310("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_146 = false;
		}
	}
}

void func_335(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_336(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0,107f;
	}
	if (iParam0 < 25)
	{
		return 0,096f;
	}
	if (iParam0 < 50)
	{
		return 0,085f;
	}
	if (iParam0 < 70)
	{
		return 0,075f;
	}
	return 0,064f;
}

float func_337(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0,08f;
	}
	if (iParam0 < 25)
	{
		return 0,072f;
	}
	if (iParam0 < 50)
	{
		return 0,064f;
	}
	if (iParam0 < 70)
	{
		return 0,056f;
	}
	return 0,048f;
}

void func_338(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, iParam1);
	}
}

int func_339(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113969.f_18973.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_340(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_251(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_250(uParam1, iVar0);
		func_256(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_28 = 0;
	iLocal_29 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_162 = 0;
	iParam0->f_436 = 0;
	iLocal_46 = 0;
	iLocal_139 = 1;
	iLocal_140 = 0;
	iLocal_142 = 0;
	iLocal_48 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_148 = 0;
	func_338(&(uParam2->f_666), 6, 0);
	func_346();
	func_344(uParam2);
	if (iParam0->f_457)
	{
		func_341(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_341(bool bParam0)
{
	unk_0x37B894853929BF1A(0);
	if (unk_0xBC886554B5888A64(uLocal_75))
	{
		unk_0x4CBC5D1BC117616B(uLocal_75, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_79))
	{
		unk_0x4CBC5D1BC117616B(uLocal_79, 0);
	}
	if (unk_0x15CCE8886267624F())
	{
		func_343();
		unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
		unk_0x10B228D2FDB7AF16(500);
	}
	func_342(bParam0);
}

void func_342(bool bParam0)
{
	if (bParam0)
	{
		unk_0x4CBC5D1BC117616B(uLocal_73, 1);
	}
}

void func_343()
{
	unk_0x4CBC5D1BC117616B(uLocal_75, 1);
}

void func_344(var uParam0)
{
	func_345();
	uParam0->f_670 = 3;
	func_338(&(uParam0->f_666), 15, 0);
	func_338(&(uParam0->f_666), 16, 0);
	func_338(&(uParam0->f_666), 17, 0);
}

void func_345()
{
	int iVar0;
	
	Local_106.f_66 = -1;
	Local_106.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_106.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_106.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_106.f_9[iVar0 /*7*/].f_5 = 0;
		Local_106.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_106.f_5 = 0;
	Local_106.f_5.f_1 = -1f;
	Local_106.f_5.f_2 = 0;
	Local_106.f_0 = 0;
	Local_106.f_1 = 0;
}

void func_346()
{
	system::settimera(0);
	iLocal_52 = 0;
	unk_0xFFD79EDD25B8EC72();
}

void func_347(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23831.f_9116 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23831.f_6231[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_348(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_348(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_349(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_350(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x88F483FBD433696A(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(iParam3);
	unk_0x330108B080A2132F(iParam4);
	unk_0xE6B753D52F4CA222();
}

int func_351(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x66EFB3D6110055C4(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_409(0, 0, 0, 1);
		func_408(0, -1, 1);
		if (func_407())
		{
			if (Global_4541816 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4541816;
				func_406(uParam0->f_660, 1, 1);
				unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0x6BA487C862DB8DDF(sVar0))
				{
					func_405(sVar0, 0, 0);
				}
			}
			Global_4541817 = unk_0x1DD05E817C89C737() + 300;
		}
		else if (func_404() && unk_0x1DD05E817C89C737() > Global_4541817)
		{
			if (Global_4541816 == uParam0->f_660)
			{
				iVar2 = func_403(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4541817 = unk_0x1DD05E817C89C737() + 300;
		}
		if (func_402(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_406(uParam0->f_660, 1, 1);
			unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x6BA487C862DB8DDF(sVar0))
			{
				func_405(sVar0, 0, 0);
			}
		}
		if (func_401(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_406(uParam0->f_660, 1, 1);
			unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x6BA487C862DB8DDF(sVar0))
			{
				func_405(sVar0, 0, 0);
			}
		}
		if (func_400(&(uParam0->f_633)) || func_399(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_385(uParam0);
		}
		if (func_384(&(uParam0->f_636)) || func_382(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_385(uParam0);
		}
		if ((unk_0x875A214D5EBCA509(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_381(uParam0->f_662 + 1, 1);
			*uParam2 = func_381(uParam0->f_664 + 1, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_354(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0x2645430E708CBFAC(2, 202) || func_353())
		{
			func_352(0, 0);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x2645430E708CBFAC(2, 201))
		{
			func_39(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x2645430E708CBFAC(2, 202))
		{
			func_385(uParam0);
			func_338(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_352(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0,05f;
	Global_23829 = 0,05f;
	Global_23830 = 0,225f;
	fVar2 = unk_0x4AE9635532D92447(0);
	if (bParam0)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else
	{
		Global_23830 = 0,225f;
	}
}

int func_353()
{
	if (unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x875A214D5EBCA509(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_354(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	var uVar58;
	var uVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_378(0, bParam6))
	{
		return;
	}
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23831)
	{
		if (func_19(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
	{
		fVar57 = Global_23829;
	}
	else
	{
		fVar57 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
	}
	fVar60 = 1f;
	func_21(bParam7, &uVar58, &uVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_374(Global_23831.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
			{
				fVar49 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar61, func_26(29), 64);
					StringCopy(&cVar62, func_23(29, 1), 64);
					if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_373(Global_23828, Global_23829, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_373(Global_23828, (Global_23829 + fVar55), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) != 0)
				{
					func_372();
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							unk_0x511D14ED2DA887E1(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							unk_0x7DCF91CE9137DE0E(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x25DD447A6EB3A86F((Global_23828 + 0,00390625f), ((Global_23829 + fVar55) + 0,00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_372();
					func_370((((Global_23828 + fParam5) - 0,00390625f) - func_371("CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_372();
						func_370((((Global_23828 + fParam5) - 0,00390625f) - func_371("CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar54 = 0,034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar54 = Global_23831.f_6348[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar63 + ((fVar49 - fVar63) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_373(Global_23828, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x32D86930C15E1159("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0,5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0,5f / fVar60));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_19(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_369(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_369(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_19(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_23831.f_5325, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_5325), func_23(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
				{
					fVar49 = (fVar49 + (0,00138888f * 6f));
					func_369(fVar40);
					fVar64 = 0,35f;
					if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
					{
						fVar64 = (0,35f * 0,625f);
					}
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
					iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
					unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_373(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
					func_369(fVar40);
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
					unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
					fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				fVar65 = 0,35f;
				if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
				{
					fVar65 = (0,35f * 0,625f);
				}
				func_369(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
				func_369(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_19(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_369(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_369(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_19(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_4541740.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_26(Global_4541740.f_67), func_23(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_362(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x9A122D542F2BB60E(76, 84);
			unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar66 = (Global_23831.f_6335 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0,034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar54 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_23831.f_9108)
					{
						unk_0xA306E6FD2A6558E6(Global_23831.f_9107, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA306E6FD2A6558E6(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0,5f)), (((fVar57 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + (fVar54 * 0,5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0,0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar44 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23828 + Global_23830) - 0,0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x282D5DA1EE14950F(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x43026780D77E3DC0(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_19(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0,00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar42 = (fVar42 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_23831.f_5686[iVar69] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] - Global_23831.f_5671[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_19(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (func_19(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_368(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[(iVar22 + iVar28)]), func_23(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[(iVar22 + iVar28)]), func_23(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
														fVar40 = (fVar40 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											unk_0x25DD447A6EB3A86F(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x25DD447A6EB3A86F((fVar34 + fVar40), fVar35, 0);
											if (func_358() && unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_360(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0,0185f;
													fVar79 = 0,004f;
													fVar80 = 0,02f;
													unk_0xBFE94E91C83D8794(0f, (0,35f * 0,7f));
													unk_0x5A18938160AE52D0(255, 255, 255, 150);
													unk_0x81645EE95A114FAE((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
													unk_0xEAEB6E7D3FAEBD5B(&cVar75);
													unk_0x511D14ED2DA887E1((Global_23831.f_6341 + iVar30));
													unk_0x25DD447A6EB3A86F((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_19(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_19(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_368(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[(iVar22 + iVar14)]), func_23(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[(iVar22 + iVar14)]), func_23(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[(iVar22 + iVar14)]), func_23(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x511D14ED2DA887E1(Global_23831.f_4469[iVar20]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										func_357((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									func_360(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
									func_356((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_19(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar52)
										{
											if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
											if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_19(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(Global_23831.f_4984[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xFFA2B456A81EA1EB(func_26(Global_23831.f_4984[iVar22]), func_23(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), (fVar36 * func_355(Global_23831.f_4984[iVar22])), (fVar37 * func_355(Global_23831.f_4984[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0,034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar49;
	Global_23831.f_6481 = unk_0x1DD05E817C89C737();
	unk_0x043244A32AD6E17D(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_41(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		unk_0x4EB223432F8FA0A0(10);
	}
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(8);
	if (bParam0)
	{
		func_206(1);
	}
	unk_0x90B531766063C5CD();
}

float func_355(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_356(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x7DCF91CE9137DE0E(uParam3, uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

void func_357(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
}

var func_358()
{
	return unk_0x087611B922B50F13(-1762644250);
}

void func_359(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
}

void func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_361(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA306E6FD2A6558E6(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA306E6FD2A6558E6(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
		else
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x5A18938160AE52D0(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	else
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x2873B596E322DCDA(1);
	if (bParam5)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(4);
	}
	else if (bParam6)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(6);
	}
	else
	{
		unk_0x8413CD3BCEEAD8DC(0);
	}
	unk_0xE05EB1EAE7CCDC59(0f, 1f);
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_361(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_362(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_378(bParam4, bParam8))
	{
		return;
	}
	if (func_366())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_363(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23831.f_5625[iVar1], 1), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23831.f_5640[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23831.f_5684 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(true);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_13(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_13(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_12(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							unk_0x557F1E2300EF1A3E(true);
							unk_0x330108B080A2132F(Global_23831.f_5625[iVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(false);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				iVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23831.f_5326);
				func_13(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_12(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				unk_0x330108B080A2132F(1);
			}
			else
			{
				unk_0x330108B080A2132F(0);
			}
			unk_0xE6B753D52F4CA222();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(iVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(iVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23831.f_9116 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23831.f_5658)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_363(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_365(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_364(-1, 0) == 8;
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

int func_364(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_66();
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

int func_365(var uParam0)
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

int func_366()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_367())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_367()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA306E6FD2A6558E6(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			unk_0xA306E6FD2A6558E6(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_369(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0xFB193A91887FFAB1(2);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59(fParam0, ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_370(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

float func_371(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_372();
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x43026780D77E3DC0(1);
}

void func_372()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59((Global_23828 + 0,0046875f), ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_373(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x81645EE95A114FAE((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_374(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!unk_0xD6F9DEE4765092A9(sParam1) && !unk_0x6BA487C862DB8DDF(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_377(Global_23831.f_5821, 1);
	}
	else
	{
		func_377(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_376(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_19(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_375(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_375(char* sParam0)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
	}
	return unk_0x3D634C7F6A6D4CA4(0,35f, 0);
}

float func_376(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(uParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_360(0, 1, 0, 0, 0, 0, 0);
	unk_0x282D5DA1EE14950F(sParam0);
	return unk_0x43026780D77E3DC0(1);
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_378(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_380(8, -1) && func_379() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_379()
{
	return Global_1575011;
}

var func_380(int iParam0, int iParam1)
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

int func_381(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_382(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xAE231F549813BBDF(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_403(0) == 1 && Global_4541816 == iParam1)
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

void func_383(var uParam0)
{
	if (!func_428(uParam0))
	{
		func_443(uParam0);
	}
}

int func_384(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xAE231F549813BBDF(2))
	{
		fVar0 = unk_0xB504E1B50AA21FC5(2, 218);
	}
	if ((fVar0 > 0,8f || unk_0x6D05C5731A838CB3(2, 190)) || unk_0x4465D55576678706(2, 190))
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

void func_385(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_352(0, 0);
	unk_0xA306E6FD2A6558E6(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_398(uVar0, uVar1, uVar2, uVar3, 1);
	func_397(1, 2, 0, 0, 0);
	func_396(1, 2, 1, 1, 1);
	func_395(0, 1, 0, 0, 0);
	func_394("DARTS_TITLE");
	func_392(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_374(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_389(0, func_381(uParam0->f_662 + 1, 1), 0);
	func_374(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_389(1, func_381(uParam0->f_664 + 1, 0), 0);
	func_388(2, 141, 141, 1);
	func_374(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_387(0);
	func_406(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_405(func_116(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_386(201, "ITEM_SELECT", -1, 0);
	func_386(202, "IB_QUIT", -1, 0);
}

void func_386(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_387(int iParam0)
{
	Global_23831.f_6341 = iParam0;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_23831.f_9112 = iParam3;
	Global_23831.f_9109[0] = iParam1;
	Global_23831.f_9109[1] = iParam2;
	Global_23831.f_9113 = iParam0;
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5825 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 2)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 2)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_23831.f_4469[Global_23831.f_5825] = iParam1;
	Global_23831.f_5825++;
	fVar1 = func_391("NUMBER", iParam1);
	if (Global_23831.f_5678[Global_23831.f_5822])
	{
		func_19(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
	{
		Global_23831.f_5671[Global_23831.f_5822] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_390("NUMBER", iParam1);
		if (fVar4 > Global_23831.f_6348[iParam0])
		{
			Global_23831.f_6348[iParam0] = fVar4;
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 2;
}

float func_390(char* sParam0, int iParam1)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x3D634C7F6A6D4CA4(0,35f, 0);
}

float func_391(char* sParam0, int iParam1)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
		return 0f;
	}
	func_360(1, 1, 0, 0, 0, 0, 0);
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x43026780D77E3DC0(1);
}

void func_392(int iParam0, char* sParam1, char* sParam2)
{
	Global_23831 = iParam0;
	func_393(29, sParam1, sParam2);
}

void func_393(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23831.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23831.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_394(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5678[0] = iParam0;
	Global_23831.f_5678[1] = iParam1;
	Global_23831.f_5678[2] = iParam2;
	Global_23831.f_5678[3] = iParam3;
	Global_23831.f_5678[4] = iParam4;
}

void func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23831.f_5829++;
	}
}

void func_398(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_23831.f_9086 = iParam4;
	Global_23831.f_9082 = uParam0;
	Global_23831.f_9083 = uParam1;
	Global_23831.f_9084 = uParam2;
	Global_23831.f_9085 = uParam3;
}

int func_399(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xAE231F549813BBDF(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_403(0) == -1 && Global_4541816 == iParam1)
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

int func_400(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xAE231F549813BBDF(2))
	{
		fVar0 = unk_0xB504E1B50AA21FC5(2, 218);
	}
	if (fVar0 < -0,8f || unk_0x6D05C5731A838CB3(2, 189))
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

int func_401(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xAE231F549813BBDF(2))
	{
		fVar0 = unk_0xB504E1B50AA21FC5(2, 219);
	}
	if (fVar0 > 0,8f || unk_0x6D05C5731A838CB3(2, 187))
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

int func_402(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xAE231F549813BBDF(2))
	{
		fVar0 = unk_0xB504E1B50AA21FC5(2, 219);
	}
	if (fVar0 < -0,8f || unk_0x6D05C5731A838CB3(2, 188))
	{
		if (!func_428(uParam0))
		{
			func_383(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0,25f)
		{
			func_443(uParam0);
			return 1;
		}
	}
	else if (func_428(uParam0))
	{
		func_429(uParam0);
	}
	return 0;
}

int func_403(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0,02f;
	fVar0 = 0,05f;
	fVar2 = (fVar0 + Global_23830);
	fVar1 = (Global_23831.f_6333 - (IntToFloat(Global_23831.f_6335) * 0,034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	unk_0x2BF75F235283775A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x2BF75F235283775A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x90B531766063C5CD();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4541810 >= fVar0 && Global_4541810 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4541810 >= fVar0 && Global_4541810 < fVar4)
	{
		return -1;
	}
	if (Global_4541810 >= fVar4 && Global_4541810 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_404()
{
	if (unk_0xAE231F549813BBDF(2))
	{
		return unk_0x4465D55576678706(2, 237);
	}
	return 0;
}

void func_405(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = unk_0x1DD05E817C89C737();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_406(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

int func_407()
{
	if (unk_0xAE231F549813BBDF(2))
	{
		if (Global_4541816 > -1)
		{
			if (unk_0x875A214D5EBCA509(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xAE231F549813BBDF(2))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xA6DB7FC56DBDFB82();
	}
	if (Global_4541816 == -6)
	{
		unk_0x30EBBB1D4EDC8FE4(4);
		if (iParam0 && unk_0x6D05C5731A838CB3(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541816 = -1;
			return 0;
		}
	}
	if (((Global_4541816 > -1 || Global_4541816 == -3) || Global_4541816 == -2) || unk_0x2135EF5011FECD68())
	{
		unk_0x30EBBB1D4EDC8FE4(1);
		return 0;
	}
	if (Global_4541816 == -1 && iParam0)
	{
		if (unk_0x6D05C5731A838CB3(2, 237))
		{
			unk_0x30EBBB1D4EDC8FE4(4);
			Global_4541816 = -6;
			return 1;
		}
		else
		{
			unk_0x30EBBB1D4EDC8FE4(3);
			return 0;
		}
	}
	unk_0x30EBBB1D4EDC8FE4(1);
	return 0;
}

void func_409(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0,034722f / 2f);
	iVar13 = -1;
	if (!unk_0xAE231F549813BBDF(2))
	{
		Global_4541816 = -1;
		return;
	}
	unk_0x88C44A9692A5A3A0(1);
	fVar0 = Global_23828;
	fVar2 = (fVar0 + Global_23830);
	fVar3 = Global_23831.f_6333;
	fVar1 = (Global_23831.f_6333 - (IntToFloat(Global_23831.f_6335) * 0,034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0,034722f);
		fVar1 = (fVar1 + 0,034722f);
	}
	if (Global_23831.f_6335 < 1)
	{
		fVar1 = (Global_23831.f_6333 - 0,034722f);
	}
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x2BF75F235283775A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x2BF75F235283775A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x90B531766063C5CD();
	func_411();
	if (Global_4541816 == -6)
	{
		return;
	}
	Global_4541816 = -1;
	fVar7 = Global_4541810;
	fVar8 = Global_4541811;
	if (Global_23831.f_6336 > Global_23831.f_6335)
	{
		if (((Global_4541810 >= fVar0 && Global_4541810 <= fVar2) && Global_4541811 >= fVar3) && Global_4541811 < (fVar3 + fVar6))
		{
			Global_4541816 = -2;
			if (bParam3)
			{
				func_410(0);
			}
			return;
		}
		if (((Global_4541810 >= fVar0 && Global_4541810 <= fVar2) && Global_4541811 >= (fVar3 + fVar6)) && Global_4541811 < (fVar3 + 0,034722f))
		{
			Global_4541816 = -3;
			if (bParam3)
			{
				func_410(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = system::floor((fVar9 / 0,034722f));
		if (Global_23831.f_6336 == -1)
		{
			Global_4541816 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23831.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x9A122D542F2BB60E(76, 84);
				unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
				func_373(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_23830, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
				unk_0x90B531766063C5CD();
			}
		}
		Global_4541816 = Global_23831.f_8737[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541816 = -4;
			return;
		}
		if (fVar8 > 0,9f)
		{
			Global_4541816 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0,25f))
	{
		Global_4541816 = -4;
		return;
	}
	Global_4541816 = -1;
}

void func_410(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0,034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23828;
	fVar1 = Global_23831.f_6333;
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	if (Global_4541816 == -2)
	{
		func_373(fVar0, fVar1, Global_23830, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541816 == -3)
	{
		func_373(fVar0, (fVar1 + fVar2), Global_23830, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x90B531766063C5CD();
}

void func_411()
{
	Global_4541812 = Global_4541810;
	Global_4541813 = Global_4541811;
	Global_4541810 = unk_0xF069618D9974EB9D(2, 239);
	Global_4541811 = unk_0xF069618D9974EB9D(2, 240);
	Global_4541814 = (Global_4541810 - Global_4541812);
	Global_4541815 = (Global_4541811 - Global_4541813);
}

float func_412(float fParam0)
{
	if (fParam0 < 1,3f)
	{
		return 35f;
	}
	else if (fParam0 < 1,35f)
	{
		return 33f;
	}
	return 30f;
}

void func_413(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_352(0, 0);
	unk_0xA306E6FD2A6558E6(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_398(uVar0, uVar1, uVar2, uVar3, 1);
	func_397(1, 2, 0, 0, 0);
	func_396(1, 2, 1, 1, 1);
	func_395(0, 1, 0, 0, 0);
	func_394("DARTS_TITLE");
	func_392(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_374(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_389(0, 1, 0);
	func_374(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_389(1, 1, 0);
	func_374(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_388(2, 141, 141, 1);
	func_387(0);
	func_406(0, 1, 1);
	func_405("DARTS_LEGD", 0, 0);
	func_414();
	func_386(201, "ITEM_SELECT", -1, 0);
	func_386(202, "IB_QUIT", -1, 0);
}

void func_414()
{
	if (unk_0x761778199FE1211C())
	{
		unk_0xA715917D148B834B(0,325f, 0,3f);
	}
}

int func_415(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_439() && unk_0x1DD05E817C89C737() >= iLocal_163 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
		{
			unk_0x8F72AF14CE5AACE4(500);
		}
	}
	if (unk_0x15CCE8886267624F() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_29)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_163 = unk_0x1DD05E817C89C737();
						func_423(uParam1->f_1, uParam1->f_4, func_425(2), func_424(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_293(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_280(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_29++;
							func_443(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_431(uParam5) > 1f && !func_310("DARTS_DOUBLE_T"))
					{
						func_426("DARTS_DOUBLE_T", -1);
					}
					if (func_431(uParam5) > 5f)
					{
						func_443(uParam5);
						unk_0x428C32CC68809A35(1);
						func_417(uParam1->f_1, uParam1->f_4, func_425(3), func_424(0), 1000);
						iLocal_29 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_29)
			{
				case 0:
					if (!unk_0x323C4A67159DAD02(uLocal_81))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_293(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_280(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_29++;
								func_443(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_431(uParam5) > 1f && !func_310("DARTS_TRIPLE_T"))
					{
						func_426("DARTS_TRIPLE_T", -1);
					}
					if (func_431(uParam5) > 5f)
					{
						func_443(uParam5);
						unk_0x428C32CC68809A35(1);
						func_423(uParam1->f_1, uParam1->f_4, func_425(4), func_424(0), 1000, 0);
						iLocal_29 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_29)
			{
				case 0:
					if (!unk_0x323C4A67159DAD02(uLocal_80))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_293(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_280(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0xF37CDE164C892195(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_29++;
								func_443(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_431(uParam5) > 1f && !func_310("DARTS_BULL_T"))
					{
						func_426("DARTS_BULL_T", -1);
					}
					if (func_431(uParam5) > 5f)
					{
						func_443(uParam5);
						unk_0x428C32CC68809A35(1);
						unk_0xBF3D28CA44F3BE2D(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_417(uParam1->f_1, uParam1->f_4, func_425(5), func_424(1), 1500);
						iLocal_29 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x323C4A67159DAD02(uLocal_81) && !func_310("DARTS_DBL_WIN"))
			{
				func_426("DARTS_DBL_WIN", -1);
			}
			if (func_431(uParam5) > 6f)
			{
				func_443(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xBF3D28CA44F3BE2D(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xB56F35D8A770F80F(uLocal_73, uLocal_81, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x323C4A67159DAD02(uLocal_73))
			{
				iLocal_29 = 0;
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_416(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x15CCE8886267624F())
			{
				iLocal_29 = 0;
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_416(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x4CBC5D1BC117616B(uLocal_73, 1);
				unk_0x10B228D2FDB7AF16(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_416(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668,044f, -1056,45f, 13,1063f };
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0xB2BD5837A8D3CEDA(*uParam0, Var0, 1, 0, 0, 1);
		unk_0xB3B56385ECA230B4(uParam0);
		unk_0x51C8BEA2005931AB(uParam0);
	}
}

void func_417(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)
{
	unk_0xFC8624DF7EBA74FB(uLocal_81);
	unk_0x58BDA5D9262F5D30(uLocal_81, 35f);
	unk_0x1761457F86AD0EE2(uLocal_81, unk_0xF10F2A2453AF1DFB(Param0, fParam1, Param2));
	unk_0x5E5CEC33463AD803(uLocal_81, Vector(fParam1, 0f, 0f) - Param3, 2);
	unk_0xB56F35D8A770F80F(uLocal_81, uLocal_80, iParam4, 1, 1);
}

int func_418(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_428(&(uParam0->f_2)))
	{
		func_443(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	if (!bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_429(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_419(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_420(iParam5);
	unk_0x88F483FBD433696A(*uParam0, "RESET_MOVIE");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(*uParam0, sVar0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(iParam4);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xCFAD3D478C87321A();
	if (!unk_0xD6F9DEE4765092A9(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x330108B080A2132F(100);
		unk_0x557F1E2300EF1A3E(true);
	}
	unk_0xE6B753D52F4CA222();
	if (bParam6)
	{
		unk_0x88F483FBD433696A(*uParam0, "TRANSITION_UP");
		unk_0x74BF156C860580D4(iParam7);
		unk_0xE6B753D52F4CA222();
	}
	func_443(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_421()
{
	unk_0x4CBC5D1BC117616B(uLocal_73, 1);
	unk_0xE37AF9002E782BA0(1, false, 3000, 1, 0, 0);
	if (unk_0xBC886554B5888A64(uLocal_80))
	{
		unk_0x4CBC5D1BC117616B(uLocal_80, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_75))
	{
		unk_0x4CBC5D1BC117616B(uLocal_75, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_76))
	{
		unk_0x4CBC5D1BC117616B(uLocal_76, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_77))
	{
		unk_0x4CBC5D1BC117616B(uLocal_77, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_78))
	{
		unk_0x4CBC5D1BC117616B(uLocal_78, 0);
	}
	if (unk_0xBC886554B5888A64(uLocal_79))
	{
		unk_0x4CBC5D1BC117616B(uLocal_79, 0);
	}
}

char* func_422(int iParam0)
{
	if (iLocal_174 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_174 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_423(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)
{
	unk_0xFC8624DF7EBA74FB(uLocal_80);
	unk_0x58BDA5D9262F5D30(uLocal_80, 35f);
	unk_0x1761457F86AD0EE2(uLocal_80, unk_0xF10F2A2453AF1DFB(Param0, fParam1, Param2));
	unk_0x5E5CEC33463AD803(uLocal_80, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		unk_0x4CBC5D1BC117616B(uLocal_80, 1);
	}
	else
	{
		unk_0xB56F35D8A770F80F(uLocal_80, uLocal_81, iParam4, 1, 1);
	}
}

Vector3 func_424(bool bParam0)
{
	if (bParam0)
	{
		return -4,7411f, 0f, -15,32f;
	}
	return 4,9918f, 0f, 4,3916f;
}

Vector3 func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0,0588f, -1,6075f, 0,1336f;
		
		case 2:
			return -0,0944f, -1,2308f, 0,3468f;
		
		case 3:
			return -0,0948f, -1,243f, 0,2067f;
		
		case 4:
			return -0,0955f, -1,2524f, 0,1006f;
		
		case 5:
			return -0,0951f, -1,2526f, 0,0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_426(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_427(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(func_506(), 0))
	{
		func_4(func_506(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_428(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_429(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_430(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_6(iParam2), 1);
}

float func_431(var uParam0)
{
	if (func_428(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_432(var uParam0)
{
	if (!func_428(uParam0))
	{
		func_383(uParam0);
	}
	else
	{
		func_443(uParam0);
	}
}

void func_433()
{
	Global_21152 = 0;
	func_434();
}

void func_434()
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

void func_435(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_438())
		{
			func_437(1, 1);
		}
		else
		{
			func_437(0, 0);
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
	if (!func_436())
	{
		Global_20930.f_1 = 3;
	}
}

int func_436()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_437(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

bool func_438()
{
	return BitTest(Global_1956920, 5);
}

int func_439()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(uVar0))
	{
		if (!func_441(iVar0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iVar0, unk_0x4A8C381C258A124D(), Local_136, 0, 1, 0))
			{
				unk_0xC9BBB26582F3058A(iVar0);
				unk_0x44C48AC14D3C09ED(iVar0, 0, 0);
				unk_0x4285E11B28063EE0(iVar0, 0, 0);
				unk_0x5D7CD709B34C90F0(iVar0, 1);
				unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_441(int iParam0)
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

void func_442(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x88F483FBD433696A(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_443(var uParam0)
{
	func_444(uParam0, 0f);
}

void func_444(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_445(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_446(var uParam0, var uParam1, char* sParam2)
{
	unk_0x88F483FBD433696A(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(uParam1);
	func_37(sParam2);
	unk_0xE6B753D52F4CA222();
}

void func_447(var uParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(func_506()) && !unk_0x4FAFF4BCB7633475(func_506()))
	{
		unk_0x5C4B3034CCDA5270(func_506());
	}
	else
	{
		if (unk_0xFC8BFE4B41177C22(uParam5->f_5) && !unk_0x4FAFF4BCB7633475(uParam5->f_5))
		{
			unk_0xEE0BCDB1B5E36BCB(uParam5->f_5, 1, 1);
			uLocal_137[1] = uParam5->f_5;
			unk_0x974022927CB47E68(uLocal_137[1]);
		}
		else if (func_449(uParam4))
		{
			unk_0x974022927CB47E68(uLocal_137[1]);
		}
		else
		{
			uLocal_137[1] = unk_0xB1DBFEB95C0EFB88(26, iLocal_171, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0xD130E7CDEE903624(uLocal_137[1], "Darts_name"))
		{
			iVar0 = unk_0xE2F6FE9B61232165(uLocal_137[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_219 = func_453("RAYMOND");
				iLocal_220 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_219 = func_453("JOHAN");
				iLocal_220 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_219 = func_453("STAN");
				iLocal_220 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_219 = func_453("VINCE");
				iLocal_220 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_219 = func_453("KRISTY");
				iLocal_220 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_219 = func_453("MARLENE");
				iLocal_220 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_219 = func_453("LORIE");
				iLocal_220 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_219 = func_453("SHELLEY");
				iLocal_220 = -863218904;
			}
		}
		unk_0xEE8559BBFC27701B(uLocal_137[1], "Darts_name", iLocal_220);
	}
	iVar1 = unk_0x4B423FAA24E8ABF0(uLocal_137[1]);
	func_448(iVar1);
	unk_0x0E95B96CFEFE7B61(uLocal_137[1], uLocal_137[0], 0);
	unk_0x0E95B96CFEFE7B61(uLocal_137[0], uLocal_137[1], 0);
}

void func_448(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_55 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_55 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_55 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_55 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_55 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_55 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_55 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_55 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_449(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), uParam0, -1))
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			if ((((((unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x4B423FAA24E8ABF0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xEE0BCDB1B5E36BCB((*uParam0)[iVar0], 1, 1);
				uLocal_137[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar2 = (func_452() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_451(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_451(int iParam0)
{
	if (!func_94(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_452()
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

char* func_453(char* sParam0)
{
	if (unk_0x8608526719A575EE() == 7)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x1B79E937E91F40C3(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_454(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		uParam0->f_4 = unk_0xCFC0C995455A6204(*uParam0);
	}
	if (!bParam3)
	{
		func_456(uParam1, uParam0);
	}
	Local_39 = { 0f, (-2,3685f + fLocal_32), 0,1f };
	Local_39 = { Local_39 + Local_33 };
	Local_38 = { unk_0xF10F2A2453AF1DFB(uParam0->f_1, uParam0->f_4, Local_39) };
	func_455(uParam2, uParam0);
}

void func_455(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0,15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_33 };
	*uParam0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_456(var uParam0, var uParam1)
{
	*uParam0 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, -0,4f, (-2,4f + fLocal_32), -1,7272f) };
	uParam0->f_3 = { unk_0xF10F2A2453AF1DFB(uParam1->f_1, uParam1->f_4, 0,5f, (-2,4f + fLocal_32), -1,7272f) };
}

int func_457(var uParam0, var uParam1)
{
	if (!unk_0xD7E1DF759CD0FFF2("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0xD7E1DF759CD0FFF2("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x6252BC0DD8A320DB(iLocal_26) || !unk_0x6252BC0DD8A320DB(iLocal_27)) || !unk_0x6252BC0DD8A320DB(iLocal_35)) || !unk_0x6252BC0DD8A320DB(iLocal_171)) || !unk_0xA0C7B98BCF1EEF9E(*uParam0)) || !unk_0xA0C7B98BCF1EEF9E(uParam1->f_645)) || !unk_0xA0C7B98BCF1EEF9E(uParam1->f_57)) || !unk_0xA0C7B98BCF1EEF9E(uParam1->f_62)) || !unk_0xDCB78A15E5F495DC(3)) || !unk_0x38D063D8CF6D1967("Darts")) || !unk_0xE100DD4F82A51BDE(sLocal_221)) || !unk_0xE100DD4F82A51BDE(sLocal_222)) || !func_458(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_458(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_349(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	unk_0xD0D00ED689D6CA81("Shared", 1);
	if (!unk_0x38D063D8CF6D1967("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23831.f_6224[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_459(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_459(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_460(var uParam0, var uParam1)
{
	unk_0xEC9DAA34BBB4658C(iLocal_26);
	unk_0xEC9DAA34BBB4658C(iLocal_27);
	unk_0xEC9DAA34BBB4658C(iLocal_35);
	unk_0xEC9DAA34BBB4658C(iLocal_171);
	unk_0xD0D00ED689D6CA81("Darts", 0);
	unk_0xD0D00ED689D6CA81("ShopUI_Title_Darts", 0);
	unk_0x80813AC549A1E8AE(sLocal_221);
	unk_0x80813AC549A1E8AE(sLocal_222);
	*uParam0 = unk_0x8DE4F68A9728925E("darts_scoreboard");
	uParam1->f_645 = func_201();
	uParam1->f_57 = func_462();
	uParam1->f_62 = func_461();
	unk_0xF2CB0224D3BE0B42("DARTS", 3);
}

var func_461()
{
	return unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
}

var func_462()
{
	return unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
}

void func_463(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989,399f, -99,674f, 75,925f };
		uParam0->f_21 = { 180f, 0f, 252,555f };
		uParam0->f_24 = { 1,82f, 1,328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992,223f, 3049,814f, 48,333f };
		uParam0->f_21 = { 180f, 0f, 87,77f };
		uParam0->f_24 = { 1,82f, 1,328f, 1f };
	}
	if (!func_464(Param2) && fParam3 != 0f)
	{
		uParam0->f_18 = { unk_0xF10F2A2453AF1DFB(Param2, fParam3, -0,687645f, -0,350352f, 0,343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam3 - -29,98685f) };
	}
	uParam0->f_27 = 0,885f;
	uParam0->f_28 = 0,244f;
	uParam0->f_29 = 0,17f;
	uParam0->f_30 = 0,415f;
}

int func_464(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_465(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_36.f_0 = 0,5f;
	Local_36.f_1 = 0,5f;
	if (unk_0x485ADB2D2728D748())
	{
		Local_36.f_2 = 0,05f;
		Local_36.f_3 = 0,095f;
	}
	else
	{
		Local_36.f_2 = 0,065f;
		Local_36.f_3 = 0,09f;
	}
	Local_36.f_4 = 255;
	Local_36.f_5 = 250;
	Local_36.f_6 = 255;
	Local_36.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_36.f_4 = 255;
		Local_36.f_5 = 255;
		Local_36.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_36.f_4 = 255;
		Local_36.f_5 = 255;
		Local_36.f_6 = 255;
	}
	Local_36.f_8 = 0f;
	Local_37.f_0 = 0f;
	Local_37.f_1 = 0f;
	Local_37.f_2 = 0,061f;
	Local_37.f_3 = 0,105f;
	Local_37.f_4 = 200;
	Local_37.f_5 = 45;
	Local_37.f_6 = 40;
	Local_37.f_7 = 255;
	Local_37.f_8 = 0f;
}

void func_466(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_26;
	}
	else
	{
		uParam0->f_1 = iLocal_27;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_467()
{
	int iVar0;
	
	unk_0xB83DA0A55841C11A();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_468(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	fLocal_87 = unk_0x4AE9635532D92447(0);
	fVar7 = 30f;
	fVar7 = func_412(fLocal_87);
	Var8 = { -0,192784f, -1,73287f, 0,0262985f };
	fVar9 = 1,7939f;
	fVar10 = -1,3346f;
	if (unk_0x485ADB2D2728D748())
	{
		Var11 = { -0,0974819f, -1,65968f, 0,335098f };
		fVar12 = -1,3023f;
		fVar13 = -12,4139f;
	}
	else
	{
		Var11 = { -0,112635f, -1,86963f, 0,45417f };
		fVar12 = -3,7542f;
		fVar13 = -14,4576f;
	}
	Var14 = { 0,261599f, -0,750354f, -0,392929f };
	Var16 = { 0,281314f, -0,573735f, -0,39603f };
	Var1 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var14) };
	Var5 = { 0,8351f, -0,0048f, (fParam1 - 186,5073f) };
	Var15 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var16) };
	Var6 = { 0,8351f, -0,0048f, (fParam1 - 186,5073f) };
	uLocal_73 = unk_0x96A32328480B485C(26379945, Var0, Var2, fVar7, 0, 2);
	uLocal_74 = unk_0x96A32328480B485C(26379945, Var1, Var3, fVar7, 0, 2);
	uLocal_75 = unk_0x96A32328480B485C(26379945, Var4, Var5, 65f, 0, 2);
	uLocal_76 = unk_0x96A32328480B485C(26379945, Var15, Var6, 65f, 0, 2);
	uLocal_77 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_78 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_80 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_81 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_79 = unk_0x96A32328480B485C(26379945, 1996,235f, 3048,456f, 48,0237f, -3,4831f, 0,0223f, 60,6925f, 38,1f, 0, 2);
	unk_0x58BDA5D9262F5D30(uLocal_75, 43,35f);
	unk_0x58BDA5D9262F5D30(uLocal_76, 42,35f);
	unk_0x2A09425009DAD0F5(uLocal_75, "HAND_SHAKE", 0,1f);
	unk_0x2A09425009DAD0F5(uLocal_76, "HAND_SHAKE", 0,1f);
}

void func_469(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0xFC8BFE4B41177C22(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_31[0] = 20;
	iLocal_31[10] = 3;
	iLocal_31[1] = 1;
	iLocal_31[11] = 19;
	iLocal_31[2] = 18;
	iLocal_31[12] = 7;
	iLocal_31[3] = 4;
	iLocal_31[13] = 16;
	iLocal_31[4] = 13;
	iLocal_31[14] = 8;
	iLocal_31[5] = 6;
	iLocal_31[15] = 11;
	iLocal_31[6] = 10;
	iLocal_31[16] = 14;
	iLocal_31[7] = 15;
	iLocal_31[17] = 9;
	iLocal_31[8] = 2;
	iLocal_31[18] = 12;
	iLocal_31[9] = 17;
	iLocal_31[19] = 5;
	iLocal_31[20] = 20;
}

void func_470()
{
	Global_23692.f_6 = 1;
}

void func_471(bool bParam0, bool bParam1)
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

var func_472(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_473(iParam0, iParam1);
	unk_0xDF7F16323520B858(uVar1, &uVar0, -1);
	return uVar0;
}

var func_473(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_474(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_474(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		func_476();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_42(0))
		{
			func_435(0);
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

void func_476()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_477(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x82BC6786EE477292(1);
	func_272(8);
	func_325();
	if (bLocal_145)
	{
		func_494(&uLocal_161);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_416(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(iLocal_26);
	unk_0x55098D9E9AD58806(iLocal_27);
	if (!unk_0x4FAFF4BCB7633475(uLocal_137[0]) && !unk_0x4FAFF4BCB7633475(uLocal_137[1]))
	{
		unk_0x84B06A81C98DA4B8(uLocal_137[0]);
		unk_0x84B06A81C98DA4B8(uLocal_137[1]);
	}
	func_493();
	unk_0x55098D9E9AD58806(iLocal_35);
	func_492();
	func_491(uParam1->f_645);
	func_490(&(uParam1->f_57));
	if (!unk_0x1C2F771CDC87A3A5(func_506(), 0))
	{
		unk_0x03AB73582A77DBD3(func_506(), func_489());
		func_488(iLocal_169, iLocal_170);
	}
	else
	{
		func_486(&(uLocal_137[1]));
	}
	func_475(0);
	func_485(uParam2, 0);
	func_39(0);
	unk_0xDCFF86AAD108A201(15);
	if (unk_0x99DFE4CAC19D527F())
	{
		if (iParam0->f_460 && !iLocal_159)
		{
			func_484(190, 0);
		}
	}
	func_106();
	func_467();
	func_98(&(uParam1->f_72), 0);
	system::wait(200);
	if (iLocal_152)
	{
		func_481(130, 0, 0);
		func_478();
	}
	func_471(23, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_478()
{
	func_479();
}

int func_479()
{
	if (func_480(0))
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

int func_480(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_481(int iParam0, int iParam1, int iParam2)
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
		func_67((891 + iParam0), 1, -1);
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_482();
	}
}

void func_482()
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
		func_87(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_483() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_479();
				}
			}
		}
	}
}

int func_483()
{
	return Global_32948;
}

void func_484(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x99DFE4CAC19D527F())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_231(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x3573EC2255786C32(103, iLocal_104[1], 0f);
		unk_0x3573EC2255786C32(99, iLocal_104[2], 0f);
		unk_0x3573EC2255786C32(109, iLocal_104[3], 0f);
		unk_0x3573EC2255786C32(106, iLocal_104[5], 0f);
		unk_0x3573EC2255786C32(2, iLocal_104[10], 0f);
		unk_0x3573EC2255786C32(107, iLocal_104[8], 0f);
		unk_0x3573EC2255786C32(116, iLocal_104[6], 0f);
	}
}

void func_485(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(false);
			unk_0xE6B753D52F4CA222();
		}
		unk_0xD314260005F064BF(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x6FF322107B12B749(0);
		uParam0->f_568 = 0;
	}
	if (!Global_79658)
	{
		if (!unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
		{
			if (!Global_79660)
			{
				if (unk_0x15CCE8886267624F() && !func_480(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
		}
	}
	func_39(0);
}

void func_486(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0) && !unk_0x4FAFF4BCB7633475(*uParam0))
	{
		unk_0xD0557B139A542F12(&uLocal_172);
		unk_0xB5396F1FB088FE38(&uLocal_172);
		if (unk_0xFC8BFE4B41177C22(uLocal_137[0]))
		{
			unk_0xE67051907958B5EB(0, uLocal_137[0], 8000, 2049, 3);
		}
		unk_0x0FD8B5F4BB15CD71(0, 1000);
		if (bLocal_150)
		{
			if (!BitTest(Global_113930, 10))
			{
				unk_0xA966E518B752B92A(0, func_487(iLocal_174 == 2, Local_209, Local_211), 1f, 20000, 0,25f, 0, func_125(iLocal_174 == 2, fLocal_213, fLocal_215));
			}
			else
			{
				unk_0xA966E518B752B92A(0, func_487(iLocal_174 == 2, Local_208, Local_210), 1f, 20000, 0,25f, 0, func_125(iLocal_174 == 2, fLocal_212, fLocal_214));
			}
			unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0xA966E518B752B92A(0, func_487(iLocal_174 == 2, Local_208, Local_210), 1f, 20000, 0,25f, 0, func_125(iLocal_174 == 2, 172,6813f, 142,6717f));
			unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x93C0674FC00824D0(uLocal_172);
		unk_0x4BD42B0527065BB6(*uParam0, uLocal_172);
		unk_0x44FB298D6382876D(*uParam0, 1);
	}
	unk_0x55098D9E9AD58806(iLocal_171);
}

Vector3 func_487(bool bParam0, struct<3> Param1, struct<3> Param2)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_488(int iParam0, var uParam1)
{
	if (Global_97339 == iParam0)
	{
		Global_97340 = Global_97339;
		Global_97341 = uParam1;
		Global_97339 = 23;
	}
}

var func_489()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_490(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0xD314260005F064BF(uParam0);
		*uParam0 = 0;
	}
}

void func_491(var uParam0)
{
	unk_0xD314260005F064BF(&uParam0);
}

void func_492()
{
	unk_0x428C32CC68809A35(1);
	unk_0x3AA8CFEBC938A945(0);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x37B894853929BF1A(1);
}

void func_493()
{
	if (unk_0xFC8BFE4B41177C22(uLocal_34))
	{
		unk_0x51C8BEA2005931AB(&iLocal_34);
	}
}

void func_494(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xFC8BFE4B41177C22(uVar0))
	{
		if (!func_441(iVar0))
		{
			unk_0x44C48AC14D3C09ED(iVar0, 1, 0);
			unk_0x4285E11B28063EE0(iVar0, 1, 0);
			unk_0x5D7CD709B34C90F0(iVar0, 0);
		}
	}
}

void func_495()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_480(0))
	{
		if (!func_503())
		{
			iVar0 = func_502();
			if (iVar0 != -1)
			{
				if (!func_497(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_496();
		}
	}
}

void func_496()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_92())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_92())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 25);
	}
}

int func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_496();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_501(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_498(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_498(var uParam0, int iParam1)
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
			if (!func_500(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_499(&(uParam0->f_2296[iVar0]));
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

void func_499(var uParam0)
{
	*uParam0 = -15;
}

int func_500(int iParam0, var uParam1, float fParam2)
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
			return func_500(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_500(8, uParam1, fParam2);
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

void func_501(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

int func_502()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_503()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_504(int iParam0, bool bParam1)
{
	if (unk_0x4FAFF4BCB7633475(func_506()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xD11A63E12F198FDB(func_506(), func_489()))
		{
			return;
		}
		if (!unk_0x4FAFF4BCB7633475(func_505()))
		{
			if (!unk_0xD11A63E12F198FDB(func_505(), func_489()))
			{
				return;
			}
		}
	}
	if (Global_97339 == 23)
	{
		Global_97341 = 10;
		Global_97339 = iParam0;
	}
}

var func_505()
{
	return Global_97346;
}

int func_506()
{
	return Global_97345;
}

void func_507()
{
	if (iLocal_134 == 1)
	{
		return;
	}
	func_325();
	unk_0x005E8B7CFA7D52A6("Darts");
	iLocal_134 = 1;
}

int func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

