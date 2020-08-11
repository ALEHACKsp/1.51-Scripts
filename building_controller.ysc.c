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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58[4] = { 0, 0, 0, 0 };
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	var uLocal_64 = 0;
	var uLocal_65 = 3;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 3;
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
	var uLocal_125 = 3;
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
	var uLocal_136 = 3;
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
	var uLocal_152 = 3;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161[2] = { 0, 0 };
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	
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
	iLocal_20 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	unk_0xB57F88F0123F4C38();
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		StringCopy(&(Global_9DC7[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	SYSTEM::WAIT(0x00000000);
	while (0x00000001)
	{
		if (func_109())
		{
		}
		else
		{
			func_103();
			switch (iLocal_60)
			{
				case 0x00000000:
					func_88();
					break;
				
				case 0x00000001:
					func_85();
					func_74();
					if (func_72())
					{
						if (!func_71(0x00000009) || Global_1AF0C.f_13 == 0x00000004)
						{
							func_47();
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
								{
									if (!bLocal_55)
									{
									}
								}
								else if (bLocal_55)
								{
								}
							}
							func_26();
						}
					}
					break;
				
				case 0x00000002:
					if (Global_24D549)
					{
						if (!unk_0xEB880D98B5988D0C() || (unk_0x991B1F0980C62628() && unk_0x00A15D69BCAA5267() == 0x00000005))
						{
							Global_24D549 = 0x00000000;
							if (unk_0xBCFF5481C5F58C19("TrevorsMP"))
							{
								unk_0x81CF20E10AAD5FD5("TrevorsMP");
							}
							if (!unk_0xBCFF5481C5F58C19("TrevorsTrailer"))
							{
								unk_0x2404539258C5376B("TrevorsTrailer");
							}
							if (unk_0xBCFF5481C5F58C19("shr_int"))
							{
								unk_0x81CF20E10AAD5FD5("shr_int");
							}
							if (!unk_0xBCFF5481C5F58C19("fakeint"))
							{
								unk_0x2404539258C5376B("fakeint");
							}
						}
					}
					break;
			}
			func_15();
			if ((!iLocal_157 && !unk_0xEB880D98B5988D0C()) && func_14())
			{
				if (!Global_18045E)
				{
					unk_0x81CF20E10AAD5FD5("hei_carrier");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int1");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int2");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int3");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int4");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int5");
					unk_0x81CF20E10AAD5FD5("hei_carrier_int6");
					unk_0x81CF20E10AAD5FD5("hei_carrier_DistantLights");
					unk_0x81CF20E10AAD5FD5("hei_carrier_LODLights");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist_enginrm");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist_Lounge");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist_Bridge");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist_Bar");
					unk_0x81CF20E10AAD5FD5("hei_yacht_heist_Bedrm");
				}
				iLocal_157 = 0x00000001;
			}
			if (!iLocal_158 && func_14())
			{
				if (!unk_0xEB880D98B5988D0C())
				{
					if (!Global_18045E)
					{
						unk_0x81CF20E10AAD5FD5("lr_cs6_08_grave_open");
						unk_0x2404539258C5376B("lr_cs6_08_grave_closed");
						unk_0x2404539258C5376B("hei_bi_hw1_13_door");
						unk_0x2404539258C5376B("bkr_bi_id1_23_door");
						iVar1 = 0x00000000;
						while (iVar1 < 0x0000000C)
						{
							if (iVar1 != 0x00000008)
							{
								StringCopy(&cVar2, "GR_case", 24);
								StringIntConCat(&cVar2, iVar1, 24);
								StringConCat(&cVar2, "_BunkerClosed", 24);
								unk_0x2404539258C5376B(&cVar2);
							}
							iVar1++;
						}
					}
					iLocal_158 = 0x00000001;
				}
			}
			if (iLocal_158 && !func_14())
			{
				iLocal_158 = 0x00000000;
			}
			if (func_14())
			{
				if (!unk_0xEB880D98B5988D0C())
				{
					if (!Global_18045E)
					{
						if (unk_0xBCFF5481C5F58C19("Xs_arena_interior"))
						{
							unk_0x81CF20E10AAD5FD5("Xs_arena_interior");
						}
						if (unk_0xBCFF5481C5F58C19("xs_arena_interior_vip"))
						{
							unk_0x81CF20E10AAD5FD5("xs_arena_interior_vip");
						}
					}
				}
			}
			if (!unk_0xEB880D98B5988D0C() && func_14())
			{
				if (!unk_0xA14BB9332558B949() || func_11())
				{
					if (!Global_18045F)
					{
						if (!unk_0xBCFF5481C5F58C19("xm_hatch_closed"))
						{
							unk_0x2404539258C5376B("xm_hatch_closed");
						}
						if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E2, 0x0000000E))
						{
							if (!unk_0xBCFF5481C5F58C19("xm_bunkerentrance_door"))
							{
								unk_0x2404539258C5376B("xm_bunkerentrance_door");
							}
						}
						if (!unk_0xBCFF5481C5F58C19("xm_siloentranceclosed_x17"))
						{
							unk_0x2404539258C5376B("xm_siloentranceclosed_x17");
						}
						if (!unk_0xBCFF5481C5F58C19("xm_hatches_terrain"))
						{
							unk_0x2404539258C5376B("xm_hatches_terrain");
						}
					}
				}
				else
				{
					if (unk_0xBCFF5481C5F58C19("xm_hatch_closed"))
					{
						unk_0x81CF20E10AAD5FD5("xm_hatch_closed");
					}
					if (unk_0xBCFF5481C5F58C19("xm_bunkerentrance_door"))
					{
						unk_0x81CF20E10AAD5FD5("xm_bunkerentrance_door");
					}
					if (unk_0xBCFF5481C5F58C19("xm_siloentranceclosed_x17"))
					{
						unk_0x81CF20E10AAD5FD5("xm_siloentranceclosed_x17");
					}
					if (unk_0xBCFF5481C5F58C19("xm_hatches_terrain"))
					{
						unk_0x81CF20E10AAD5FD5("xm_hatches_terrain");
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_556, 0x00000008))
				{
					unk_0x81CF20E10AAD5FD5("Coroner_Int_on");
					unk_0x2404539258C5376B("Coroner_Int_off");
					unk_0x0674E58A79778E99(&(Global_199459.f_556), 0x00000008);
				}
				if (!Global_180462)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x00000012))
					{
						if (unk_0xBCFF5481C5F58C19("hei_dlc_windows_casino"))
						{
							unk_0x81CF20E10AAD5FD5("hei_dlc_windows_casino");
						}
					}
					else if (!unk_0xBCFF5481C5F58C19("hei_dlc_windows_casino"))
					{
						unk_0x2404539258C5376B("hei_dlc_windows_casino");
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x00000013))
					{
						if (unk_0xBCFF5481C5F58C19("hei_dlc_casino_door"))
						{
							unk_0x81CF20E10AAD5FD5("hei_dlc_casino_door");
						}
						if (unk_0xBCFF5481C5F58C19("vw_dlc_casino_door"))
						{
							unk_0x81CF20E10AAD5FD5("vw_dlc_casino_door");
						}
						if (!unk_0xBCFF5481C5F58C19("hei_dlc_casino_door_broken"))
						{
							unk_0x2404539258C5376B("hei_dlc_casino_door_broken");
						}
					}
					else
					{
						if (!unk_0xBCFF5481C5F58C19("hei_dlc_casino_door"))
						{
							unk_0x2404539258C5376B("hei_dlc_casino_door");
						}
						if (!unk_0xBCFF5481C5F58C19("vw_dlc_casino_door"))
						{
							unk_0x2404539258C5376B("vw_dlc_casino_door");
						}
						if (unk_0xBCFF5481C5F58C19("hei_dlc_casino_door_broken"))
						{
							unk_0x81CF20E10AAD5FD5("hei_dlc_casino_door_broken");
						}
					}
					if (unk_0xBCFF5481C5F58C19("hei_dlc_casino_aircon"))
					{
						unk_0x81CF20E10AAD5FD5("hei_dlc_casino_aircon");
					}
					if (!unk_0xBCFF5481C5F58C19("ch_dlc_casino_aircon_broken"))
					{
						unk_0x2404539258C5376B("ch_dlc_casino_aircon_broken");
					}
					if (!Global_18045E)
					{
						if (!unk_0xBCFF5481C5F58C19("ch_h3_casino_cameras"))
						{
							unk_0x2404539258C5376B("ch_h3_casino_cameras");
						}
					}
				}
			}
			if (!func_14())
			{
				Global_18045F = 0x00000000;
			}
			if (!iLocal_159)
			{
				if (func_14())
				{
					iLocal_159 = 0x00000001;
				}
			}
			else if (!unk_0xEB880D98B5988D0C() && !func_14())
			{
				func_4();
				iLocal_159 = 0x00000000;
			}
			if (iLocal_160 && func_14())
			{
				func_4();
				iLocal_160 = 0x00000000;
			}
			func_1();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9E69, 0x00000000))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_161[0x00000000]))
		{
			unk_0x523BCC9DC80CD82F(0x1C64F828);
			if (unk_0xB87F6CF6E5628C67(0x1C64F828))
			{
				iLocal_161[0x00000000] = unk_0xB0BE3DFBBB59A620(0x1C64F828, 2222.883f, 5612.299f, 55.291f, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_161[0x00000000], 0.5f, 0f, 15.325f, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_161[0x00000000], 0x00000001);
				unk_0x71199B01895C6202(0x1C64F828);
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iLocal_161[0x00000000]))
	{
		unk_0xF690C84DADBB3551(&(iLocal_161[0x00000000]));
	}
	if ((!unk_0xEAE0D21A50E6C7F4(Global_9E69, 0x00000001) && func_3() == 0x00000000) && !(unk_0xA14BB9332558B949() && (func_2(Global_440000.f_2F9AE) == 0x0000000E || func_2(Global_440000.f_2F9AE) == 0x0000000F)))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_161[0x00000001]))
		{
			unk_0x523BCC9DC80CD82F(0x25967365);
			if (unk_0xB87F6CF6E5628C67(0x25967365))
			{
				iLocal_161[0x00000001] = unk_0xB0BE3DFBBB59A620(0x25967365, -362.402f, 4829.89f, 142.477f, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_161[0x00000001], 0f, 0f, 320f, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_161[0x00000001], 0x00000001);
				unk_0x71199B01895C6202(0x25967365);
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iLocal_161[0x00000001]))
	{
		unk_0xF690C84DADBB3551(&(iLocal_161[0x00000001]));
	}
}

int func_2(int iParam0)
{
	if (iParam0 == Global_40001.f_1390[0x00000000])
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000001])
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000002])
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000003])
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000004])
	{
		return 0x00000004;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000005])
	{
		return 0x00000005;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000006])
	{
		return 0x00000006;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000007])
	{
		return 0x00000007;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000008])
	{
		return 0x00000008;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000009])
	{
		return 0x00000009;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000A])
	{
		return 0x0000000A;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000B])
	{
		return 0x0000000B;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000C])
	{
		return 0x0000000C;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000D])
	{
		return 0x0000000D;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000E])
	{
		return 0x0000000E;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000F])
	{
		return 0x0000000F;
	}
	return 0xFFFFFFFF;
}

int func_3()
{
	return Global_7830;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000025)
	{
		func_5(iVar0, 0x00000000);
		iVar0++;
	}
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_10(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			unk_0x81CF20E10AAD5FD5(func_8(iParam0, iVar0));
			iVar0++;
		}
		if (!bParam1)
		{
			if (Global_26DA2B.f_53[iParam0])
			{
				Global_26DA2B.f_53[iParam0] = 0x00000000;
				Global_26DA2B.f_79 = (Global_26DA2B.f_79 + 0xFFFFFFFF);
			}
		}
		if (Global_26DA2B.f_79 <= 0x00000000 || bParam1)
		{
			unk_0x71199B01895C6202(func_7());
			unk_0x71199B01895C6202(func_6());
			if (!bParam1)
			{
				Global_26DA2B.f_79 = 0x00000000;
			}
		}
	}
}

int func_6()
{
	return 0x4FCAD2E0;
}

int func_7()
{
	return 0xBCDAC9E7;
}

var func_8(int iParam0, int iParam1)
{
	return func_9(&(Global_3D2A74[iParam0 /*45*/].f_F[iParam1 /*8*/]));
}

var func_9(var uParam0)
{
	return uParam0;
}

int func_10(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF && iParam0 < 0x00000025)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_13();
	}
	return func_12(Global_440000.f_2F9AE);
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

var func_13()
{
	return Global_2564C8.f_11;
}

bool func_14()
{
	return Global_259188;
}

void func_15()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = 0x00000001;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000007)
	{
		if (Global_9150[iVar2] != 0x00000000 || Global_9158[iVar2] != 0x00000000)
		{
			bVar3 = 0x00000000;
		}
		iVar2++;
	}
	if (bVar3)
	{
		return;
	}
	iVar0 = iLocal_56;
	vVar1 = { func_24(iVar0) };
	if (func_23(iVar0))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar1, 0x00000001) > 250f)
		{
			func_22(iVar0, 0x00000000);
			func_21(iVar0, 0x00000001);
			if (iVar0 == 0x00000011)
			{
				if (unk_0x76395FF5E8D5E643(0x69AF302C))
				{
					unk_0x4974E8CC1833D43E(0x69AF302C, 0x00000000);
					unk_0x838CC054A9235BEC(0x69AF302C, 0f, 0x00000000, 0x00000000);
					unk_0x1BA7FCEAFCE8D46E(0x69AF302C, 0x00000001, 0x00000000, 0x00000001);
				}
				if (unk_0x76395FF5E8D5E643(0xB099BE68))
				{
					unk_0x4974E8CC1833D43E(0xB099BE68, 0x00000000);
					unk_0x838CC054A9235BEC(0xB099BE68, 0f, 0x00000000, 0x00000000);
					unk_0x1BA7FCEAFCE8D46E(0xB099BE68, 0x00000001, 0x00000000, 0x00000001);
				}
			}
		}
	}
	if (func_20(iVar0) && !unk_0x7F8A39872A07D2CE(&Global_9509, vVar1.f_3))
	{
		bVar4 = 0x00000000;
		if (unk_0x8CD06866876216F2())
		{
			if (unk_0xD803B885F5E47A62() > 0xFFFFFFFF)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000008))
				{
					bVar4 = 0x00000001;
				}
			}
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar1, 0x00000001) > 250f && !bVar4)
		{
			func_18(iVar0, 0x00000001);
			func_16(iVar0, 0x00000000);
			if (iVar0 == 0x00000011)
			{
				if (unk_0x76395FF5E8D5E643(0x69AF302C))
				{
					unk_0x4974E8CC1833D43E(0x69AF302C, 0x00000000);
					unk_0x838CC054A9235BEC(0x69AF302C, 0f, 0x00000000, 0x00000000);
					unk_0x1BA7FCEAFCE8D46E(0x69AF302C, 0x00000001, 0x00000000, 0x00000001);
				}
				if (unk_0x76395FF5E8D5E643(0xB099BE68))
				{
					unk_0x4974E8CC1833D43E(0xB099BE68, 0x00000000);
					unk_0x838CC054A9235BEC(0xB099BE68, 0f, 0x00000000, 0x00000000);
					unk_0x1BA7FCEAFCE8D46E(0xB099BE68, 0x00000001, 0x00000000, 0x00000001);
				}
			}
		}
		else if (bVar4)
		{
		}
	}
	iLocal_56++;
	if (iLocal_56 == 0x000000D6)
	{
		iLocal_56 = 0x00000000;
	}
}

void func_16(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9158[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9158[Var0.f_1]), Var0);
	}
}

struct<2> func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	Var3 = 0xFFFFFFFF;
	Var3.f_1 = 0xFFFFFFFF;
	while (iVar1 < 0x00000007)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_18(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_19(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_16(iParam0, 0x00000001);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_20(iParam0))
			{
				func_16(iParam0, 0x00000000);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

var func_19(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_24(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

int func_20(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9158[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_21(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_19(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1 && !unk_0x3C4C57B70481C643(iVar1))
		{
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_22(iParam0, 0x00000001);
				return;
			}
			unk_0xE9C847D3387E544A(iVar1, 0x00000001);
		}
		else if (!bParam1 && unk_0x3C4C57B70481C643(iVar1))
		{
			if (func_23(iParam0))
			{
				func_22(iParam0, 0x00000000);
			}
			unk_0xE9C847D3387E544A(iVar1, 0x00000000);
		}
		else if (!bParam1)
		{
			if (func_23(iParam0))
			{
				func_22(iParam0, 0x00000000);
			}
		}
	}
}

void func_22(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9150[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9150[Var0.f_1]), Var0);
	}
}

int func_23(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_17(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9150[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<5> func_24(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000001:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000002:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000003:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000004:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000005:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000006:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000007:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000008:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 0x00000009:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 0x0000000A:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 0x0000000B:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000C:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000D:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000E:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000F:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000010:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000011:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000012:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000013:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000014:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000017:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000015:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000018:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000019:
			vVar1 = { func_25(0x00000001, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 0x0000001A:
			vVar1 = { func_25(0x00000002, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 0x0000001B:
			vVar1 = { func_25(0x00000003, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 0x0000001C:
			vVar1 = { func_25(0x00000004, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 0x0000001D:
			vVar1 = { func_25(0x00000005, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 0x0000001E:
			vVar1 = { func_25(0x00000006, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 0x0000001F:
			vVar1 = { func_25(0x00000007, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 0x00000020:
			Var0 = { Global_100542[0x00000022 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 0x00000021:
			vVar1 = { func_25(0x00000023, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 0x00000022:
			vVar1 = { func_25(0x00000024, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 0x00000023:
			vVar1 = { func_25(0x00000025, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 0x00000024:
			vVar1 = { func_25(0x00000026, 0x00000000) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 0x00000025:
			vVar1 = { func_25(0x00000027, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 0x00000026:
			vVar1 = { func_25(0x00000028, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 0x00000027:
			vVar1 = { func_25(0x00000029, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 0x00000028:
			vVar1 = { func_25(0x0000002A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 0x00000029:
			vVar1 = { func_25(0x0000002B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 0x0000002A:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 0x0000002B:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 0x0000002C:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 0x00000031:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 0x00000032:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 0x00000033:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 0x00000034:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 0x00000035:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 0x00000036:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 0x00000037:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 0x00000038:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 0x00000039:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 0x0000003A:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 0x0000002D:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 0x0000002E:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 0x0000002F:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000030:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003C:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003D:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003E:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003F:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000040:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000041:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000042:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000043:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000044:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000045:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000046:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000047:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000048:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000049:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004A:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004B:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004C:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004D:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004E:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004F:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000050:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000051:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000052:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000053:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000054:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000055:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000056:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000057:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000058:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000059:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005A:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005B:
			vVar1 = { func_25(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005C:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005D:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005E:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005F:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000060:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000061:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000062:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000063:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000064:
			vVar1 = { func_25(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000065:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000066:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000067:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000068:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000069:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006A:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006B:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006C:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006D:
			vVar1 = { func_25(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006E:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006F:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000070:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000071:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000072:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000073:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000074:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000075:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000076:
			vVar1 = { func_25(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000077:
			vVar1 = { func_25(0x0000005B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000078:
			vVar1 = { func_25(0x00000061, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000079:
			vVar1 = { func_25(0x00000067, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007A:
			vVar1 = { func_25(0x00000068, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007B:
			vVar1 = { func_25(0x00000069, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007C:
			vVar1 = { func_25(0x0000006A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007D:
			vVar1 = { func_25(0x0000006B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007E:
			vVar1 = { func_25(0x0000006C, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007F:
			vVar1 = { func_25(0x0000006D, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000080:
			vVar1 = { func_25(0x0000006E, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000081:
			vVar1 = { func_25(0x0000006F, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000082:
			vVar1 = { func_25(0x00000070, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000083:
			vVar1 = { func_25(0x00000071, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000084:
			vVar1 = { func_25(0x00000072, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000085:
			vVar1 = { func_25(0x00000067, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000086:
			vVar1 = { func_25(0x0000006A, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000087:
			vVar1 = { func_25(0x0000006D, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000088:
			vVar1 = { func_25(0x00000070, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000089:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008A:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008B:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008C:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008D:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008E:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008F:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000090:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000091:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000092:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000093:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000094:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000095:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000096:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000097:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000098:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000099:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009A:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009B:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009C:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009D:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009E:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009F:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A0:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A1:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A2:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A3:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A4:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A5:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A6:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A7:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A8:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A9:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AA:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AB:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AC:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AD:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AE:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AF:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B0:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B1:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B2:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B3:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B4:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B5:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B6:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B7:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B8:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B9:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BA:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BB:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BC:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BD:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BE:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BF:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C0:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C1:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C2:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C3:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C4:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 0x000000C5:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C6:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C7:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C8:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C9:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CA:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CB:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CC:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CD:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CE:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CF:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D0:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D1:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D2:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D3:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D4:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D5:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_25(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_26()
{
	float fVar0;
	int iVar1;
	
	iLocal_59 = 0x00000000;
	iLocal_49++;
	if (iLocal_49 >= 0x0000001B)
	{
		iLocal_49 = 0x00000000;
	}
	if (iLocal_49 == iLocal_50)
	{
		fLocal_51 = unk_0x0EB28750412C3A5A(Global_9E6A[iLocal_49 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
	}
	else
	{
		fVar0 = unk_0x0EB28750412C3A5A(Global_9E6A[iLocal_49 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
		if (fVar0 < fLocal_51)
		{
			fLocal_51 = fVar0;
			iLocal_50 = iLocal_49;
		}
	}
	if (!bLocal_53)
	{
		if (Global_9E6A[iLocal_52 /*31*/].f_18 == 0x00000000)
		{
			iLocal_54 = 0x00000000;
			iLocal_52++;
			if (iLocal_52 >= 0x0000001B)
			{
				iLocal_52 = 0x00000000;
			}
		}
		else
		{
			iLocal_54++;
			if (iLocal_54 >= Global_9E6A[iLocal_52 /*31*/].f_18)
			{
				iLocal_54 = 0x00000000;
				iLocal_52++;
				if (iLocal_52 >= 0x0000001B)
				{
					iLocal_52 = 0x00000000;
				}
			}
		}
	}
	if (bLocal_53)
	{
		func_35(iLocal_50);
		func_27(iLocal_50);
	}
	else
	{
		func_35(iLocal_52);
		func_27(iLocal_52);
	}
	bLocal_53 = !bLocal_53;
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_57)
	{
		func_27(iLocal_58[iVar1]);
		iVar1++;
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_59, iParam0))
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&iLocal_59, iParam0);
	if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000004))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000006))
				{
					func_34(iParam0, 0x00000001);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000006))
			{
				func_34(iParam0, 0x00000000);
			}
		}
	}
	if (Global_9E6A[iParam0 /*31*/].f_18 > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
		{
			iVar1 = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			if (!unk_0xC844350D5D58C99A(iVar1))
			{
				func_33(iParam0, iVar1, 0x00000001);
			}
			iVar0++;
		}
	}
	if ((unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000005)) || func_31(iParam0))
	{
		func_30(iParam0);
		iLocal_52 = iParam0;
		if ((((((((Global_9E6A[iParam0 /*31*/] == 0x988C8EDC || Global_9E6A[iParam0 /*31*/] == 0x0CB2B8F8) || Global_9E6A[iParam0 /*31*/] == 0xB5A6BBCC) || Global_9E6A[iParam0 /*31*/] == 0x37C4017B) || Global_9E6A[iParam0 /*31*/] == 0x0AB2A751) || Global_9E6A[iParam0 /*31*/] == 0xD0059B16) || Global_9E6A[iParam0 /*31*/] == 0xDC4A47CE) || Global_9E6A[iParam0 /*31*/] == 0x54D435BE) || Global_9E6A[iParam0 /*31*/] == 0x8B48A2A2)
		{
			unk_0xC9F68C22171478B8(Global_9E6A[iParam0 /*31*/], 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000007))
		{
			func_29(iParam0, 0x00000001);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000002))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000001))
			{
				if (Global_9E6A[iParam0 /*31*/].f_16 > -1f)
				{
					Global_9E6A[iParam0 /*31*/].f_16 = (Global_9E6A[iParam0 /*31*/].f_16 - (Global_9E6A[iParam0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
					if (Global_9E6A[iParam0 /*31*/].f_16 < -1f)
					{
						Global_9E6A[iParam0 /*31*/].f_16 = -1f;
					}
					unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000003);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
				}
			}
			else if (Global_9E6A[iParam0 /*31*/].f_16 < 1f)
			{
				Global_9E6A[iParam0 /*31*/].f_16 = (Global_9E6A[iParam0 /*31*/].f_16 + (Global_9E6A[iParam0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
				if (Global_9E6A[iParam0 /*31*/].f_16 > 1f)
				{
					Global_9E6A[iParam0 /*31*/].f_16 = 1f;
				}
				unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000003);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
			}
			unk_0x838CC054A9235BEC(Global_9E6A[iParam0 /*31*/], Global_9E6A[iParam0 /*31*/].f_16, 0x00000000, 0x00000000);
			unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iParam0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000001))
		{
			if (Global_9E6A[iParam0 /*31*/].f_16 > -1f)
			{
				unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
			}
		}
		else if (Global_9E6A[iParam0 /*31*/].f_16 < 1f)
		{
			unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000007))
		{
			func_29(iParam0, 0x00000000);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000003))
		{
			bVar2 = 0x00000000;
			iVar3 = unk_0x83C1D4B63BBD91F6(Global_9E6A[iParam0 /*31*/].f_2, 15f, 0x00000000, 0x0000087F);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0xDF1306B443CD3D15(iVar3, 0x00000000))
				{
					fVar4 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar3, 0x00000001), Global_9E6A[iParam0 /*31*/].f_2);
					if (fVar4 < Global_9E6A[iParam0 /*31*/].f_7)
					{
						bVar2 = 0x00000001;
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000001))
			{
				if (Global_9E6A[iParam0 /*31*/].f_16 < 0f)
				{
					if (!bVar2)
					{
						Global_9E6A[iParam0 /*31*/].f_16 = (Global_9E6A[iParam0 /*31*/].f_16 + (Global_9E6A[iParam0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
						if (Global_9E6A[iParam0 /*31*/].f_16 > 0f)
						{
							Global_9E6A[iParam0 /*31*/].f_16 = 0f;
						}
						unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
					}
				}
				else
				{
					Global_9E6A[iParam0 /*31*/].f_16 = 0f;
					unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000003);
				}
			}
			else if (Global_9E6A[iParam0 /*31*/].f_16 > 0f)
			{
				if (!bVar2)
				{
					Global_9E6A[iParam0 /*31*/].f_16 = (Global_9E6A[iParam0 /*31*/].f_16 - (Global_9E6A[iParam0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
					if (Global_9E6A[iParam0 /*31*/].f_16 < 0f)
					{
						Global_9E6A[iParam0 /*31*/].f_16 = 0f;
					}
					unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000002);
				}
			}
			else
			{
				Global_9E6A[iParam0 /*31*/].f_16 = 0f;
				unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000003);
			}
			unk_0x838CC054A9235BEC(Global_9E6A[iParam0 /*31*/], Global_9E6A[iParam0 /*31*/].f_16, 0x00000000, 0x00000000);
			unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iParam0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
		}
		else
		{
			if ((((((((Global_9E6A[iParam0 /*31*/] == 0x988C8EDC || Global_9E6A[iParam0 /*31*/] == 0x0CB2B8F8) || Global_9E6A[iParam0 /*31*/] == 0xB5A6BBCC) || Global_9E6A[iParam0 /*31*/] == 0x37C4017B) || Global_9E6A[iParam0 /*31*/] == 0x0AB2A751) || Global_9E6A[iParam0 /*31*/] == 0xD0059B16) || Global_9E6A[iParam0 /*31*/] == 0xDC4A47CE) || Global_9E6A[iParam0 /*31*/] == 0x54D435BE) || Global_9E6A[iParam0 /*31*/] == 0x8B48A2A2)
			{
				unk_0xC9F68C22171478B8(Global_9E6A[iParam0 /*31*/], 0x00000000);
			}
			func_28(iParam0);
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = 0x00000000;
	iVar2 = iLocal_57;
	iVar0 = 0x00000000;
	while (iVar0 < iVar2)
	{
		if (bVar1)
		{
			iLocal_58[(iVar0 - 0x00000001)] = iLocal_58[iVar0];
		}
		else if (iLocal_58[iVar0] == iParam0)
		{
			iLocal_57 = (iLocal_57 - 0x00000001);
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	
	if (Global_9E6A[iParam0 /*31*/] == 0xB294D047)
	{
		iVar0 = 0x00000017;
	}
	else if (Global_9E6A[iParam0 /*31*/] == 0x03EDF398)
	{
		iVar0 = 0x00000016;
	}
	else if (Global_9E6A[iParam0 /*31*/] == 0x54D435BE)
	{
		iVar0 = 0x0000001A;
	}
	else if (Global_9E6A[iParam0 /*31*/] == 0x8B48A2A2)
	{
		iVar0 = 0x00000019;
	}
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_9E6A[iVar0 /*31*/].f_1, 0x00000002))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iVar0 /*31*/].f_1, 0x00000001))
			{
				if (Global_9E6A[iVar0 /*31*/].f_16 > -1f)
				{
					Global_9E6A[iVar0 /*31*/].f_16 = (Global_9E6A[iVar0 /*31*/].f_16 - (Global_9E6A[iVar0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
					if (Global_9E6A[iVar0 /*31*/].f_16 < -1f)
					{
						Global_9E6A[iVar0 /*31*/].f_16 = -1f;
					}
					unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
				}
			}
			else if (Global_9E6A[iVar0 /*31*/].f_16 < 1f)
			{
				Global_9E6A[iVar0 /*31*/].f_16 = (Global_9E6A[iVar0 /*31*/].f_16 + (Global_9E6A[iVar0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
				if (Global_9E6A[iVar0 /*31*/].f_16 > 1f)
				{
					Global_9E6A[iVar0 /*31*/].f_16 = 1f;
				}
				unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
			}
			unk_0x838CC054A9235BEC(Global_9E6A[iVar0 /*31*/], Global_9E6A[iVar0 /*31*/].f_16, 0x00000000, 0x00000000);
			unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iVar0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iVar0 /*31*/].f_1, 0x00000001))
		{
			if (Global_9E6A[iVar0 /*31*/].f_16 > -1f)
			{
				unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
			}
		}
		else if (Global_9E6A[iVar0 /*31*/].f_16 < 1f)
		{
			unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_9E6A[iVar0 /*31*/].f_1, 0x00000003))
	{
		bVar1 = 0x00000000;
		iVar2 = unk_0x83C1D4B63BBD91F6(Global_9E6A[iVar0 /*31*/].f_2, 15f, 0x00000000, 0x0000087F);
		if (unk_0xC844350D5D58C99A(iVar2))
		{
			if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
			{
				fVar3 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar2, 0x00000001), Global_9E6A[iVar0 /*31*/].f_2);
				if (fVar3 < Global_9E6A[iVar0 /*31*/].f_7)
				{
					bVar1 = 0x00000001;
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iVar0 /*31*/].f_1, 0x00000001))
		{
			if (Global_9E6A[iVar0 /*31*/].f_16 < 0f)
			{
				if (!bVar1)
				{
					Global_9E6A[iVar0 /*31*/].f_16 = (Global_9E6A[iVar0 /*31*/].f_16 + (Global_9E6A[iVar0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
					if (Global_9E6A[iVar0 /*31*/].f_16 > 0f)
					{
						Global_9E6A[iVar0 /*31*/].f_16 = 0f;
					}
					unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
				}
			}
			else
			{
				Global_9E6A[iVar0 /*31*/].f_16 = 0f;
				unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
			}
		}
		else if (Global_9E6A[iVar0 /*31*/].f_16 > 0f)
		{
			if (!bVar1)
			{
				Global_9E6A[iVar0 /*31*/].f_16 = (Global_9E6A[iVar0 /*31*/].f_16 - (Global_9E6A[iVar0 /*31*/].f_17 * SYSTEM::TIMESTEP()));
				if (Global_9E6A[iVar0 /*31*/].f_16 < 0f)
				{
					Global_9E6A[iVar0 /*31*/].f_16 = 0f;
				}
				unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
			}
		}
		else
		{
			Global_9E6A[iVar0 /*31*/].f_16 = 0f;
			unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
		}
		unk_0x838CC054A9235BEC(Global_9E6A[iVar0 /*31*/], Global_9E6A[iVar0 /*31*/].f_16, 0x00000000, 0x00000000);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iVar0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
	}
}

void func_30(int iParam0)
{
	int iVar0;
	
	if (iLocal_57 < iLocal_58)
	{
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_57)
		{
			if (iLocal_58[iVar0] == iParam0)
			{
				return;
			}
			iVar0++;
		}
		iLocal_58[iLocal_57] = iParam0;
		iLocal_57++;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (Global_9E6A[iParam0 /*31*/].f_18 > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
		{
			iVar1 = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar1))
				{
					if (SYSTEM::VDIST2(Global_9E6A[iParam0 /*31*/].f_2, unk_0x68F4C0EC296D3901(iVar1, 0x00000001)) < Global_9E6A[iParam0 /*31*/].f_6)
					{
						if (unk_0x3D1053F9EB43B7AD(iVar1, Global_9E6A[iParam0 /*31*/].f_9, Global_9E6A[iParam0 /*31*/].f_C, Global_9E6A[iParam0 /*31*/].f_8, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_54 = iVar0;
							return 0x00000001;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000000))
						{
							if (unk_0x3D1053F9EB43B7AD(iVar1, Global_9E6A[iParam0 /*31*/].f_10, Global_9E6A[iParam0 /*31*/].f_13, Global_9E6A[iParam0 /*31*/].f_F, 0x00000000, 0x00000001, 0x00000000))
							{
								iLocal_54 = iVar0;
								return 0x00000001;
							}
						}
						if (unk_0x405E212DDE472467(iVar1, 0x00000000))
						{
							iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
							vVar3 = { func_32() };
							vVar4 = { func_32() };
							vVar5 = { func_32() };
							vVar6 = { func_32() };
							unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar2), &vVar3, &vVar4);
							vVar4.x = 0f;
							vVar3.x = 0f;
							vVar5 = { unk_0x68E4ADDDDCD7BDDE(iVar2, vVar4) };
							vVar6 = { unk_0x68E4ADDDDCD7BDDE(iVar2, vVar3) };
							if (unk_0x0399732A9EBC368E(vVar5, Global_9E6A[iParam0 /*31*/].f_9, Global_9E6A[iParam0 /*31*/].f_C, Global_9E6A[iParam0 /*31*/].f_8, 0x00000000, 0x00000001))
							{
								iLocal_54 = iVar0;
								return 0x00000001;
							}
							if (unk_0x0399732A9EBC368E(vVar6, Global_9E6A[iParam0 /*31*/].f_9, Global_9E6A[iParam0 /*31*/].f_C, Global_9E6A[iParam0 /*31*/].f_8, 0x00000000, 0x00000001))
							{
								iLocal_54 = iVar0;
								return 0x00000001;
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000000))
							{
								if (unk_0x0399732A9EBC368E(vVar5, Global_9E6A[iParam0 /*31*/].f_10, Global_9E6A[iParam0 /*31*/].f_13, Global_9E6A[iParam0 /*31*/].f_F, 0x00000000, 0x00000001))
								{
									iLocal_54 = iVar0;
									return 0x00000001;
								}
								if (unk_0x0399732A9EBC368E(vVar6, Global_9E6A[iParam0 /*31*/].f_10, Global_9E6A[iParam0 /*31*/].f_13, Global_9E6A[iParam0 /*31*/].f_F, 0x00000000, 0x00000001))
								{
									iLocal_54 = iVar0;
									return 0x00000001;
								}
							}
							if (unk_0x6CFEA4CFD9C496C8(iVar2))
							{
								iVar7 = 0x00000000;
								if (unk_0x565509D116400807(iVar2, &iVar7))
								{
									if (unk_0x3D1053F9EB43B7AD(iVar7, Global_9E6A[iParam0 /*31*/].f_9, Global_9E6A[iParam0 /*31*/].f_C, Global_9E6A[iParam0 /*31*/].f_8, 0x00000000, 0x00000001, 0x00000000))
									{
										iLocal_54 = iVar0;
										return 0x00000001;
									}
									if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000000))
									{
										if (unk_0x3D1053F9EB43B7AD(iVar7, Global_9E6A[iParam0 /*31*/].f_10, Global_9E6A[iParam0 /*31*/].f_13, Global_9E6A[iParam0 /*31*/].f_F, 0x00000000, 0x00000001, 0x00000000))
										{
											iLocal_54 = iVar0;
											return 0x00000001;
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
	return 0x00000000;
}

Vector3 func_32()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iParam1))
		{
			return;
		}
	}
	if (Global_9E6A[iParam0 /*31*/].f_18 == 0x00000000)
	{
		return;
	}
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
	{
		if (bVar1)
		{
			Global_9E6A[iParam0 /*31*/].f_19[(iVar0 - 0x00000001)] = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			Global_9E6A[iParam0 /*31*/].f_19[iVar0] = 0x00000000;
		}
		else if (iParam1 == Global_9E6A[iParam0 /*31*/].f_19[iVar0])
		{
			Global_9E6A[iParam0 /*31*/].f_19[iVar0] = 0x00000000;
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_9E6A[iParam0 /*31*/].f_18 = (Global_9E6A[iParam0 /*31*/].f_18 - 0x00000001);
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000006);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000006);
	}
}

void func_35(int iParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			switch (iParam0)
			{
				case 0x0000000D:
					if (unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
					{
						if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000004E /*34*/].f_6) == 0x00000000)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_9E6A[0x0000000D /*31*/].f_2, 0x00000001) <= 100f)
							{
								if (!func_46(0x0000000D, unk_0x16F2683693E537C9()))
								{
									func_45(0x0000000D, unk_0x16F2683693E537C9());
								}
							}
							else if (func_46(0x0000000D, unk_0x16F2683693E537C9()))
							{
								func_33(0x0000000D, unk_0x16F2683693E537C9(), 0x00000000);
							}
						}
					}
					else if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000004E /*34*/].f_6) == 0x00000000)
					{
						if (func_46(0x0000000D, unk_0x16F2683693E537C9()))
						{
							func_33(0x0000000D, unk_0x16F2683693E537C9(), 0x00000000);
						}
					}
					break;
				
				case 0x00000011:
				case 0x00000010:
					if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000009 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("extreme2")) == 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_9E6A[0x00000011 /*31*/].f_2, 0x00000001) <= 100f)
						{
							switch (func_39())
							{
								case 0x00000000:
									if (func_38(0x0000000C, 0x00000005))
									{
										if (!func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000011, unk_0x16F2683693E537C9());
										}
										if (!func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000010, unk_0x16F2683693E537C9());
										}
									}
									else
									{
										if (func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000011, unk_0x16F2683693E537C9(), 0x00000000);
										}
										if (func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000010, unk_0x16F2683693E537C9(), 0x00000000);
										}
									}
									break;
								
								case 0x00000001:
									if (func_38(0x0000000D, 0x00000005))
									{
										if (!func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000011, unk_0x16F2683693E537C9());
										}
										if (!func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000010, unk_0x16F2683693E537C9());
										}
									}
									else
									{
										if (func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000011, unk_0x16F2683693E537C9(), 0x00000000);
										}
										if (func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000010, unk_0x16F2683693E537C9(), 0x00000000);
										}
									}
									break;
								
								case 0x00000002:
									if (func_38(0x0000000E, 0x00000005))
									{
										if (!func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000011, unk_0x16F2683693E537C9());
										}
										if (!func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_45(0x00000010, unk_0x16F2683693E537C9());
										}
									}
									else
									{
										if (func_46(0x00000011, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000011, unk_0x16F2683693E537C9(), 0x00000000);
										}
										if (func_46(0x00000010, unk_0x16F2683693E537C9()))
										{
											func_33(0x00000010, unk_0x16F2683693E537C9(), 0x00000000);
										}
									}
									break;
							}
						}
						else
						{
							if (func_46(0x00000011, unk_0x16F2683693E537C9()))
							{
								func_33(0x00000011, unk_0x16F2683693E537C9(), 0x00000000);
							}
							if (func_46(0x00000010, unk_0x16F2683693E537C9()))
							{
								func_33(0x00000010, unk_0x16F2683693E537C9(), 0x00000000);
							}
						}
					}
					break;
				
				case 0x00000016:
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_9E6A[0x00000016 /*31*/].f_2, 0x00000001) <= 100f)
					{
						switch (func_39())
						{
							case 0x00000000:
								if (func_38(0x0000000C, 0x00000005))
								{
									if (!func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000016, unk_0x16F2683693E537C9());
									}
									if (!func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000017, unk_0x16F2683693E537C9());
									}
								}
								else
								{
									if (func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000016, unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000017, unk_0x16F2683693E537C9(), 0x00000000);
									}
								}
								break;
							
							case 0x00000001:
								if (func_38(0x0000000D, 0x00000005))
								{
									if (!func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000016, unk_0x16F2683693E537C9());
									}
									if (!func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000017, unk_0x16F2683693E537C9());
									}
								}
								else
								{
									if (func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000016, unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000017, unk_0x16F2683693E537C9(), 0x00000000);
									}
								}
								break;
							
							case 0x00000002:
								if (func_38(0x0000000E, 0x00000005))
								{
									if (!func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000016, unk_0x16F2683693E537C9());
									}
									if (!func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_45(0x00000017, unk_0x16F2683693E537C9());
									}
								}
								else
								{
									if (func_46(0x00000016, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000016, unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (func_46(0x00000017, unk_0x16F2683693E537C9()))
									{
										func_33(0x00000017, unk_0x16F2683693E537C9(), 0x00000000);
									}
								}
								break;
						}
					}
					else
					{
						if (func_46(0x00000016, unk_0x16F2683693E537C9()))
						{
							func_33(0x00000016, unk_0x16F2683693E537C9(), 0x00000000);
						}
						if (func_46(0x00000017, unk_0x16F2683693E537C9()))
						{
							func_33(0x00000017, unk_0x16F2683693E537C9(), 0x00000000);
						}
					}
					break;
				
				case 0x0000000E:
				case 0x0000000F:
					if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001B /*34*/].f_6) == 0x00000000)
					{
						if (func_46(0x0000000E, unk_0x16F2683693E537C9()))
						{
							func_33(0x0000000E, unk_0x16F2683693E537C9(), 0x00000000);
						}
						if (func_46(0x0000000F, unk_0x16F2683693E537C9()))
						{
							func_33(0x0000000F, unk_0x16F2683693E537C9(), 0x00000000);
						}
					}
					break;
				
				case 0x00000018:
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 480.4354f, -1317.91f, 29.5957f) < 400f)
					{
						if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
						{
							if (func_46(0x00000018, unk_0x16F2683693E537C9()))
							{
								if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != unk_0xFBD08BECC9B87937(480.4354f, -1317.91f, 29.5957f) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 486.86f, -1316.604f, 27.71937f, 484.8906f, -1312.647f, 31.72312f, 4.25f, 0x00000000, 0x00000001, 0x00000000))
								{
									func_33(0x00000018, unk_0x16F2683693E537C9(), 0x00000000);
								}
							}
							else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(480.4354f, -1317.91f, 29.5957f, "v_chopshop"))
							{
								func_45(0x00000018, unk_0x16F2683693E537C9());
							}
						}
						else if (!func_46(0x00000018, unk_0x16F2683693E537C9()))
						{
							func_45(0x00000018, unk_0x16F2683693E537C9());
						}
					}
					break;
				
				case 0x00000019:
				case 0x0000001A:
					if (!func_46(0x00000019, unk_0x16F2683693E537C9()))
					{
						func_45(0x00000019, unk_0x16F2683693E537C9());
					}
					if (!func_46(0x0000001A, unk_0x16F2683693E537C9()))
					{
						func_45(0x0000001A, unk_0x16F2683693E537C9());
					}
					break;
				
				case 0x00000004:
					if (!func_46(0x00000004, unk_0x16F2683693E537C9()))
					{
						switch (func_39())
						{
							case 0x00000000:
								if (SYSTEM::VDIST2(Global_9E6A[0x00000004 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)) < 10000f)
								{
									func_45(0x00000004, unk_0x16F2683693E537C9());
								}
								break;
							
							case 0x00000001:
								if (func_37(0x00000002))
								{
									if (func_37(0x00000011))
									{
										if (func_37(0x00000013) || func_36(0x00000013))
										{
											if (SYSTEM::VDIST2(Global_9E6A[0x00000004 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)) < 10000f)
											{
												func_45(0x00000004, unk_0x16F2683693E537C9());
											}
										}
									}
									else if (SYSTEM::VDIST2(Global_9E6A[0x00000004 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)) < 10000f)
									{
										func_45(0x00000004, unk_0x16F2683693E537C9());
									}
								}
								break;
							
							case 0x00000002:
								if (func_37(0x00000014))
								{
									if (SYSTEM::VDIST2(Global_9E6A[0x00000004 /*31*/].f_2, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)) < 10000f)
									{
										func_45(0x00000004, unk_0x16F2683693E537C9());
									}
								}
								break;
							}
					}
					break;
				}
			}
	}
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

bool func_38(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

int func_39()
{
	func_40();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_40()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_43(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_42(unk_0x16F2683693E537C9());
			if (func_41(iVar0) && (!func_71(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_41(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_41(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_44(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_46(iParam0, iParam1))
	{
		return;
	}
	if (Global_9E6A[iParam0 /*31*/].f_18 < 0x00000005)
	{
		Global_9E6A[iParam0 /*31*/].f_19[Global_9E6A[iParam0 /*31*/].f_18] = iParam1;
		Global_9E6A[iParam0 /*31*/].f_18++;
	}
	else
	{
		bVar2 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			iVar1 = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			if (!unk_0xC844350D5D58C99A(iVar1) || unk_0xEB6A8945D1AC98A1(iVar1))
			{
				Global_9E6A[iParam0 /*31*/].f_19[iVar0] = iParam1;
				bVar2 = 0x00000001;
				iVar0 = 0x00000006;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
	{
		if (iParam1 == Global_9E6A[iParam0 /*31*/].f_19[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_47()
{
	var uVar0;
	int iVar1;
	
	uVar0 = 0x000000E2;
	uVar0.f_E4 = 0x00000008;
	func_70(&Global_9511, &uVar0);
	func_48(iLocal_47);
	iVar1 = 0x00000000;
	while (iVar1 < uVar0.f_E3)
	{
		if (uVar0[iVar1] != iLocal_47)
		{
			func_48(uVar0[iVar1]);
		}
		iVar1++;
	}
	iLocal_47++;
	if (iLocal_47 >= 0x000000E2)
	{
		iLocal_47 = 0x00000000;
	}
}

void func_48(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		Global_9174[iParam0] = (Global_9174[iParam0] - 0x00000001);
		if (Global_9174[iParam0] <= 0x00000000)
		{
			unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_9174[iParam0] = 0x00000000;
		}
	}
	else
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
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
	
	if (!func_72())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_69(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000002))
	{
		func_55(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar1 = 0x00000000;
	bVar2 = 0x00000000;
	fVar4 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] == 0x00000002) && fVar4 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		Global_9174[iParam0] = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if (fVar4 < 25f)
			{
				if (Global_181EC.f_157 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						Global_181EC.f_157 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar5 = Global_181EC.f_157;
				iVar6 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar5 == iVar6 && iVar5 != 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					Global_933A[iParam0] = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				}
			}
			unk_0x0674E58A79778E99(&(Global_9257[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		iVar3 = Global_933A[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000000))
	{
		if (Global_1B416.f_2378)
		{
			iVar3 = func_52(iParam0);
		}
		else
		{
			iVar3 = 0x00000000;
		}
		if (func_71(0x0000000E))
		{
			iVar3 = 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000001) && unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) == 0x00000000)
	{
		if (func_51())
		{
			iVar3 = 0x00000000;
		}
		else
		{
			iVar3 = 0x00000001;
		}
	}
	else
	{
		iVar3 = Global_1B416.f_1C58[iParam0];
	}
	if (Global_941D[iParam0] != iVar3)
	{
		bVar1 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) || (Global_9174[iParam0] == 0x00000000 && Global_933A[iParam0] != 0x00000002))
		{
			bVar1 = 0x00000001;
		}
	}
	if (bVar1)
	{
		if (!Global_9161)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0x00000000, 0x00000000, 0x00000000);
			}
			switch (iVar3)
			{
				case 0x00000001:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000003))
					{
						bVar7 = 0x00000001;
					}
					else if (fVar4 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar9 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar8 != iVar9 || iVar8 == 0x00000000)
						{
							bVar7 = 0x00000001;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000002:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000000:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000001);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000003:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0x00000000, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000005:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000006:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0674E58A79778E99(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_941D[iParam0] = iVar3;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		func_50(iParam0);
		if (Global_9174[iParam0] < 0x00000002)
		{
			Global_9174[iParam0]++;
		}
	}
}

void func_50(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9511.f_E4[(iParam0 / 0x00000020)], (iParam0 % 0x00000017)))
	{
		unk_0x5D96D8530B3D0904(&(Global_9511.f_E4[(iParam0 / 0x00000020)]), (iParam0 % 0x00000017));
		Global_9511[Global_9511.f_E3] = iParam0;
		Global_9511.f_E3++;
	}
}

int func_51()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	switch (func_39())
	{
		case 0x00000000:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000042])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39();
	if (func_53(iParam0))
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000031)
	{
		if (iVar0 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (func_41(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
			{
				return 0x00000000;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000000], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000000], iVar0))
				{
					if (iParam0 != 0x00000028)
					{
						return 0x00000000;
					}
					else
					{
						return 0x00000001;
					}
				}
			}
			break;
		
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000032:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000006], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000002], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_41(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000002], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			else if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000001], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_41(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000001], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000035:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000003], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000003], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_53(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 0x00000028 || iParam0 == 0x00000031) || iParam0 == 0x00000034)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_54(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

int func_54(int iParam0)
{
	return iParam0;
}

void func_55(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 0x00000002))
	{
		return;
	}
	iVar0 = func_58();
	iVar1 = func_57(iVar0);
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000086:
		case 0x000000C9:
		case 0x000000CA:
			if (func_56(iParam0))
			{
				if (iVar1 < 0x00000013)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000013)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000CB:
		case 0x000000CC:
			if (func_56(iParam0))
			{
				if (iVar1 < 0x00000012)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000012)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x0000008D:
		case 0x0000008E:
			if (func_56(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000) && !Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					if (iVar1 < 0x00000015)
					{
						if (iVar1 >= 0x00000007)
						{
							Global_1B416.f_1C58[iParam0] = 0x00000000;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					Global_1B416.f_1C58[iParam0] = 0x00000000;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000004])
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000)
			{
				if (iVar1 >= 0x00000015)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else if (iVar1 < 0x00000007)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000091:
		case 0x00000092:
		case 0x0000008F:
		case 0x00000090:
			if (func_56(iParam0))
			{
				if (iVar1 < 0x00000014)
				{
					if (iVar1 >= 0x00000009)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000014)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000009)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000093:
		case 0x00000094:
			if (!func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
			if (!func_56(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) > 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x0000009E:
		case 0x0000009F:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_56(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000A0:
		case 0x000000A1:
			if (unk_0x8A22C4C08282BF26(joaat("omega2")) == 0x00000000)
			{
				if (!func_56(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			if (!func_56(iParam0) && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001A /*34*/].f_6) == 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else
			{
				return;
			}
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
			if (!func_56(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002B /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000BE:
		case 0x000000BF:
			if (!func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000C1:
			if (!func_56(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000005D /*34*/].f_6) > 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000C6:
			if (!func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000050:
			if (!func_56(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CD:
		case 0x000000CE:
			if (!func_56(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002F /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CF:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_56(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
		case 0x000000D2:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D7:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000030 /*34*/].f_6) == 0x00000000)
			{
				if (!func_56(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000063:
		case 0x00000064:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000027 /*34*/].f_6) == 0x00000000)
			{
				if (!func_56(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D8:
			if (!func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000D9:
		case 0x000000DA:
			if (!func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000DE:
			if (func_56(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
	}
}

bool func_56(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_69(iParam0) };
	iVar1 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar1 == 0x00000001 || iVar1 == 0x00000004) || iVar1 == 0x00000002);
}

int func_57(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

var func_58()
{
	var uVar0;
	
	func_68(&uVar0, unk_0x4460E481B9E33ADA());
	func_67(&uVar0, unk_0x8D199E381D262EEF());
	func_66(&uVar0, unk_0xD8A54335F18763BA());
	func_61(&uVar0, unk_0x972A296334C9D57B());
	func_60(&uVar0, unk_0x118229AD063C3C1D());
	func_59(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(*uParam0);
	iVar1 = func_63(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_62(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_62(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

var func_63(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_64(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_64(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_65(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_68(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

struct<7> func_69(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 0x6B918EA1;
			break;
		
		case 0x00000001:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 0x53A940AB;
			break;
		
		case 0x00000002:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 0x86EF4558;
			break;
		
		case 0x00000003:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 0x6B1985F9;
			break;
		
		case 0x00000004:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 0x05BB2ED2;
			break;
		
		case 0x00000005:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 0xEF3F0B86;
			break;
		
		case 0x00000006:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 0x0AEC2A1A;
			break;
		
		case 0x00000007:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 0x2D336EA8;
			break;
		
		case 0x00000008:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 0xC04458CF;
			break;
		
		case 0x00000009:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 0x75554302;
			break;
		
		case 0x0000000A:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 0x8039A343;
			break;
		
		case 0x0000000B:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 0xAC597B82;
			break;
		
		case 0x0000000C:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 0x8BC342BA;
			break;
		
		case 0x0000000D:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 0x49173D5F;
			break;
		
		case 0x0000000E:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 0x4104CC95;
			break;
		
		case 0x0000000F:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 0x357C3584;
			break;
		
		case 0x00000010:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x4152D190;
			break;
		
		case 0x00000011:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x2FCD2E89;
			break;
		
		case 0x00000012:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 0xF5FC937D;
			break;
		
		case 0x00000013:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 0x8C9DC0BD;
			break;
		
		case 0x00000014:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 0x70B93241;
			break;
		
		case 0x00000015:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 0x49B4E441;
			break;
		
		case 0x00000016:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 0x7610BDED;
			break;
		
		case 0x00000017:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 0x50A152BD;
			break;
		
		case 0x00000018:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 0xDE3B10AB;
			break;
		
		case 0x00000019:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 0x4C93B88A;
			break;
		
		case 0x0000001A:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 0x0F9B8B5A;
			break;
		
		case 0x0000001B:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 0x0CF90621;
			break;
		
		case 0x0000001C:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 0x6B5B357A;
			break;
		
		case 0x0000001D:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 0x817161A6;
			break;
		
		case 0x0000001E:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 0x4E3E0F3D;
			break;
		
		case 0x0000001F:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 0xDC882BD3;
			break;
		
		case 0x00000020:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 0xF030709F;
			break;
		
		case 0x00000021:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 0xB36A7A60;
			break;
		
		case 0x00000022:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 0x1204D709;
			break;
		
		case 0x00000023:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 0xD75B3EC1;
			break;
		
		case 0x00000024:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 0x83A1ACAC;
			break;
		
		case 0x00000025:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 0xA6CEF378;
			break;
		
		case 0x00000026:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8301B653;
			break;
		
		case 0x00000027:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x813232B0;
			break;
		
		case 0x00000028:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x899722D3;
			Var0.f_6 = 6.5f;
			break;
		
		case 0x00000029:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x2E413ABC;
			break;
		
		case 0x0000002A:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x29A1143B;
			break;
		
		case 0x0000002B:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1FE49E03;
			break;
		
		case 0x0000002C:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1C4AF98F;
			break;
		
		case 0x0000002D:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8A139784;
			break;
		
		case 0x0000002E:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x9AA652E9;
			break;
		
		case 0x0000002F:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x249850A4;
			break;
		
		case 0x00000030:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xEFC0E6F6;
			break;
		
		case 0x00000031:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xC1F88B66;
			break;
		
		case 0x00000032:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x479926FE;
			break;
		
		case 0x00000033:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x677EC742;
			break;
		
		case 0x00000034:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 0x4265A13E;
			Var0.f_6 = 12f;
			break;
		
		case 0x00000035:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xAED75F6A;
			break;
	}
	switch (iParam0)
	{
		case 0x00000036:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 0x90799222;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000037:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 0x459F7C6B;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000038:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 0x47E780FF;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000039:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 0xC21E9E89;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003A:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 0x478DA961;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003B:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 0x52E90A75;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003C:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 0xE4A12DDF;
			Var0.f_6 = 25f;
			break;
		
		case 0x000000E1:
			Var0.f_3 = 0xE684E276;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 0xEEC9CEC1;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003D:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 0xF0F6743C;
			break;
		
		case 0x0000003E:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 0xCEC320E2;
			break;
		
		case 0x0000003F:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 0x2D865E67;
			break;
		
		case 0x00000040:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 0xCBDAD417;
			break;
		
		case 0x00000041:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 0xA7BC7A3B;
			break;
		
		case 0x00000042:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 0x38968F6D;
			break;
		
		case 0x00000043:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 0x0CA5CE57;
			break;
		
		case 0x00000044:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 0xF8762600;
			break;
		
		case 0x00000045:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 0x693E01A8;
			break;
		
		case 0x00000046:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 0x2F397905;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000047:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 0x2192DDB8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000048:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 0xD4AAF76D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000049:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 0x0A9F8B6B;
			break;
		
		case 0x0000004A:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 0x6E67D2FA;
			break;
		
		case 0x0000004B:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 0xDE5262E2;
			break;
		
		case 0x0000004C:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 0x621E986A;
			break;
		
		case 0x0000004D:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 0x0C2FEC8E;
			break;
		
		case 0x0000004E:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 0x7A03D0CA;
			break;
		
		case 0x0000004F:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 0x548188CD;
			break;
		
		case 0x00000050:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 0xF9A7537E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000051:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 0x6DB3F686;
			break;
		
		case 0x00000052:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 0x526C3FF3;
			break;
		
		case 0x00000053:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 0x0DDC38EF;
			break;
		
		case 0x00000054:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 0x4B88A611;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000055:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 0x8EBCAB6D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000056:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 0x7BDA4229;
			break;
		
		case 0x00000057:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 0x82B4D16A;
			break;
		
		case 0x00000058:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 0x8E67E744;
			break;
		
		case 0x00000059:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 0x94E375C7;
			break;
		
		case 0x0000005A:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 0xFC4A5DE1;
			break;
		
		case 0x0000005B:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 0x990D333D;
			break;
		
		case 0x0000005C:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 0xDE752237;
			break;
		
		case 0x0000005D:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 0x75CDECBF;
			break;
		
		case 0x0000005E:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 0x4FEEAB87;
			break;
		
		case 0x0000005F:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 0x9EC1C92C;
			break;
		
		case 0x00000060:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 0x956610D7;
			break;
		
		case 0x00000061:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 0x92D8C222;
			break;
		
		case 0x00000062:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 0x39739866;
			break;
		
		case 0x00000063:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 0x69AF302C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000064:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 0xB099BE68;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000065:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 0x9402ADFE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000066:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 0x5FDFC5B9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000067:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 0xA936772C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000068:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 0x3842153D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000069:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 0xFAB0F874;
			break;
		
		case 0x0000006A:
			Var0.f_3 = 0x1C8F29BC;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 0xC8D61D80;
			break;
		
		case 0x0000006B:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006C:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006D:
			Var0.f_3 = 0xB6A8EEEE;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 0x5BB47EBE;
			break;
		
		case 0x0000006E:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 0xC6A92236;
			break;
		
		case 0x0000006F:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 0x965A35F0;
			break;
		
		case 0x00000070:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 0xFD3C6106;
			break;
		
		case 0x00000071:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 0xEAA4BBD7;
			break;
		
		case 0x00000072:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 0xB6369857;
			break;
		
		case 0x00000073:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 0x58A7877F;
			break;
		
		case 0x00000074:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 0xF42192E5;
			break;
		
		case 0x00000075:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 0xCA87C509;
			break;
		
		case 0x00000076:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 0xCC794C91;
			break;
		
		case 0x00000077:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 0xF3937748;
			break;
		
		case 0x00000078:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 0xC45498DB;
			break;
		
		case 0x00000079:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 0x2D1D4AFB;
			break;
		
		case 0x0000007A:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 0x1C6E29AD;
			break;
		
		case 0x0000007B:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007C:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007D:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 0x0A21772D;
			break;
		
		case 0x0000007E:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 0x128D0804;
			break;
		
		case 0x00000080:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 0xA2D4904F;
			break;
		
		case 0x00000081:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 0x2D3FA523;
			break;
		
		case 0x00000082:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 0xFAF82BB5;
			break;
		
		case 0x00000083:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 0xE477FEB5;
			break;
		
		case 0x0000007F:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 0x4B0BD273;
			break;
		
		case 0x00000084:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 0xCB4E72F0;
			break;
		
		case 0x00000085:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 0x0E87D246;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000086:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 0x2A908A2B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000087:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 0x636D4AE0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000088:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 0x5264F117;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000089:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 0xC65FF0DC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008A:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 0x84B160CC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008B:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 0x99AFC840;
			break;
		
		case 0x0000008C:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 0x7FF114C7;
			break;
		
		case 0x0000008D:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 0x6FC17308;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008E:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 0x8AE0294D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000091:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 0x74523DE8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000092:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 0xE649A1DD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008F:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 0xEE7A4B56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000090:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 0xD13290C7;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000094:
			Var0.f_3 = 0xF2C06AFF;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 0xEA2D16DE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000093:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 0x1A465DD3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000095:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 0xDCEC4675;
			break;
		
		case 0x00000096:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 0x6C36650B;
			break;
		
		case 0x00000097:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 0x5029B9A4;
			break;
		
		case 0x00000098:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 0xECDF96A9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000099:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 0x5A1B7123;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009A:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 0xA5896609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009B:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 0xBED718A0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009C:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 0x715EF4EC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009D:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 0xE57D5D27;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009E:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 0x18156DFA;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009F:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 0xAB8314D3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A0:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 0xADFA9E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A1:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 0x1B447897;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A2:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000A3:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 0xA7477017;
			break;
		
		case 0x000000A6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 0xE187E49B;
			break;
		
		case 0x000000A7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 0xF12F21CD;
			break;
		
		case 0x000000A8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 0x3AF9B555;
			break;
		
		case 0x000000A9:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 0x78891D35;
			break;
		
		case 0x000000AA:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 0x26BB7997;
			break;
		
		case 0x000000AB:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 0x2008EB12;
			break;
		
		case 0x000000AC:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 0x42D7B0B3;
			break;
		
		case 0x000000AD:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xAA5350AA;
			break;
		
		case 0x000000AE:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xC7980B3B;
			break;
		
		case 0x000000AF:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 0x70D7184A;
			break;
		
		case 0x000000B0:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 0x19FA6A8E;
			break;
		
		case 0x000000B1:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 0x3889169A;
			break;
		
		case 0x000000B2:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 0x94E84F57;
			break;
		
		case 0x000000B3:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 0xBB245373;
			break;
		
		case 0x000000B4:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 0x2EA3BAA4;
			break;
		
		case 0x000000B5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 0xB8CDD26F;
			break;
		
		case 0x000000B6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 0x810F62F3;
			break;
		
		case 0x000000B7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000B8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A4:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 0x58AC90B5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000B9:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 0x5B2F1453;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000BA:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 0x35E72BCB;
			break;
		
		case 0x000000BB:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 0xD096E0F4;
			break;
		
		case 0x000000BC:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 0xA672520A;
			break;
		
		case 0x000000BD:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 0x89231774;
			break;
		
		case 0x000000BE:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 0xDAF08A77;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000BF:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 0x3CB64E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C0:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 0x19261549;
			break;
		
		case 0x000000C1:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 0xB0A21F8A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
	}
	switch (iParam0)
	{
		case 0x000000C4:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 0xEE8704E3;
			break;
		
		case 0x000000C5:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 0x1E346455;
			break;
		
		case 0x000000C2:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 0x592B3B2A;
			break;
		
		case 0x000000C3:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 0x90F3AAD6;
			break;
		
		case 0x000000C6:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 0x87A9D9D8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C7:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 0xFA66AD40;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C8:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 0x27CC080E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C9:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 0x6FDCB756;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CA:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 0x82105BAD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CD:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 0x7A01AE56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CE:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 0x48084A64;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CF:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 0x76668DA5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D0:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 0xD4EAF676;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D1:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 0x0C2D650A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D2:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 0xECEB0B54;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D3:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 0x03E33904;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D4:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 0xC9297F46;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D5:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 0xFC8465FF;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D6:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 0x8859D53B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D7:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 0x18F5F685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D8:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 0x64147F59;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D9:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 0x1891A5FC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DA:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 0xC130F73C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DB:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 0xFCD07A05;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DC:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 0x4F829F6C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DD:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 0xFD826383;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DE:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 0x6850B91E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DF:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 0x630892AE;
			break;
		
		case 0x000000CB:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 0x81DEA14E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CC:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 0xFB9594BE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000E0:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 0x9C748513;
			break;
	}
	return Var0;
}

void func_70(var uParam0, var uParam1)
{
	*uParam1 = { *uParam0 };
	uParam1->f_E3 = uParam0->f_E3;
	uParam0->f_E3 = 0x00000000;
	uParam0->f_E4 = { uParam1->f_E4 };
}

bool func_71(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_72()
{
	if ((func_3() == 0xFFFFFFFF || func_3() == 0x000003E7) && !func_73() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73()
{
	return Global_7831;
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB880D98B5988D0C())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_9E18[iVar0 /*8*/])))
			{
				if (!unk_0xBCFF5481C5F58C19(&(Global_9E18[iVar0 /*8*/])))
				{
					unk_0x2404539258C5376B(&(Global_9E18[iVar0 /*8*/]));
				}
				StringCopy(&(Global_9E18[iVar0 /*8*/]), "", 32);
			}
			iVar0++;
		}
	}
	if (!func_72())
	{
		if (Global_9AA8 >= 0x000000C6)
		{
			if (!bLocal_61)
			{
				func_84();
				iLocal_60 = 0x00000002;
				return;
			}
		}
	}
	iLocal_48 = (iLocal_48 + 1 % 0x000000C6);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000002)
	{
		iVar1 = (iLocal_48 + iVar2 * 198);
		if (iVar1 < 0x000000C6)
		{
			if (func_79(iVar1))
			{
				if (((((iVar1 == 0x000000B3 || iVar1 == 0x000000AE) || iVar1 == 0x000000B2) || iVar1 == 0x000000AF) || iVar1 == 0x000000B0) || iVar1 == 0x000000B1)
				{
					func_79(0x000000B3);
					func_79(0x000000AE);
					func_79(0x000000B2);
					func_79(0x000000AF);
					func_79(0x000000B0);
					func_79(0x000000B1);
				}
			}
		}
		iVar2++;
	}
	if (Global_9AA9)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x000000C6)
		{
			func_78(&vLocal_63, iVar1);
			func_77(&vLocal_63, iVar1, Global_978C[iVar1]);
			func_75(&vLocal_63, iVar1, Global_978C[iVar1]);
			Global_9B71[iVar1] = 0x00000000;
			iVar1++;
		}
		Global_9AA9 = 0x00000000;
	}
	if (unk_0x757EF87A33649210())
	{
		iVar3 = 0x00000000;
		while (iVar3 < 0x0000000A)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_9DC7[iVar3 /*8*/])))
			{
				if (unk_0xBCFF5481C5F58C19(&(Global_9DC7[iVar3 /*8*/])))
				{
					unk_0x81CF20E10AAD5FD5(&(Global_9DC7[iVar3 /*8*/]));
				}
				StringCopy(&(Global_9DC7[iVar3 /*8*/]), "", 32);
			}
			iVar3++;
		}
	}
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	if (!func_76(uParam0->f_4F, 0f, 0f, 0f, 0x00000000))
	{
		if (iParam2 == 0x00000000)
		{
			if (Global_9AAA[iParam1])
			{
				unk_0x2952D66A502EA873(Global_9CFF[iParam1], 0x00000000);
				Global_9AAA[iParam1] = 0x00000000;
			}
		}
		else if (iParam2 == 0x00000001 || iParam2 == 0x00000002)
		{
			if (!Global_9AAA[iParam1])
			{
				Global_9CFF[iParam1] = unk_0x7D6CA5F52B3748BF(uParam0->f_4F, uParam0->f_52, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				Global_9AAA[iParam1] = 0x00000001;
			}
		}
	}
}

bool func_76(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	if (!func_76(uParam0->f_3A, 0f, 0f, 0f, 0x00000000) && !func_76(uParam0->f_3D, 0f, 0f, 0f, 0x00000000))
	{
		if (uParam0->f_40[iParam2])
		{
			unk_0xF858EFDE1871B5F2(uParam0->f_3A, uParam0->f_3D, 0x00000001, 0x00000001);
		}
		else
		{
			unk_0xF858EFDE1871B5F2(uParam0->f_3A, uParam0->f_3D, 0x00000000, 0x00000001);
		}
	}
	if (!func_76(uParam0->f_44, 0f, 0f, 0f, 0x00000000))
	{
		if (uParam0->f_4B[iParam2])
		{
			if (!Global_991A[iParam1])
			{
				Global_9853[iParam1] = unk_0x544B74C043CE9948(uParam0->f_44, uParam0->f_47, uParam0->f_4A, 0x00000000, 0x00000007);
				Global_991A[iParam1] = 0x00000001;
			}
		}
		else if (Global_991A[iParam1])
		{
			unk_0xDDABC98CFF1A4C60(Global_9853[iParam1]);
			Global_991A[iParam1] = 0x00000000;
		}
	}
	if (!func_76(uParam0->f_55, 0f, 0f, 0f, 0x00000000) && !func_76(uParam0->f_58, 0f, 0f, 0f, 0x00000000))
	{
		if (uParam0->f_5B[iParam2])
		{
			unk_0xE342F209E49C5314(uParam0->f_55, uParam0->f_58, 0x00000000, 0x00000001);
		}
		else
		{
			unk_0xE342F209E49C5314(uParam0->f_55, uParam0->f_58, 0x00000001, 0x00000001);
		}
	}
}

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_4[iVar0] = 0x00000000;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0x00000000;
		uParam0->f_4B[iVar0] = 0x00000000;
		uParam0->f_5B[iVar0] = 0x00000000;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0x00000000;
	uParam0->f_21 = 0x00000000;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000003:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000004:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000000:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 0x00000001:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 0x00000002:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			break;
		
		case 0x00000005:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 0x000000C4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			break;
		
		case 0x00000006:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 0x00000007:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000008:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000009:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 0x0000000C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 0x0000000E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "smboat", 32);
			break;
		
		case 0x0000000F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 0x00000010:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000011:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000012:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000013:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000014:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 0x00000015:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000016:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 0x00000017:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 0x00000018:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 0x00000019:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 0x0000001A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 0x0000001B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001D:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = joaat("dt1_05_build1_h");
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001E:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF9526184;
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001F:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF4E5BC6D;
			uParam0->f_4[0x00000001] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 0x00000020:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000021:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000022:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x00000023:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 0x00000024:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 0x00000025:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			break;
		
		case 0x00000026:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000027:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000028:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x00000029:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x0000002A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x0000002F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x00000030:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000001;
			break;
		
		case 0x00000031:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 0x00000032:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 0x00000037:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 0x00000033:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 0x00000034:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000035:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000036:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000038:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x00000039:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 0x0000003D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 0x0000003E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 0x0000003F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 0x00000040:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 0x00000041:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000042:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000043:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 0x00000044:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 0x00000045:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 0x00000046:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000047:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000048:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000049:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000004C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x00000069:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000006A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 0x0000006B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 0x0000006C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 0x0000006D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 0x0000006E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 0x0000006F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x00000070:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x0000004D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000000;
			break;
		
		case 0x0000004E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0x00000000;
			break;
		
		case 0x0000004F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 0x00000050:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 0x00000071:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 0x00000072:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 0x00000073:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 0x00000057:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 0x00000058:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 0x00000059:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 0x0000005A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 0x0000005B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 0x0000005E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 0x0000005F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0x00000000] = 0x00000000;
			uParam0->f_40[0x00000001] = 0x00000001;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000068:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 0x00000067:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 0x00000066:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 0x0000005C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x0000005D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x00000076:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x00000074:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000075:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000077:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000078:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x0000007A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000079:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AA:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AB:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 0x0000007D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x000000A4:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A6:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A7:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A8:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A9:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x0000007E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x0000007F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000080:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000081:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000082:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000083:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000084:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000085:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000086:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x000000B3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x000000AE:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0x00000000;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AF:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B0:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B1:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000B4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 0x000000B5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 0x00000087:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000088:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000089:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000090:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000091:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000092:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000093:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000094:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000095:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 0x00000096:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 0x00000097:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000098:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000099:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x000000AC:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 0x000000B6:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000001;
			break;
		
		case 0x000000B7:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 0x000000B8:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 0x000000B9:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 0x000000BB:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 0x000000BA:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 0x000000BC:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 0x00000051:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 0x00000052:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 0x00000053:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 0x00000054:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 0x00000055:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 0x00000056:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 0x000000BD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 0x000000BE:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 0x000000BF:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C0:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C1:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 0x00000061:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 0x00000062:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 0x00000063:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 0x00000064:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 0x00000065:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 0x000000C3:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 0x000000C5:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 0x0000009C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A1:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A2:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A0:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x00000060:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 0x00000001;
}

int func_79(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	Global_193787 = 0x00000000;
	if (Global_96C5[iParam0] || (!func_72() && !Global_99E1[iParam0]))
	{
		if (func_83(iParam0, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar1 = 0x00000001;
			Global_193787 = 0x00000000;
		}
	}
	if (Global_978C[iParam0] == 0x00000001)
	{
		func_78(&vLocal_63, iParam0);
		bVar0 = 0x00000001;
		if (vLocal_63.f_21)
		{
			if (unk_0x12AB0310C2281427(&(vLocal_63.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(""))
			{
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_63, 0x00000001) > 250f)
				{
					func_80(iParam0, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
				}
			}
		}
	}
	if (Global_9C38[iParam0])
	{
		if (!bVar0)
		{
			func_78(&vLocal_63, iParam0);
			bVar0 = 0x00000001;
		}
		func_77(&vLocal_63, iParam0, Global_978C[iParam0]);
		Global_9C38[iParam0] = 0x00000000;
	}
	if (Global_9B71[iParam0])
	{
		if (!bVar0)
		{
			func_78(&vLocal_63, iParam0);
			bVar0 = 0x00000001;
		}
		func_75(&vLocal_63, iParam0, Global_978C[iParam0]);
		Global_9B71[iParam0] = 0x00000000;
	}
	return iVar1;
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			Global_2537E2.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_1B416.f_1C58.f_E3[iParam0] = iParam1;
		}
		Global_95FE[iParam0] = iParam2;
		Global_96C5[iParam0] = 0x00000001;
		func_83(iParam0, bParam3, iParam4, 0x00000000);
		func_81(iParam0, iParam1);
	}
}

void func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000C:
			if (iParam1 == 0x00000000)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000047:
			if (iParam1 != 0x00000001)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000041:
			if (iParam1 == 0x00000001)
			{
				func_82(0x00000000, 0x00000000);
			}
			else
			{
				func_82(0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000000, 0x00000000);
			}
			break;
		
		case 0x000000AE:
			if (iParam1 == 0x00000002)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 0x00000025:
			if (iParam1 == 0x00000001)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0x00000000);
			}
			break;
	}
}

void func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 0x00000001;
}

bool func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_193787 = 0x00000001;
	bVar0 = 0x00000000;
	Var3.f_4 = 0x00000003;
	Var3.f_8 = 0x00000003;
	Var3.f_40 = 0x00000003;
	Var3.f_4B = 0x00000003;
	Var3.f_5B = 0x00000003;
	func_78(&Var3, iParam0);
	if (func_72())
	{
		iVar1 = Global_1B416.f_1C58.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_2537E2.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_978C[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_193787 = 0x00000001;
	}
	else
	{
		bVar5 = 0x00000001;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0x00000000)
			{
				if (Global_95FE[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var3, 0x00000001) < 200f)
				{
					bVar5 = 0x00000000;
					Global_193787 = 0x00000001;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = 0x00000000;
						Global_193787 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
		{
			bVar5 = 0x00000000;
			Global_193787 = 0x00000001;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0x00000000:
					if (iVar1 == 0x00000002)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0x00000000)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0x00000000);
						}
						if (Var3.f_4[iVar2] != 0x00000000)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 0x00000001);
						}
						Global_9C38[iParam0] = 0x00000001;
					}
					bVar0 = 0x00000001;
					break;
				
				case 0x00000001:
					if (iVar1 == 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000000 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x2404539258C5376B(&(Var3.f_22));
								Global_193787 = 0x00000001;
							}
						}
					}
					else if (iVar1 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
					}
					else if (iVar1 == 0x00000002)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
					}
					Global_9B71[iParam0] = 0x00000001;
					Global_9C38[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_2A));
					if (iVar6 != 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_32)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_32)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0x00000000)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000001)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000002)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_9C38[iParam0] = 0x00000001;
					Global_9B71[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000003:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0x00000000 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0x00000000)
							{
								unk_0xCADC8175C61F28E5(uVar4, 0x00000003);
								Global_9C38[iParam0] = 0x00000001;
								bVar0 = 0x00000001;
							}
							else if (iVar1 == 0x00000001)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 0x00000006 && unk_0xD92EF3526CDA283F(uVar4) != 0x00000007) && unk_0xD92EF3526CDA283F(uVar4) != 0x00000008)
								{
									unk_0xCADC8175C61F28E5(uVar4, 0x0000000A);
									Global_9C38[iParam0] = 0x00000001;
									bVar0 = 0x00000001;
								}
							}
							else if (iVar1 == 0x00000002)
							{
								bVar0 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000004:
					if (iVar1 == 0x00000000)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[0x00000001], Var3.f_4[0x00000000], 0x00000000);
						unk_0x0674E58A79778E99(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					else if (iVar1 == 0x00000001)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0x00000000], Var3.f_4[0x00000001], 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					bVar0 = 0x00000001;
					break;
			}
			if (bVar0)
			{
				Global_96C5[iParam0] = 0x00000000;
				Global_978C[iParam0] = iVar1;
				if (!func_72())
				{
					if (!Global_99E1[iParam0])
					{
						Global_99E1[iParam0] = 0x00000001;
						Global_9AA8++;
					}
				}
			}
		}
	}
	return bVar0;
}

void func_84()
{
	int iVar0;
	struct<7> Var1;
	
	if (Global_9161)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x000000E2)
		{
			Var1 = { func_69(iVar0) };
			if (unk_0x76395FF5E8D5E643(Var1.f_5))
			{
				unk_0xA4A8625CC710BC1F(Var1.f_5);
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000001B)
		{
			if (unk_0x76395FF5E8D5E643(Global_9E6A[iVar0 /*31*/]))
			{
				unk_0xA4A8625CC710BC1F(Global_9E6A[iVar0 /*31*/]);
			}
			iVar0++;
		}
	}
	Global_9161 = 0x00000000;
}

void func_85()
{
	if (!iLocal_62 && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_2[0x0000001B /*3*/], 0x00000002))
	{
		iLocal_62 = 0x00000001;
		bLocal_61 = 0x00000001;
	}
	if (bLocal_61 && (!unk_0xEB880D98B5988D0C() || (unk_0x991B1F0980C62628() && unk_0x00A15D69BCAA5267() == 0x00000005)))
	{
		if (unk_0xBCFF5481C5F58C19("prologue01"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01");
		}
		if (unk_0xBCFF5481C5F58C19("prologue02"))
		{
			unk_0x81CF20E10AAD5FD5("prologue02");
		}
		if (unk_0xBCFF5481C5F58C19("prologue03"))
		{
			unk_0x81CF20E10AAD5FD5("prologue03");
		}
		if (unk_0xBCFF5481C5F58C19("prologue04"))
		{
			unk_0x81CF20E10AAD5FD5("prologue04");
		}
		if (unk_0xBCFF5481C5F58C19("prologue05"))
		{
			unk_0x81CF20E10AAD5FD5("prologue05");
		}
		if (unk_0xBCFF5481C5F58C19("prologue06"))
		{
			unk_0x81CF20E10AAD5FD5("prologue06");
		}
		if (unk_0xBCFF5481C5F58C19("prologuerd"))
		{
			unk_0x81CF20E10AAD5FD5("prologuerd");
		}
		if (unk_0xBCFF5481C5F58C19("Prologue01c"))
		{
			unk_0x81CF20E10AAD5FD5("Prologue01c");
		}
		if (unk_0xBCFF5481C5F58C19("Prologue01d"))
		{
			unk_0x81CF20E10AAD5FD5("Prologue01d");
		}
		if (unk_0xBCFF5481C5F58C19("Prologue01e"))
		{
			unk_0x81CF20E10AAD5FD5("Prologue01e");
		}
		if (unk_0xBCFF5481C5F58C19("Prologue01f"))
		{
			unk_0x81CF20E10AAD5FD5("Prologue01f");
		}
		if (unk_0xBCFF5481C5F58C19("Prologue01g"))
		{
			unk_0x81CF20E10AAD5FD5("Prologue01g");
		}
		if (unk_0xBCFF5481C5F58C19("prologue01h"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01h");
		}
		if (unk_0xBCFF5481C5F58C19("prologue01i"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01i");
		}
		if (unk_0xBCFF5481C5F58C19("prologue01j"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01j");
		}
		if (unk_0xBCFF5481C5F58C19("prologue01k"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01k");
		}
		if (unk_0xBCFF5481C5F58C19("prologue01z"))
		{
			unk_0x81CF20E10AAD5FD5("prologue01z");
		}
		if (unk_0xBCFF5481C5F58C19("prologue03b"))
		{
			unk_0x81CF20E10AAD5FD5("prologue03b");
		}
		if (unk_0xBCFF5481C5F58C19("prologue04b"))
		{
			unk_0x81CF20E10AAD5FD5("prologue04b");
		}
		if (unk_0xBCFF5481C5F58C19("prologue05b"))
		{
			unk_0x81CF20E10AAD5FD5("prologue05b");
		}
		if (unk_0xBCFF5481C5F58C19("prologue06b"))
		{
			unk_0x81CF20E10AAD5FD5("prologue06b");
		}
		if (unk_0xBCFF5481C5F58C19("prologuerdb"))
		{
			unk_0x81CF20E10AAD5FD5("prologuerdb");
		}
		if (unk_0xBCFF5481C5F58C19("prologue_occl"))
		{
			unk_0x81CF20E10AAD5FD5("prologue_occl");
		}
		if (unk_0xBCFF5481C5F58C19("prologue06_int"))
		{
			unk_0x81CF20E10AAD5FD5("prologue06_int");
		}
		if (unk_0xBCFF5481C5F58C19("prologue04_cover"))
		{
			unk_0x81CF20E10AAD5FD5("prologue04_cover");
		}
		if (unk_0xBCFF5481C5F58C19("prologue03_grv_dug"))
		{
			unk_0x81CF20E10AAD5FD5("prologue03_grv_dug");
		}
		if (unk_0xBCFF5481C5F58C19("prologue03_grv_cov"))
		{
			unk_0x81CF20E10AAD5FD5("prologue03_grv_cov");
		}
		if (unk_0xBCFF5481C5F58C19("prologue03_grv_fun"))
		{
			unk_0x81CF20E10AAD5FD5("prologue03_grv_fun");
		}
		if (unk_0xBCFF5481C5F58C19("prologue_grv_torch"))
		{
			unk_0x81CF20E10AAD5FD5("prologue_grv_torch");
		}
		if (func_72())
		{
			func_87("prologue_DistantLights");
			func_87("prologue_LODLights");
		}
		else
		{
			if (unk_0xBCFF5481C5F58C19("prologue_DistantLights"))
			{
				unk_0x81CF20E10AAD5FD5("prologue_DistantLights");
			}
			if (unk_0xBCFF5481C5F58C19("prologue_LODLights"))
			{
				unk_0x81CF20E10AAD5FD5("prologue_LODLights");
			}
		}
		unk_0x81CF20E10AAD5FD5("DES_ProTree_start");
		unk_0x81CF20E10AAD5FD5("DES_ProTree_start_lod");
		unk_0x666B67209D7AA5DD("Prologue_Main", 0x00000000);
		func_86(0x00000000);
		bLocal_61 = 0x00000000;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iParam0 == Global_914D)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000107)
		{
			unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
			iVar0++;
		}
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	Global_914D = iParam0;
	unk_0xFEBB817E58569CE7(iParam0);
	uVar1 = unk_0x6AEF98677E48A036("PrLog");
	unk_0xE247134FB6D925DB(uVar1, iParam0);
}

void func_87(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x757EF87A33649210())
	{
		if (unk_0xBCFF5481C5F58C19(sParam0))
		{
			unk_0x81CF20E10AAD5FD5(sParam0);
		}
	}
	else
	{
		iVar1 = unk_0x12AB0310C2281427(sParam0);
		bVar3 = 0x00000000;
		iVar4 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			iVar2 = unk_0x12AB0310C2281427(&(Global_9DC7[iVar0 /*8*/]));
			if (iVar2 == 0x00000000)
			{
				iVar4 = iVar0;
			}
			if (iVar2 == iVar1)
			{
				bVar3 = 0x00000001;
			}
			iVar0++;
		}
		if (!bVar3 && iVar4 != 0xFFFFFFFF)
		{
			StringCopy(&(Global_9DC7[iVar4 /*8*/]), sParam0, 32);
		}
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	
	if (func_72())
	{
		if (unk_0x8CD06866876216F2())
		{
			return;
		}
		if (func_102())
		{
			return;
		}
	}
	else if (!unk_0x8CD06866876216F2() && func_3() != 0x00000002)
	{
		return;
	}
	if (Global_258C05)
	{
		func_84();
		func_100(0x00000000);
		Global_258C05 = 0x00000000;
	}
	if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
	{
		return;
	}
	unk_0x81CF20E10AAD5FD5("SUNK_SHIP_FIRE");
	unk_0x81CF20E10AAD5FD5("SpaceInterior");
	if (unk_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
	{
		unk_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
	}
	Global_2537E2.f_4B.f_1AA = 0x00000000;
	if (!func_99())
	{
		func_98();
		iLocal_156 = 0x00000001;
	}
	Global_9511.f_E3 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000E2)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iVar0 / 0x00000020)]), (iVar0 % 0x00000020));
		Global_9174[iVar0] = 0x00000000;
		unk_0x0674E58A79778E99(&(Global_916B[(iVar0 / 0x00000020)]), (iVar0 % 0x00000020));
		Global_933A[iVar0] = 0x00000000;
		Global_941D[iVar0] = 0x00000001;
		unk_0x5D96D8530B3D0904(&(Global_9257[(iVar0 / 0x00000020)]), (iVar0 % 0x00000020));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000C6)
	{
		Global_95FE[iVar0] = 0x00000000;
		if (Global_991A[iVar0])
		{
			unk_0xDDABC98CFF1A4C60(Global_9853[iVar0]);
			Global_991A[iVar0] = 0x00000000;
		}
		if (Global_9AAA[iVar0])
		{
			unk_0x2952D66A502EA873(Global_9CFF[iVar0], 0x00000000);
			Global_9AAA[iVar0] = 0x00000000;
		}
		Global_99E1[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_9AA8 = 0x00000000;
	if (func_72())
	{
		func_97();
		func_96();
		func_100(0x00000001);
		func_95();
	}
	else
	{
		func_84();
		func_100(0x00000000);
	}
	iLocal_46 = 0x00000000;
	iLocal_47 = 0x00000000;
	iLocal_48 = 0x00000000;
	bLocal_61 = 0x00000001;
	iLocal_62 = 0x00000000;
	iLocal_160 = 0x00000001;
	Global_9160 = 0x00000000;
	if (func_72())
	{
		unk_0x5D96D8530B3D0904(&iLocal_46, 0x00000001);
		unk_0x5D96D8530B3D0904(&iLocal_46, 0x00000002);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_46, 0x00000000);
	}
	if (iLocal_156)
	{
		func_91(0x00000001);
		iLocal_156 = 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000A)
	{
		StringCopy(&(Global_9E18[iVar1 /*8*/]), "", 32);
		iVar1++;
	}
	func_90();
	if (!func_72())
	{
		func_89();
	}
	iLocal_60 = 0x00000001;
}

void func_89()
{
	unk_0xF2B85E2ED27DF1A8(1287.413f, 2846.593f, 45.05f, 40f);
	unk_0xF2B85E2ED27DF1A8(19.022f, 2611.234f, 81.656f, 40f);
	unk_0xF2B85E2ED27DF1A8(2769.089f, 3920.189f, 41.488f, 40f);
	unk_0xF2B85E2ED27DF1A8(3407.521f, 5504.718f, 21.934f, 40f);
	unk_0xF2B85E2ED27DF1A8(2.43f, 6831.906f, 11.473f, 40f);
	unk_0xF2B85E2ED27DF1A8(-2231.284f, 2417.664f, 7.837f, 40f);
	unk_0xF2B85E2ED27DF1A8(-8.5274f, 3327.212f, 40.5878f, 40f);
	unk_0xF2B85E2ED27DF1A8(2086.27f, 1761.552f, 102.98f, 40f);
	unk_0xF2B85E2ED27DF1A8(1874.689f, 284.791f, 159.961f, 40f);
}

void func_90()
{
	unk_0x26A67839D0382277();
}

void func_91(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_1C58.f_1AA)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x000000C6)
		{
			Global_95FE[iVar0] = 0x00000001;
			func_83(iVar0, 0x00000001, iParam0, 0x00000000);
			iVar0++;
		}
		func_94();
		func_92();
	}
	Global_9DC6 = 0x00000001;
}

void func_92()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		Global_9150[iVar0] = 0x00000000;
		Global_9158[iVar0] = 0x00000000;
		iVar0++;
	}
	func_21(0x00000003, 0x00000001);
	func_21(0x0000000B, 0x00000001);
	func_21(0x0000000F, 0x00000001);
	func_21(0x00000010, 0x00000001);
	func_21(0x00000017, 0x00000001);
	func_21(0x00000016, 0x00000001);
	func_21(0x00000015, 0x00000001);
	func_21(0x00000002, 0x00000001);
	func_21(0x00000004, 0x00000001);
	func_22(0x0000002D, 0x00000001);
	func_21(0x0000008A, 0x00000001);
	func_21(0x000000A6, 0x00000001);
	func_21(0x000000A7, 0x00000001);
	func_21(0x000000A8, 0x00000001);
	func_21(0x00000095, 0x00000001);
	func_21(0x000000BE, 0x00000001);
	func_18(0x000000A9, 0x00000001);
	func_18(0x000000AA, 0x00000001);
	func_18(0x000000AB, 0x00000001);
	func_18(0x000000AC, 0x00000001);
	func_18(0x000000AD, 0x00000001);
	func_18(0x000000AE, 0x00000001);
	func_18(0x000000AF, 0x00000001);
	func_18(0x000000B0, 0x00000001);
	func_18(0x000000B1, 0x00000001);
	func_18(0x000000B2, 0x00000001);
	func_18(0x000000B3, 0x00000001);
	func_18(0x000000B4, 0x00000001);
	func_18(0x000000B5, 0x00000001);
	func_18(0x000000B6, 0x00000001);
	func_18(0x000000B7, 0x00000001);
	func_18(0x000000B8, 0x00000001);
	func_18(0x000000B9, 0x00000001);
	func_18(0x000000BA, 0x00000001);
	func_18(0x000000BB, 0x00000001);
	func_18(0x000000BC, 0x00000001);
	func_18(0x000000BD, 0x00000001);
	func_18(0x00000093, 0x00000001);
	func_18(0x00000092, 0x00000001);
	func_18(0x00000091, 0x00000001);
	func_18(0x00000094, 0x00000001);
	func_18(0x0000008D, 0x00000001);
	func_18(0x0000008E, 0x00000001);
	func_18(0x0000008F, 0x00000001);
	func_18(0x0000008B, 0x00000001);
	func_18(0x00000090, 0x00000001);
	func_18(0x00000000, 0x00000001);
	func_18(0x00000001, 0x00000001);
	func_16(0x00000008, 0x00000001);
	func_16(0x00000009, 0x00000001);
	func_16(0x0000000A, 0x00000001);
	func_18(0x00000018, 0x00000001);
	func_21(0x000000C0, 0x00000001);
	func_21(0x000000C1, 0x00000001);
	func_18(0x000000CC, 0x00000001);
	func_18(0x000000CF, 0x00000001);
	func_18(0x000000D0, 0x00000001);
	func_18(0x000000D1, 0x00000001);
	func_18(0x000000D2, 0x00000001);
	func_18(0x000000D3, 0x00000001);
	func_18(0x000000D4, 0x00000001);
	func_18(0x000000D5, 0x00000001);
	if (!unk_0x8CD06866876216F2() && !func_93())
	{
		func_16(0x00000019, 0x00000001);
		func_16(0x0000001A, 0x00000001);
		func_16(0x0000001B, 0x00000001);
		func_16(0x0000001C, 0x00000001);
		func_16(0x0000001D, 0x00000001);
		func_16(0x0000001E, 0x00000001);
		func_16(0x0000001F, 0x00000001);
		func_16(0x00000020, 0x00000001);
		func_16(0x00000021, 0x00000001);
		func_16(0x00000022, 0x00000001);
		func_16(0x00000023, 0x00000001);
		func_16(0x00000024, 0x00000001);
		func_16(0x00000025, 0x00000001);
		func_16(0x00000026, 0x00000001);
		func_16(0x00000027, 0x00000001);
		func_16(0x00000028, 0x00000001);
		func_16(0x00000029, 0x00000001);
		func_16(0x0000002A, 0x00000001);
		func_16(0x0000002B, 0x00000001);
		func_16(0x0000002C, 0x00000001);
		func_16(0x0000002B, 0x00000001);
		func_16(0x0000002E, 0x00000001);
		func_16(0x0000000C, 0x00000001);
		func_16(0x0000000D, 0x00000001);
		func_16(0x0000000E, 0x00000001);
		func_16(0x0000002F, 0x00000001);
	}
}

bool func_93()
{
	return Global_2564C8.f_24F;
}

void func_94()
{
	func_81(0x0000000C, Global_1B416.f_1C58.f_E3[0x0000000C]);
	func_81(0x00000041, Global_1B416.f_1C58.f_E3[0x00000041]);
	func_81(0x00000006, Global_1B416.f_1C58.f_E3[0x00000006]);
	func_81(0x000000AE, Global_1B416.f_1C58.f_E3[0x000000AE]);
	func_81(0x00000025, Global_1B416.f_1C58.f_E3[0x00000025]);
}

void func_95()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000E2)
	{
		vVar1 = { func_69(iVar0) };
		if (!unk_0x76395FF5E8D5E643(vVar1.f_5))
		{
			unk_0x8010B3127F058F0F(vVar1.f_5, vVar1.f_3, vVar1, 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0++;
	}
	Global_9161 = 0x00000001;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001B)
	{
		unk_0x8010B3127F058F0F(Global_9E6A[iVar0 /*31*/], Global_9E6A[iVar0 /*31*/].f_5, Global_9E6A[iVar0 /*31*/].f_2, 0x00000001, 0x00000001, 0x00000000);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iVar0 /*31*/], 0x00000001, 0x00000001, 0x00000000);
		Global_9E6A[iVar0 /*31*/].f_16 = unk_0x9CED8DAD53D1A397(Global_9E6A[iVar0 /*31*/]);
		unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000002);
		unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
		unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000005);
		unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000006);
		iVar0++;
	}
	bLocal_55 = 0x00000001;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0x00000004;
	Global_9E6A[iVar0 /*31*/] = 0x988C8EDC;
	Global_9E6A[iVar0 /*31*/].f_2 = { -844f, 156f, 66f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_lrggate_02_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 36f;
	Global_9E6A[iVar0 /*31*/].f_8 = 15f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -851.8159f, 170.8743f, 61.30219f };
	Global_9E6A[iVar0 /*31*/].f_C = { -851.57f, 148.1459f, 71.34533f };
	Global_9E6A[iVar0 /*31*/].f_F = 15f;
	Global_9E6A[iVar0 /*31*/].f_10 = { -836.6597f, 175.3366f, 65.05977f };
	Global_9E6A[iVar0 /*31*/].f_13 = { -836.6878f, 152.789f, 73.66382f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.25f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000004);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000000;
	Global_9E6A[iVar0 /*31*/] = 0xEDE40625;
	Global_9E6A[iVar0 /*31*/].f_2 = { 19f, -2530f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 625f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 7.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 15.18826f, -2531.203f, 5.05037f };
	Global_9E6A[iVar0 /*31*/].f_C = { 30.92092f, -2542.128f, 7.5043f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000001;
	Global_9E6A[iVar0 /*31*/] = 0xBDCF3F39;
	Global_9E6A[iVar0 /*31*/].f_2 = { 11f, -2542f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 625f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 7.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 13.80261f, -2540.929f, 5.050376f };
	Global_9E6A[iVar0 /*31*/].f_C = { -5.521768f, -2527.885f, 7.542066f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000002;
	Global_9E6A[iVar0 /*31*/] = 0x34A99E19;
	Global_9E6A[iVar0 /*31*/].f_2 = { -193f, -2515f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 625f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 12f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -190.6964f, -2515.288f, 4.678052f };
	Global_9E6A[iVar0 /*31*/].f_C = { -190.7913f, -2536.692f, 9.000118f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000003;
	Global_9E6A[iVar0 /*31*/] = 0xA8B0013E;
	Global_9E6A[iVar0 /*31*/].f_2 = { -203f, -2515f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 625f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 12f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -200.208f, -2515.379f, 5.047561f };
	Global_9E6A[iVar0 /*31*/].f_C = { -200.3241f, -2495.309f, 7.891297f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000005;
	Global_9E6A[iVar0 /*31*/] = 0x6F041FCE;
	Global_9E6A[iVar0 /*31*/].f_2 = { 476f, -3116f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 484.581f, -3115.548f, 4.652226f };
	Global_9E6A[iVar0 /*31*/].f_C = { 473.6379f, -3116.051f, 11.0701f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000006;
	Global_9E6A[iVar0 /*31*/] = 0x2C92C2A5;
	Global_9E6A[iVar0 /*31*/].f_2 = { 492f, -3116f, 5f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 49f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 484.0876f, -3115.801f, 4.652227f };
	Global_9E6A[iVar0 /*31*/].f_C = { 494.8903f, -3115.787f, 11.06866f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000007;
	Global_9E6A[iVar0 /*31*/] = 0x24BCB406;
	Global_9E6A[iVar0 /*31*/].f_2 = { 1600f, -2806f, 16f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 25f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1593.815f, 2811.392f, 22.02457f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000008;
	Global_9E6A[iVar0 /*31*/] = 0x1AA987D1;
	Global_9E6A[iVar0 /*31*/].f_2 = { 1605f, -2801f, 16f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 25f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1605.858f, 2800.541f, 22.5089f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000009;
	Global_9E6A[iVar0 /*31*/] = 0xEA1A5F03;
	Global_9E6A[iVar0 /*31*/].f_2 = { -1041f, 4906f, 209f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_l");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 25f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1027.922f, 4921.748f, 215f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000A;
	Global_9E6A[iVar0 /*31*/] = 0xAC60921A;
	Global_9E6A[iVar0 /*31*/].f_2 = { -1045f, 4915f, 209f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_r");
	Global_9E6A[iVar0 /*31*/].f_6 = 900f;
	Global_9E6A[iVar0 /*31*/].f_7 = 36f;
	Global_9E6A[iVar0 /*31*/].f_8 = 40f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1027.922f, 4921.748f, 215f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000B;
	Global_9E6A[iVar0 /*31*/] = 0xF5CF48E2;
	Global_9E6A[iVar0 /*31*/].f_2 = { 523.982f, 167.7104f, 100.5962f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_hw1_03_gardoor_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 625f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 21.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 520.2437f, 164.8932f, 98.04417f };
	Global_9E6A[iVar0 /*31*/].f_C = { 523.08f, 172.6999f, 102.7824f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000C;
	Global_9E6A[iVar0 /*31*/] = 0xB5A6BBCC;
	Global_9E6A[iVar0 /*31*/].f_2 = { 18.6504f, 546.3401f, 176.3448f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_ch_025c_g_door_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 14.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 19.32684f, 550.176f, 174.0001f };
	Global_9E6A[iVar0 /*31*/].f_C = { 15.76926f, 543.8351f, 178.023f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000D;
	Global_9E6A[iVar0 /*31*/] = 0x0CB2B8F8;
	Global_9E6A[iVar0 /*31*/].f_2 = { 397.83f, -1607.34f, 28.34f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_facgate_07b");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 14.5f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 405.3651f, -1612.886f, 27.52282f };
	Global_9E6A[iVar0 /*31*/].f_C = { 396.684f, -1605.761f, 32.76698f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000E;
	Global_9E6A[iVar0 /*31*/] = 0xF61620D7;
	Global_9E6A[iVar0 /*31*/].f_2 = { -2559.19f, 1910.86f, 169.07f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_l");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 13f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_9E6A[iVar0 /*31*/].f_C = { -2572.051f, 1924.18f, 171.3947f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000000F;
	Global_9E6A[iVar0 /*31*/] = 0x869AC1DE;
	Global_9E6A[iVar0 /*31*/].f_2 = { -2556.66f, 1915.72f, 169.07f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_r");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 13f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_9E6A[iVar0 /*31*/].f_C = { -2572.051f, 1924.18f, 171.3947f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000010;
	Global_9E6A[iVar0 /*31*/] = 0xDC4A47CE;
	Global_9E6A[iVar0 /*31*/].f_2 = { -961.23f, -2796.28f, 13.96f };
	Global_9E6A[iVar0 /*31*/].f_5 = 0xB965B659;
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 7f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -958.5402f, -2798.281f, 12.71478f };
	Global_9E6A[iVar0 /*31*/].f_C = { -964.4572f, -2808.593f, 17.71479f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000011;
	Global_9E6A[iVar0 /*31*/] = 0xD0059B16;
	Global_9E6A[iVar0 /*31*/].f_2 = { -967.01f, -2802.45f, 13.96f };
	Global_9E6A[iVar0 /*31*/].f_5 = 0xB965B659;
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 6.5f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -970.272f, -2800.353f, 12.71479f };
	Global_9E6A[iVar0 /*31*/].f_C = { -965.0052f, -2791.101f, 17.71479f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000012;
	Global_9E6A[iVar0 /*31*/] = 0x37C4017B;
	Global_9E6A[iVar0 /*31*/].f_2 = { 431.41f, -1000.16f, 28.65f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 11f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_9E6A[iVar0 /*31*/].f_C = { 433.8862f, -1017.222f, 29.59358f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000013;
	Global_9E6A[iVar0 /*31*/] = 0x0AB2A751;
	Global_9E6A[iVar0 /*31*/].f_2 = { 436.22f, -1001.17f, 26.71f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 11f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_9E6A[iVar0 /*31*/].f_C = { 433.8862f, -1017.222f, 29.59358f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000014;
	Global_9E6A[iVar0 /*31*/] = 0x811EE098;
	Global_9E6A[iVar0 /*31*/].f_2 = { -1588.27f, 2794.21f, 16.85f };
	Global_9E6A[iVar0 /*31*/].f_5 = 0xB965B659;
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 6.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1585.349f, 2796.765f, 15.33345f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1573.874f, 2783.339f, 20.00324f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000015;
	Global_9E6A[iVar0 /*31*/] = 0x12B01C35;
	Global_9E6A[iVar0 /*31*/].f_2 = { -1589.58f, 2793.67f, 16.86f };
	Global_9E6A[iVar0 /*31*/].f_5 = 0xB965B659;
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 6.75f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -1592.552f, 2791.04f, 15.32601f };
	Global_9E6A[iVar0 /*31*/].f_C = { -1604.54f, 2805.558f, 20.1746f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000016;
	Global_9E6A[iVar0 /*31*/] = 0xB294D047;
	Global_9E6A[iVar0 /*31*/].f_2 = { -984.08f, -2348.4f, 12.94f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 15.25f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_9E6A[iVar0 /*31*/].f_C = { -993.5251f, -2333.147f, 20.42473f };
	Global_9E6A[iVar0 /*31*/].f_F = 15.25f;
	Global_9E6A[iVar0 /*31*/].f_10 = { -984.4644f, -2357.32f, 11.92474f };
	Global_9E6A[iVar0 /*31*/].f_13 = { -1002.451f, -2346.988f, 20.44472f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000017;
	Global_9E6A[iVar0 /*31*/] = 0x03EDF398;
	Global_9E6A[iVar0 /*31*/].f_2 = { -994.5f, -2341.65f, 12.94f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 15.25f;
	Global_9E6A[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_9E6A[iVar0 /*31*/].f_C = { -993.5251f, -2333.147f, 20.42473f };
	Global_9E6A[iVar0 /*31*/].f_F = 15.25f;
	Global_9E6A[iVar0 /*31*/].f_10 = { -984.4644f, -2357.32f, 11.92474f };
	Global_9E6A[iVar0 /*31*/].f_13 = { -1002.451f, -2346.988f, 20.44472f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000018;
	Global_9E6A[iVar0 /*31*/] = 0x3F4976A3;
	Global_9E6A[iVar0 /*31*/].f_2 = { 484.56f, -1315.57f, 30.2f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 6.5f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 486.4057f, -1311.665f, 27.75163f };
	Global_9E6A[iVar0 /*31*/].f_C = { 488.9124f, -1316.529f, 31.65202f };
	Global_9E6A[iVar0 /*31*/].f_F = 8.5f;
	Global_9E6A[iVar0 /*31*/].f_10 = { 482.3187f, -1319.807f, 26.91848f };
	Global_9E6A[iVar0 /*31*/].f_13 = { 478.041f, -1311.511f, 31.95297f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.55f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x00000019;
	Global_9E6A[iVar0 /*31*/] = 0x54D435BE;
	Global_9E6A[iVar0 /*31*/].f_2 = { 451.81f, -1994.17f, 22.14f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 10f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_9E6A[iVar0 /*31*/].f_C = { 459.423f, -2010.026f, 26.19515f };
	Global_9E6A[iVar0 /*31*/].f_F = 10f;
	Global_9E6A[iVar0 /*31*/].f_10 = { 452.2514f, -1987.255f, 21.18945f };
	Global_9E6A[iVar0 /*31*/].f_13 = { 466.8117f, -2002.878f, 25.8988f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.3f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
	iVar0 = 0x0000001A;
	Global_9E6A[iVar0 /*31*/] = 0x8B48A2A2;
	Global_9E6A[iVar0 /*31*/].f_2 = { 460.06f, -2003.11f, 22.14f };
	Global_9E6A[iVar0 /*31*/].f_5 = joaat("prop_facgate_01b");
	Global_9E6A[iVar0 /*31*/].f_6 = 324f;
	Global_9E6A[iVar0 /*31*/].f_7 = 9f;
	Global_9E6A[iVar0 /*31*/].f_8 = 10f;
	Global_9E6A[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_9E6A[iVar0 /*31*/].f_C = { 459.423f, -2010.026f, 26.19515f };
	Global_9E6A[iVar0 /*31*/].f_F = 10f;
	Global_9E6A[iVar0 /*31*/].f_10 = { 452.2514f, -1987.255f, 21.18945f };
	Global_9E6A[iVar0 /*31*/].f_13 = { 466.8117f, -2002.878f, 25.8988f };
	Global_9E6A[iVar0 /*31*/].f_17 = 0.3f;
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000000);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000001);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Global_9E6A[iVar0 /*31*/].f_1), 0x00000007);
}

void func_98()
{
	int iVar0;
	
	if (func_72())
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x000000C5)
	{
		if (func_72())
		{
			Global_1B416.f_1C58.f_E3[iVar0] = 0x00000000;
		}
		else
		{
			Global_2537E2.f_4B.f_E3[iVar0] = 0x00000000;
		}
		Global_96C5[iVar0] = 0x00000001;
		Global_95FE[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x000000E1)
	{
		if (func_72())
		{
			Global_1B416.f_1C58[iVar0] = 0x00000001;
		}
		else
		{
			Global_2537E2.f_4B[iVar0] = 0x00000000;
		}
		unk_0x5D96D8530B3D0904(&(Global_9162[(iVar0 / 0x00000020)]), (iVar0 % 0x00000020));
		Global_9511.f_E3 = 0x00000000;
		Global_9174[iVar0] = 0x00000000;
		unk_0x0674E58A79778E99(&(Global_916B[(iVar0 / 0x00000020)]), (iVar0 % 0x00000020));
		Global_933A[iVar0] = 0x00000000;
		Global_941D[iVar0] = 0x00000000;
		iVar0++;
	}
	if (func_72())
	{
		Global_1B416.f_1C58.f_E3[0x000000B9] = 0x00000001;
		Global_1B416.f_1C58.f_E3[0x000000BB] = 0x00000001;
		Global_1B416.f_1C58.f_E3[0x000000BA] = 0x00000001;
		Global_1B416.f_1C58.f_E3[0x00000056] = 0x00000001;
		Global_1B416.f_1C58[0x0000006A] = 0x00000000;
		Global_1B416.f_1C58[0x00000040] = 0x00000000;
		Global_1B416.f_1C58[0x00000041] = 0x00000000;
		Global_1B416.f_1C58[0x00000042] = 0x00000000;
		Global_1B416.f_1C58[0x000000A4] = 0x00000000;
		Global_1B416.f_1C58.f_1AA = 0x00000001;
	}
	else
	{
		Global_2537E2.f_4B.f_E3[0x0000003E] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x000000B3] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x0000000E] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x00000056] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x000000AD] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x0000004C] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x0000005E] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x00000046] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x00000047] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x00000049] = 0x00000001;
		Global_2537E2.f_4B.f_E3[0x00000048] = 0x00000000;
		Global_2537E2.f_4B.f_E3[0x0000004A] = 0x00000000;
		Global_2537E2.f_4B.f_1AA = 0x00000001;
	}
	Global_1B416.f_1C58.f_E3[0x0000004C] = 0x00000001;
	Global_1B416.f_1C58.f_E3[0x0000005E] = 0x00000001;
}

bool func_99()
{
	if (func_72())
	{
		return Global_1B416.f_1C58.f_1AA;
	}
	return Global_2537E2.f_4B.f_1AA;
}

void func_100(bool bParam0)
{
	func_101("MPINT_MISC_DOOR", joaat("prop_sc1_12_door"), -58.47f, -1530.51f, 34.54f, bParam0);
	func_101("MPINT_HIGHEND1_DOOR_L", joaat("prop_ss1_mpint_door_l"), -778.36f, 313.54f, 86.14f, bParam0);
	func_101("MPINT_HIGHEND1_DOOR_R", joaat("prop_ss1_mpint_door_r"), -776.2f, 313.54f, 86.14f, bParam0);
	func_101("MPINT_HIGHEND1_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -796.08f, 313.78f, 86.68f, bParam0);
	func_101("MPINT_HIGHEND5_DOOR_L", joaat("prop_dt1_20_mp_door_l"), -263.46f, -970.52f, 31.61f, bParam0);
	func_101("MPINT_HIGHEND5_DOOR_R", joaat("prop_dt1_20_mp_door_r"), -260.66f, -969.21f, 31.61f, bParam0);
	func_101("MPINT_HIGHEND5_DOOR_GARAGE", joaat("prop_dt1_20_mp_gar"), -282.55f, -995.16f, 24.67f, bParam0);
	func_101("MPINT_HIGHEND7_DOOR_L", joaat("sm_14_mp_door_l"), -1444.28f, -545.01f, 34.98f, bParam0);
	func_101("MPINT_HIGHEND7_DOOR_R", joaat("sm_14_mp_door_r"), -1442.3f, -543.63f, 34.98f, bParam0);
	func_101("MPINT_HIGHEND7_DOOR_GARAGE", joaat("prop_sm_14_mp_gar"), -1455.81f, -503.98f, 32.29f, bParam0);
	func_101("MPINT_HIGHEND9_DOOR_L", joaat("prop_bh1_09_mp_l"), -914.06f, -453.65f, 39.81f, bParam0);
	func_101("MPINT_HIGHEND9_DOOR_R", joaat("prop_bh1_09_mp_r"), -912.91f, -455.89f, 39.81f, bParam0);
	func_101("MPINT_HIGHEND9_DOOR_GARAGE", joaat("prop_bh1_09_mp_gar"), -820.57f, -436.81f, 37.44f, bParam0);
	func_101("MPINT_HIGHEND12_DOOR_L", joaat("dt1_03_mp_door"), -47.84f, -588.77f, 38.36f, bParam0);
	func_101("MPINT_HIGHEND12_DOOR_GARAGE", joaat("prop_com_gar_door_01"), -33.79f, -621.62f, 36.11f, bParam0);
	func_101("MPINT_HIGHEND14_DOOR_GARAGE", joaat("prop_bh1_08_mp_gar"), -878.02f, -359.46f, 36.27f, bParam0);
	func_101("MPINT_HIGHEND16_DOOR_L", joaat("prop_ss1_mpint_door_l"), -615.8f, 38.37f, 44.04f, bParam0);
	func_101("MPINT_HIGHEND16_DOOR_R", joaat("prop_ss1_mpint_door_r"), -613.64f, 38.37f, 44.04f, bParam0);
	func_101("MPINT_HIGHEND16_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -629.91f, 56.57f, 44.72f, bParam0);
	func_101("MPINT_LOWEND1_DOOR", joaat("p_cut_door_01"), -40.19f, -58.21f, 64.21f, bParam0);
	func_101("MPINT_LOWEND2_DOOR", joaat("p_cut_door_03"), -200.29f, 185.6f, 80.66f, bParam0);
	func_101("MPINT_LOWEND3_DOOR_L", joaat("prop_kt1_10_mpdoor_l"), -812.83f, -979.01f, 14.6f, bParam0);
	func_101("MPINT_LOWEND3_DOOR_R", joaat("prop_kt1_10_mpdoor_r"), -811.25f, -981.27f, 14.61f, bParam0);
	func_101("MPINT_LOWEND4_DOOR", joaat("kt1_11_mp_door"), -661.87f, -854.63f, 24.69f, bParam0);
	func_101("MPINT_LOWEND5_DOOR", joaat("prop_sm_10_mp_door"), -1533.58f, -327.59f, 48.09f, bParam0);
	func_101("MPINT_LOWEND6_DOOR_L", joaat("prop_sm1_11_doorr"), -1565.58f, -406.92f, 42.61f, bParam0);
	func_101("MPINT_LOWEND6_DOOR_R", joaat("prop_sm1_11_doorl"), -1564.01f, -405.04f, 42.61f, bParam0);
	func_101("MP_APARTMENT_DOOR_01", joaat("prop_sm1_11_doorr"), -1605.014f, -431.9617f, 40.6384f, bParam0);
	func_101("MPINT_LOWEND7_DOOR_GARAGE", joaat("prop_sm1_11_garaged"), -1605.26f, -447.18f, 38.58f, bParam0);
	func_101("MPINT_MIDEND1_DOOR_L", joaat("prop_bh1_44_door_01l"), 286.91f, -159.22f, 64.84f, bParam0);
	func_101("MPINT_MIDEND1_DOOR_R", joaat("prop_bh1_44_door_01r"), 285.94f, -161.88f, 64.84f, bParam0);
	func_101("MPINT_MIDEND2_DOOR", joaat("prop_bh1_44_door_01r"), 4.4f, 37.32f, 71.75f, bParam0);
	func_101("MPINT_MIDEND3_DOOR", joaat("prop_bh1_44_door_01r"), 8.74f, 81.31f, 78.65f, bParam0);
	func_101("MPINT_MIDEND4_DOOR_L", joaat("prop_sm1_11_doorl"), -510.42f, 108f, 64.02f, bParam0);
	func_101("MPINT_MIDEND4_DOOR_R", joaat("prop_sm1_11_doorr"), -512.84f, 107.66f, 64.02f, bParam0);
	func_101("MPINT_MIDEND5_DOOR", joaat("prop_ss1_05_mp_door"), -197.23f, 85.16f, 69.9f, bParam0);
	func_101("MPINT_MIDEND6_DOOR_L", joaat("prop_ss1_08_mp_door_l"), -627.34f, 170.87f, 61.29f, bParam0);
	func_101("MPINT_MIDEND6_DOOR_R", joaat("prop_ss1_08_mp_door_r"), -627.34f, 168.53f, 61.29f, bParam0);
	func_101("MPINT_MIDEND7_DOOR_L", joaat("vb_43_door_l_mp"), -969.36f, -1429.98f, 7.97f, bParam0);
	func_101("MPINT_MIDEND7_DOOR_R", joaat("vb_43_door_r_mp"), -968.6f, -1432.04f, 6.77f, bParam0);
	func_101("MPINT_MIDEND8_DOOR_L", joaat("prop_kt1_10_mpdoor_r"), -830.05f, -862.99f, 21.09f, bParam0);
	func_101("MPINT_MIDEND8_DOOR_R", joaat("prop_kt1_10_mpdoor_l"), -832.81f, -862.99f, 21.09f, bParam0);
	func_101("MPINT_MIDEND9_DOOR_L", joaat("prop_kt1_06_door_l"), -763.9f, -755.08f, 28.19f, bParam0);
	func_101("MPINT_MIDEND9_DOOR_R", joaat("prop_kt1_06_door_r"), -763.9f, -752.49f, 28.19f, bParam0);
}

void func_101(char* sParam0, int iParam1, vector3 vParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	if (bParam3)
	{
		if (!unk_0x76395FF5E8D5E643(iVar0))
		{
			unk_0x8010B3127F058F0F(iVar0, iParam1, vParam2, 0x00000000, 0x00000000, 0x00000000);
		}
		unk_0x1BA7FCEAFCE8D46E(iVar0, 0x00000001, 0x00000000, 0x00000001);
	}
	else if (unk_0x76395FF5E8D5E643(iVar0))
	{
		unk_0x1BA7FCEAFCE8D46E(iVar0, 0x00000000, 0x00000000, 0x00000001);
		unk_0xA4A8625CC710BC1F(iVar0);
	}
}

bool func_102()
{
	return Global_14084E;
}

void func_103()
{
	if (func_72())
	{
		if (((!Global_1B416.f_1C58.f_1AA || unk_0xEAE0D21A50E6C7F4(iLocal_46, 0x00000000)) || unk_0x8CD06866876216F2()) || Global_9160)
		{
			if (!Global_259187)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_46, 0x00000000) || Global_9160)
				{
					iLocal_156 = 0x00000001;
				}
				iLocal_60 = 0x00000000;
			}
		}
	}
	else if ((unk_0xEAE0D21A50E6C7F4(iLocal_46, 0x00000001) || ((!unk_0x8CD06866876216F2() && !func_93()) && !func_104())) || Global_9160)
	{
		if (func_3() == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_46, 0x00000002))
			{
				iLocal_60 = 0x00000000;
			}
		}
		else
		{
			iLocal_60 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_46, 0x00000001))
		{
			iLocal_156 = 0x00000001;
		}
	}
}

int func_104()
{
	if ((((func_108() || func_107()) || func_93()) || func_106()) || func_105())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_105()
{
	return Global_2564C8.f_2E6;
}

var func_106()
{
	return Global_2564C8.f_251;
}

var func_107()
{
	return Global_2564C8.f_25E;
}

bool func_108()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000015);
}

int func_109()
{
	if (Global_14082C == 0x00000044)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

