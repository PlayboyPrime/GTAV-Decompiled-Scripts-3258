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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	var uLocal_67 = 16;
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
	float fLocal_234 = 0f;
	int iLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_244 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	Local_63 = { -1124,392f, -514,7001f, 33,21493f };
	fLocal_64 = 200f;
	Local_65 = { 2490f, 3777f, 2402,879f };
	Local_66 = { -2052f, 3237f, 1450,078f };
	fLocal_234 = 3f;
	iLocal_235 = 2;
	iLocal_244 = joaat("s_m_m_security_01");
	bVar0 = false;
	if (unk_0x96CFB880BAC634CE(82))
	{
		func_78();
	}
	func_77(30);
	if (func_76(unk_0x4A8C381C258A124D()))
	{
		while (bVar0 == 0)
		{
			bVar0 = ((unk_0x3D2EB53CF281A77E() == 0 && func_71() == 0) && func_70(unk_0x4A8C381C258A124D(), Local_63, fLocal_64, 1));
			func_68();
		}
	}
	func_67(65, 0);
	func_66(1);
	func_65(joaat("akuma"), 1);
	func_65(iLocal_244, 1);
	while (true)
	{
		func_76(unk_0x4A8C381C258A124D());
		Local_243 = { unk_0x90D0E0397D3F7690(unk_0x4A8C381C258A124D()) };
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			func_64(&uLocal_232);
			func_3(&uLocal_233);
			if (func_2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 7, 0, 0))
			{
				func_67(65, 1);
				func_1(30);
				func_78();
			}
		}
		func_68();
	}
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

int func_2(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
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

void func_3(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	switch (*uParam0)
	{
		case 0:
			func_60(&uLocal_238);
			func_67(65, 0);
			func_59(&uLocal_242);
			*uParam0++;
			break;
		
		case 1:
			if (func_58(unk_0x4A8C381C258A124D(), -1210,236f, -579,875f, 26,33215f, -1204,725f, -586,3573f, 29,56773f, 6f))
			{
				fLocal_234 = 0,25f;
				*uParam0++;
				return;
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				uVar1 = unk_0x42CDD13001C98400(func_57(Local_243, 0,73f, 0,683f, -0,013f));
				if (unk_0x1D5CD3EAAA7422B0(uVar1) < 25f)
				{
					if (func_58(uVar2, -1211,774f, -580,9299f, 26,33095f, -1208,127f, -585,3617f, 29,66056f, 4,5f))
					{
						fLocal_234 = 3f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				func_54(uVar2, fLocal_234, iLocal_235, 1056964608, 0, 1, 0);
			}
			else
			{
				unk_0x0FD8B5F4BB15CD71(unk_0x4A8C381C258A124D(), -1);
			}
			if (func_52(-1210,152f, -578,0859f, 26,7238f))
			{
				func_51(&uLocal_67, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
				if (func_50())
				{
					bVar0 = func_34(&uLocal_67, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = func_34(&uLocal_67, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 3:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_54(uVar2, fLocal_234, iLocal_235, 1056964608, 0, 1, 0))
				{
					*uParam0++;
					return;
				}
			}
			*uParam0++;
			break;
		
		case 4:
			if (!unk_0xAD0D2187C5FE447D(unk_0x4A8C381C258A124D()) && !unk_0x1F9EB85925C3ECD7())
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				*uParam0++;
			}
			break;
		
		case 5:
			func_5(0);
			*uParam0++;
			break;
		
		case 6:
			func_4(&uLocal_238, -1206,84f, -583,2034f, 26,1738f, 311,4116f);
			*uParam0++;
			break;
		
		case 7:
			if (!func_58(unk_0x4A8C381C258A124D(), -1210,236f, -579,875f, 26,33215f, -1204,725f, -586,3573f, 29,56773f, 6f))
			{
				func_60(&uLocal_238);
				*uParam0++;
			}
			break;
		
		case 8:
			if (iLocal_240 == 0)
			{
				func_78();
			}
			break;
	}
}

void func_4(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_1 = unk_0x5779387E956077A6(joaat("akuma"), Param1, fParam2, 1, 1, 0);
	if (func_76(uParam0->f_1))
	{
		unk_0x5D7CD709B34C90F0(uParam0->f_1, 1);
		unk_0x44C48AC14D3C09ED(uParam0->f_1, 0, 0);
		unk_0x4285E11B28063EE0(uParam0->f_1, 0, 0);
		unk_0xC229299217554C78(uParam0->f_1, 0, 1, 0);
		*uParam0 = unk_0x8728A378EF2B46B2(uParam0->f_1, 26, unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()), -1, 1, 1);
		if (func_76(*uParam0))
		{
			unk_0xAAA71DD7E9059338(*uParam0, 1);
			unk_0x4285E11B28063EE0(*uParam0, 0, 0);
			unk_0xFD61BB3B8F1CDB6D(*uParam0, 1);
		}
	}
}

void func_5(int iParam0)
{
	func_67(65, 1);
	unk_0x2AF2D6F164BD6F5A(-1039,504f, -477,7876f, 35,32967f, -1062,444f, -469,5685f, 40,62086f, 13f, 1);
	func_6(135, iParam0);
	func_6(136, iParam0);
	unk_0x2AF2D6F164BD6F5A(-1039,504f, -477,7876f, 35,32967f, -1062,444f, -469,5685f, 40,62086f, 13f, 1);
	func_6(137, iParam0);
	func_6(138, iParam0);
}

void func_6(int iParam0, int iParam1)
{
	func_7(iParam0, iParam1);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
	Global_39874[iParam0] = iParam1;
	Global_113969.f_7264[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_79389)
		{
			iVar0 = Global_43576[iParam0];
		}
		else
		{
			iVar0 = Global_113969.f_7264[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
				Global_39874[iParam0] = iParam1;
			}
			else if (Global_79389)
			{
				Global_43576[iParam0] = iParam1;
			}
			else
			{
				Global_113969.f_7264[iParam0] = iParam1;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
			func_9(iParam0);
			if (BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_8(iParam0);
			}
		}
	}
}

void func_8(int iParam0)
{
	if (!BitTest(Global_40345.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_40345.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_40345[Global_40345.f_227] = iParam0;
		Global_40345.f_227++;
	}
}

void func_9(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_31())
	{
		return;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	Var0 = { func_30(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_16(iParam0, &Var0);
	}
	if (!unk_0x116053132936EA1F(Var0.f_5))
	{
		if (unk_0xFD216000DC314A92())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0xED977E2AE2CB16EE(Var0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1);
	if ((BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) && Global_39874[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0x8744D2E3FC95740E(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
		Global_39420[iParam0] = 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_39647[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_101585.f_391 == 0)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						Global_101585.f_391 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
					}
				}
				iVar5 = Global_101585.f_391;
				iVar6 = unk_0x0E171121A3A25363(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
					Global_39874[iParam0] = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x8744D2E3FC95740E(&(Global_39647[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_39874[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113969.f_9088)
		{
			iVar3 = func_12(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_11(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && unk_0x486FF5D06E9659F1(joaat("ambient_solomon")) == 0)
	{
		if (func_10())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113969.f_7264[iParam0];
	}
	if (Global_40101[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) || (Global_39420[iParam0] == 0 && Global_39874[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_39401)
		{
		}
		else
		{
			if (!unk_0x116053132936EA1F(Var0.f_5))
			{
				unk_0xB80B2E08713B8BC6(Var0.f_5, Var0.f_3, Var0, 0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x1D5CD3EAAA7422B0(unk_0x8CA2126DEA4C3796(Var0.f_5)) <= 0,015f)
					{
						iVar8 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
						iVar9 = unk_0x0E171121A3A25363(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x8744D2E3FC95740E(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
			Global_40101[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) && Global_39874[iParam0] != 2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
		func_8(iParam0);
		if (Global_39420[iParam0] < 2)
		{
			Global_39420[iParam0]++;
		}
	}
}

int func_10()
{
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	switch (func_71())
	{
		case 0:
			if (Global_113969.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113969.f_9088.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113969.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_11(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_12(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_71();
	if (func_14(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113969.f_7232[5], 0) || BitTest(Global_113969.f_7232[6], 0))
			{
				return 0;
			}
		}
		if (func_13(bVar0))
		{
			if (BitTest(Global_96540[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (BitTest(Global_113969.f_7232[0], 0))
				{
					return 0;
				}
			}
			if (func_13(bVar0))
			{
				if (BitTest(Global_96540[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113969.f_7232[5], 0))
				{
					return 0;
				}
			}
			if (func_13(bVar0))
			{
				if (BitTest(Global_96540[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113969.f_7232[6], 0))
				{
					return 0;
				}
			}
			if (func_13(bVar0))
			{
				if (BitTest(Global_96540[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113969.f_7232[2], 0))
				{
					return 0;
				}
				if (func_13(bVar0))
				{
					if (BitTest(Global_96540[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113969.f_7232[1], 0))
				{
					return 0;
				}
				if (func_13(bVar0))
				{
					if (BitTest(Global_96540[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113969.f_7232[3], 0))
				{
					return 0;
				}
			}
			if (func_13(bVar0))
			{
				if (BitTest(Global_96540[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

bool func_13(bool bParam0)
{
	return bParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iVar0 = unk_0x4B423FAA24E8ABF0(func_15(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_15(var uParam0)
{
	return uParam0;
}

void func_16(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_19();
	iVar1 = func_18(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_17(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_17(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_17(iParam0))
			{
				if ((unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0) && !Global_113969.f_9088.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113969.f_7264[iParam0] = 0;
							unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113969.f_9088.f_99.f_58[4])
				{
					Global_113969.f_7264[iParam0] = 0;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (Global_113969.f_9088.f_99.f_58[4])
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			else if (unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113969.f_7264[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113969.f_7264[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_17(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_17(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) > 0)
			{
				Global_113969.f_7264[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x486FF5D06E9659F1(Global_92301[70 /*34*/].f_6) == 0)
			{
				if (!func_17(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x486FF5D06E9659F1(joaat("omega2")) == 0)
			{
				if (!func_17(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_17(iParam0) && unk_0x486FF5D06E9659F1(Global_92301[26 /*34*/].f_6) == 0)
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_17(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[43 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_17(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[93 /*34*/].f_6) > 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_17(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[8 /*34*/].f_6) == 0 && unk_0x486FF5D06E9659F1(Global_92301[10 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_17(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[47 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x486FF5D06E9659F1(Global_92301[70 /*34*/].f_6) == 0)
			{
				if (!func_17(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x486FF5D06E9659F1(Global_92301[48 /*34*/].f_6) == 0)
			{
				if (!func_17(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x486FF5D06E9659F1(Global_92301[39 /*34*/].f_6) == 0)
			{
				if (!func_17(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_17(iParam0))
			{
				Global_113969.f_7264[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
	}
}

bool func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_30(iParam0) };
	iVar1 = unk_0x117BCCA03F7A311A(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_18(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

var func_19()
{
	var uVar0;
	
	func_29(&uVar0, unk_0x4BA5A16068183C5E());
	func_28(&uVar0, unk_0x18E502A71E28968C());
	func_27(&uVar0, unk_0x5295501D0862870D());
	func_22(&uVar0, unk_0xB12880C92EA6EE15());
	func_21(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_20(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_20(var uParam0, int iParam1)
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

void func_21(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_22(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26(*uParam0);
	iVar1 = func_24(*uParam0);
	if (iParam1 < 1 || iParam1 > func_23(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_23(int iParam0, int iParam1)
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

var func_24(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_25(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_25(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_26(var uParam0)
{
	return uParam0 & 15;
}

void func_27(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_28(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_29(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

struct<7> func_30(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_31()
{
	if ((func_33() == -1 || func_33() == 999) && !func_32() == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	return Global_32949;
}

int func_33()
{
	return Global_32948;
}

int func_34(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					func_48();
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
		if (func_47(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_46();
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
				func_45();
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
				if (func_44())
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
			if (func_43())
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
			func_42();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_41();
		func_36();
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
		func_48();
	}
	return 0;
}

void func_36()
{
	if (!func_37())
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

int func_37()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_40())
	{
		return 0;
	}
	if (func_38(unk_0x259BE71D8A81D4FA()))
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

bool func_38(int iParam0)
{
	return func_39(iParam0, 20);
}

var func_39(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_40()
{
	return -1;
}

void func_41()
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

void func_42()
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

int func_43()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
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

void func_45()
{
	if (func_11(14))
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
		Global_20930 = func_71();
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

void func_46()
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

bool func_47(int iParam0, int iParam1)
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

void func_48()
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

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_50()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(uParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(uParam2, 1);
			}
		}
	}
}

int func_52(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	
	iVar0 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar2, -1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_76(uVar2[iVar1]))
		{
			if (unk_0x700C28A639389477(uVar2[iVar1], iLocal_244))
			{
				if (func_53(uVar2[iVar1], Param0, 1) < 5f)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

float func_53(var uParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

int func_54(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_56(bParam5, bParam6);
	func_55(uParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(uParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(uParam0))
		{
			if (unk_0x772683F12F46CE82(uParam0))
			{
				unk_0x5B29AF88D03CEB7A(uParam0, 0);
			}
		}
	}
}

void func_56(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

float func_57(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_58(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<2> Var1;
	struct<2> Var2;
	
	if (unk_0x5105BE70DEF1F5FB(uParam0, Param1, Param2, fParam3, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x0101C509A6E67F99(uParam0))
	{
		return 0;
	}
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(uParam0), &Var1, &Var2);
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, Var1.f_0, Var2.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, 0f, Var2.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, Var2.f_0, Var2.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, Var1.f_0, Var1.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, 0f, Var1.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0, Var2.f_0, Var1.f_1, 0f) };
	if (unk_0x26715B0ED6702C87(Var0, Param1, Param2, fParam3, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(uParam0);
	}
}

void func_60(var uParam0)
{
	func_59(uParam0);
	func_61(&(uParam0->f_1));
}

void func_61(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		if (func_63(*uParam0))
		{
			if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
			{
				if (func_62(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
					{
						unk_0x68298CA6191CDFDB(uParam0);
						return;
					}
				}
				unk_0x8C1F7D7A31B2A38E(uParam0);
			}
		}
		else
		{
			if (func_62(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
				{
					unk_0x68298CA6191CDFDB(uParam0);
					return;
				}
			}
			unk_0x8C1F7D7A31B2A38E(uParam0);
		}
	}
}

int func_62(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(var uParam0)
{
	if (func_62(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	switch (*uParam0)
	{
		case 0:
			func_60(&uLocal_236);
			func_67(65, 0);
			func_59(&uLocal_241);
			*uParam0++;
			break;
		
		case 1:
			if (func_58(unk_0x4A8C381C258A124D(), -1055,046f, -469,3347f, 35,43333f, -1057,44f, -474,9772f, 39,8187f, 12,5f))
			{
				fLocal_234 = 0,25f;
				*uParam0++;
				return;
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				uVar1 = unk_0x42CDD13001C98400(func_57(Local_243, -0,37f, -0,927f, -0,053f));
				if (unk_0x1D5CD3EAAA7422B0(uVar1) < 45f)
				{
					if (func_58(uVar2, -1049,318f, -473,7472f, 34,94196f, -1059,483f, -468,7608f, 39,94483f, 4,5f))
					{
						fLocal_234 = 1f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				func_54(uVar2, fLocal_234, iLocal_235, 1056964608, 0, 1, 0);
			}
			else
			{
				unk_0x0FD8B5F4BB15CD71(unk_0x4A8C381C258A124D(), -1);
			}
			if (func_52(-1051,1f, -476,1f, 37f))
			{
				func_51(&uLocal_67, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
				if (func_50())
				{
					bVar0 = func_34(&uLocal_67, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = func_34(&uLocal_67, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 3:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_54(uVar2, fLocal_234, iLocal_235, 1056964608, 0, 1, 0))
				{
					*uParam0++;
				}
				return;
			}
			*uParam0++;
			break;
		
		case 4:
			if (!unk_0xAD0D2187C5FE447D(unk_0x4A8C381C258A124D()) && !unk_0x1F9EB85925C3ECD7())
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				*uParam0++;
			}
			break;
		
		case 5:
			func_5(0);
			*uParam0++;
			break;
		
		case 6:
			func_4(&uLocal_236, -1051,956f, -472,055f, 35,5672f, 161,4418f);
			*uParam0++;
			break;
		
		case 7:
			if (!func_58(unk_0x4A8C381C258A124D(), -1055,514f, -474,6371f, 35,6278f, -1051,23f, -464,4126f, 39,91479f, 9,5f))
			{
				func_60(&uLocal_236);
				*uParam0++;
			}
			break;
		
		case 8:
			if (iLocal_240 == 0)
			{
				func_78();
			}
			break;
	}
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737() + 7500;
	if (iParam0 == 0)
	{
		return 0;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	if (unk_0x6252BC0DD8A320DB(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0x6252BC0DD8A320DB(iParam0))
	{
		system::wait(0);
		if (unk_0x1DD05E817C89C737() > iVar0 && !unk_0x6252BC0DD8A320DB(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_66(int iParam0)
{
	func_67(65, 0);
	unk_0x5E08BBBF87BC4886(-1039,504f, -477,7876f, 35,32967f, -1062,444f, -469,5685f, 40,62086f, 13f, 0, 0, 1);
	func_6(135, iParam0);
	func_6(136, iParam0);
	unk_0x5E08BBBF87BC4886(-1039,504f, -477,7876f, 35,32967f, -1062,444f, -469,5685f, 40,62086f, 13f, 0, 0, 1);
	func_6(137, iParam0);
	func_6(138, iParam0);
}

void func_67(int iParam0, int iParam1)
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

void func_68()
{
	func_76(unk_0x4A8C381C258A124D());
	if (unk_0x486FF5D06E9659F1(joaat("solomon1")) > 0)
	{
		func_1(30);
		func_67(65, 1);
		func_78();
	}
	if (func_69(59) == 1)
	{
		func_67(65, 1);
		func_1(30);
		func_78();
	}
	if (unk_0x3D2EB53CF281A77E())
	{
		func_78();
	}
	if (func_71() != 0)
	{
		func_78();
	}
	if (!func_70(unk_0x4A8C381C258A124D(), Local_63, (fLocal_64 + 30f), 1))
	{
		func_78();
	}
	system::wait(0);
	func_76(unk_0x4A8C381C258A124D());
}

int func_69(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

bool func_70(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(uParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

int func_71()
{
	func_72();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_72()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_74(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_73(unk_0x4A8C381C258A124D());
			if (func_13(iVar0) && (!func_11(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_13(Global_113969.f_2366.f_539.f_4321))
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

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_75(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_75(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_76(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

int func_77(int iParam0)
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

void func_78()
{
	func_60(&uLocal_236);
	func_60(&uLocal_238);
	func_79(&uLocal_241, 0, 0, 1);
	func_79(&uLocal_242, 0, 0, 1);
	func_67(65, 1);
	unk_0x55098D9E9AD58806(joaat("s_m_m_security_01"));
	unk_0x55098D9E9AD58806(joaat("akuma"));
	unk_0xBBC29EBE6E1A48FA();
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

