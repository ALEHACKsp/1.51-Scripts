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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 32;
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
	var uLocal_101 = 32;
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
	int iLocal_137 = 0;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<21> Local_151 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_139 = 0xFFFFFFFF;
	func_208(ScriptParam_151);
	while (0x00000001)
	{
		func_207();
		if (func_197())
		{
			func_187();
		}
		switch (func_186(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_185() == 0x00000002)
				{
					vLocal_138[unk_0x57270EE11514DC67() /*3*/] = 0x00000002;
				}
				else if (func_185() == 0x00000006)
				{
					vLocal_138[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
				}
				break;
			
			case 0x00000002:
				if (func_185() == 0x00000002)
				{
					if (!func_184(0x00000000))
					{
						func_74();
					}
					else if (!unk_0xEAE0D21A50E6C7F4(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000001))
					{
						func_8();
					}
				}
				else if (func_185() == 0x00000006)
				{
					vLocal_138[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
				}
				break;
			
			case 0x00000005:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_138[unk_0x57270EE11514DC67() /*3*/] = 0x00000006;
				}
				break;
			
			case 0x00000003:
				vLocal_138[unk_0x57270EE11514DC67() /*3*/] = 0x00000006;
			
			case 0x00000006:
				func_187();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_185())
			{
				case 0x00000000:
					vLocal_61.x = 0x00000002;
					break;
				
				case 0x00000002:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 0x00000006;
					}
					break;
				
				case 0x00000006:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_61.y, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	if (unk_0xBFF81ED3B99522C7())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_137 == 0x00000000)
		{
			unk_0x0674E58A79778E99(&iLocal_140, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000001);
		}
		iVar0 = iLocal_137;
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_138[iLocal_137 /*3*/].f_2, 0x00000000))
			{
				unk_0x0674E58A79778E99(&iLocal_140, 0x00000001);
			}
			if (func_4(iVar1, 0x00000000, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_184507[iLocal_137 /*876*/].f_92, 0x00000004))
				{
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 == 0x00000020)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_61.f_1), 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000000);
			iLocal_137 = 0x00000000;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 0x000003E8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_7(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (iLocal_139 != 0xFFFFFFFF)
	{
		func_72(iLocal_139, 0x00000000);
		func_71(iLocal_139, 0x00000000);
		iLocal_139 = 0xFFFFFFFF;
	}
	unk_0x5D96D8530B3D0904(&(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
	unk_0x5D96D8530B3D0904(&(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
	func_70(0x0000000A, 0x00000000);
	func_69(0x00000000);
	func_30(0x00000001);
	func_23();
	func_9(0x0000002B, 0x00000001, 0x00000000);
	func_9(0x0000002A, 0x00000001, 0x00000000);
}

void func_9(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0x00000000, 0x00000000))
		{
			if (iParam2 && Global_181EC.f_12[iParam0])
			{
				if (func_21(iParam0) == 0x00000003 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0x00000000, 0x00000000);
					func_11(iParam0, 0x00000001, 0x00000000);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 0x00000001, 0x00000000);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0x00000000, 0x00000000);
				func_11(iParam0, 0x00000001, 0x00000000);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 0x00000001, 0x00000000);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0x00000000, 0x00000000))
	{
		func_11(iParam0, 0x00000000, 0x00000000);
		func_11(iParam0, 0x00000001, 0x00000000);
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_17() == 0x00000000)
		{
			iVar0 = func_15(func_16(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1407E9;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_13(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

int func_17()
{
	return Global_7830;
}

void func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_17() == 0x00000000)
		{
			iVar0 = func_15(func_16(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_19(int iParam0)
{
	if (Global_181EC.f_12[iParam0])
	{
		func_18(iParam0, 0x0000000A, 0x00000001);
		func_18(iParam0, 0x00000013, 0x00000001);
	}
}

bool func_20(int iParam0)
{
	return func_22(iParam0, 0x00000005, 0x00000001);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
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
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_17() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_15(func_16(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_23()
{
	if (!func_29())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_24();
}

void func_24()
{
	func_26();
	func_25(0x00000000);
}

void func_25(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_26()
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_27();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_27()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_28()
{
	if (!func_29())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_27();
	return unk_0xB165082A56EE6E7F();
}

int func_29()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1406C0)
	{
		if (!func_68())
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000008)
			{
				Global_1806ED[iVar0] = 0x00000000;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(unk_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(0xFFFFFFFF))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000008)
		{
			Global_1806ED[iVar0] = 0x00000000;
			iVar0++;
		}
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Global_1806ED[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar4 = 0x00000000;
	while (iVar4 <= 0x000000FF)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != 0xFFFFFFFF)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 0x00000001);
			}
		}
		iVar4++;
	}
	func_44(func_45(0x0000003B, 0x00000000, 0x00000000), 0x00000000);
	func_40(func_45(0x00000087, 0x00000000, 0x00000000), 0x00000001);
	func_38(func_45(0x00000016, 0x00000000, 0x00000000), func_45(0x00000049, 0x00000000, 0x00000000));
	if (func_68())
	{
		if (func_37(0x0000004D, 0xFFFFFFFF))
		{
			func_36(0x00000001);
			func_35(0x00000001);
		}
	}
	if (func_34() || func_33())
	{
		func_31(0x0000004D, 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (unk_0x8CD06866876216F2())
		{
			func_9(0x0000001C, 0x00000001, 0x00000000);
			func_9(0x0000001D, 0x00000001, 0x00000000);
			func_9(0x0000001E, 0x00000001, 0x00000000);
			func_9(0x0000001F, 0x00000001, 0x00000000);
			func_9(0x00000020, 0x00000001, 0x00000000);
			func_9(0x00000021, 0x00000001, 0x00000000);
			func_9(0x00000022, 0x00000001, 0x00000000);
			func_9(0x00000023, 0x00000001, 0x00000000);
			func_9(0x00000024, 0x00000001, 0x00000000);
			func_9(0x00000025, 0x00000001, 0x00000000);
			func_9(0x00000026, 0x00000001, 0x00000000);
		}
	}
	if (func_45(0x00000015, 0x00000000, 0x00000000))
	{
		unk_0x0F30FBDF741A7E3E(0x00000000);
	}
	Global_EC6CF = 0x00000000;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()
{
	return 0x00000001;
	return 0x00000000;
}

bool func_33()
{
	return Global_140861;
}

bool func_34()
{
	return Global_140863;
}

void func_35(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_9(0x0000001C, bParam0, 0x00000000);
	func_9(0x0000001E, bParam0, 0x00000000);
	func_9(0x0000001F, bParam0, 0x00000000);
	func_9(0x00000021, bParam0, 0x00000000);
	func_9(0x00000022, bParam0, 0x00000000);
	func_9(0x00000026, bParam0, 0x00000000);
}

void func_36(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_9(0x0000001D, bParam0, 0x00000000);
	func_9(0x00000020, bParam0, 0x00000000);
	func_9(0x00000024, bParam0, 0x00000000);
	func_9(0x00000023, bParam0, 0x00000000);
	func_9(0x00000025, bParam0, 0x00000000);
}

int func_37(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_13(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_38(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = 0x00000001;
	if (bParam0)
	{
		bVar0 = 0x00000000;
	}
	func_9(0x00000000, bParam0, 0x00000001);
	func_9(0x00000001, bParam0, 0x00000001);
	func_9(0x00000002, bParam0, 0x00000001);
	func_9(0x00000003, bParam0, 0x00000001);
	func_9(0x00000004, bParam0, 0x00000001);
	func_9(0x00000005, bParam0, 0x00000001);
	func_9(0x00000006, bParam0, 0x00000001);
	func_9(0x00000007, bParam0, bVar0);
	func_9(0x00000008, bParam0, 0x00000001);
	func_9(0x00000009, bParam0, 0x00000001);
	func_9(0x0000000A, bParam0, 0x00000001);
	func_9(0x0000000B, bParam0, 0x00000001);
	func_9(0x0000000C, bParam0, bVar0);
	func_9(0x0000000D, bParam0, 0x00000001);
	func_9(0x00000015, bParam0, 0x00000001);
	func_9(0x0000000E, bParam0, 0x00000001);
	func_9(0x0000000F, bParam0, 0x00000001);
	func_9(0x00000010, bParam0, 0x00000001);
	func_9(0x00000011, bParam0, 0x00000001);
	func_9(0x00000012, bParam0, 0x00000001);
	func_9(0x00000013, bParam0, 0x00000001);
	func_9(0x00000014, bParam0, 0x00000001);
	func_9(0x00000016, bParam0, 0x00000001);
	func_9(0x00000017, bParam0, 0x00000001);
	func_9(0x00000018, bParam0, 0x00000001);
	func_9(0x00000019, bParam0, 0x00000001);
	func_9(0x0000001A, bParam0, 0x00000001);
	func_9(0x0000001B, bParam0, 0x00000001);
	func_39(0x00000001, !bParam1);
	if (!bVar0)
	{
		func_19(0x0000000C);
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_181EC.f_9[iParam0] = 0x00000001;
	}
	else
	{
		Global_181EC.f_9[iParam0] = 0x00000000;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_184(0x00000000);
	if (Global_40001.f_3F == 0x00000001 && func_45(0x00000087, 0x00000000, 0x00000000))
	{
		bParam0 = 0x00000001;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(0x0000002C, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_20(0x0000002C))
		{
			func_19(0x0000002C);
		}
	}
	if (bParam0)
	{
		if (func_41(0x00000000) > 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C7), 0x0000000A);
		}
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (Global_19823F[iParam0 /*8*/] == 0xFFFFFFFF)
	{
		iVar0 = func_15(func_43(iParam0), 0xFFFFFFFF, 0x00000000);
		if (iVar0 == 0xFFFFFFFF)
		{
			func_42(iParam0, 0x00000000);
			iVar0 = 0x00000000;
		}
		Global_19823F[iParam0 /*8*/] = iVar0;
	}
	return Global_19823F[iParam0 /*8*/];
}

void func_42(int iParam0, int iParam1)
{
	Global_19823F[iParam0 /*8*/] = iParam1;
	func_12(func_43(iParam0), iParam1, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000026FA;
		
		default:
	}
	return 0x000026FA;
}

void func_44(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_184(0x00000000);
	func_9(0x00000027, bParam0, 0x00000000);
	func_9(0x00000028, bParam0, 0x00000000);
	func_9(0x00000029, bParam0, 0x00000000);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(0x0000002B, bParam0, 0x00000000);
		func_9(0x0000002A, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_20(0x00000027))
		{
			func_19(0x00000027);
		}
		if (!func_20(0x00000028))
		{
			func_19(0x00000028);
		}
		if (!func_20(0x00000029))
		{
			func_19(0x00000029);
		}
		if (!func_20(0x0000002A))
		{
			func_19(0x0000002A);
		}
		if (!func_20(0x0000002B))
		{
			func_19(0x0000002B);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 0x00000001)
	{
		if (iParam0 == 0x00000043)
		{
			return 0x00000001;
		}
		if (iParam0 == 0x0000004A)
		{
			return 0x00000001;
		}
		if (func_47(unk_0xD803B885F5E47A62(), 0x00000055))
		{
			if (((((iParam0 == 0x00000040 || iParam0 == 0x0000004D) || iParam0 == 0x0000003D) || iParam0 == 0x00000051) || iParam0 == 0x0000003F) || iParam0 == 0x0000003E)
			{
				return 0x00000001;
			}
		}
		if ((((((((((iParam0 == 0x00000042 || iParam0 == 0x00000074) || iParam0 == 0x00000067) || iParam0 == 0x00000068) || iParam0 == 0x00000069) || iParam0 == 0x00000077) || iParam0 == 0x00000058) || iParam0 == 0x0000004B) || iParam0 == 0x0000005F) || iParam0 == 0x00000041) || iParam0 == 0x00000062)
		{
			return 0x00000001;
		}
	}
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000001F)
	{
		if (Global_40001.f_126E == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (func_34() || func_33())
	{
		return 0x00000001;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 0x00000020);
	iVar0 = (iVar0 % 0x00000020);
	if (bParam1)
	{
		if (iParam0 == 0x00000003)
		{
			if (func_46())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (bParam2)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_46()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000017))
	{
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_13(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000017);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_47(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_68())
	{
		return 0x00000000;
	}
	if (func_49())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000056)
	{
		return 0x00000001;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000056:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000002;
		
		case 0x0000001F:
			return 0x00000003;
		
		case 0x00000014:
			return 0x00000004;
		
		case 0x00000012:
			return 0x00000005;
		
		case 0x00000002:
			return 0x00000006;
		
		case 0x0000004C:
			return 0x00000007;
		
		case 0x00000016:
			return 0x00000008;
		
		case 0x00000035:
			return 0x00000009;
		
		case 0x00000022:
			return 0x0000000A;
		
		case 0x00000098:
			return 0x0000000B;
		
		case 0x00000055:
			return 0x0000000C;
		
		case 0x00000054:
			return 0x0000000D;
		
		case 0x00000000:
			return 0x0000000E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000099:
			return 0x00000010;
		
		case 0x00000097:
			return 0x00000011;
		
		case 0x0000000E:
			return 0x00000012;
		
		case 0x0000000F:
			return 0x00000013;
		
		case 0x00000018:
			return 0x00000014;
		
		case 0x0000001E:
			return 0x00000015;
		
		case 0x0000002E:
			return 0x00000016;
		
		case 0x0000002F:
			return 0x00000017;
		
		case 0x00000036:
			return 0x00000018;
		
		case 0x00000033:
			return 0x00000019;
		
		case 0x0000003C:
			return 0x0000001A;
		
		case 0x0000003E:
			return 0x0000001B;
		
		case 0x00000042:
			return 0x0000001C;
		
		case 0x00000045:
			return 0x0000001D;
		
		case 0x0000009A:
			return 0x0000001E;
		
		case 0x00000052:
			return 0x0000001F;
		
		case 0x0000009D:
			return 0x00000020;
		
		default:
	}
	return 0x00000001;
}

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		if (bParam1)
		{
			if (!func_58(0xFFFFFFFF))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(0xFFFFFFFF))
			{
				if (iParam0 == 0x0000001E)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 0x0000003C)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 0x0000001D)
			{
				if (!func_58(0xFFFFFFFF))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 0x00000020);
		iVar0 = (iVar0 % 0x00000020);
		unk_0x5D96D8530B3D0904(&(Global_1806ED[iVar1]), iVar0);
	}
}

int func_51()
{
	int iVar0;
	
	if (func_54(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_13(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
	{
		func_52(0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
		{
			func_53(unk_0xD803B885F5E47A62(), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
	}
}

void func_53(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	unk_0x5D96D8530B3D0904(&(Global_184507[iParam0 /*876*/].f_2DA), iVar1);
}

bool func_54(int iParam0)
{
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000019);
}

int func_55()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_13(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000006);
		}
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_56()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000007);
}

int func_57()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	return func_37(0x00000079, 0xFFFFFFFF);
}

bool func_58(int iParam0)
{
	return func_37(0x0000007B, iParam0);
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000017:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001E:
		case 0x00000008:
		case 0x00000020:
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000014:
		case 0x0000001B:
		case 0x0000001D:
		case 0x00000013:
		case 0x0000001F:
		case 0x0000003B:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000043:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x00000051:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005D:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x00000077:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
		case 0x00000080:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x0000009C:
		case 0x00000088:
		case 0x0000008A:
		case 0x00000089:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000094:
		case 0x00000087:
		case 0x00000082:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 0x00000020);
			iVar0 = func_15(func_60(iParam0), 0xFFFFFFFF, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iVar1))
			{
				return 0x00000001;
			}
			break;
		
		default:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 0x00000020);
	switch (iVar0)
	{
		case 0x00000000:
			return 0x000004B0;
		
		case 0x00000001:
			return 0x000004B1;
		
		case 0x00000002:
			return 0x000004B2;
		
		case 0x00000003:
			return 0x000004B3;
		
		case 0x00000004:
			return 0x000004B4;
		
		case 0x00000005:
			return 0x000004B6;
		
		case 0x00000006:
			return 0x00000EE7;
		
		case 0x00000007:
			return 0x00000FB2;
		
		case 0x00000008:
			return 0x00001560;
		
		default:
	}
	return 0x000004B0;
}

int func_61(int iParam0)
{
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000010:
		case 0x00000001:
		case 0x00000002:
		case 0x0000001C:
			return 0x00000001;
		
		case 0x00000015:
			return 0x00000002;
		
		case 0x00000016:
		case 0x00000012:
		case 0x00000011:
		case 0x00000049:
		case 0x0000001E:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000004C:
		case 0x0000000D:
		case 0x0000005A:
		case 0x00000000:
		case 0x00000063:
		case 0x00000005:
		case 0x00000020:
		case 0x0000007D:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000089:
		case 0x00000094:
		case 0x00000087:
		case 0x000000EC:
		case 0x00000096:
			if (!func_58(0xFFFFFFFF))
			{
				return 0x00000003;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
		case 0x00000066:
		case 0x0000006E:
		case 0x0000009C:
			return 0x00000005;
		
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000007A:
			return 0x00000006;
		
		case 0x00000061:
		case 0x0000006B:
			return 0x00000007;
		
		case 0x00000004:
			return 0x00000008;
		
		case 0x00000013:
			return 0x00000008;
		
		case 0x0000001D:
			return 0x0000000A;
		
		case 0x00000008:
			return 0x0000000B;
		
		case 0x0000003D:
		case 0x00000077:
		case 0x00000079:
		case 0x00000060:
		case 0x00000080:
			return 0x0000000C;
		
		case 0x00000059:
			return 0x0000000D;
		
		case 0x0000001F:
			return 0x0000000E;
		
		case 0x00000003:
		case 0x00000067:
		case 0x0000007C:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
			return 0x0000000F;
		
		case 0x0000006D:
		case 0x00000058:
			return 0x00000010;
		
		case 0x0000004A:
		case 0x00000064:
			return 0x00000011;
		
		case 0x00000006:
			return 0x00000012;
		
		case 0x00000014:
			return 0x00000013;
		
		case 0x0000003E:
		case 0x0000006C:
		case 0x00000082:
			return 0x00000014;
		
		case 0x00000041:
		case 0x0000005D:
			return 0x00000015;
		
		case 0x0000003F:
		case 0x00000068:
			return 0x00000019;
		
		case 0x0000004D:
		case 0x0000006A:
			return 0x0000001E;
		
		case 0x00000051:
		case 0x00000062:
			return 0x00000023;
		
		case 0x0000004B:
		case 0x0000005F:
			return 0x00000028;
		
		case 0x00000069:
			return 0x0000002D;
			break;
		
		case 0x00000043:
		case 0x00000040:
			return 0x00000032;
	}
	return 0xFFFFFFFF;
}

int func_62(int iParam0)
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	return func_37(0x00000077, iParam0);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0x00000000);
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_13(0xFFFFFFFF)];
			}
			else if (func_67(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_13(0xFFFFFFFF)];
	}
	return 0x00000000;
}

int func_67(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_68()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	return func_37(0x00000078, 0xFFFFFFFF);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000012);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000012);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000027:
			func_73(0x00000027, bParam1);
			break;
		
		case 0x00000028:
			func_73(0x00000028, bParam1);
			break;
		
		case 0x00000029:
			func_73(0x00000029, bParam1);
			break;
		
		case 0x0000002A:
			func_73(0x0000002A, bParam1);
			break;
		
		case 0x0000002B:
			func_73(0x0000002B, bParam1);
			break;
		
		case 0x0000002C:
			func_73(0x0000002C, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0x00000008, 0x00000000))
		{
			func_18(iParam0, 0x00000008, 0x00000000);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0x00000008, 0x00000000))
	{
		func_11(iParam0, 0x00000008, 0x00000000);
		func_10(iParam0);
	}
}

void func_74()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	switch (vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000005))
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
							{
								unk_0x0674E58A79778E99(&iLocal_140, 0x0000000A);
							}
							if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000007))
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000007);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000008))
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000008);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x0000000B))
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x0000000B);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000002))
								{
									if (iLocal_139 != 0xFFFFFFFF)
									{
										func_72(iLocal_139, 0x00000000);
										func_71(iLocal_139, 0x00000000);
										iLocal_139 = 0xFFFFFFFF;
									}
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
									func_180("FM_CTUT_CAR", 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000002);
								}
							}
							else
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000002))
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000002);
								}
								iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
								if ((!func_152(iVar0, 0x00000000, &uVar1) || !func_151(iVar0)) || func_150(unk_0x134B62B726CEC8E6(iVar0)))
								{
									if (func_149())
									{
										func_148(0x00000000);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
									{
										unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000007))
									{
										func_180("FM_CTUT_ANO", 0x00000000);
										unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000007);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000008))
									{
										if (func_143())
										{
											if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
											{
												if (iLocal_148 > 0x00000000)
												{
													if (func_150(unk_0x134B62B726CEC8E6(iVar0)))
													{
														func_142("FM_CTUT_PRM", 0xFFFFFFFF);
														unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000008);
														unk_0x5D96D8530B3D0904(&iLocal_140, 0x0000000B);
														func_7(&uLocal_145, 0x00000000, 0x00000000);
													}
													else if (!func_151(iVar0))
													{
														unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000008);
														func_142("FM_CTUT_DRI", 0xFFFFFFFF);
													}
													else if (!func_152(iVar0, 0x00000000, &uVar1))
													{
														unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000008);
														func_142("FM_CTUT_HMD", 0xFFFFFFFF);
													}
												}
											}
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x0000000B))
									{
										if (func_141(&uLocal_145, 0x00007530, 0x00000000))
										{
											if (func_150(unk_0x134B62B726CEC8E6(iVar0)))
											{
												if (func_143())
												{
													func_142("FM_CTUT_PRM", 0xFFFFFFFF);
													func_140(&uLocal_145);
													func_7(&uLocal_145, 0x00000000, 0x00000000);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000007))
									{
										unk_0x0674E58A79778E99(&iLocal_140, 0x00000007);
									}
									if (!func_149())
									{
										func_148(0x00000001);
									}
									if (func_139("FM_CTUT_HMD"))
									{
										unk_0xA37A90C62806D848(0x00000001);
									}
									if (!func_138() || (func_138() && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
										{
											func_180("FM_CTUT_MOD", 0x00000000);
											unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000003);
											func_140(&uLocal_141);
											func_7(&uLocal_141, 0x00000000, 0x00000000);
											if (!func_137(unk_0xD803B885F5E47A62()))
											{
												func_69(0x00000001);
											}
											if (iLocal_139 == 0xFFFFFFFF)
											{
												iLocal_139 = func_121(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000004, 0xFFFFFFFF);
												if (iLocal_139 != 0xFFFFFFFF)
												{
													func_72(iLocal_139, 0x00000001);
													func_71(iLocal_139, 0x00000001);
												}
											}
										}
									}
									else if (func_138() && !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
										{
											unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000003);
										}
									}
								}
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000004))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
								{
									if (func_141(&uLocal_141, 0x00002710, 0x00000000))
									{
										if (!unk_0x798A3F1296751F46())
										{
											if (!func_120())
											{
												if (func_143())
												{
													unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000004);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x0000000A))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000009))
								{
									func_180("FM_IHELP_LCP", 0x00000000);
									if (iLocal_139 != 0xFFFFFFFF)
									{
										func_72(iLocal_139, 0x00000000);
										func_71(iLocal_139, 0x00000000);
										iLocal_139 = 0xFFFFFFFF;
									}
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000002);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000007);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000008);
									unk_0x5D96D8530B3D0904(&iLocal_140, 0x0000000A);
								}
							}
							if (func_149())
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
										if ((!func_152(iVar0, 0x00000000, &uVar2) || !func_151(iVar0)) || func_150(unk_0x134B62B726CEC8E6(iVar0)))
										{
											func_148(0x00000000);
										}
									}
									else
									{
										func_148(0x00000000);
									}
								}
							}
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003) || (func_138() && unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x0000000A)))
					{
						if (func_138())
						{
							if (((func_139("FM_IHELP_CAR") || func_139("FM_IHELP_MOD")) || func_139("FM_CMOD_GPS")) || func_139("FM_CMOD_STOL"))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (func_117("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000009))
							{
								if (func_115())
								{
									unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000009);
									unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C1), 0x00000019);
									if (func_117("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_114())
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C1, 0x00000019))
								{
									unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C1), 0x00000019);
								}
								if (!func_113(unk_0xD803B885F5E47A62()))
								{
									if (!func_112(unk_0xD803B885F5E47A62()))
									{
										func_111(0x00000001);
										iLocal_147 = 0x00000001;
										func_30(0x00000001);
									}
								}
								if ((func_117("FM_CTUT_RSP") || func_117("FM_IHELP_PTRK")) || func_117("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000009))
							{
								if (func_110(unk_0xD803B885F5E47A62()) || (!func_108() && func_107()))
								{
									iVar3 = func_104(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
									if (iVar3 > 0x00000000)
									{
										if (!func_117("FM_CTUT_REP"))
										{
											func_180("FM_CTUT_REP", 0x00000000);
										}
									}
									else if (!func_102())
									{
										if (!func_117("FM_CTUT_RSP"))
										{
											func_180("FM_CTUT_RSP", 0x00000000);
										}
									}
									else if (!func_100())
									{
										if (!func_117("FM_IHELP_PTRK"))
										{
											func_180("FM_IHELP_PTRK", 0x00000000);
										}
									}
									else if (!func_97())
									{
										if (!func_117("FM_IHELP_PINS"))
										{
											func_180("FM_IHELP_PINS", 0x00000000);
										}
									}
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000009))
						{
							if (!func_114())
							{
								if (unk_0x0F1CCD77290EE12F())
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000009);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
									unk_0x0674E58A79778E99(&iLocal_140, 0x0000000A);
									func_23();
									iLocal_139 = 0xFFFFFFFF;
									func_85(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
							}
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000009))
					{
						unk_0x0674E58A79778E99(&iLocal_140, 0x00000009);
						unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
						unk_0x0674E58A79778E99(&iLocal_140, 0x0000000A);
						func_23();
						iLocal_139 = 0xFFFFFFFF;
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000005))
					{
						if (((func_82(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_81()) || func_80() > 0x00000000) || (!func_78() && !func_138()))
						{
							unk_0x5D96D8530B3D0904(&iLocal_140, 0x00000005);
							func_23();
						}
					}
					else if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || func_138())
					{
						if (unk_0x0F1CCD77290EE12F())
						{
							if ((((!func_82(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_81()) && func_80() == 0x00000000) && func_78()) || func_138())
							{
								if (!func_77(&uLocal_143))
								{
									func_7(&uLocal_143, 0x00000000, 0x00000000);
								}
								else if (func_141(&uLocal_143, 0x00001B58, 0x00000000) || func_138())
								{
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000005);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000002);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000003);
									unk_0x0674E58A79778E99(&iLocal_140, 0x00000007);
									unk_0x0674E58A79778E99(&iLocal_140, 0x0000000A);
									func_140(&uLocal_143);
									if (iLocal_139 != 0xFFFFFFFF)
									{
										func_72(iLocal_139, 0x00000000);
										func_71(iLocal_139, 0x00000000);
										iLocal_139 = 0xFFFFFFFF;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000001))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
	{
		return;
	}
	if (func_138())
	{
		return;
	}
	switch (iLocal_148)
	{
		case 0x00000000:
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_142("FM_IHELP_CAR", 0xFFFFFFFF);
				iLocal_148++;
			}
			break;
		
		case 0x00000001:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_142("FM_IHELP_MOD", 0xFFFFFFFF);
					iLocal_148++;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (!func_77(&uLocal_149))
							{
								func_7(&uLocal_149, 0x00000000, 0x00000000);
							}
							else if (func_141(&uLocal_149, 0x000003E8, 0x00000000))
							{
								func_142("FM_CMOD_GPS", 0xFFFFFFFF);
								iLocal_148++;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0x00000000, 0x00000000);
					}
					else if (func_141(&uLocal_149, 0x000003E8, 0x00000000))
					{
						func_142("FM_CMOD_STOL", 0xFFFFFFFF);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0x00000000, 0x00000000);
					}
					else if (func_141(&uLocal_149, 0x00001388, 0x00000000))
					{
						func_142("FM_IHELP_BLP", 0xFFFFFFFF);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_140, 0x00000003))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					iLocal_148++;
				}
			}
			break;
	}
}

int func_76()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_138[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

int func_78()
{
	if (func_79() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_79()
{
	return Global_1406D3.f_12;
}

int func_80()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C5;
}

bool func_81()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_83(iParam0))
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

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_96())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_78())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_94(unk_0xD803B885F5E47A62(), 0x00000000) && !func_93()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_90(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_89(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_88();
					func_87();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_89(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_86(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_87()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_88()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (iParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (iParam0 == 0x00000001)
			{
				func_92();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_94(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_91(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 0x00000001);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

bool func_93()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_95(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_14();
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

int func_96()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_97()
{
	if (Global_181EC.f_58F)
	{
		return 0x00000001;
	}
	if (func_98() >= 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_14325F[func_98() /*141*/].f_66, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_98()
{
	if (Global_200000[func_99() /*10930*/].f_181E.f_2 >= 0x00000133)
	{
		Global_200000[func_99() /*10930*/].f_181E.f_2 = 0xFFFFFFFF;
		return 0xFFFFFFFF;
	}
	return Global_200000[func_99() /*10930*/].f_181E.f_2;
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_100()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_101(iVar0, 0x00000001) || Global_181EC.f_58E)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_101(int iParam0, bool bParam1)
{
	if (Global_12B4E)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0x00000000)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_102()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_103(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_103(int iParam0)
{
	return unk_0x30F813723591D02E(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0xA471721ED5268046(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 0x00000008;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 0x00000004;
	}
	fVar3 = (unk_0x6EE94F60DA2A2273(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 0x00000014;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 0x00000028;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 0x00000050;
	}
	else
	{
		iVar5 = 0x00000064;
	}
	fVar3 = (unk_0xD96C5EC6FCB061BA(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 0x00000014;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 0x00000028;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 0x0000003C;
	}
	else
	{
		iVar6 = 0x0000004B;
	}
	fVar3 = (SYSTEM::TO_FLOAT(unk_0x7F6DC62EA9922664(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 0x00000028;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 0x00000050;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 0x00000096;
	}
	else
	{
		iVar8 = 0x000000C8;
	}
	if (unk_0xAFB99709A487B3A4(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0x00000001))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 0x00000001))
	{
		iVar8 += 25;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0x00000000))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 0x00000000))
	{
		iVar8 += 25;
	}
	if (!unk_0xB8BCFE7E6CA4F9ED(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 0x00000006))
		{
			iVar10 += 40;
		}
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 0x00000007))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0x00000000;
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000000))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000001))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000002))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000003))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000004))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000005))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xE347785EEDFB544D(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x25D57666028A7E5A(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000008)
	{
		if (unk_0x464B3D84B739AE72(iParam0, iVar2, 0x00000000))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xA081CDBBF4F02A19(iParam0))
	{
		iVar11 = 0x00000032;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_106(unk_0x134B62B726CEC8E6(iParam0), 0x00000000))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2D1F));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2D1F)))
		{
			iVar4 = Global_40001.f_2D1D;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2D1E)
		{
			iVar0 = Global_40001.f_2D1E;
		}
	}
	else if (func_105(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2D22));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2D22)))
		{
			iVar4 = Global_40001.f_2D20;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2D21)
		{
			iVar0 = Global_40001.f_2D21;
		}
	}
	else
	{
		if (iVar0 > 0x00000000)
		{
			iVar4 = 0x00000032;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 0x000004E2)
		{
			iVar0 = 0x000004E2;
		}
	}
	return iVar0;
}

int func_105(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_107()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_108()
{
	if (((((func_109(0x00000027) || func_109(0x00000028)) || func_109(0x00000029)) || func_109(0x0000002A)) || func_109(0x0000002B)) || func_109(0x0000002C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_109(int iParam0)
{
	return func_22(iParam0, 0x00000014, 0x00000001);
}

bool func_110(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_92, 0x00000013);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000014);
	}
}

bool func_112(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_92, 0x00000014);
}

bool func_113(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_92, 0x00000015);
}

int func_114()
{
	if (!func_100())
	{
		return 0x00000000;
	}
	if (!func_97())
	{
		return 0x00000000;
	}
	if (!func_102())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_115()
{
	if (((((func_116(0x00000027) || func_116(0x00000028)) || func_116(0x00000029)) || func_116(0x0000002A)) || func_116(0x0000002B)) || func_116(0x0000002C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_116(int iParam0)
{
	return func_22(iParam0, 0x00000006, 0x00000001);
}

int func_117(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (!func_29())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 0x0000003F)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	return func_118(sParam0);
}

bool func_118(char* sParam0)
{
	if (!func_29())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_119(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_119(char* sParam0)
{
	if (!func_29())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

bool func_120()
{
	return Global_14086D;
}

int func_121(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_136(iVar4))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_122(iVar0, 0x00000000), 0x00000001);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_122(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_133(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_132())
			{
				if (func_131(Global_184466))
				{
					return func_124(0x00000002, 0x00000002);
				}
				else if (func_123(Global_184466))
				{
					return func_124(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_123(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_124(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_132())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_125(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_125(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_125(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_125(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_130(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_130(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_128(iParam0) };
	}
	else
	{
		Var2 = { func_127(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_126(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_126(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_126(vector3 vParam0, float fParam1)
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

struct<6> func_127(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_128(int iParam0)
{
	return func_129(iParam0);
}

struct<6> func_129(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_131(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_132()
{
	return 0xFFFFFFFF;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_134() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_134()
{
	return func_135(unk_0xD803B885F5E47A62());
}

int func_135(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

bool func_136(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000027:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000027]);
			break;
		
		case 0x00000028:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000028]);
			break;
		
		case 0x00000029:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000029]);
			break;
		
		case 0x0000002A:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002A]);
			break;
		
		case 0x0000002B:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002B]);
			break;
		
		case 0x0000002C:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002C]);
			break;
	}
	return bVar0;
}

bool func_137(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_92, 0x00000012);
}

int func_138()
{
	if (((((func_20(0x00000027) || func_20(0x00000028)) || func_20(0x00000029)) || func_20(0x0000002A)) || func_20(0x0000002B)) || func_20(0x0000002C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_139(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_140(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_141(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_7(uParam0, bParam2, 0x00000000);
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

void func_142(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_143()
{
	if (((((((((((((!func_4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_147(0x00000008, 0xFFFFFFFF)) || func_147(0x0000000F, 0xFFFFFFFF)) || func_146()) || func_147(0x00000003, 0xFFFFFFFF)) || unk_0xFEBC1E4EC9E001F0()) || func_82(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) || func_81()) || func_107()) || func_145()) || func_144()) || unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_144()
{
	return Global_2537E2.f_BE7.f_242;
}

bool func_145()
{
	return Global_181EC.f_15A > 0x00000000;
}

var func_146()
{
	return Global_248AB9;
}

bool func_147(int iParam0, int iParam1)
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

void func_148(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C4), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C4), 0x00000004);
	}
}

bool func_149()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C4, 0x00000004);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case 0x4992196C:
		case 0xAC33179C:
		case 0x2AE524A8:
		case 0xC575DF11:
		case 0x097E5533:
		case 0x7397224C:
		case 0x0D4E5F4D:
		case 0x19DD9ED1:
		case 0x59A9E570:
		case 0x36B4A8A9:
		case 0x2189D250:
		case 0xFE141DA6:
		case 0x711D4738:
		case 0x8FD54EBB:
		case 0x8D4B7A8A:
		case 0x50D4D19F:
		case 0x34B82784:
		case 0xB7D9F7F1:
		case 0x52FF9437:
		case 0x7A2EF5E4:
		case 0x6DBD6C0A:
		case 0xC4810400:
		case 0xB5EF4C33:
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x586765FB:
		case 0x34DBA661:
		case 0x9B16A3B4:
		case 0xD6BC7523:
		case 0xAA6F980A:
		case 0x46699F47:
		case 0x58CDAF30:
		case 0xF34DFB25:
		case 0x1AAD0DED:
		case 0x5D1903F9:
		case 0x91CA96EE:
		case 0x67D2B389:
		case 0x41D149AA:
		case 0x6F946279:
		case 0x5097F589:
		case 0xED552C74:
		case 0x8408F33A:
		case 0x23CA25F2:
		case 0xE78CC3D9:
		case 0x33B98FE2:
		case 0xA4D99B7D:
		case 0x35DED0DD:
		case 0xA4A4E453:
		case 0x00E83C17:
		case 0x276D98A3:
		case 0x3201DD49:
		case 0xE8A8BA94:
		case 0xF8C2E0E7:
		case 0x71CBEA98:
		case 0x6068AD86:
		case 0xB472D2B5:
		case 0x378236E1:
		case 0x3E5BD8D9:
		case 0xB4F32118:
		case 0x42836BE5:
		case 0x3D7C6410:
		case 0xE99011C2:
		case 0xC52C6B93:
		case 0xBC5DC07E:
		case 0x8198AEDC:
		case 0xF330CB6A:
		case 0xC514AAE0:
		case 0x4ABEBF23:
		case 0xD4AE63D9:
		case 0x73F4110E:
		case 0x6290F15B:
		case 0x0D17099D:
		case 0x7B54A9D3:
		case 0xD9F0503D:
		case 0xFCC2F483:
		case 0x79DD18AE:
		case 0xE6E967F8:
		case 0x1324E960:
		case 0x1DD4C0FF:
		case 0x897AFC65:
		case 0x64DE07A1:
		case 0x149BD32A:
		case 0xEDA4ED97:
		case 0xA29F78B0:
		case 0x5EE005DA:
		case 0x4C3FFF49:
		case 0x83070B62:
		case 0xBBA2A2F7:
		case 0xE1C03AB0:
		case 0xBA5334AC:
		case 0xFD128DFD:
		case 0x56D42971:
		case 0x669EB40A:
		case 0x3C26BD0C:
		case 0x27D79225:
		case 0xD039510B:
		case 0xD6FB0F30:
		case 0x1A861243:
		case 0x256E92BA:
		case 0xEC3E3404:
		case 0xFE5F0722:
		case 0x8526E2F5:
		case 0x7F81A829:
		case 0x619C1B82:
		case 0xD2F77E37:
		case 0xAE12C99C:
		case 0x93F09558:
		case 0x8D45DF49:
		case 0x8F49AE28:
		case 0x9B065C9E:
		case 0x163F8520:
		case 0x5BA0FF1E:
		case 0x32174AFC:
		case 0x5BEB3CE0:
		case 0x287FA449:
		case 0xAE0A3D4F:
		case 0xBE11EFC6:
		case 0x9804F4C7:
		case 0x798682A2:
		case 0x8644331A:
		case 0x67D52852:
		case 0x49E25BA1:
		case 0xD556917C:
		case 0xDD71BFEB:
		case 0x71D3B6F0:
		case 0xB2E046FB:
		case 0xA7DCC35C:
		case 0xEEF345EC:
		case 0x20314B42:
		case 0xAF966F3C:
		case 0x28EAB80F:
		case 0x127E90D5:
		case 0x2B0C4DCD:
		case 0x734C5E50:
		case 0xEA6A047F:
		case 0x6E8DA4F7:
		case 0xD86A0247:
		case 0xC7E55211:
		case 0xCB642637:
		case 0x9F6ED5A2:
		case 0x92F5024E:
		case 0xECA6B6A3:
		case 0x3E3D1F59:
		case 0x6F039A67:
		case 0xD757D97D:
		case 0x4EE74355:
		case 0x9472CD24:
		case 0x36A167E0:
		case 0xE550775B:
		case 0x546D8EEE:
		case 0xF38C4245:
		case 0x42ACA95F:
		case 0x18619B7E:
		case 0x1446590A:
		case 0xBC7C0A00:
		case 0xCE44C4B9:
		case 0x665F785D:
		case 0x04F48FC4:
		case 0x3ADB9758:
		case 0x6B73A9BE:
		case 0x4C8DBA51:
		case 0x56CDEE7D:
		case 0x97553C28:
		case 0x3404691C:
		case 0x177DA45C:
		case 0x185E2FF3:
		case 0x2C1FEA99:
		case 0x11F58A5A:
		case 0x79178F0A:
		case 0x8B213907:
		case 0x64F49967:
		case 0x3944D5A0:
		case 0x817AFAAD:
		case 0x82E47E85:
		case 0x7F3415E3:
		case 0x0409D787:
		case 0x4201A843:
		case 0xC98BBAD6:
		case 0xDA5EC7DA:
		case 0xCE0B9F22:
		case 0x94114926:
		case 0xAF0B8D48:
		case 0x58F77553:
		case 0x4669D038:
		case 0x98F65A5E:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (iVar0 == unk_0x16F2683693E537C9())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_152(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0x00000000;
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if ((!func_178(iVar0, bParam1, uParam2) && !func_177(unk_0xD803B885F5E47A62())) && !func_161(iParam0))
	{
		return 0x00000000;
	}
	if (func_177(unk_0xD803B885F5E47A62()))
	{
		if (func_160(iVar0))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	bVar1 = 0x00000000;
	if (func_159(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iVar0) || unk_0xC41A9202669A24C4(iVar0)))
	{
		bVar1 = 0x00000001;
	}
	if (((unk_0x56E1CD81AE700E98(iParam0) && !func_157(iParam0)) && !bVar1) && !(func_156(unk_0x134B62B726CEC8E6(iParam0)) && func_154(unk_0xD803B885F5E47A62())))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case 0xD039510B:
			case 0x287FA449:
			case 0x71D3B6F0:
			case 0x669EB40A:
			case 0x32174AFC:
			case 0xD556917C:
				*uParam2 = 0x00000010;
				break;
			
			default:
				*uParam2 = 0x00000002;
				break;
		}
		return 0x00000000;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if ((func_153(iParam0) && unk_0x134B62B726CEC8E6(iParam0) != joaat("sentinel2")) && unk_0x134B62B726CEC8E6(iParam0) != joaat("issi2"))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_154(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
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
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

int func_156(int iParam0)
{
	if (((iParam0 == 0x73F4110E || iParam0 == 0x6290F15B) || iParam0 == 0x0D17099D) || iParam0 == 0x897AFC65)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_157(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 0xFE141DA6:
		case 0x0A90ED5C:
		case 0x171C92C4:
		case 0x5993F939:
		case 0x8FD54EBB:
		case 0x27D79225:
		case 0xBBA2A2F7:
		case 0x5BEB3CE0:
		case 0xDD71BFEB:
		case 0x9B065C9E:
		case 0x8644331A:
			return 0x00000001;
			break;
		
		case 0xD039510B:
		case 0x287FA449:
		case 0x71D3B6F0:
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (func_158(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
		
		case 0xB53C6C52:
		case joaat("burrito2"):
			return 0x00000001;
	}
	return 0x00000000;
}

int func_158(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_159(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0x81BD2ED0:
		case 0x58CDAF30:
		case 0x9B16A3B4:
		case 0xD6BC7523:
		case 0xAA6F980A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_161(int iParam0)
{
	if (func_176(unk_0xD803B885F5E47A62()) || func_175(unk_0xD803B885F5E47A62()))
	{
		if (func_162(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_162(int iParam0)
{
	if ((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_165(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
	{
		if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
		{
			if (func_163(iParam0))
			{
				return 0x00000001;
			}
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case 0x097E5533:
				case 0x19DD9ED1:
				case 0x586765FB:
				case 0x34DBA661:
				case 0x5D1903F9:
				case 0xE78CC3D9:
				case 0x35DED0DD:
				case 0xE8A8BA94:
				case 0x4ABEBF23:
				case 0x546D8EEE:
					return 0x00000001;
					break;
				}
			}
	}
	return 0x00000000;
}

int func_163(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_164(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0x2189D250:
		case 0x711D4738:
		case 0xFE141DA6:
		case 0x34B82784:
		case 0xB7D9F7F1:
		case 0x50D4D19F:
		case 0x8D4B7A8A:
		case 0xB5EF4C33:
		case 0xF34DFB25:
		case 0x79DD18AE:
		case 0xD9F0503D:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_165(int iParam0, bool bParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_167(unk_0x134B62B726CEC8E6(iParam0), 0x00000000))
			{
				if (Global_26B66F.f_12D == iParam0)
				{
					return 0x00000001;
				}
				else if (func_166(iParam0) != 0xFFFFFFFF && !bParam1)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (Global_2537E2.f_274[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000000)
	{
		if (func_106(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_174();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_378B)
			{
				return func_173();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_378C)
			{
				return func_173();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_378A)
			{
				return func_173();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_378D)
			{
				return func_173();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_378F)
			{
				return func_173();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_172();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_48ED)
			{
				return func_171();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_48EF)
			{
				return func_171();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_48F3)
			{
				return func_171();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_48F0)
			{
				return func_171();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_48F7)
			{
				return func_171();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_48F5)
			{
				return func_171();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_48FA)
			{
				return func_171();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_5091)
			{
				return func_170();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_5092)
			{
				return func_170();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_169();
			break;
		
		case joaat("glendale"):
			if (func_169() || func_168())
			{
				return 0x00000001;
			}
			break;
		
		case 0x83070B62:
			return func_169();
			break;
		
		case 0x378236E1:
			return func_169();
			break;
		
		case joaat("gargoyle"):
			return func_169();
			break;
		
		case joaat("dominator"):
			return func_169();
			break;
		
		case joaat("dominator2"):
			return func_169();
			break;
		
		case 0x1A861243:
			return func_169();
			break;
		
		case 0x619C1B82:
			return func_169();
			break;
		
		case 0xD2F77E37:
			return func_169();
			break;
		
		case 0xFE5F0722:
			return func_169();
			break;
		
		case 0x93F09558:
			return func_169();
			break;
		
		case 0xAE12C99C:
			return func_169();
			break;
		
		case 0x3C26BD0C:
		case 0x7F81A829:
		case 0x27D79225:
		case 0x8526E2F5:
		case 0x256E92BA:
		case 0x669EB40A:
		case 0xBBA2A2F7:
		case 0xD039510B:
		case 0xD6FB0F30:
		case 0x20314B42:
		case 0x8D45DF49:
		case 0x8F49AE28:
		case 0x9B065C9E:
		case 0x163F8520:
		case 0x5BA0FF1E:
		case 0x32174AFC:
		case 0x5BEB3CE0:
		case 0x287FA449:
		case 0xAE0A3D4F:
		case 0xBE11EFC6:
		case 0x9804F4C7:
		case 0x798682A2:
		case 0x8644331A:
		case 0x67D52852:
		case 0x49E25BA1:
		case 0xD556917C:
		case 0xDD71BFEB:
		case 0x71D3B6F0:
		case 0xB2E046FB:
		case 0xA7DCC35C:
			return func_169();
			break;
		
		case joaat("youga2"):
			if (Global_40001.f_6F6C)
			{
				return func_168();
			}
			break;
		
		case 0x2B0C4DCD:
			if (Global_40001.f_70CA)
			{
				return func_168();
			}
			break;
		
		case joaat("manana"):
			if (Global_40001.f_6F6B)
			{
				return func_168();
			}
			break;
		
		case joaat("peyote"):
			if (Global_40001.f_70C9)
			{
				return func_168();
			}
			break;
		
		case 0x6F946279:
			if (Global_40001.f_70C8)
			{
				return func_168();
			}
			break;
	}
	return 0x00000000;
}

bool func_168()
{
	return unk_0xC146D5FBD23C6954(0x6C3AC5A8);
}

bool func_169()
{
	return unk_0xC146D5FBD23C6954(0x72DE9A30);
}

bool func_170()
{
	return unk_0xC146D5FBD23C6954(0x7B367103);
}

bool func_171()
{
	return unk_0xC146D5FBD23C6954(0xC6F11B25);
}

bool func_172()
{
	return unk_0xC146D5FBD23C6954(0x0C8638BD);
}

bool func_173()
{
	return unk_0xC146D5FBD23C6954(0x8F13E1D8);
}

bool func_174()
{
	return unk_0xC146D5FBD23C6954(0x61322A35);
}

int func_175(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_132())
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_176(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_132())
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_177(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_155(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_178(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 0x00000001;
			return 0x00000000;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 0x73920F8E) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	bVar0 = 0x00000000;
	if (func_159(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0)))
	{
		bVar0 = 0x00000001;
	}
	if ((((((((((((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 0x5993F939) && iParam0 != 0x8FD54EBB) && iParam0 != 0x36A167E0) && iParam0 != 0x11F58A5A) && !bVar0)
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_179(iParam0))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 0x00000002;
		}
	}
	return 0x00000001;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_180(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_118(sParam0))
	{
		return;
	}
	func_24();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_183()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

int func_184(bool bParam0)
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_34())
	{
		return 0x00000001;
	}
	if (func_33())
	{
		return 0x00000001;
	}
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6BE, 0x0000001A))
		{
			iVar0 = func_15(0x000004A7, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000017))
			{
				return 0x00000000;
			}
		}
	}
	return func_37(0x0000007A, 0xFFFFFFFF);
}

int func_185()
{
	return vLocal_61.x;
}

int func_186(int iParam0)
{
	return vLocal_138[iParam0 /*3*/];
}

void func_187()
{
	func_23();
	func_70(0x0000000A, 0x00000000);
	if (func_55())
	{
		func_189();
	}
	if (iLocal_139 != 0xFFFFFFFF)
	{
		func_72(iLocal_139, 0x00000000);
		func_71(iLocal_139, 0x00000000);
	}
	if (!func_184(0x00000000))
	{
		if (func_112(unk_0xD803B885F5E47A62()) || iLocal_147)
		{
			func_31(0x0000007A, 0x00000001, 0xFFFFFFFF, 0x00000001);
		}
	}
	func_69(0x00000000);
	func_188();
}

void func_188()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_189()
{
	if (!func_196(0x00000001, 0xFFFFFFFF))
	{
		func_194(0x00000001, 0xFFFFFFFF);
	}
	if (func_120() && func_17() == 0x00000000)
	{
	}
	else
	{
		unk_0x45019D71A0DF8B62(0x00000000);
	}
	if (func_193(0x00000001))
	{
		unk_0xED41266DE64A57FD(0x00000001);
	}
	else
	{
		unk_0xED41266DE64A57FD(0x00000000);
	}
	Global_2564C8.f_283 = 0x00000000;
	if (func_190())
	{
		if (!func_37(0x00000085, 0xFFFFFFFF))
		{
			func_31(0x00000085, 0x00000001, 0xFFFFFFFF, 0x00000001);
		}
	}
}

int func_190()
{
	if (func_192() && func_191(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_191(int iParam0)
{
	return Global_140676[iParam0];
}

var func_192()
{
	return func_191(func_14() + 1);
}

bool func_193(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_3;
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_14();
	}
	Global_152D85 = 0x00000000;
	if (unk_0xE0DC536BD2AC0301() == 0x00000000)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			iVar1 = func_195(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			break;
		
		default:
			iVar1 = func_195(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_31(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_31(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_31(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_31(0x00000077, 0x00000000, iParam1, 0x00000001);
			func_31(0x00000079, 0x00000000, iParam1, 0x00000001);
			func_31(0x0000007A, 0x00000000, iParam1, 0x00000001);
			func_31(0x0000007D, 0x00000000, iParam1, 0x00000001);
			func_12(0x00000517, 0x00000000, iParam1, 0x00000001, 0x00000000);
			func_12(0x00001C41, 0x00000000, iParam1, 0x00000001, 0x00000000);
			break;
	}
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_14();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000392;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000393;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000394;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000395;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000396;
			break;
	}
	return iVar0;
}

bool func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_14();
	}
	iVar0 = func_195(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

int func_197()
{
	var uVar0;
	
	func_204(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_203())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_202())
	{
		return 0x00000001;
	}
	if (func_201(0x0000009F))
	{
		if (!func_200())
		{
			return 0x00000001;
		}
	}
	if (func_201(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_198() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_198()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_198()
{
	switch (func_17())
	{
		case 0x00000000:
			return func_199();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_199()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_200()
{
	return Global_2564C8.f_256;
}

int func_201(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_202()
{
	return Global_258C08;
}

bool func_203()
{
	return Global_2564C8.f_251;
}

void func_204(var uParam0)
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
					func_205(iVar0);
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

void func_205(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_4(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_206(iVar2, &bVar3))
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

int func_206(int iParam0, var uParam1)
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

void func_207()
{
	SYSTEM::WAIT(0x00000000);
}

void func_208(struct<21> Param0)
{
	func_214(func_215(Param0), Param0);
	func_212(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&vLocal_61, 0x0000004E);
	unk_0x35B62793EAE9ADDF(&vLocal_138, 0x00000061);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_211())
	{
		func_187();
	}
	func_70(0x0000000A, 0x00000001);
	func_209();
}

void func_209()
{
	unk_0x45019D71A0DF8B62(0x00000001);
	func_210(0x00000001, 0xFFFFFFFF);
	unk_0xED41266DE64A57FD(0x00000001);
	if (func_37(0x00000085, 0xFFFFFFFF))
	{
		func_31(0x00000085, 0x00000000, 0xFFFFFFFF, 0x00000001);
	}
	Global_2564C8.f_283 = 0x00000001;
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_195(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_31(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_31(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_31(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_31(0x00000077, 0x00000000, iParam1, 0x00000001);
			break;
	}
}

int func_211()
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
		if (func_203())
		{
			return 0x00000000;
		}
		if (func_201(0x0000009D))
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

int func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_188();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_213())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_203())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_201(0x0000009D))
				{
					if (!bParam2)
					{
						func_188();
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
					func_188();
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
				func_188();
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
			func_188();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_213()
{
	return Global_140856;
}

void func_214(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_188();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_215(int iParam0)
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

