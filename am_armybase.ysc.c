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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
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
	vector3 vLocal_82 = { 0f, 0f, 0f };
	struct<4> Local_83 = { 2, 0, 0, 3 } ;
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
	var uLocal_101 = 2;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 2;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<8> Local_107[32];
	struct<184> Local_108 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<21> Local_122 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 0x00000001;
	iLocal_3 = 0x00000086;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000086;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x0000000C;
	iLocal_11 = 0x0000000C;
	fLocal_14 = 0.001f;
	iLocal_17 = 0xFFFFFFFF;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	vLocal_82 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_117 = 0xFFFFFFFF;
	if (unk_0x8CD06866876216F2())
	{
		func_187(ScriptParam_122);
	}
	else
	{
		func_184();
	}
	while (0x00000001)
	{
		func_183();
		func_175();
		if (func_164() || unk_0x09BE1E6DF7B80B43())
		{
			func_184();
		}
		if (unk_0x8CD06866876216F2())
		{
			if ((func_158() && !Global_40001.f_53DB) && !unk_0xA14BB9332558B949())
			{
				func_151();
			}
			if (func_40())
			{
				func_184();
			}
			if (func_37(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000003))
				{
					unk_0x5D96D8530B3D0904(&(Local_108.f_B6), 0x00000003);
				}
			}
			if ((((((((((!Global_18045C && !func_36(0x00000002)) && !func_33(unk_0xD803B885F5E47A62(), 0x00000000)) && !unk_0x991B1F0980C62628()) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_31(unk_0xD803B885F5E47A62())) && !func_29(func_30(unk_0xD803B885F5E47A62()))) && !func_27(unk_0xD803B885F5E47A62(), 0x00000092)) && !func_23(unk_0xD803B885F5E47A62())) && !func_22(unk_0xD803B885F5E47A62())) && !func_21())
			{
				if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000003E8, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x000003E8))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000000))
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!func_158())
							{
								func_18();
								if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
								{
									if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x00000000, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000004)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000004) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (!func_17(&(Local_108.f_3)))
									{
										func_14(&(Local_108.f_3));
									}
									else if (func_11(&(Local_108.f_3)) > 20f || Local_108.f_B1)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000004)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000004) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
								}
								else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000004)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000004) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
								}
								else
								{
									unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
								}
							}
							else
							{
								if (Global_26B66F.f_19A4)
								{
									bLocal_110 = 0x00000000;
									Global_26B66F.f_19A4 = 0x00000000;
								}
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 && !iLocal_114)
								{
									iLocal_114 = 0x00000001;
								}
								if (Global_40001.f_53D0 && !func_9(unk_0xD803B885F5E47A62()))
								{
									if ((!bLocal_110 && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000) && iLocal_114)
									{
										unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
										unk_0x34D79252800B23FF(0x00000000);
										iLocal_113 = 0x00000001;
									}
									if (func_2() && !bLocal_110)
									{
										bLocal_110 = 0x00000001;
										unk_0x34D79252800B23FF(0x00000005);
									}
								}
								if (func_2() && !bLocal_110)
								{
									bLocal_110 = 0x00000001;
								}
								if (bLocal_110)
								{
									if (bLocal_111)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000002)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000002) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (bLocal_112)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000003)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000003) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < Global_40001.f_5391)
									{
										unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(Global_40001.f_5391) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
									}
									else
									{
										unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_108.f_3)))
							{
								func_1(&(Local_108.f_3));
							}
							if (Local_108.f_B1)
							{
								Local_108.f_B1 = 0x00000000;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_108.f_B1)
						{
							Local_108.f_B1 = 0x00000001;
						}
						func_18();
					}
				}
				else
				{
					if (Local_108.f_B1)
					{
						Local_108.f_B1 = 0x00000000;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000003E8, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x000003E8)) && !func_8()) && !func_22(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_538B)
		{
			return 0x00000000;
		}
		if (((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0x00000000, 0x00000001, 0x00000000)) || func_7(unk_0xD803B885F5E47A62()))
		{
			bLocal_111 = 0x00000000;
			bLocal_112 = 0x00000000;
			return 0x00000001;
		}
		if (Global_40001.f_5392)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (unk_0xF566283DA9533594(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 0x00000001) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_111 = 0x00000001;
							bLocal_112 = 0x00000000;
							return 0x00000001;
						}
					}
				}
			}
		}
		else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0xF566283DA9533594(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
			{
				if ((!func_5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) && !func_4(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && !func_3(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					bLocal_111 = 0x00000001;
					bLocal_112 = 0x00000000;
					return 0x00000001;
				}
			}
		}
		if (Global_26B66F.f_19A2 || Global_26B66F.f_19A3)
		{
			if (Global_26B66F.f_19A3)
			{
				bLocal_111 = 0x00000000;
				bLocal_112 = 0x00000001;
			}
			else
			{
				bLocal_111 = 0x00000001;
				bLocal_112 = 0x00000000;
			}
			Global_26B66F.f_19A2 = 0x00000000;
			Global_26B66F.f_19A3 = 0x00000000;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003) && unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000011))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_4(int iParam0)
{
	if ((unk_0xF1D385D359D58F72("CreatedByPegasus", 0x00000002) && unk_0x30F813723591D02E(iParam0, "CreatedByPegasus")) && unk_0xB2C7CF65CF9B897C(iParam0, "CreatedByPegasus"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_12B4E)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0x00000000)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 0x73920F8E:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4D570FEF9D230CE7(unk_0x9539D44F3E4492F6(iParam0));
	iVar1 = unk_0x0D1736C2E221BCEA(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x31609A585163CBAC(iVar0) && unk_0x31609A585163CBAC(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x3D1053F9EB43B7AD(unk_0x9539D44F3E4492F6(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x9539D44F3E4492F6(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_8()
{
	return Global_440000 == 0x00000003;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_10(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_18()
{
	if (iLocal_113)
	{
		unk_0x34D79252800B23FF(0x00000005);
	}
	Global_26B66F.f_19A2 = 0x00000000;
	Global_26B66F.f_19A3 = 0x00000000;
	iLocal_113 = 0x00000000;
	bLocal_110 = 0x00000000;
	bLocal_111 = 0x00000000;
	iLocal_114 = 0x00000000;
}

int func_19(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0x00000000;
	vVar0[0x00000000 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0x00000000 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0x00000000] = 88f;
	vVar0[0x00000001 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[0x00000001 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[0x00000001] = 88f;
	vVar0[0x00000002 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[0x00000002 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[0x00000002] = 88f;
	vVar0[0x00000003 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[0x00000003 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[0x00000003] = 88f;
	vVar0[0x00000004 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[0x00000004 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[0x00000004] = 9f;
	vVar0[0x00000005 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[0x00000005 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[0x00000005] = 9.5f;
	vVar0[0x00000006 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[0x00000006 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[0x00000006] = 9.5f;
	vVar0[0x00000007 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[0x00000007 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[0x00000007] = 9.5f;
	vVar0[0x00000008 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[0x00000008 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[0x00000008] = 9.5f;
	vVar0[0x00000009 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[0x00000009 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[0x00000009] = 9.5f;
	vVar0[0x0000000A /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[0x0000000A /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[0x0000000A] = 9.5f;
	vVar0[0x0000000B /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[0x0000000B /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[0x0000000B] = 9.5f;
	vVar0[0x0000000C /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[0x0000000C /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[0x0000000C] = 9.5f;
	iVar3 = 0x0000000D;
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000001:
			vVar0[0x00000000 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0x00000000 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0x00000000] = 171.25f;
			vVar0[0x00000001 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[0x00000001 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[0x00000001] = 132f;
			vVar0[0x00000002 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[0x00000002 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[0x00000002] = 132f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000002:
			vVar0[0x00000000 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0x00000000 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 247f;
			vVar0[0x00000001 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[0x00000001 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 149f;
			vVar0[0x00000002 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[0x00000002 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 185.5f;
			vVar0[0x00000003 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[0x00000003 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 250f;
			vVar0[0x00000004 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[0x00000004 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 193.5f;
			vVar0[0x00000005 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[0x00000005 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 234.5f;
			vVar0[0x00000006 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[0x00000006 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[0x00000006] = 16f;
			vVar0[0x00000007 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[0x00000007 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 80f;
			vVar0[0x00000008 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[0x00000008 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 142f;
			vVar0[0x00000009 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[0x00000009 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000009] = 30.75f;
			vVar0[0x0000000A /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[0x0000000A /*3*/] = { -896.3734f, -3505.715f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000A] = 150f;
			vVar0[0x0000000B /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[0x0000000B /*3*/] = { -1685.626f, -2720.364f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000B] = 29.25f;
			vVar0[0x0000000C /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[0x0000000C /*3*/] = { -1110.198f, -3493.617f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000C] = 43f;
			iVar3 = 0x0000000D;
			break;
		
		case 0x00000003:
			vVar0[0x00000000 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0x00000000 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 255f;
			vVar0[0x00000001 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[0x00000001 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 180f;
			vVar0[0x00000002 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[0x00000002 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 205f;
			vVar0[0x00000003 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[0x00000003 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 86.25f;
			vVar0[0x00000004 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[0x00000004 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 150.5f;
			vVar0[0x00000005 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[0x00000005 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 140.5f;
			vVar0[0x00000006 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[0x00000006 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000006] = 90f;
			vVar0[0x00000007 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[0x00000007 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 100f;
			vVar0[0x00000008 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[0x00000008 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 248.75f;
			vVar0[0x00000009 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[0x00000009 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[0x00000009] = 128f;
			vVar0[0x0000000A /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[0x0000000A /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[0x0000000A] = 140f;
			vVar0[0x0000000B /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[0x0000000B /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[0x0000000B] = 16f;
			vVar0[0x0000000C /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[0x0000000C /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[0x0000000C] = 214.25f;
			vVar0[0x0000000D /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[0x0000000D /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[0x0000000D] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0x00000000;
			}
			vVar1[0x00000009 /*3*/].f_2 = (vVar1[0x00000009 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000A /*3*/].f_2 = (vVar1[0x0000000A /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000B /*3*/].f_2 = (vVar1[0x0000000B /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000C /*3*/].f_2 = (vVar1[0x0000000C /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000D /*3*/].f_2 = (vVar1[0x0000000D /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 0x0000000E;
			break;
		
		case 0x00000004:
			vVar0[0x00000000 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0x00000000 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000000] = 114f;
			vVar0[0x00000001 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[0x00000001 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000001] = 88.5f;
			vVar0[0x00000002 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[0x00000002 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000002] = 133.25f;
			vVar0[0x00000003 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[0x00000003 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000003] = 104.5f;
			vVar0[0x00000004 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[0x00000004 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000004] = 121.75f;
			vVar0[0x00000005 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[0x00000005 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000005] = 84.5f;
			vVar0[0x00000006 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[0x00000006 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000006] = 103.75f;
			vVar0[0x00000007 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[0x00000007 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000007] = 104.25f;
			vVar0[0x00000008 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[0x00000008 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000008] = 91f;
			vVar0[0x00000009 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[0x00000009 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000009] = 51.25f;
			iVar3 = 0x0000000A;
			break;
		
		case 0x00000005:
			vVar0[0x00000000 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0x00000000 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000000] = 45.75f;
			vVar0[0x00000001 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[0x00000001 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000001] = 99f;
			vVar0[0x00000002 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[0x00000002 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000002] = 81.5f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000006:
			vVar0[0x00000000 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0x00000000 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((0x0000000A + iParam2)) };
			fVar2[0x00000000] = 120f;
			vVar0[0x00000001 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[0x00000001 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[0x00000001] = 170f;
			vVar0[0x00000002 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[0x00000002 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[0x00000002] = 12.5f;
			vVar0[0x00000003 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[0x00000003 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[0x00000003] = 9.75f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000007:
			vVar0[0x00000000 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0x00000000 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000000] = 162f;
			vVar0[0x00000001 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[0x00000001 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000001] = 124f;
			vVar0[0x00000002 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[0x00000002 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000002] = 55f;
			vVar0[0x00000003 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[0x00000003 /*3*/] = { -1073.333f, -498.717f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000003] = 142f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000008:
			vVar0[0x00000000 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0x00000000 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0x00000000] = 7.75f;
			vVar0[0x00000001 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[0x00000001 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[0x00000001] = 14.75f;
			vVar0[0x00000002 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[0x00000002 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[0x00000002] = 31.5f;
			vVar0[0x00000003 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[0x00000003 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[0x00000003] = 30.5f;
			vVar0[0x00000004 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[0x00000004 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[0x00000004] = 6.75f;
			iVar3 = 0x00000005;
			break;
	}
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

bool func_21()
{
	return Global_26B66F.f_19A5;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_23(int iParam0)
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000A7:
		case 0x000000A9:
		case 0x000000A8:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_25(int iParam0)
{
	if (func_26(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_28(iParam0);
	}
	return 0x00000000;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x00000090:
		case 0x00000081:
			return 0x00000001;
		
		case 0x0000008D:
			if (func_28(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

int func_31(int iParam0)
{
	if (func_33(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_32())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_32()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_34(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_35();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_35()
{
	return Global_1407E9;
}

bool func_36(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18045B, iParam0);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39() && func_38(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_39()
{
	return 0xFFFFFFFF;
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_128())
		{
			iVar0 = 0x00000001;
		}
	}
	if (func_41())
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_41()
{
	int iVar0;
	
	switch (Local_108.f_6)
	{
		case 0x00000000:
			func_127();
			if ((((((((func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && func_123()) || func_25(unk_0xD803B885F5E47A62()) == 0x0000009F) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E1) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E9) || func_122(unk_0xD803B885F5E47A62())) || func_21()) || Global_18060A) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 0x00000001);
			}
			func_120(&(Local_107[unk_0x57270EE11514DC67() /*8*/]), 0x00000001);
			Local_108.f_B0 = 0x00000001;
			Local_108.f_6 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_119())
			{
				func_120(&(Local_107[unk_0x57270EE11514DC67() /*8*/]), 0x00000002);
				Local_108.f_6 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_118(Local_83.f_14, 0x00000001))
			{
				Local_108.f_6 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if ((!func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_123()) && !func_158())
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000002)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (unk_0x8CD06866876216F2())
			{
				if ((((func_110() && !func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) && !func_123()) && !unk_0xA14BB9332558B949()) && func_108(unk_0xD803B885F5E47A62()) != 0x00000006)
				{
					func_49();
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(unk_0xD803B885F5E47A62()) == 0x000000E1 || func_25(unk_0xD803B885F5E47A62()) == 0x000000E9) || func_122(unk_0xD803B885F5E47A62())) || Global_18060A) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 0x00000001);
			}
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_108.f_6 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if ((((((((func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && func_123()) || func_25(unk_0xD803B885F5E47A62()) == 0x0000009F) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E1) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E9) || func_122(unk_0xD803B885F5E47A62())) || Global_18060A) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 0x00000000);
			}
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_83.f_3[iParam0 /*5*/].f_2 > 0x00000002 && unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]), 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_108.f_AC[iParam0]))
			{
				unk_0x142CC44DB769B57E(&(Local_108.f_AC[iParam0]));
			}
		}
		else if (!unk_0xE4EDC4B0E92C078B(Local_108.f_AC[iParam0]) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 0x00000002)
		{
			Local_108.f_AC[iParam0] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]));
			unk_0x61755AC17D8F538E(Local_108.f_AC[iParam0], 0x00000001);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(Local_108.f_AC[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(Local_108.f_AC[iParam0]));
	}
	switch (Local_83.f_3[iParam0 /*5*/].f_2)
	{
		case 0x00000000:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 0x00000010))
			{
				Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0] = 0x00000000;
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 0x00000010);
			}
			break;
		
		case 0x00000001:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 0x00000001))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 0x00000004)
						{
							if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000001F4, 0x00000000))
							{
								func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 0x00000001);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 0x00000002))
			{
				if (func_46(iParam0))
				{
					iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
					if (!unk_0x437347B10A200C4B(iVar2, 0x00000000))
					{
						if (unk_0x5EDB8AD1D9CB1AC8(iVar2))
						{
							iVar3 = unk_0x6937EA2286828455(iVar2, 0x00000000);
							if ((!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iVar1, 0x00000000)) && !unk_0x437347B10A200C4B(iVar3, 0x00000000))
							{
								unk_0x0C4243AF9A434F34(iVar0, iVar1, iVar3, iVar2, unk_0x68F4C0EC296D3901(iVar2, 0x00000001), 0x00000006, 70f, -1f, 30f, 0x000001F4, 0x00000032, 0x00000001);
								unk_0x40B4CC38578A6E32(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xE69C5AEBE90D20B1(iVar0, 0x00000000);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x437347B10A200C4B(iVar2, 0x00000000))
					{
						if (unk_0x5EDB8AD1D9CB1AC8(iVar2))
						{
							unk_0x2E7E359BC7AA3D39(iVar0, iVar2, unk_0x68F4C0EC296D3901(iVar2, 0x00000001));
						}
					}
				}
				if (func_44(iParam0, 0x00000006))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 0x00000002);
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 0x00000008))
			{
				if (func_46(iParam0))
				{
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
					{
						unk_0x0C4243AF9A434F34(iVar0, iVar1, 0x00000000, 0x00000000, -2076.374f, 3112.294f, 33.13584f, 0x00000009, 70f, -1f, 30f, 0x000001F4, 0x00000032, 0x00000001);
					}
				}
				if (func_44(iParam0, 0x00000009))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 0x00000008);
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0xE9F78D191AD5EDBA(Local_83.f_3[iParam0 /*5*/]) || unk_0xE9F78D191AD5EDBA(Local_83.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]), 0x00000000), 10f) && !unk_0xE8F26853385214AB(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]), 0x00000000), 10f))
				{
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1) && unk_0x526BC32A660C89E6(Local_83.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/].f_1);
						unk_0x2ABAFAE29D459CE5(&iVar4);
					}
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]) && unk_0x526BC32A660C89E6(Local_83.f_3[iParam0 /*5*/]))
					{
						iVar5 = unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]);
						unk_0x2ABAFAE29D459CE5(&iVar5);
					}
				}
			}
			else if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 0x00000010))
			{
				func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 0x00000010);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		return 0x00000001;
	}
	iVar0 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x8CB4A13C7BDA2B13(iVar0) != iParam1)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_107();
	func_102();
	vVar2 = { vLocal_82 };
	if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000003E8, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x000003E8)) || func_100(unk_0x16F2683693E537C9())) && func_99(unk_0x16F2683693E537C9()))
	{
		bVar0 = 0x00000001;
	}
	else
	{
		Local_108.f_B2 = 0x00000000;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0x00000000, 0x00000001, 0x00000000))
	{
		bVar1 = 0x00000001;
	}
	else
	{
		Local_108.f_B3 = 0x00000000;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0x00000000, 0x00000001, 0x00000000))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_108.f_B5 = 0x00000001;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0x00000000, 0x00000001, 0x00000000))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_108.f_B5 = 0x00000002;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1801E4 = 0x00000001;
			func_93(&(Local_108.f_7), 0x00000002);
			func_92(&(Local_108.f_7), 0x00000002);
			func_91(&(Local_108.f_7), 0x00000002, 0x00000000, "AIRMECH", 0x00000000, 0x00000001);
			func_90(&(Local_108.f_7), 0x00000002, vVar2);
			Global_4E7E.f_A2 = { vVar2 };
			Var3 = { func_89() };
			if (!unk_0xEA6BC48857E0AC4C(&Var3))
			{
				if (func_68(&(Local_108.f_7), "SMGFZAU", &Var3, 0x00000007, 0x00000000, 0x00000000, 0x00000000))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000002))
		{
			Global_1801E4 = 0x00000000;
			func_93(&(Local_108.f_7), 0x00000002);
			func_92(&(Local_108.f_7), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Local_108.f_B6), 0x00000002);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_65(0x00003E80, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			func_64(0x00003E80, 0x00000001, 0xFFFFFFFF, 0x00000001);
			if (Global_26B66F.f_19AA)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_B4 = 0x00000001;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", 0xFFFFFFFF);
			}
		}
		else if (!func_65(0x00003E81, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			func_64(0x00003E81, 0x00000001, 0xFFFFFFFF, 0x00000001);
			if (Global_26B66F.f_19AA)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_B4 = 0x00000001;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", 0xFFFFFFFF);
			}
		}
		Local_108.f_B2 = 0x00000001;
	}
	else if (bParam1)
	{
		if (!func_65(0x00003E7F, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			func_64(0x00003E7F, 0x00000001, 0xFFFFFFFF, 0x00000001);
			if (Global_26B66F.f_19AA)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_B4 = 0x00000001;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", 0xFFFFFFFF);
			}
		}
		else if (Local_108.f_B5 == 0x00000001)
		{
			if (!func_65(0x00003E82, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_64(0x00003E82, 0x00000001, 0xFFFFFFFF, 0x00000001);
				if (Global_26B66F.f_19AA)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_108.f_B4 = 0x00000001;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", 0xFFFFFFFF);
				}
			}
		}
		else if (Local_108.f_B5 == 0x00000002)
		{
			if (func_52(0x000046B1, 0xFFFFFFFF, 0xFFFFFFFF) == 0x00000000)
			{
				func_51(0x000046B1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				if (Global_26B66F.f_19AA)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_108.f_B4 = 0x00000001;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", 0xFFFFFFFF);
				}
			}
		}
		Local_108.f_B3 = 0x00000001;
		Local_108.f_B5 = 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(Local_108.f_B6), 0x00000002);
	}
}

var func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x000000FF;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 0x00000008, iParam3);
	return uVar2;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
	}
	iVar0 = 0x00000000;
	iVar1 = func_54(iParam0, iParam1);
	iVar2 = func_53(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

void func_55(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_56(char* sParam0)
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (!func_57(sParam0))
	{
		func_55(sParam0, 0xFFFFFFFF);
	}
}

bool func_57(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_58()
{
	if (func_61(unk_0xD803B885F5E47A62()) && !func_59(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_39();
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_39())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (func_63(iParam0))
	{
		iVar0 = func_62(iParam0);
		if ((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_62(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108;
	}
	return 0x00000000;
}

int func_63(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0x00000000;
	}
	return 0x00000000;
}

int func_64(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_35();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
	}
	iVar1 = func_67(iParam0, iParam1);
	uVar2 = func_66(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	return func_69(sParam2, iParam3, 0x00000000);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
					Global_5150 = 0x00000000;
					Global_514F = 0x00000000;
					Global_4C1D = 0x00000000;
				}
				else
				{
					func_87();
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0x00000000;
		}
		if (func_86(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_85();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam2)
			{
				func_77();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam1 == 0x0000000D)
					{
					}
					else
					{
						return 0x00000000;
					}
				}
				if (Global_4C1E.f_1 > 0x00000003)
				{
					return 0x00000000;
				}
			}
			if (Global_4BFC == 0x00000001)
			{
				return 0x00000000;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (func_76())
				{
					return 0x00000000;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0x00000000;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0x00000000;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						return 0x00000000;
					}
				}
			}
			if (func_75())
			{
				return 0x00000000;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						return 0x00000000;
						break;
					
					case 0x00000008:
						return 0x00000000;
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
				{
					return 0x00000000;
				}
			}
			func_74();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_73();
		func_70();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000002)
	{
	}
	else
	{
		func_87();
	}
	return 0x00000000;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 0x00000004);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_71()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_39())
	{
		return 0x00000000;
	}
	if (func_72(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_72(int iParam0)
{
	return func_10(iParam0, 0x00000014);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000045)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0x00000000);
	Global_5145 = 0x00000001;
}

void func_74()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0x00000000;
	Global_5176 = 0x00000000;
	Global_5177 = 0x00000000;
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000010);
}

int func_75()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000000;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 0x00000001;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_77()
{
	if (func_84(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_78();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

var func_78()
{
	func_79();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_82(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_81(unk_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_84(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_80(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 0x00000091)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 0x00000091;
}

bool func_80(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_83(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000F)
	{
		Global_4E7E[iVar0 /*10*/] = 0x00000000;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0x00000000;
		Global_4E7E[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
	Global_4E7E.f_A1 = 0xFFFFFF9D;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_87()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 0x00000009) || Global_4C1D == 0x00000001)
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = 0x00000003;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
	if (iParam3 == 0x00000000)
	{
		Global_5520 = 0x00000001;
		Global_551E = 0x00000000;
	}
	else
	{
		Global_5520 = 0x00000000;
		Global_551E = 0x00000001;
	}
	if (iParam4 == 0x00000000)
	{
		Global_5521 = 0x00000001;
		Global_551F = 0x00000000;
	}
	else
	{
		Global_5521 = 0x00000000;
		Global_551F = 0x00000001;
	}
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (!func_65(0x00003E7F, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_65(0x00003E82, 0xFFFFFFFF, 0xFFFFFFFF) || func_52(0x000046B1, 0xFFFFFFFF, 0xFFFFFFFF) == 0x00000000)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000003E8, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x000003E8)) || func_100(unk_0x16F2683693E537C9())) && func_99(unk_0x16F2683693E537C9()))
	{
		if (!func_65(0x00003E80, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_65(0x00003E81, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_A1 = iParam1;
	uParam0->f_A2 = { vParam2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 0x00000001;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0x00000000)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000000);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0x00000000)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000000);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000001);
			}
		}
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_A1 = 0xFFFFFF9D;
	uParam0->f_A2 = { 0f, 0f, 0f };
	if (iParam1 < 0x00000000)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

int func_94()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_95()
{
	Global_4CD7 = 0x00000000;
	func_96();
}

void func_96()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_22(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (!Local_108.f_B2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000001))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (!func_65(0x00003E80, 0xFFFFFFFF, 0xFFFFFFFF) || !func_65(0x00003E81, 0xFFFFFFFF, 0xFFFFFFFF))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_108.f_B3)
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || func_98())
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!func_65(0x00003E7F, 0xFFFFFFFF, 0xFFFFFFFF) || !func_65(0x00003E82, 0xFFFFFFFF, 0xFFFFFFFF))
						{
							if (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= -25f && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= 125f)
							{
								return 0x00000001;
							}
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!func_65(0x00003E7F, 0xFFFFFFFF, 0xFFFFFFFF) || func_52(0x000046B1, 0xFFFFFFFF, 0xFFFFFFFF) == 0x00000000)
						{
							if (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= 160f && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= 290f)
							{
								return 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xF566283DA9533594(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 0x00000001) && !func_4(iVar0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

int func_99(int iParam0)
{
	if (unk_0x5EDB8AD1D9CB1AC8(iParam0) || unk_0x398B22FA3FCBDFA9(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_100(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && func_101(iParam0))
	{
		if ((unk_0x3D1053F9EB43B7AD(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_101(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_102()
{
	if (Local_108.f_B4)
	{
		if (!func_106(&(Local_108.f_B7)))
		{
			func_105(&(Local_108.f_B7), 0x00000000, 0x00000000);
		}
		else if (!func_104(&(Local_108.f_B7), 0x00004268, 0x00000000))
		{
			if (!func_57("AB_ENTRY_HT"))
			{
				func_55("AB_ENTRY_HT", 0xFFFFFFFF);
			}
		}
		else if (func_104(&(Local_108.f_B7), 0x00004268, 0x00000000))
		{
			if (func_57("AB_ENTRY_HT"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_103(&(Local_108.f_B7));
			Local_108.f_B4 = 0x00000000;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_105(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		if ((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x000003E8, 0x00000000) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x000003E8)) || func_100(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000000))
			{
				if ((((func_99(unk_0x16F2683693E537C9()) && unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000) && func_98()) && !Global_19C047)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000003))
					{
						unk_0x5D96D8530B3D0904(&(Local_108.f_B6), 0x00000001);
					}
				}
				unk_0x5D96D8530B3D0904(&(Local_108.f_B6), 0x00000000);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_B6), 0x00000000);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000001))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_B6), 0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_B6, 0x00000003))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_B6), 0x00000003);
			}
			if (Global_19C047)
			{
				Global_19C047 = 0x00000000;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_25(iParam0) == 0x000000E9)
	{
		return func_109(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_109(int iParam0)
{
	if (func_26(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (func_38(iVar1, 0x00000000, 0x00000001))
		{
			if (iVar1 != unk_0xD803B885F5E47A62())
			{
				if (func_111(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), unk_0x9539D44F3E4492F6(iVar1)))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0x00000000);
					if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x9539D44F3E4492F6(iVar1))
					{
						if (func_61(iVar1))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 0x00000001;
	}
	if (!unk_0x405E212DDE472467(iParam0, 0x00000000) || !unk_0x405E212DDE472467(iParam1, 0x00000000))
	{
		return 0x00000000;
	}
	return unk_0x6937EA2286828455(iParam0, 0x00000000) == unk_0x6937EA2286828455(iParam1, 0x00000000);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return;
	}
	switch (Local_83.f_15[iParam0])
	{
		case 0x00000000:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000040))
			{
				Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0] = 0x00000000;
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000040);
			}
			break;
		
		case 0x00000001:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000001))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 900f)
					{
						func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000002:
			if ((!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000002) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 900f) && !func_22(unk_0xD803B885F5E47A62()))
			{
				func_91(&(Local_108.f_7), 0x00000004, iVar0, "ARMY_Guard01", 0x00000000, 0x00000001);
				func_117(&(Local_108.f_7), "ARMYAUD", "ARMY_WRN1", 0x0000000C, 0x00000000, 0x00000000, 0x00000000);
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000002);
			}
			break;
		
		case 0x00000003:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000004))
			{
				if (func_116(iParam0))
				{
					unk_0x9BE7E7B6B488CC55(iVar0, func_115(iParam0), 0xFFFFFFFF, 0x00000000);
				}
				if (func_114(iParam0, 0x6134071B))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000004);
				}
			}
			break;
		
		case 0x00000004:
			if ((!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000008) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 900f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001)
			{
				if (!func_17(&Local_108))
				{
					func_14(&Local_108);
				}
				if (func_11(&Local_108) >= 7f && !func_22(unk_0xD803B885F5E47A62()))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000008);
					func_117(&(Local_108.f_7), "ARMYAUD", "ARMY_WRN1a", 0x0000000C, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else if (func_17(&Local_108))
			{
				func_1(&Local_108);
			}
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000010))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 900f)
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000010);
					if (!func_158())
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, unk_0xBC64C2447446D57B(0x00000004));
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, unk_0xBC64C2447446D57B(Global_40001.f_5391));
					}
				}
			}
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000001))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) > 900f)
					{
						func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000010))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 900f)
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000010);
					if (!func_158())
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(0x00000004) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000024, (unk_0xBC64C2447446D57B(Global_40001.f_5391) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
					}
				}
			}
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000001))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) > 900f)
					{
						func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000001);
					}
				}
			}
			if (!func_114(iParam0, 0x6134071B))
			{
				if (func_116(iParam0))
				{
					unk_0x9BE7E7B6B488CC55(iVar0, func_115(iParam0), 0xFFFFFFFF, 0x00000000);
				}
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 0x00000004))
			{
				if (func_116(iParam0))
				{
					unk_0xA3BF0AA5A2608191(iVar0);
				}
				if (!func_114(iParam0, 0x55966344))
				{
					func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000004);
					func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 0x00000040);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iVar0))
	{
		return 0x00000001;
	}
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iVar0))
	{
		return 0x00000001;
	}
	if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar0, 0x00000001)) <= 64f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 0x00000001;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0xD1960163A3042274(iVar0, iParam1) != 0x00000001 && unk_0xD1960163A3042274(iVar0, iParam1) != 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar2 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)));
			if (!unk_0x437347B10A200C4B(iVar2, 0x00000000))
			{
				fVar4 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar2, 0x00000001), unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83[iParam0]), 0x00000001));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000001;
	return func_69(sParam2, iParam3, 0x00000000);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_119()
{
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01")))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("lazer")))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_pilot_01")))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_30(iParam0) == 0x000000EC || func_30(iParam0) == 0x00000096)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_123()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

bool func_126(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_127()
{
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_marine_01"));
	unk_0x523BCC9DC80CD82F(joaat("lazer"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_83.f_13)
	{
		case 0x00000000:
			if (func_150())
			{
				Local_83.f_13 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_149())
			{
				Local_83.f_13 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (((((((func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_123()) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E1) || func_25(unk_0xD803B885F5E47A62()) == 0x000000E9) || func_122(unk_0xD803B885F5E47A62())) || func_21()) || Global_18060A) || (unk_0xA14BB9332558B949() && func_8()))
			{
				func_120(&(Local_83.f_14), 0x00000001);
				Local_83.f_13 = 0x00000003;
			}
			else if (func_147())
			{
				func_120(&(Local_83.f_14), 0x00000001);
				Local_83.f_13 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (!func_124(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_123())
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000002)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(unk_0xD803B885F5E47A62()) == 0x000000E1 || func_25(unk_0xD803B885F5E47A62()) == 0x000000E9) || func_122(unk_0xD803B885F5E47A62())) || Global_18060A) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_83.f_13 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			func_130();
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_129()
{
	if (unk_0x0DC0B2DBBD52B0C0() > 0x00000001)
	{
		return 0x00000000;
	}
	if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83[iVar0]))
		{
			iVar1 = unk_0x1B50683925F00106(Local_83[iVar0]);
			if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0x6DAD7906B73F064D(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x1B50683925F00106(Local_83.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0x6DAD7906B73F064D(&iVar1);
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0xB177666FAB6F4417(Local_83.f_3[iVar0 /*5*/]);
			if (!unk_0x437347B10A200C4B(iVar2, 0x00000000))
			{
				unk_0x046C362CF15F1935(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_83.f_3[iParam0 /*5*/].f_2 > 0x00000002)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1), 0x00000000))
			{
				iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (vVar1.z <= -150f)
				{
					unk_0x6DAD7906B73F064D(&iVar0);
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]), 0x00000000))
						{
							iVar2 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_83.f_3[iParam0 /*5*/].f_2)
	{
		case 0x00000000:
			if (func_143(iParam0, 0x00000010))
			{
				Local_83.f_3[iParam0 /*5*/].f_4 = 0xFFFFFFFF;
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_141(iParam0))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			vVar3 = { func_140(iParam0) };
			if (!func_139(vVar3))
			{
				if (!unk_0xE8F26853385214AB(vVar3, 20f) && !unk_0x8E28E832BEAC3DCE(vVar3, 20f))
				{
					if (func_134(vVar3, unk_0xD9522BA9E27E1349(unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (func_143(iParam0, 0x00000002))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			iVar4 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
			if (!unk_0xC844350D5D58C99A(iVar4))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000005;
			}
			else if (unk_0x437347B10A200C4B(iVar4, 0x00000000))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000005;
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(iVar4) || unk_0x398B22FA3FCBDFA9(iVar4))
			{
				if (func_133(unk_0x6937EA2286828455(iVar4, 0x00000000)))
				{
					Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000005;
				}
			}
			break;
		
		case 0x00000005:
			if (func_143(iParam0, 0x00000008))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000006;
				Local_83.f_3[iParam0 /*5*/].f_4 = 0xFFFFFFFF;
			}
			break;
		
		case 0x00000006:
			if (!func_132(iParam0, 0x00000010))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000000;
			}
			if (func_141(iParam0))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0x00000003;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (func_48(Local_107[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_133(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/]))
	{
		if (!func_136(&(Local_83.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar0 = 0x00000000;
		}
		else
		{
			unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_83.f_3[iParam2 /*5*/]), 0x00000003);
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/]))
	{
		if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_135(&(Local_83.f_3[iParam2 /*5*/].f_1), Local_83.f_3[iParam2 /*5*/], 0x0000001D, joaat("s_m_y_pilot_01"), 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				iVar0 = 0x00000000;
			}
			else
			{
				unk_0x40B4CC38578A6E32(unk_0x1B50683925F00106(Local_83.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xE69C5AEBE90D20B1(unk_0x1B50683925F00106(Local_83.f_3[iParam2 /*5*/].f_1), 0x00000000);
			}
		}
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

int func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_136(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_137(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_137(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_138(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_138(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

int func_139(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0xD9522BA9E27E1349(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)));
			if (!func_142(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0))))
			{
				if (unk_0x5EDB8AD1D9CB1AC8(iVar1) || unk_0x398B22FA3FCBDFA9(iVar1))
				{
					if (unk_0x179932739160BA96(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0))) >= 0x00000004)
					{
						vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
						if (func_20(vVar2, 0x00000003, 0x000003E8, 0x00000000) && vVar2.z > 90f)
						{
							Local_83.f_3[iParam0 /*5*/].f_4 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
							return 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0x00000001;
	}
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iVar1 /*5*/].f_4);
		if (unk_0xC844350D5D58C99A(iVar2))
		{
			if (iParam0 == Local_83.f_3[iVar1 /*5*/].f_4)
			{
				return 0x00000001;
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (!func_48(Local_107[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_144(int iParam0)
{
	switch (Local_83.f_15[iParam0])
	{
		case 0x00000000:
			if (func_146(iParam0, 0x00000040))
			{
				Local_83.f_15[iParam0] = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_145(iParam0, 0x00000001))
			{
				Local_83.f_15[iParam0] = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_145(iParam0, 0x00000002))
			{
				Local_83.f_15[iParam0] = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (func_146(iParam0, 0x00000004))
			{
				Local_83.f_15[iParam0] = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (func_145(iParam0, 0x00000008))
			{
				Local_83.f_15[iParam0] = 0x00000005;
			}
			if (!func_145(iParam0, 0x00000001))
			{
				Local_83.f_15[iParam0] = 0x00000007;
			}
			if (func_145(iParam0, 0x00000010))
			{
				Local_83.f_15[iParam0] = 0x00000006;
			}
			break;
		
		case 0x00000005:
			if (func_145(iParam0, 0x00000010))
			{
				Local_83.f_15[iParam0] = 0x00000006;
			}
			if (!func_145(iParam0, 0x00000001))
			{
				Local_83.f_15[iParam0] = 0x00000007;
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (!func_145(iParam0, 0x00000004))
			{
				Local_83.f_15[iParam0] = 0x00000000;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (func_48(Local_107[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (!func_48(Local_107[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_147()
{
	int iVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	if (!func_148(&(Local_83[0x00000000]), 0x0000001D, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 0x00000001, 0x00000001, 0x00000001))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0xE5DBF9B6126856CA(Local_83[0x00000000]))
	{
		unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_83[0x00000000]), joaat("weapon_assaultrifle"), 0x000000C8, 0x00000001, 0x00000001);
	}
	if (!func_148(&(Local_83[0x00000001]), 0x0000001D, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 0x00000001, 0x00000001, 0x00000001))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0xE5DBF9B6126856CA(Local_83[0x00000001]))
	{
		unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_83[0x00000001]), joaat("weapon_assaultrifle"), 0x000000C8, 0x00000001, 0x00000001);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, bParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			if (!func_118(Local_107[iVar1 /*8*/], 0x00000002))
			{
				iVar0 = 0x00000000;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			if (!func_118(Local_107[iVar1 /*8*/], 0x00000001))
			{
				iVar0 = 0x00000000;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_120) && func_104(&uLocal_120, Global_40001.f_53DC, 0x00000000))
	{
		func_103(&uLocal_120);
	}
	if (func_106(&uLocal_118) && func_104(&uLocal_118, Global_40001.f_53DD, 0x00000000))
	{
		func_103(&uLocal_118);
		iLocal_115 = 0x00000000;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
	{
		if (func_152())
		{
			if (!Global_26B66F.f_19AB)
			{
				Global_26B66F.f_19AB = 0x00000001;
				func_55("BASE_EXP_WARN", 0xFFFFFFFF);
			}
			if (!iLocal_115)
			{
				iLocal_115 = 0x00000001;
				func_105(&uLocal_120, 0x00000000, 0x00000000);
				func_105(&uLocal_118, 0x00000000, 0x00000000);
			}
			else if (!func_106(&uLocal_120))
			{
				unk_0x34D79252800B23FF(0x00000005);
				bLocal_110 = 0x00000001;
				bLocal_111 = 0x00000001;
				iLocal_115 = 0x00000000;
				func_103(&uLocal_120);
				func_103(&uLocal_118);
			}
		}
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000001A)
	{
		func_155(&iLocal_116, iVar1);
		iLocal_117 = func_154();
		if (iLocal_117 >= 0x00000000)
		{
			iVar0 = func_153(iLocal_117);
			if (unk_0xC844350D5D58C99A(iVar0) && unk_0xEC560E589DF8370E(iVar0))
			{
				if (unk_0x940C1429253D3B1B(iVar0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_153(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 0x00000001:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 0x00000002:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 0x00000003:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 0x00000004:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 0x00000005:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 0x00000006:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 0x00000007:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 0x00000008:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 0x00000009:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 0x0000000A:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 0x0000000B:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 0x0000000C:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 0x0000000D:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 0x0000000E:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 0x0000000F:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 0x00000010:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 0x00000011:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 0x00000012:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 0x00000013:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 0x00000014:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 0x00000015:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 0x00000016:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 0x00000017:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 0x00000018:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 0x00000019:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 0x0000001A:
			iVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return iVar0;
}

int func_154()
{
	if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0x00000000;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 0x00000001;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 0x00000002;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 0x00000003;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 0x00000004;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 0x00000005;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 0x00000006;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 0x00000007;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 0x00000008;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 0x00000009;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 0x0000000A;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 0x0000000B;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 0x0000000C;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 0x0000000D;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 0x0000000E;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 0x0000000F;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 0x00000010;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 0x00000011;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 0x00000012;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 0x00000013;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 0x00000014;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 0x00000015;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 0x00000016;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 0x00000017;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 0x00000018;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 0x00000019;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 0x0000001A;
	}
	return 0xFFFFFFFF;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			*uParam0 = 0x00000000;
			break;
		
		case 0x00000001:
			*uParam0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = 0x00000002;
			break;
		
		case 0x00000003:
			*uParam0 = 0x00000003;
			break;
		
		case 0x00000004:
			*uParam0 = 0x00000004;
			break;
		
		case 0x00000005:
			*uParam0 = 0x00000005;
			break;
		
		case 0x00000006:
			*uParam0 = 0x00000013;
			break;
		
		case 0x00000007:
			*uParam0 = 0x00000014;
			break;
		
		case 0x00000008:
			*uParam0 = 0x00000015;
			break;
		
		case 0x00000009:
			*uParam0 = 0x00000020;
			break;
		
		case 0x0000000A:
			*uParam0 = 0x00000024;
			break;
		
		case 0x0000000B:
			*uParam0 = 0x00000028;
			break;
		
		case 0x0000000C:
			*uParam0 = 0x00000029;
			break;
		
		case 0x0000000D:
			*uParam0 = 0x0000002B;
			break;
		
		case 0x0000000E:
			*uParam0 = 0x0000002C;
			break;
		
		case 0x0000000F:
			*uParam0 = 0x0000002D;
			break;
		
		case 0x00000010:
			*uParam0 = 0x0000002E;
			break;
		
		case 0x00000011:
			*uParam0 = 0x0000002F;
			break;
		
		case 0x00000012:
			*uParam0 = 0x00000030;
			break;
		
		case 0x00000013:
			*uParam0 = 0x00000031;
			break;
		
		case 0x00000014:
			*uParam0 = 0x00000032;
			break;
		
		case 0x00000015:
			*uParam0 = 0x00000035;
			break;
		
		case 0x00000016:
			*uParam0 = 0x00000036;
			break;
		
		case 0x00000017:
			*uParam0 = 0x00000037;
			break;
		
		case 0x00000018:
			*uParam0 = 0x00000038;
			break;
		
		case 0x00000019:
			*uParam0 = 0x00000039;
			break;
	}
}

int func_156()
{
	if (func_157(unk_0xD803B885F5E47A62(), 0x00000096) == 0x00000002)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_157(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F0;
	}
	return 0xFFFFFFFF;
}

int func_158()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_157(unk_0xD803B885F5E47A62(), 0x00000096) == 0x00000002)
	{
		return 0x00000001;
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_163(0x00000001))
	{
		iVar0 = func_162();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 0x00000001;
			}
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_38(iVar2, 0x00000000, 0x00000001))
		{
			if (iVar2 != unk_0xD803B885F5E47A62())
			{
				if (func_163(0x00000001))
				{
					if (func_160(unk_0xD803B885F5E47A62(), iVar2))
					{
						if (func_61(iVar2))
						{
							return 0x00000001;
						}
					}
				}
				if (func_159(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), unk_0x9539D44F3E4492F6(iVar2)))
				{
					iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0x00000000);
					if (unk_0xA30B8362589C124A(iVar3, 0xFFFFFFFF, 0x00000000) == unk_0x9539D44F3E4492F6(iVar2))
					{
						if (func_61(iVar2))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0x405E212DDE472467(iParam0, 0x00000000) && unk_0x405E212DDE472467(iParam1, 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
				iVar1 = unk_0x6937EA2286828455(iParam1, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_161(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_161(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_161(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_39();
}

var func_162()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_163(bool bParam0)
{
	return func_59(unk_0xD803B885F5E47A62(), bParam0);
}

int func_164()
{
	var uVar0;
	
	func_172(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_171())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_170())
	{
		return 0x00000001;
	}
	if (func_169(0x0000009F))
	{
		if (!func_168())
		{
			return 0x00000001;
		}
	}
	if (func_169(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_165() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_165()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_165()
{
	switch (func_167())
	{
		case 0x00000000:
			return func_166();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_166()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_7830;
}

bool func_168()
{
	return Global_2564C8.f_256;
}

int func_169(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_170()
{
	return Global_258C08;
}

bool func_171()
{
	return Global_2564C8.f_251;
}

void func_172(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_173(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_173(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_38(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_174(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_174(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_175()
{
	if (unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000) != 0x00000005)
	{
		if (func_182(0x00000005, 0x00000000, 0x00000001))
		{
			if (unk_0xA108079788452A90(0x00000000) <= 0x00000005)
			{
				unk_0x0BEC04ECA8485A3A(0x00000005);
			}
		}
	}
	if (unk_0x11225ACFD0C1477E(0x00000000, 0x00000000) != 0x00000003)
	{
		if (func_176(0x00000003, 0x00000000, 0x00000001))
		{
			if (unk_0xA0FAF378D1CA33E8(0x00000000) <= 0x00000003)
			{
				unk_0x28E5F00F131890E3(0x00000003);
			}
		}
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_181(iParam0) - func_180(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_179(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_180(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_178(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F0.f_1;
			break;
		
		case 0x00000001:
			return Global_1532F0.f_2;
			break;
		
		case 0x00000002:
			return Global_1532F0.f_3;
			break;
	}
	return 0x00000000;
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0x00000000);
			}
			break;
	}
	return 0x00000000;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F8;
			break;
		
		case 0x00000001:
			return Global_1532F9;
			break;
		
		case 0x00000002:
			return Global_1532FA;
			break;
	}
	return 0x00000000;
}

bool func_182(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

void func_183()
{
	SYSTEM::WAIT(0x00000000);
}

void func_184()
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_108.f_AC[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_108.f_AC[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_113)
	{
		unk_0x34D79252800B23FF(0x00000005);
		iLocal_113 = 0x00000000;
	}
	Global_19C047 = 0x00000000;
	func_186();
	func_185();
}

void func_185()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_186()
{
	if (!Local_108.f_B0)
	{
		return;
	}
	if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01")))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_marine_01"));
	}
	if (unk_0xB87F6CF6E5628C67(joaat("lazer")))
	{
		unk_0x71199B01895C6202(joaat("lazer"));
	}
	if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_pilot_01")))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_pilot_01"));
	}
}

void func_187(struct<21> Param0)
{
	func_191(func_192(Param0), Param0);
	func_189(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x0BEC04ECA8485A3A(0x00000005);
	unk_0x28E5F00F131890E3(0x00000003);
	unk_0x9752E7BAEABA939E(&Local_83, 0x0000001B);
	unk_0x35B62793EAE9ADDF(&Local_107, 0x00000101);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_188())
	{
		func_184();
	}
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_184();
	}
	Global_26B66F.f_19A4 = 0x00000000;
}

int func_188()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_171())
		{
			return 0x00000000;
		}
		if (func_169(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

int func_189(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_190())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_169(0x0000009D))
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_185();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_185();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_190()
{
	return Global_140856;
}

void func_191(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_185();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

