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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
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
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_107 = 0x00000003;
	if (unk_0x2EBF608FFE6CA406(0x00000062))
	{
		func_321();
	}
	if (func_318(0x00000000))
	{
		bLocal_86 = 0x00000001;
		iLocal_83 = unk_0x02A813E6E0380440();
	}
	if (Global_3)
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_317(0x0000000E))
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x10FAF14A60A0DBE1();
	}
	func_316(&Local_96, 0x00000003);
	func_307(&uScriptParam_120);
	vVar0 = { 24.088f, -1345.623f, 29.5082f };
	vVar1 = { 24.94562f, -1344.954f, 29.49f };
	vVar2 = { vVar0 - vVar1 };
	vVar2 = { vVar1 - vVar0 };
	fVar4 = 147.297f;
	vVar3 = { -1228.443f, -905.3416f, 13.523f };
	vVar2 = { vVar3 - Vector(12.31f, -907.8234f, -1222.331f) };
	vVar2 = { func_306(vVar2, fVar4) };
	if ((((func_305() && !func_304()) || Global_1B3DE) || Global_7832) || Global_1B40B != 0xFFFFFFFF)
	{
		if (func_305() && !func_304())
		{
		}
		else if (Global_1B3DE)
		{
		}
		else if (Global_7832)
		{
		}
		else if (Global_1B40B != 0xFFFFFFFF)
		{
		}
		if (!func_303())
		{
			func_301(&(Local_66.f_1D6), 0x00000040);
			func_299(0x00000001);
		}
		else
		{
			func_299(0x00000000);
		}
		func_321();
	}
	else if (Global_1B416.f_4E3E[iLocal_80] > 0x00000000)
	{
		if (func_298())
		{
			func_296(iLocal_80, Local_66.f_1E6.f_9.f_2, &vVar5, &vVar6);
			unk_0x745CE398A4B0A3C6(Local_66.f_B5, 15f, 0x00000000);
			iLocal_79 = unk_0x7D6CA5F52B3748BF(vVar5, vVar6, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			if (!func_303())
			{
				func_299(0x00000001);
			}
			else
			{
				func_299(0x00000000);
				func_294(&(Local_66.f_1D6), 0x00000200);
			}
			iLocal_65 = 0x00000002;
		}
		else
		{
			func_299(0x00000000);
		}
		if (!func_293())
		{
			iLocal_62 = 0x0000000A;
			iVar7 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
			if (iVar7 == 0x00000000)
			{
				Local_66.f_2.f_C = 0x00000001;
			}
			else
			{
				Local_66.f_2.f_C = 0x00000000;
			}
		}
	}
	else
	{
		func_299(0x00000000);
	}
	while (0x00000001)
	{
		func_290(&Local_96);
		if (func_285())
		{
			func_321();
		}
		if (!bLocal_86)
		{
			if (func_318(0x00000000))
			{
				func_284();
				bLocal_86 = 0x00000001;
			}
		}
		switch (iLocal_65)
		{
			case 0x00000000:
				func_255();
				break;
			
			case 0x00000001:
				func_6();
				break;
			
			case 0x00000002:
				if (func_303())
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_80)) && !func_3(unk_0xD803B885F5E47A62()))
						{
							unk_0x1E3A202C24F57DA6(0x00000000);
							func_2("SHOP_CLOSED", func_5(iLocal_80));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_80)))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (func_1(Local_66.f_1D6, 0x00000200))
					{
						func_299(0x00000001);
						func_301(&(Local_66.f_1D6), 0x00000200);
					}
				}
				break;
			
			case 0x00000003:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_2(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_3(int iParam0)
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

bool func_4(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return "SHR_GAS";
		
		case 0x00000005:
			return "SHR_LIQ1";
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			return "SHR_LIQ2";
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return "SHR_CONV";
		
		case 0xFFFFFFFE:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_252();
	func_249();
	func_244();
	func_238();
	func_220();
	func_198();
	func_192();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 0x00000001);
	}
	else
	{
		return;
	}
	bLocal_88 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), Local_66.f_2, 45f)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), Local_66.f_2, 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000000)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_66.f_2)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_66.f_2))
				{
					if (!func_26() && !unk_0x18AF0C72ABD5543B())
					{
						bLocal_88 = 0x00000001;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_1D6, 0x00000004))
		{
			iVar2 = func_25(unk_0x16F2683693E537C9());
			iVar3 = unk_0x654E7ACE881E41FE(iVar2);
			if (iVar3 == 0x18D5FA97)
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 8f, -8f, 0xFFFFFFFF, 0x00000131, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if ((((iVar3 == 0x451B04BC || iVar3 == 0x39D5C192) || iVar3 == 0x33431399) || iVar3 == 0xB7BBD827) || iVar3 == 0xC6E9A5C5)
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 8f, -8f, 0xFFFFFFFF, 0x00000131, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 0x00000001;
		}
	}
	else if (iLocal_89)
	{
		if (!unk_0xEA6BC48857E0AC4C(sLocal_90))
		{
			if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 0x00000003))
			{
				unk_0xFB131B855F2FD560(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 0xC1000000);
			}
		}
		iLocal_89 = 0x00000000;
	}
	switch (iLocal_62)
	{
		case 0x00000000:
			if (func_303())
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					iLocal_62 = 0x0000000C;
				}
				else
				{
					iLocal_50 = 0x00000002;
					iLocal_57 = 0x00000001;
					if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
					{
						if (!unk_0x405E212DDE472467(Local_66, 0x00000000))
						{
							if ((func_25(Local_66) == joaat("weapon_unarmed") || func_25(Local_66) == joaat("object")) || func_25(Local_66) == joaat("weapon_briefcase"))
							{
								iLocal_60 = 0x00000001;
								iLocal_62 = 0x00000001;
							}
							else if (!func_1(Local_66.f_1D6, 0x00000001))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_60 = 0x00000002;
									iLocal_62 = 0x00000005;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_60 = 0x00000003;
									iLocal_62 = 0x00000005;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_60 = 0x00000004;
									iLocal_62 = 0x00000005;
								}
								else
								{
									iLocal_62 = 0x00000002;
								}
								func_294(&(Local_66.f_1D6), 0x00000001);
							}
						}
						else
						{
							iLocal_62 = 0x00000003;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 0x00000002;
				iLocal_62 = 0x00000003;
			}
			else if (!func_303() && func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001))
			{
				iLocal_62 = 0x0000000C;
			}
			break;
		
		case 0x00000001:
			if (!func_1(Local_66.f_1D6, 0x00000002))
			{
				iLocal_51 = 0x00000001;
				iLocal_56 = 0x00000001;
				func_294(&(Local_66.f_1D6), 0x00000002);
			}
			iLocal_62 = 0x00000005;
			break;
		
		case 0x00000002:
			iLocal_51 = 0x00000005;
			iLocal_56 = 0x00000003;
			iLocal_62 = 0x00000005;
			break;
		
		case 0x00000003:
			iLocal_51 = 0x00000006;
			iLocal_56 = 0x00000004;
			iLocal_62 = 0x00000005;
			break;
		
		case 0x00000005:
			if (!func_303() && !func_1(Local_66.f_1D6, 0x00000001))
			{
				iLocal_62 = 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (iLocal_51 >= 0x0000000D)
			{
				if (Local_66.f_2.f_C)
				{
					if (!func_20())
					{
						iLocal_62 = 0x00000007;
					}
				}
				else
				{
					iLocal_62 = 0x00000008;
				}
				iLocal_52 = 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (func_1(Local_66.f_1D6, 0x00000100))
			{
				func_19();
				unk_0x0674E58A79778E99(&Global_17183, 0x00000003);
				iLocal_62 = 0x0000000D;
			}
			break;
		
		case 0x00000008:
			if (func_1(Local_66.f_1D6, 0x00000010))
			{
				if (func_17())
				{
					if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
					{
						if (!unk_0x869EFD0BC0868856(Local_66.f_2))
						{
							if (func_303())
							{
								if (Local_66.f_1E6 >= 0x00000000)
								{
									if (unk_0x69DF961355195C3C(Local_66.f_1E6))
									{
										unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_1E6.f_1, "handsup_base", 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										iLocal_58 = 0x0000000A;
									}
								}
							}
							else
							{
								unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								iLocal_58 = 0x0000000A;
							}
						}
					}
					unk_0x0674E58A79778E99(&Global_17183, 0x00000003);
					iLocal_62 = 0x0000000D;
				}
			}
			break;
		
		case 0x00000009:
			func_16(0x00000002, 0x00000000);
			iLocal_59 = 0x00000007;
			if (iLocal_63 == 0x00000001)
			{
				iLocal_62 = 0x00000008;
			}
			else
			{
				iLocal_62 = 0x0000000D;
			}
			break;
		
		case 0x0000000A:
			if (func_303())
			{
				iLocal_62 = 0x0000000B;
			}
			break;
		
		case 0x0000000B:
			if (!func_15(&(Local_66.f_1DD)))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 0x0000001C;
				}
				else
				{
					iLocal_51 = 0x0000001D;
				}
				func_12(&(Local_66.f_1DD));
			}
			else if (func_9(&(Local_66.f_1DD)) > 5f)
			{
				func_16(0x00000001, 0x00000000);
				iLocal_62 = 0x0000000D;
			}
			else if (func_9(&(Local_66.f_1DD)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_58 != 0x0000000C)
					{
						iLocal_58 = 0x0000000C;
						if (!Local_66.f_2.f_C)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!func_15(&(Local_66.f_1DD)))
			{
				func_7();
				iLocal_51 = 0x0000001E;
				iLocal_58 = 0x0000000C;
				func_12(&(Local_66.f_1DD));
			}
			else if (func_9(&(Local_66.f_1DD)) > 3f)
			{
				iLocal_62 = 0x0000000D;
			}
			break;
		
		case 0x0000000D:
			break;
	}
}

void func_7()
{
	int iVar0;
	
	if (unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		return;
	}
	unk_0xDD353D0E9C789D0E(&iVar0);
	unk_0x96167B03C5A77156(0x00000000, Local_66.f_2.f_6, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, Local_66.f_2.f_9);
	unk_0x8BE3D040D15AEA1D(0x00000000, 0xFFFFFFFF);
	unk_0x75ABDC5F81978924(iVar0);
	unk_0x78ADC381772E3D54(Local_66.f_2, iVar0);
	unk_0xF82EA857DA10E0CD(&iVar0);
	func_294(&(Local_66.f_1D6), 0x00000080);
}

void func_8()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0xF82EA857DA10E0CD(&iLocal_78);
		unk_0xDD353D0E9C789D0E(&iLocal_78);
		unk_0x8BE3D040D15AEA1D(0x00000000, 0x00001388);
		unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_78);
		unk_0x78ADC381772E3D54(Local_66.f_2, iLocal_78);
	}
}

float func_9(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

void func_12(int iParam0)
{
	if (!func_15(iParam0))
	{
		func_13(iParam0);
	}
}

void func_13(int iParam0)
{
	func_14(iParam0, 0f);
}

void func_14(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_15(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

void func_16(int iParam0, bool bParam1)
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		unk_0x67F91979413C5D76(unk_0xA30EC016B12C03E4(), iParam0, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xA30EC016B12C03E4(), 0x00000000);
		Local_66.f_9E = 0x00000001;
		if (bParam1)
		{
			unk_0x34D79252800B23FF(iParam0);
		}
		else
		{
			unk_0x34D79252800B23FF(0x00000005);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_17()
{
	func_18();
	switch (iLocal_54)
	{
		case 0x00000000:
			Local_66.f_1E6 = unk_0xE9744DB7B8CA6965(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9, 0x00000002);
			if (!unk_0x28072FDD60CE3A6E(Local_66.f_2, 0x00000001))
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000))
				{
					if (Local_66.f_1E6 >= 0x00000000)
					{
						unk_0x20641932E5104B25(Local_66.f_1C, 0x00000001, 0x00000000);
						unk_0xEF190091B5B9F5EB(Local_66.f_1C, 0x00000001);
						unk_0x915804B434753CBD(Local_66.f_2, Local_66.f_1E6, Local_66.f_1E6.f_1, Local_66.f_1E6.f_3, 8f, -1.5f, 0x00000019, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xE14EC663EED44AD5(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 0x00000089, 0x447A0000);
						unk_0xE14EC663EED44AD5(Local_66.f_60.f_1, Local_66.f_1E6, Local_66.f_1E6.f_5, Local_66.f_1E6.f_1, 1000f, 8f, 0x00000089, 0x447A0000);
					}
					else
					{
						return 0x00000001;
					}
					iLocal_55 = 0x00000001;
					iLocal_58 = 0x00000005;
					iLocal_54 = 0x00000002;
				}
				else
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Local_66.f_1E6 >= 0x00000000)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.478f)
					{
						if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000))
						{
							unk_0xE14EC663EED44AD5(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 0x00000089, 0x447A0000);
							Local_66.f_1C.f_7 = { Local_66.f_1C.f_7, Local_66.f_1C.f_7.f_1, (Local_66.f_1C.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Local_66.f_1E6 >= 0x00000000)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.447f)
					{
						if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000))
						{
							if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_1C))
							{
								unk_0x4A4806F9D471E491(Local_66.f_1C, 0x00000001, 0x00000000);
							}
						}
					}
					if (Local_66.f_1D3)
					{
						if (unk_0x8816C701817AAC75(Local_66.f_1E6) != 1.45f)
						{
							unk_0x5E4E98C6D98C9C57(Local_66.f_1E6, 1.45f);
						}
					}
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.894f)
					{
						iLocal_54 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000))
			{
				if (Local_66.f_1E6 >= 0x00000000)
				{
					if (unk_0x69DF961355195C3C(Local_66.f_1E6))
					{
						if (iLocal_53 >= 0x00000004)
						{
							if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.871f)
							{
								iLocal_55 = 0x00000004;
							}
							unk_0x1BF8B16C32704027(Local_66.f_1C, -16f, 0x00000001);
							unk_0xAC0C6241732E36F6(Local_66.f_1C);
						}
					}
				}
			}
			iLocal_54 = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_18()
{
	if (Local_66.f_1E6 >= 0x00000000)
	{
		if (unk_0x69DF961355195C3C(Local_66.f_1E6))
		{
			if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) >= 0f)
			{
				if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.117f)
				{
					iLocal_53 = 0x00000001;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.154f)
				{
					iLocal_53 = 0x00000002;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.477f)
				{
					iLocal_53 = 0x00000003;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.487f)
				{
					iLocal_53 = 0x00000004;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.809f)
				{
					iLocal_53 = 0x00000005;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.871f)
				{
					iLocal_53 = 0x00000006;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.894f)
				{
					iLocal_53 = 0x00000007;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.999f)
				{
					iLocal_53 = 0x00000008;
				}
				else if (iLocal_53 == 0x00000009)
				{
				}
			}
			else
			{
				iLocal_53 = 0x00000000;
			}
		}
		else if (iLocal_53 == 0x00000000)
		{
		}
	}
	else
	{
		iLocal_53 = 0x00000000;
	}
}

void func_19()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0x262EF6C6306BEA6C(Local_66.f_2, joaat("weapon_pumpshotgun"), 0x0000000C, 0x00000000, 0x00000001);
		unk_0x5745EA6329A91E29(Local_66.f_2, joaat("weapon_pumpshotgun"), 0x00000000);
		unk_0x6DF7BF67E86AAE86(Local_66.f_2, 0x84DCFAAD);
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2.f_16));
		unk_0x9BE7E7B6B488CC55(0x00000000, Local_66, 0x000007D0, 0x00000000);
		unk_0x2C4A1A0F54A166E8(0x00000000, Local_66, 0x00000FA0, 0xC6EE6B4C);
		unk_0x7C8478BF70C1E072(0x00000000, 25f, 0x00000000);
		unk_0x75ABDC5F81978924(Local_66.f_2.f_16);
		unk_0x78ADC381772E3D54(Local_66.f_2, Local_66.f_2.f_16);
	}
}

int func_20()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000002))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0x00000000))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0x00000000);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_22(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
									{
										return 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

float func_23(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x405E212DDE472467(Local_66, 0x00000000))
		{
			iVar1 = unk_0x6937EA2286828455(Local_66, 0x00000000);
			bVar0 = 0x00000001;
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			iVar1 = unk_0x728870EB733D12A1();
			bVar0 = 0x00000001;
		}
	}
	if (bVar0)
	{
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			else if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			else if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			else if (Local_66.f_C7 != -1f)
			{
				if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

int func_26()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_27()
{
	switch (iLocal_50)
	{
		case 0x00000000:
			break;
		
		case 0x00000002:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_1B416.f_4E3E.f_14, 0x00000001))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 0x00000002:
								func_34("SHR_HOLDUP_1", 0x00000002, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
								break;
							
							case 0x00000001:
								func_294(&(Global_1B416.f_4E3E.f_14), 0x00000001);
								iLocal_50 = 0x00000001;
								break;
						}
						if (iLocal_63 > 0x00000000)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 0x00000001);
								iLocal_50 = 0x00000004;
							}
						}
						if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
						{
						}
					}
					else
					{
						iLocal_50 = 0x00000001;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 0x00000001);
				}
			}
			break;
		
		case 0x00000001:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_1B416.f_4E3E.f_14, 0x00000002))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 0x00000002:
								func_34("SHR_SNK_TUT", 0x00000002, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
								break;
							
							case 0x00000001:
								func_294(&(Global_1B416.f_4E3E.f_14), 0x00000002);
								iLocal_50 = 0x00000004;
								break;
						}
					}
					else
					{
						iLocal_50 = 0x00000004;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 0x00000001);
				}
			}
			break;
		
		case 0x00000003:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_1B416.f_4E3E.f_14, 0x00000002))
			{
				func_29("SHR_SNK_TUT", 0x00000001);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_1B416.f_4E3E.f_14, 0x00000001))
			{
				func_29("SHR_HOLDUP_1", 0x00000001);
			}
			iLocal_50 = 0x00000004;
			break;
		
		case 0x00000004:
			if ((!func_303() && func_33("SHR_HOLDUP_1")) && !func_1(Global_1B416.f_4E3E.f_14, 0x00000001))
			{
				func_29("SHR_HOLDUP_1", 0x00000001);
				iLocal_50 = 0x00000002;
			}
			if ((!func_303() && func_33("SHR_SNK_TUT")) && !func_1(Global_1B416.f_4E3E.f_14, 0x00000002))
			{
				func_29("SHR_SNK_TUT", 0x00000001);
				iLocal_50 = 0x00000002;
			}
			break;
	}
}

bool func_28(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_28(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0x00000000);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 0x00000002))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_1B416.f_4FB5.f_91 - 0x00000001));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 0x00000001);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 0xFFFFFFFF;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0x00000000;
}

void func_32(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

int func_33(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 0x00000001;
	}
	if (func_33(sParam0))
	{
		return 0x00000000;
	}
	return 0x00000002;
}

void func_37()
{
	if (func_303())
	{
		if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
		{
		}
	}
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
	}
	switch (iLocal_51)
	{
		case 0x00000001:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_GREET", 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000002:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000003:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000004:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000005:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000006:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x0000000F:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_STUBBORN", 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000007:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000008:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 0x00000003);
			}
			iLocal_51 = 0x0000000E;
			break;
		
		case 0x00000024:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_THREATENED", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x00000009:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "BUMP", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x0000000A:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x0000000B:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x0000000E:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 0x00000007;
						iLocal_91 = 0x00000001;
					}
				}
				else if (func_44())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 0x00000008;
						iLocal_92 = 0x00000001;
					}
				}
				if (!func_15(&(Local_66.f_1E3)))
				{
					func_12(&(Local_66.f_1E3));
				}
				else if (func_11(&(Local_66.f_1E3)))
				{
					func_43(&(Local_66.f_1E3));
				}
				else if (func_9(&(Local_66.f_1E3)) > 10f)
				{
					if (!func_1(Local_66.f_1D6, 0x00000020))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 0x00000004))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_51 = 0x00000024;
						func_16(0x00000001, 0x00000000);
						func_294(&(Local_66.f_1D6), 0x00000020);
					}
				}
			}
			else if (func_15(&(Local_66.f_1E3)) && !func_11(&(Local_66.f_1E3)))
			{
				func_42(&(Local_66.f_1E3));
			}
			break;
		
		case 0x0000000C:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_48(unk_0x16F2683693E537C9(), "SHOP_HOLDUP", 0x00000008);
				}
				func_13(&(Local_66.f_1D7));
				if (Local_66.f_2.f_B)
				{
					iLocal_51 = 0x00000025;
				}
				else
				{
					iLocal_51 = 0x0000000D;
				}
			}
			else
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
			}
			break;
		
		case 0x0000000D:
			if (func_41(&(Local_66.f_1D7)) > 3f)
			{
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 0x00000016;
				}
				else if (Local_66.f_1CA)
				{
					iLocal_51 = 0x00000011;
				}
				else if (Local_66.f_1CB)
				{
					iLocal_51 = 0x00000012;
				}
				else if (Local_66.f_1CC)
				{
					iLocal_51 = 0x00000013;
				}
				else if (Local_66.f_1CD)
				{
					iLocal_51 = 0x00000014;
				}
				else if (Local_66.f_1CE)
				{
					iLocal_51 = 0x00000015;
				}
				else
				{
					iLocal_51 = 0x00000010;
				}
				func_40(&(Local_66.f_1D7));
			}
			break;
		
		case 0x00000010:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000011:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000012:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000013:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000014:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000015:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x00000016:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 0x00000008);
				}
				func_294(&(Local_66.f_1D6), 0x00000100);
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x00000017:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (Local_66.f_1C.f_E)
				{
					if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
					{
						func_48(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 0x00000003);
					}
				}
				iLocal_51 = 0x00000025;
			}
			else
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
			}
			break;
		
		case 0x00000018:
			if (unk_0xDF1306B443CD3D15(Local_66.f_2E.f_4[0x00000000], 0x00000000))
			{
				unk_0xAA280AF45BCCCF21(Local_66.f_2E.f_4[0x00000000], 0x00000000);
			}
			if (!unk_0x437347B10A200C4B(Local_66.f_2E[0x00000000], 0x00000000))
			{
				func_48(Local_66.f_2E[0x00000000], "SURROUNDED", 0x0000000F);
			}
			iLocal_51 = 0x00000019;
			break;
		
		case 0x00000019:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_48(unk_0x16F2683693E537C9(), "SPOT_POLICE", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x0000001A:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_POUR_CAN", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x0000001B:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SCREAM_PANIC", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			else
			{
				func_38();
			}
			break;
		
		case 0x0000001C:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 0x00000008);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x0000001D:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 0x00000008);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x0000001E:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				func_48(Local_66.f_2, "SHOP_NO_COPS", 0x00000003);
			}
			iLocal_51 = 0x00000025;
			break;
		
		case 0x0000001F:
			if (!func_20())
			{
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x00000021:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()) && !unk_0x65636D4556D82155(Local_66.f_2))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_48(unk_0x16F2683693E537C9(), "SHOP_HURRY", 0x0000000B);
				}
				func_13(&(Local_66.f_1D7));
				iLocal_51 = 0x00000020;
			}
			break;
		
		case 0x00000020:
			if (func_41(&(Local_66.f_1D7)) > 1f)
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_HURRYING", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x00000022:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_SELL", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
		
		case 0x00000023:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
				{
					func_48(Local_66.f_2, "SHOP_STEAL", 0x00000003);
				}
				iLocal_51 = 0x00000025;
			}
			break;
	}
}

void func_38()
{
	Global_4CD7 = 0x00000000;
	func_39();
}

void func_39()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_40(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

float func_41(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!func_11(iParam0))
		{
			iParam0->f_2 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

void func_43(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			iParam0->f_1 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(iParam0, 0x00000002);
		}
	}
}

int func_44()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_45()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_49(iParam2), 0x00000001);
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

bool func_50()
{
	return Global_56C1;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_303() && iLocal_64 != 0x00000003)
	{
		iVar2 = 0x00000000;
		while (iVar2 < unk_0xDFB2BAED99ED0A2E(0x00000000))
		{
			iVar0 = unk_0xB98DB26FBF676FA1(0x00000000, iVar2);
			switch (iVar0)
			{
				case 0x0000008E:
					unk_0x218F818E64020C17(0x00000000, iVar2, &iVar1, 0x00000001);
					if (func_53(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x16F2683693E537C9()))
							{
								func_294(&(Local_66.f_1D6), 0x00000008);
							}
						}
						if (!unk_0xEC560E589DF8370E(iVar1) && !unk_0xE2F1E99DD161A861(iVar1))
						{
							func_294(&(Local_66.f_1D6), 0x00000008);
						}
					}
					break;
				
				case 0x0000008D:
					unk_0x218F818E64020C17(0x00000000, iVar2, &iVar1, 0x00000001);
					if (func_53(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x16F2683693E537C9()))
							{
								func_294(&(Local_66.f_1D6), 0x00000008);
							}
						}
						if (!unk_0xEC560E589DF8370E(iVar1) && !unk_0xE2F1E99DD161A861(iVar1))
						{
							func_294(&(Local_66.f_1D6), 0x00000008);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)
{
	return iParam0;
}

int func_53(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x4D570FEF9D230CE7(iParam0) == Local_66.f_B9)
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_54()
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_303())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0x00000000))
			{
				iVar2 = 0x00000000;
				iVar3 = 0x00000000;
				iVar2 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, 0xFFFFFFFF);
				iVar0 = 0x00000000;
				while (iVar0 < Local_66.f_A2)
				{
					Local_66.f_A2[iVar0] = 0x00000000;
					iVar0++;
				}
				iVar0 = 0x00000000;
				iVar3 = 0x00000000;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_A2)
					{
						if ((unk_0xC844350D5D58C99A(uVar1[iVar3]) && !unk_0xEB6A8945D1AC98A1(uVar1[iVar3])) && !unk_0x405E212DDE472467(uVar1[iVar3], 0x00000000))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uVar1[iVar3], unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
							{
								Local_66.f_A2[iVar0] = uVar1[iVar3];
								Local_66.f_A2.f_5[iVar0 /*3*/] = { unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 0x00000000);
			}
			iVar0 = 0x00000000;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0xC844350D5D58C99A(Local_66.f_A2[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_66.f_A2[iVar0])) && !unk_0x405E212DDE472467(Local_66.f_A2[iVar0], 0x00000000))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0x00000001))
					{
						if ((unk_0x1C0640BA9A7327B3() % 0x000005DC) < 0x00000032)
						{
						}
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], 0x00000000, 0x00000000);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], 0x00000000, 0x00000000);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], 0x00000001);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 0x00000001, 0x00000001, 0x00000001);
					}
					else if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_A2[iVar0]))
					{
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], 0x00000001, 0x00000000);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], 0x00000000);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 0x00000001, 0x00000001, 0x00000001);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000000);
			}
			iVar0 = 0x00000000;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0xC844350D5D58C99A(Local_66.f_A2[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_66.f_A2[iVar0])) && !unk_0x405E212DDE472467(Local_66.f_A2[iVar0], 0x00000000))
				{
					if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_A2[iVar0]))
					{
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], 0x00000001, 0x00000000);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], 0x00000000);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 0x00000001, 0x00000001, 0x00000001);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()
{
	switch (iLocal_99)
	{
		case 0x00000000:
			if (func_303())
			{
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
				unk_0x3F423BF5B8125A50("oddjobs@shop_robbery@rob_till");
				unk_0x3F423BF5B8125A50("misscommon@response");
				unk_0x0D3BE1DE0262A012(func_64(iLocal_80), 0x00000000);
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_ego"));
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_meto"));
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					unk_0x523BCC9DC80CD82F(Local_66.f_2E.f_1A);
					unk_0x523BCC9DC80CD82F(Local_66.f_2E.f_1B);
				}
				iLocal_99 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xAE317D00A5A55DF6("SCRIPT\MARKET_CASH_REGISTER", 0x00000000, 0xFFFFFFFF))
			{
				return;
			}
			if (!unk_0xB4AE0788C1587752("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0xB4AE0788C1587752("misscommon@response"))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!unk_0xB87F6CF6E5628C67(Local_66.f_2E.f_1A))
				{
					return;
				}
				if (!unk_0xB87F6CF6E5628C67(Local_66.f_2E.f_1B))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_80, 0x00000000))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 0x00000004))
			{
				if (!func_1(Local_66.f_1D6, 0x00000400))
				{
					iLocal_98[0x00000000] = unk_0x7707E48765093646(func_61(0x00000000), func_60(0x00000000), 0x00000001, 0x00000001, 0x00000000);
					iLocal_98[0x00000001] = unk_0x7707E48765093646(func_61(0x00000001), func_60(0x00000001), 0x00000001, 0x00000001, 0x00000000);
					iLocal_98[0x00000002] = unk_0x7707E48765093646(func_61(0x00000002), func_60(0x00000002), 0x00000001, 0x00000001, 0x00000000);
					unk_0x4A4806F9D471E491(iLocal_98[0x00000000], 0x00000000, 0x00000000);
					unk_0x4A4806F9D471E491(iLocal_98[0x00000001], 0x00000000, 0x00000000);
					unk_0x4A4806F9D471E491(iLocal_98[0x00000002], 0x00000000, 0x00000000);
					func_294(&(Local_66.f_1D6), 0x00000400);
				}
				func_294(&(Local_66.f_1D6), 0x00000004);
				iLocal_99 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!func_303())
			{
				func_56();
				func_301(&(Local_66.f_1D6), 0x00000004);
				iLocal_99 = 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (func_1(Local_66.f_1D6, 0x00000004))
			{
				func_56();
				func_301(&(Local_66.f_1D6), 0x00000004);
			}
			break;
	}
}

void func_56()
{
	unk_0x8D17794CE3273D70("oddjobs@shop_robbery@rob_till");
	unk_0x8D17794CE3273D70("misscommon@response");
	unk_0x42740B44BA8D7B43("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xF5A41F3D3B38EFE3(func_64(iLocal_80));
	unk_0x71199B01895C6202(joaat("prop_choc_ego"));
	unk_0x71199B01895C6202(joaat("prop_choc_meto"));
	unk_0x71199B01895C6202(joaat("prop_choc_pq"));
	func_57(0x00000001, iLocal_80);
	if (!bLocal_86)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1A);
		unk_0x71199B01895C6202(Local_66.f_2E.f_1B);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_574E.f_20E1 = 0x00000000;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(0x00000009, 0x00000000);
		Global_574E.f_15FC[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0x00000000;
	}
	if (bParam0)
	{
		func_58(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_58(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 0x00000001;
		}
		else if (Global_574E.f_1659[iVar2] == 0x00000000)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0.1f);
		
		case 0x00000001:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0f);
		
		case 0x00000002:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("prop_choc_pq");
		
		case 0x00000001:
			return joaat("prop_choc_ego");
		
		case 0x00000002:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return "ShopUI_Title_GasStation";
		
		case 0x00000005:
			return "ShopUI_Title_LiquorStore3";
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			return "ShopUI_Title_LiquorStore2";
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return "ShopUI_Title_ConvenienceStore";
		
		case 0xFFFFFFFE:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()
{
	switch (iLocal_100)
	{
		case 0x00000000:
			if (func_303())
			{
				unk_0x3F423BF5B8125A50(Local_66.f_1E6.f_1);
				iLocal_100 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xB4AE0788C1587752(Local_66.f_1E6.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 0x00000010))
			{
				func_294(&(Local_66.f_1D6), 0x00000010);
				iLocal_100 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!func_303() && iLocal_63 != 0x00000001)
			{
				unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
				func_301(&(Local_66.f_1D6), 0x00000010);
				iLocal_100 = 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (func_1(Local_66.f_1D6, 0x00000010))
			{
				unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
				func_301(&(Local_66.f_1D6), 0x00000010);
			}
			break;
	}
}

void func_66()
{
	switch (iLocal_119)
	{
		case 0x00000000:
			if (Local_66.f_9E)
			{
				iLocal_119 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_303())
			{
				if (func_15(&(Local_66.f_9E.f_1)))
				{
					func_40(&(Local_66.f_9E.f_1));
				}
				if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
				}
			}
			else
			{
				func_13(&(Local_66.f_9E.f_1));
				iLocal_119 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_303())
			{
				iLocal_119 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			break;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_191();
	if (((((iLocal_58 == 0x00000001 || iLocal_58 == 0x00000002) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000) && !unk_0xEB6A8945D1AC98A1(Local_66)) && !func_190(0xBF800000)) && !unk_0xEB6A8945D1AC98A1(Local_66.f_2))
	{
		iVar1 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
		iVar2 = unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
		if (((iLocal_64 != 0x00000002 && iLocal_64 != 0x00000003) && iLocal_64 != 0x00000004) && func_303())
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
		iVar4 = 0x00000000;
		switch (iLocal_64)
		{
			case 0x00000000:
				if (func_1(Local_66.f_1D6, 0x00000004) && func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_189(iLocal_80, &(Local_66.f_1E6.f_6), Local_66.f_1E6.f_9.f_2, &(Local_66.f_66.f_1A[0x00000000 /*3*/]), &(Local_66.f_66.f_1A[0x00000001 /*3*/]), &(Local_66.f_66.f_21), &(Local_66.f_66.f_24)))
					{
						vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						if (unk_0x0EB28750412C3A5A(vVar3, Local_66.f_66.f_21, 0x00000001) < 5f)
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_66.f_66.f_1A[0x00000000 /*3*/], Local_66.f_66.f_1A[0x00000001 /*3*/], Local_66.f_66.f_24, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), Local_66.f_66.f_21, 135f))
								{
									if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_188())
									{
										func_187("SHR_MENU");
									}
									Local_66.f_1D5 = 0xFFFFFFFF;
									func_186(&(Local_66.f_1D5), 0x00000004, "SHR_MENU", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
									unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000000);
									iLocal_64 = 0x00000001;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if (!unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), Local_66.f_66.f_21, 135f) || !func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					Local_66.f_66.f_16 = 0xFFFFFFFF;
					func_185(&(Local_66.f_1D5));
					iLocal_64 = 0x00000000;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_188()) && !func_184(Local_66.f_1D5, 0x00000000))
				{
					func_187("SHR_MENU");
				}
				if ((!unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x9832A1748E6D3DBF(unk_0x16F2683693E537C9()))
				{
					if (func_182(Local_66.f_1D5, 0x00000001))
					{
						if (func_28("SHR_MENU"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 0x00000001);
						func_13(&(Local_66.f_66.f_35));
						func_185(&(Local_66.f_1D5));
						func_181(0x00000017, 0x00000001);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(Local_66.f_2))
						{
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), Local_66.f_2, 0x00000000);
						}
						iLocal_64 = 0x00000002;
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0x9F4FE516EAACCFC5(iLocal_118))
				{
					iLocal_118 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
				}
				func_180(iLocal_80, Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, &(Local_66.f_66), &(Local_66.f_66.f_3), &uVar6);
				unk_0x608A456FDD8A83D8(iLocal_118, Local_66.f_66);
				unk_0x5F3CBA6EB9341C90(iLocal_118, Local_66.f_66.f_3, 0x00000002);
				unk_0x5818C8D5303DCCF8(iLocal_118, 35f);
				unk_0x91F5B0244AAE6222(iLocal_118, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_118, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					func_294(&(Local_66.f_1D6), 0x00000800);
				}
				Local_66.f_66.f_2E = func_64(iLocal_80);
				Local_66.f_66.f_17 = 0x00000000;
				Local_66.f_66.f_18 = 0x00000003;
				func_179(0x00000000, 0x00000000);
				func_178(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_177(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
				func_176(func_5(iLocal_80));
				func_174(0x00000001, Local_66.f_66.f_2E, Local_66.f_66.f_2E);
				func_173();
				func_169(0x00000000, "SNK_ITEM1", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_169(0x00000000, "ITEM_COST", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_165(func_168(0x00000000), 0x00000000);
				func_169(0x00000001, "SNK_ITEM2", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_169(0x00000001, "ITEM_COST", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_165(func_168(0x00000001), 0x00000000);
				func_169(0x00000002, "SNK_ITEM3", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_169(0x00000002, "ITEM_COST", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_165(func_168(0x00000002), 0x00000000);
				func_164(0x00000000);
				func_163(Local_66.f_66.f_17, 0x00000001, 0x00000001);
				func_162("SNK_ITEM1_D", 0x00000000, 0x00000000);
				func_161(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF, 0x00000000);
				func_161(0x000000CA, "ITEM_BACK", 0xFFFFFFFF, 0x00000000);
				func_161(0x000000CB, "SNK_LIFT", 0xFFFFFFFF, 0x00000000);
				iLocal_64 = 0x00000003;
				break;
			
			case 0x00000003:
				iVar4 = 0x00000000;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(0x00000002))
					{
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
						func_158(0x00000000, 0x00000000, 0x00000000, 0x00000001);
						func_157(0x00000000, 0xFFFFFFFF, 0x00000001);
						if (func_156())
						{
							if (Global_4121D1 != Local_66.f_66.f_17)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								Local_66.f_66.f_17 = Global_4121D1;
								func_163(Local_66.f_66.f_17, 0x00000001, 0x00000001);
								Local_66.f_66.f_25 = 0x00000000;
								Local_66.f_66.f_29 = 0x00000000;
								Local_66.f_66.f_2A = 0x00000000;
								sVar5 = func_155(Local_66.f_66.f_17);
								if (unk_0xEF07223F00EBE9C9(sVar5))
								{
									func_162(sVar5, 0x00000000, 0x00000000);
								}
							}
							else
							{
								iVar4 = 0x00000001;
							}
						}
					}
				}
				func_116(0x00000001, iLocal_80, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				func_112();
				if (unk_0xD245978525608929(0x00000002, 0x000000C9) || iVar4 == 0x00000001)
				{
					Local_66.f_66.f_25 = 0x00000001;
					Local_66.f_66.f_29 = 0x00000000;
					Local_66.f_66.f_2A = 0x00000000;
					if (Local_66.f_66.f_28 && Local_66.f_66.f_2B)
					{
						Local_66.f_66.f_2C = 0x00000001;
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
						iLocal_108 = 0x00000001;
						iLocal_111 = Local_66.f_66.f_17;
						iLocal_64 = 0x00000004;
					}
					else
					{
						Local_66.f_66.f_2C = 0x00000000;
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
					}
				}
				if (unk_0xD245978525608929(0x00000002, 0x000000CB))
				{
					iLocal_64 = 0x00000006;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
					func_111();
				}
				if (unk_0xD245978525608929(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
				{
					iLocal_64 = 0x00000007;
					Local_66.f_66.f_2D = unk_0x1C0640BA9A7327B3();
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
					func_111();
				}
				break;
			
			case 0x00000004:
				func_116(0x00000001, iLocal_80, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				switch (Local_66.f_66.f_17)
				{
					case 0x00000000:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 10 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 10, 0x00000000);
						}
						break;
					
					case 0x00000001:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 20, 0x00000000);
						}
						break;
					
					case 0x00000002:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 15, 0x00000000);
						}
						break;
				}
				func_69(func_105(), 0x00000062, iVar0);
				if (!Local_66.f_66.f_27)
				{
					iLocal_51 = 0x00000022;
					Local_66.f_66.f_27 = 0x00000001;
				}
				func_13(&(Local_66.f_66.f_35));
				iLocal_64 = 0x00000003;
				break;
			
			case 0x00000005:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 0x00000006;
				}
				break;
			
			case 0x00000006:
				switch (Local_66.f_66.f_17)
				{
					case 0x00000000:
						if (iVar1 + 10 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 10, 0x00000000);
						}
						break;
					
					case 0x00000001:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 20, 0x00000000);
						}
						break;
					
					case 0x00000002:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 15, 0x00000000);
						}
						break;
				}
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
				func_181(0x00000017, 0x00000000);
				iLocal_51 = 0x00000023;
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 0x00000004))
				{
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001)
				{
					func_16(0x00000001, 0x00000000);
				}
				iLocal_64 = 0x00000008;
				break;
			
			case 0x00000007:
				if ((unk_0x1C0640BA9A7327B3() - Local_66.f_66.f_2D) > 0x000003E8)
				{
					iLocal_64 = 0x00000000;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C1);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BD);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BE);
				}
				break;
			
			case 0x00000008:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 0x00000008 && func_1(Local_66.f_1D6, 0x00000004))
		{
			if ((iLocal_64 == 0x00000003 || iLocal_64 == 0x00000002) || iLocal_64 == 0x00000004)
			{
				func_111();
			}
			iLocal_64 = 0x00000008;
		}
		if (func_28("SHR_SNACKS"))
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_185(&(Local_66.f_1D5));
		}
		if (func_28("SHR_MENU"))
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_185(&(Local_66.f_1D5));
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0x00000001) && iLocal_101 < 0x00000002)
		{
			unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
		}
		if (func_1(Local_66.f_1D6, 0x00000004))
		{
			func_68();
		}
	}
}

void func_68()
{
	if (func_1(Local_66.f_1D6, 0x00000800))
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			func_301(&(Local_66.f_1D6), 0x00000800);
		}
	}
	Local_66.f_66.f_25 = 0x00000000;
	unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
	if (unk_0x9F4FE516EAACCFC5(iLocal_118))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_118, 0x00000000);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (func_104(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_104(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_70(func_104(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_102(0x00000063, 0x00000001);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_81(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_101(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_102(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_102(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_102(0x00000060, iParam3);
					break;
			}
			func_102(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_72(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_71(0x00000000);
	}
	return 0x00000001;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_73(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_79(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_79(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_79(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_79(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_76(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_76(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_76(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_76(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_76(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_76(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_75() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_75() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_74(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_78();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

int func_78()
{
	return Global_1407E9;
}

int func_79(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_78();
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

void func_80(int iParam0)
{
	func_102(0x0000005D, iParam0);
	func_102(0x0000001D, iParam0);
	func_102(0x0000001E, iParam0);
}

bool func_81(int iParam0)
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
	
	if (iParam0 == 0x00000008)
	{
		return func_83(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_83(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_83(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_83(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_82(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_82(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_82(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_82(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_82(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_82(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_75() /*10930*/].f_181E.f_A, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_77(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_78();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_78();
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

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_100(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_87(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)
{
	if (func_317(0x0000000E) && !func_99(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_98(&Global_4127F1))
	{
		if (func_96(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_89(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_317(0x0000000E) && !func_99(iParam1))
	{
		return 0x00000000;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0x00000000);
	}
	func_92(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_317(0x0000000E) && !func_99(iParam1))
	{
		return 0x00000000;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_91(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_4127F0 - 0.5f));
}

void func_93(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_94(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_95(var uParam0)
{
	return uParam0->f_50;
}

bool func_96(var uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_98(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_103()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_104(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_105()
{
	func_106();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_106()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_109(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_108(unk_0x16F2683693E537C9());
			if (func_107(iVar0) && (!func_317(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_107(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_107(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_109(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_109(int iParam0)
{
	if (func_107(iParam0))
	{
		return func_110(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_110(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_111()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	}
	func_301(&(Local_66.f_1D6), 0x00000800);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	func_181(0x00000017, 0x00000000);
	Local_66.f_66.f_25 = 0x00000000;
	unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
	if (unk_0x9F4FE516EAACCFC5(iLocal_118))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_118, 0x00000000);
	}
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
}

void func_112()
{
	char* sVar0;
	
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C1);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BD);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BE);
	if (func_115())
	{
		Local_66.f_66.f_25 = 0x00000000;
		func_40(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17 = (Local_66.f_66.f_17 - 0x00000001);
		if (Local_66.f_66.f_17 < 0x00000000)
		{
			Local_66.f_66.f_17 = (Local_66.f_66.f_18 - 0x00000001);
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
		func_163(Local_66.f_66.f_17, 0x00000001, 0x00000001);
		sVar0 = func_155(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0x00000000;
		Local_66.f_66.f_2A = 0x00000000;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_162(sVar0, 0x00000000, 0x00000000);
		}
	}
	if (func_114())
	{
		Local_66.f_66.f_25 = 0x00000000;
		func_40(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17++;
		if (Local_66.f_66.f_17 > (Local_66.f_66.f_18 - 0x00000001))
		{
			Local_66.f_66.f_17 = 0x00000000;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
		func_163(Local_66.f_66.f_17, 0x00000001, 0x00000001);
		sVar0 = func_155(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0x00000000;
		Local_66.f_66.f_2A = 0x00000000;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_162(sVar0, 0x00000000, 0x00000000);
		}
	}
	if (!Local_66.f_66.f_29)
	{
		Local_66.f_66.f_28 = func_113(func_108(unk_0x16F2683693E537C9())) >= func_168(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0x00000001;
	}
	if (!Local_66.f_66.f_2A)
	{
		Local_66.f_66.f_2B = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) < unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
		Local_66.f_66.f_2A = 0x00000001;
	}
	if (Local_66.f_66.f_25)
	{
		if (func_41(&(Local_66.f_66.f_35)) < 3f)
		{
			if (Local_66.f_66.f_2C)
			{
				func_162("SNK_BOUGHT", 0x00000000, 0x00000000);
			}
			else if (!Local_66.f_66.f_28)
			{
				func_162("SNK_AFFORD", 0x00000000, 0x00000000);
			}
			else if (!Local_66.f_66.f_2B)
			{
				func_162("SNK_NEEDED", 0x00000000, 0x00000000);
			}
		}
		else
		{
			Local_66.f_66.f_25 = 0x00000000;
			Local_66.f_66.f_2C = 0x00000000;
			func_40(&(Local_66.f_66.f_35));
			sVar0 = func_155(Local_66.f_66.f_17);
			if (unk_0xEF07223F00EBE9C9(sVar0))
			{
				func_162(sVar0, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_113(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000001:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000002:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		default:
	}
	return 0x00000000;
}

int func_114()
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(0x00000002, 0x000000DB);
	if ((fVar0 > 0.8f || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
	{
		if (!func_15(&iLocal_115))
		{
			func_12(&iLocal_115);
			return 0x00000001;
		}
		else if (func_9(&iLocal_115) > 0.25f)
		{
			func_13(&iLocal_115);
			return 0x00000001;
		}
	}
	else if (func_15(&iLocal_115))
	{
		func_40(&iLocal_115);
	}
	return 0x00000000;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(0x00000002, 0x000000DB);
	if ((fVar0 < -0.8f || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
	{
		if (!func_15(&iLocal_112))
		{
			func_12(&iLocal_112);
			return 0x00000001;
		}
		else if (func_9(&iLocal_112) > 0.25f)
		{
			func_13(&iLocal_112);
			return 0x00000001;
		}
	}
	else if (func_15(&iLocal_112))
	{
		func_40(&iLocal_112);
	}
	return 0x00000000;
}

void func_116(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	vector3 vVar38;
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
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
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
	
	if (!func_59(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_152(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_150(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_149())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_149())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_169(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_148(0x0000001D), 64);
					StringCopy(&cVar64, func_145(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_144(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_144(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_143();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_143();
					func_141((((Global_574B + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_143();
						func_141((((Global_574B + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_144(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_150(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_140(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_150(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_139(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_148(Global_574E.f_12A0), func_145(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_150(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_140(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_150(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_139(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_148(Global_412185.f_43), func_145(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_132(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001A), func_145(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_150(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001B), func_145(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_150(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_139(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar28)]), func_145(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar28)]), func_145(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_128() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_130(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_139(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001A), func_145(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_150(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001B), func_145(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_127((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001A), func_145(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_150(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_148(0x0000001B), func_145(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_126((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_150(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_150(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_150(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_139(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_148(0x0000001A), func_145(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_150(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_150(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_139(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_148(0x0000001B), func_145(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_150(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_139(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[iVar22]), func_145(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_125(Global_574E.f_1151[iVar22])), (fVar37 * func_125(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_150(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_118(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_117(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_117(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_118(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_123(0x00000000))
		{
			func_119(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_119(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_122())
		{
			func_121(0x00000001, 0x00000001);
		}
		else
		{
			func_121(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_120())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_120()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_121(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_123(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_122()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_123(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_124()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_126(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_127(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_128()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_131(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_152(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_135(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_134(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_134(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_133(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_134(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_133(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

void func_133(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_134(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_135(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_136(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_78();
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

int func_137()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_138())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_138()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_140(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_141(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_142(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_143();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_144(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

var func_145(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_147(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_146(&uVar1);
			}
		}
		else
		{
			return func_146(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 0x00000003:
			sVar0[0x00000000] = "MP_hostCrown";
			sVar0[0x00000001] = "MP_hostCrown";
			break;
		
		case 0x00000015:
			sVar0[0x00000000] = "MP_SpecItem_Coke";
			sVar0[0x00000001] = "MP_SpecItem_Coke";
			break;
		
		case 0x00000016:
			sVar0[0x00000000] = "MP_SpecItem_Heroin";
			sVar0[0x00000001] = "MP_SpecItem_Heroin";
			break;
		
		case 0x00000017:
			sVar0[0x00000000] = "MP_SpecItem_Weed";
			sVar0[0x00000001] = "MP_SpecItem_Weed";
			break;
		
		case 0x00000018:
			sVar0[0x00000000] = "MP_SpecItem_Meth";
			sVar0[0x00000001] = "MP_SpecItem_Meth";
			break;
		
		case 0x00000019:
			sVar0[0x00000000] = "MP_SpecItem_Cash";
			sVar0[0x00000001] = "MP_SpecItem_Cash";
			break;
		
		case 0x00000001:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000002:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000004:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000006:
			sVar0[0x00000000] = "Shop_Box_CrossB";
			sVar0[0x00000001] = "Shop_Box_Cross";
			break;
		
		case 0x00000007:
			sVar0[0x00000000] = "Shop_Box_BlankB";
			sVar0[0x00000001] = "Shop_Box_Blank";
			break;
		
		case 0x00000005:
			sVar0[0x00000000] = "Shop_Box_TickB";
			sVar0[0x00000001] = "Shop_Box_Tick";
			break;
		
		case 0x00000008:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000009:
			sVar0[0x00000000] = "Shop_Clothing_Icon_B";
			sVar0[0x00000001] = "Shop_Clothing_Icon_A";
			break;
		
		case 0x0000000A:
			sVar0[0x00000000] = "Shop_GunClub_Icon_B";
			sVar0[0x00000001] = "Shop_GunClub_Icon_A";
			break;
		
		case 0x00000011:
			sVar0[0x00000000] = "Shop_Ammo_Icon_B";
			sVar0[0x00000001] = "Shop_Ammo_Icon_A";
			break;
		
		case 0x00000012:
			sVar0[0x00000000] = "Shop_Armour_Icon_B";
			sVar0[0x00000001] = "Shop_Armour_Icon_A";
			break;
		
		case 0x00000013:
			sVar0[0x00000000] = "Shop_Health_Icon_B";
			sVar0[0x00000001] = "Shop_Health_Icon_A";
			break;
		
		case 0x00000014:
			sVar0[0x00000000] = "Shop_MakeUp_Icon_B";
			sVar0[0x00000001] = "Shop_MakeUp_Icon_A";
			break;
		
		case 0x0000000B:
			sVar0[0x00000000] = "Shop_Tattoos_Icon_B";
			sVar0[0x00000001] = "Shop_Tattoos_Icon_A";
			break;
		
		case 0x0000000C:
			sVar0[0x00000000] = "Shop_Garage_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Icon_A";
			break;
		
		case 0x0000000D:
			sVar0[0x00000000] = "Shop_Garage_Bike_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 0x0000000E:
			sVar0[0x00000000] = "Shop_Barber_Icon_B";
			sVar0[0x00000001] = "Shop_Barber_Icon_A";
			break;
		
		case 0x0000000F:
			sVar0[0x00000000] = "shop_Lock";
			sVar0[0x00000001] = "shop_Lock";
			break;
		
		case 0x00000010:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x0000001A:
			sVar0[0x00000000] = "arrowleft";
			sVar0[0x00000001] = "arrowleft";
			break;
		
		case 0x0000001B:
			sVar0[0x00000000] = "arrowright";
			sVar0[0x00000001] = "arrowright";
			break;
		
		case 0x0000001C:
			sVar0[0x00000000] = "MP_AlertTriangle";
			sVar0[0x00000001] = "MP_AlertTriangle";
			break;
		
		case 0x0000001D:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x0000001F:
			sVar0[0x00000000] = "Shop_Michael_Icon_B";
			sVar0[0x00000001] = "Shop_Michael_Icon_A";
			break;
		
		case 0x00000020:
			sVar0[0x00000000] = "Shop_Franklin_Icon_B";
			sVar0[0x00000001] = "Shop_Franklin_Icon_A";
			break;
		
		case 0x00000021:
			sVar0[0x00000000] = "Shop_Trevor_Icon_B";
			sVar0[0x00000001] = "Shop_Trevor_Icon_A";
			break;
		
		case 0x00000033:
			sVar0[0x00000000] = "SaleIcon";
			sVar0[0x00000001] = "SaleIcon";
			break;
		
		case 0x00000034:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000036:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000037:
			sVar0[0x00000000] = "Shop_Lock_Arena";
			sVar0[0x00000001] = "Shop_Lock_Arena";
			break;
		
		case 0x00000038:
			sVar0[0x00000000] = "Card_Suit_Clubs";
			sVar0[0x00000001] = "Card_Suit_Clubs";
			break;
		
		case 0x00000039:
			sVar0[0x00000000] = "Card_Suit_Hearts";
			sVar0[0x00000001] = "Card_Suit_Hearts";
			break;
		
		case 0x0000003A:
			sVar0[0x00000000] = "Card_Suit_Spades";
			sVar0[0x00000001] = "Card_Suit_Spades";
			break;
		
		case 0x0000003B:
			sVar0[0x00000000] = "Card_Suit_Diamonds";
			sVar0[0x00000001] = "Card_Suit_Diamonds";
			break;
		
		case 0x0000003C:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003E:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003D:
			sVar0[0x00000000] = "Shop_Chips_A";
			sVar0[0x00000001] = "Shop_Chips_B";
			break;
		
		case 0x00000000:
			sVar0[0x00000000] = "";
			sVar0[0x00000001] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0x00000000];
	}
	return sVar0[0x00000001];
}

var func_146(var uParam0)
{
	return uParam0;
}

struct<13> func_147(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_148(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_147(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_146(&uVar0);
		}
		else
		{
			return func_146(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_149()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_150(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_148(iParam0), 64);
	StringCopy(&cVar1, func_145(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_149())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_149())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_151(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_151(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 0x0000001E)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 0x0000001D && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 0x0000001E)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 0x0000001D)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

float func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000004:
		case 0x0000000B:
		case 0x0000001F:
		case 0x00000014:
		case 0x0000000F:
		case 0x0000000A:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000020:
		case 0x00000009:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000013:
		case 0x00000011:
		case 0x0000001C:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003E:
			return 0.5f;
			break;
		
		case 0x0000003D:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_152(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_154(0x00000008, 0xFFFFFFFF) && func_153() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_153()
{
	return Global_14082C;
}

bool func_154(int iParam0, int iParam1)
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

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "SNK_ITEM1_D";
		
		case 0x00000001:
			return "SNK_ITEM2_D";
		
		case 0x00000002:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_156()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 > 0xFFFFFFFF)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		unk_0xC74D8A1D346B9CCB(0x00000004);
		if (iParam0 && unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			return 0x00000001;
		}
		else
		{
			Global_4121D1 = 0xFFFFFFFF;
			return 0x00000000;
		}
	}
	if (((Global_4121D1 > 0xFFFFFFFF || Global_4121D1 == 0xFFFFFFFD) || Global_4121D1 == 0xFFFFFFFE) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(0x00000001);
		return 0x00000000;
	}
	if (Global_4121D1 == 0xFFFFFFFF && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			unk_0xC74D8A1D346B9CCB(0x00000004);
			Global_4121D1 = 0xFFFFFFFA;
			return 0x00000001;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(0x00000003);
			return 0x00000000;
		}
	}
	unk_0xC74D8A1D346B9CCB(0x00000001);
	return 0x00000000;
}

void func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 0xFFFFFFFF;
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		Global_4121D1 = 0xFFFFFFFF;
		return;
	}
	unk_0xFE29D579C98536B2(0x00000001);
	fVar0 = Global_574B;
	fVar2 = (fVar0 + Global_574D);
	fVar3 = Global_574E.f_1662;
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_574E.f_1664 < 0x00000001)
	{
		fVar1 = (Global_574E.f_1662 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_160();
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
	fVar7 = Global_4121CB;
	fVar8 = Global_4121CC;
	if (Global_574E.f_1665 > Global_574E.f_1664)
	{
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= fVar3) && Global_4121CC < (fVar3 + fVar6))
		{
			Global_4121D1 = 0xFFFFFFFE;
			if (bParam3)
			{
				func_159(0x00000000);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 0xFFFFFFFD;
			if (bParam3)
			{
				func_159(0x00000000);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_574E.f_1665 == 0xFFFFFFFF)
		{
			Global_4121D1 = 0x00000000;
			iVar13 = 0x00000000;
			return;
		}
		iVar11 = 0x00000094;
		iVar12 = (iVar11 / Global_574E.f_1664);
		iVar10 = (0x00000020 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0x00000000)
			{
				unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_144(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 0x000000FF, 0x000000FF, 0x000000FF, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4121D1 = Global_574E.f_1F66[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4121D1 = 0xFFFFFFFC;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4121D1 = 0xFFFFFFFB;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4121D1 = 0xFFFFFFFC;
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
}

void func_159(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 0x00000030;
	}
	else
	{
		iVar3 = 0x000000D2;
	}
	fVar0 = Global_574B;
	fVar1 = Global_574E.f_1662;
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4121D1 == 0xFFFFFFFE)
	{
		func_144(fVar0, fVar1, Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	else if (Global_4121D1 == 0xFFFFFFFD)
	{
		func_144(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_160()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000EF);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000F0);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_13BC), Global_574E.f_12A1);
	}
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

void func_162(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_163(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = uParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_164(int iParam0)
{
	Global_574E.f_166A = iParam0;
}

void func_165(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_574E.f_1466 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F >= 0x00000004)
	{
		return;
	}
	if (Global_574E.f_1670 != 0x00000001)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	Global_574E.f_F4E[Global_574E.f_1466] = uParam0;
	Global_574E.f_1466++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000002;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_167();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_150(0x0000001A, 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_166();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_166()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar0] == 0x00000004)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)] != 0x00000000)
		{
			if (func_150(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 0x00000001, 0x00000000, &uVar3, &fVar4, 0x00000000))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0x00000000))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_167()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			iVar3++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			iVar4++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000004)
		{
			iVar5++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_130(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iVar6 > 0x00000000, 0x00000000);
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[Global_574E.f_166E /*6*/]));
	}
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[((Global_574E.f_1466 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x21994591120B91F0(Global_574E.f_104F[((Global_574E.f_1467 - iVar4) + iVar10)], Global_574E.f_10D0[((Global_574E.f_1467 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	iVar7 = 0x00000000;
	while (iVar7 < iVar5)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)] != 0x00000000)
		{
			func_150(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
		
		case 0x00000001:
			return 0x00000002;
		
		case 0x00000002:
			return 0x00000004;
		
		default:
	}
	return 0x00000000;
}

void func_169(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_172(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_172(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_171(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_150(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_170(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_170(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_171(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_173()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

void func_174(int iParam0, char* sParam1, char* sParam2)
{
	Global_574E = iParam0;
	func_175(0x0000001D, sParam1, sParam2);
}

void func_175(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_574E.f_1784[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_574E.f_1B75[iParam0 /*16*/]), sParam2, 64);
}

void func_176(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_179(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

int func_180(int iParam0, vector3 vParam1, float fParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case 0xFFFFFFFE:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 0x00000001;
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

int func_182(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_123(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

int func_183(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_184(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_183(iParam0);
	if (iParam1 == 0x00000000)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_A4A7[iVar0 /*32*/].f_6)
	{
		return 0x00000000;
	}
	bVar1 = 0x00000000;
	if (!Global_A4A7[iVar0 /*32*/].f_C)
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		if (Global_A4A7[iVar0 /*32*/].f_1E)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	return bVar1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_183(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

void func_186(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_185(uParam0);
		}
		return;
	}
	if (!*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_187(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_188()
{
	if (Global_1B416.f_4FB5.f_91 > 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_189(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0xFFFFFFFE:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 0x00000001;
}

int func_190(float fParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x7D563EECE9515353(unk_0x16F2683693E537C9()) > 0x00000000;
		}
		else
		{
			return unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), fParam0) > 0x00000000;
		}
	}
	return 0x00000000;
}

void func_191()
{
	if (iLocal_108)
	{
		if (iLocal_107 == 0x00000003)
		{
			iLocal_107 = 0x00000000;
		}
		iLocal_108 = 0x00000000;
	}
	switch (iLocal_107)
	{
		case 0x00000000:
			unk_0x4A4806F9D471E491(iLocal_98[iLocal_111], 0x00000001, 0x00000000);
			iLocal_109 = unk_0xE9744DB7B8CA6965(unk_0x8A5E176FF719A014(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_1E6.f_9, 0x00000002);
			if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
			{
				unk_0x915804B434753CBD(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
				unk_0xE14EC663EED44AD5(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 0x00000001, 0x447A0000);
				iLocal_107 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0x69DF961355195C3C(iLocal_109))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_109) == 1f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
					{
						unk_0xA3BF0AA5A2608191(Local_66.f_2);
					}
					if (unk_0xC844350D5D58C99A(iLocal_98[iLocal_111]))
					{
						unk_0xEF190091B5B9F5EB(iLocal_98[iLocal_111], 0x00000001);
					}
					iLocal_110 = unk_0x1C0640BA9A7327B3();
					iLocal_107 = 0x00000002;
				}
			}
			else
			{
				iLocal_110 = unk_0x1C0640BA9A7327B3();
				iLocal_107 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_110) > 0x000003E8)
			{
				if (unk_0xC844350D5D58C99A(iLocal_98[iLocal_111]))
				{
					unk_0x4A4806F9D471E491(iLocal_98[iLocal_111], 0x00000000, 0x00000000);
					unk_0xA47B46945FF6DE74(iLocal_98[iLocal_111], func_60(iLocal_111), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xEF190091B5B9F5EB(iLocal_98[iLocal_111], 0x00000000);
				}
				iLocal_107 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			break;
	}
}

void func_192()
{
	if (iLocal_52 != 0x00000006)
	{
		switch (iLocal_52)
		{
			case 0x00000001:
				if (func_197())
				{
					iLocal_52 = 0x00000002;
				}
				else
				{
					iLocal_52 = 0x00000006;
				}
				break;
			
			case 0x00000002:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0x00000000))
				{
					func_196();
					func_12(&(Local_66.f_56.f_7));
					iLocal_52 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0x00000000))
				{
					if ((func_195(&(Local_66.f_56.f_7), 5f) || func_193(Local_66.f_2, &(Local_66.f_1C3))) || unk_0x869EFD0BC0868856(Local_66.f_56))
					{
						iLocal_52 = 0x00000004;
					}
				}
				break;
			
			case 0x00000004:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0x00000000))
				{
					iLocal_51 = 0x0000001F;
					unk_0xF3268524E9BE6D6E(Local_66.f_56, Local_66, 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					iLocal_52 = 0x00000005;
				}
				func_40(&(Local_66.f_56.f_7));
				break;
			}
	}
}

int func_193(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_194(iParam0, 0x00000001) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0x00000000)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

float func_194(int iParam0, bool bParam1)
{
	return func_23(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

int func_195(var uParam0, float fParam1)
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_196()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_56, 0x00000000))
	{
		unk_0xDD353D0E9C789D0E(&(Local_66.f_56.f_6));
		unk_0xF96A174EE26D7588(0x00000000, Local_66, 0x00000000);
		unk_0x0C8C0C840C2D1AD2(0x00000000, Local_66, 0x000009C4, 0x00000000, 0x00000002);
		unk_0xF9B5DB58254657F1(0x00000000, 0x000009C4, 0x00000000, 0xFFFFFFFF, 0x00000000);
		unk_0x75ABDC5F81978924(Local_66.f_56.f_6);
		unk_0x78ADC381772E3D54(Local_66.f_56, Local_66.f_56.f_6);
	}
}

int func_197()
{
	unk_0xE51E576EA6B739AC(Local_66.f_56.f_2, Local_66.f_56.f_5, 0x00000001, 0x00000000, &(Local_66.f_56), 0x00000000, 0x00000001, 0xFFFFFFFF);
	if (!unk_0x437347B10A200C4B(Local_66.f_56, 0x00000000))
	{
		if (unk_0x134B62B726CEC8E6(Local_66.f_56) == Local_66.f_56.f_1)
		{
			unk_0x73270B3C9CC833FD(Local_66.f_56, 0x00000001, 0x00000000);
			unk_0x11AD11297DC58CC7(Local_66.f_56, 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_198()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_101 > 0x00000001 && iLocal_101 < 0x00000005)
	{
		if (func_219())
		{
			unk_0x53491B90E4FD0E56(0x000001F4);
			iLocal_101 = 0x00000006;
		}
	}
	switch (iLocal_101)
	{
		case 0x00000000:
			if ((((unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000) || !func_218()) || func_1(Local_66.f_1D6, 0x00000080)) && iLocal_55 < 0x00000003) && unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 1.5f) == 0x00000000)
			{
				if ((func_45() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !func_217(0x00000000))
				{
					func_216("SHR_ROBTILL", 0xFFFFFFFF);
					Local_66.f_1D5 = 0xFFFFFFFF;
					func_186(&(Local_66.f_1D5), 0x00000004, "SHR_ROBTILL", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
					unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000000);
					iLocal_101 = 0x00000001;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 0x00000007)
			{
			}
			else if (unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 1.5f) > 0x00000000)
			{
			}
			break;
		
		case 0x00000001:
			if (func_45())
			{
				if (func_182(Local_66.f_1D5, 0x00000001))
				{
					if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
						{
							iVar3 = unk_0x728870EB733D12A1();
							if (unk_0x3D1053F9EB43B7AD(iVar3, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xA47B46945FF6DE74(iVar3, unk_0x8A5E176FF719A014(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							}
						}
					}
					unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 0x00000001);
					if (func_28("SHR_ROBTILL"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					func_185(&(Local_66.f_1D5));
					bVar2 = unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_105, 0x00000001);
					if (bVar2)
					{
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
					unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
					unk_0x2D23BE319D971F4C(0x00000000);
					func_119(0x00000000);
					func_210(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0xBFE31971E49FA500(0x00000000);
					func_181(0x00000017, 0x00000001);
					unk_0x679C321F8CAA2CFA(Local_66.f_2.f_1, 3f, 0x00000000);
					iLocal_101 = 0x00000002;
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
					if (Local_66.f_1D5 <= 0x00000000)
					{
						Local_66.f_1D5 = 0xFFFFFFFF;
						func_186(&(Local_66.f_1D5), 0x00000004, "SHR_ROBTILL", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_185(&(Local_66.f_1D5));
				iLocal_101 = 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				unk_0x20641932E5104B25(Local_66.f_2, 0x00000000, 0x00000000);
				unk_0x1E9649458B15960F(Local_66.f_2, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x8A5E176FF719A014(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_66.f_2.f_4);
				unk_0xF82EA857DA10E0CD(&iLocal_78);
				unk_0xDD353D0E9C789D0E(&iLocal_78);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 0x00000FA0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_78);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iLocal_78);
				if (!unk_0x9F4FE516EAACCFC5(iLocal_102))
				{
					iLocal_102 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
				}
				unk_0xC5940439E4EB9A33(iLocal_102, unk_0x16F2683693E537C9(), -0.1878f, 3.0635f, 0.68f, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_102, unk_0x16F2683693E537C9(), -0.0129f, 0.0927f, 0.3008f, 0x00000001);
				unk_0x5818C8D5303DCCF8(iLocal_102, 35f);
				unk_0x91F5B0244AAE6222(iLocal_102, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_102, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			}
			iLocal_101 = 0x00000003;
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x9F4FE516EAACCFC5(iLocal_103))
				{
					iLocal_103 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
				}
				unk_0xC5940439E4EB9A33(iLocal_103, unk_0x16F2683693E537C9(), -1.0346f, 2.9183f, 0.68f, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_103, unk_0x16F2683693E537C9(), -0.0574f, 0.1074f, 0.3008f, 0x00000001);
				unk_0x5818C8D5303DCCF8(iLocal_103, 35f);
				unk_0x91F5B0244AAE6222(iLocal_103, "HAND_SHAKE", 0.3f);
				unk_0xF1E4C781086FABC1(iLocal_103, iLocal_102, 0x00001F40, 0x00000001, 0x00000001);
			}
			iLocal_106 = unk_0x1C0640BA9A7327B3();
			iLocal_101 = 0x00000004;
			break;
		
		case 0x00000004:
			if (((unk_0x1C0640BA9A7327B3() - iLocal_106) > 0x000012C0 || (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))) || unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 3f) > 0x00000000)
			{
				iLocal_101 = 0x00000005;
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_106) > 0x00001194)
			{
				if (func_209())
				{
					if (!iLocal_95)
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
						iLocal_95 = 0x00000001;
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop", 0x00000003))
			{
				fVar0 = unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = unk_0x09AC81E49EA267F7(0x0000000A, 0x00000033);
						func_208(func_105(), 0x00000001, iVar1, 0x00000000, 0x00000000);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_1C.f_6 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 0x00000001);
						iLocal_104 = 0x00000001;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0x00000000;
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
			{
				unk_0x20641932E5104B25(Local_66.f_2, 0x00000001, 0x00000000);
				unk_0x1E9649458B15960F(Local_66.f_2, 0x00000000);
			}
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			if (unk_0x9F4FE516EAACCFC5(iLocal_102))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_102, 0x00000000);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_103))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_103, 0x00000000);
			}
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				iVar3 = unk_0x728870EB733D12A1();
				vVar4 = { unk_0x68F4C0EC296D3901(iVar3, 0x00000001) };
			}
			if (iLocal_105 != joaat("weapon_unarmed") && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_105, 0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0x00000001))
			{
				unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0x00000001);
			}
			func_207(0x00000001, 0x00000001, 0x00000001);
			func_16(0x00000001, 0x00000000);
			iLocal_60 = 0x0000000C;
			func_204();
			func_199(0x00000129, 0x00000000, 0x00000000);
			Local_66.f_1D4 = 0x00000001;
			iLocal_101 = 0x00000007;
			break;
		
		case 0x00000006:
			if (unk_0x757EF87A33649210())
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_103, 0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
				}
				if (iLocal_81 < 0x0000000F)
				{
					iVar1 = unk_0x09AC81E49EA267F7(0x00000019, 0x00000041);
					func_208(func_105(), 0x00000001, iVar1, 0x00000000, 0x00000000);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				unk_0x82E51BCA72537B6C(0x000001F4);
				iLocal_101 = 0x00000005;
			}
			break;
	}
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_79((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_200();
	}
}

void func_200()
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
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_100(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_203() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_201();
				}
			}
		}
	}
}

int func_201()
{
	if (func_202(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_203()
{
	return Global_7830;
}

void func_204()
{
	if (!iLocal_87)
	{
		Global_1B416.f_4E3E[iLocal_80]++;
		Global_1B416.f_4E3E.f_3E[iLocal_80] = Local_66.f_1;
		if (func_105() == 0x00000000)
		{
			func_205(0x00000005);
		}
		iLocal_87 = 0x00000001;
	}
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_206(&Global_173EC, 0x00000001);
			break;
		
		case 0x00000001:
			func_206(&Global_173EE, 0x00000003);
			break;
		
		case 0x00000002:
			func_206(&Global_173F2, 0x00000001);
			break;
		
		case 0x00000003:
			func_206(&Global_173F4, 0x00000001);
			break;
		
		case 0x00000004:
			func_206(&Global_173F6, 0x00000001);
			break;
		
		case 0x00000005:
			func_206(&Global_173F8, 0x00000001);
			break;
		
		case 0x00000006:
			func_206(&Global_173FA, 0x00000001);
			break;
		
		case 0x00000007:
			func_206(&Global_173FC, 0x00000002);
			break;
		
		case 0x00000008:
			func_206(&Global_173FF, 0x00000001);
			break;
		
		case 0x00000009:
			func_206(&Global_17401, 0x00000001);
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 0x00000001))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_207(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_210(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_181(0x00000017, 0x00000000);
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_104(iParam0) == 0x00000004)
	{
		return;
	}
	func_70(func_104(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
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
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_209()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_210(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_215(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_120())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_214(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_215(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_214(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_212(unk_0xD803B885F5E47A62())) && !func_135(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_211()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_212(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_211()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_212(int iParam0)
{
	if (func_135(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_213())
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

bool func_213()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_214(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_215(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

void func_216(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_217(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				if (Global_4C1D == 0x00000001)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		if (Global_4C1D == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		if (Global_4C1D == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_218()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		if (unk_0x4D570FEF9D230CE7(Local_66.f_2) == Local_66.f_B9)
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_219()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_220()
{
	int iVar0;
	
	func_237();
	func_234();
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 0x00000001);
		if ((iLocal_58 == 0x00000001 && iLocal_99 == 0x00000002) && ((unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()) || func_233()) || func_232()))
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			func_16(0x00000001, 0x00000000);
			iLocal_58 = 0x00000009;
		}
	}
	else
	{
		return;
	}
	func_229();
	if (!bLocal_86)
	{
		func_228();
	}
	switch (iLocal_58)
	{
		case 0x00000001:
			if (func_303())
			{
				if ((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001) || (func_193(Local_66.f_2, &(Local_66.f_1C3)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_227();
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
					iLocal_51 = 0x0000000C;
					iLocal_50 = 0x00000003;
					iLocal_58 = 0x00000005;
					unk_0x5D96D8530B3D0904(&Global_17183, 0x00000003);
					func_226();
				}
				if (func_1(Local_66.f_1D6, 0x00000008))
				{
					if (!func_1(Local_66.f_1D6, 0x00000020))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 0x00000004))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_51 = 0x00000024;
						func_16(0x00000001, 0x00000000);
						func_225();
						func_294(&(Local_66.f_1D6), 0x00000020);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (func_303())
			{
				if (func_193(Local_66.f_2, &(Local_66.f_1C3)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
					Local_66.f_2.f_B = 0x00000001;
					func_204();
					iLocal_51 = 0x0000000C;
					iLocal_50 = 0x00000003;
					iLocal_60 = 0x0000000B;
					iLocal_58 = 0x00000003;
					unk_0x5D96D8530B3D0904(&Global_17183, 0x00000003);
					func_226();
				}
				else if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001))
				{
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
					func_225();
					func_227();
					iLocal_51 = 0x0000000C;
					iLocal_58 = 0x00000005;
					func_226();
				}
				else if (func_1(Local_66.f_1D6, 0x00000008))
				{
					if (!func_1(Local_66.f_1D6, 0x00000020))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 0x00000004))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_51 = 0x00000024;
						func_16(0x00000001, 0x00000000);
						func_225();
						func_294(&(Local_66.f_1D6), 0x00000020);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_51 >= 0x0000000D)
			{
				if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()) && !unk_0x65636D4556D82155(Local_66.f_2))
				{
					iLocal_51 = 0x0000000F;
					iLocal_56 = 0x00000005;
					iLocal_60 = 0x0000000C;
					iLocal_58 = 0x00000004;
				}
			}
			break;
		
		case 0x00000004:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001) && func_303())
			{
				func_227();
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 0x00000016;
				}
				else
				{
					iLocal_51 = 0x00000010;
				}
				iLocal_58 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if (Local_66.f_1E6 >= 0x00000000)
			{
				if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001) && func_303())
				{
					if (unk_0x69DF961355195C3C(Local_66.f_1E6) && !Local_66.f_1D3)
					{
						iLocal_51 = 0x00000021;
						Local_66.f_1D3 = 0x00000001;
					}
				}
			}
			if (iLocal_53 >= 0x00000001 && iLocal_53 < 0x00000007)
			{
				unk_0xB2AF08FECE4571EC(unk_0xA30EC016B12C03E4());
				if (func_223(Local_66.f_2, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || !unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					iLocal_58 = 0x00000006;
				}
			}
			break;
		
		case 0x00000006:
			if (iLocal_54 != 0x00000003 && iLocal_54 != 0x00000004)
			{
				iLocal_54 = 0x00000004;
			}
			unk_0x0674E58A79778E99(&Global_17183, 0x00000003);
			if (!unk_0x869EFD0BC0868856(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!unk_0x869EFD0BC0868856(Local_66.f_2))
			{
				func_222();
				iLocal_51 = 0x00000024;
				func_16(0x00000001, 0x00000000);
				func_294(&(Local_66.f_1D6), 0x00000020);
				iLocal_56 = 0x00000007;
				iLocal_58 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001) || func_193(Local_66.f_2, &(Local_66.f_1C3))) && func_303()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 0x0000000A;
					iLocal_58 = 0x00000009;
				}
				else
				{
					func_19();
					iLocal_51 = 0x0000000B;
					iLocal_58 = 0x00000000;
				}
				Local_66.f_2.f_D = 0x00000000;
			}
			break;
		
		case 0x00000009:
			func_7();
			iLocal_58 = 0x0000000C;
			break;
		
		case 0x0000000A:
			if ((((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001) || func_193(Local_66.f_2, &(Local_66.f_1C3))) && func_303()) && iVar0 != joaat("weapon_unarmed")) && !func_15(&(Local_66.f_1E0)))
			{
				func_12(&(Local_66.f_1E0));
				if (unk_0x869EFD0BC0868856(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 0x00000017;
			}
			else if (func_41(&(Local_66.f_1E0)) > 10f)
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
				{
					unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				iLocal_58 = 0x0000000C;
			}
			break;
		
		case 0x0000000B:
			func_221();
			iLocal_58 = 0x0000000C;
			break;
	}
}

void func_221()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(Local_66.f_2, 0x00000000);
	}
}

void func_222()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0x0C8C0C840C2D1AD2(Local_66.f_2, Local_66, 0xFFFFFFFF, 0x00000000, 0x00000002);
	}
}

int func_223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_45 = 0x00000001;
		}
		iLocal_47 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (func_224(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_194(iParam0, 0x00000001) < 1.5f)
		{
			return 0x00000001;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0x00000000)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_225()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && func_303())
	{
		iVar1 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
		iVar2 = 0x00000000;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != unk_0x16F2683693E537C9() && uVar0[iVar2] != Local_66.f_2) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar2])) && !unk_0xAF6690C489CC6203(uVar0[iVar2])) && !unk_0x4734A6196B611C3B(uVar0[iVar2], 0x00000000))
			{
				unk_0x73270B3C9CC833FD(uVar0[iVar2], 0x00000001, 0x00000001);
				unk_0xF3268524E9BE6D6E(uVar0[iVar2], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			iVar2++;
		}
	}
}

void func_226()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && func_303())
	{
		iVar1 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
		iVar2 = 0x00000000;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != unk_0x16F2683693E537C9() && uVar0[iVar2] != Local_66.f_2) && !unk_0xAF6690C489CC6203(uVar0[iVar2]))
			{
				unk_0x73270B3C9CC833FD(uVar0[iVar2], 0x00000001, 0x00000001);
				unk_0xF82EA857DA10E0CD(&iLocal_78);
				unk_0xDD353D0E9C789D0E(&iLocal_78);
				unk_0x8BE3D040D15AEA1D(0x00000000, 0x00001388);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_78);
				unk_0x78ADC381772E3D54(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_227()
{
	if (func_25(Local_66) == joaat("weapon_rpg"))
	{
		Local_66.f_1CA = 0x00000001;
	}
	else if (func_25(Local_66) == joaat("weapon_knife"))
	{
		Local_66.f_1CB = 0x00000001;
	}
	else if (((func_25(Local_66) == joaat("weapon_hammer") || func_25(Local_66) == joaat("weapon_crowbar")) || func_25(Local_66) == joaat("weapon_bat")) || func_25(Local_66) == joaat("weapon_bottle"))
	{
		Local_66.f_1CC = 0x00000001;
	}
	else if ((func_25(Local_66) == joaat("weapon_grenade") || func_25(Local_66) == joaat("weapon_smokegrenade")) || func_25(Local_66) == joaat("weapon_molotov"))
	{
		Local_66.f_1CD = 0x00000001;
	}
	else if (func_25(Local_66) == joaat("weapon_stickybomb"))
	{
		Local_66.f_1CE = 0x00000001;
	}
	iLocal_60 = 0x0000000C;
	func_204();
	iLocal_59 = 0x00000002;
	iLocal_63 = 0x00000001;
	iLocal_62 = 0x00000006;
	Local_66.f_2.f_D = 0x00000000;
}

void func_228()
{
	if (iLocal_53 == 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
		{
			switch (iLocal_56)
			{
				case 0x00000001:
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000002:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_11, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000003:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_12, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000004:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_13, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000005:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_14, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000006:
					iLocal_56 = 0x00000000;
					break;
				
				case 0x00000007:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_15, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_56 = 0x00000000;
					break;
				}
			}
	}
}

void func_229()
{
	switch (iLocal_57)
	{
		case 0x00000001:
			func_222();
			iLocal_57 = 0x00000002;
			break;
		
		case 0x00000002:
			if (iLocal_53 == 0x00000002)
			{
				func_231();
				Local_66.f_2.f_D = 0x00000000;
				iLocal_57 = 0x00000003;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_D)
			{
				Local_66.f_2.f_D = 0x00000001;
			}
			if (!Local_66.f_2.f_E)
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && unk_0xE9FDA1035CFEA94F(Local_66.f_2))
				{
					Local_66.f_2.f_E = 0x00000001;
				}
			}
			if ((Local_66.f_2.f_D && !unk_0xEB6A8945D1AC98A1(Local_66.f_2)) && !iLocal_58 == 0x0000000C)
			{
				func_230();
			}
			break;
		
		case 0x00000003:
			if (iLocal_53 >= 0x00000007)
			{
				func_222();
				iLocal_57 = 0x00000004;
			}
			break;
	}
}

void func_230()
{
	if ((unk_0x1C0640BA9A7327B3() - Local_66.f_2.f_A) > 0x00001388)
	{
		unk_0xF82EA857DA10E0CD(&(Local_66.f_2.f_18));
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2.f_18));
		unk_0xF96A174EE26D7588(0x00000000, Local_66, 0x00000000);
		unk_0x0C8C0C840C2D1AD2(0x00000000, Local_66, 0xFFFFFFFF, 0x00000000, 0x00000002);
		unk_0x75ABDC5F81978924(Local_66.f_2.f_18);
		unk_0x78ADC381772E3D54(Local_66.f_2, Local_66.f_2.f_18);
		Local_66.f_2.f_A = unk_0x1C0640BA9A7327B3();
	}
}

void func_231()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0xBC43ED9FE28DB191(Local_66.f_2);
	}
}

int func_232()
{
	if (unk_0x53129655DBEDC6EA(Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_233()
{
	if (unk_0x6AD0ABEEDDABA1F8(0xFFFFFFFF, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_234()
{
	if (!Local_66.f_1D1)
	{
		if (func_235())
		{
			if (!func_15(&(Local_66.f_1DA)))
			{
				func_12(&(Local_66.f_1DA));
			}
			else if (func_195(&(Local_66.f_1DA), 1f))
			{
				Local_66.f_1D1 = 0x00000001;
				iLocal_51 = 0x0000001A;
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
				{
					unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_16(0x00000001, 0x00000000);
				}
			}
		}
		else if (func_15(&(Local_66.f_1DA)))
		{
			func_40(&(Local_66.f_1DA));
		}
	}
}

int func_235()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (func_236())
		{
			unk_0xCAE036C45E7FC720(Local_66, &iVar0, 0x00000001);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x168558745A6AC21E(Local_66))
				{
					if (unk_0x7069CC4DE1EA3FAA(Local_66.f_2, Local_66, 180f))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_236()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_237()
{
	if (iLocal_58 != 0x0000000C)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
		{
			if (unk_0xE9FDA1035CFEA94F(Local_66.f_2))
			{
				unk_0xF3268524E9BE6D6E(Local_66.f_2, Local_66, 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				iLocal_58 = 0x0000000C;
				iLocal_57 = 0x00000004;
				iLocal_56 = 0x00000008;
				iLocal_60 = 0x0000000F;
				if (iLocal_63 == 0x00000001)
				{
					iLocal_63 = 0x00000002;
				}
				else
				{
					iLocal_63 = 0x00000003;
				}
				iLocal_62 = 0x0000000D;
				iLocal_51 = 0x0000001B;
				if (!Local_66.f_2.f_E)
				{
					Local_66.f_2.f_E = 0x00000001;
				}
			}
		}
	}
}

void func_238()
{
	switch (iLocal_55)
	{
		case 0x00000001:
			if (Local_66.f_1E6 >= 0x00000000)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.876f)
					{
						iLocal_55 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Local_66.f_1E6 >= 0x00000000)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.894f || (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.871f && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_66.f_1C, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 1f))
					{
						iLocal_55 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000003:
			func_16(0x00000001, 0x00000000);
			func_239(0x00000000);
			unk_0x3192B0FF798E63C8(Local_66.f_1C, 0x00000000, 0x00000000);
			iLocal_55 = 0x00000005;
			break;
		
		case 0x00000004:
			func_16(0x00000001, 0x00000000);
			func_239(0x00000001);
			unk_0x4A4806F9D471E491(Local_66.f_1C, 0x00000000, 0x00000000);
			iLocal_55 = 0x00000005;
			break;
		
		case 0x00000005:
			if (unk_0x50B5F6F3C29E9380(Local_66.f_1C, unk_0x16F2683693E537C9()))
			{
				func_208(func_105(), 0x00000001, iLocal_81, 0x00000000, 0x00000000);
				unk_0x4A4806F9D471E491(Local_66.f_1C, 0x00000000, 0x00000000);
				if (unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
				{
					unk_0x142CC44DB769B57E(&(Local_66.f_1C.f_2));
				}
				if (iLocal_60 != 0x0000000C)
				{
					iLocal_60 = 0x0000000C;
				}
				func_199(0x00000129, 0x00000000, 0x00000000);
				Local_66.f_1D4 = 0x00000001;
				Local_66.f_1C.f_6 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 0x00000001);
				func_13(&(Local_66.f_1C.f_F));
				iLocal_55 = 0x00000006;
			}
			else if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000) && unk_0x4FC40AB0ECCE6E18(Local_66.f_1C))
			{
			}
			break;
		
		case 0x00000006:
			if (func_9(&(Local_66.f_1C.f_F)) > 2.5f)
			{
				if (unk_0xC844350D5D58C99A(Local_66.f_1C) && unk_0x50B5F6F3C29E9380(Local_66.f_1C, unk_0x16F2683693E537C9()))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
					unk_0xF690C84DADBB3551(&(Local_66.f_1C));
				}
				iLocal_55 = 0x00000007;
			}
			break;
	}
}

void func_239(bool bParam0)
{
	Local_66.f_1C.f_3 = 0x00000000;
	unk_0x5D96D8530B3D0904(&(Local_66.f_1C.f_3), 0x00000003);
	unk_0x5D96D8530B3D0904(&(Local_66.f_1C.f_3), 0x00000004);
	if (!bParam0)
	{
		iLocal_81 = unk_0x09AC81E49EA267F7(Local_66.f_1C.f_4, Local_66.f_1C.f_5);
		if (!unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_242(Local_66.f_1C);
			unk_0x61755AC17D8F538E(Local_66.f_1C.f_2, 0x00000002);
		}
		unk_0x568AB11F0ED52091(Local_66.f_1C, -0.2f, 0x00000001);
	}
	else
	{
		iLocal_81 = unk_0x09AC81E49EA267F7(0x00000032, Local_66.f_1C.f_4);
		Local_66.f_1C.f_1 = unk_0xA6FF0828D17CF374(joaat("pickup_money_variable"), unk_0x68F4C0EC296D3901(Local_66.f_1C, 0x00000001), Local_66.f_1C.f_3, iLocal_81, 0x00000001, 0x00000000);
		if (!unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_240(Local_66.f_1C.f_1);
		}
	}
	Local_66.f_1C.f_E = 0x00000001;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_241(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_242(int iParam0)
{
	return func_243(iParam0, 0x00000001, 0x00000000);
}

int func_243(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_244()
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_1D0)
	{
		switch (iLocal_59)
		{
			case 0x00000002:
				if (func_1(Local_66.f_1D6, 0x00000004))
				{
					func_248();
					Local_66.f_2E.f_27 = unk_0x1C0640BA9A7327B3();
					iLocal_59 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0x1C0640BA9A7327B3() - Local_66.f_2E.f_27) > unk_0x09AC81E49EA267F7(0x000003E8, 0x00000BB8)
				{
					if (unk_0xDF1306B443CD3D15(Local_66.f_2E.f_4[0x00000000], 0x00000000))
					{
						unk_0xAA280AF45BCCCF21(Local_66.f_2E.f_4[0x00000000], 0x00000001);
					}
					iLocal_59 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (func_247() && func_246())
				{
					iLocal_59 = 0x00000005;
				}
				break;
			
			case 0x00000005:
				iLocal_51 = 0x00000018;
				func_16(0x00000001, 0x00000000);
				iLocal_59 = 0x00000006;
				break;
			
			case 0x00000006:
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if ((((unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar0]) || (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000) && unk_0x54648B774DB42A3A(Local_66.f_2E[iVar0], 0x00000000, 0x00000002))) || unk_0xEB6A8945D1AC98A1(Local_66.f_2)) || (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000) && unk_0x54648B774DB42A3A(Local_66.f_2, 0x00000000, 0x00000002))) || func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001))
					{
						func_16(0x00000002, 0x00000000);
						iVar1 = 0x00000000;
						while (iVar1 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar1]))
							{
								unk_0x6C3AE6E278DB3D0E(Local_66.f_2E[iVar1], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar1], 0x00000000);
							}
							iVar1++;
						}
						iLocal_59 = 0x00000000;
					}
					iVar0++;
				}
				break;
			
			case 0x00000007:
				func_245();
				iLocal_59 = 0x00000000;
				break;
			}
	}
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000))
		{
			unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar0], 0x00000000);
		}
		iVar0++;
	}
}

int func_246()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000))
		{
			if (!unk_0x405E212DDE472467(Local_66.f_2E[iVar0], 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_247()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000))
			{
				if (!unk_0x03068588A1FCED1A(Local_66.f_2E[iVar0]))
				{
					return 0x00000001;
				}
			}
			if (!unk_0x437347B10A200C4B(Local_66.f_2E.f_4[iVar0], 0x00000000))
			{
				if (!unk_0x03068588A1FCED1A(Local_66.f_2E.f_4[iVar0]))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_248()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Local_66.f_2E[iVar0] = unk_0x36F2404464202779(0x00000006, Local_66.f_2E.f_1A, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD(Local_66.f_2E[iVar0], 0x00000001, 0x00000000);
		unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar0], 0x00000001);
		Local_66.f_2E.f_4[iVar0] = unk_0x122AAB0B1D6F55AD(Local_66.f_2E.f_1B, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], 0x00000001, 0x00000001, 0x00000000);
		unk_0x73270B3C9CC833FD(Local_66.f_2E.f_4[iVar0], 0x00000001, 0x00000000);
		if (!(unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000) && unk_0x437347B10A200C4B(Local_66.f_2E.f_4[iVar0], 0x00000000)))
		{
			unk_0xF821F915BC24D246(Local_66.f_2E[iVar0], Local_66.f_2E.f_4[iVar0], 0xFFFFFFFF);
			unk_0x262EF6C6306BEA6C(Local_66.f_2E[iVar0], joaat("weapon_pistol"), 0x00000063, 0x00000000, 0x00000001);
		}
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2E.f_23[iVar0]));
		unk_0xE9362E4D600DD12A(0x00000000, Local_66.f_2E.f_4[iVar0], Local_66.f_2E.f_16, (unk_0xD890711CFD5AF100(Local_66.f_2E.f_4[iVar0]) - 8f), 0x00000001, Local_66.f_2E.f_1B, 0x000C0225, Local_66.f_2E.f_19, -1f);
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
		unk_0x9BE7E7B6B488CC55(0x00000000, Local_66, 0xFFFFFFFF, 0x00000000);
		unk_0x75ABDC5F81978924(Local_66.f_2E.f_23[iVar0]);
		unk_0x78ADC381772E3D54(Local_66.f_2E[iVar0], Local_66.f_2E.f_23[iVar0]);
		iVar0++;
	}
}

void func_249()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 0x00000001);
	}
	else
	{
		return;
	}
	iVar1 = 0x00000000;
	switch (iLocal_60)
	{
		case 0x00000001:
			iLocal_60 = 0x00000006;
			break;
		
		case 0x00000002:
			iLocal_51 = 0x00000002;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x00000003:
			iLocal_51 = 0x00000003;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x00000004:
			iLocal_51 = 0x00000004;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x00000005:
			if (((((func_25(Local_66) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_303())
			{
				iLocal_60 = 0x00000007;
			}
			break;
		
		case 0x00000006:
			if (func_25(Local_66) != joaat("weapon_unarmed") && func_303())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_60 = 0x00000008;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_60 = 0x00000009;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_60 = 0x0000000A;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_60 = 0x00000007;
				}
			}
			break;
		
		case 0x00000007:
			iLocal_51 = 0x00000005;
			iLocal_56 = 0x00000003;
			iLocal_60 = 0x0000000F;
			break;
		
		case 0x00000008:
			iLocal_51 = 0x00000002;
			iLocal_56 = 0x00000002;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x00000009:
			iLocal_51 = 0x00000003;
			iLocal_56 = 0x00000002;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x0000000A:
			iLocal_51 = 0x00000004;
			iLocal_56 = 0x00000002;
			iLocal_60 = 0x00000005;
			break;
		
		case 0x0000000B:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 0x00000001))
			{
				func_227();
				iLocal_58 = 0x00000005;
			}
			break;
		
		case 0x0000000C:
			if (!func_303())
			{
				if (!Local_66.f_1D0)
				{
					iLocal_62 = 0x00000009;
					iLocal_60 = 0x0000000F;
				}
				else
				{
					iLocal_60 = 0x0000000D;
				}
			}
			break;
		
		case 0x0000000D:
			if (unk_0x9C66D99E63E8E24C(Local_66) < 0.1f && !func_251())
			{
				func_250();
				iLocal_60 = 0x0000000E;
			}
			else if (func_251() && !func_303())
			{
				iLocal_60 = 0x0000000E;
			}
			break;
		
		case 0x0000000E:
			if (func_251() && !func_303())
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000003)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar1]))
					{
						unk_0x6C3AE6E278DB3D0E(Local_66.f_2E[iVar1], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar1], 0x00000000);
					}
					iVar1++;
				}
				iLocal_62 = 0x00000009;
				iLocal_60 = 0x0000000F;
			}
			break;
	}
}

void func_250()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0x00000000))
		{
			if (!unk_0xCB4F5A8ACBF1053B(Local_66.f_2E[iVar0]))
			{
				unk_0xA3BF0AA5A2608191(Local_66.f_2E[iVar0]);
				unk_0xF27A0DCBF07DE99D(Local_66.f_2E[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_251()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_2E.f_1C, Local_66.f_2E.f_1F, Local_66.f_2E.f_22, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_252()
{
	switch (iLocal_63)
	{
		case 0x00000000:
			if (!iLocal_93)
			{
				if (func_253())
				{
					iLocal_51 = 0x00000009;
					iLocal_58 = 0x00000007;
					iLocal_50 = 0x00000003;
					iLocal_62 = 0x0000000D;
					iLocal_63 = 0x00000003;
					iLocal_93 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			break;
	}
}

int func_253()
{
	int iVar0;
	vector3 vVar1;
	
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 0x00000001);
	}
	else
	{
		return 0x00000000;
	}
	if (!func_1(Local_66.f_1D6, 0x00000080))
	{
		if ((unk_0x869EFD0BC0868856(Local_66.f_2) || (unk_0xB87D13D0C064E9D1(Local_66.f_2, Local_66, 0x00000001) && iVar0 == joaat("weapon_unarmed"))) || func_254(Local_66.f_2, Local_66.f_2.f_1, 0x00000001) > 1.15f)
		{
			if (unk_0x869EFD0BC0868856(Local_66.f_2))
			{
			}
			if (unk_0xB87D13D0C064E9D1(Local_66.f_2, Local_66, 0x00000001) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_254(Local_66.f_2, Local_66.f_2.f_1, 0x00000001) > 1.15f)
			{
			}
			if (!unk_0x5A91F08DF773C39D(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, 0x00000000, 0x00000001, 0x00000000))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(Local_66.f_2, 0x00000001) };
				vVar1 = { Local_66.f_2.f_1 };
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_254(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_255()
{
	switch (iLocal_61)
	{
		case 0x00000000:
			if (func_283())
			{
				iLocal_61 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_276();
			iLocal_61 = 0x00000002;
			break;
		
		case 0x00000002:
			func_272();
			iLocal_61 = 0x00000003;
			break;
		
		case 0x00000003:
			if (func_267())
			{
				iLocal_61 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			func_256();
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			iLocal_65 = 0x00000001;
			break;
	}
}

void func_256()
{
	func_260();
	func_259();
	func_258();
	if (unk_0x31609A585163CBAC(Local_66.f_B9))
	{
		unk_0xAA738CBC845A2BD8(Local_66.f_2, Local_66.f_B9);
		unk_0xAA738CBC845A2BD8(Local_66.f_1C, Local_66.f_B9);
		if (!bLocal_86)
		{
			unk_0xAA738CBC845A2BD8(Local_66.f_60.f_1, Local_66.f_B9);
		}
	}
	func_257();
}

void func_257()
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
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000001, 0x0000000B);
	iVar1 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar2 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar3 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
	iVar4 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar5 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar6 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar7 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar8 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar9 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar10 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar11 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar12 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar13 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000009);
	iVar14 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
	iVar15 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar16 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
	iVar17 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar18 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	iVar19 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar20 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar21 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar22 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar23 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar24 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar25 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000006);
	iVar26 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar27 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
	iVar28 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	iVar29 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
	if (func_105() == 0x00000000)
	{
		switch (iVar12)
		{
			case 0x00000001:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_1";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_2";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_3";
				break;
			
			case 0x00000004:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 0x00000001:
				Local_66.f_DD.f_DC = "OJSR_COPS_1";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_DC = "OJSR_COPS_2";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_DC = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 0x00000001:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_1";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_105() == 0x00000001)
	{
		switch (iVar12)
		{
			case 0x00000001:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_5";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_6";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_7";
				break;
			
			case 0x00000004:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 0x00000001:
				Local_66.f_DD.f_DC = "OJSR_COPS_5";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_DC = "OJSR_COPS_6";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_DC = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 0x00000001:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_3";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_105() == 0x00000002)
	{
		switch (iVar12)
		{
			case 0x00000001:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_9";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_10";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_11";
				break;
			
			case 0x00000004:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 0x00000001:
				Local_66.f_DD.f_DC = "OJSR_COPS_9";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_DC = "OJSR_COPS_10";
				break;
			
			case 0x00000003:
				Local_66.f_DD.f_DC = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 0x00000001:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_5";
				break;
			
			case 0x00000002:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 0x00000001:
			Local_66.f_DD.f_C6 = "OJSR_GREET_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_C6 = "OJSR_GREET_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_C6 = "OJSR_GREET_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_C6 = "OJSR_GREET_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_C6 = "OJSR_GREET_5";
			break;
		
		case 0x00000006:
			Local_66.f_DD.f_C6 = "OJSR_GREET_6";
			break;
		
		case 0x00000007:
			Local_66.f_DD.f_C6 = "OJSR_GREET_7";
			break;
		
		case 0x00000008:
			Local_66.f_DD.f_C6 = "OJSR_GREET_8";
			break;
		
		case 0x00000009:
			Local_66.f_DD.f_C6 = "OJSR_GREET_9";
			break;
		
		case 0x0000000A:
			Local_66.f_DD.f_C6 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 0x00000001:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 0x00000001:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 0x00000001:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 0x00000001:
			Local_66.f_DD.f_CA = "OJSR_WORRY_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CA = "OJSR_WORRY_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CA = "OJSR_WORRY_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_CA = "OJSR_WORRY_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_CA = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 0x00000001:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 0x00000001:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 0x00000001:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 0x00000001:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 0x00000001:
			Local_66.f_DD.f_CF = "OJSR_BUMP_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_CF = "OJSR_BUMP_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_CF = "OJSR_BUMP_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_CF = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 0x00000001:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 0x00000001:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 0x00000001:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_5";
			break;
		
		case 0x00000006:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_6";
			break;
		
		case 0x00000007:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_7";
			break;
		
		case 0x00000008:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 0x00000001:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_9";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 0x00000001:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 0x00000001:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 0x00000001:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 0x00000001:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 0x00000001:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 0x00000001:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 0x00000001:
			Local_66.f_DD.f_DE = "OJSR_FLEE_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_DE = "OJSR_FLEE_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_DE = "OJSR_FLEE_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_DE = "OJSR_FLEE_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_DE = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 0x00000001:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 0x00000001:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 0x00000001:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_3";
			break;
		
		case 0x00000004:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_4";
			break;
		
		case 0x00000005:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 0x00000001:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 0x00000001:
			Local_66.f_DD.f_E4 = "OJSR_BUY_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_E4 = "OJSR_BUY_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_E4 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 0x00000001:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_1";
			break;
		
		case 0x00000002:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_2";
			break;
		
		case 0x00000003:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_DD.f_A6 = "OJSRAUD";
	Local_66.f_DD.f_A7 = "OJSR_GREET";
	Local_66.f_DD.f_A8 = "OJSR_BATEQ";
	Local_66.f_DD.f_A9 = "OJSR_TOOLEQ";
	Local_66.f_DD.f_AA = "OJSR_STICKEQ";
	Local_66.f_DD.f_AB = "OJSR_WORRY";
	Local_66.f_DD.f_AC = "OJSR_SHOCK";
	Local_66.f_DD.f_AD = "OJSR_STUBBRN";
	Local_66.f_DD.f_AE = "OJSR_COUNTER";
	Local_66.f_DD.f_AF = "OJSR_BACKRM";
	Local_66.f_DD.f_B0 = "OJSR_BUMP";
	Local_66.f_DD.f_B1 = "OJSR_BPAIM";
	Local_66.f_DD.f_B2 = "OJSR_BPAIMAG";
	Local_66.f_DD.f_B3 = "OJSR_HOLDUP";
	Local_66.f_DD.f_B4 = "OJSR_SCARED";
	Local_66.f_DD.f_B5 = "OJSR_KNIFAIM";
	Local_66.f_DD.f_B6 = "OJSR_TOOLAIM";
	Local_66.f_DD.f_B7 = "OJSR_GRANAIM";
	Local_66.f_DD.f_B8 = "OJSR_STICAIM";
	Local_66.f_DD.f_B9 = "OJSR_BRAVE";
	Local_66.f_DD.f_BA = "OJSR_MOREAIM";
	Local_66.f_DD.f_BB = "OJSR_SURNDER";
	Local_66.f_DD.f_BC = "OJSR_COPS";
	Local_66.f_DD.f_BD = "OJSR_POURCAN";
	Local_66.f_DD.f_BE = "OJSR_FLEE";
	Local_66.f_DD.f_BF = "OJSR_RECSCAR";
	Local_66.f_DD.f_C0 = "OJSR_RECAGGR";
	Local_66.f_DD.f_C1 = "OJSR_CSTMER";
	Local_66.f_DD.f_C2 = "OJSR_MOSC";
	Local_66.f_DD.f_C3 = "OJSR_PLRHUR";
	Local_66.f_DD.f_C4 = "OJSR_BUY";
	Local_66.f_DD.f_C5 = "OJSR_STEAL";
	iLocal_91 = 0x00000000;
	iLocal_92 = 0x00000000;
	iLocal_93 = 0x00000000;
}

void func_258()
{
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, 0x1213B24D, 0x00000001);
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 0x00000001);
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 0x00000001);
	Local_66.f_60.f_1 = unk_0x7707E48765093646(Local_66.f_60, Local_66.f_1E6.f_6, 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(Local_66.f_60.f_1, Local_66.f_60.f_5);
	unk_0x1E9649458B15960F(Local_66.f_60.f_1, 0x00000001);
}

void func_259()
{
	Local_66.f_1C = unk_0xEC03378782221D46(joaat("pickup_portable_crate_unfixed"), Local_66.f_1C.f_7, 0x00000000, Local_66.f_1C.f_D);
	unk_0xC023D1C4BF532815(Local_66.f_1C, Local_66.f_1C.f_A, 0x00000002, 0x00000001);
	unk_0x4A4806F9D471E491(Local_66.f_1C, 0x00000000, 0x00000000);
	unk_0x3192B0FF798E63C8(Local_66.f_1C, 0x00000001, 0x00000000);
	Local_66.f_1C.f_E = 0x00000000;
}

void func_260()
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = unk_0x36F2404464202779(0x00000004, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 0x00000001, 0x00000001);
	func_266(iLocal_80, &iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0x00000000, iVar1, iVar0, 0x00000000);
	func_265(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0x00000002, iVar1, iVar0, 0x00000000);
	func_264(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0x00000003, iVar1, iVar0, 0x00000000);
	func_263(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0x00000004, iVar1, iVar0, 0x00000000);
	func_262(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0x00000008, iVar1, iVar0, 0x00000000);
	unk_0x11AD11297DC58CC7(Local_66.f_2, 0x00000001);
	if (Local_66.f_2.f_C)
	{
		func_261();
	}
}

void func_261()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
	}
}

void func_262(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	if (*iParam0 == 0x00000000)
	{
		*iParam1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	}
	else
	{
		*iParam1 = 0x00000000;
	}
}

void func_263(int iParam0, int iParam1)
{
	*iParam0 = 0x00000000;
	*iParam1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
}

void func_264(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	*iParam1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
}

void func_265(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
	if (*iParam0 > 0x00000000)
	{
		*iParam1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	}
	else
	{
		*iParam1 = 0x00000000;
	}
}

void func_266(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam1 = 0x00000000;
			*uParam2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam1 = 0x00000001;
			*uParam2 = 0x00000000;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam1 = 0x00000002;
			*uParam2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
			break;
	}
}

int func_267()
{
	if (!func_268(&Local_96))
	{
		return 0x00000000;
	}
	if (!bLocal_86)
	{
		if (!unk_0xB4AE0788C1587752(Local_66.f_2.f_F))
		{
			return 0x00000000;
		}
	}
	if (!unk_0xBD307E66C0669BFC(Local_66.f_B9))
	{
		return 0x00000000;
	}
	unk_0xDF8BDD00CF1D4043(0x00000000);
	return 0x00000001;
}

int func_268(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_269(uParam0[iVar0 /*2*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0x00000000;
	return 0x00000001;
}

bool func_269(var uParam0)
{
	return func_270(*uParam0, "NULL", uParam0->f_1);
}

int func_270(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_271(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_272()
{
	unk_0xDF8BDD00CF1D4043(0x00000001);
	if (!bLocal_86)
	{
		unk_0x3F423BF5B8125A50(Local_66.f_2.f_F);
		Local_96.f_20 = unk_0xF4CCC8CB6DE7F1AE();
	}
	func_273(&Local_96, Local_66.f_2.f_5);
	func_273(&Local_96, Local_66.f_1C.f_D);
	func_273(&Local_96, Local_66.f_60);
	Local_66.f_1D2 = 0x00000001;
}

void func_273(var uParam0, int iParam1)
{
	func_274(uParam0, 0x00000000, iParam1, 0x00000000);
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_275(iParam1))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000000;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_276()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	func_281(iLocal_80, &(Local_66.f_2E.f_8), &(Local_66.f_2E.f_12), &(Local_66.f_2E.f_16), &(Local_66.f_2E.f_19), &(Local_66.f_2E.f_1A), &(Local_66.f_2E.f_1B), &(Local_66.f_2E.f_1C), &(Local_66.f_2E.f_1F), &(Local_66.f_2E.f_22));
	func_279(iLocal_80);
	vVar0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	vVar1 = { -3242.008f, 1001.202f, 11.83071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	vVar1 = { -3245.088f, 1001.468f, 13.65071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	vVar1 = { -3243.37f, 1000.37f, 12.83f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	Local_66.f_1D5 = 0xFFFFFFFF;
	Local_66.f_66.f_16 = 0xFFFFFFFF;
	Local_66.f_60 = joaat("p_till_01_s");
	Local_66.f_60.f_2 = { Local_66.f_1E6.f_6 };
	Local_66.f_60.f_5 = (Local_66.f_1E6.f_9.f_2 + 180f);
	Local_66.f_1C3.f_3 = 0x00000000;
	Local_66.f_1CA = 0x00000000;
	Local_66.f_1CB = 0x00000000;
	Local_66.f_1CC = 0x00000000;
	Local_66.f_1CD = 0x00000000;
	Local_66.f_1CE = 0x00000000;
	Local_66.f_1D1 = 0x00000000;
	func_278(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_277();
}

void func_277()
{
	Local_66.f_56.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_56.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_56.f_5 = 2f;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 0x00000001:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 0x00000002:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 0x00000004:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 0x00000005:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 0x00000006:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 0x00000007:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 0x00000009:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 0x0000000B:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 0x0000000C:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 0x0000000D:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 0x0000000E:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 0x00000010:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 0x00000011:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 0x00000012:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case 0xFFFFFFFE:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_279(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_280(Local_66.f_BA, Local_66.f_BD) };
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_gasstation");
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_gen_liquor");
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_280(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam1.x) / 2f);
	vVar0.y = ((vParam0.y + vParam1.y) / 2f);
	vVar0.z = ((vParam0.z + vParam1.z) / 2f);
	return vVar0;
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_282(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			*(uParam1[0x00000000 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0x00000000] = 90.5427f;
			*(uParam1[0x00000001 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[0x00000001] = 90.5427f;
			*(uParam1[0x00000002 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[0x00000002] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000001:
			*(uParam1[0x00000000 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0x00000000] = 297.87f;
			*(uParam1[0x00000001 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[0x00000001] = 50.66f;
			*(uParam1[0x00000002 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[0x00000002] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000002:
			*(uParam1[0x00000000 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0x00000000] = 310.6741f;
			*(uParam1[0x00000001 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[0x00000001] = 214.1061f;
			*(uParam1[0x00000002 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[0x00000002] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000003:
			*(uParam1[0x00000000 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0x00000000] = 346.32f;
			*(uParam1[0x00000001 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[0x00000001] = 112.11f;
			*(uParam1[0x00000002 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[0x00000002] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000004:
			*(uParam1[0x00000000 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0x00000000] = 301.6958f;
			*(uParam1[0x00000001 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[0x00000001] = 300.6013f;
			*(uParam1[0x00000002 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[0x00000002] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x00000005:
			*(uParam1[0x00000000 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0x00000000] = 268.18f;
			*(uParam1[0x00000001 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[0x00000001] = 91.37f;
			*(uParam1[0x00000002 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[0x00000002] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x00000006:
			*(uParam1[0x00000000 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0x00000000] = 354.8025f;
			*(uParam1[0x00000001 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[0x00000001] = 2.3146f;
			*(uParam1[0x00000002 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[0x00000002] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000007:
			*(uParam1[0x00000000 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0x00000000] = 17.2662f;
			*(uParam1[0x00000001 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[0x00000001] = 216.1689f;
			*(uParam1[0x00000002 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[0x00000002] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000008:
			*(uParam1[0x00000000 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0x00000000] = 278.2335f;
			*(uParam1[0x00000001 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[0x00000001] = 289.4738f;
			*(uParam1[0x00000002 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[0x00000002] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000009:
			*(uParam1[0x00000000 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0x00000000] = 229.73f;
			*(uParam1[0x00000001 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[0x00000001] = 226.22f;
			*(uParam1[0x00000002 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[0x00000002] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x0000000A:
			*(uParam1[0x00000000 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0x00000000] = 175.7402f;
			*(uParam1[0x00000001 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[0x00000001] = 152.4543f;
			*(uParam1[0x00000002 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[0x00000002] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x0000000B:
			*(uParam1[0x00000000 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0x00000000] = 216.9221f;
			*(uParam1[0x00000001 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[0x00000001] = 348.3592f;
			*(uParam1[0x00000002 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[0x00000002] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x0000000C:
			*(uParam1[0x00000000 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0x00000000] = 2.8999f;
			*(uParam1[0x00000001 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[0x00000001] = 329.1264f;
			*(uParam1[0x00000002 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[0x00000002] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x0000000D:
			*(uParam1[0x00000000 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0x00000000] = 345.1121f;
			*(uParam1[0x00000001 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[0x00000001] = 350.3949f;
			*(uParam1[0x00000002 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[0x00000002] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x0000000E:
			*(uParam1[0x00000000 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0x00000000] = 324.3f;
			*(uParam1[0x00000001 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[0x00000001] = 152.87f;
			*(uParam1[0x00000002 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[0x00000002] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x0000000F:
			*(uParam1[0x00000000 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0x00000000] = 81.6255f;
			*(uParam1[0x00000001 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[0x00000001] = 76.057f;
			*(uParam1[0x00000002 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[0x00000002] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 0x00000010:
			*(uParam1[0x00000000 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0x00000000] = 210.3384f;
			*(uParam1[0x00000001 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[0x00000001] = 210.1552f;
			*(uParam1[0x00000002 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[0x00000002] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000011:
			*(uParam1[0x00000000 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0x00000000] = 93.85f;
			*(uParam1[0x00000001 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[0x00000001] = 88.25f;
			*(uParam1[0x00000002 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[0x00000002] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 0x00000012:
			*(uParam1[0x00000000 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0x00000000] = 155.4277f;
			*(uParam1[0x00000001 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[0x00000001] = 74.6758f;
			*(uParam1[0x00000002 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[0x00000002] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_282(int iParam0)
{
	if (iParam0 >= 0x00000013)
	{
		return 0x00000000;
	}
	else if (iParam0 <= 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_283()
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Local_66, 0x00000001) };
		if (unk_0x0EB28750412C3A5A(vVar0, Local_66.f_B5, 0x00000001) < 50f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_284()
{
	if (Local_66.f_2E.f_1A != 0x00000000)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1A);
	}
	if (Local_66.f_2E.f_1B != 0x00000000)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1B);
	}
	if (!unk_0xEA6BC48857E0AC4C(Local_66.f_2.f_F))
	{
		unk_0x8D17794CE3273D70(Local_66.f_2.f_F);
	}
}

int func_285()
{
	if (Global_1B416.f_2378)
	{
		if (!func_289(0x00000038))
		{
			return 0x00000001;
		}
	}
	if (func_288())
	{
		return 0x00000001;
	}
	if (!unk_0x338D6FF72D84D90F())
	{
		return 0x00000001;
	}
	if (func_305() && !func_304())
	{
		return 0x00000001;
	}
	if (func_287() && func_286())
	{
		return 0x00000001;
	}
	if (Global_7832)
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x10FAF14A60A0DBE1();
	}
	return 0x00000000;
}

bool func_286()
{
	return Global_1B2FC > 0x00000000;
}

int func_287()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_288()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Local_66, 0x00000001) };
		fVar1 = unk_0x0EB28750412C3A5A(vVar0, Local_66.f_B5, 0x00000001);
		if (fVar1 > Local_66.f_B8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_289(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_290(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_20 + uParam0->f_21) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000F)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001D))
					{
						func_291(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_291(int iParam0)
{
	func_292(iParam0, "NULL", iParam0->f_1);
}

void func_292(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_271(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

int func_293()
{
	int iVar0;
	
	if (Local_66.f_1 != Global_1B416.f_4E3E.f_3E[iLocal_80])
	{
		return 0x00000001;
	}
	iVar0 = (unk_0x972A296334C9D57B() - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	iLocal_85 = 0x00000002;
	if (iVar0 < 0x00000000)
	{
		iVar0 = unk_0x972A296334C9D57B() + 31;
		iVar0 = (iVar0 - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_294(var uParam0, int iParam1)
{
	func_295(uParam0, iParam1);
}

void func_295(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_296(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 0x00000001;
}

Vector3 func_297(int iParam0)
{
	if (!func_282(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 0x00000001:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 0x00000002:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 0x00000003:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 0x00000004:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 0x00000005:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 0x00000006:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 0x00000007:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 0x00000008:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 0x00000009:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 0x0000000A:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 0x0000000B:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 0x0000000C:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 0x0000000D:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 0x0000000E:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 0x0000000F:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 0x00000010:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 0x00000011:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 0x00000012:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0xD8A54335F18763BA() - Global_1B416.f_4E3E.f_15[iLocal_80]);
	iVar1 = (unk_0x972A296334C9D57B() - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	iLocal_84 = 0x00000002;
	if (iVar0 < 0x00000000)
	{
		iVar0 = unk_0xD8A54335F18763BA() + 24;
		iVar0 = (iVar0 - Global_1B416.f_4E3E.f_15[iLocal_80]);
		iVar2 = 0x00000001;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0x00000000) || (iVar0 < iLocal_84 && iVar2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_299(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	vector3 vVar3[2];
	
	func_300(iLocal_80, &uVar1, &uVar2, &vVar3);
	if (!func_1(Local_66.f_1D6, 0x00000040))
	{
		if (!unk_0x76395FF5E8D5E643(uVar1[iVar0]))
		{
			unk_0x8010B3127F058F0F(uVar1[0x00000000], uVar2[0x00000000], vVar3[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000000);
			if (uVar1[0x00000001] != 0xFFFFFFFF)
			{
				unk_0x8010B3127F058F0F(uVar1[0x00000001], uVar2[0x00000001], vVar3[0x00000001 /*3*/], 0x00000000, 0x00000000, 0x00000000);
			}
		}
		func_294(&(Local_66.f_1D6), 0x00000040);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0x76395FF5E8D5E643(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x51D3DB30DC0C68AD(uVar1[iVar0]) != 0x00000001)
				{
					unk_0x1BA7FCEAFCE8D46E(uVar1[iVar0], 0x00000001, 0x00000000, 0x00000000);
				}
			}
			else if (unk_0x51D3DB30DC0C68AD(uVar1[iVar0]) != 0x00000000)
			{
				unk_0x1BA7FCEAFCE8D46E(uVar1[iVar0], 0x00000000, 0x00000000, 0x00000000);
			}
		}
		iVar0++;
	}
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_2A");
			(*uParam2)[0x00000000] = joaat("v_ilev_gasdoor");
			*(uParam3[0x00000000 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_2B");
			(*uParam2)[0x00000001] = joaat("v_ilev_gasdoor_r");
			*(uParam3[0x00000001 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 0x00000001:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_3A");
			(*uParam2)[0x00000000] = joaat("v_ilev_gasdoor");
			*(uParam3[0x00000000 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_3B");
			(*uParam2)[0x00000001] = joaat("v_ilev_gasdoor_r");
			*(uParam3[0x00000001 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 0x00000002:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_4A");
			(*uParam2)[0x00000000] = joaat("v_ilev_gasdoor");
			*(uParam3[0x00000000 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_4B");
			(*uParam2)[0x00000001] = joaat("v_ilev_gasdoor_r");
			*(uParam3[0x00000001 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 0x00000003:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_1A");
			(*uParam2)[0x00000000] = joaat("v_ilev_gasdoor");
			*(uParam3[0x00000000 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_1B");
			(*uParam2)[0x00000001] = joaat("v_ilev_gasdoor_r");
			*(uParam3[0x00000001 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 0x00000004:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_5A");
			(*uParam2)[0x00000000] = joaat("v_ilev_gasdoor");
			*(uParam3[0x00000000 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_5B");
			(*uParam2)[0x00000001] = joaat("v_ilev_gasdoor_r");
			*(uParam3[0x00000001 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 0x00000005:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0x00000000] = 0xB7B3D4C7;
			*(uParam3[0x00000000 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[0x00000001] = 0xFFFFFFFF;
			break;
		
		case 0x00000006:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0x00000000] = 0xB7B3D4C7;
			*(uParam3[0x00000000 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[0x00000001] = 0xFFFFFFFF;
			break;
		
		case 0x00000007:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0x00000000] = 0xB7B3D4C7;
			*(uParam3[0x00000000 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[0x00000001] = 0xFFFFFFFF;
			break;
		
		case 0x00000008:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0x00000000] = 0xB7B3D4C7;
			*(uParam3[0x00000000 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[0x00000001] = 0xFFFFFFFF;
			break;
		
		case 0x00000009:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0x00000000] = 0xB7B3D4C7;
			*(uParam3[0x00000000 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[0x00000001] = 0xFFFFFFFF;
			break;
		
		case 0x0000000A:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 0x0000000B:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 0x0000000C:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 0x0000000D:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 0x0000000E:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 0x0000000F:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 0x00000010:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 0x00000011:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 0x00000012:
			(*uParam1)[0x00000000] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0x00000000] = joaat("v_ilev_247door");
			*(uParam3[0x00000000 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[0x00000001] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[0x00000001] = joaat("v_ilev_247door_r");
			*(uParam3[0x00000001 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_301(var uParam0, int iParam1)
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_303()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_304()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_305()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

Vector3 func_306(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_307(var uParam0)
{
	iLocal_65 = 0x00000000;
	iLocal_63 = 0x00000000;
	iLocal_61 = 0x00000000;
	iLocal_62 = 0x00000000;
	iLocal_60 = 0x00000000;
	iLocal_59 = 0x00000001;
	iLocal_55 = 0x00000000;
	iLocal_58 = 0x00000001;
	iLocal_57 = 0x00000000;
	iLocal_54 = 0x00000000;
	iLocal_53 = 0x00000000;
	iLocal_51 = 0x00000000;
	iLocal_50 = 0x00000000;
	Local_66 = unk_0x16F2683693E537C9();
	func_315(&(uParam0->f_1[0x00000000 /*3*/]), &(Local_66.f_B5), &iLocal_80);
	if ((((((((iLocal_80 == 0x0000000A || iLocal_80 == 0x0000000B) || iLocal_80 == 0x0000000C) || iLocal_80 == 0x0000000D) || iLocal_80 == 0x0000000E) || iLocal_80 == 0x0000000F) || iLocal_80 == 0x00000010) || iLocal_80 == 0x00000011) || iLocal_80 == 0x00000012)
	{
		bLocal_94 = 0x00000001;
	}
	Local_66.f_B8 = 150f;
	Local_66.f_2.f_F = "random@shop_robbery_reactions@";
	Local_66.f_2.f_10 = "absolutely";
	Local_66.f_2.f_11 = "is_this_it";
	Local_66.f_2.f_12 = "shock";
	Local_66.f_2.f_13 = "anger_a";
	Local_66.f_2.f_14 = "screw_you";
	Local_66.f_2.f_15 = "but_why";
	Local_66.f_1E6.f_1 = "mp_am_hold_up";
	Local_66.f_1E6.f_2 = "guard_handsup_loop";
	Local_66.f_1E6.f_3 = "holdup_victim_20s";
	Local_66.f_1E6.f_4 = "holdup_victim_20s_bag";
	Local_66.f_1E6.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_314();
	if (!bLocal_86)
	{
		func_310();
	}
	iLocal_87 = 0x00000000;
	if (iLocal_80 != 0x00000007)
	{
		iLocal_52 = 0x00000006;
	}
	else
	{
		iLocal_52 = 0x00000000;
	}
	if (func_105() == 0x00000000)
	{
		Local_66.f_1 = 0x00000000;
	}
	else if (func_105() == 0x00000001)
	{
		Local_66.f_1 = 0x00000001;
	}
	else if (func_105() == 0x00000002)
	{
		Local_66.f_1 = 0x00000002;
	}
	func_309(iLocal_80, &(Local_66.f_BA), &(Local_66.f_BD), &(Local_66.f_C0), &(Local_66.f_C1), &(Local_66.f_C4), &(Local_66.f_C7), &(Local_66.f_C8), &(Local_66.f_CB), &(Local_66.f_CE), &(Local_66.f_CF), &(Local_66.f_D2), &(Local_66.f_D5), &(Local_66.f_D6), &(Local_66.f_D9), &(Local_66.f_DC), &(Local_66.f_66.f_6), &(Local_66.f_66.f_9));
	func_308(iLocal_80, &(Local_66.f_1E6.f_6), &(Local_66.f_1E6.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_1C.f_7), &(Local_66.f_1C.f_A), &(Local_66.f_1C.f_D), &(Local_66.f_1C.f_4), &(Local_66.f_1C.f_5), &(Local_66.f_66.f_15));
}

void func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 0x00000001:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 0x00000002:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 0x00000003:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 0x00000004:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 0x00000005:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 0x00000006:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 0x00000007:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 0x00000008:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 0x00000009:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 0x0000000A:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 0x0000000B:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 0x0000000C:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 0x0000000D:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 0x0000000E:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 0x0000000F:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 0x00000010:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 0x00000011:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 0x00000012:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 0x000000DC;
	*uParam10 = 0x00000313;
	*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 0x00000003;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 0x00000002;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 0x00000003;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_309(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000001:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000002:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000004:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000005:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 0x00000006:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 0x00000007:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 0x00000009:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 0x0000000B:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 0x0000000C:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 0x0000000D:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 0x0000000E:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 0x00000010:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 0x00000011:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 0x00000012:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_310()
{
	func_313();
	func_312();
	func_311();
}

void func_311()
{
	int iVar0;
	
	if (iLocal_82 >= 0x00000009)
	{
		if (Global_1B416.f_4E3E.f_29 > 0x00000003)
		{
			if (iLocal_82 == 0x00000009)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
			}
			if (iVar0 < 0x00000001)
			{
				Local_66.f_1D0 = 0x00000001;
				Global_1B416.f_4E3E.f_29 = 0x00000000;
			}
			else
			{
				Local_66.f_1D0 = 0x00000000;
				Global_1B416.f_4E3E.f_29++;
			}
		}
		else
		{
			Global_1B416.f_4E3E.f_29++;
		}
	}
	else
	{
		Global_1B416.f_4E3E.f_29++;
	}
}

void func_312()
{
	int iVar0;
	
	if (iLocal_82 >= 0x00000003)
	{
		if (iLocal_82 == 0x00000003)
		{
			iVar0 = 0x00000000;
		}
		else
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
		}
		if (iVar0 < 0x00000001)
		{
			Local_66.f_2.f_C = 0x00000001;
		}
		else
		{
			Local_66.f_2.f_C = 0x00000000;
		}
	}
}

void func_313()
{
	int iVar0;
	
	if (iLocal_82 >= 0x00000006)
	{
		if (iLocal_82 == 0x00000006)
		{
			iVar0 = 0x00000000;
		}
		else
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
		}
		if (iVar0 < 0x00000001)
		{
			iLocal_58 = 0x00000002;
		}
		else
		{
			iLocal_58 = 0x00000001;
		}
	}
}

int func_314()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000013)
	{
		iVar0 = (iVar0 + Global_1B416.f_4E3E[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_315(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0x00000000;
	fVar0 = SYSTEM::VDIST2(func_297(0x00000000), *uParam0);
	fVar2 = 0f;
	iVar1 = 0x00000001;
	while (iVar1 <= (0x00000013 - 0x00000001))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_297(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_297(*iParam2) };
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_21 = iParam1;
	}
}

bool func_317(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_318(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_319(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_319(int iParam0)
{
	return func_320(iParam0, Global_A1D7);
}

int func_320(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_321()
{
	if (((iLocal_63 == 0x00000001 || iLocal_63 == 0x00000002) || iLocal_101 == 0x00000007) || (unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000) && iLocal_65 == 0x00000001))
	{
		if (iLocal_63 == 0x00000001)
		{
		}
		if (iLocal_63 == 0x00000002)
		{
		}
		if (iLocal_101 == 0x00000007)
		{
		}
		if (unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000) && iLocal_65 == 0x00000001)
		{
		}
		Global_1B416.f_4E3E.f_15[iLocal_80] = unk_0xD8A54335F18763BA();
		Global_1B416.f_4E3E.f_2A[iLocal_80] = unk_0x972A296334C9D57B();
	}
	if ((unk_0x58424C49F8924842() && func_332()) && Local_66.f_1D4)
	{
		func_328(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_327();
	iLocal_87 = 0x00000000;
	iLocal_91 = 0x00000000;
	iLocal_92 = 0x00000000;
	iLocal_93 = 0x00000000;
	if (!bLocal_86)
	{
		unk_0x34D79252800B23FF(0x00000005);
	}
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x2952D66A502EA873(iLocal_79, 0x00000000);
	func_29("SHR_HOLDUP_1", 0x00000001);
	func_29("SHR_SNK_TUT", 0x00000001);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_1(Local_66.f_1D6, 0x00000400))
	{
		if ((unk_0xC844350D5D58C99A(iLocal_98[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_98[0x00000001])) && unk_0xC844350D5D58C99A(iLocal_98[0x00000002]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_98[0x00000000]));
			unk_0xF690C84DADBB3551(&(iLocal_98[0x00000001]));
			unk_0xF690C84DADBB3551(&(iLocal_98[0x00000002]));
		}
	}
	if (iLocal_100 == 0x00000002)
	{
		unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
	}
	func_322(&Local_96, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_322(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_324(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_323(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0x00000000;
	uParam0->f_20 = 0xFFFFFFFF;
	uParam0->f_21 = 0x00000001;
}

void func_323(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
}

void func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			func_325(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 0x00000001;
}

void func_325(var uParam0)
{
	func_326(*uParam0, "NULL", uParam0->f_1);
}

void func_326(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_271(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

void func_327()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0x00000000))
	{
		unk_0xA3BF0AA5A2608191(Local_66.f_2);
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_2))
	{
		func_221();
		unk_0x6DAD7906B73F064D(&(Local_66.f_2));
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_56))
	{
		unk_0x6DAD7906B73F064D(&(Local_66.f_56));
	}
	if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0x00000000))
	{
		if (iLocal_53 >= 0x00000004)
		{
			unk_0x1BF8B16C32704027(Local_66.f_1C, -8f, 0x00000001);
			unk_0xDFC6BA855748EB10(Local_66.f_1C, 0x00000001, 0f, 0f, -0.1f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		}
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_1C))
	{
		unk_0xEEEE2E5FA6F78DF0(&(Local_66.f_1C));
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_60.f_1))
	{
		unk_0xF690C84DADBB3551(&(Local_66.f_60.f_1));
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, 0x1213B24D, 0x00000000);
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 0x00000000);
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 0x00000000);
	}
	if (unk_0x762119754C50557A(Local_66.f_1C.f_1))
	{
		unk_0x40B7230FD4C59AA2(Local_66.f_1C.f_1);
	}
	if (func_15(&(Local_66.f_1DD)))
	{
		func_40(&(Local_66.f_1DD));
	}
	if (Local_66.f_1D2)
	{
		if (!bLocal_86)
		{
			unk_0x8D17794CE3273D70(Local_66.f_2.f_F);
		}
		Local_66.f_1D2 = 0x00000000;
	}
}

void func_328(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_331(*uParam1, 0x00000001, 0x00000000);
	StringCopy(&(Var2[0x00000000 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[0x00000001 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0x00000000 /*6*/]), "SP", 24);
	MemCopy(&(Var1[0x00000001 /*6*/]), {func_330(iParam0)}, 0x00000006);
	if (func_329(0x00000114, &Var1, &Var2, 0x00000002, 0xFFFFFFFF, 0x00000000, 0x00000000))
	{
		unk_0x6106B2DBBCB1AA39(0x00000083, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		unk_0x6106B2DBBCB1AA39(0x00000072, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_329(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 0x00000004;
		Var0 = iParam0;
		if (iParam4 == 0xFFFFFFFF)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_147(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 0x00000023, &Var2))
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
		iVar1 = 0x00000000;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 0x00000008);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 0x00000001;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0x00000000;
}

struct<8> func_330(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case 0xFFFFFFFE:
		case 0xFFFFFFFF:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_331(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_332()
{
	if (func_334() && func_333(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_333(int iParam0)
{
	return Global_140676[iParam0];
}

var func_334()
{
	return func_333(func_78() + 1);
}

