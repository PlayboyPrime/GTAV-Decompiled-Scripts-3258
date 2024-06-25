#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
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
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	char* sLocal_77 = NULL;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	struct<10> Local_100[16];
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char[] cLocal_112[8] = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	int iLocal_130 = 0;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 1000;
	var uLocal_146 = 1000;
	var uLocal_147 = 0;
	bool bLocal_148 = 0;
	struct<18> Local_149 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_50 = 10f;
	fLocal_51 = 7f;
	iLocal_52 = 1;
	sLocal_78 = "random@car_thief@waving_ig_1";
	fLocal_97 = 1f;
	iLocal_117 = 786603;
	iLocal_118 = 786469;
	sLocal_125 = "car_returned_peyote";
	sLocal_126 = "girl_car_returned";
	sLocal_127 = "player_car_returned";
	Local_48 = { ScriptParam_149.f_1[0 /*3*/] };
	uLocal_49 = ScriptParam_149.f_17[0];
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_240();
	}
	func_239();
	if (bLocal_119 == 2)
	{
		if (func_238(34))
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				if (Var0.f_2 > 23f || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -743,3924f, -2129,82f, 12,07619f, -708,892f, -2160,705f, 19,7035f, 124,5f, 0, 1, 0))
				{
					unk_0xBBC29EBE6E1A48FA();
				}
			}
		}
	}
	if (func_197(Local_48, 17, bLocal_119, 0, 0))
	{
		func_194(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		system::wait(0);
		func_193();
		func_192(uLocal_57, &uLocal_60);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0xCD0F6D8C76DD22A7(unk_0x259BE71D8A81D4FA());
		}
		func_191();
		if (!func_190())
		{
			if (func_189())
			{
				func_240();
			}
			if (unk_0x173751E886F8E9AB())
			{
				switch (iLocal_44)
				{
					case 0:
						if (func_172())
						{
							unk_0xD682DD0578BF5392(0);
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x4FAFF4BCB7633475(iLocal_70))
						{
							if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x4FAFF4BCB7633475(iLocal_69)) && func_171(iLocal_71)) && !func_170(0))
							{
								if (func_169())
								{
									if (func_171(iLocal_74))
									{
										unk_0x439C904840715871(iLocal_74, 0);
									}
									func_160(1);
									unk_0x425BBE19F25A57AB(0,1f);
									func_155(39, 1);
									func_155(40, 1);
									func_155(41, 1);
									func_155(42, 1);
									func_155(43, 1);
									func_155(44, 1);
									system::settimera(0);
								}
							}
							else
							{
								if (!unk_0x4FAFF4BCB7633475(iLocal_69))
								{
									unk_0xD844F5E50DAB6FF7(iLocal_69, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
									unk_0x44FB298D6382876D(iLocal_69, 1);
									system::wait(0);
								}
								func_240();
							}
						}
						else
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_69) && func_171(iLocal_71))
							{
								unk_0x7C8E9DE09D4AD3FF(iLocal_69, iLocal_71, 20f, iLocal_117);
								unk_0x44FB298D6382876D(iLocal_69, 1);
								system::wait(0);
							}
							func_123(0);
						}
						break;
				}
			}
			else
			{
				func_240();
			}
		}
		else
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_70))
			{
				if (Local_100[2 /*10*/].f_7)
				{
					func_122(&Local_100, 2);
				}
			}
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
			func_114();
			if (func_171(iLocal_71) && !func_113())
			{
				if (func_111())
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_69))
					{
						switch (iLocal_45)
						{
							case 0:
								if (!unk_0x4FAFF4BCB7633475(iLocal_70))
								{
									if (unk_0xCECDBB848D53DEB2(iLocal_70, iLocal_71, 0))
									{
										if (bLocal_119 == 2)
										{
											unk_0x788F35D395511DFE(iLocal_70, 1, 1);
											unk_0x788F35D395511DFE(iLocal_71, 1, 1);
											unk_0xB5396F1FB088FE38(&uLocal_72);
											unk_0x13DE13EA38996410(0, iLocal_71, unk_0x4A8C381C258A124D(), 8, 30f, iLocal_118, 200f, 10f, 0);
											unk_0x93C0674FC00824D0(uLocal_72);
											unk_0x4BD42B0527065BB6(iLocal_70, uLocal_72);
											unk_0xD0557B139A542F12(&uLocal_72);
										}
										else
										{
											unk_0x788F35D395511DFE(iLocal_70, 1, 1);
											unk_0xB5396F1FB088FE38(&uLocal_72);
											unk_0xFCCE667AD0E974AD(0, iLocal_71, 30, 1000);
											unk_0x13DE13EA38996410(0, iLocal_71, unk_0x4A8C381C258A124D(), 8, 40f, iLocal_118, 200f, 10f, 1);
											unk_0x93C0674FC00824D0(uLocal_72);
											unk_0x4BD42B0527065BB6(iLocal_70, uLocal_72);
											unk_0xD0557B139A542F12(&uLocal_72);
										}
										Local_131 = { unk_0x75DF72FC74EED046(iLocal_71, unk_0x365DC1E8054AF31A(iLocal_71, "wheel_lr")) };
										Local_132 = { unk_0xAD8278DAEC2CC059(iLocal_71, Local_131) };
										unk_0xDD19F75405614D3C("scr_wheel_burnout", iLocal_71, Local_132 + Vector(-0,5f, -1f, 0f), 0f, 180f, 0f, 0,25f, 0, 0, 0);
										Local_133 = { unk_0x75DF72FC74EED046(iLocal_71, unk_0x365DC1E8054AF31A(iLocal_71, "wheel_rr")) };
										Local_134 = { unk_0xAD8278DAEC2CC059(iLocal_71, Local_133) };
										unk_0xDD19F75405614D3C("scr_wheel_burnout", iLocal_71, Local_134 + Vector(-0,5f, -1f, 0f), 0f, 180f, 0f, 0,25f, 0, 0, 0);
										system::settimera(0);
										if (!unk_0xC450B06E5AAA0985(uLocal_58))
										{
											uLocal_58 = func_109(iLocal_71, 1, 0);
										}
										unk_0xF6ECB54A7941386F(2);
										iLocal_45 = 1;
									}
									else if (unk_0x9B3D4335E0EDB0BE(iLocal_71, unk_0x4A8C381C258A124D(), 1))
									{
										if (!unk_0x4FAFF4BCB7633475(iLocal_70))
										{
											unk_0xD844F5E50DAB6FF7(iLocal_70, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
											unk_0x44FB298D6382876D(iLocal_70, 1);
											system::wait(0);
										}
										func_240();
									}
								}
								else
								{
									unk_0x7C8E9DE09D4AD3FF(iLocal_69, iLocal_71, 20f, iLocal_117);
									unk_0x44FB298D6382876D(iLocal_69, 1);
									system::wait(0);
									func_123(0);
								}
								break;
							
							case 1:
								if (func_171(iLocal_71))
								{
									if (bLocal_119 == 1)
									{
										if (system::timera() < 5000)
										{
											if (system::timera() > 2000)
											{
												fLocal_97 = (fLocal_97 + 0,4f);
											}
											else
											{
												fLocal_97 = (fLocal_97 + 0,2f);
											}
											if (fLocal_97 > 30f)
											{
												fLocal_97 = 30f;
											}
											unk_0x93C337B66C95C99B(iLocal_71, fLocal_97);
											iVar1 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(iLocal_71, 1), 5f, 0, 4);
											if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
											{
												if (func_171(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
												{
													if (unk_0x685171EED42BC4DF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iLocal_71))
													{
														system::settimera(5000);
													}
												}
												if (func_171(iVar1))
												{
													if (iVar1 != iLocal_71)
													{
														if (unk_0x685171EED42BC4DF(iVar1, iLocal_71))
														{
															system::settimera(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x31B58D7972181BFA(iLocal_71) < 700f)
									{
										func_240();
									}
								}
								func_79();
								if ((((((func_78() || func_77()) || unk_0xD1F1A906BA9226BE(iLocal_71)) || unk_0xA24B9FF9863A909D(iLocal_71, 1, 5000)) || unk_0x5B702A5D1F2635BE(iLocal_71)) || unk_0x4FAFF4BCB7633475(iLocal_70)) || !unk_0xCECDBB848D53DEB2(iLocal_70, iLocal_71, 0))
								{
									if (unk_0xBC2EE32DE886BD08("RE_CAR_STEAL_SCENE"))
									{
										if (func_171(iLocal_71))
										{
											unk_0x001B008A010F2FE6(iLocal_71, 0);
										}
										unk_0xB43467C43086A6A1("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xC450B06E5AAA0985(uLocal_58))
									{
										unk_0xFE54B8568B2ABD12(&uLocal_58);
									}
									func_76();
									if (unk_0xC450B06E5AAA0985(uLocal_57))
									{
										unk_0xFE54B8568B2ABD12(&uLocal_57);
									}
									unk_0xE4DC7B3DD712372B(iLocal_69);
									unk_0xE5EE5C9DDF05D925(iLocal_71, 50f, 5, 0);
									uLocal_59 = func_109(iLocal_71, 0, 0);
									fLocal_91 = system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_71, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
									fLocal_89 = system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_71, 1), unk_0xD1A6A821F5AC81DB(iLocal_69, 1));
									fLocal_90 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_69, 1));
									func_74(&uLocal_136, 0, 0);
									iLocal_45 = 2;
								}
								break;
							
							case 2:
								if (func_171(iLocal_71))
								{
									if (unk_0x31B58D7972181BFA(iLocal_71) < 700f)
									{
										func_240();
									}
								}
								if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
								{
									func_240();
								}
								if (!unk_0x1C2F771CDC87A3A5(iLocal_70, 0))
								{
									if (!unk_0xCECDBB848D53DEB2(iLocal_70, iLocal_71, 0))
									{
										func_73(iLocal_70, &uLocal_61, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
									}
								}
								else
								{
									func_72(&uLocal_61);
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_70))
								{
									if (!unk_0x1B32E388988DD296(iLocal_70, unk_0x4A8C381C258A124D()))
									{
										unk_0x62A5310368A20EFA(iLocal_70, unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
									}
								}
								if ((system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_71, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > (fLocal_91 + 220f) || system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_71, 1), unk_0xD1A6A821F5AC81DB(iLocal_69, 1)) > (fLocal_89 + 220f)) || system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_69, 1)) > (fLocal_90 + 220f))
								{
									if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_71, 0))
									{
										func_123(0);
									}
									else
									{
										func_240();
									}
								}
								if (unk_0xC450B06E5AAA0985(uLocal_59))
								{
									if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_71, 0))
									{
										unk_0xFE54B8568B2ABD12(&uLocal_59);
										uLocal_57 = func_68(iLocal_69, 0, 0);
										func_67(&uLocal_60);
										func_74(&uLocal_136, 0, 0);
										if (!iLocal_54)
										{
											if (bLocal_119 == 1)
											{
												Local_83 = { -2258,759f, 4274,059f, 45,9166f };
											}
											else if (bLocal_55)
											{
												Local_83 = { -483,4162f, -2160,874f, 8,359f };
											}
											else
											{
												Local_83 = { -485,9905f, -2153,542f, 8,1999f };
											}
											if (!unk_0x7B780C491DEC834E(Local_83, 2f) && !unk_0xCB5CAFF0A4A8B74B(iLocal_69))
											{
												unk_0xB2BD5837A8D3CEDA(iLocal_69, Local_83, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iLocal_69, fLocal_88);
												iLocal_54 = 1;
											}
										}
										iLocal_46 = 3;
										iLocal_122 = unk_0x1DD05E817C89C737();
									}
									else if (unk_0xFAA48325A90263BE(iLocal_71, iLocal_69, 20f, 20f, 7f, 0, 1, 0))
									{
										func_66();
										if (func_65())
										{
											if (unk_0x848DE0A81098ECCB(iLocal_69, iLocal_71, -1, 0, 0))
											{
												if (!bLocal_114)
												{
													if (func_50(&Local_100, cLocal_112, sLocal_108, 4, 0, 0, 0))
													{
													}
												}
												unk_0x7C8E9DE09D4AD3FF(iLocal_69, iLocal_71, 35f, iLocal_117);
												unk_0x44FB298D6382876D(iLocal_69, 1);
												func_123(1);
											}
										}
									}
								}
								else if (unk_0xC450B06E5AAA0985(uLocal_57))
								{
									if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_71, 0))
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_69, fLocal_50, fLocal_50, fLocal_50, 0, 1, 0))
										{
											if (func_49(1, 0, 1))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_57);
												if (bLocal_119 == 1)
												{
													if (func_48(unk_0xCFC0C995455A6204(iLocal_71), 336f, 90f))
													{
														sLocal_124 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_124 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_124 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x80813AC549A1E8AE(sLocal_124);
												iLocal_46 = 4;
												iLocal_45 = 3;
											}
										}
										else
										{
											func_46(unk_0xD1A6A821F5AC81DB(iLocal_69, 1), &fLocal_50, &fLocal_51);
										}
									}
									else
									{
										unk_0xFE54B8568B2ABD12(&uLocal_57);
										uLocal_59 = func_109(iLocal_71, 0, 0);
										iLocal_46 = 0;
									}
								}
								break;
							
							case 3:
								if (bLocal_119 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_69))
										{
											unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
										}
										func_123(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_69))
									{
										unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
									}
									func_123(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_70))
						{
							if (unk_0xCECDBB848D53DEB2(iLocal_70, iLocal_71, 0))
							{
								unk_0x13DE13EA38996410(iLocal_70, iLocal_71, unk_0x4A8C381C258A124D(), 8, 50f, iLocal_118, 10f, 10f, 0);
								unk_0x44FB298D6382876D(iLocal_70, 1);
								unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
							}
							else
							{
								unk_0xD844F5E50DAB6FF7(iLocal_70, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
								unk_0x44FB298D6382876D(iLocal_70, 1);
								unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
							}
						}
						system::wait(0);
						func_240();
					}
				}
				else
				{
					if (iLocal_45 == 1)
					{
						if (func_171(iLocal_71))
						{
							unk_0x8C1F7D7A31B2A38E(&iLocal_71);
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_70))
						{
							unk_0x734A9F4537A31459(&iLocal_70);
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_69))
					{
						if (unk_0x13CCB1AD131C1082(iLocal_69, sLocal_77, "agitated_idle_a", 3))
						{
							unk_0x1D949F0AD44C7F05(iLocal_69, "waiting", sLocal_77, -2f);
						}
						func_1(iLocal_69, "GENERIC_CURSE_HIGH", 24);
						unk_0xB5396F1FB088FE38(&uLocal_72);
						unk_0x63C8DCBEC1CF8225(0, Local_86, 1f, 20000, 40000f, 1056964608);
						unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x93C0674FC00824D0(uLocal_72);
						unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
						unk_0xD0557B139A542F12(&uLocal_72);
					}
					func_240();
				}
			}
			else
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_70))
				{
					unk_0xD844F5E50DAB6FF7(iLocal_70, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
					unk_0x44FB298D6382876D(iLocal_70, 1);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_71))
				{
					unk_0x2AEBE39F6BF7D6BC(iLocal_71, 50f);
				}
				func_240();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
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

int func_3(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	struct<3> Var0;
	char* sVar1;
	struct<3> Var2;
	float fVar3;
	
	sVar1 = "chassis";
	func_66();
	if (((!unk_0x4FAFF4BCB7633475(iLocal_69) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && func_171(iLocal_71)) && unk_0xE100DD4F82A51BDE(sLocal_124))
	{
		switch (iLocal_47)
		{
			case 0:
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (func_49(1, 0, 1))
					{
						if (!BitTest(Global_8800, 11))
						{
							if (!unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
							{
								func_37(1, 1, 1, 0, 0, 0, 0);
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									unk_0x428C32CC68809A35(1);
									while (!func_34(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fLocal_51, 1, 1056964608, 0, 1, 0))
									{
										unk_0x43AE50D2A33F6E2A();
										system::wait(0);
									}
									func_34(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fLocal_51, 0, 1056964608, 0, 1, 0);
								}
								unk_0x43AE50D2A33F6E2A();
								if (!unk_0x4FAFF4BCB7633475(iLocal_69))
								{
									unk_0x9FF00EA9A61211D2(iLocal_69, 0);
								}
								func_32();
								func_25(0);
								unk_0x43AE50D2A33F6E2A();
								iLocal_47 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x3E13A302AA0F06BF(iLocal_71, 0, 0, 0f);
				unk_0xC1FE4FCB32785633(iLocal_71, 0, 1, 1, 1);
				unk_0x43AE50D2A33F6E2A();
				if (bLocal_119 == 1)
				{
					if (func_171(iLocal_71))
					{
						if (func_48(unk_0xCFC0C995455A6204(iLocal_71), 336f, 90f))
						{
							Local_82 = { -2254,3f, 4273,361f, 44,9697f };
							fLocal_87 = 336,6557f;
							Local_81 = { -2252,683f, 4274,16f, 45,0612f };
							Local_83 = { -2257,825f, 4269,189f, 44,6334f };
							fLocal_88 = 272,8688f;
							Local_95 = { -2254,588f, 4277,307f, 45,6133f };
							Local_96 = { 6,6248f, 0,0369f, 179,5595f };
						}
						else
						{
							Local_82 = { -2254,223f, 4272,33f, 44,9193f };
							fLocal_87 = 148,0287f;
							Local_83 = { -2255,733f, 4271,32f, 44,8166f };
							fLocal_88 = 179,4774f;
							Local_81 = { -2257,088f, 4268,938f, 44,6456f };
							Local_95 = { -2255,775f, 4274,144f, 46,0666f };
							Local_96 = { 2,8781f, 0,3464f, -146,6097f };
						}
					}
					Var2 = { -2269,34f, 4279,89f, 45,47f };
					fVar3 = 53,23f;
					fLocal_94 = 50f;
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_81, 1, 0, 0, 1);
					unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
					unk_0xB2BD5837A8D3CEDA(iLocal_69, Local_83, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(iLocal_71, fLocal_87);
					unk_0xB2BD5837A8D3CEDA(iLocal_71, Local_82, 1, 0, 0, 1);
				}
				else
				{
					if (!func_48(unk_0xCFC0C995455A6204(iLocal_71), 64,6764f, 90f))
					{
						Local_95 = { -478,7095f, -2163,598f, 10,3091f };
						Local_96 = { -7,4391f, 0,0006f, 35,6865f };
						Local_82 = { -484,9581f, -2155,266f, 8,248f };
						fLocal_87 = 243,308f;
						fLocal_94 = 22f;
					}
					else
					{
						Local_95 = { -488,0143f, -2149,419f, 9,9817f };
						Local_96 = { -11,7475f, 0,0006f, -145,0045f };
						Local_82 = { -484,3195f, -2154,188f, 8,2182f };
						fLocal_87 = 64,6764f;
						fLocal_94 = 36,9289f;
					}
					Var2 = { -486,92f, -2169,01f, 8,89f };
					fVar3 = 63,1f;
					unk_0xB2BD5837A8D3CEDA(iLocal_71, Local_82, 1, 0, 0, 1);
					unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
					unk_0x5C96CEA06531AB03(iLocal_71, fLocal_87);
				}
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
				if (func_171(iLocal_71))
				{
					unk_0x1DE99C193C7EC64B(iLocal_71, 1084227584);
					if (unk_0xFC8BFE4B41177C22(iLocal_70))
					{
						if (unk_0xCECDBB848D53DEB2(iLocal_70, iLocal_71, 0))
						{
							unk_0x734A9F4537A31459(&iLocal_70);
						}
					}
				}
				Local_128 = { 0f, 0f, 0f };
				Local_129 = { 0f, 0f, 0f };
				uLocal_120 = unk_0x2EC137C692A52458(Local_128, Local_129, 2);
				unk_0x2DCB8CA1FE6895AB(uLocal_120, iLocal_71, unk_0x365DC1E8054AF31A(iLocal_71, sVar1));
				unk_0x8E654C1A28DAD371(uLocal_120, Local_128, Local_129, 2);
				unk_0x3DA436E63AB0F541(iLocal_69, uLocal_120, sLocal_124, sLocal_126, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_120, sLocal_124, sLocal_127, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_73 = unk_0x2CB6AB601EB7D2D9("DEFAULT_ANIMATED_CAMERA", Local_95, Local_96, fLocal_94, 0, 2);
				unk_0xF9B66DAE101B699C(uLocal_73, uLocal_120, "car_returned_cam", sLocal_124);
				unk_0x5ED9595F4AC7D134(iLocal_71, sLocal_125, sLocal_124, 1000f, 0, 0, 0, 0, 262144);
				Local_128 = { unk_0xD1A6A821F5AC81DB(iLocal_71, 1) };
				Local_129 = { unk_0x88124E0D60FB8D11(iLocal_71, 2) };
				if (func_171(iLocal_74))
				{
					if (func_24(iLocal_74, Local_82, 1) <= 11f)
					{
						unk_0xB2BD5837A8D3CEDA(iLocal_74, Var2, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(iLocal_74, fVar3);
						unk_0x1DE99C193C7EC64B(iLocal_74, 1084227584);
						unk_0xEE0BCDB1B5E36BCB(iLocal_74, 1, 0);
					}
				}
				unk_0x2094BC4B6731BA68(Local_82, 10f, 1, 0, 0, 0);
				system::settimera(0);
				if (bLocal_119 == 2)
				{
					unk_0x7991957B46F22F47(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x7991957B46F22F47(joaat("peyote"), 15);
				}
				unk_0xD7ABE01242C5B8E3(Local_82, 15f);
				unk_0x4CBC5D1BC117616B(uLocal_73, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				iLocal_47 = 3;
				unk_0xF8A2800C0B863DB1(1f);
				break;
			
			case 3:
				unk_0x43AE50D2A33F6E2A();
				if (func_21())
				{
					iLocal_47 = 4;
				}
				if (bLocal_119 == 1)
				{
					if (system::timera() > 1500 && !bLocal_148)
					{
						if (func_50(&Local_100, cLocal_112, sLocal_99, 4, 0, 0, 0))
						{
							iLocal_47 = 4;
						}
					}
				}
				else if (unk_0x5266F1D2AEF6F73A(uLocal_120) && !bLocal_148)
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_120) >= 0,2f)
					{
						if (func_50(&Local_100, cLocal_112, sLocal_99, 4, 0, 0, 0))
						{
							iLocal_56 = 0;
							iLocal_47 = 4;
						}
					}
				}
				unk_0xF8A2800C0B863DB1(1f);
				break;
			
			case 4:
				unk_0x43AE50D2A33F6E2A();
				if (bLocal_119 == 2)
				{
					if (!func_20())
					{
						if (iLocal_56 == 0)
						{
							if (func_50(&Local_100, cLocal_112, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_56 = 1;
							}
						}
					}
				}
				unk_0xF8A2800C0B863DB1(1f);
				if (bLocal_119 == 1)
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_120))
					{
						if (iLocal_130 == 0)
						{
							if (unk_0xBD3B265153D3BA2D(uLocal_120) >= 0,83f)
							{
								unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
								unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), sLocal_124, sLocal_127, 1000f, -2f, -1, 1048576, unk_0xBD3B265153D3BA2D(uLocal_120), 0, 0, 0);
								unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
								iLocal_130 = 1;
							}
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_69))
						{
							if (unk_0xBD3B265153D3BA2D(uLocal_120) >= 0,83f)
							{
								if (unk_0x13CCB1AD131C1082(iLocal_69, sLocal_124, sLocal_126, 2))
								{
									unk_0xC0086E5CBF13BBF7(iLocal_69, -1000f, 0);
									if (!unk_0x7F420695E3F776FB(iLocal_69, 0))
									{
										if (func_171(iLocal_71))
										{
											unk_0x73CAFD2038E812B3(iLocal_69, iLocal_71, -1);
											unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
										}
									}
									unk_0xD8ED11B32DF72E0B(iLocal_69, 1, 0);
								}
								else
								{
									unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0x5266F1D2AEF6F73A(uLocal_120))
				{
					if (iLocal_130 == 0)
					{
						if (unk_0xBD3B265153D3BA2D(uLocal_120) >= 0,86f)
						{
							unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
							unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), sLocal_124, sLocal_127, 1000f, -2f, -1, 1048576, unk_0xBD3B265153D3BA2D(uLocal_120), 0, 0, 0);
							unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
							iLocal_130 = 1;
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_69))
					{
						if (unk_0xBD3B265153D3BA2D(uLocal_120) > 0,847f)
						{
							if (unk_0x13CCB1AD131C1082(iLocal_69, sLocal_124, sLocal_126, 2))
							{
								unk_0xC0086E5CBF13BBF7(iLocal_69, -1000f, 0);
								if (!unk_0x7F420695E3F776FB(iLocal_69, 0))
								{
									if (func_171(iLocal_71))
									{
										unk_0x73CAFD2038E812B3(iLocal_69, iLocal_71, -1);
										unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
									}
								}
								unk_0xD8ED11B32DF72E0B(iLocal_69, 1, 0);
							}
							else
							{
								unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
							}
						}
					}
				}
				if (((unk_0x5266F1D2AEF6F73A(uLocal_120) && unk_0xBD3B265153D3BA2D(uLocal_120) >= 0,99f) || !unk_0x5266F1D2AEF6F73A(uLocal_120)) || func_21())
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_71, 0) && unk_0x13CCB1AD131C1082(iLocal_71, sLocal_124, sLocal_125, 3))
					{
						unk_0x6D75623C644D6F83(iLocal_71, sLocal_124, sLocal_125, 1f);
					}
					if (unk_0x5266F1D2AEF6F73A(uLocal_120))
					{
						unk_0x7BB893EF8F683419(uLocal_120, 1f);
					}
					if (bLocal_148)
					{
						Var0 = { unk_0xBE8776D2466E9EA6(sLocal_124, sLocal_127, Local_128, Local_129, 1f, 2) };
						unk_0xB1EAADCB692D69CE(Var0, &(Var0.f_2), 0, 0);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0x7A6103DCF5EE8CC3(sLocal_124, sLocal_127, Local_128, Local_129, 1f, 2) };
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), Var0.f_2);
						unk_0xD815D4BD1AE9E85A(0, 1065353216);
						unk_0x64BB72494B9DF6DC(0);
					}
					unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x7F420695E3F776FB(iLocal_69, 0))
					{
						if (func_171(iLocal_71))
						{
							unk_0x73CAFD2038E812B3(iLocal_69, iLocal_71, -1);
							unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_69))
					{
						if (unk_0x7F420695E3F776FB(iLocal_69, 0))
						{
							if (func_171(iLocal_71))
							{
								unk_0x3E13A302AA0F06BF(iLocal_71, 0, 0, 0f);
								unk_0xC1FE4FCB32785633(iLocal_71, 0, 1, 1, 1);
								iLocal_123 = unk_0x1DD05E817C89C737();
								iLocal_47 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x43AE50D2A33F6E2A();
				if ((unk_0x1DD05E817C89C737() - iLocal_123) > 100)
				{
					if (func_3(iLocal_69) && func_171(iLocal_71))
					{
						unk_0xB5396F1FB088FE38(&uLocal_72);
						unk_0xFCCE667AD0E974AD(0, iLocal_71, 9, 1000);
						unk_0x7C8E9DE09D4AD3FF(0, iLocal_71, 25f, iLocal_117);
						unk_0x93C0674FC00824D0(uLocal_72);
						unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
						unk_0xD0557B139A542F12(&uLocal_72);
						unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
					}
					func_37(0, 1, 1, 0, 0, 0, 0);
					if (bLocal_148)
					{
						if (unk_0x78411E34CF90EA8C(uLocal_73))
						{
							unk_0x4CBC5D1BC117616B(uLocal_73, 0);
							unk_0x85E6A1E36B5E2E4D(uLocal_73, 0);
						}
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						system::wait(750);
						unk_0xD815D4BD1AE9E85A(0, 1065353216);
						unk_0x64BB72494B9DF6DC(0);
						func_19(500, 1);
					}
					else
					{
						unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
						unk_0x4CBC5D1BC117616B(uLocal_73, 0);
					}
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
					func_18(&iLocal_71);
					func_5(func_11(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_69))
				{
					unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14835;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14835)
			{
				iVar0 = func_10(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_7(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_7(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_8(uParam1));
}

int func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1574926;
}

int func_10(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_7(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_11()
{
	func_12();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_16(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_15(unk_0x4A8C381C258A124D());
			if (func_14(iVar0) && (!func_13(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_14(Global_113969.f_2366.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_18(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		unk_0x1C2F771CDC87A3A5(*iParam0, 0);
		if (unk_0x110821AE6C63DD4F(*iParam0) && unk_0x7C9905528EE2C3AB(*iParam0, 1))
		{
			unk_0x68298CA6191CDFDB(iParam0);
		}
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
	{
		if (!unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9390801B06EE998F())
		{
			system::wait(0);
		}
	}
}

int func_20()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (bLocal_119 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_22(1000))
	{
		if (unk_0x16CFE70936BA84C7(iVar0))
		{
			unk_0x4CBC5D1BC117616B(uLocal_73, 0);
			unk_0x8F72AF14CE5AACE4(500);
			while (unk_0x78ABC1D11B34F324())
			{
				unk_0x43AE50D2A33F6E2A();
				system::wait(0);
			}
			bLocal_148 = true;
			return 1;
		}
	}
	if (unk_0x15CCE8886267624F())
	{
		if (unk_0x16CFE70936BA84C7(iVar0))
		{
			bLocal_148 = true;
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		if ((unk_0x1DD05E817C89C737() - Global_29) > iParam0)
		{
			Global_28 = unk_0x1DD05E817C89C737();
		}
		Global_29 = unk_0x1DD05E817C89C737();
		if ((unk_0x1DD05E817C89C737() - Global_28) > iParam0)
		{
			if (func_23())
			{
				Global_28 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_23()
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

float func_24(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

void func_25(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_30(0))
		{
			func_26(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_26(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_29())
		{
			func_28(1, 1);
		}
		else
		{
			func_28(0, 0);
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
	if (!func_27())
	{
		Global_20930.f_1 = 3;
	}
}

int func_27()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_28(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_30(0))
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

bool func_29()
{
	return BitTest(Global_1956920, 5);
}

int func_30(int iParam0)
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

bool func_31()
{
	return BitTest(Global_1956920, 19);
}

void func_32()
{
	Global_21152 = 0;
	func_33();
}

void func_33()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_34(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_36(bParam5, bParam6);
	func_35(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_35(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_36(bool bParam0, bool bParam1)
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

void func_37(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_45(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_27())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_44(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_45(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_44(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_42(unk_0x259BE71D8A81D4FA())) && !func_39(unk_0x259BE71D8A81D4FA(), 0)) && !func_38()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_42(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_38()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_39(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_41(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_40(-1, 0) == 8;
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

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_41(var uParam0)
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

int func_42(int iParam0)
{
	if (func_39(iParam0, 0))
	{
		return 1;
	}
	if (func_43())
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

bool func_43()
{
	return BitTest(Global_2621446, 3);
}

int func_44(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_45(int iParam0)
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

void func_46(struct<3> Param0, float fParam1, float fParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - Param0 };
		fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
		if (func_47(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
		if (func_47(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1,33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1,33f) - 1f);
	}
}

int func_47(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		fVar0 = unk_0xCFC0C995455A6204(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_48(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0,95f || unk_0x032CEF99C0D59B73(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

bool func_50(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_64(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_51(sParam2, iParam3, 0);
}

int func_51(char* sParam0, int iParam1, bool bParam2)
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
					func_63();
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
		if (func_62(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_61();
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
				func_60();
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
				if (func_59())
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
			if (func_27())
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
			func_58();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_57();
		func_52();
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
		func_63();
	}
	return 0;
}

void func_52()
{
	if (!func_53())
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

int func_53()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_56())
	{
		return 0;
	}
	if (func_54(unk_0x259BE71D8A81D4FA()))
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

bool func_54(int iParam0)
{
	return func_55(iParam0, 20);
}

var func_55(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_56()
{
	return -1;
}

void func_57()
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

void func_58()
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

int func_59()
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

void func_60()
{
	if (func_13(14))
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
		Global_20930 = func_11();
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

void func_61()
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

bool func_62(int iParam0, int iParam1)
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

void func_63()
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

void func_64(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_65()
{
	if (unk_0x4FAFF4BCB7633475(iLocal_70))
	{
		return 1;
	}
	else if (func_171(iLocal_71))
	{
		if (!unk_0xFAA48325A90263BE(iLocal_70, iLocal_71, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_171(iLocal_71))
	{
		fVar0 = unk_0x4C7724D572378B05(iLocal_71);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0xFC954C8C860FAB80(iLocal_71))
		{
			sLocal_99 = sLocal_111;
		}
		else if (bVar2)
		{
			sLocal_99 = sLocal_110;
		}
		else
		{
			sLocal_99 = sLocal_109;
		}
	}
}

void func_67(var uParam0)
{
	*uParam0 = -99;
}

var func_68(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_69(iParam0, bParam1, 145);
}

var func_69(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_70(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_71(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_71(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_71(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(var uParam0)
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

int func_73(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
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
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && iParam11)
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
		unk_0xB070F32F5FE88A2A(iParam0, iParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, iParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(iParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(iParam7);
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
					if (!unk_0xD6F9DEE4765092A9(iParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(iParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(iParam7);
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

void func_74(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2738934.f_4712, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_75(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_75(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_75(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_76()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_70))
	{
		unk_0xBE8796DB2B90A437(iLocal_70, 2, 0);
		unk_0xBE8796DB2B90A437(iLocal_70, 6, 0);
		unk_0xBE8796DB2B90A437(iLocal_70, 3, 1);
		unk_0xBE8796DB2B90A437(iLocal_70, 1, 0);
		unk_0x62A5310368A20EFA(iLocal_70, unk_0x4A8C381C258A124D(), 0, 16);
		unk_0xAAA71DD7E9059338(iLocal_70, 0);
		unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
	}
	else
	{
		unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
	}
	if (func_171(iLocal_71))
	{
		unk_0x0B74F181ADFC39BF(iLocal_71, 1);
	}
}

int func_77()
{
	if (func_171(iLocal_71))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_71, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_75)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_70))
				{
					if (!iLocal_116)
					{
						if (!unk_0xFFF4FB66DA549D0F(iLocal_71))
						{
							unk_0xD83588CA24829967(iLocal_70, unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_116 = 1;
						}
					}
					if (unk_0x1DD05E817C89C737() > iLocal_121 + 7000)
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_71, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_50(&Local_100, cLocal_112, sLocal_107, 4, 0, 0, 0))
							{
								iLocal_121 = unk_0x1DD05E817C89C737();
							}
						}
					}
					unk_0xE4DC7B3DD712372B(iLocal_71);
					unk_0x7468550652312059(iLocal_71);
					iLocal_75 = 0;
				}
			}
			if (unk_0x9B3D4335E0EDB0BE(iLocal_71, unk_0x4A8C381C258A124D(), 1))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_70))
				{
					func_50(&Local_100, cLocal_112, sLocal_107, 4, 0, 0, 0);
				}
				iLocal_76++;
				iLocal_75 = 1;
			}
			if (iLocal_76 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_116 = 0;
			iLocal_75 = 0;
		}
	}
	return 0;
}

int func_78()
{
	if (func_171(iLocal_71))
	{
		if (((unk_0x548F6F43A7CB6F45(iLocal_71, 0, 0) || unk_0x548F6F43A7CB6F45(iLocal_71, 1, 0)) || unk_0x548F6F43A7CB6F45(iLocal_71, 4, 0)) || unk_0x548F6F43A7CB6F45(iLocal_71, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_79()
{
	if (func_171(iLocal_71) && unk_0xC450B06E5AAA0985(uLocal_58))
	{
		func_80(&uLocal_136, iLocal_71, 0, 0, 1, 1, 1);
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_81(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_81(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_82(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_82(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_74(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_83(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_83(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_75(iVar0))
	{
		func_108();
	}
	if (func_107(uParam1) && unk_0xE5E2AE8B19267B8A(uParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(uParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_102(uParam0, bParam5, bParam7, 0))
			{
				func_98(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_75(iVar0))
							{
								func_87(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_86(1);
								}
							}
						}
					}
				}
			}
			else if (func_88(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_75(iVar0))
						{
							func_87(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_86(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam3))
			{
				if (func_75(sParam3))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					{
						func_74(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_74(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_74(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_74(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_74(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_74(uParam0, iVar0, 1);
				}
			}
			if (!func_102(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_85(uParam0))
				{
					func_84(uParam0);
				}
			}
		}
	}
	else
	{
		func_74(uParam0, iVar0, 0);
	}
}

void func_84(var uParam0)
{
	if (func_107(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_86(bool bParam0)
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_87(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_88(char* sParam0)
{
	if (!func_89(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_75(sParam0)) || func_75("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_86(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_86(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_86(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_30(0))
	{
		return 0;
	}
	if (func_97())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_96() || func_95(Global_4718592.f_185586)) || func_94())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_93(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_92(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_90(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_90(int iParam0)
{
	if (iParam0 != func_56())
	{
		if (func_91(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_91(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_91(int iParam0, bool bParam1, bool bParam2)
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

int func_92(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
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

var func_94()
{
	return Global_2684504.f_19;
}

bool func_95(int iParam0)
{
	return iParam0 == 51;
}

var func_96()
{
	return Global_2684504.f_18;
}

bool func_97()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

void func_98(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		func_74(uParam0, 0, 0);
	}
	if (func_101(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_99())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_99()
{
	return func_100(unk_0x259BE71D8A81D4FA());
}

int func_100(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_101(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_102(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_106(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_105(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_105(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_106(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_85(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_106(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_105(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_105(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_106(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_106(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_105(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_105(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_106(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_104(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_104(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_85(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_89(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_108();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_89(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_89(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_105(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_89(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_89(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_108()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_110(iParam0, bParam1, 0);
}

int func_110(var uParam0, bool bParam1, bool bParam2)
{
	return func_70(uParam0, !bParam1, bParam2);
}

int func_111()
{
	float fVar0;
	
	fVar0 = 300f;
	if (bLocal_119 == 1)
	{
		fVar0 = 220f;
	}
	if (func_171(iLocal_71))
	{
		func_112(uLocal_58, iLocal_71, fVar0, 1061158912, 0);
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_71, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0xF6C26AE940C14749(iLocal_71))
		{
			return 1;
		}
	}
	return 0;
}

void func_112(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x55B80B6E7AB61270(iParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam1), 0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
			else if (unk_0x0101C509A6E67F99(iParam1))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam1)))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_113()
{
	if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_71, 0) && unk_0x413E19AD37DE3A4C(iLocal_71))
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_69) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		switch (iLocal_46)
		{
			case 0:
				iLocal_52 = iLocal_52;
				if (!unk_0x7F420695E3F776FB(iLocal_69, 0))
				{
					if (bLocal_119 == 1)
					{
						if (func_121())
						{
							iLocal_46 = 1;
						}
					}
					else if (!unk_0x8BF5256C439DF778(iLocal_69) && !unk_0x0B3FC0E7676E79BF(iLocal_69))
					{
						unk_0xE67051907958B5EB(iLocal_69, unk_0x4A8C381C258A124D(), -1, 0, 2);
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -539,4566f, -2094,491f, 6,967173f, -468,4296f, -2152,549f, 18,99127f, 26,75f, 0, 1, 0))
						{
							unk_0x2280392018BC0DD3(iLocal_69, 345f, 0);
							iLocal_46 = 1;
						}
						else
						{
							unk_0xB5396F1FB088FE38(&uLocal_72);
							unk_0x10425721983AE158(0, sLocal_78, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, sLocal_78, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x10425721983AE158(0, sLocal_78, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_72);
							unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
							unk_0xD0557B139A542F12(&uLocal_72);
							iLocal_122 = unk_0x1DD05E817C89C737();
							iLocal_46 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (bLocal_119 == 1)
				{
					unk_0xE67051907958B5EB(iLocal_69, unk_0x4A8C381C258A124D(), -1, 0, 2);
					if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_perform_sequence")) != 1)
					{
						unk_0xB5396F1FB088FE38(&uLocal_72);
						unk_0x10425721983AE158(0, sLocal_78, sLocal_80, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_72);
						unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
						unk_0xD0557B139A542F12(&uLocal_72);
						iLocal_46 = 2;
					}
				}
				else if (unk_0x3644984C9D7B57EF(iLocal_69, unk_0x4A8C381C258A124D(), 60f))
				{
					if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_perform_sequence")) != 1)
					{
						unk_0xB5396F1FB088FE38(&uLocal_72);
						unk_0x10425721983AE158(0, sLocal_78, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_55 == 0)
						{
							unk_0x10425721983AE158(0, sLocal_78, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x93C0674FC00824D0(uLocal_72);
						unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
						unk_0xD0557B139A542F12(&uLocal_72);
						iLocal_46 = 2;
					}
				}
				if (func_121())
				{
					if (func_120())
					{
					}
				}
				break;
			
			case 2:
				if (func_121())
				{
					if (func_120())
					{
					}
				}
				if (bLocal_119 == 2)
				{
					if (!unk_0x3644984C9D7B57EF(iLocal_69, unk_0x4A8C381C258A124D(), 60f) && !func_118(iLocal_69, joaat("script_task_turn_ped_to_face_entity")))
					{
						unk_0x0E95B96CFEFE7B61(iLocal_69, unk_0x4A8C381C258A124D(), 0);
					}
					if (func_117(iLocal_69, unk_0x4A8C381C258A124D(), 1) < 25f)
					{
						if (!func_20())
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_122) > 6000)
							{
								func_116();
							}
						}
					}
				}
				if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_perform_sequence")) != 1 && !func_118(iLocal_69, joaat("script_task_turn_ped_to_face_entity")))
				{
					if (bLocal_119 == 1)
					{
						Local_83 = { -2260,1f, 4274,24f, 44,9f };
						if (!unk_0x65FFA94B82A71741(iLocal_69, Local_83, 1,5f, 1,5f, 1,5f, 0, 1, 0))
						{
							if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_perform_sequence")) == 7)
							{
								unk_0xB5396F1FB088FE38(&uLocal_72);
								unk_0x63C8DCBEC1CF8225(0, Local_83, 1f, 20000, fLocal_88, 1056964608);
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
								unk_0x93C0674FC00824D0(uLocal_72);
								unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
								unk_0xD0557B139A542F12(&uLocal_72);
							}
						}
						else if (!unk_0x13CCB1AD131C1082(iLocal_69, sLocal_77, "waiting", 3))
						{
							unk_0x10425721983AE158(iLocal_69, sLocal_77, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_117(iLocal_69, unk_0x4A8C381C258A124D(), 1) < 25f)
							{
								func_116();
							}
						}
					}
					else if (!unk_0x13CCB1AD131C1082(iLocal_69, sLocal_77, "waiting", 3))
					{
						unk_0x10425721983AE158(iLocal_69, sLocal_77, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x9E437CA2E2CAD79D(iLocal_69, unk_0x4A8C381C258A124D()))
				{
					unk_0xE67051907958B5EB(iLocal_69, unk_0x4A8C381C258A124D(), -1, 0, 2);
				}
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_69, 40f, 40f, 10f, 0, 1, 0) && !unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_69, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_115())
					{
						if (iLocal_53)
						{
							if (bLocal_119 == 1)
							{
								unk_0xB5396F1FB088FE38(&uLocal_72);
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
								unk_0x10425721983AE158(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x93C0674FC00824D0(uLocal_72);
								unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
								unk_0xD0557B139A542F12(&uLocal_72);
								iLocal_53 = 0;
								iLocal_122 = unk_0x1DD05E817C89C737();
							}
							else
							{
								unk_0xB5396F1FB088FE38(&uLocal_72);
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
								unk_0x10425721983AE158(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x93C0674FC00824D0(uLocal_72);
								unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
								unk_0xD0557B139A542F12(&uLocal_72);
								iLocal_53 = 0;
								iLocal_122 = unk_0x1DD05E817C89C737();
							}
						}
						else if (!unk_0x13CCB1AD131C1082(iLocal_69, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_perform_sequence")) == 7)
							{
								if (!unk_0x3644984C9D7B57EF(iLocal_69, unk_0x4A8C381C258A124D(), 45f))
								{
									unk_0xB5396F1FB088FE38(&uLocal_72);
									unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
									unk_0x93C0674FC00824D0(uLocal_72);
									unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
									unk_0xD0557B139A542F12(&uLocal_72);
								}
								else if ((unk_0x1DD05E817C89C737() - iLocal_122) > 6000)
								{
									iLocal_53 = 1;
								}
							}
						}
						else if (!unk_0x3644984C9D7B57EF(iLocal_69, unk_0x4A8C381C258A124D(), 70f))
						{
							unk_0x974022927CB47E68(iLocal_69);
							unk_0xB5396F1FB088FE38(&uLocal_72);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0x93C0674FC00824D0(uLocal_72);
							unk_0x4BD42B0527065BB6(iLocal_69, uLocal_72);
							unk_0xD0557B139A542F12(&uLocal_72);
							iLocal_122 += 4000;
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_70))
					{
						unk_0xD844F5E50DAB6FF7(iLocal_70, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
						unk_0x44FB298D6382876D(iLocal_70, 1);
						unk_0xF09E30AF1B8FB379(&iLocal_70);
					}
				}
				else
				{
					if (bLocal_119 == 1)
					{
						Local_83 = { -2260,1f, 4274,24f, 44,9f };
					}
					else if (bLocal_55)
					{
						Local_83 = { -483,4162f, -2160,874f, 8,359f };
					}
					else
					{
						Local_83 = { -485,9905f, -2153,542f, 8,1999f };
					}
					if (!unk_0x65FFA94B82A71741(iLocal_69, Local_83, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_69, joaat("script_task_go_straight_to_coord")) == 7)
						{
							unk_0x63C8DCBEC1CF8225(iLocal_69, Local_83, 1f, 20000, fLocal_88, 1056964608);
						}
					}
					else if (!unk_0x3644984C9D7B57EF(iLocal_69, unk_0x4A8C381C258A124D(), 50f))
					{
						unk_0x0E95B96CFEFE7B61(iLocal_69, unk_0x4A8C381C258A124D(), -1);
					}
					iLocal_53 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_170(1))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_69))
		{
			unk_0xD844F5E50DAB6FF7(iLocal_69, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_69, 1);
			system::wait(0);
		}
		func_240();
	}
}

bool func_115()
{
	if (!bLocal_114)
	{
		if (func_50(&Local_100, cLocal_112, sLocal_108, 4, 0, 0, 0))
		{
			bLocal_114 = true;
		}
	}
	return bLocal_114;
}

int func_116()
{
	if (!iLocal_115)
	{
		if (func_50(&Local_100, cLocal_112, sLocal_106, 4, 0, 0, 0))
		{
			iLocal_115 = 1;
		}
	}
	return iLocal_115;
}

float func_117(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
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
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

int func_118(int iParam0, int iParam1)
{
	if (func_119(uParam0))
	{
		if (unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_120()
{
	if (!iLocal_113)
	{
		if (system::timera() > 2000)
		{
			if (func_50(&Local_100, cLocal_112, sLocal_105, 4, 0, 0, 0))
			{
				iLocal_113 = 1;
			}
		}
	}
	return iLocal_113;
}

int func_121()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_70) && !unk_0x4FAFF4BCB7633475(iLocal_69))
	{
		if (func_171(iLocal_71))
		{
			if (unk_0xF4244288C3EF3306(iLocal_70, iLocal_71))
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

void func_122(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_123(bool bParam0)
{
	int iVar0;
	
	if (bLocal_119 == 2)
	{
		iVar0 = func_11();
		switch (iVar0)
		{
			case 0:
				while (!func_146(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_69))
					{
						unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
					}
					system::wait(0);
				}
				break;
			
			case 1:
				while (!func_146(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_69))
					{
						unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
					}
					system::wait(0);
				}
				break;
			
			case 2:
				while (!func_146(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_69))
					{
						unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
					}
					system::wait(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_145(8);
	}
	func_127(17, bLocal_119);
	func_124();
	func_240();
}

void func_124()
{
	func_125();
}

int func_125()
{
	if (func_126(0))
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

int func_126(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_127(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_143();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_142(iParam0))
	{
		func_141(iParam0, bParam1);
		if (!func_140(51))
		{
			func_136("RE_REWARD", 1, 0, 4000, 10000, func_139(), 0, 138, 0);
			func_135(51);
		}
		if (func_134(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_133(iParam0, bParam1) != 322)
		{
			func_128(func_133(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_145(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_145(7);
			}
			else
			{
				func_145(1);
			}
		}
	}
}

void func_128(int iParam0, var uParam1, var uParam2)
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
		func_132((891 + iParam0), 1, -1);
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
		func_129();
	}
}

void func_129()
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
		func_131(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_130() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_125();
				}
			}
		}
	}
}

int func_130()
{
	return Global_32948;
}

int func_131(int iParam0, int iParam1)
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

void func_132(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_133(int iParam0, int iParam1)
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

int func_134(int iParam0)
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

void func_135(int iParam0)
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

void func_136(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_137(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_137(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_138();
	}
}

void func_138()
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

int func_139()
{
	func_12();
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

int func_140(int iParam0)
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

void func_141(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_142(int iParam0)
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

int func_143()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_144(Var0);
	return uVar1;
}

int func_144(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_145(int iParam0)
{
	Global_113955 = iParam0;
}

int func_146(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_126(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_154(iParam1);
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x8744D2E3FC95740E(&(Var0.f_1), 0);
		Global_113969.f_7691.f_765[Global_113969.f_7691.f_866 /*10*/] = { Var0 };
		Global_113969.f_7691.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_153(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_152(&iVar2);
		iVar3 = func_151(Var1, Global_113969.f_7691.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_149(Global_113969.f_7691.f_765[iVar2 /*10*/]);
			Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
			func_148(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_147(Var1))
			{
				func_149(Global_113969.f_7691.f_765[iVar2 /*10*/]);
				Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
				func_148(&Var1);
				return 1;
			}
			else
			{
				if (!func_147(Global_113969.f_7691.f_765[iVar2 /*10*/]))
				{
					Global_113969.f_7691.f_765[iVar2 /*10*/] = { Var1 };
					func_148(&Var1);
					return 1;
				}
				func_148(&Var1);
				return 1;
			}
		}
		else
		{
			func_149(Var1);
			func_148(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_147(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_148(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_149(struct<10> Param0)
{
	if (func_147(Param0))
	{
		func_150(Param0.f_8, 0);
	}
}

void func_150(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

int func_151(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_152(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_866)
	{
		if (func_151(Global_113969.f_7691.f_765[iVar0 /*10*/], Global_113969.f_7691.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_154(iParam1);
	Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x8744D2E3FC95740E(&(Var0.f_1), 0);
	return Var0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_155(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_159(iParam0, 2, 1))
		{
			func_158(iParam0, 2, 1);
		}
	}
	else if (func_159(iParam0, 2, 1))
	{
		func_156(iParam0, 2, 1);
	}
}

void func_156(int iParam0, int iParam1, bool bParam2)
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
		if (func_130() == 0)
		{
			uVar0 = func_10(func_157(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, iParam1);
			func_6(func_157(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_157(int iParam0)
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

void func_158(int iParam0, int iParam1, bool bParam2)
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
		if (func_130() == 0)
		{
			uVar0 = func_10(func_157(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_6(func_157(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_159(int iParam0, int iParam1, bool bParam2)
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
		if (func_130() == 0)
		{
			return BitTest(func_10(func_157(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_160(int iParam0)
{
	if (func_163())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_134(Global_113958))
		{
			func_161(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_134(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_87(func_162(iParam0), -1);
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
					func_87(func_162(iParam0), -1);
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
					func_87(func_162(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_162(int iParam0)
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

int func_163()
{
	switch (func_164(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_164(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_168(0))
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
		if (!func_166(iParam2))
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
			func_165(uParam0, iParam4);
		}
	}
	return 2;
}

void func_165(var uParam0, int iParam1)
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

bool func_166(int iParam0)
{
	return func_167(iParam0, Global_44042);
}

int func_167(int iParam0, int iParam1)
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

int func_168(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_166(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_169()
{
	float fVar0;
	
	switch (bLocal_119)
	{
		case 1:
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2300,317f, 4179,612f, 36,98159f, -2191,317f, 4368,794f, 74,89676f, 70,75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_55)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -487,5048f, -2157,99f, 8,2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_69))
		{
			if (unk_0xCB5CAFF0A4A8B74B(iLocal_69))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_170(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_69))
		{
			if (iParam0 == 0 || func_117(iLocal_69, iLocal_70, 1) > 15f)
			{
				if (unk_0x398315D0C90DE6F6(unk_0x83FDC027F0BEA202(iLocal_69, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x83FDC027F0BEA202(iLocal_69, 31086, 0f, 0f, 0f) };
				Var2 = { Var2 + unk_0x83FDC027F0BEA202(iLocal_69, 31086, 0f, 0f, 0f) };
				if ((unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x5713DE6DB59E98EB(unk_0x83FDC027F0BEA202(iLocal_69, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x8764A5B95AE1F967(-1, unk_0x83FDC027F0BEA202(iLocal_69, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x9B3D4335E0EDB0BE(iLocal_69, unk_0x4A8C381C258A124D(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_171(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	Var1 = { Local_85 };
	fVar2 = fLocal_93;
	switch (bLocal_119)
	{
		case 1:
			Local_84 = { -2257,482f, 4266,638f, 44,5095f };
			fLocal_92 = 293,9091f;
			Local_85 = { -2253,763f, 4273,17f, 44,977f };
			fLocal_93 = 185,5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_105 = "RECT1_ATTR";
			sLocal_106 = "RECT1_HELP";
			sLocal_107 = "RECT1_FYOU";
			sLocal_108 = "RECT1_JOY";
			sLocal_109 = "RECT1_OK";
			sLocal_110 = "RECT1_BAD";
			sLocal_111 = "RECT1_GOOD";
			cLocal_112 = "RECT1AU";
			sLocal_77 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_79 = "random@car_thief@waving_ig_1";
			Local_86 = { -2270,632f, 4287,437f, 44,9008f };
			fLocal_51 = 3f;
			if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_84) < system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_85))
			{
				Var1 = { Local_84 };
				fVar2 = fLocal_92;
				bLocal_55 = true;
				sLocal_78 = "random@car_thief@waving_ig_2";
				sLocal_80 = "waving_l";
			}
			else
			{
				sLocal_80 = "waving";
				sLocal_78 = "random@car_thief@waving_ig_1";
				Var1 = { Local_85 };
				fVar2 = fLocal_93;
			}
			break;
		
		case 2:
			Local_85 = { -538,6718f, -2183,442f, 5,2336f };
			Local_84 = { -365,7f, -2179,26f, 9,3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_105 = "RECT2_ATTR";
			sLocal_106 = "RECT2_HELP";
			sLocal_107 = "RECT2_FYOU";
			sLocal_108 = "RECT2_JOY";
			sLocal_109 = "RECT2_OK";
			sLocal_110 = "RECT2_BAD";
			sLocal_111 = "RECT2_GOOD";
			cLocal_112 = "RECT2AU";
			sLocal_77 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_78 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_79 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_86 = { -505,1966f, -2159,228f, 7,6466f };
			fLocal_50 = 15f;
			fLocal_51 = 3f;
			if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_84) < system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_85))
			{
				bLocal_55 = true;
			}
			break;
	}
	unk_0xEC9DAA34BBB4658C(iVar3);
	unk_0xEC9DAA34BBB4658C(iVar4);
	unk_0xEC9DAA34BBB4658C(iVar5);
	unk_0x80813AC549A1E8AE(sLocal_77);
	unk_0x80813AC549A1E8AE(sLocal_78);
	unk_0x80813AC549A1E8AE(sLocal_79);
	unk_0x80813AC549A1E8AE("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x8003D3C0115A1035();
	if (((((((unk_0x6252BC0DD8A320DB(iVar3) && unk_0x6252BC0DD8A320DB(iVar4)) && unk_0x6252BC0DD8A320DB(iVar5)) && unk_0xE100DD4F82A51BDE(sLocal_77)) && unk_0xE100DD4F82A51BDE(sLocal_78)) && unk_0xE100DD4F82A51BDE(sLocal_79)) && unk_0xE100DD4F82A51BDE("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x6F13318788EDDAD8())
	{
		if (bLocal_119 == 1)
		{
			func_186("re_cartheft - Distance to vTop = ", system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_84));
			func_186("re_cartheft - Distance to vBottom = ", system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_85));
			iLocal_71 = unk_0x5779387E956077A6(iVar5, Var1, fVar2, 1, 1, 0);
			unk_0xBDE75E2FCBF91A6C(iLocal_71, 0, 0);
			unk_0x439C904840715871(iLocal_71, 0);
			unk_0x5FE0938FDE9B0958(iLocal_71, 1);
			unk_0x03DACC5F7E5335AC(iLocal_71, 0);
			unk_0x515A606E0E38355D(iLocal_71, 0);
			unk_0xD772F6AA66750D2B(iLocal_71, 2, 0);
			iLocal_70 = unk_0x8728A378EF2B46B2(iLocal_71, 22, iVar4, -1, 1, 1);
			unk_0x0428AFDCAA63B06E(iLocal_70, 42, 1);
			unk_0xBE8796DB2B90A437(iLocal_70, 3, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_70, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_70, 10);
			unk_0x6D618646705A0465(iLocal_70, 1f);
			unk_0xF823BACD940DEAF1(iLocal_70, 1f);
			unk_0xD133EF7430EDCD09(iLocal_71, 135, 135);
			unk_0x06CD913C241C765E("re_cartheft relGroupThief", &iLocal_135);
			unk_0xD414C47AFF81382A(5, iLocal_135, joaat("player"));
			unk_0xD414C47AFF81382A(2, iLocal_135, joaat("CIVMALE"));
			unk_0xD414C47AFF81382A(2, joaat("CIVMALE"), iLocal_135);
			unk_0x3CEA1FD137ACE2D9(iLocal_70, iLocal_135);
			unk_0x1F7539C841C2A71F(iLocal_71, 1);
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - Local_48 };
				uLocal_49 = unk_0x97BC40FFA2FFCCD2(Var0.f_0, Var0.f_1);
			}
			iLocal_69 = unk_0xB1DBFEB95C0EFB88(5, iVar3, Local_48, uLocal_49, 1, 1);
			unk_0x397CF4F4C8B17365(iLocal_69, sVar7);
			unk_0xE67051907958B5EB(iLocal_69, unk_0x4A8C381C258A124D(), -1, 2048, 2);
			unk_0xD1C578C204015E1F(iLocal_69, 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 4, 1, 1, 0);
			unk_0xFD61BB3B8F1CDB6D(iLocal_69, 1);
			if (bLocal_55)
			{
				Local_82 = { -2254,413f, 4270,227f, 44,8028f };
				fLocal_87 = 124,6557f;
				Local_81 = { -2252,683f, 4274,16f, 45,0612f };
				Local_83 = { -2257,825f, 4269,189f, 44,6334f };
				fLocal_88 = 272,8688f;
				Local_95 = { -2258,04f, 4272,244f, 45,75466f };
				Local_96 = { 1,729481f, 0f, -114,9352f };
			}
			else
			{
				Local_82 = { -2253,634f, 4269,119f, 44,7686f };
				fLocal_87 = 336,143f;
				Local_83 = { -2255,733f, 4271,32f, 44,8166f };
				fLocal_88 = 179,4774f;
				Local_81 = { -2257,088f, 4268,938f, 44,6456f };
				Local_95 = { -2254,886f, 4273,539f, 46,2282f };
				Local_96 = { -7,492095f, 0f, -168,1909f };
			}
		}
		else
		{
			if (bLocal_55)
			{
				iLocal_71 = unk_0x5779387E956077A6(iVar5, -488,7506f, -2159,325f, 8,2581f, 15,0886f, 1, 1, 0);
			}
			else
			{
				iLocal_71 = unk_0x5779387E956077A6(iVar5, -486,3563f, -2159,942f, 8,2887f, 288,8187f, 1, 1, 0);
			}
			unk_0xBDE75E2FCBF91A6C(iLocal_71, 0, 0);
			unk_0x439C904840715871(iLocal_71, 0);
			unk_0x20DD46D27530FAC7(iLocal_71, 3);
			unk_0x5FE0938FDE9B0958(iLocal_71, 1);
			unk_0xB5AD06DDA85E2E8F(iLocal_71, 0);
			unk_0x8450270DC5896D39(iLocal_71, 11, 2, 0);
			unk_0x8450270DC5896D39(iLocal_71, 16, 3, 0);
			unk_0x8450270DC5896D39(iLocal_71, 12, 1, 0);
			unk_0x8450270DC5896D39(iLocal_71, 13, 1, 0);
			unk_0xE33678A9AE50A01B(iLocal_71, 3);
			unk_0x8450270DC5896D39(iLocal_71, 23, 6, 0);
			unk_0xFE620ED8E0A3C209(iLocal_71, 3);
			unk_0xF5501FF9869DAC7C(iLocal_71, 18, 1);
			unk_0xF5501FF9869DAC7C(iLocal_71, 22, 1);
			unk_0xD133EF7430EDCD09(iLocal_71, 143, 0);
			unk_0xBB361D7264AC4FD8(iLocal_71, 31, 2);
			unk_0x03DACC5F7E5335AC(iLocal_71, 0);
			unk_0x515A606E0E38355D(iLocal_71, 0);
			if (bLocal_55)
			{
				iLocal_69 = unk_0xB1DBFEB95C0EFB88(5, iVar3, -490,4008f, -2160,755f, 8,2498f, 314,0037f, 1, 1);
			}
			else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -583,0884f, -2234,249f, 4,523423f, -685,1817f, -2350,904f, 17,07073f, 178f, 0, 1, 0))
			{
				iLocal_69 = unk_0xB1DBFEB95C0EFB88(5, iVar3, -486,81f, -2156,99f, 8,27f, -172,34f, 1, 1);
			}
			else
			{
				iLocal_69 = unk_0xB1DBFEB95C0EFB88(5, iVar3, -486,2511f, -2161,808f, 8,3041f, 353,4264f, 1, 1);
			}
			unk_0xD1C578C204015E1F(iLocal_69, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 3, 1, 2, 0);
			unk_0xD1C578C204015E1F(iLocal_69, 4, 1, 2, 0);
			iLocal_70 = unk_0x8728A378EF2B46B2(iLocal_71, 22, iVar4, -1, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_70, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_70, 10);
			unk_0x6D618646705A0465(iLocal_70, 1f);
			unk_0xF823BACD940DEAF1(iLocal_70, 1f);
			unk_0x0428AFDCAA63B06E(iLocal_70, 42, 1);
			unk_0x397CF4F4C8B17365(iLocal_70, sVar8);
			Local_82 = { -501,9105f, -2148,019f, 8,0392f };
			fLocal_87 = 294,4744f;
			Local_81 = { -501,0442f, -2150,799f, 8,139f };
			Local_83 = { -493,8062f, -2156,036f, 8,1978f };
			Local_95 = { -504,365f, -2144,534f, 9,8585f };
			Local_96 = { -6,6935f, 0f, -127,8147f };
		}
		unk_0x3F58BFCF656F0DF1(iLocal_69, 0);
		unk_0x0428AFDCAA63B06E(iLocal_69, 185, 1);
		unk_0x8F0EA4C49C452445(iLocal_71, 0);
		unk_0xC229299217554C78(iLocal_71, 1, 1, 0);
		unk_0xAAA71DD7E9059338(iLocal_69, 1);
		unk_0xAAA71DD7E9059338(iLocal_70, 1);
		unk_0xE67051907958B5EB(iLocal_69, iLocal_70, -1, 0, 2);
		unk_0x306C263AAEC4A988(iLocal_71);
		unk_0x1F7539C841C2A71F(iLocal_71, 1);
		unk_0xDD38B2935A3EAC56(iLocal_71, 0, 0);
		unk_0xCCA6D8A84EE8C88A(iVar5, 1);
		unk_0xCAC4020CCF361AC8("RE_CAR_STEAL_SCENE");
		unk_0x616C2EAE947E6027(iLocal_71, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xA80E7D11DB73C8BA(iLocal_71, 1);
		unk_0xBE8796DB2B90A437(iLocal_69, 17, 0);
		unk_0x1CA08719184AFC6F(iLocal_69, 512, 1);
		switch (func_11())
		{
			case 0:
				sLocal_98 = "MICHAEL";
				break;
			
			case 1:
				sLocal_98 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_98 = "TREVOR";
				break;
		}
		func_185(&Local_100, 0, unk_0x4A8C381C258A124D(), sLocal_98, 0, 1);
		func_185(&Local_100, 1, iLocal_69, sVar6, 0, 1);
		func_185(&Local_100, 2, iLocal_70, "CThief", 0, 1);
		return 1;
	}
	else if (func_173())
	{
		func_240();
	}
	return 0;
}

int func_173()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_184())
		{
			return 0;
		}
	}
	if (func_180())
	{
		return 1;
	}
	if (func_174(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_174(float fParam0, bool bParam1)
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
		if (func_14(func_11()))
		{
			iVar5 = func_139();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_175(iVar1, &Var0);
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

void func_175(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_176(uParam1, "Abigail1", func_178(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 1:
			func_176(uParam1, "Abigail2", func_178(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 2:
			func_176(uParam1, "Barry1", func_178(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 3:
			func_176(uParam1, "Barry2", func_178(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 4:
			func_176(uParam1, "Barry3", func_178(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 5:
			func_176(uParam1, "Barry3A", func_178(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 6:
			func_176(uParam1, "Barry3C", func_178(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 7:
			func_176(uParam1, "Barry4", func_178(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_177(iParam0), 0, 0);
			break;
		
		case 8:
			func_176(uParam1, "Dreyfuss1", func_178(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 9:
			func_176(uParam1, "Epsilon1", func_178(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 10:
			func_176(uParam1, "Epsilon2", func_178(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 11:
			func_176(uParam1, "Epsilon3", func_178(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 12:
			func_176(uParam1, "Epsilon4", func_178(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 13:
			func_176(uParam1, "Epsilon5", func_178(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 14:
			func_176(uParam1, "Epsilon6", func_178(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 15:
			func_176(uParam1, "Epsilon7", func_178(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 16:
			func_176(uParam1, "Epsilon8", func_178(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 17:
			func_176(uParam1, "Extreme1", func_178(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 18:
			func_176(uParam1, "Extreme2", func_178(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 19:
			func_176(uParam1, "Extreme3", func_178(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 20:
			func_176(uParam1, "Extreme4", func_178(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 21:
			func_176(uParam1, "Fanatic1", func_178(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 22:
			func_176(uParam1, "Fanatic2", func_178(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 23:
			func_176(uParam1, "Fanatic3", func_178(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_177(iParam0), 0, 1);
			break;
		
		case 24:
			func_176(uParam1, "Hao1", func_178(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_177(iParam0), 0, 1);
			break;
		
		case 25:
			func_176(uParam1, "Hunting1", func_178(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 26:
			func_176(uParam1, "Hunting2", func_178(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 27:
			func_176(uParam1, "Josh1", func_178(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 28:
			func_176(uParam1, "Josh2", func_178(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 29:
			func_176(uParam1, "Josh3", func_178(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 30:
			func_176(uParam1, "Josh4", func_178(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 31:
			func_176(uParam1, "Maude1", func_178(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 32:
			func_176(uParam1, "Minute1", func_178(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 33:
			func_176(uParam1, "Minute2", func_178(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 34:
			func_176(uParam1, "Minute3", func_178(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 35:
			func_176(uParam1, "MrsPhilips1", func_178(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 36:
			func_176(uParam1, "MrsPhilips2", func_178(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 37:
			func_176(uParam1, "Nigel1", func_178(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 38:
			func_176(uParam1, "Nigel1A", func_178(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 39:
			func_176(uParam1, "Nigel1B", func_178(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 40:
			func_176(uParam1, "Nigel1C", func_178(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 41:
			func_176(uParam1, "Nigel1D", func_178(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 42:
			func_176(uParam1, "Nigel2", func_178(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 43:
			func_176(uParam1, "Nigel3", func_178(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 44:
			func_176(uParam1, "Omega1", func_178(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 45:
			func_176(uParam1, "Omega2", func_178(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 46:
			func_176(uParam1, "Paparazzo1", func_178(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 47:
			func_176(uParam1, "Paparazzo2", func_178(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 48:
			func_176(uParam1, "Paparazzo3", func_178(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 49:
			func_176(uParam1, "Paparazzo3A", func_178(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 50:
			func_176(uParam1, "Paparazzo3B", func_178(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 51:
			func_176(uParam1, "Paparazzo4", func_178(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 52:
			func_176(uParam1, "Rampage1", func_178(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 54:
			func_176(uParam1, "Rampage3", func_178(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 55:
			func_176(uParam1, "Rampage4", func_178(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 56:
			func_176(uParam1, "Rampage5", func_178(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 53:
			func_176(uParam1, "Rampage2", func_178(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 57:
			func_176(uParam1, "TheLastOne", func_178(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 58:
			func_176(uParam1, "Tonya1", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 59:
			func_176(uParam1, "Tonya2", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 60:
			func_176(uParam1, "Tonya3", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 61:
			func_176(uParam1, "Tonya4", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 62:
			func_176(uParam1, "Tonya5", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_176(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_177(int iParam0)
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

struct<2> func_178(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_179(iParam0) };
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

struct<2> func_179(int iParam0)
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

int func_180()
{
	if (func_183() && !func_184())
	{
		return 1;
	}
	if (func_182() && func_181())
	{
		return 1;
	}
	return 0;
}

bool func_181()
{
	return Global_113687 > 0;
}

int func_182()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_184()
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

void func_185(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_186(char* sParam0, float fParam1)
{
	func_188(sParam0);
	func_187(fParam1);
}

void func_187(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_188(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, uParam0))
	{
	}
}

int func_189()
{
	if (!func_166(5))
	{
		return 1;
	}
	if (func_180())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_184())
		{
			return 0;
		}
	}
	if (func_174(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_190()
{
	if ((Global_113958 == func_143() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_191()
{
	if (func_119(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_71 && unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_74)
			{
				iLocal_74 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x1DD05E817C89C737();
	}
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		iVar0 = (unk_0x1DD05E817C89C737() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = system::ceil((system::to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xF03FBAFA0284124E(uParam0) != 255)
				{
					unk_0xF42EBD7CD0682A8B(uParam0, 255);
				}
			}
			else if (unk_0xF03FBAFA0284124E(uParam0) != 0)
			{
				unk_0xF42EBD7CD0682A8B(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xF03FBAFA0284124E(uParam0) != 255)
			{
				unk_0xF42EBD7CD0682A8B(uParam0, 255);
			}
		}
	}
}

void func_193()
{
}

void func_194(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_143();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_196(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_195();
}

void func_195()
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

void func_196(int iParam0)
{
	Global_113958 = iParam0;
}

int func_197(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_143();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_237())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_184())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_126(0))
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (func_236())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_14(func_11()))
		{
			if (func_174(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_235(iParam1))
		{
			return 0;
		}
		if (func_14(func_11()))
		{
			if (func_234(func_11()) == 4 || func_234(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_14(func_11()))
		{
			if (!func_233(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_232(Global_113969.f_24998.f_43[iParam1]))
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
		if (func_231())
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
		if (!func_222(4))
		{
			return 0;
		}
		if (!func_166(5))
		{
			return 0;
		}
		if (func_221(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_221(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_235(30) && !func_221(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_14(func_11()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_220(iVar4))
				{
					if (func_198(iVar2))
					{
						if (!func_101(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_11() != iVar2)
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

bool func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_199(iVar0);
}

int func_199(int iParam0)
{
	return func_200(iParam0, 1);
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_220(iParam0))
	{
		return 0;
	}
	func_201(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_201(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_202(func_213(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_202(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_212(iParam0, iParam1))
	{
		iVar0 = func_211(iParam1);
		iVar1 = func_209(iParam0);
		iVar2 = (func_209(iParam0) - func_209(iParam1));
		iVar3 = (func_211(iParam0) - func_211(iParam1));
		iVar4 = (func_208(iParam0) - func_208(iParam1));
		iVar5 = (func_207(iParam0) - func_207(iParam1));
		iVar6 = (func_206(iParam0) - func_206(iParam1));
		iVar7 = (func_205(iParam0) - func_205(iParam1));
	}
	else
	{
		iVar0 = func_211(iParam0);
		iVar1 = func_209(iParam1);
		iVar2 = (func_209(iParam1) - func_209(iParam0));
		iVar3 = (func_211(iParam1) - func_211(iParam0));
		iVar4 = (func_208(iParam1) - func_208(iParam0));
		iVar5 = (func_207(iParam1) - func_207(iParam0));
		iVar6 = (func_206(iParam1) - func_206(iParam0));
		iVar7 = (func_205(iParam1) - func_205(iParam0));
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
		iVar4 = (iVar4 + func_204(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_203(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_203(float fParam0, float fParam1, float fParam2)
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

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_206(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_207(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_208(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_209(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_210(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_211(int iParam0)
{
	return iParam0 & 15;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_220(iParam1) || !func_220(iParam0))
	{
		return 1;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	var uVar0;
	
	func_219(&uVar0, unk_0x4BA5A16068183C5E());
	func_218(&uVar0, unk_0x18E502A71E28968C());
	func_217(&uVar0, unk_0x5295501D0862870D());
	func_216(&uVar0, unk_0xB12880C92EA6EE15());
	func_215(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_214(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_214(var uParam0, int iParam1)
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

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_216(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_211(*uParam0);
	iVar1 = func_209(*uParam0);
	if (iParam1 < 1 || iParam1 > func_204(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_217(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_218(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_219(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_220(int iParam0)
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
	iVar0 = func_205(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_206(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_207(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_209(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_208(iParam0);
	if (iVar5 < 1 || iVar5 > func_204(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_11();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_230()) || Global_113016) || Global_32951) || func_229()) || func_62(8, -1)) || func_228()) || func_227()) || func_226()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_230()) || Global_32951) || func_229()) || func_62(8, -1)) || func_226()) || func_228()) || func_227()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_230()) || Global_113016) || Global_32951) || func_229()) || func_62(8, -1)) || func_226()) || func_228()) || func_227()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_230()) || Global_113016) || Global_32951) || func_229()) || func_62(8, -1)) || func_228()) || func_227()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_230() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_62(8, -1)) || func_225()) || func_224()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_62(8, -1) || func_228()) || func_227()) || func_224()) || func_223())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_230()) || Global_32951) || func_229()) || func_62(8, -1)) || func_227()) || func_226()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_230()) || func_227()) || Global_113016) || Global_32951) || func_229()) || Global_45250) || func_62(8, -1)) || func_226()) || func_224()) || func_225()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_230()) || Global_113016) || Global_32951) || func_229()) || func_62(8, -1)) || func_226()) || func_224()) || func_228()) || func_227()) || func_225())
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

var func_223()
{
	return Global_101572.f_1;
}

int func_224()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_225()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_226()
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

bool func_227()
{
	return Global_101585.f_394 > 0;
}

bool func_228()
{
	return Global_101585.f_393 > 0;
}

var func_229()
{
	return Global_1575083;
}

int func_230()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_231()
{
	func_60();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_232(int iParam0)
{
	return func_212(func_213(), iParam0);
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_234(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_237())
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

int func_236()
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

int func_237()
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

int func_238(int iParam0)
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

void func_239()
{
	if (system::vdist(Local_48, -2255,21f, 4271,04f, 44,875f) < 5f)
	{
		bLocal_119 = true;
	}
	else if (system::vdist(Local_48, -500,924f, -2165,36f, 7,6988f) < 5f)
	{
		bLocal_119 = 2;
	}
}

void func_240()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_70) && !unk_0x1C2F771CDC87A3A5(iLocal_70, 0))
	{
		unk_0xAAA71DD7E9059338(iLocal_70, 0);
		unk_0x55098D9E9AD58806(unk_0x4B423FAA24E8ABF0(iLocal_70));
		func_252(&iLocal_70, 1, 0, 1);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_69) && !unk_0x1C2F771CDC87A3A5(iLocal_69, 0))
	{
		unk_0x0FB8E752BCC547A9(iLocal_69, 310, 1);
		unk_0xAAA71DD7E9059338(iLocal_69, 0);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_58))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_58);
	}
	func_72(&uLocal_61);
	if (unk_0xC450B06E5AAA0985(uLocal_59))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_59);
	}
	if (unk_0xBC2EE32DE886BD08("RE_CAR_STEAL_SCENE"))
	{
		if (func_171(iLocal_71))
		{
			unk_0x001B008A010F2FE6(iLocal_71, 0);
		}
		unk_0xB43467C43086A6A1("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_119 == 2)
	{
		unk_0xCE41CD0179F8640B(joaat("rocoto"));
	}
	else
	{
		unk_0xCE41CD0179F8640B(joaat("peyote"));
	}
	func_18(&iLocal_71);
	if (func_171(iLocal_74))
	{
		unk_0x439C904840715871(iLocal_74, 1);
	}
	unk_0xF6ECB54A7941386F(0);
	unk_0x425BBE19F25A57AB(1f);
	func_155(39, 0);
	func_155(40, 0);
	func_155(41, 0);
	func_155(42, 0);
	func_155(43, 0);
	func_155(44, 0);
	func_241(-1);
	func_74(&uLocal_136, 0, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_241(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_143();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_190())
	{
		func_245(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_113958, 1), 64);
		if (func_142(Global_113958) > 0)
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
	func_242(&Global_33008);
	Global_113959 = 0;
	func_196(-1);
}

void func_242(var uParam0)
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

char* func_243(int iParam0, bool bParam1)
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

void func_244(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_245(int iParam0)
{
	func_246(iParam0, 0, func_251(iParam0));
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_213();
	func_249(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &uVar0);
	Var1 = { func_247(&uVar0) };
}

struct<16> func_247(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_207(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_206(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_211(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_209(*uParam0), 64);
	return Var0;
}

void func_248(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_209(*uParam0);
	iVar1 = func_211(*uParam0);
	iVar2 = func_208(*uParam0);
	iVar3 = func_207(*uParam0);
	iVar4 = func_206(*uParam0);
	iVar5 = func_205(*uParam0);
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
	iVar6 = func_204(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_204(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_250(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(uParam0, iParam1);
	func_218(uParam0, iParam2);
	func_217(uParam0, iParam3);
	func_215(uParam0, iParam5);
	func_216(uParam0, iParam4);
	func_214(uParam0, iParam6);
}

int func_251(int iParam0)
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

void func_252(var uParam0, int iParam1, int iParam2, int iParam3)
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

