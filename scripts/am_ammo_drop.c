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
	struct<22> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_60 = 0;
	struct<3> Local_61[32];
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 16;
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
	struct<21> Local_236 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_148(ScriptParam_236))
		{
			func_142();
		}
	}
	while (true)
	{
		func_141();
		if (func_133())
		{
			func_142();
		}
		if (unk_0xF859473E4AD09F30() != iLocal_66)
		{
			func_142();
		}
		if (unk_0x4470BE79F5771783(unk_0x48B835569F078653()) != Local_59.f_17)
		{
			func_142();
		}
		unk_0x102543889D51BCB6();
		switch (func_132(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_130())
				{
					if (func_129() == 1)
					{
						func_128();
						Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 1;
					}
					else if (func_129() == 4)
					{
						Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_129() == 1)
				{
					func_110();
				}
				else if (func_129() == 4)
				{
					Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_109(&(Local_59.f_21));
				if (func_108(&(Local_59.f_21)))
				{
					Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
			
			case 4:
				func_142();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_129())
			{
				case 0:
					if (func_80())
					{
						Local_59.f_0 = 1;
					}
					break;
				
				case 1:
					func_39();
					if (func_1())
					{
						Local_59.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (BitTest(uLocal_62, 8))
	{
		if (!func_38(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!BitTest(Local_59.f_1, 9))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_59.f_1), 9);
			}
			return 0;
		}
		else if (BitTest(Local_59.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_59.f_12 == 0 || Local_59.f_12 == 1)
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_59.f_4))
		{
			if (!func_36(Local_59.f_2))
			{
				return 1;
			}
			if (func_35(Local_59.f_3))
			{
				return 1;
			}
			if (Local_59.f_12 > 0)
			{
				return 1;
			}
		}
		if (BitTest(uLocal_62, 8))
		{
			if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_59.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_59.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_59.f_18 == 1)
			{
				if ((((func_9(unk_0x259BE71D8A81D4FA()) && func_8() != 151) || func_6(unk_0x259BE71D8A81D4FA(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x2FC2FDC413532977(Local_59.f_4))
					{
						func_3(&(Local_59.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

var func_4()
{
	return Global_1574582;
}

var func_5()
{
	return Global_2738934.f_5246;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1916617;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

var func_11(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (unk_0x2FC2FDC413532977(Local_59.f_4))
	{
		if (Global_262145.f_20024 > 0)
		{
			func_32(Global_262145.f_20024, 0);
			func_14(Global_262145.f_20024, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_31(iParam1), 16);
	StringCopy(&Var1, func_30(iParam2), 32);
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
	if (func_29())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4535950[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4535950[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x9CBD6E7B088910A1(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_29())
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_29())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_28()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_22(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_29())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_19(var uParam0)
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
	func_20(&(uParam0->f_14));
	func_20(&(uParam0->f_14.f_13));
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

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_23(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_29())
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
				func_24(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_26(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_25();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_25()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_26(int iParam0)
{
	var uVar0;
	
	if (func_27(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_27(var uParam0)
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

int func_28()
{
	return Global_1574926;
}

int func_29()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

char* func_30(int iParam0)
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

char* func_31(int iParam0)
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

void func_32(int iParam0, int iParam1)
{
	func_34(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_33(iParam0, 0);
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_34(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_33(iVar1, 0);
	}
}

int func_35(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

int func_36(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_37(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_37(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (Local_59.f_12)
	{
		case 0:
			if (Local_59.f_18)
			{
				func_79();
			}
			else
			{
				func_73();
			}
			if (func_43())
			{
				func_42();
				Local_59.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x2FC2FDC413532977(Local_59.f_4))
			{
				func_41(Local_59.f_4, 18);
				if (Local_59.f_15 == 3)
				{
					if (!unk_0x2FC2FDC413532977(Local_59.f_5))
					{
						Local_59.f_15 = 2;
					}
				}
				if (unk_0x2FC2FDC413532977(Local_59.f_2))
				{
					func_40(&(Local_59.f_2));
				}
				else if (Local_59.f_13 == 1)
				{
					Local_59.f_13 = 0;
				}
				if (unk_0x2FC2FDC413532977(Local_59.f_3))
				{
					func_40(&(Local_59.f_3));
				}
				else if (Local_59.f_14 == 1)
				{
					Local_59.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_40(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_41(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0xA306E6FD2A6558E6(iParam1, &uVar3, &uVar4, &uVar5, &uVar6);
	fVar2 = 0,5f;
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(unk_0xAB3646235DE50E93(uParam0)), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0,1f))
	{
		fVar2 = (fVar8 + 0,4f);
	}
	unk_0x7E763410A91A972B(2, unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(uParam0), 1) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_42()
{
	if (!unk_0xC450B06E5AAA0985(uLocal_63))
	{
		uLocal_63 = unk_0x18E23E031A9B798F(unk_0xAB3646235DE50E93(Local_59.f_4));
		if (Local_59.f_18)
		{
			unk_0x4C905FB262965D5D(uLocal_63, 84);
			unk_0x5D3946F818C6B331(uLocal_63, 1,2f);
			unk_0x594D5D0D7071B0DE(uLocal_63, "AMD_BLIPBALL");
		}
		else
		{
			unk_0x4C905FB262965D5D(uLocal_63, 351);
			unk_0x594D5D0D7071B0DE(uLocal_63, "AMD_BLIPN");
			unk_0x5D3946F818C6B331(uLocal_63, 0,7f);
		}
		unk_0x61183D6239A9D7B8(uLocal_63, 2);
		unk_0xF42EBD7CD0682A8B(uLocal_63, 120);
	}
}

int func_43()
{
	if (!BitTest(Local_59.f_1, 7))
	{
		if (func_36(Local_59.f_2))
		{
			if (unk_0x65FFA94B82A71741(unk_0xE38610F405049F71(Local_59.f_2), Local_59.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_59.f_1), 7);
			}
		}
	}
	else if (func_130())
	{
		if (func_46())
		{
			if (func_44())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_44()
{
	unk_0xEC9DAA34BBB4658C(Local_59.f_19.f_1);
	if (unk_0x6252BC0DD8A320DB(Local_59.f_19.f_1))
	{
		if (!unk_0x2FC2FDC413532977(Local_59.f_19) && unk_0x2FC2FDC413532977(Local_59.f_4))
		{
			if (unk_0x78D35ABAF71764AD(1))
			{
				if (func_45(&(Local_59.f_19), Local_59.f_19.f_1, unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(Local_59.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0, 0))
				{
					unk_0x3C1752E361ED8FC9(Local_59.f_19, 1);
					unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_59.f_19), unk_0xCFC0C995455A6204(unk_0xAB3646235DE50E93(Local_59.f_4)));
					unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(Local_59.f_4), unk_0xAB3646235DE50E93(Local_59.f_19), 0, 0f, 0f, 0,25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1, 0);
					unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_59.f_19), 1);
					unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(Local_59.f_19), 0);
					unk_0x79B52EC5A9AB6229(unk_0xAB3646235DE50E93(Local_59.f_19));
					unk_0x1AB7223AC0702871(unk_0xAB3646235DE50E93(Local_59.f_19), 0f, 0f, -0,2f);
					unk_0xA713C2357FA1526D(unk_0xAB3646235DE50E93(Local_59.f_19), 1);
				}
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_59.f_19))
	{
		return 0;
	}
	return 1;
}

int func_45(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!unk_0x78D35ABAF71764AD(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x43AFC452F25F3A2F(iParam1, Param2, iParam4, bParam3, iParam5, iParam10));
	}
	else
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x4E55EAB577C13329(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x32C336953C18A3CE(unk_0xAB3646235DE50E93(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(*uParam0), 0, 0);
		}
		if (unk_0xC8D49539708A80B4(unk_0xAB3646235DE50E93(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_59.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(joaat("p_cargo_chute_s"));
	if (unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x2FC2FDC413532977(Local_59.f_4) && !unk_0x2FC2FDC413532977(Local_59.f_5))
		{
			if (func_36(Local_59.f_2) && unk_0x4D64DFA5BE3B2871(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x2FC2FDC413532977(Local_59.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_59.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_59.f_18 == 0)
					{
						unk_0x0B0C9A0F9AAEB7F0(&iVar2, 12);
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&iVar2, 12);
					}
					Local_59.f_4 = unk_0x16FE0AE33E462D17(unk_0xD0DDC0D0D8D33E57(iVar3, unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_59.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_59.f_18 == 1)
					{
						func_72(unk_0xAB3646235DE50E93(Local_59.f_4));
						unk_0x8BD66D017AB5A655(0);
					}
					unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_59.f_4), 1);
					unk_0x6FDDD37A4022A641(unk_0xAB3646235DE50E93(Local_59.f_4), 1);
					unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_59.f_4), 1);
					unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(Local_59.f_4), 0);
					unk_0x79B52EC5A9AB6229(unk_0xAB3646235DE50E93(Local_59.f_4));
					func_71();
					uVar4 = unk_0xCA369FBC0DE29517();
					unk_0xBD618A73193F9982(uVar4, "Crate_Beeps", unk_0xAB3646235DE50E93(Local_59.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_59.f_16 = unk_0xFCF4655788628D0F(uVar4);
				}
				if (unk_0x2FC2FDC413532977(Local_59.f_4) && !unk_0x2FC2FDC413532977(Local_59.f_5))
				{
					if (func_45(&(Local_59.f_5), joaat("p_cargo_chute_s"), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_59.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						unk_0x3C1752E361ED8FC9(Local_59.f_5, 1);
						unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(Local_59.f_5), unk_0xAB3646235DE50E93(Local_59.f_4), 0, 0f, 0f, 0,1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_59.f_5), 1);
						unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(Local_59.f_5), 0);
						unk_0x5ED9595F4AC7D134(unk_0xAB3646235DE50E93(Local_59.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0x2B2ECB6F6371E59E(unk_0xAB3646235DE50E93(Local_59.f_5));
					}
				}
				func_69();
				if (!BitTest(uLocal_62, 15))
				{
					if (!Local_59.f_18)
					{
						func_68(&uLocal_71, 3, unk_0xC35A3A4C05A4831B(Local_59.f_3), "FM_Pilot_Ammo", 0, 1);
						func_47(&uLocal_71, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 15);
				}
			}
		}
	}
	if (unk_0x2FC2FDC413532977(Local_59.f_4) && unk_0x2FC2FDC413532977(Local_59.f_5))
	{
		return 1;
	}
	return 0;
}

int func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_67(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_48(sParam2, iParam3, 0);
}

int func_48(char* sParam0, int iParam1, bool bParam2)
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
					func_66();
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
		if (func_65(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_64();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_52();
		func_49();
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
		func_66();
	}
	return 0;
}

void func_49()
{
	if (!func_50())
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

int func_50()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_51())
	{
		return 0;
	}
	if (func_10(unk_0x259BE71D8A81D4FA()))
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

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

int func_54()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
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

void func_56()
{
	if (func_63(14))
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
		Global_20930 = func_57();
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

var func_57()
{
	func_58();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_61(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_60(unk_0x4A8C381C258A124D());
			if (func_59(iVar0) && (!func_63(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_59(Global_113969.f_2366.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return func_62(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_62(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_63(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_64()
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

bool func_65(int iParam0, int iParam1)
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

void func_66()
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

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_68(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

int func_69()
{
	if (func_70())
	{
		if (!unk_0x9CFFB7009B578840(iLocal_65))
		{
			iLocal_65 = unk_0xB5BD5079F58A395F("scr_crate_drop_beacon", unk_0xAB3646235DE50E93(Local_59.f_4), 0f, 0f, 0,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0x6154AB43546C6437(iLocal_65, 0,8f, 0,18f, 0,19f, 0);
		}
	}
	if (!unk_0x9CFFB7009B578840(iLocal_65))
	{
		return 0;
	}
	return 1;
}

int func_70()
{
	unk_0x8003D3C0115A1035();
	if (unk_0x6F13318788EDDAD8())
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	if (unk_0x37964484C6C1561D(Local_59.f_16) != -1)
	{
		if (unk_0x2FC2FDC413532977(Local_59.f_4))
		{
			if (!unk_0x9F0C06CFBACDD6A1(unk_0x37964484C6C1561D(Local_59.f_16)))
			{
				unk_0x8E4825CCACA34B58(unk_0x37964484C6C1561D(Local_59.f_16));
			}
			unk_0x394AFAC073E1F277(unk_0x37964484C6C1561D(Local_59.f_16));
		}
		else
		{
			if (!unk_0x9F0C06CFBACDD6A1(unk_0x37964484C6C1561D(Local_59.f_16)))
			{
				unk_0x8E4825CCACA34B58(unk_0x37964484C6C1561D(Local_59.f_16));
			}
			unk_0x394AFAC073E1F277(unk_0x37964484C6C1561D(Local_59.f_16));
		}
	}
}

void func_72(var uParam0)
{
	var uVar0;
	
	unk_0x0B0C9A0F9AAEB7F0(&uVar0, unk_0x383461852896D73D());
	unk_0x4CA2980073803EFF(uParam0, uVar0);
}

void func_73()
{
	var uVar0;
	
	if (!BitTest(uLocal_62, 11))
	{
		if (!unk_0x4C705AAF75363287())
		{
			uVar0 = func_78(1191, -1);
			if (!BitTest(uVar0, 10))
			{
				func_77("AMD_HELP1", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 10);
				func_74(1191, uVar0, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 11);
			}
			else if (!BitTest(uVar0, 11))
			{
				func_77("AMD_HELP2", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 11);
				func_74(1191, uVar0, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 11);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 11);
			}
		}
	}
}

void func_74(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_75(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

var func_75(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_76(uParam1));
}

int func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

void func_77(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_78(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_75(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_79()
{
	var uVar0;
	
	if (!BitTest(uLocal_62, 17))
	{
		if (!unk_0x4C705AAF75363287())
		{
			uVar0 = func_78(1191, -1);
			if (!BitTest(uVar0, 24))
			{
				func_77("BALD_HELP1", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 24);
				func_74(1191, uVar0, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 17);
			}
			else if (!BitTest(uVar0, 25))
			{
				func_77("BALD_HELP2", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 25);
				func_74(1191, uVar0, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 17);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 17);
			}
		}
	}
}

int func_80()
{
	if (func_107(joaat("cuban800")) && func_107(joaat("s_m_m_pilot_02")))
	{
		if (func_105(&uLocal_69, 4000, 0))
		{
			if (func_83() && func_81())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81()
{
	if ((!unk_0x2FC2FDC413532977(Local_59.f_3) && func_107(joaat("s_m_m_pilot_02"))) && unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		if (func_36(Local_59.f_2))
		{
			if (func_82(&(Local_59.f_3), Local_59.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_59.f_3), 1);
				unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_59.f_3), Global_1837309);
				unk_0xC6E8E1D693021E9E(unk_0xC35A3A4C05A4831B(Local_59.f_3), 0);
				unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_59.f_3), 1);
				unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_59.f_3), system::round((200f * Global_262145.f_156)), 0, 0);
				func_128();
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_59.f_3), uLocal_64);
				unk_0x1B8AC60684718568(unk_0xE38610F405049F71(Local_59.f_2), system::round(50f));
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_59.f_3))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_82(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
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

int func_83()
{
	struct<3> Var0;
	var uVar1;
	
	if (!unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		if (func_107(joaat("cuban800")))
		{
			func_102(&Var0, &uVar1);
			if (func_87(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_84(&(Local_59.f_2), joaat("cuban800"), Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_59.f_2), 2);
					unk_0x5D7CD709B34C90F0(unk_0xE38610F405049F71(Local_59.f_2), 0);
					unk_0xC7D381E526A969D3(unk_0xE38610F405049F71(Local_59.f_2), 1);
					unk_0x79B52EC5A9AB6229(unk_0xE38610F405049F71(Local_59.f_2));
					unk_0x93C337B66C95C99B(unk_0xE38610F405049F71(Local_59.f_2), 60f);
					unk_0xA9F7300B498DDED7(unk_0xE38610F405049F71(Local_59.f_2));
					unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_59.f_2), 1, 1, 0);
					unk_0xF9DF73BCBDB93008(unk_0xE38610F405049F71(Local_59.f_2), 0);
					unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_59.f_2), 0);
					unk_0xC2A036647DD761E4(unk_0xE38610F405049F71(Local_59.f_2), 3);
					unk_0xE2F63CAB8DDA4016(unk_0xE38610F405049F71(Local_59.f_2));
					if (Local_59.f_18 == 1)
					{
						unk_0xD0F1DB0E50B367AD(unk_0xE38610F405049F71(Local_59.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("cuban800"));
	return 1;
}

int func_84(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_85(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_85(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_86(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam3 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam2) && system::vdist(Global_2635563.f_3230[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = uParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_86(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (system::vdist(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_87(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_96(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_88(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_88(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_38(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_92(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_38(iVar1, 1, 1))
		{
			if (!func_90(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_89(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
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
								if (unk_0xED977E2AE2CB16EE(func_92(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_92(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_89(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_91(-1, 0) == 8;
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

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

Vector3 func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_95() && Global_1845281[iVar0 /*883*/].f_860) && !func_94(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_93(iParam0);
}

Vector3 func_93(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_94(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_95()
{
	return Global_2684504.f_19;
}

int func_96(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_38(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_89(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_97(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_93(iVar1), Param0, 1) < fParam1)
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

int func_97(int iParam0)
{
	if (func_101(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_100(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_98(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_99(iParam0);
	if (func_27(iVar0))
	{
		if (iVar0 == func_99(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_27(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_51();
}

struct<13> func_100(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_101(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_100(iParam0) };
		Global_2707320 = { func_100(uParam1) };
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

void func_102(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_103(Local_59.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0x97BC40FFA2FFCCD2((Local_59.f_6 - *uParam0), (Local_59.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x2093CB9E0E9B985F((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_103(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_104(Var0, unk_0xD2AA6F822D3A55D2(fParam1, fParam2)) };
	Var0.f_2 = unk_0xD2AA6F822D3A55D2(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_104(struct<3> Param0, float fParam1)
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

int func_105(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_106(uParam0, bParam2, 0);
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

void func_106(var uParam0, bool bParam1, bool bParam2)
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

bool func_107(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_108(var uParam0)
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

void func_109(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_106(uParam0, 0, 0);
		}
	}
}

void func_110()
{
	func_119();
	switch (Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
	{
		case 0:
			if (Local_59.f_12 > 0)
			{
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_115();
			func_111();
			break;
		
		case 2:
			func_142();
			break;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2FC2FDC413532977(Local_59.f_4))
	{
		if (func_38(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			iVar1 = func_114(unk_0x4A8C381C258A124D());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1574580;
			}
			unk_0xACBE463290141D49(unk_0x4A8C381C258A124D(), iVar1, &iVar0);
			if ((func_113(iVar1) && func_112(iVar1)) && unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), iVar1) < iVar0)
			{
			}
			else if (unk_0x93E08E0F531E2C35())
			{
				if (!BitTest(uLocal_62, 12))
				{
					if (!unk_0x4C705AAF75363287())
					{
						if (Local_59.f_18)
						{
							func_77("BALD_HELP3", -1);
						}
						else
						{
							func_77("AMD_HELP3", -1);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 12);
					}
				}
				else if (!BitTest(uLocal_62, 13))
				{
					if (!unk_0x4C705AAF75363287())
					{
						if (unk_0x93BF17E19A9F0E9B(Local_59.f_4))
						{
							if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xAB3646235DE50E93(Local_59.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_105(&uLocal_67, 20000, 0))
								{
									if (!Local_59.f_18)
									{
										func_77("AMD_HELP3", -1);
									}
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_112(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_114(var uParam0)
{
	var uVar0;
	
	unk_0x23B29877D0BE9547(uParam0, &uVar0, 1);
	return uVar0;
}

void func_115()
{
	bool bVar0;
	struct<3> Var1;
	var uVar2;
	
	if (unk_0x93BF17E19A9F0E9B(Local_59.f_4))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_59.f_4) || (!unk_0xB0AB1F334666E337(Local_59.f_4) && unk_0x93E08E0F531E2C35()))
		{
			if (unk_0x93BF17E19A9F0E9B(Local_59.f_5))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_59.f_5) || (!unk_0xB0AB1F334666E337(Local_59.f_5) && unk_0x93E08E0F531E2C35()))
				{
					if (func_118(Local_59.f_4) && func_118(Local_59.f_5))
					{
						if (!BitTest(uLocal_62, 8))
						{
							if (BitTest(uLocal_62, 7))
							{
								if (!unk_0x13CCB1AD131C1082(unk_0xAB3646235DE50E93(Local_59.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 8);
									func_3(&(Local_59.f_5));
									if (Local_59.f_18 == 1)
									{
										func_72(unk_0xAB3646235DE50E93(Local_59.f_4));
									}
								}
							}
						}
						if (!BitTest(uLocal_62, 7))
						{
							if (BitTest(uLocal_62, 6))
							{
								if (unk_0x13CCB1AD131C1082(unk_0xAB3646235DE50E93(Local_59.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 7);
								}
							}
						}
						if (!BitTest(uLocal_62, 6))
						{
							unk_0x43C223EA02402E66(unk_0xAB3646235DE50E93(Local_59.f_4), 2, 0,0245f);
							if (func_116())
							{
								unk_0x5ED9595F4AC7D134(unk_0xAB3646235DE50E93(Local_59.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 6);
								if (unk_0xC450B06E5AAA0985(uLocal_63))
								{
									unk_0xF42EBD7CD0682A8B(uLocal_63, 255);
								}
							}
						}
					}
				}
			}
			if (!BitTest(uLocal_62, 14))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_59.f_19))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_59.f_19) || (!unk_0xB0AB1F334666E337(Local_59.f_19) && unk_0x93E08E0F531E2C35()))
					{
						if (func_118(Local_59.f_19))
						{
							unk_0x43C223EA02402E66(unk_0xAB3646235DE50E93(Local_59.f_19), 2, 0,1f);
							if (unk_0x1C3788A51C49D6AD(unk_0xAB3646235DE50E93(Local_59.f_19), 0))
							{
								if (unk_0x93BF17E19A9F0E9B(Local_59.f_4))
								{
									unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(Local_59.f_4), 1, 1);
									if (Local_59.f_18 == 1)
									{
										func_72(unk_0xAB3646235DE50E93(Local_59.f_4));
									}
								}
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 14);
							}
						}
						if (!BitTest(Local_59.f_1, 8) && BitTest(uLocal_62, 8))
						{
							if (func_118(Local_59.f_19))
							{
								if (!unk_0x642A49B0C066F723(unk_0xAB3646235DE50E93(Local_59.f_19)) && unk_0x5E22EA3310AF52EA(unk_0xAB3646235DE50E93(Local_59.f_19)))
								{
									if (unk_0xF76AF9D45D6BDA45(unk_0xAB3646235DE50E93(Local_59.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0x3F18810075C77D41(unk_0xAB3646235DE50E93(Local_59.f_19)) && unk_0x0D7186810BF44109(unk_0xAB3646235DE50E93(Local_59.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0xA713C2357FA1526D(unk_0xAB3646235DE50E93(Local_59.f_19), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_59.f_1), 8);
									}
									if (Local_59.f_18 == 1)
									{
										func_72(unk_0xAB3646235DE50E93(Local_59.f_4));
									}
								}
							}
						}
					}
				}
			}
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(Local_59.f_4), 1) };
			if (Var1.f_2 < -50f && !unk_0x69799E0840A34AFB(unk_0xAB3646235DE50E93(Local_59.f_4)))
			{
				if (func_118(Local_59.f_4))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0xAB3646235DE50E93(Local_59.f_4), Local_59.f_6, 1, 0, 0, 1);
					if (Local_59.f_18 == 1)
					{
						func_72(unk_0xAB3646235DE50E93(Local_59.f_4));
					}
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_59.f_4))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_59.f_19) && unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(Local_59.f_4)))
				{
					uVar2 = unk_0xAB3646235DE50E93(Local_59.f_19);
				}
				else
				{
					uVar2 = unk_0xAB3646235DE50E93(Local_59.f_4);
				}
			}
			if (unk_0xFC8BFE4B41177C22(uVar2))
			{
				if (!BitTest(uLocal_62, 16))
				{
					if (unk_0x837FF265C016E3B7(iVar2) >= 0,9f)
					{
						if (unk_0x37964484C6C1561D(Local_59.f_16) != -1)
						{
							unk_0x3F002AA9562BF0BE(unk_0x37964484C6C1561D(Local_59.f_16), "Crate_Underwater", 1f);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 16);
					}
				}
				else if (unk_0x837FF265C016E3B7(iVar2) < 0,9f)
				{
					if (unk_0x37964484C6C1561D(Local_59.f_16) != -1)
					{
						unk_0x3F002AA9562BF0BE(unk_0x37964484C6C1561D(Local_59.f_16), "Crate_Underwater", 0f);
					}
					unk_0x8744D2E3FC95740E(&uLocal_62, 16);
				}
			}
		}
	}
}

int func_116()
{
	int iVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_59.f_19))
	{
		if (!unk_0x3F18810075C77D41(unk_0xAB3646235DE50E93(Local_59.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x1C3788A51C49D6AD(unk_0xAB3646235DE50E93(Local_59.f_19), 0))
		{
			iVar0 = 1;
		}
		if (unk_0x69799E0840A34AFB(unk_0xAB3646235DE50E93(Local_59.f_19)))
		{
			iVar0 = 1;
		}
		if (func_117())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_118(Local_59.f_19))
			{
				unk_0xA713C2357FA1526D(unk_0xAB3646235DE50E93(Local_59.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_117()
{
	float fVar0;
	
	fVar0 = unk_0xED4193081E867405(unk_0xAB3646235DE50E93(Local_59.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x5E674CD80769B53A(unk_0xAB3646235DE50E93(Local_59.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_118(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

void func_119()
{
	int iVar0;
	
	iVar0 = unk_0xF46F370442FAD8F9(false, 0);
	if (Local_59.f_13 != iVar0)
	{
		if (Local_59.f_13 > 0 || !unk_0x2FC2FDC413532977(Local_59.f_2))
		{
			if (Local_59.f_13 < iVar0 || func_127(Local_59.f_13, 0, 1))
			{
				unk_0x552B3BADB43FF551(Local_59.f_13);
			}
		}
	}
	iVar0 = unk_0xA0522491D076C1E6(false, 0);
	if (Local_59.f_14 != iVar0)
	{
		if (Local_59.f_14 > 0 || !unk_0x2FC2FDC413532977(Local_59.f_3))
		{
			if (Local_59.f_14 < iVar0 || func_126(Local_59.f_14, 0, 1))
			{
				unk_0x17C7D9B3979F5759(Local_59.f_14);
			}
		}
	}
	iVar0 = unk_0xD1797191721E17CE(false, 0);
	if (Local_59.f_15 != iVar0)
	{
		if (Local_59.f_15 < iVar0 || func_120(Local_59.f_15, 0, 1))
		{
			unk_0xB7F37A0A1E8A175E(Local_59.f_15);
		}
	}
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(2, iParam0, 1, bParam1, bParam2);
}

int func_121(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_125(iParam0) - func_124(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_124(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_125(iParam0) - func_123(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_124(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_125(iParam0) - func_124(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_122(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
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

int func_123(int iParam0)
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

int func_124(int iParam0, bool bParam1)
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

int func_125(int iParam0)
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

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(0, iParam0, 1, bParam1, bParam2);
}

int func_127(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(1, iParam0, 1, bParam1, bParam2);
}

void func_128()
{
	if (!BitTest(uLocal_62, 10))
	{
		if (func_36(Local_59.f_2))
		{
			unk_0xB5396F1FB088FE38(&uLocal_64);
			unk_0xCF6CC9EA0D2EFE23(0, unk_0xE38610F405049F71(Local_59.f_2), Local_59.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0xCF6CC9EA0D2EFE23(0, unk_0xE38610F405049F71(Local_59.f_2), Local_59.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x93C0674FC00824D0(uLocal_64);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_62, 10);
		}
	}
}

int func_129()
{
	return Local_59.f_0;
}

int func_130()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_59.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(joaat("p_cargo_chute_s"));
	if ((unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(joaat("p_cargo_chute_s"))) && func_131())
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	unk_0x80813AC549A1E8AE("P_cargo_chute_S");
	if (unk_0xE100DD4F82A51BDE("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	return Local_61[iParam0 /*3*/];
}

int func_133()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_140())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_139())
	{
		return 1;
	}
	if (func_138(159))
	{
		if (!func_137())
		{
			return 1;
		}
	}
	if (func_138(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_134() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_134()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_134()
{
	switch (func_136())
	{
		case 0:
			return func_135();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_135()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_136()
{
	return Global_32948;
}

bool func_137()
{
	return Global_2684504.f_700;
}

int func_138(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return Global_2696172;
}

bool func_140()
{
	return Global_2684504.f_695;
}

void func_141()
{
	system::wait(0);
}

void func_142()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xC450B06E5AAA0985(uLocal_63))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_63);
	}
	if (unk_0x93E08E0F531E2C35())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_59.f_19))
				{
					if (unk_0x1C3788A51C49D6AD(unk_0xAB3646235DE50E93(Local_59.f_19), 0))
					{
						if (func_118(Local_59.f_19))
						{
							unk_0xA713C2357FA1526D(unk_0xAB3646235DE50E93(Local_59.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_59.f_4))
				{
					if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(Local_59.f_4)))
					{
						if (func_118(Local_59.f_4))
						{
							unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(Local_59.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_59.f_5))
				{
					if (func_118(Local_59.f_5))
					{
						func_3(&(Local_59.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				system::wait(0);
			}
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_909), 2);
		Local_59.f_0 = 4;
		func_146(func_147(1, 1), 8, func_51());
	}
	func_145();
	func_71();
	func_144();
	func_143();
}

void func_143()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_144()
{
	if (BitTest(uLocal_62, 10))
	{
		unk_0xD0557B139A542F12(&uLocal_64);
	}
}

void func_145()
{
	if (iLocal_65 != 0)
	{
		if (unk_0x9CFFB7009B578840(iLocal_65))
		{
			unk_0x182120534CCF9023(iLocal_65, 0);
			iLocal_65 = 0;
		}
	}
}

void func_146(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -836944817;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 7, iParam0, Var0.f_0);
	}
}

int func_147(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_38(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_90(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_148(struct<21> Param0)
{
	int iVar0;
	
	func_152(func_153(Param0.f_0), Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	unk_0xB7F37A0A1E8A175E(2);
	func_150(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_59, 23, 0);
	unk_0x7B13DC83218D9AF5(&Local_61, 97, 0);
	if (!func_149())
	{
		return 0;
	}
	unk_0xAECC5FA98C879D67(0);
	if (unk_0x93E08E0F531E2C35())
	{
		Local_59.f_17 = unk_0x259BE71D8A81D4FA();
		Local_59.f_6 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, (5f * 1,5f), 0f) };
		Local_59.f_13 = 1;
		Local_59.f_14 = 1;
		Local_59.f_15 = 3;
		Local_59.f_9 = { 0f, 0f, 500f };
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_909), 2);
		if (Param0.f_20 == 3)
		{
			Local_59.f_18 = 1;
		}
		iVar0 = unk_0xC5935DFB3F39785A(0, 3);
		if (iVar0 == 1)
		{
			Local_59.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_59.f_9 = -9000f;
		}
		iVar0 = unk_0xC5935DFB3F39785A(0, 3);
		if (iVar0 == 1)
		{
			Local_59.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_59.f_9.f_1 = -9000f;
		}
		if (Local_59.f_9 == 0f && Local_59.f_9.f_1 == 0f)
		{
			Local_59.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_66 = unk_0xF859473E4AD09F30();
	if (unk_0x76CD105BCAC6EB9F())
	{
		Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
	}
	return 1;
}

int func_149()
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
		if (func_140())
		{
			return 0;
		}
		if (func_138(157))
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

int func_150(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_143();
			}
			else
			{
				return 0;
			}
		}
		if (!func_151(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_143();
					}
					else
					{
						return 0;
					}
				}
				if (func_140())
				{
					if (!bParam2)
					{
						func_143();
					}
					else
					{
						return 0;
					}
				}
				if (func_138(157))
				{
					if (!bParam2)
					{
						func_143();
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
					func_143();
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
				func_143();
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
			func_143();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_151(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_152(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_143();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_154(func_155(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_155(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

