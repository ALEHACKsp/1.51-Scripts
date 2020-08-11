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
	float fLocal_62 = 0f;
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
	var uLocal_75 = -1;
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
	var uLocal_122 = 32;
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
	struct<117> Local_156 = { 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_157 = { 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8CD06866876216F2())
	{
		func_122(ScriptParam_157);
	}
	else
	{
		func_119();
	}
	while (0x00000001)
	{
		func_118();
		if (func_107())
		{
			func_119();
		}
		if (func_99())
		{
			func_119();
		}
		func_2();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	switch (Local_156.f_41)
	{
		case 0x00000000:
			func_93();
			break;
		
		case 0x00000001:
			func_71();
			break;
		
		case 0x00000002:
			func_43();
			break;
	}
	func_41();
	func_3();
}

void func_3()
{
	switch (Local_156.f_74)
	{
		case 0x00000001:
			func_40();
			break;
		
		case 0x00000002:
			func_36();
			break;
		
		case 0x00000003:
			func_28();
			break;
		
		case 0x00000004:
			func_23();
			break;
		
		case 0x00000005:
			func_8();
			break;
	}
	func_4();
}

void func_4()
{
	if (Local_156.f_74 > 0x00000000 && !unk_0xC844350D5D58C99A(Local_156.f_40))
	{
		if (Local_156.f_8 != 0xFFFFFFFF)
		{
			unk_0x55D0A2DB35045A35(Local_156.f_8);
			unk_0x43A06902454A1172(Local_156.f_8);
			Local_156.f_8 = 0xFFFFFFFF;
		}
		if (Local_156.f_7 != 0xFFFFFFFF)
		{
			unk_0x55D0A2DB35045A35(Local_156.f_7);
			unk_0x43A06902454A1172(Local_156.f_7);
			Local_156.f_7 = 0xFFFFFFFF;
		}
		unk_0x8D17794CE3273D70(func_7(Local_156.f_A));
		func_6(0x00000000);
		func_5(&(Local_156.f_B));
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_6(int iParam0)
{
	Local_156.f_74 = iParam0;
}

char* func_7(bool bParam0)
{
	char* sVar0;
	
	sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@MALE@";
	if (bParam0)
	{
		sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@FEMALE@";
	}
	return sVar0;
}

void func_8()
{
	struct<16> Var0;
	
	if (unk_0xB4ECF989E2C1DAC8(Local_156.f_40, func_7(Local_156.f_A), "prop_body_loop_outro", 0x00000003))
	{
		return;
	}
	if (Local_156.f_8 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(Local_156.f_8);
		unk_0x43A06902454A1172(Local_156.f_8);
		Local_156.f_8 = 0xFFFFFFFF;
	}
	if (Local_156.f_7 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(Local_156.f_7);
		unk_0x43A06902454A1172(Local_156.f_7);
		Local_156.f_7 = 0xFFFFFFFF;
	}
	StringCopy(&Var0, "HS3MN_EXIT", 64);
	func_10(Var0, 0x00000001);
	unk_0x8D17794CE3273D70(func_7(Local_156.f_A));
	func_6(0x00000000);
	func_5(&(Local_156.f_B));
	Local_156.f_6 = 0x00000000;
	Local_156.f_9 = 0xFFFFFFFF;
	func_9(0x00000009);
}

void func_9(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_156, iParam0))
	{
		unk_0x0674E58A79778E99(&Local_156, iParam0);
	}
}

void func_10(char[64] cParam0, bool bParam1)
{
	Local_156.f_9 = func_21(unk_0xD803B885F5E47A62());
	Local_156.f_4C.f_24 = 0x0000000B;
	Local_156.f_4C.f_23 = Local_156.f_9;
	Local_156.f_4C = { cParam0 };
	Local_156.f_4C.f_21 = 0x00000001;
	func_11(&(Local_156.f_4C), bParam1);
}

void func_11(var uParam0, bool bParam1)
{
	struct<39> Var0;
	bool bVar1;
	int iVar2;
	
	Var0 = 0xE1F9E57A;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { *uParam0 };
	Var0.f_22 = uParam0->f_22;
	Var0.f_25 = bParam1;
	Var0.f_23 = uParam0->f_23;
	Var0.f_24 = uParam0->f_24;
	Var0.f_26 = uParam0->f_21;
	if (!func_20(&(uParam0->f_25)))
	{
		func_19(&(uParam0->f_25), 0x00000000, 0x00000000);
	}
	bVar1 = 0x00000001;
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_10), &(Var0.f_2)))
	{
		if (func_20(&(uParam0->f_25)) && !func_18(&(uParam0->f_25), 0x000003E8, 0x00000000))
		{
			bVar1 = 0x00000000;
		}
		else
		{
			func_5(&(uParam0->f_25));
		}
	}
	else
	{
		uParam0->f_10 = { Var0.f_2 };
		func_5(&(uParam0->f_25));
	}
	uParam0->f_20 = 0x00000000;
	if (bVar1)
	{
		iVar2 = func_17(unk_0xD803B885F5E47A62());
		if (bParam1)
		{
			iVar2 = func_12(0x00000001, 0x00000001);
		}
		if (iVar2 != 0x00000000)
		{
			uParam0->f_20 = 0x00000001;
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000027, iVar2);
		}
	}
}

var func_12(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_16(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_13(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_13(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_14(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_14(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1407E9;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

var func_17(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_19(uParam0, bParam2, 0x00000000);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

int func_21(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_25033E[iParam0 /*421*/].f_1A0.f_1;
	}
	return 0xFFFFFFFF;
}

int func_22()
{
	return 0xFFFFFFFF;
}

void func_23()
{
	if (func_20(&(Local_156.f_B)))
	{
		if (func_18(&(Local_156.f_B), Local_156.f_6, 0x00000000))
		{
			if (func_27())
			{
				if (!func_26(0x00000006))
				{
					unk_0x5B8BE59CB25E8968(Local_156.f_40, 0x00000001, 0x00000001);
					unk_0x5B8BE59CB25E8968(Local_156.f_40, 0x00000000, 0x00000001);
					func_25(0x00000006);
				}
				if (unk_0xD65E6E13E145467B(Local_156.f_40, "prop_body_loop_outro", func_7(Local_156.f_A), 0.125f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					if (func_24(unk_0xD803B885F5E47A62(), Local_156.f_40))
					{
						Local_156.f_8 = unk_0xD68EA767274B7444();
						unk_0xEB819BD1E585E9CB(Local_156.f_8, "fortune_bell", unk_0x68F4C0EC296D3901(Local_156.f_40, 0x00000001), "dlc_ch_nazar_speaks_sounds", 0x00000000, 0x00000000, 0x00000000);
					}
					func_9(0x00000006);
					func_6(0x00000005);
				}
			}
		}
	}
}

int func_24(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if ((!unk_0xC844350D5D58C99A(iParam1) || !unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iParam0))) || unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
	{
		return 0x00000000;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000001) };
	fVar1 = vVar0.z;
	if (fVar1 <= -48f)
	{
		return unk_0x0EB28750412C3A5A(vVar0, unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000001) <= 4f;
	}
	return 0x00000000;
}

void func_25(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_156, iParam0))
	{
		unk_0x5D96D8530B3D0904(&Local_156, iParam0);
	}
}

bool func_26(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_156, iParam0);
}

bool func_27()
{
	unk_0x3F423BF5B8125A50(func_7(Local_156.f_A));
	return unk_0xB4AE0788C1587752(func_7(Local_156.f_A));
}

void func_28()
{
	if (func_20(&(Local_156.f_B)))
	{
		if (func_18(&(Local_156.f_B), func_34(Local_156.f_4) + 2000, 0x00000000))
		{
			func_10(func_33(Local_156.f_3), 0x00000000);
			if (Local_156.f_4C.f_20)
			{
				func_32(&(Local_156.f_B), 0x00000000, 0x00000000);
				Local_156.f_6 = func_29();
				func_25(0x00000009);
				func_6(0x00000004);
			}
		}
	}
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00001450;
	iVar1 = func_34(Local_156.f_4);
	iVar2 = func_30(Local_156.f_3);
	switch (iVar1)
	{
		case 0x000007D0:
			switch (iVar2)
			{
				case 0x00001388:
					iVar0 = 0x00001450;
					break;
				
				case 0x00001F40:
					iVar0 = 0x000024B8;
					break;
				
				case 0x000030D4:
					iVar0 = 0x000041A0;
					break;
			}
			break;
		
		case 0x00000FA0:
			switch (iVar2)
			{
				case 0x00001388:
					iVar0 = 0x00001964;
					break;
				
				case 0x00001F40:
					iVar0 = 0x00002AF8;
					break;
				
				case 0x000030D4:
					iVar0 = 0x00003BC4;
					break;
			}
			break;
		
		case 0x00001B58:
			switch (iVar2)
			{
				case 0x00001388:
					iVar0 = 0x000010CC;
					break;
				
				case 0x00001F40:
					iVar0 = 0x000021FC;
					break;
				
				case 0x000030D4:
					iVar0 = 0x00003F48;
					break;
			}
			break;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00001388;
	iVar1 = func_31(iParam0);
	if (iVar1 <= 0x00001388)
	{
		iVar0 = 0x00001388;
	}
	else if (iVar1 > 0x00001388 && iVar1 <= 0x00001F40)
	{
		iVar0 = 0x00001F40;
	}
	else if (iVar1 > 0x00001F40)
	{
		iVar0 = 0x000030D4;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00001388;
		
		case 0x00000001:
			return 0x00001F40;
		
		case 0x00000002:
			return 0x00001B58;
		
		case 0x00000003:
			return 0x000036B0;
		
		case 0x00000004:
			return 0x00002328;
		
		case 0x00000005:
			return 0x00001B58;
		
		case 0x00000006:
			return 0x00001B58;
		
		case 0x00000007:
			return 0x00001770;
		
		case 0x00000008:
			return 0x00001B58;
		
		case 0x00000009:
			return 0x000003E8;
		
		case 0x0000000A:
			return 0x00002328;
		
		case 0x0000000B:
			return 0x00001B58;
		
		case 0x0000000C:
			return 0x00001770;
		
		case 0x0000000D:
			return 0x00002328;
		
		case 0x0000000E:
			return 0x00001F40;
		
		case 0x0000000F:
			return 0x00002AF8;
		
		case 0x00000010:
			return 0x00000BB8;
		
		case 0x00000011:
			return 0x00000BB8;
		
		case 0x00000012:
			return 0x00001B58;
		
		case 0x00000013:
			return 0x00001B58;
		
		case 0x00000014:
			return 0x00002328;
		
		case 0x00000015:
			return 0x00002328;
		
		case 0x00000016:
			return 0x00000FA0;
		
		case 0x00000017:
			return 0x00001388;
		
		case 0x00000018:
			return 0x00000FA0;
		
		case 0x00000019:
			return 0x00001F40;
		
		case 0x0000001A:
			return 0x00001F40;
		
		case 0x0000001B:
			return 0x00001B58;
		
		case 0x0000001C:
			return 0x00001B58;
		
		case 0x0000001D:
			return 0x00001B58;
		
		case 0x0000001E:
			return 0x00000FA0;
		
		case 0x0000001F:
			return 0x00000FA0;
		
		case 0x00000020:
			return 0x00001770;
		
		case 0x00000021:
			return 0x00001B58;
		
		case 0x00000022:
			return 0x00001B58;
		
		case 0x00000023:
			return 0x00001770;
		
		case 0x00000024:
			return 0x00001388;
		
		case 0x00000025:
			return 0x00000FA0;
		
		case 0x00000026:
			return 0x00001770;
		
		case 0x00000027:
			return 0x00001388;
		
		case 0x00000028:
			return 0x00001B58;
		
		case 0x00000029:
			return 0x00001770;
		
		case 0x0000002A:
			return 0x00001B58;
		
		case 0x0000002B:
			return 0x00001770;
		
		case 0x0000002C:
			return 0x00001B58;
		
		case 0x0000002D:
			return 0x00001B58;
		
		case 0x0000002E:
			return 0x00001B58;
		
		case 0x0000002F:
			return 0x00001B58;
		
		case 0x00000030:
			return 0x00001B58;
		
		default:
	}
	return 0x00000000;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
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

struct<16> func_33(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_FT_", 64);
	if (iParam0 > 0x0000001C)
	{
		StringIntConCat(&Var0, iParam0 + 2, 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "HS3MN_FT_130", 64);
			break;
		
		case 0x00000029:
			switch (unk_0x92EA5294EF5CA70E())
			{
				case 0x54A69840:
					StringCopy(&Var0, "HS3MN_FT_43", 64);
					break;
				
				case 0x6DB1A50D:
				case 0xA4CA1326:
				case 0x36A83D84:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
				
				case 0xBB898D2D:
				case 0x10DCF4B5:
					StringCopy(&Var0, "HS3MN_FT_45", 64);
					break;
				
				case 0xED00A767:
				case 0x30FDAF5C:
					StringCopy(&Var0, "HS3MN_FT_46", 64);
					break;
				
				case 0xB677829F:
					StringCopy(&Var0, "HS3MN_FT_47", 64);
					break;
				
				case 0xEFB6EFF6:
				case 0xAAC9C895:
					StringCopy(&Var0, "HS3MN_FT_48", 64);
					break;
				
				default:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
			}
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "HS3MN_FT_55", 64);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "HS3MN_FT_56", 64);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "HS3MN_FT_50", 64);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "HS3MN_FT_51", 64);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "HS3MN_FT_57", 64);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "HS3MN_FT_58", 64);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "HS3MN_FT_53", 64);
			break;
	}
	return Var0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x000007D0;
	iVar1 = func_35(iParam0);
	if (iVar1 <= 0x000007D0)
	{
		iVar0 = 0x000007D0;
	}
	else if (iVar1 > 0x000007D0 && iVar1 <= 0x00000FA0)
	{
		iVar0 = 0x00000FA0;
	}
	else if (iVar1 > 0x00000FA0)
	{
		iVar0 = 0x00001B58;
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000FA0;
		
		case 0x00000001:
			return 0x00000FA0;
		
		case 0x00000002:
			return 0x00000BB8;
		
		case 0x00000003:
			return 0x00000BB8;
		
		case 0x00000004:
			return 0x000007D0;
		
		case 0x00000005:
			return 0x00000FA0;
		
		case 0x00000006:
			return 0x00000BB8;
		
		case 0x00000007:
			return 0x00000FA0;
		
		case 0x00000008:
			return 0x00001B58;
		
		case 0x00000009:
			return 0x00000BB8;
		
		default:
	}
	return 0x00000000;
}

void func_36()
{
	float fVar0;
	
	if (unk_0xB4ECF989E2C1DAC8(Local_156.f_40, func_7(Local_156.f_A), "prop_body_loop_intro", 0x00000003))
	{
		fVar0 = unk_0x8CA9406E01C7EE58(Local_156.f_40, func_7(Local_156.f_A), "prop_body_loop_intro");
		if (fVar0 >= 0.96f)
		{
			if (func_38())
			{
				func_37();
				func_6(0x00000003);
			}
		}
	}
	else if (func_38())
	{
		func_37();
		func_6(0x00000003);
	}
}

void func_37()
{
	struct<20> Var0;
	
	Local_156.f_13 = 0x00000001;
	Local_156.f_13.f_1 = func_7(Local_156.f_A);
	Local_156.f_13.f_2 = "prop_body_loop";
	Local_156.f_13.f_3 = 0f;
	Local_156.f_13.f_4 = 1f;
	Local_156.f_13.f_5 = 1f;
	Local_156.f_13.f_11 = 0.125f;
	Local_156.f_13.f_12 = 0.125f;
	Local_156.f_13.f_13 = 0xFFFFFFFF;
	Local_156.f_13.f_14 = 0x00000001;
	Local_156.f_13.f_15 = 0x00000000;
	Local_156.f_29 = 0x00000001;
	Local_156.f_29.f_1 = func_7(Local_156.f_A);
	Local_156.f_29.f_2 = "prop_mouth_loop";
	Local_156.f_29.f_3 = 0f;
	Local_156.f_29.f_4 = 1f;
	Local_156.f_29.f_5 = 1f;
	Local_156.f_29.f_11 = 0.125f;
	Local_156.f_29.f_12 = 0.125f;
	Local_156.f_29.f_13 = 0xFFFFFFFF;
	Local_156.f_29.f_14 = 0x00000121;
	Local_156.f_29.f_15 = 0x00000000;
	Var0.f_4 = 0x3F800000;
	Var0.f_5 = 0x3F800000;
	Var0.f_9 = 0x3F800000;
	Var0.f_A = 0x3F800000;
	Var0.f_E = 0x3F800000;
	Var0.f_F = 0x3F800000;
	Var0.f_11 = 0x3E000000;
	Var0.f_12 = 0x3E000000;
	Var0.f_13 = 0xFFFFFFFF;
	unk_0x4F1E401FAB69FE63(Local_156.f_40, &(Local_156.f_13), &(Local_156.f_29), &Var0, 0.125f, 0.125f);
	func_19(&(Local_156.f_B), 0x00000000, 0x00000000);
}

bool func_38()
{
	struct<16> Var0;
	
	Var0 = { func_39(Local_156.f_4) };
	func_10(Var0, 0x00000000);
	return Local_156.f_4C.f_20;
}

struct<16> func_39(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_PRE", 64);
	if (iParam0 > 0x00000000)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	return Var0;
}

void func_40()
{
	if (func_27())
	{
		if (unk_0xD65E6E13E145467B(Local_156.f_40, "prop_body_loop_intro", func_7(Local_156.f_A), 0.125f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			if (func_24(unk_0xD803B885F5E47A62(), Local_156.f_40))
			{
				Local_156.f_7 = unk_0xD68EA767274B7444();
				unk_0xEB819BD1E585E9CB(Local_156.f_7, "fortune_mech_loop", unk_0x68F4C0EC296D3901(Local_156.f_40, 0x00000001), "dlc_ch_nazar_speaks_sounds", 0x00000000, 0x00000000, 0x00000000);
			}
			func_6(0x00000002);
		}
	}
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		switch (iVar1)
		{
			case 0x000000AE:
				unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
				switch (iVar2)
				{
					case 0xDEA1F724:
						if (Global_153CB7.f_314)
						{
							return;
						}
						func_42(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_42(int iParam0)
{
	struct<6> Var0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x00000006))
	{
		if (unk_0xFB75B0F82CA525F6(Var0.f_1))
		{
			if (unk_0xC844350D5D58C99A(Local_156.f_40))
			{
				Local_156.f_3 = Var0.f_4;
				Local_156.f_4 = Var0.f_3;
				Local_156.f_9 = Var0.f_5;
				Local_156.f_A = Var0.f_2;
				func_6(0x00000001);
			}
		}
	}
}

void func_43()
{
	if (func_70("ARC_CAB_FRT_TLL_H"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	func_68();
	Local_156 = 0x00000000;
	Local_156.f_1 = 0xFFFFFFFF;
	Local_156.f_A = 0x00000000;
	func_5(&(Local_156.f_D));
	func_5(&(Local_156.f_F));
	func_67(0x00000000);
	func_66(&(Local_156.f_41), 0x00000000);
	func_25(0x00000008);
	func_56();
	func_44(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
}

void func_44(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_55())
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
		if (!func_53())
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
				else if (bVar14 || (!func_13(unk_0xD803B885F5E47A62(), 0x00000000) && !func_52()))
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
					func_49(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_48(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_47();
					func_46();
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
				if (!func_48(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_45(Global_440000.f_38DB3))
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

bool func_45(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_46()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_47()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_48(int iParam0)
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

void func_49(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (bParam0 == 0x00000001)
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
			if (bParam0 == 0x00000001)
			{
				func_51();
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
		if (func_13(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_50(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_51()
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

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_53()
{
	if (func_54() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54()
{
	return Global_1406D3.f_12;
}

int func_55()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56()
{
	if (Local_156.f_2 == 0x00000013)
	{
		if (!func_63(0x00006A6F, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			func_62(0x00006A6F, 0x00000001, 0xFFFFFFFF, 0x00000001);
			func_61(0x00000001);
			func_62(0x00006E1F, 0x00000001, 0xFFFFFFFF, 0x00000001);
			func_60(0x0000000A);
			func_57(0x00000012, 0x00000000);
		}
	}
	else if (Local_156.f_2 == 0x00000029)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000001);
	}
	else if (Local_156.f_2 == 0x0000002A)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000002);
	}
	else if (Local_156.f_2 == 0x0000002B)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000003);
	}
	else if (Local_156.f_2 == 0x0000002C)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000004);
	}
	else if (Local_156.f_2 == 0x0000002D)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000005);
	}
	else if (Local_156.f_2 == 0x0000002E)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000007);
	}
	else if (Local_156.f_2 == 0x0000002F)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x0000000A);
	}
	else if (Local_156.f_2 == 0x00000030)
	{
		unk_0x5D96D8530B3D0904(&Global_A667, 0x00000008);
	}
	else if (Local_156.f_2 == 0x00000016)
	{
		func_62(0x00006E5A, 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	else if (Local_156.f_2 == 0x00000017)
	{
		func_62(0x00006E5B, 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	else if (Local_156.f_2 == 0x00000018)
	{
		func_62(0x00006E5C, 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(0x00000006);
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_58(0x00000003);
			break;
		
		case 0x00000001:
			func_58(0x0000000C);
			break;
		
		case 0x00000007:
			func_58(0x00000015);
			break;
		
		case 0x00000008:
			func_58(0x0000001F);
			break;
		
		case 0x00000009:
			func_58(0x00000020);
			break;
		
		case 0x0000000A:
			func_58(0x00000021);
			break;
		
		case 0x0000000B:
			func_58(0x00000022);
			break;
		
		case 0x0000000C:
			func_58(0x00000023);
			break;
		
		case 0x0000000D:
			func_58(0x00000024);
			break;
		
		case 0x0000000E:
			func_58(0x00000025);
			break;
		
		case 0x0000000F:
			func_58(0x00000026);
			break;
		
		case 0x00000010:
			func_58(0x00000027);
			break;
		
		case 0x00000011:
			func_58(0x00000028);
			break;
		
		case 0x00000012:
			func_58(0x00000029);
			break;
		
		case 0x00000004:
			func_58(0x0000003B);
			break;
		
		case 0x00000013:
			func_58(0x00000046);
			break;
	}
}

void func_58(int iParam0)
{
	int iVar0;
	
	if (!func_59(iParam0))
	{
		iVar0 = iParam0;
		if (iVar0 > 0x0000001F)
		{
			if (iVar0 <= 0x0000003F)
			{
				iVar0 = (iVar0 - 0x00000020);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_19C1), iVar0);
			}
			else if (iVar0 <= 0x0000005F)
			{
				iVar0 = (iVar0 - 0x00000040);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_19C2), iVar0);
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_19C0), iVar0);
		}
	}
}

bool func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = Global_26B66F.f_19C0;
	if (iVar0 > 0x0000001F)
	{
		if (iVar0 <= 0x0000003F)
		{
			iVar1 = Global_26B66F.f_19C1;
			iVar0 = (iVar0 - 0x00000020);
		}
		else if (iVar0 <= 0x0000005F)
		{
			iVar1 = Global_26B66F.f_19C2;
			iVar0 = (iVar0 - 0x00000040);
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iVar1, iVar0);
}

void func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_58(0x00000000);
			break;
		
		case 0x00000001:
			func_58(0x00000001);
			break;
		
		case 0x00000002:
			func_58(0x00000002);
			break;
		
		case 0x00000003:
			func_58(0x00000005);
			break;
		
		case 0x00000004:
			func_58(0x00000007);
			break;
		
		case 0x00000005:
			func_58(0x00000008);
			break;
		
		case 0x00000009:
			func_58(0x0000000E);
			break;
		
		case 0x00000006:
			func_58(0x00000009);
			break;
		
		case 0x00000007:
			func_58(0x0000000A);
			break;
		
		case 0x00000008:
			func_58(0x0000000B);
			break;
		
		case 0x0000000A:
			func_58(0x0000000F);
			break;
		
		case 0x0000000B:
			func_58(0x00000010);
			break;
		
		case 0x0000000C:
			func_58(0x00000011);
			break;
		
		case 0x0000000D:
			func_58(0x00000012);
			break;
		
		case 0x0000000E:
			func_58(0x00000013);
			break;
		
		case 0x0000000F:
			func_58(0x00000014);
			break;
		
		case 0x00000014:
			func_58(0x00000016);
			break;
		
		case 0x00000015:
			func_58(0x00000017);
			break;
		
		case 0x00000016:
			func_58(0x00000018);
			break;
		
		case 0x00000017:
			func_58(0x00000019);
			break;
		
		case 0x00000018:
			func_58(0x0000001A);
			break;
		
		case 0x00000019:
			func_58(0x0000001B);
			break;
		
		case 0x0000001A:
			func_58(0x0000001C);
			break;
		
		case 0x0000001B:
			func_58(0x0000001D);
			break;
		
		case 0x0000001C:
			func_58(0x0000001E);
			break;
		
		case 0x0000001D:
			func_58(0x0000002B);
			break;
		
		case 0x0000001E:
			func_58(0x0000002C);
			break;
		
		case 0x0000001F:
			func_58(0x0000002D);
			break;
		
		case 0x00000020:
			func_58(0x0000002E);
			break;
		
		case 0x00000021:
			func_58(0x0000002F);
			break;
		
		case 0x00000022:
			func_58(0x00000030);
			break;
		
		case 0x00000023:
			func_58(0x00000031);
			break;
		
		case 0x00000024:
			func_58(0x00000032);
			break;
		
		case 0x00000025:
			func_58(0x00000033);
			break;
		
		case 0x00000026:
			func_58(0x00000034);
			break;
		
		case 0x00000010:
			func_58(0x00000035);
			break;
		
		case 0x00000011:
			func_58(0x00000036);
			break;
		
		case 0x00000012:
			func_58(0x00000037);
			break;
		
		case 0x00000013:
			func_58(0x00000038);
			break;
		
		case 0x00000027:
			func_58(0x0000003D);
			break;
		
		case 0x00000028:
			func_58(0x00000041);
			break;
		
		case 0x00000029:
			func_58(0x00000042);
			break;
		
		case 0x0000002B:
			func_58(0x00000040);
			break;
		
		case 0x0000002A:
			func_58(0x0000003F);
			break;
		
		case 0x0000002C:
			func_58(0x00000043);
			break;
		
		case 0x0000002D:
			func_58(0x00000044);
			break;
		
		case 0x0000002E:
			func_58(0x00000045);
			break;
	}
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_189.f_2, 0x0000000E))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_189.f_2), 0x0000000E);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_189.f_2, 0x0000000E))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_189.f_2), 0x0000000E);
	}
}

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_15();
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

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_15();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)
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

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_15();
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

void func_66(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_67(int iParam0)
{
	Local_156.f_73 = iParam0;
}

void func_68()
{
	struct<10> Var0;
	struct<16> Var1;
	
	Var0 = 0xE5DC6E0C;
	Var0.f_2 = 0x00000001;
	Var0.f_6 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_156.f_D));
	Var1 = { func_33(Local_156.f_2) };
	Var0.f_8 = unk_0x12AB0310C2281427(func_69(&Var1));
	if (Local_156.f_2 == 0x00000013)
	{
		Var0.f_9 = 0x00000001;
	}
	unk_0xEEE9620CDB225790(&Var0);
}

var func_69(var uParam0)
{
	return uParam0;
}

bool func_70(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_71()
{
	switch (Local_156.f_73)
	{
		case 0x00000000:
			func_92();
			break;
		
		case 0x00000001:
			func_86();
			break;
		
		case 0x00000002:
			func_83();
			break;
		
		case 0x00000003:
			func_79();
			break;
		
		case 0x00000004:
			func_72();
			break;
	}
}

void func_72()
{
	if (!func_26(0x00000005))
	{
		Local_156.f_43.f_4 = 0x00000000;
		Local_156.f_43.f_3 = 0x00000000;
		func_78(&(Local_156.f_43), 0x0000000B);
		if (Local_156.f_43.f_5)
		{
			func_25(0x00000005);
		}
	}
	else if (func_73(unk_0x16F2683693E537C9(), 0x0000000B))
	{
		func_66(&(Local_156.f_41), 0x00000002);
	}
}

int func_73(int iParam0, int iParam1)
{
	struct<18> Var0;
	
	if (func_77(iParam0))
	{
		Var0.f_2 = 0x0000000E;
		func_74(Local_156.f_42, iParam1, 0x00000000, &Var0);
		return unk_0xB4ECF989E2C1DAC8(iParam0, &(Var0.f_11), Var0.f_1, 0x00000003);
	}
	return 0x00000000;
}

void func_74(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_75())
	{
		StringCopy(&(uParam3->f_11), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_11), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0x00000000:
			uParam3->f_1 = "start_game";
			break;
		
		case 0x00000001:
			uParam3->f_1 = "idle";
			break;
		
		case 0x0000000B:
			uParam3->f_1 = "exit";
			break;
		
		case 0x00000015:
			uParam3->f_1 = "reaction_amused";
			break;
		
		case 0x00000016:
			uParam3->f_1 = "reaction_angry";
			break;
		
		case 0x00000017:
			uParam3->f_1 = "reaction_confused";
			break;
		
		case 0x00000018:
			uParam3->f_1 = "reaction_disgusted";
			break;
		
		case 0x00000019:
			uParam3->f_1 = "reaction_insulted";
			break;
		
		case 0x0000001A:
			uParam3->f_1 = "reaction_pondering";
			break;
		
		case 0x0000001B:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

bool func_75()
{
	return func_76(unk_0xD803B885F5E47A62());
}

int func_76(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_77(int iParam0)
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

void func_78(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 0x40000000;
	Var0.f_6 = 0xC0000000;
	Var0 = 0xD432397D;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = 0x00000000;
	if (iParam1 == 0x0000000B)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_1A0, 0x00000001))
		{
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_1A0), 0x00000001);
			bVar1 = 0x00000001;
		}
	}
	uParam0->f_5 = 0x00000000;
	if (!func_20(&(uParam0->f_1)))
	{
		func_19(&(uParam0->f_1), 0x00000000, 0x00000000);
	}
	bVar2 = 0x00000001;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_20(&(uParam0->f_1)) && !func_18(&(uParam0->f_1), 0x000003E8, 0x00000000))
		{
			bVar2 = 0x00000000;
		}
		else
		{
			func_5(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_5(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_17(unk_0xD803B885F5E47A62());
		if (iVar3 != 0xFFFFFFFF)
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, iVar3);
			uParam0->f_5 = 0x00000001;
		}
	}
}

void func_79()
{
	if (!func_26(0x00000002))
	{
		if (func_26(0x00000009) && func_18(&(Local_156.f_B), (func_31(Local_156.f_3) / 0x00000003) * 2, 0x00000000))
		{
			Local_156.f_43.f_4 = 0x00000000;
			Local_156.f_43.f_3 = 0x00000000;
			func_78(&(Local_156.f_43), Local_156.f_3F);
			func_9(0x00000009);
			func_25(0x00000002);
		}
	}
	else if (func_80())
	{
		func_67(0x00000004);
	}
}

bool func_80()
{
	float fVar0;
	
	if (!func_26(0x00000003))
	{
		if (func_73(unk_0x16F2683693E537C9(), Local_156.f_3F))
		{
			func_25(0x00000003);
		}
	}
	else if (!func_26(0x00000004))
	{
		Local_156.f_1 = unk_0xF958843510932FF6(func_82());
		fVar0 = func_81(Local_156.f_3F);
		if (unk_0xA45992A6CE82FB43(Local_156.f_1) >= fVar0)
		{
			func_25(0x00000004);
		}
	}
	return func_26(0x00000004);
}

float func_81(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 0x00000016:
			fVar0 = 0.65f;
			break;
		
		case 0x00000017:
			fVar0 = 0.85f;
			break;
		
		case 0x0000001A:
			fVar0 = 0.9f;
			break;
		
		case 0x0000001B:
			fVar0 = 0.9f;
			break;
	}
	return fVar0;
}

var func_82()
{
	return Global_19FC41.f_1;
}

void func_83()
{
	if (func_18(&(Local_156.f_F), 0x00000834, 0x00000000))
	{
		func_5(&(Local_156.f_F));
		Local_156.f_9 = func_21(unk_0xD803B885F5E47A62());
		func_84(Local_156.f_2, Local_156.f_5, Local_156.f_9, Local_156.f_A);
		func_67(0x00000003);
	}
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<6> Var0;
	int iVar1;
	
	Var0 = 0xDEA1F724;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam3;
	Var0.f_3 = uParam1;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam2;
	iVar1 = func_85(0x00000001);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, iVar1);
	}
}

var func_85(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_16(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_86()
{
	Local_156.f_2 = func_91();
	Local_156.f_3F = func_88(Local_156.f_2);
	Local_156.f_5 = func_87();
	func_67(0x00000002);
}

int func_87()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	iVar1 = 0x00000000;
	while (iVar0 == Local_156.f_5 && iVar1 < 0x0000000A)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
		iVar1++;
	}
	if (iVar1 >= 0x0000000A)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	}
	return iVar0;
}

var func_88(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000001:
			uVar0 = func_90(0x0000001A, 0x0000001B);
			break;
		
		case 0x00000002:
			uVar0 = func_90(0x00000015, 0x0000001B);
			break;
		
		case 0x00000003:
			uVar0 = func_90(0x00000015, 0x0000001A);
			break;
		
		case 0x00000004:
			uVar0 = func_90(0x00000017, 0x00000017);
			break;
		
		case 0x00000005:
			uVar0 = func_90(0x00000016, 0x00000017);
			break;
		
		case 0x00000006:
			uVar0 = func_90(0x0000001A, 0x0000001A);
			break;
		
		case 0x00000007:
			uVar0 = func_90(0x0000001B, 0x00000017);
			break;
		
		case 0x00000008:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000009:
			uVar0 = func_90(0x00000017, 0x00000017);
			break;
		
		case 0x0000000A:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000000B:
			uVar0 = func_90(0x00000016, 0x00000015);
			break;
		
		case 0x0000000C:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000000D:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x0000000E:
			uVar0 = func_90(0x0000001B, 0x0000001A);
			break;
		
		case 0x0000000F:
			uVar0 = func_90(0x00000015, 0x00000018);
			break;
		
		case 0x00000010:
			uVar0 = func_90(0x00000017, 0x00000016);
			break;
		
		case 0x00000011:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000012:
			uVar0 = func_90(0x00000016, 0x00000017);
			break;
		
		case 0x00000013:
			uVar0 = func_90(0x0000001B, 0x0000001B);
			break;
		
		case 0x00000014:
			uVar0 = func_90(0x0000001B, 0x0000001B);
			break;
		
		case 0x00000015:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x00000016:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000017:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000018:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000019:
			uVar0 = func_90(0x00000015, 0x00000015);
			break;
		
		case 0x0000001A:
			uVar0 = func_90(0x0000001B, 0x0000001A);
			break;
		
		case 0x0000001B:
			uVar0 = func_90(0x00000015, 0x00000016);
			break;
		
		case 0x0000001C:
			uVar0 = func_90(0x00000017, 0x00000019);
			break;
		
		case 0x0000001D:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x0000001E:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x0000001F:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000020:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000021:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000022:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000023:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000024:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000025:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000026:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000027:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000028:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
		
		case 0x00000029:
			uVar0 = func_89();
			break;
		
		case 0x0000002A:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000002B:
			uVar0 = func_90(0x0000001B, 0x0000001A);
			break;
		
		case 0x0000002C:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000002D:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000002E:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x0000002F:
			uVar0 = func_90(0x00000016, 0x00000019);
			break;
		
		case 0x00000030:
			uVar0 = func_90(0x00000017, 0x0000001A);
			break;
	}
	return uVar0;
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	switch (unk_0x92EA5294EF5CA70E())
	{
		case 0x54A69840:
			iVar0 = 0x00000018;
			iVar1 = 0x00000016;
			break;
		
		case 0x6DB1A50D:
		case 0xA4CA1326:
		case 0x36A83D84:
			iVar0 = 0x00000015;
			iVar1 = 0x0000001B;
			break;
		
		case 0xBB898D2D:
		case 0x10DCF4B5:
			iVar0 = 0x0000001A;
			iVar1 = 0x00000017;
			break;
		
		case 0xED00A767:
		case 0x30FDAF5C:
			iVar0 = 0x0000001A;
			iVar1 = 0x00000017;
			break;
		
		case 0xB677829F:
			iVar0 = 0x00000016;
			iVar1 = 0x00000018;
			break;
		
		case 0xEFB6EFF6:
		case 0xAAC9C895:
			iVar0 = 0x0000001B;
			iVar1 = 0x0000001B;
			break;
		
		default:
			iVar0 = 0x0000001A;
			iVar1 = 0x0000001A;
			break;
	}
	return func_90(iVar0, iVar1);
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	iVar1 = 0xFFFFFFFF;
	switch (iVar0)
	{
		case 0x00000000:
			iVar1 = iParam0;
			if (Local_156.f_3F == iParam0)
			{
				iVar1 = iParam1;
			}
			break;
		
		case 0x00000001:
			iVar1 = iParam1;
			if (Local_156.f_3F == iParam1)
			{
				iVar1 = iParam0;
			}
			break;
	}
	return iVar1;
}

int func_91()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	iVar0 = 0x00000031;
	if (Global_A667 != 0x00000000)
	{
		iVar0 = 0x00000029;
	}
	else if (!Global_40001.f_66E6)
	{
		iVar0 = 0x00000030;
	}
	iVar1 = unk_0x09AC81E49EA267F7(0x00000000, iVar0);
	uVar2 = func_63(0x00006A6F, 0xFFFFFFFF, 0xFFFFFFFF);
	uVar3 = func_63(0x00006E5A, 0xFFFFFFFF, 0xFFFFFFFF);
	uVar4 = func_63(0x00006E5B, 0xFFFFFFFF, 0xFFFFFFFF);
	uVar5 = func_63(0x00006E5C, 0xFFFFFFFF, 0xFFFFFFFF);
	iVar6 = 0x00000000;
	while ((((iVar1 == Local_156.f_2 || (iVar1 == 0x00000013 && uVar2)) || (iVar1 == 0x00000016 && uVar3)) || (iVar1 == 0x00000017 && uVar4)) || ((iVar1 == 0x00000018 && uVar5) && iVar6 < 0x0000000A))
	{
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, iVar0);
		iVar6++;
	}
	if (iVar6 >= 0x0000000A)
	{
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000013);
	}
	return iVar1;
}

void func_92()
{
	Local_156.f_A = func_75();
	Local_156.f_43.f_4 = 0x00000000;
	Local_156.f_43.f_3 = 0x00000000;
	func_78(&(Local_156.f_43), 0x00000001);
	func_19(&(Local_156.f_D), 0x00000000, 0x00000000);
	func_67(0x00000001);
}

void func_93()
{
	if (func_96())
	{
		func_66(&(Local_156.f_41), 0x00000001);
	}
	else if (func_95(unk_0xD803B885F5E47A62()) == Local_156.f_42 && Local_156.f_42 == 0x0000000B)
	{
		func_94();
	}
	else if (func_20(&(Local_156.f_11)))
	{
		func_5(&(Local_156.f_11));
	}
}

void func_94()
{
	struct<16> Var0;
	
	if (!func_20(&(Local_156.f_11)))
	{
		if (func_26(0x00000008))
		{
			func_9(0x00000008);
			func_32(&(Local_156.f_11), 0x00000000, 0x00000000);
		}
		else
		{
			StringCopy(&Var0, "HS3MN_ATTRCT", 64);
			func_10(Var0, 0x00000000);
			if (Local_156.f_4C.f_20)
			{
				func_32(&(Local_156.f_11), 0x00000000, 0x00000000);
			}
		}
	}
	else if (func_18(&(Local_156.f_11), 0x00009C40, 0x00000000))
	{
		func_5(&(Local_156.f_11));
	}
}

int func_95(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_25033E[iParam0 /*421*/].f_1A0.f_3;
	}
	return 0xFFFFFFFF;
}

int func_96()
{
	if (!func_98(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_97(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_95(unk_0xD803B885F5E47A62()) != Local_156.f_42)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_97(int iParam0)
{
	if (iParam0 != func_22())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_1A0, 0x00000001);
	}
	return 0x00000000;
}

int func_98(int iParam0)
{
	if (iParam0 != func_22())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_1A0, 0x00000000);
	}
	return 0x00000000;
}

int func_99()
{
	if (func_106())
	{
		return 0x00000001;
	}
	if (!func_53())
	{
		return 0x00000001;
	}
	if (func_103(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_102(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_100(0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_100(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_19FC41, func_101(iParam0));
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000B:
			return 0x0000000A;
		
		case 0x0000000C:
			return 0x0000000B;
		
		case 0x0000000D:
			return 0x0000000C;
		
		case 0x0000000E:
			return 0x0000000D;
		
		default:
	}
	if (iParam0 != 0xFFFFFFFF)
	{
	}
	return 0xFFFFFFFF;
}

int func_102(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000E))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_103(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 0x00000001, 0x00000001))
	{
		if (func_105(iParam0) && !func_104(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_104(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_105(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

bool func_106()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19FC41, 0x00000000);
}

int func_107()
{
	var uVar0;
	
	func_115(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_114())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_113())
	{
		return 0x00000001;
	}
	if (func_112(0x0000009F))
	{
		if (!func_111())
		{
			return 0x00000001;
		}
	}
	if (func_112(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_108() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_108()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_108()
{
	switch (func_110())
	{
		case 0x00000000:
			return func_109();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_109()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_110()
{
	return Global_7830;
}

bool func_111()
{
	return Global_2564C8.f_256;
}

int func_112(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_113()
{
	return Global_258C08;
}

bool func_114()
{
	return Global_2564C8.f_251;
}

void func_115(var uParam0)
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
					func_116(iVar0);
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

void func_116(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_16(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_117(iVar2, &bVar3))
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

int func_117(int iParam0, var uParam1)
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

void func_118()
{
	SYSTEM::WAIT(0x00000000);
}

void func_119()
{
	func_121(0x0000000B, 0x00000000);
	func_120();
}

void func_120()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_100(iParam0))
		{
			unk_0x5D96D8530B3D0904(&Global_19FC41, func_101(iParam0));
		}
	}
	else if (func_100(iParam0))
	{
		unk_0x0674E58A79778E99(&Global_19FC41, func_101(iParam0));
	}
}

void func_122(struct<18> Param0)
{
	unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, Param0);
	func_125(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&uLocal_155, 0x00000001);
	unk_0x35B62793EAE9ADDF(&uLocal_122, 0x00000021);
	if (!func_124())
	{
		func_119();
	}
	Local_156.f_40 = Param0.f_1;
	Local_156.f_42 = Param0.f_11;
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		func_119();
	}
	func_123();
}

void func_123()
{
	func_121(0x0000000B, 0x00000000);
}

int func_124()
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
		if (func_114())
		{
			return 0x00000000;
		}
		if (func_112(0x0000009D))
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

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_126())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_112(0x0000009D))
				{
					if (!bParam2)
					{
						func_120();
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
					func_120();
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
				func_120();
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
			func_120();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_126()
{
	return Global_140856;
}

