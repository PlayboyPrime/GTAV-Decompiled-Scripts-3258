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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47[4] = { 0, 0, 0, 0 };
	var uLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	struct<3> Local_51[4];
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
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
	bLocal_54 = true;
	iLocal_60 = joaat("s_m_m_pilot_01");
	iLocal_75 = 500;
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_12();
	}
	uLocal_73 = unk_0x4A8C381C258A124D();
	while (true)
	{
		if (unk_0x1C2F771CDC87A3A5(uLocal_73, 0))
		{
			iLocal_74 = 5;
		}
		switch (iLocal_74)
		{
			case 0:
				iLocal_74 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_74 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_74 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_74 = 4;
				break;
			
			case 4:
				if (Global_98441)
				{
					iLocal_74 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		system::wait(iLocal_75);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_47[iVar0]))
		{
			if (unk_0xF6C26AE940C14749(uLocal_47[iVar0]) || (!unk_0x1C2F771CDC87A3A5(uLocal_47[iVar0], 0) && !unk_0xE5E2AE8B19267B8A(uLocal_47[iVar0])))
			{
				unk_0x8C1F7D7A31B2A38E(&(uLocal_47[iVar0]));
				unk_0x734A9F4537A31459(&(uLocal_49[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_47[iVar0]), &(uLocal_49[iVar0]));
				unk_0x68298CA6191CDFDB(&(uLocal_47[iVar0]));
				unk_0xF09E30AF1B8FB379(&(uLocal_49[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_48))
	{
		if (unk_0xF6C26AE940C14749(uLocal_48))
		{
			unk_0x8C1F7D7A31B2A38E(&uLocal_48);
			unk_0x734A9F4537A31459(&uLocal_50);
		}
		else
		{
			func_2(&uLocal_48, &uLocal_50);
			unk_0x68298CA6191CDFDB(&uLocal_48);
			unk_0xF09E30AF1B8FB379(&uLocal_50);
		}
	}
	if (bLocal_58)
	{
		unk_0x7821F942CAEEBEE1(101, "AirportJetTakeOff");
		unk_0x7821F942CAEEBEE1(102, "AirportJetTakeOff");
		unk_0x7821F942CAEEBEE1(101, "AirportNew");
		unk_0x7821F942CAEEBEE1(102, "AirportNew");
		unk_0x7821F942CAEEBEE1(103, "AirplaneLandingRedux");
		unk_0x7821F942CAEEBEE1(104, "AirplaneLandingRedux");
		unk_0x7821F942CAEEBEE1(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((unk_0xFC8BFE4B41177C22(*uParam0) && unk_0xFC8BFE4B41177C22(*uParam1)) && !unk_0x1C2F771CDC87A3A5(*uParam0, 0)) && !unk_0x1C2F771CDC87A3A5(*uParam1, 0))
	{
		if (unk_0x3F18810075C77D41(*uParam0))
		{
			if (unk_0x050D073F91C5243C(*uParam0))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x8737E7B1F3150A9F(*uParam1, *uParam0, 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_54)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[0], 0))
		{
			if (unk_0x3F18810075C77D41(uLocal_47[0]))
			{
				if (!unk_0x050D073F91C5243C(uLocal_47[0]))
				{
					if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0)) && !unk_0x1C2F771CDC87A3A5(uLocal_47[0], 0))
					{
						unk_0x8737E7B1F3150A9F(uLocal_49[0], uLocal_47[0], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0)) && !unk_0x1C2F771CDC87A3A5(uLocal_47[0], 0))
					{
						unk_0x8737E7B1F3150A9F(uLocal_49[0], uLocal_47[0], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_47[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[2], 0))
		{
			if (unk_0x3F18810075C77D41(uLocal_47[2]))
			{
				if (!unk_0x050D073F91C5243C(uLocal_47[2]))
				{
					if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0)) && !unk_0x1C2F771CDC87A3A5(uLocal_47[2], 0))
					{
						unk_0x8737E7B1F3150A9F(uLocal_49[2], uLocal_47[2], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0)) && !unk_0x1C2F771CDC87A3A5(uLocal_47[2], 0))
					{
						unk_0x8737E7B1F3150A9F(uLocal_49[2], uLocal_47[2], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_64)
	{
		case 0:
			Local_51[0 /*3*/] = { -1542,113f, -3023,802f, 23,2538f };
			Local_51[1 /*3*/] = { -3089,888f, -1960,075f, 313,559f };
			Local_51[2 /*3*/] = { -1037,638f, -3316,12f, 23,2475f };
			Local_51[3 /*3*/] = { 451,174f, -4009,46f, 135,1171f };
			Local_52 = { -1612,174f, -2688,442f, 12,9444f };
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if ((unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					bLocal_54 = false;
				}
				else
				{
					bLocal_54 = true;
				}
			}
			iLocal_64 = 1;
			break;
		
		case 1:
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
			unk_0xEC9DAA34BBB4658C(iLocal_60);
			unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
			unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
			unk_0xD772E6694B8472A6(101, "EastWestFlight");
			unk_0xD772E6694B8472A6(101, "AirportNew");
			unk_0xD772E6694B8472A6(104, "AirplaneLandingRedux");
			iLocal_64 = 2;
			break;
		
		case 2:
			if (!bLocal_58)
			{
				if ((((((unk_0x6252BC0DD8A320DB(joaat("jet")) && unk_0x6252BC0DD8A320DB(iLocal_60)) && unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff")) && unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux")) && unk_0x266D9DB5FCE4003B(101, "AirportNew")) && unk_0x266D9DB5FCE4003B(104, "AirplaneLandingRedux")) && unk_0x266D9DB5FCE4003B(101, "EastWestFlight"))
				{
					bLocal_58 = true;
				}
				else
				{
					unk_0xEC9DAA34BBB4658C(joaat("jet"));
					unk_0xEC9DAA34BBB4658C(iLocal_60);
					unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
					unk_0xD772E6694B8472A6(102, "AirportJetTakeOff");
					unk_0xD772E6694B8472A6(101, "AirportNew");
					unk_0xD772E6694B8472A6(102, "AirportNew");
					unk_0xD772E6694B8472A6(101, "EastWestFlight");
				}
			}
			if (bLocal_58)
			{
				if (!unk_0x7B780C491DEC834E(Local_51[0 /*3*/], 50f) && !unk_0x7B780C491DEC834E(Local_52, 50f))
				{
					iLocal_64 = 3;
				}
				else
				{
					if (unk_0x7B780C491DEC834E(Local_51[0 /*3*/], 50f))
					{
					}
					if (unk_0x7B780C491DEC834E(Local_52, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_47[0] = unk_0x5779387E956077A6(joaat("jet"), Local_51[0 /*3*/], 0, 1, 1, 0);
			unk_0x5C96CEA06531AB03(uLocal_47[0], 240,3179f);
			unk_0x6A59D337CB7DD7E0(uLocal_47[0], 0);
			uLocal_47[1] = unk_0x5779387E956077A6(joaat("jet"), Local_51[1 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_47[1], 0);
			uLocal_47[2] = unk_0x5779387E956077A6(joaat("jet"), Local_51[2 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_47[2], 0);
			uLocal_47[3] = unk_0x5779387E956077A6(joaat("jet"), Local_51[3 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_47[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_47[iVar0]))
				{
					uLocal_49[iVar0] = unk_0x8728A378EF2B46B2(uLocal_47[iVar0], 4, iLocal_60, -1, 1, 1);
					unk_0xF88FC425EC7D675D(uLocal_47[iVar0], 1000);
					unk_0xC229299217554C78(uLocal_47[iVar0], 1, 1, 0);
					unk_0xAAA71DD7E9059338(uLocal_49[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_47[1]), &(uLocal_49[1]));
			func_8(&(uLocal_47[2]), &(uLocal_49[2]));
			func_8(&(uLocal_47[3]), &(uLocal_49[3]));
			if (bLocal_54)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_47[0]))
				{
					if (unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff"))
					{
						unk_0x9CCFFF877AB82ACA(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_53 = 1;
					}
					else
					{
						unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_64 = 4;
			break;
		
		case 4:
			if (iLocal_57)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_47[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[3], 0))
				{
					if (unk_0xF6C26AE940C14749(uLocal_47[3]))
					{
						if (!iLocal_55)
						{
							func_8(&(uLocal_47[3]), &(uLocal_49[3]));
							iLocal_55 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_63)
			{
				case 0:
					if (!iLocal_53)
					{
						if (bLocal_54)
						{
							if (unk_0xFC8BFE4B41177C22(uLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[0], 0))
							{
								if (unk_0xF6C26AE940C14749(uLocal_47[0]) && !unk_0x7B780C491DEC834E(Local_51[0 /*3*/], 50f))
								{
									if (unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff"))
									{
										unk_0x9CCFFF877AB82ACA(uLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_53 = 1;
									}
									else
									{
										unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_53)
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_47[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[0], 0))
						{
							if (unk_0x050D073F91C5243C(uLocal_47[0]))
							{
								fLocal_61 = unk_0x942B90900E176BD7(uLocal_47[0]);
							}
						}
						if (fLocal_61 > 1100f)
						{
							iLocal_63 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xFC8BFE4B41177C22(uLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[1], 0))
					{
						if (bLocal_54)
						{
							if (unk_0xF6C26AE940C14749(uLocal_47[1]))
							{
								if (iLocal_57)
								{
									if (iLocal_55)
									{
										func_6(&(uLocal_47[1]), &(uLocal_49[1]));
										if (unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux"))
										{
											unk_0x9CCFFF877AB82ACA(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_56 = 0;
											iLocal_63 = 2;
										}
										else
										{
											unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_47[1]), &(uLocal_49[1]));
									if (unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux"))
									{
										unk_0x9CCFFF877AB82ACA(uLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_56 = 0;
										iLocal_63 = 2;
									}
									else
									{
										unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xFC8BFE4B41177C22(uLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[1], 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_47[1]))
						{
							iLocal_63 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0xFC8BFE4B41177C22(uLocal_47[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[2], 0))
					{
						if (unk_0x266D9DB5FCE4003B(101, "AirportNew"))
						{
							if (!unk_0x7B780C491DEC834E(Local_51[2 /*3*/], 50f))
							{
								if (!unk_0x050D073F91C5243C(uLocal_47[2]))
								{
									func_6(&(uLocal_47[2]), &(uLocal_49[2]));
									unk_0x88556DA0593A0748(uLocal_47[2], 101, "AirportNew", 1);
									iLocal_63 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0xFC8BFE4B41177C22(uLocal_47[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[2], 0))
					{
						if (unk_0x050D073F91C5243C(uLocal_47[2]))
						{
							fLocal_62 = unk_0x942B90900E176BD7(uLocal_47[2]);
						}
					}
					if (unk_0xFC8BFE4B41177C22(uLocal_47[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[1], 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_47[1]))
						{
							if (unk_0xF6C26AE940C14749(uLocal_47[1]))
							{
								func_8(&(uLocal_47[1]), &(uLocal_49[1]));
								iLocal_56 = 1;
							}
						}
					}
					if (fLocal_62 > 1100f)
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_47[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[3], 0))
						{
							if (unk_0x266D9DB5FCE4003B(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x7B780C491DEC834E(Local_51[3 /*3*/], 50f))
								{
									if (!unk_0x050D073F91C5243C(uLocal_47[3]) && iLocal_56)
									{
										func_6(&(uLocal_47[3]), &(uLocal_49[3]));
										unk_0x88556DA0593A0748(uLocal_47[3], 104, "AirplaneLandingRedux", 1);
										iLocal_63 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xFC8BFE4B41177C22(uLocal_47[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_47[3], 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_47[3]))
						{
							func_5();
							iLocal_63 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_61 = 0f;
	iLocal_53 = 0;
	iLocal_57 = 1;
	iLocal_55 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0x4285E11B28063EE0(*uParam0, 1, 0);
	unk_0x4285E11B28063EE0(*uParam1, 1, 0);
	unk_0x44C48AC14D3C09ED(*uParam0, 1, 0);
	unk_0x5D7CD709B34C90F0(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_59)
	{
		case 0:
			if (!unk_0xFC8BFE4B41177C22(uLocal_48))
			{
				uLocal_48 = unk_0x5779387E956077A6(joaat("jet"), -65,3177f, 15,4603f, 703,106f, 0, 1, 1, 0);
				unk_0xF88FC425EC7D675D(uLocal_48, 1000);
				unk_0xC229299217554C78(uLocal_48, 1, 1, 0);
				unk_0x6A59D337CB7DD7E0(uLocal_48, 0);
				uLocal_50 = unk_0x8728A378EF2B46B2(uLocal_48, 4, iLocal_60, -1, 1, 1);
				unk_0xAAA71DD7E9059338(uLocal_50, 1);
				iLocal_59 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(uLocal_48) && !unk_0x1C2F771CDC87A3A5(uLocal_48, 0))
			{
				if (unk_0x266D9DB5FCE4003B(101, "EastWestFlight"))
				{
					if (!unk_0x050D073F91C5243C(uLocal_48))
					{
						unk_0x9CCFFF877AB82ACA(uLocal_48, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_59 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			if (unk_0xFC8BFE4B41177C22(uLocal_48) && !unk_0x1C2F771CDC87A3A5(uLocal_48, 0))
			{
				if (!unk_0x050D073F91C5243C(uLocal_48))
				{
					if ((unk_0xF6C26AE940C14749(uLocal_48) && !unk_0x7B780C491DEC834E(-1602,086f, -2674,039f, 12,9444f, 50f)) && system::vdist2(Var0, unk_0xD1A6A821F5AC81DB(uLocal_48, 1)) > 62500f)
					{
						iLocal_59 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0x4285E11B28063EE0(*uParam0, 0, 0);
	unk_0x4285E11B28063EE0(*uParam1, 0, 0);
	unk_0x44C48AC14D3C09ED(*uParam0, 0, 0);
	unk_0x5D7CD709B34C90F0(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0xBBC29EBE6E1A48FA();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (unk_0xFC8BFE4B41177C22(uLocal_65))
	{
		if (unk_0xF6C26AE940C14749(uLocal_65))
		{
			unk_0x8C1F7D7A31B2A38E(&uLocal_65);
		}
		else if (!unk_0x1C2F771CDC87A3A5(uLocal_65, 0) && !unk_0x4FAFF4BCB7633475(uLocal_66))
		{
			unk_0x1D2DAF2A41FFC4A0(uLocal_65);
			unk_0x44FB298D6382876D(uLocal_66, 1);
			Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_65, 1) };
			uVar3 = unk_0xCFC0C995455A6204(uLocal_65);
			Var1 = { 0f, 500f, 50f };
			Var2 = { unk_0xF10F2A2453AF1DFB(Var0, uVar3, Var1) };
			unk_0xDAC27BA46D21818F(uLocal_66, uLocal_65, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_71)
	{
		unk_0x7821F942CAEEBEE1(102, "HelicopterTakeOff");
	}
}

