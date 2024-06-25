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
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_44 = 0f;
	struct<3> Local_45 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	struct<3> Local_47 = { 0, 0, 0 } ;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 16;
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
	fLocal_39 = 50f;
	fLocal_40 = 2500f;
	Local_41 = { 409,1539f, -1626,677f, 28,2928f };
	Local_43 = { 409,2747f, -1623,022f, 28,29278f };
	fLocal_44 = 202,6928f;
	Local_45 = { 415,6071f, -1647,604f, 28,2928f };
	fLocal_46 = 85,7173f;
	if (unk_0x96CFB880BAC634CE(18))
	{
		func_33();
	}
	if (unk_0x486FF5D06E9659F1(joaat("ambient_tonyacall")) > 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA());
		if (func_32(0, 14))
		{
			func_33();
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			Local_42 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
		if (system::vdist2(Local_42, Local_41) > fLocal_40)
		{
			func_33();
		}
		switch (iLocal_35)
		{
			case 0:
				if (func_28())
				{
					if (func_5(&uLocal_51, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_35 = 1;
					}
				}
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x80813AC549A1E8AE("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x80813AC549A1E8AE("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x80813AC549A1E8AE("amb@world_human_smoking@female@enter");
				unk_0x80813AC549A1E8AE("amb@world_human_smoking@female@idle_a");
				unk_0xEC9DAA34BBB4658C(joaat("prop_phone_ing"));
				if (((((unk_0x6252BC0DD8A320DB(joaat("prop_phone_ing")) && unk_0xE100DD4F82A51BDE("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xE100DD4F82A51BDE("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xE100DD4F82A51BDE("amb@world_human_stand_mobile@female@standing@call@exit")) && unk_0xE100DD4F82A51BDE("amb@world_human_smoking@female@enter")) && unk_0xE100DD4F82A51BDE("amb@world_human_smoking@female@idle_a"))
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_35 = 3;
				}
				break;
			
			case 3:
				func_33();
				break;
		}
		system::wait(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uLocal_36, 1) };
	}
	else
	{
		Var1 = { 408,5002f, -1624,583f, 29,2928f };
	}
	if ((system::vdist2(Var0, Var1) > 10000f || unk_0x1C2F771CDC87A3A5(uLocal_36, 0)) || func_4())
	{
		if (system::vdist2(Var0, Var1) > 10000f)
		{
		}
		if (unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
		{
		}
		if (func_4())
		{
		}
		return 1;
	}
	switch (iLocal_38)
	{
		case 0:
			if (unk_0xFC8BFE4B41177C22(uLocal_36) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
			{
				if (unk_0x65FFA94B82A71741(uLocal_36, Local_47, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0xD0557B139A542F12(&uVar2);
					unk_0xB5396F1FB088FE38(&uVar2);
					unk_0x2280392018BC0DD3(0, fLocal_48, 0);
					unk_0x10425721983AE158(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uVar2);
					unk_0x4BD42B0527065BB6(uLocal_36, uVar2);
					unk_0xD0557B139A542F12(&uVar2);
					iLocal_38 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(uLocal_36) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
			{
				if (unk_0x89EC60A4485FD199(uLocal_36) == 1)
				{
					if (!unk_0xFC8BFE4B41177C22(uLocal_37))
					{
						if (unk_0x13CCB1AD131C1082(uLocal_36, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar3 = unk_0x82E64DE58A6B84A8(uLocal_36, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar3 >= 0,157f)
							{
								uLocal_37 = unk_0x4E55EAB577C13329(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x4D306DD94DD6FDBA(uLocal_37, uLocal_36, unk_0x72F7E39FB49FC0BA(uLocal_36, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
							}
						}
					}
				}
				else if (unk_0x89EC60A4485FD199(uLocal_36) == 2)
				{
					iVar4 = (unk_0xC5935DFB3F39785A(0, 65535) % 2);
					if (iVar4 == 0)
					{
						if (func_5(&uLocal_51, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_38 = 2;
						}
					}
					else if (func_5(&uLocal_51, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_38 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
			{
				if (!func_3())
				{
					unk_0xD0557B139A542F12(&uVar2);
					unk_0xB5396F1FB088FE38(&uVar2);
					unk_0x10425721983AE158(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x93C0674FC00824D0(uVar2);
					unk_0x4BD42B0527065BB6(uLocal_36, uVar2);
					unk_0xD0557B139A542F12(&uVar2);
					iLocal_38 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (system::vdist2(Var0, Var1) < 25f)
			{
				if (unk_0xBCF87EE3DC296C2A(0) != 4)
				{
					if (func_5(&uLocal_51, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
					{
						system::settimera(0);
						iLocal_38 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (system::timera() > 10000)
			{
				iLocal_38 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0xFC8BFE4B41177C22(uLocal_36) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
	{
		if (unk_0x89EC60A4485FD199(uLocal_36) == 1)
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_37))
			{
				unk_0x51C8BEA2005931AB(&uLocal_37);
				unk_0xE67051907958B5EB(uLocal_36, unk_0x4A8C381C258A124D(), -1, 0, 2);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_36) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_37))
		{
			if (unk_0x9B5C1660CCDF7189(uLocal_36, joaat("script_task_start_scenario_in_place")) == 1)
			{
				unk_0x51C8BEA2005931AB(&uLocal_37);
			}
		}
	}
}

int func_3()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
	{
		if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uLocal_36) || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_37))
			{
				unk_0x837D67618BF89034(uLocal_37, 1, 1);
			}
			unk_0x0F15249D24BC5ADA(0);
			if (unk_0x9B5C1660CCDF7189(uLocal_36, joaat("script_task_smart_flee_ped")) != 1)
			{
				unk_0x44FB298D6382876D(uLocal_36, 1);
				unk_0xD844F5E50DAB6FF7(uLocal_36, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_24();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_12();
		func_7();
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
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

int func_8()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x259BE71D8A81D4FA()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
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
		Global_20930 = func_17();
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

var func_17()
{
	func_18();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_21(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_20(unk_0x4A8C381C258A124D());
			if (func_19(iVar0) && (!func_23(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_19(Global_113969.f_2366.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_24()
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

bool func_25(int iParam0, int iParam1)
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

void func_26()
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_28()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	unk_0x02E029D1D9614563(Var0, fLocal_39, 1, 1, &uVar1, 0, 1, -1);
	if (unk_0xFC8BFE4B41177C22(uVar1) && !unk_0x1C2F771CDC87A3A5(uVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(uVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			uLocal_36 = uVar1;
			unk_0xEE0BCDB1B5E36BCB(uLocal_36, 1, 0);
			unk_0x886FA295C1257AAA(uLocal_36, 0);
			unk_0x3F58BFCF656F0DF1(uLocal_36, 0);
			unk_0xEB418CA245FFE897(uLocal_36, "TONYA");
			unk_0x3CEA1FD137ACE2D9(uLocal_36, joaat("player"));
			func_31(&uLocal_51, 3, uLocal_36, "TONYA", 1, 1);
			func_30();
			if (!func_29(Local_47))
			{
				if (unk_0x9B5C1660CCDF7189(uLocal_36, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					unk_0xA966E518B752B92A(uLocal_36, Local_47, 1f, -1, 0,25f, 0, fLocal_48);
					unk_0x44FB298D6382876D(uLocal_36, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	struct<3> Var0;
	
	if (unk_0xFC8BFE4B41177C22(uLocal_36) && !unk_0x1C2F771CDC87A3A5(uLocal_36, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_36, 1) };
		if (func_29(Local_47))
		{
			fLocal_49 = system::vdist(Var0, Local_43);
			fLocal_50 = system::vdist(Var0, Local_45);
			if (fLocal_49 < fLocal_50)
			{
				Local_47 = { Local_43 };
				fLocal_48 = fLocal_44;
			}
			else
			{
				Local_47 = { Local_45 };
				fLocal_48 = fLocal_46;
			}
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 407,4285f, -1626,572f, 27,29278f, 412,8245f, -1620,167f, 33,29278f, 6f, 0, 1, 0))
				{
					Local_47 = { Local_45 };
					fLocal_48 = fLocal_46;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

int func_32(int iParam0, int iParam1)
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

void func_33()
{
	unk_0x268BE77F77533D03("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x268BE77F77533D03("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x268BE77F77533D03("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x268BE77F77533D03("amb@world_human_smoking@female@enter");
	unk_0x268BE77F77533D03("amb@world_human_smoking@female@idle_a");
	unk_0x55098D9E9AD58806(joaat("prop_phone_ing"));
	if (unk_0xFC8BFE4B41177C22(uLocal_36))
	{
		if (unk_0xF6C26AE940C14749(uLocal_36))
		{
			unk_0x734A9F4537A31459(&uLocal_36);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(&uLocal_36);
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

