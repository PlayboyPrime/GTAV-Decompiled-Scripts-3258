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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	struct<62> Local_35 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 16;
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
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	char[] cLocal_211[8] = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	var uLocal_218[2] = { 0, 0 };
	var uLocal_219[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_220[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0,0375f;
	fLocal_25 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_209 = -1;
	iLocal_210 = -1;
	StringCopy(&cLocal_211, "PMGAUD", 8);
	iLocal_213 = -1;
	iLocal_214 = -1;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_62(2);
		func_61();
	}
	func_54();
	while (true)
	{
		system::wait(0);
		if (func_53())
		{
			iLocal_210 = -1;
		}
		else if (iLocal_210 == -1)
		{
			iLocal_210 = unk_0x1DD05E817C89C737();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[16];
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	switch (iLocal_34)
	{
		case 0:
			unk_0xF2CB0224D3BE0B42("PGANG", 0);
			if (unk_0xDCB78A15E5F495DC(0))
			{
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (unk_0xFC8BFE4B41177C22(Global_112676.f_225[iVar1]))
					{
						uLocal_219[iVar1] = Global_112676.f_225[iVar1];
						Global_112676.f_225[iVar1] = 0;
						unk_0xEE0BCDB1B5E36BCB(uLocal_219[iVar1], 1, 1);
						if (iLocal_224 == 0)
						{
							iLocal_224 = unk_0x4B423FAA24E8ABF0(uLocal_219[iVar1]);
						}
						if (!unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
						{
							unk_0x3CEA1FD137ACE2D9(uLocal_219[iVar1], iLocal_222);
							unk_0xD0764B65C2DFEDCA(uLocal_219[iVar1], 1);
							unk_0x1090EAA386FB31A8(uLocal_219[iVar1], 0);
							unk_0xC652B7E19CE29859(uLocal_219[iVar1], 5);
							unk_0x570AAA413775DFFB(uLocal_219[iVar1], 1);
							func_52(uLocal_219[iVar1], 20f, 5f, 90f, -80f, 80f, 1101004800, 1125515264);
							if (iLocal_43 == 0)
							{
								unk_0xD0764B65C2DFEDCA(uLocal_219[iVar1], 2);
							}
							uLocal_221[iVar1] = func_49(uLocal_219[iVar1], 1, 145);
						}
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xFC8BFE4B41177C22(Global_112676.f_222[iVar1]))
					{
						uLocal_218[iVar1] = Global_112676.f_222[iVar1];
						Global_112676.f_222[iVar1] = 0;
						unk_0xEE0BCDB1B5E36BCB(uLocal_218[iVar1], 1, 1);
						if (iLocal_223 == 0)
						{
							iLocal_223 = unk_0x4B423FAA24E8ABF0(uLocal_218[iVar1]);
						}
					}
					iVar1++;
				}
				StringCopy(&cVar0, "START_", 16);
				StringConCat(&cVar0, &(Local_35.f_61), 16);
				func_48(&cVar0, 7500, 1);
				iLocal_34++;
			}
			break;
		
		case 1:
			bVar3 = true;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (!bVar2)
				{
					if (uLocal_220[iVar1] > 0)
					{
						bVar2 = true;
					}
				}
				if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar1]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
				{
					bVar3 = false;
				}
				iVar1++;
			}
			if (bVar2)
			{
				unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
			}
			if (bVar3)
			{
				if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (!iLocal_215)
					{
						func_48("LOSE_WANTED", 7500, 1);
						iLocal_215 = 1;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_43)
	{
		case 1:
			func_45();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar1]))
		{
			if (unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
			{
				unk_0xF09E30AF1B8FB379(&(uLocal_219[iVar1]));
			}
			else if (func_6(uLocal_219[iVar1], func_7(func_8()), 1) > 100f && func_5(unk_0x4A8C381C258A124D(), uLocal_219[iVar1], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_217 && func_6(uLocal_219[iVar1], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_216)
					{
						StringCopy(&cVar0, "ESC_", 16);
						StringConCat(&cVar0, &(Local_35.f_61), 16);
						func_48(&cVar0, 7500, 1);
						iLocal_216 = 1;
					}
				}
			}
		}
		if (unk_0xC450B06E5AAA0985(uLocal_221[iVar1]))
		{
			if (!unk_0xFC8BFE4B41177C22(uLocal_219[iVar1]) || unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_221[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_2()
{
	if (unk_0xFBA523E6F8ACE541())
	{
		return 0;
	}
	if (unk_0x5994A2F6D4FFFE4D())
	{
		if (func_53() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	func_62(2);
	func_61();
}

float func_5(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

float func_6(var uParam0, struct<3> Param1, int iParam2)
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

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147,317f, 4795,208f, 40,08961f;
			break;
		
		case 9:
			return 1524,329f, -2108,269f, 75,7248f;
			break;
		
		case 10:
			return -1172,195f, -1577,427f, 3,38152f;
			break;
		
		case 1:
			return 898,3718f, -177,0764f, 72,68348f;
			break;
		
		case 4:
			return 1191,302f, 2672,064f, 36,73154f;
			break;
		
		case 3:
			return -1584,333f, 5193,487f, 2,95912f;
			break;
		
		case 0:
			return 408,3429f, -1623,836f, 28,29278f;
			break;
		
		case 8:
			return -1339,489f, -21,19435f, 50,34566f;
			break;
		
		case 5:
			return 336,207f, 172,4251f, 102,2055f;
			break;
		
		case 6:
			return 394,5495f, -703,3795f, 28,27281f;
			break;
		
		case 7:
			return -1413,184f, -206,0555f, 46,29474f;
			break;
		
		case 11:
			return -560,3809f, 274,5476f, 82,02014f;
			break;
		
		case 12:
			return 221,0845f, 340,7849f, 104,5883f;
			break;
		
		case 13:
			return -296,7154f, 6259,732f, 30,49339f;
			break;
		
		case 14:
			return -2201,402f, 4291f, 47,32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_112676.f_20;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar0]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar0]))
		{
			switch (uLocal_220[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_209 = 0;
						uLocal_220[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar1]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_220[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_220[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0x23B29877D0BE9547(uLocal_219[iVar0], &iVar3, 1);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0x66B90BA528CFEBCE(uLocal_219[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x3C0F448853B71C92(uLocal_219[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						unk_0xB41DEC3AAC1AA107(uLocal_219[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_220[iVar0])
			{
				case 0:
					func_39(uLocal_219[iVar0], Local_35[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_38(uLocal_219[iVar0], joaat("script_task_combat"), 1))
					{
						unk_0x62A5310368A20EFA(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_38(uLocal_219[iVar0], joaat("script_task_smart_flee_ped"), 1))
					{
						unk_0xD844F5E50DAB6FF7(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_209)
	{
		case 0:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar4]))
				{
					func_34(uLocal_219[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_44, &cLocal_211, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar4]))
				{
					func_34(uLocal_219[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x1DD05E817C89C737() - iLocal_210) > 3000) && !unk_0x912159A05BE6B52E(unk_0x4A8C381C258A124D()))
			{
				func_34(unk_0x4A8C381C258A124D(), "BLIND_RAGE", 10);
				iLocal_209++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x1DD05E817C89C737() - iLocal_210) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar4]))
				{
					if (uLocal_220[iVar4] == 2)
					{
						func_34(uLocal_219[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_209 = (iLocal_209 - 1);
					}
					else
					{
						func_34(uLocal_219[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_209 = (iLocal_209 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x259BE71D8A81D4FA()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

int func_19()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
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

void func_21()
{
	if (func_28(14))
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
		Global_20930 = func_22();
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

int func_22()
{
	func_23();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_26(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_25(unk_0x4A8C381C258A124D());
			if (func_24(iVar0) && (!func_28(14) || Global_112917))
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

bool func_28(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_33(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_34(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_35(iParam2), 1);
}

int func_35(int iParam0)
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

int func_36()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar1]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar1]))
		{
			fVar3 = func_5(uLocal_219[iVar1], unk_0x4A8C381C258A124D(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_37()
{
	if (func_53())
	{
		return 0;
	}
	if (unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 0;
		}
	}
	return 1;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x9B5C1660CCDF7189(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_39(int iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
	if (!func_42(Param1))
	{
		unk_0x23B29877D0BE9547(iParam0, &iVar1, 1);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0x3C0F448853B71C92(iParam0, joaat("weapon_molotov"), 1);
			}
			if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 0)
			{
				unk_0xB5396F1FB088FE38(&uVar2);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1000, 6000));
				unk_0x1BFCFCC8F6D798A6(0, func_40(Param1, 1f), 0, 0);
				unk_0xC58DD79B4CA8487F(uVar2, 1);
				unk_0x93C0674FC00824D0(uVar2);
				unk_0x4BD42B0527065BB6(iParam0, uVar2);
				unk_0xD0557B139A542F12(&uVar2);
			}
		}
		else if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_shoot_at_coord")) != 1 && unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_shoot_at_coord")) != 0)
		{
			unk_0x6C4E9ADFB1521AAC(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_stand_still")) != 1 && unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_stand_still")) != 0)
	{
		unk_0x0FD8B5F4BB15CD71(iParam0, -1);
	}
}

Vector3 func_40(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f) };
	return Param0 + func_41(Var0, unk_0xD2AA6F822D3A55D2(0f, fParam1));
}

Vector3 func_41(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_42(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0xFC8BFE4B41177C22(uLocal_219[iVar0]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar0])) && uLocal_220[iVar0] > 0)
		{
			iLocal_217 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_112676.f_35, 134217728) || unk_0x7E54CB377175F94E(uLocal_219[iParam0], unk_0x4A8C381C258A124D())) || unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), uLocal_219[iParam0])) || unk_0xF76AF9D45D6BDA45(uLocal_219[iParam0])) || unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f, 1)) || unk_0xA646A9FF47E2E515(unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f, 1, 1)) || unk_0x8764A5B95AE1F967(21, unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f)) || unk_0x8764A5B95AE1F967(10, unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f)) || unk_0x8764A5B95AE1F967(7, unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f)) || unk_0x8764A5B95AE1F967(0, unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f)) || unk_0x8764A5B95AE1F967(1, unk_0xD1A6A821F5AC81DB(uLocal_219[iParam0], 1), 15f)) || iLocal_217)
	{
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45()
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	char cVar3[24];
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar13[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_218[iVar0]) && unk_0xD9F5E1FEFD1329E4(uLocal_218[iVar0], 0))
		{
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar2]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar2]))
				{
					if (Local_35[iVar2 /*10*/].f_8 != -1 && Local_35[iVar2 /*10*/].f_8 == iVar0)
					{
						if (!unk_0xCECDBB848D53DEB2(uLocal_219[iVar2], uLocal_218[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar2++;
			}
		}
		StringCopy(&cVar3, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar3, iVar0, 24);
		StringConCat(&cVar3, "]: ", 24);
		StringIntConCat(&cVar3, uVar1[iVar0], 24);
		unk_0xBBB7593C7244A846(&cVar3, 0,05f, (0,25f + (IntToFloat(iVar0) * 0,025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar0]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar0]))
		{
			switch (uLocal_220[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_209 = 0;
						uLocal_220[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_35[iVar0 /*10*/].f_8 == -1)
					{
						if (!unk_0x49F8918E2DC5FFBC(uLocal_219[iVar0], 286, 1))
						{
							unk_0x0428AFDCAA63B06E(uLocal_219[iVar0], 286, 1);
						}
					}
					else
					{
						bVar5 = false;
						if (unk_0x7F420695E3F776FB(uLocal_219[iVar0], 0))
						{
							iVar6 = unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0);
							iVar4 = 0;
							while (iVar4 <= 1)
							{
								if (!bVar5)
								{
									if (uLocal_218[iVar4] == iVar6)
									{
										if (uVar1[iVar4] == 0)
										{
											bVar5 = true;
										}
									}
								}
								iVar4++;
							}
							if (bVar5)
							{
								if (iLocal_213 == -1 && func_46(uLocal_219[iVar0], 0) == -1)
								{
									iLocal_213 = iVar0;
								}
								uLocal_220[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_213 != -1)
					{
						iLocal_214 = iLocal_213;
						if (unk_0xFC8BFE4B41177C22(uLocal_219[iLocal_213]))
						{
							if (unk_0x7F420695E3F776FB(uLocal_219[iLocal_213], 0))
							{
								uVar7 = unk_0x6EF03BE64E058E2F(uLocal_219[iLocal_213], 0);
							}
						}
					}
					if ((((((((iLocal_213 == -1 || !unk_0xFC8BFE4B41177C22(uLocal_219[iLocal_213])) || unk_0x4FAFF4BCB7633475(uLocal_219[iLocal_213])) || !unk_0xFC8BFE4B41177C22(uVar7)) || !unk_0xD9F5E1FEFD1329E4(iVar7, 0)) || unk_0x548F6F43A7CB6F45(iVar7, 0, 1)) || unk_0x548F6F43A7CB6F45(iVar7, 1, 1)) || unk_0x548F6F43A7CB6F45(iVar7, 4, 1)) || unk_0x548F6F43A7CB6F45(iVar7, 5, 1))
					{
						iVar8 = -1;
						bVar9 = false;
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar4]) && !unk_0x4FAFF4BCB7633475(uLocal_219[iVar4]))
							{
								if (func_46(uLocal_219[iVar4], 0) == -1)
								{
									if (iVar8 == -1 || !bVar9)
									{
										bVar9 = true;
										iVar8 = iVar4;
									}
								}
								else if (!bVar9)
								{
									iVar8 = iVar4;
								}
							}
							iVar4++;
						}
						if (iVar8 != -1)
						{
							iLocal_213 = iVar8;
						}
					}
					break;
			}
			if (uLocal_220[iVar0] > 0)
			{
				iVar10 = 0;
				unk_0x23B29877D0BE9547(uLocal_219[iVar0], &iVar10, 1);
				if (iVar10 == joaat("weapon_molotov"))
				{
					if (unk_0x66B90BA528CFEBCE(uLocal_219[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x3C0F448853B71C92(uLocal_219[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						unk_0xB41DEC3AAC1AA107(uLocal_219[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_220[iVar0])
			{
				case 0:
					func_39(uLocal_219[iVar0], Local_35[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_35[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_38(uLocal_219[iVar0], joaat("script_task_combat"), 1))
						{
							unk_0x62A5310368A20EFA(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
						}
					}
					else if (uLocal_218[Local_35[iVar0 /*10*/].f_8] == 0 || Local_35[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!unk_0xCECDBB848D53DEB2(uLocal_219[iVar0], uLocal_218[Local_35[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_219[iVar0], uLocal_218[Local_35[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_38(uLocal_219[iVar0], joaat("script_task_combat"), 1))
							{
								unk_0x06AA75009161058B(uLocal_219[iVar0], uLocal_218[Local_35[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								unk_0x62A5310368A20EFA(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
							}
						}
						else if (!func_38(uLocal_219[iVar0], joaat("script_task_enter_vehicle"), 1))
						{
							unk_0xEBA229B2E0BB05E0(uLocal_219[iVar0], uLocal_218[Local_35[iVar0 /*10*/].f_8], -1, Local_35[iVar0 /*10*/].f_9, 2f, 1, 0, 0);
						}
						if (!unk_0xD9F5E1FEFD1329E4(uLocal_218[Local_35[iVar0 /*10*/].f_8], 0))
						{
							if (!func_38(uLocal_219[iVar0], joaat("script_task_combat"), 1))
							{
								unk_0x62A5310368A20EFA(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
							}
						}
					}
					else if (!func_38(uLocal_219[iVar0], joaat("script_task_vehicle_shoot_at_entity"), 1))
					{
						unk_0x0ADB09C3437C4CCD(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 1101004800);
					}
					break;
				
				case 2:
					if (unk_0x7F420695E3F776FB(uLocal_219[iVar0], 0))
					{
						if (iLocal_213 == iVar0)
						{
							if (func_46(uLocal_219[iVar0], 0) != -1)
							{
								if (!func_38(uLocal_219[iVar0], joaat("script_task_shuffle_to_next_vehicle_seat"), 1))
								{
									unk_0x7A55A25242FBE562(uLocal_219[iVar0], unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_219[iVar0], joaat("script_task_vehicle_mission"), 1) || iLocal_213 != iLocal_214)
							{
								unk_0x13DE13EA38996410(uLocal_219[iVar0], unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0), unk_0x4A8C381C258A124D(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (unk_0x9B5C1660CCDF7189(uLocal_219[iVar0], joaat("script_task_vehicle_mission")) == 1)
							{
								if (!unk_0x10BAD2FED582B598(uLocal_219[iVar0]))
								{
									unk_0xD83588CA24829967(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_46(uLocal_219[iVar0], 0) == -1)
						{
							if (!func_38(uLocal_219[iVar0], joaat("script_task_vehicle_mission"), 1) || iLocal_213 != iLocal_214)
							{
								unk_0x6AA87C4ADF4A6BFF(uLocal_219[iVar0], unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0), unk_0x6EF03BE64E058E2F(uLocal_219[iLocal_213], 0), -1, 40f, 786468, -1082130432, 20, 1101004800);
							}
							else if (unk_0x9B5C1660CCDF7189(uLocal_219[iVar0], joaat("script_task_vehicle_mission")) == 1)
							{
								if (!unk_0x10BAD2FED582B598(uLocal_219[iVar0]))
								{
									unk_0xD83588CA24829967(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar11 = unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0), -1, 0);
							if (!unk_0xFC8BFE4B41177C22(iVar11) || unk_0x4FAFF4BCB7633475(iVar11))
							{
								if (!func_38(uLocal_219[iVar0], joaat("script_task_shuffle_to_next_vehicle_seat"), 1))
								{
									unk_0x7A55A25242FBE562(uLocal_219[iVar0], unk_0x6EF03BE64E058E2F(uLocal_219[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_219[iVar0], joaat("script_task_drive_by"), 1) || iLocal_213 != iLocal_214)
							{
								unk_0xD83588CA24829967(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_209)
	{
		case 0:
			if (func_37())
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar12]))
				{
					func_34(uLocal_219[iVar12], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar13 = { func_33("START") };
				if (func_10(&uLocal_44, &cLocal_211, &cVar13, 8, 0, 0, 0))
				{
					StringCopy(&cVar13, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar12]))
				{
					func_34(uLocal_219[iVar12], "SHOUT_THREATEN", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_209++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x1DD05E817C89C737() - iLocal_210) > 3000) && !unk_0x912159A05BE6B52E(unk_0x4A8C381C258A124D()))
			{
				func_34(unk_0x4A8C381C258A124D(), "BLIND_RAGE", 10);
				iLocal_209++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x1DD05E817C89C737() - iLocal_210) > 1000)
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !unk_0x912159A05BE6B52E(uLocal_219[iVar12]))
				{
					if (unk_0x7F420695E3F776FB(uLocal_219[iVar12], 0))
					{
						func_34(uLocal_219[iVar12], "GENERIC_INSULT", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_209 = (iLocal_209 - 1);
					}
					else
					{
						func_34(uLocal_219[iVar12], "SHOUT_THREATEN", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_209 = (iLocal_209 - 1);
					}
				}
			}
			break;
	}
}

int func_46(int iParam0, int iParam1)
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

void func_47()
{
	func_62(1);
	func_61();
}

void func_48(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(cParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

var func_49(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_50(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		unk_0x25DBF9F9C6BDFFEA(iParam0, fParam1);
		unk_0xAF30637CFE0F3A89(iParam0, fParam2);
		unk_0xA6102F762BBA9BC9(iParam0, (fParam3 / 2f));
		unk_0x3C7306C2CE967C57(iParam0, fParam4);
		unk_0xC8DEC2468E748263(iParam0, fParam5);
		unk_0xC45887CFF81A1950(iParam0, iParam6);
		unk_0xC3AD0E1324FB3465(iParam0, 10, iParam7);
	}
}

int func_53()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	
	switch (func_22())
	{
		case 0:
			func_60(&uLocal_44, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_60(&uLocal_44, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_60(&uLocal_44, 2, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
			break;
	}
	unk_0x425BBE19F25A57AB(0,1f);
	unk_0xCC1C92F7E1A3CE9D(3, 0);
	unk_0xD682DD0578BF5392(0);
	iLocal_43 = func_58();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_57(&(Local_35[0 /*10*/]), func_8(), 0);
	func_57(&(Local_35[1 /*10*/]), func_8(), 1);
	func_57(&(Local_35[2 /*10*/]), func_8(), 2);
	func_57(&(Local_35[3 /*10*/]), func_8(), 3);
	func_57(&(Local_35[4 /*10*/]), func_8(), 4);
	func_57(&(Local_35[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_35.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_35.f_65), func_55(iVar0), 16);
	unk_0x06CD913C241C765E("relGang", &iLocal_222);
	unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_222);
	unk_0xD414C47AFF81382A(5, iLocal_222, joaat("player"));
	unk_0xD414C47AFF81382A(5, iLocal_222, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			unk_0xD414C47AFF81382A(5, joaat("player"), 296331235);
			unk_0xD414C47AFF81382A(1, iLocal_222, 296331235);
			unk_0xD414C47AFF81382A(1, 296331235, iLocal_222);
			break;
		
		case 1:
			unk_0xD414C47AFF81382A(5, joaat("player"), -1033021910);
			unk_0xD414C47AFF81382A(1, iLocal_222, -1033021910);
			unk_0xD414C47AFF81382A(1, -1033021910, iLocal_222);
			break;
		
		case 2:
			unk_0xD414C47AFF81382A(5, joaat("player"), 1782292358);
			unk_0xD414C47AFF81382A(1, iLocal_222, 1782292358);
			unk_0xD414C47AFF81382A(1, 1782292358, iLocal_222);
			break;
	}
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543,6415f, 303,5388f, 82,0202f };
					uParam0->f_3 = 231,5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563,5045f, 303,3635f, 82,192f };
					uParam0->f_3 = 191,6703f;
					uParam0->f_4 = { -561,9358f, 293,7914f, 84,1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547,9926f, 299,531f, 82,0218f };
					uParam0->f_3 = 170,2791f;
					uParam0->f_4 = { -550,0999f, 292,7203f, 87,8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551,7525f, 301,2135f, 82,1226f };
					uParam0->f_3 = 132,7229f;
					uParam0->f_4 = { -561,2323f, 294,0457f, 87,6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549,7384f, 303,0894f, 82,0981f };
					uParam0->f_3 = 167,5811f;
					uParam0->f_4 = { -552,8337f, 292,7388f, 88,2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558,4697f, 303,0401f, 82,2333f };
					uParam0->f_3 = 161,0839f;
					uParam0->f_4 = { -561,9985f, 293,9765f, 87,8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231,2834f, 345,2137f, 104,3893f };
					uParam0->f_3 = 324,6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236,5094f, 339,3164f, 104,5298f };
					uParam0->f_3 = 112,7911f;
					uParam0->f_4 = { 230,1282f, 337,069f, 106,8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224,3295f, 348,2992f, 104,4469f };
					uParam0->f_3 = 165,7146f;
					uParam0->f_4 = { 221,6486f, 340,3152f, 106,6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234,1038f, 341,6698f, 104,5309f };
					uParam0->f_3 = 110,0142f;
					uParam0->f_4 = { 223,9347f, 338,3914f, 106,8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228,9968f, 344,3681f, 104,5384f };
					uParam0->f_3 = 153,6073f;
					uParam0->f_4 = { 224,4416f, 336,0886f, 106,1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221,382f, 346,3744f, 104,5675f };
					uParam0->f_3 = 165,8422f;
					uParam0->f_4 = { 219,6116f, 340,9911f, 106,4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325,1079f, 6263,833f, 30,4151f };
					uParam0->f_3 = 195,9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312,9843f, 6250,115f, 30,4899f };
					uParam0->f_3 = 319,1074f;
					uParam0->f_4 = { -308,3476f, 6254,857f, 32,6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326,1756f, 6268,338f, 30,4714f };
					uParam0->f_3 = 261,9836f;
					uParam0->f_4 = { -312,8552f, 6265,857f, 43,5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323,9344f, 6259,659f, 30,3539f };
					uParam0->f_3 = 292,4941f;
					uParam0->f_4 = { -313,3472f, 6263,395f, 42,7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318,7812f, 6259,576f, 30,5161f };
					uParam0->f_3 = 295,0701f;
					uParam0->f_4 = { -313,766f, 6261,479f, 32,6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314,925f, 6255,542f, 30,5164f };
					uParam0->f_3 = 309,7791f;
					uParam0->f_4 = { -310,572f, 6258,45f, 32,6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215,32f, 4275,046f, 46,475f };
					uParam0->f_3 = 16,955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195,425f, 4262,31f, 47,2741f };
					uParam0->f_3 = 241,4366f;
					uParam0->f_4 = { -2185,362f, 4256,376f, 48,4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200,848f, 4268,19f, 47,3093f };
					uParam0->f_3 = 331,1949f;
					uParam0->f_4 = { -2196,575f, 4275,129f, 49,0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202,818f, 4294,149f, 47,4518f };
					uParam0->f_3 = 263,7257f;
					uParam0->f_4 = { -2192,783f, 4289,572f, 50,3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196,271f, 4265,064f, 47,3446f };
					uParam0->f_3 = 325,4524f;
					uParam0->f_4 = { -2191,183f, 4271,747f, 49,867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204,492f, 4290,059f, 47,3773f };
					uParam0->f_3 = 269,5739f;
					uParam0->f_4 = { -2193,017f, 4292,669f, 54,873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_58()
{
	return func_59(Global_112676.f_20, Global_112676.f_29);
}

int func_59(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_219[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uLocal_219[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0xD844F5E50DAB6FF7(uLocal_219[iVar0], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 1);
			}
			unk_0xF09E30AF1B8FB379(&(uLocal_219[iVar0]));
		}
		if (unk_0xC450B06E5AAA0985(uLocal_221[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_221[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_218[iVar0]))
		{
			unk_0x68298CA6191CDFDB(&(uLocal_218[iVar0]));
		}
		iVar0++;
	}
	unk_0xA1F44380A2D59F2B(iLocal_223, 0);
	unk_0xCCA6D8A84EE8C88A(iLocal_224, 0);
	unk_0x425BBE19F25A57AB(1f);
	unk_0xCC1C92F7E1A3CE9D(3, 1);
	unk_0xD682DD0578BF5392(1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_62(int iParam0)
{
	Global_112676.f_22 = iParam0;
}

