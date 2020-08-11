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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	struct<11> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_83[32];
	struct<21> Local_84 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8CD06866876216F2())
	{
		if (!func_693(ScriptParam_84))
		{
			func_636();
		}
	}
	while (0x00000001)
	{
		func_635();
		if (func_627())
		{
			func_636();
		}
		switch (func_626(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_625() == 0x00000001)
				{
					if (func_624())
					{
						func_623(unk_0x57270EE11514DC67(), 0x00000001);
					}
				}
				break;
			
			case 0x00000001:
				if (func_625() == 0x00000001)
				{
					if (!func_621())
					{
						func_96();
					}
					if (func_53(0x00000001))
					{
						func_623(unk_0x57270EE11514DC67(), 0x00000003);
					}
				}
				else if (func_625() == 0x00000003)
				{
					func_623(unk_0x57270EE11514DC67(), 0x00000003);
				}
				break;
			
			case 0x00000003:
				func_636();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_52())
			{
				func_51(0x00000003);
			}
			switch (func_625())
			{
				case 0x00000000:
					if (func_43())
					{
						func_51(0x00000001);
					}
					break;
				
				case 0x00000001:
					if (func_42() == 0x00000003)
					{
						func_51(0x00000003);
					}
					else
					{
						func_1();
					}
					break;
				
				case 0x00000003:
					func_636();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_82.f_8)
	{
		case 0x00000000:
			if (func_41())
			{
				func_40(0x00000001);
			}
			func_38();
			break;
		
		case 0x00000001:
			func_38();
			func_2();
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000005))
			{
				func_40(0x00000003);
			}
			func_38();
			break;
		
		case 0x00000003:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(0x00000001);
		func_40(0x00000002);
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000002);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0x00000000, 0x00000001))
	{
		func_12(0x00000003);
		func_40(0x00000002);
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000003);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000000))
	{
		if (func_3(&(Local_82.f_4), func_5(), 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000004);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000004))
	{
		func_12(0x00000002);
		func_40(0x00000002);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000007))
	{
		func_12(0x00000000);
		func_40(0x00000002);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_4(uParam0, bParam2, 0x00000000);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

int func_5()
{
	if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return 0x0001D4C0;
	}
	return 0x000493E0;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 0x00000001);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_10() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return 0xFFFFFFFF;
}

int func_11()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

void func_12(int iParam0)
{
	Local_82.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_34(iParam0) && ((func_32(iParam0) == 0x0000008E || func_32(iParam0) == 0x000000A4) || func_32(iParam0) == 0x00000094))
	{
		return 0x00000000;
	}
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (!func_9(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	if (func_31(iParam0, 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_30(iParam0))
	{
		return 0x00000000;
	}
	if (func_28(iParam0, 0x00000001) && func_27(iParam0) == func_11())
	{
		return 0x00000000;
	}
	if (func_23(iParam0))
	{
		return 0x00000000;
	}
	if (func_22(iParam0, 0x00000007))
	{
		return 0x00000000;
	}
	if (func_17(iParam0))
	{
		return 0x00000000;
	}
	if (func_14(iParam0, 0x00000006))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_16() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_15(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_15(int iParam0)
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

int func_16()
{
	return Global_7830;
}

int func_17(int iParam0)
{
	if (func_19(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_18())
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

bool func_18()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_20(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_21();
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

int func_21()
{
	return Global_1407E9;
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_23(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return func_26();
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_F1.f_88[func_25(0x0000000A) /*33*/][iParam0], func_24(0x0000000A));
}

int func_24(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_25(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_26()
{
	return Global_1406A2;
}

int func_27(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_10();
}

bool func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_10();
}

int func_29(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

bool func_30(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	if (func_29(iParam0))
	{
		if (func_35(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_36(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_37()
{
	return Local_82.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x54EABC0DD106045B();
	iVar2 = 0x00000000;
	while (iVar2 < iVar1)
	{
		if (func_42() < 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0x00000001))
			{
				func_39(unk_0x117658E336116132(iVar2));
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0x00000004))
			{
				func_39(func_11());
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000000);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0x00000002))
			{
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000004);
			}
		}
		else if (func_42() == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0x00000003))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 0x00000002)
	{
		if (iVar0 == unk_0x0DC0B2DBBD52B0C0())
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000005);
		}
		else if (func_3(&(Local_82.f_6), 0x00002710, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000005);
		}
	}
}

void func_39(int iParam0)
{
	Local_82.f_3 = iParam0;
}

void func_40(int iParam0)
{
	Local_82.f_8 = iParam0;
}

int func_41()
{
	return 0x00000001;
}

int func_42()
{
	return Local_82.f_8;
}

int func_43()
{
	if (func_44())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_44()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000006))
	{
		return 0x00000001;
	}
	func_50(func_10());
	if (Global_26B66F.f_1404.f_4 != func_10())
	{
	}
	else
	{
		func_51(0x00000003);
	}
	if (func_9(Global_26B66F.f_1404.f_4, 0x00000000, 0x00000001))
	{
		if (!func_48(Global_26B66F.f_1404.f_4, unk_0xD803B885F5E47A62(), 0x00000001))
		{
			func_50(Global_26B66F.f_1404.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			if (func_47(func_37(), 0x0000000D))
			{
				Local_82.f_A = 0x00000001;
			}
		}
		func_45(func_46(func_37()), 0x00000001);
		Global_26B66F.f_1404.f_4 = func_10();
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0x00000006);
		return 0x00000001;
	}
	else if (func_37() == func_10())
	{
	}
	return 0x00000000;
}

void func_45(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0x54BAD868;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam0);
	}
}

int func_46(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0x00000000;
}

void func_50(int iParam0)
{
	Local_82.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_82 = iParam0;
}

int func_52()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_53(bool bParam0)
{
	if (func_61(0x00000001))
	{
		return 0x00000001;
	}
	if (Global_26B66F.f_1404.f_29)
	{
		Global_26B66F.f_1404.f_29 = 0x00000000;
		return 0x00000001;
	}
	if (bParam0)
	{
		if (func_60() == func_10() || !func_9(func_60(), 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (!func_58(unk_0xD803B885F5E47A62()))
	{
		if (func_57(unk_0xD803B885F5E47A62()) && func_54())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_54()
{
	switch (func_55(func_56(unk_0xD803B885F5E47A62())))
	{
		case 0x0000000B:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_55(int iParam0)
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

int func_56(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 0x00000001, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 0xFFFFFFFF;
}

int func_57(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_58(int iParam0)
{
	if (func_59(iParam0) != func_10())
	{
		return func_59(iParam0) == func_27(iParam0);
	}
	return 0x00000000;
}

int func_59(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_60()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

int func_61(bool bParam0)
{
	bool bVar0;
	
	if (!func_95(0x00000001))
	{
		bVar0 = 0x00000000;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_10())
		{
			if (func_9(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0x00000000, 0x00000001))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000004 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000008) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000006)
				{
					bVar0 = 0x00000001;
				}
			}
		}
		else if (func_94(func_32(unk_0xD803B885F5E47A62())) == 0x00000000)
		{
			bVar0 = 0x00000001;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_93(0x0000001F);
				if (func_92(func_32(unk_0xD803B885F5E47A62())))
				{
					func_93(0x00000051);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_10() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_63(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
					if (!func_62(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_93(0x00000058);
					}
				}
				else
				{
					Global_18D265 = 0x00000001;
				}
				Global_18D255 = { Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_68 };
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_62(int iParam0)
{
	return func_8(iParam0, 0x00000001);
}

int func_63(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_17(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_17(unk_0xD803B885F5E47A62()) || (func_91() && func_90())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_89();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_9(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_87(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_76(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_76(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_87(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_64(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_64(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_87(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_76(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_76(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_64(bool bParam0, int iParam1, bool bParam2)
{
	return func_65(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_65(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_75() || (func_74() && func_72())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_71(iParam2, iVar0);
		}
		else
		{
			return func_71(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_70(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_69(0x00000001);
				}
				else
				{
					return func_69(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_66(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_66(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_69(0x00000001);
	}
	return func_69(0x00000000);
}

int func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, iParam1, iParam3);
	if (func_67(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_67(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_70(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_69(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_68(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_72()
{
	if (func_73())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_73()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_74()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_75()
{
	if (func_73() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_82())
			{
				iVar3 = func_81(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_79(iVar3);
				}
			}
			if ((func_78(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_70(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_69(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_77(0x00000001);
			}
			else
			{
				return func_65(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_69(0x00000001);
			}
			else
			{
				return func_65(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_81(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_79(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_77(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_79(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_80(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_80(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_81(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_28(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_27(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_82()
{
	if (((func_86() || func_85()) || func_84()) || func_83())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_83()
{
	return Global_2564C8.f_13;
}

bool func_84()
{
	return Global_2564C8.f_11;
}

var func_85()
{
	return Global_2564C8.f_10;
}

var func_86()
{
	return Global_2564C8.f_F;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_82())
	{
		iVar2 = func_81(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_79(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_10())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_65(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_88(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_70(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_77(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

var func_89()
{
	return Global_240006.f_2;
}

bool func_90()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_91()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x00000094:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094 && func_8(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 0x00000001))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000CD:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
	}
	return 0x00000000;
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x000000A2:
		case 0x000000A0:
		case 0x000000A3:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000A9:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000B2:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000BD:
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000E1:
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E5:
		case 0x000000E6:
		case 0x000000E9:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F9:
		case 0x000000FA:
		case 0x000000F3:
		case 0x0000009E:
		case 0x000000B5:
			return 0x00000000;
		
		case 0x00000098:
		case 0x0000009F:
		case 0x0000008E:
		case 0x000000A4:
		case 0x0000009D:
		case 0x000000A6:
		case 0x000000AA:
		case 0x000000AD:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000B9:
		case 0x000000B6:
		case 0x000000BA:
		case 0x000000C5:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000C6:
		case 0x000000C3:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D6:
		case 0x000000D7:
		case 0x000000D8:
		case 0x000000D9:
		case 0x000000DA:
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x00000018:
		case 0x0000001A:
			return 0x00000001;
		
		case 0x00000094:
		case 0x000000B3:
			return 0x00000002;
		
		default:
	}
	return 0xFFFFFFFF;
}

bool func_95(bool bParam0)
{
	return func_28(unk_0xD803B885F5E47A62(), bParam0);
}

void func_96()
{
	switch (func_620())
	{
		case 0x00000000:
			func_605(0x00000097, 0x00000001, 0xFFFFFFFF, 0x00000000);
			func_604(0x00000001);
			if (func_42() > 0x00000000)
			{
				func_603(0x00000001);
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_80, 0x00000002))
			{
				func_600();
			}
			if (Global_19AA04 == func_10())
			{
				if (unk_0x40B8C182D63932FC(func_37()))
				{
					Global_19AA04 = func_37();
				}
			}
			func_594();
			func_584();
			func_565();
			func_563();
			func_519();
			func_396(&(Global_14DB79.f_216), &Global_14DB79, 0x0000001C, &(Global_14DB79.f_1), &(Global_14DB79.f_75), 0xFFFFFFFF, 0x00000000, 0x00000000);
			if (func_42() > 0x00000001)
			{
				func_603(0x00000002);
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 0x00000003))
			{
				func_394(0x00000000, func_10());
				func_302();
				func_97();
			}
			if (func_42() > 0x00000002)
			{
				func_603(0x00000003);
			}
			break;
		
		case 0x00000003:
			break;
	}
}

void func_97()
{
	struct<20> Var0;
	
	Var0.f_2 = 0x3F800000;
	Var0.f_3 = 0x3F800000;
	Var0.f_4 = 0x00000001;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_12 = 0xFFFFFFFF;
	Var0.f_13 = 0xFFFFFFFF;
	if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 0x00000003))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000002) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000004))
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000003);
			return;
		}
		if (func_301())
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000003);
			return;
		}
		if (func_295())
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000003);
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000007))
		{
			func_98(0x00000097, 0x00000001, &Var0, 0x00000000);
		}
		else
		{
			func_98(0x00000097, unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 0x00000001), &Var0, 0x00000000);
		}
		unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000003);
	}
}

void func_98(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_293(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0x00000000)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_292(iParam0, uParam2->f_D, bParam3));
		if (iParam0 == 0x000000E9)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 0x00000064) * iVar6);
		}
		if ((iParam0 == 0x0000009E && uParam2->f_15 == 0x00000001) && !uParam2->f_16)
		{
			iVar1 = 0x000000C8;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_291(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 0x000000B9 || iParam0 == 0x000000DC) || iParam0 == 0x000000DD)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > 0xFFFFFFFF)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 0xFFFFFFFF)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_289(iParam0))
	{
		if (bParam1)
		{
			if (func_288(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_287();
			}
			else
			{
				func_286();
			}
		}
		else
		{
			func_285();
		}
	}
	func_269(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_267(iParam0, uParam2, &iVar0, &iVar5);
	func_241(iParam0, uParam2, &iVar0, &iVar5);
	func_238(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_221(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 0x000000A8)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_60();
	if (iVar8 != func_10() && iParam0 != 0x00000094)
	{
		if (func_28(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!func_48(unk_0xD803B885F5E47A62(), iVar8, 0x00000001))
			{
				func_207(&iVar0, 0x00000001);
			}
		}
	}
	func_201(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0x00000000)
	{
		Global_198C74.f_A = iVar1;
		func_200();
		func_153(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x60F15A9E, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
	}
	if (iVar0 > 0x00000000)
	{
		Global_198C74.f_9 = iVar0;
		func_130(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_129(iParam0, iVar0);
		if (func_128(iParam0))
		{
			if (func_127(iParam0) > 0xFFFFFFFF)
			{
				func_126(func_127(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_125(&Global_258DD8, 0x00000000, 0x00000000);
	}
	if (func_35(unk_0xD803B885F5E47A62()) || func_124(unk_0xD803B885F5E47A62()))
	{
		func_111(iParam0);
	}
	if (func_92(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_110(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_109(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_107(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_106(iParam0))
	{
		if (func_105(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_101(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_100(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_99(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000F3:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_101(int iParam0)
{
	if (((((((((iParam0 == 0x000000FA || iParam0 == 0x000000EE) || iParam0 == 0x000000F2) || iParam0 == 0x000000F4) || iParam0 == 0x000000F8) || iParam0 == 0x000000F1) || iParam0 == 0x000000EF) || iParam0 == 0x000000F0) || iParam0 == 0x000000F9) || (iParam0 == 0x000000ED && func_102(func_103(unk_0xD803B885F5E47A62()))))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000003:
		case 0x00000002:
		case 0x00000005:
		case 0x00000001:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_103(int iParam0)
{
	if (func_32(iParam0) == 0x000000ED || func_32(iParam0) == 0x000000FA)
	{
		return func_104(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_104(int iParam0)
{
	if (func_33(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_105(int iParam0)
{
	if (iParam0 == 0x000000ED)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000096:
		case 0x000000EC:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E5:
		case 0x000000E6:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E1:
		case 0x000000E2:
		case 0x000000E3:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000D6:
		case 0x000000D7:
		case 0x000000D8:
		case 0x000000D9:
		case 0x000000DA:
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000BC:
		case 0x000000B2:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_111(int iParam0)
{
	if (func_123(unk_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0))
		{
			func_115(0x000027A2, 0xFFFFFFFF);
		}
		else if (func_114(iParam0))
		{
			func_115(0x000027A4, 0xFFFFFFFF);
		}
		else if (func_113(iParam0, 0x00000001))
		{
			func_115(0x000027A5, 0xFFFFFFFF);
		}
		else if (func_112(iParam0))
		{
			func_115(0x000027A6, 0xFFFFFFFF);
		}
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000C2:
		case 0x000000C1:
		case 0x000000BD:
		case 0x00000099:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	if (iParam1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x000000C2:
			case 0x000000C1:
			case 0x000000BD:
			case 0x00000099:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000B3:
		case 0x000000C9:
		case 0x000000C8:
		case 0x00000094:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_119(iParam0, func_120(iParam1), 0x00000000);
	iVar0++;
	if (!func_118(iParam0))
	{
		func_117(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_116(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_120(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_118(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_21();
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

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000B6:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_122()
{
	return func_62(unk_0xD803B885F5E47A62());
}

bool func_123(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 0x0000000E);
}

bool func_124(int iParam0)
{
	return func_36(iParam0, 0x00000014);
}

void func_125(var uParam0, bool bParam1, bool bParam2)
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

void func_126(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000008E:
			return 0x00000019;
		
		case 0x0000009D:
			return 0x00000016;
		
		case 0x0000009F:
			return 0x00000015;
		
		case 0x00000097:
			return 0x00000021;
		
		case 0x00000094:
			return 0x00000017;
		
		case 0x000000A4:
			return 0x00000018;
		
		case 0x00000098:
			return 0x0000001A;
		
		case 0x00000099:
			return 0x0000001E;
		
		case 0x0000009A:
			return 0x00000020;
		
		case 0x0000009B:
			return 0x0000001C;
		
		case 0x000000A0:
			return 0x0000001D;
		
		case 0x000000A2:
			return 0x0000001F;
		
		case 0x000000A3:
			return 0x0000001B;
		
		case 0x000000A6:
			return 0x00000026;
		
		case 0x000000AA:
			return 0x00000022;
		
		case 0x000000AB:
			return 0x00000023;
		
		case 0x000000AC:
			return 0x00000024;
		
		case 0x000000AD:
			return 0x00000025;
		
		case 0x000000B3:
			return 0x00000017;
		
		default:
	}
	return 0x00000000;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000A7:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000A9:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000A8:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000A6:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000BE:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000BF:
			iVar0 = 0x00000000;
			break;
		
		case 0x000000C0:
			iVar0 = 0x00000000;
			break;
	}
	return iVar0;
}

void func_129(int iParam0, int iParam1)
{
	if (func_123(unk_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0) && iParam1 > 0x00000000)
		{
			func_117(0x000027A3, (func_119(0x000027A3, 0xFFFFFFFF, 0x00000000) + iParam1), 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_11();
	if (iVar5 != func_10())
	{
		func_152(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_95(0x00000001);
	Var7.f_1 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x000000A8:
			if (!func_151())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 0x000000BE:
			if (func_122())
			{
				if (!func_151())
				{
					Var7 = { func_150() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_149(Var7)), func_148(Var7), iParam4);
				}
			}
			else if (func_151())
			{
				func_137(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 0x000000E2:
			if (func_136())
			{
				if (!func_151())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_149(func_135(unk_0xD803B885F5E47A62()))), 0x00000005, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 0x000000E6:
			if (func_136())
			{
				if (!func_151())
				{
					iVar2 = func_131(uParam5->f_10, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0x00000000)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0x00000000)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x13A30CD1AD15553C(iVar3, iParam4, iParam2, iVar2, uParam5->f_10);
				}
			}
			else if (func_151())
			{
				func_137(0x1B9AFE05, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3CF6953686BFBF61(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 0x000000E9:
			if (func_151())
			{
				func_137(0x53E15D9D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x53D560AAF6BF3D4E(iParam1);
			}
			break;
		
		case 0x000000ED:
			if (func_136())
			{
				if (!func_151())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 0x000000FA:
			if (func_151())
			{
				func_137(0xC6B7C57F, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA106C1682C790290(iParam1);
			}
			break;
		
		case 0x000000F9:
			if (func_151())
			{
				func_137(0x43ADDE78, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x546613D1293DBF87(iParam1);
			}
			break;
		
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F1:
		case 0x000000EF:
		case 0x000000F0:
			if (func_151())
			{
				func_137(0xDA2AD714, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x163F1C05711ACF77(iParam1);
			}
			break;
		
		case 0x000000F3:
			if (func_151())
			{
				func_137(0x653BCC2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 0x0000009E:
			if (uParam5->f_16)
			{
				if (func_151())
				{
					func_137(0x6374FB50, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0x00000000, 0x00000000, 0x00000001, iParam1, 0x00000000, 0x00000000);
				}
			}
			else if (func_151())
			{
				func_137(0x86DA0F67, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 0x00000001, iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		default:
			if (func_151())
			{
				func_137(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0C06D61FE6218C43(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_131(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_134(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_132(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_132(int iParam0, int iParam1)
{
	return (func_133(iParam0) * iParam1);
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000008:
			return Global_40001.f_5722;
		
		case 0x00000000:
			return Global_40001.f_5723;
		
		case 0x00000001:
			return Global_40001.f_5724;
		
		case 0x00000002:
			return Global_40001.f_5725;
		
		case 0x00000003:
			return Global_40001.f_5726;
		
		case 0x00000004:
			return Global_40001.f_5727;
		
		case 0x00000005:
			return Global_40001.f_5728;
		
		case 0x00000006:
			return Global_40001.f_5729;
		
		case 0x00000007:
			return Global_40001.f_572A;
		
		default:
	}
	return 0x00000000;
}

float func_134(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572C);
	switch (iParam0)
	{
		case 0xFFFFFFFF:
		case 0x00000008:
			return 0f;
		
		case 0x00000007:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 0x00000003:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 0x00000000:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 0x00000001:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 0x00000004:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 0x00000006:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 0x00000002:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 0x00000005:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_135(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[0x00000005 /*12*/];
}

bool func_136()
{
	return func_29(unk_0xD803B885F5E47A62());
}

void func_137(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_151())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_138(iParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_138(iParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_138(iParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_138(iParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_138(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_151())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_21()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_145(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_144(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_139(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_140(iParam0);
	}
}

void func_140(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_151())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_143(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_141(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_141(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_142(&(uParam0->f_E));
	func_142(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_142(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_144(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_151())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_146(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_146(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_46(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_147();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_147()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000003;
		
		case 0x00000002:
			return 0x00000001;
		
		case 0x00000003:
			return 0x00000004;
		
		case 0x00000004:
			return 0x00000002;
		
		case 0x00000005:
			return 0x00000000;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x00000004;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x0000000A:
			return 0x00000000;
		
		case 0x0000000B:
			return 0x00000003;
		
		case 0x0000000C:
			return 0x00000001;
		
		case 0x0000000D:
			return 0x00000004;
		
		case 0x0000000E:
			return 0x00000002;
		
		case 0x0000000F:
			return 0x00000000;
		
		case 0x00000010:
			return 0x00000003;
		
		case 0x00000011:
			return 0x00000001;
		
		case 0x00000012:
			return 0x00000004;
		
		case 0x00000013:
			return 0x00000002;
		
		case 0x00000014:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000005;
		
		case 0x00000016:
			return 0x00000005;
		
		case 0x00000017:
			return 0x00000005;
		
		case 0x00000018:
			return 0x00000005;
		
		case 0x00000019:
			return 0x00000005;
		
		case 0x0000001A:
			return 0x00000005;
		
		case 0x0000001B:
			return 0x00000005;
		
		case 0x0000001C:
			return 0x00000005;
		
		case 0x0000001D:
			return 0x00000005;
		
		case 0x0000001E:
			return 0x00000005;
		
		case 0x0000001F:
			return 0x00000005;
		
		default:
	}
	return 0xFFFFFFFF;
}

char* func_149(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 0x00000001:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 0x00000003:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 0x00000005:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 0x00000004:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 0x00000007:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 0x00000006:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 0x00000008:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 0x0000000A:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 0x00000009:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 0x0000000C:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 0x0000000B:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 0x0000000D:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 0x0000000F:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 0x0000000E:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 0x00000011:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 0x00000010:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 0x00000012:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 0x00000014:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 0x00000013:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 0x00000015:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 0x00000016:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 0x00000017:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 0x00000018:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 0x00000019:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 0x0000001A:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 0x0000001B:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 0x0000001C:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 0x0000001D:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 0x0000001E:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 0x0000001F:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_150()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

int func_151()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_152(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000000];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000001];
}

int func_153(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_154(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_154(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_164(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_160(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_155(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_155(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_158(iParam0, 0x00000001) };
	if (iParam0 == func_157(unk_0x16F2683693E537C9()))
	{
		func_156(0x00000001);
	}
	func_160(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_156(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_157(int iParam0)
{
	return iParam0;
}

Vector3 func_158(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(0x00000002) };
	}
	if (iParam0 == func_159(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_159(int iParam0)
{
	return iParam0;
}

void func_160(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0x00000000)
	{
		iVar1 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000014)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000007)
			{
				iVar1 = iVar0;
				iVar0 = 0x00000014;
			}
			iVar0++;
		}
		if (iVar1 != 0xFFFFFFFF)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 0x00000001;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_163(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_162();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_161();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_161()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_162()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_163(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 0x00000001);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_164(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_165(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_165(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_199(unk_0xD803B885F5E47A62()) || func_198(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_196() || func_195(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_194(sParam2))
	{
	}
	if (func_193())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_191(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_190(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_187(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_187(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_184(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_183(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_176((func_182(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_183(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_170(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_166((func_168(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_166((func_168(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_166(int iParam0)
{
	if (func_193())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_167(joaat("mpply_globalxp"), iParam0);
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_168(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_9(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_169(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_169(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_169(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_170(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_175(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_173(func_174(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_172(&Global_152D8B, iParam0);
				func_171(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_172(&Global_152D8C, iParam0);
				func_171(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_172(&Global_152D8D, iParam0);
				func_171(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_172(&Global_152D8E, iParam0);
				func_171(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_172(&Global_152D8F, iParam0);
				func_171(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_173(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_174(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

struct<13> func_175(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	if (func_193())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_120(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_120(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_15(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_180(iParam0, 0x00000001);
		}
		func_116(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_117(0x00000280, func_180(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_120(0xFFFFFFFF)] = iParam0;
		func_177(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_179(iParam1, iParam2))
	{
		iVar0 = func_178();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_178()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_179(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_181(iParam0, 0x00000000);
}

int func_181(int iParam0, int iParam1)
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

int func_182(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_120(0xFFFFFFFF)];
			}
			else if (func_15(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_120(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_119(iParam0, func_120(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_118(iParam0))
	{
		func_117(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_116(iParam0, iVar0, iParam2, 0x00000001);
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_70(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_186(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_185(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_185(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_185(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_186(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_175(iParam0) };
		Global_26594F = { func_175(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_187(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_9(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_186(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_9(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_188(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_186(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_185(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_185(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_188(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_189(iParam0), func_189(iParam1));
	return 0f;
}

Vector3 func_189(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_185(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_191(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_182(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_182(unk_0xD803B885F5E47A62());
		}
	}
	if (func_192(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_192(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_182(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_192(0x00001F40, 0x00000000, 0x00000000) - func_182(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_192(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_193()
{
	return 0x00000001;
}

int func_194(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_195(int iParam0)
{
	return func_107(func_32(iParam0));
}

bool func_196()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_84();
	}
	return func_197(Global_440000.f_2F9AE);
}

int func_197(int iParam0)
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

bool func_198(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_199(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_200()
{
	Global_25920D = 0x00000001;
}

void func_201(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0x00000000;
	*uParam2 = 0x00000000;
	if (!func_206(0x00000007))
	{
		return;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_203(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_202(iParam0) != 0xFFFFFFFF)
	{
		if (iVar2 > func_202(iParam0))
		{
			iVar2 = func_202(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_306B)
	{
		iVar2 = Global_40001.f_306B;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 0x00000001)
	{
		iVar3 = 0x00000001;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_202(int iParam0)
{
	if (func_113(iParam0, 0x00000000) || func_114(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_121(iParam0))
	{
		return Global_40001.f_4836;
	}
	switch (iParam0)
	{
		case 0x000000C0:
			return Global_40001.f_4833;
		
		case 0x000000BF:
			return Global_40001.f_4835;
		
		case 0x000000BE:
			return Global_40001.f_4834;
		
		case 0x000000E3:
			return Global_40001.f_5233;
		
		case 0x000000E2:
			return Global_40001.f_5227;
		
		case 0x000000E1:
			return Global_40001.f_523B;
		
		case 0x000000E6:
			return Global_40001.f_571F;
		
		case 0x000000E5:
			return Global_40001.f_56BF;
		
		case 0x000000E9:
			return Global_40001.f_58FB;
		
		case 0x000000ED:
			return Global_40001.f_5D86;
		
		case 0x000000EE:
			return Global_40001.f_5DF5;
		
		case 0x000000F9:
			return Global_40001.f_5E05;
		
		case 0x000000F3:
			return Global_40001.f_66BD;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000094:
			return Global_40001.f_30C6;
		
		case 0x00000098:
			return Global_40001.f_30E9;
		
		case 0x00000097:
			return 0x00000000;
		
		case 0x0000008E:
			return Global_40001.f_30DD;
		
		case 0x0000009D:
			return Global_40001.f_30BC;
		
		case 0x0000009F:
			return Global_40001.f_30AB;
		
		case 0x000000A4:
			return Global_40001.f_30D3;
		
		case 0x000000A0:
			return Global_40001.f_3105;
		
		case 0x000000A2:
			return Global_40001.f_3119;
		
		case 0x000000A3:
			return Global_40001.f_30F6;
		
		case 0x0000009A:
			return Global_40001.f_313C;
		
		case 0x0000009B:
			return Global_40001.f_3132;
		
		case 0x00000099:
			return Global_40001.f_310E;
		
		case 0x000000AA:
			return Global_40001.f_3A93;
		
		case 0x000000AB:
			return Global_40001.f_3ACE;
		
		case 0x000000AC:
			return Global_40001.f_3AE0;
		
		case 0x000000AD:
			return Global_40001.f_3AA5;
		
		case 0x000000A6:
			return Global_40001.f_3AB4;
		
		case 0x000000A7:
			return Global_40001.f_3B0F;
		
		case 0x000000A9:
			return Global_40001.f_3AF3;
		
		case 0x000000A8:
			return Global_40001.f_3AEC;
		
		case 0x000000B3:
			return Global_40001.f_47BE;
		
		case 0x000000B4:
			return Global_40001.f_46E0;
		
		case 0x000000B6:
			return Global_40001.f_46E0;
		
		case 0x000000B7:
			return Global_40001.f_46E0;
		
		case 0x000000B9:
			return Global_40001.f_46E0;
		
		case 0x000000BA:
			return Global_40001.f_46E0;
		
		case 0x000000BD:
			return Global_40001.f_47BE;
		
		case 0x000000BE:
			return Global_40001.f_4664;
		
		case 0x000000BF:
			return Global_40001.f_46BF;
		
		case 0x000000C0:
			return Global_40001.f_45F1;
		
		case 0x000000C1:
			return Global_40001.f_47BE;
		
		case 0x000000C2:
			return Global_40001.f_47BE;
		
		case 0x000000C3:
			return Global_40001.f_46E0;
		
		case 0x000000C5:
			return Global_40001.f_46E0;
		
		case 0x000000C6:
			return Global_40001.f_46E0;
		
		case 0x000000C7:
			return Global_40001.f_47BE;
		
		case 0x000000C8:
			return Global_40001.f_47BE;
		
		case 0x000000C9:
			return Global_40001.f_47BE;
		
		case 0x000000CD:
			return Global_40001.f_47BE;
		
		case 0x000000CF:
			return Global_40001.f_46E0;
		
		case 0x000000D0:
			return Global_40001.f_46E0;
		
		case 0x000000D1:
			return Global_40001.f_46E0;
		
		case 0x000000D2:
			return Global_40001.f_47BE;
		
		case 0x000000D3:
			return Global_40001.f_47BE;
		
		case 0x000000D6:
			return Global_40001.f_4B10;
		
		case 0x000000D7:
			return Global_40001.f_4B12;
		
		case 0x000000D8:
			return Global_40001.f_4B14;
		
		case 0x000000D9:
			return Global_40001.f_4B16;
		
		case 0x000000DA:
			return Global_40001.f_4B18;
		
		case 0x000000DB:
			return Global_40001.f_4B1A;
		
		case 0x000000DC:
			return Global_40001.f_4B1C;
		
		case 0x000000DD:
			return Global_40001.f_4B1E;
		
		case 0x000000E1:
			if (!func_136())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 0x000000E2:
			if (!func_136())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 0x000000E3:
			if (!func_136())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 0x000000E5:
			if (!func_136())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 0x000000E6:
			if (!func_136())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 0x000000E9:
			if (!func_136())
			{
				return Global_40001.f_58FA;
			}
			break;
		
		case 0x000000F1:
			return 0x00000064;
		
		case 0x000000F2:
			return 0x00000064;
		
		case 0x000000F4:
			return 0x00000064;
		
		case 0x000000F8:
			return 0x00000064;
		
		case 0x000000EF:
			return 0x00000064;
		
		case 0x000000F0:
			return 0x00000064;
		
		case 0x000000FA:
			return 0x00000064;
		
		case 0x000000ED:
			if (!func_136())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 0x000000EE:
			if (!func_136())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 0x000000F9:
			if (!func_136())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 0x000000F3:
			if (!func_136())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 0x0000009E:
			if (!func_136())
			{
				return 0x00000064;
			}
			break;
	}
	return 0x00000000;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000094:
			return Global_40001.f_30C5;
		
		case 0x00000098:
			return Global_40001.f_30E8;
		
		case 0x00000097:
			return 0x00000000;
		
		case 0x0000008E:
			return Global_40001.f_30DC;
		
		case 0x0000009D:
			return Global_40001.f_30BB;
		
		case 0x0000009F:
			return Global_40001.f_30AA;
		
		case 0x000000A4:
			return Global_40001.f_30D2;
		
		case 0x000000A0:
			return Global_40001.f_3104;
		
		case 0x000000A2:
			return Global_40001.f_3118;
		
		case 0x000000A3:
			return Global_40001.f_30F5;
		
		case 0x0000009A:
			return Global_40001.f_313B;
		
		case 0x0000009B:
			return Global_40001.f_3131;
		
		case 0x00000099:
			return Global_40001.f_310D;
		
		case 0x000000AA:
			return Global_40001.f_3A92;
		
		case 0x000000AB:
			return Global_40001.f_3ACD;
		
		case 0x000000AC:
			return Global_40001.f_3ADF;
		
		case 0x000000AD:
			return Global_40001.f_3AA4;
		
		case 0x000000A6:
			return Global_40001.f_3AB3;
		
		case 0x000000B3:
			return Global_40001.f_47BD;
		
		case 0x000000B4:
			return Global_40001.f_46DF;
		
		case 0x000000B6:
			return Global_40001.f_46DF;
		
		case 0x000000B7:
			return Global_40001.f_46DF;
		
		case 0x000000B9:
			return Global_40001.f_46DF;
		
		case 0x000000BA:
			return Global_40001.f_46DF;
		
		case 0x000000BD:
			return Global_40001.f_47BD;
		
		case 0x000000C1:
			return Global_40001.f_47BD;
		
		case 0x000000C2:
			return Global_40001.f_47BD;
		
		case 0x000000C3:
			return Global_40001.f_46DF;
		
		case 0x000000C5:
			return Global_40001.f_46DF;
		
		case 0x000000C6:
			return Global_40001.f_46DF;
		
		case 0x000000C7:
			return Global_40001.f_47BD;
		
		case 0x000000C8:
			return Global_40001.f_47BD;
		
		case 0x000000C9:
			return Global_40001.f_47BD;
		
		case 0x000000CD:
			return Global_40001.f_47BD;
		
		case 0x000000CF:
			return Global_40001.f_46DF;
		
		case 0x000000D0:
			return Global_40001.f_46DF;
		
		case 0x000000D1:
			return Global_40001.f_46DF;
		
		case 0x000000D2:
			return Global_40001.f_47BD;
		
		case 0x000000D3:
			return Global_40001.f_47BD;
		
		case 0x000000BE:
			if (func_205(0x00000000))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000BF:
			if (func_205(0x00000000))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000C0:
			if (func_205(0x00000000))
			{
				return Global_40001.f_45F0;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000D6:
			return Global_40001.f_4B0F;
		
		case 0x000000D7:
			return Global_40001.f_4B11;
		
		case 0x000000D8:
			return Global_40001.f_4B13;
		
		case 0x000000D9:
			return Global_40001.f_4B15;
		
		case 0x000000DA:
			return Global_40001.f_4B17;
		
		case 0x000000DB:
			return Global_40001.f_4B19;
		
		case 0x000000DC:
			return Global_40001.f_4B1B;
		
		case 0x000000DD:
			return Global_40001.f_4B1D;
		
		case 0x000000E1:
			if (func_205(0x00000000))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 0x000000E2:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 0x000000E3:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 0x000000E5:
			if (func_205(0x00000000))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 0x000000E6:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 0x000000E9:
			if (func_205(0x00000000))
			{
				return Global_40001.f_58FC;
			}
			break;
		
		case 0x000000F1:
			return 0x000001F4;
		
		case 0x000000F2:
			return 0x000001F4;
		
		case 0x000000F4:
			return 0x000001F4;
		
		case 0x000000F8:
			return 0x000001F4;
		
		case 0x000000EF:
			return 0x000001F4;
		
		case 0x000000F0:
			return 0x000001F4;
		
		case 0x000000FA:
			return 0x000001F4;
		
		case 0x000000ED:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 0x000000EE:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 0x000000F9:
			if (func_205(0x00000000))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 0x000000F3:
			return Global_40001.f_66BC;
		
		case 0x0000009E:
			if (func_205(0x00000000))
			{
				return 0x000001F4;
			}
			break;
	}
	return 0x00000000;
}

bool func_205(bool bParam0)
{
	return func_6(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_206(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_136())
		{
			if (func_95(0x00000000))
			{
				if (!func_205(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_11()))
					{
						if (func_220() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_220());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_218(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_211("GB_BCUT_TICK1", func_11(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_93(0x00000014);
						func_208(func_11(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_210(iParam0);
		func_209(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_46(iParam0));
	}
}

void func_209(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_210(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

int func_211(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_63(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_216(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_212(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_212(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_215() || !unk_0xA14BB9332558B949()) || !func_19(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_213(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_214(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_215()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_216(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_217(&cVar0);
}

var func_217(char[4] cParam0)
{
	return cParam0;
}

void func_218(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_219(0x00000001);
	}
	else
	{
		iVar1 = func_219(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_220()
{
	return Global_40001.f_3065;
}

void func_221(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_205(0x00000001);
	bVar19 = 0x00000000;
	if (iParam0 == 0x000000ED)
	{
		if (func_136())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != 0xFFFFFFFF)
		{
			iVar0 = Global_184507[iVar11 /*876*/].f_356.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = 0x00000001;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_184507[iVar11 /*876*/].f_356.f_2;
			}
			else
			{
				iVar2 = func_237(Global_184507[iVar11 /*876*/].f_356, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 0x000186A0)
				{
					iVar20 = 0x000186A0;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_236(*iParam2);
			if (iVar10 > 0x00000000)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_235("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0x00000000)
				{
					func_234(iVar2);
				}
				if (*uParam3 > 0x00000000)
				{
					func_232(*uParam3);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = Global_40001.f_5DA5;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5DA4));
				iVar8 = ((*iParam2 / 0x00000064) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0x00000000)
				{
					if (iVar6 > 0x00000000)
					{
						func_93(0x0000008C);
					}
				}
				if (*iParam2 > 0x00000000)
				{
					if (!bVar18)
					{
						iVar21 = 0x00000000;
						while (iVar21 < unk_0x54EABC0DD106045B())
						{
							iVar22 = iVar21;
							if (unk_0x81A93C8315C28F58(iVar22))
							{
								iVar23 = unk_0x4B2BFE4A3BC248ED(iVar22);
								if (func_230(iVar23))
								{
									func_222(iVar23, 0x00000001, 0x0BD072F5);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5D89;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5D8A;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0x00000000)
				{
					Global_19BCC3 = *iParam2;
					func_93(0x00000079);
				}
			}
			else
			{
				*iParam2 = 0x00000000;
			}
		}
	}
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_224(iParam0);
	func_223(iParam0, uVar0, iParam1, iParam2);
}

void func_223(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 0xDC237E54;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_210(iParam0);
	func_209(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_46(iParam0));
		}
	}
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_229();
	iVar0 = func_227(iParam0, iVar0);
	iVar1 = Global_18D84D[func_11() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_226())
	{
		iVar0 = func_226();
	}
	if (iVar0 > func_225())
	{
		iVar0 = func_225();
	}
	return iVar0;
}

int func_225()
{
	return Global_40001.f_3A6C;
}

int func_226()
{
	return Global_40001.f_3F03;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_288(iParam0) * func_228());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_228()
{
	return Global_40001.f_3F02;
}

var func_229()
{
	return Global_40001.f_305D;
}

int func_230(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_48(iParam0, unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!func_36(iParam0, 0x0000001A))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (!func_19(iVar2, 0x00000000) && !func_48(iVar2, unk_0xD803B885F5E47A62(), 0x00000001))
			{
				iVar1++;
			}
			else if (func_19(iVar2, 0x00000000))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_232(int iParam0)
{
	func_233(iParam0, 0x00001C44);
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0x00000000)
	{
		return;
	}
	iVar0 = func_119(iParam1, 0xFFFFFFFF, 0x00000000);
	func_117(iParam1, (iVar0 + iParam0), 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_234(int iParam0)
{
	func_233(iParam0, 0x00001C3F);
}

int func_235(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_212(0x00000003, sParam0, 0x00000001, "", iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

int func_236(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5DA6);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_237(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 0x00000001 || Param0.f_4 == 0x00000002) || Param0.f_4 == 0x00000003)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_238(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0x00000000;
	bVar16 = func_205(0x00000001);
	bVar17 = 0x00000000;
	if (iParam0 == 0x000000E5)
	{
	}
	else if (iParam0 == 0x000000E6)
	{
		if (func_136())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 0xFFFFFFFF)
		{
			iVar0 = (uParam1->f_F + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = 0x00000001;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_132(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_131(uParam1->f_10, *uParam3);
				if (iVar9 > 0x00000000)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_240(*iParam2) > 0x00000000)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_235("SMTICK_RONCUT", func_240(*iParam2));
				}
				*iParam2 = (*iParam2 - func_240(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_239(iVar2, iVar9);
				iVar6 = func_231(&uVar5);
				iVar7 = Global_40001.f_5732;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5731));
				*uParam4 = ((*iParam2 / 0x00000064) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0x00000000)
				{
					if (iVar6 > 0x00000000)
					{
						func_93(0x0000002C);
					}
				}
				if (*iParam2 > 0x00000000)
				{
					if (!bVar16)
					{
						iVar18 = 0x00000000;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 0x00000001, 0x452A8913);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_56EF;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_56F0;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0x00000000)
				{
					Global_19BCC3 = *iParam2;
					func_93(0x00000079);
				}
			}
			else
			{
				*iParam2 = 0x00000000;
			}
		}
	}
}

void func_239(int iParam0, int iParam1)
{
	if (iParam0 > 0x00000000)
	{
		func_233(iParam0, 0x000017E4);
	}
	if (iParam1 > 0x00000000)
	{
		func_233(iParam1, 0x000017E5);
	}
}

int func_240(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5711);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_5712))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_5712);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_241(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_205(0x00000001);
	if (iParam0 == 0x000000E1)
	{
	}
	else if (iParam0 == 0x000000E2)
	{
		if (func_136())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 0xFFFFFFFF)
		{
			iVar16 = func_135(iVar15);
			iVar0 = (func_266(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_262(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0x00000000)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522B));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522A));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_256(iVar16, iVar2);
				if (func_252(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_242(0x00000005);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_522D);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_522C));
				iVar9 = ((*iParam2 / 0x00000064) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0x00000000)
				{
					if (iVar6 > 0x00000000)
					{
						func_93(0x0000006C);
					}
					else
					{
						func_93(0x0000006E);
					}
				}
				if (*iParam2 > 0x00000000)
				{
					if (!bVar17)
					{
						iVar18 = 0x00000000;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 0x00000001, 0x8E720CF6);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_522E;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_522F;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0x00000000)
				{
					Global_19BCC3 = *iParam2;
					func_93(0x00000070);
				}
			}
			else
			{
				*iParam2 = 0x00000000;
			}
		}
	}
	else if (iParam0 == 0x000000E3)
	{
	}
}

void func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_40001.f_505B)
			{
				if (func_244(Global_40001.f_505C))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (Global_40001.f_505D)
			{
				if (func_244(Global_40001.f_505E))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000002:
			if (Global_40001.f_505F)
			{
				if (func_244(Global_40001.f_5060))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if (Global_40001.f_5061)
			{
				if (func_244(Global_40001.f_5062))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000004:
			if (Global_40001.f_5063)
			{
				if (func_244(Global_40001.f_5064))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_5065)
			{
				if (func_244(Global_40001.f_5066))
				{
					func_235("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_5068)
			{
				if (func_244(Global_40001.f_5069))
				{
					func_235("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 0x00000007:
			if (Global_40001.f_506B)
			{
				if (func_244(Global_40001.f_506C))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000008:
			if (Global_40001.f_506D)
			{
				if (func_244(Global_40001.f_506E))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000009:
			if (Global_40001.f_506F)
			{
				if (func_244(Global_40001.f_5070))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000A:
			if (Global_40001.f_5071)
			{
				if (func_244(Global_40001.f_5072))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000B:
			if (Global_40001.f_5073)
			{
				if (func_244(Global_40001.f_5074))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000C:
			if (Global_40001.f_5075)
			{
				if (func_244(Global_40001.f_5076))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000D:
			if (Global_40001.f_5077)
			{
				if (func_244(Global_40001.f_5078))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000E:
			if (Global_40001.f_5079)
			{
				if (func_244(Global_40001.f_507A))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
	}
}

int func_243(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	if (!iParam3 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam3);
	}
	unk_0x6B012227B3921E18(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	}
	else
	{
		Global_265942 = { func_175(unk_0xD803B885F5E47A62()) };
		if (unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942))
		{
			iVar1 = 0x00000000;
			if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0x00000000)
			{
				iVar1 = 0x00000001;
			}
			if (Global_2658FC.f_15 > 0x00000000)
			{
				iVar2 = 0x00000000;
			}
			else
			{
				iVar2 = 0x00000001;
			}
			iVar0 = unk_0x0D020422A92A2236(iVar2, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar1, 0x00000000, Global_2658FC, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), Global_140CF2, Global_140CF3, Global_140CF4);
		}
		else
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
	}
	func_212(0x00000008, sParam0, 0x00000001, sParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0x214E789B:
		case 0x67B8E796:
		case 0xB8FB5DD8:
		case 0x9890C781:
			if (!func_249(0x00003C39, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C39, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x7DB23159:
		case 0xF8CB09BC:
		case 0xAC1E4402:
		case 0x866B2336:
			if (!func_249(0x00003C3A, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3A, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x712C9344:
		case 0xAEFC4B44:
		case 0xF798903C:
		case 0x91B16E07:
			if (!func_249(0x00003C41, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C41, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	switch (iParam0)
	{
		case 0xD68D9367:
		case 0x4B4F5A01:
		case 0xB213F3DD:
		case 0x0F6A35C0:
			if (!func_249(0x00003C2D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x78A65796:
		case 0x722AA7B7:
		case 0xDDF245CD:
		case 0x51EEC028:
			if (!func_249(0x00003C21, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C21, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6693B371:
		case 0x5FD90314:
		case 0x33B27150:
		case 0xD8A4CD92:
			if (!func_249(0x00003C31, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C31, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x0D3980BE:
		case 0x948F6C80:
		case 0xC4161215:
		case 0xE69B697F:
			if (!func_249(0x00003C24, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C24, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x82ED6C24:
		case 0xB8A7B4B0:
		case 0xB1A3ED2D:
		case 0xBC7F1547:
			if (!func_249(0x00003C34, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C34, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBA195A7B:
		case 0xA676104D:
		case 0x422A8E38:
		case 0xCAF8B23A:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8FC105CB:
		case 0xDD277DAF:
		case 0x9877BAD5:
		case 0xF51D8687:
			if (!func_249(0x00003C2B, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2B, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x56631310:
		case 0xCAE8D932:
		case 0xA6C5D771:
		case 0x02E7221A:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xCC24FE92:
		case 0xDD5C7E1D:
		case 0x6CEAE3B8:
		case 0xD971CF28:
			if (!func_249(0x00003C1D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C1D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xDFA825A0:
		case 0xCC1DDBA0:
		case 0x19133C0A:
		case 0xE7A86B95:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2EF466EB:
		case 0x43850602:
		case 0x4F502883:
		case 0x6659E8FE:
			if (!func_249(0x00003C26, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C26, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	switch (iParam0)
	{
		case 0xAEDF4CEB:
		case 0xFB9C39E4:
		case 0xC23709CD:
		case 0x96BFC79A:
		case 0x894DF3E7:
		case 0x98C9B60F:
			if (!func_249(0x00003C28, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C28, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBA69E400:
		case 0xED519D4F:
		case 0xF3E5ED2A:
		case 0xA49B6351:
		case 0x7B17577A:
		case 0xE8BFD5FA:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x827EF42B:
		case 0xD65DEF68:
		case 0x36B172C0:
		case 0x37FC8A15:
		case 0xFCA35A90:
		case 0xAE67E14B:
			if (!func_249(0x00003C30, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C30, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x90D790DC:
		case 0xC00CC2C6:
		case 0x28AAD6B3:
		case 0x46BFA79B:
		case 0xEE8DBE65:
		case 0x84B18DDF:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x67113D50:
		case 0x7E073EA0:
		case 0x1CACBEB7:
		case 0x5DE855EC:
		case 0xD95293EF:
		case 0xDB83BB82:
			if (!func_249(0x00003C33, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C33, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x7542D9B3:
		case 0x68581342:
		case 0x06D59309:
		case 0x6A486EAC:
		case 0xCAFFF74A:
		case 0x2FC36400:
			if (!func_249(0x00003C25, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C25, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x4715FD3E:
		case 0x4F516135:
		case 0x7120E79E:
		case 0x7AC70F99:
		case 0x33AEC8A6:
		case 0xF74172FD:
			if (!func_249(0x00003C35, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C35, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x561D9B69:
		case 0x4BDB5A49:
		case 0x5F744445:
		case 0x88EDABE6:
		case 0x25652C13:
		case 0xCD771F69:
			if (!func_249(0x00003C1F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C1F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1A7A2407:
		case 0xA2CC882A:
		case 0x73346B89:
		case 0x9F9B5941:
		case 0x12640611:
		case 0x6447CD08:
			if (!func_249(0x00003C1C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C1C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2A04C31C:
		case 0xD5146CB9:
		case 0x60EB46F7:
		case 0xAD08741B:
		case 0x021D6584:
		case 0x78FEF676:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBCF65F78:
		case 0xCD549C15:
		case 0x373A93C8:
		case 0x92BF1970:
		case 0x5BC14F3C:
		case 0x521A75B2:
			if (!func_249(0x00003C29, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C29, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	switch (iParam0)
	{
		case 0x3D5A6789:
		case 0xECCD468C:
		case 0xA059A739:
		case 0xCE25CFB3:
			if (!func_249(0x00003C22, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C22, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xE01EC0C2:
		case 0xBA58F5A7:
		case 0xAE83438C:
		case 0xC4093B7A:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xE1396132:
		case 0x2D1CF8F0:
		case 0x053670F1:
		case 0xAA3E07E4:
			if (!func_249(0x00003C2E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1CEA92F7:
		case 0xD47C8234:
		case 0x9B779D75:
		case 0xBEC6B109:
			if (!func_249(0x00003C23, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C23, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6622BA7D:
		case 0xC627FA8A:
		case 0x76BED404:
		case 0xAF9C12B4:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xA7265B3B:
		case 0x3A268121:
		case 0x8CB0FFE8:
		case 0x6A778868:
			if (!func_249(0x00003C32, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C32, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x988C4EDA:
		case 0x6036DE30:
		case 0xC25DEB41:
		case 0x9140D5FA:
			if (!func_249(0x00003C2F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x731D5C14:
		case 0xD4B99F4F:
		case 0x682636D3:
		case 0x49C4C703:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8CDDDB30:
		case 0x9338E7E6:
		case 0x0E1702BA:
		case 0x7676A066:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x991A4273:
		case 0x18E3C204:
		case 0x23452D16:
		case 0x362E1FD6:
			if (!func_249(0x00003C36, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C36, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xAD9246DE:
		case 0x2BC24344:
		case 0xEAAEE50E:
		case 0xC3159D14:
			if (!func_249(0x00003C37, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C37, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1AFCDAB0:
		case 0x96AFD210:
		case 0x1C9748E2:
		case 0x9D5D51A4:
			if (!func_249(0x00003C27, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C27, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x961854B2:
		case 0x228B6D9A:
		case 0x0E7AACA9:
		case 0xAE98F41B:
			if (!func_249(0x00003C2C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8980A731:
		case 0xDB0F4A4D:
		case 0xB74C7E4A:
		case 0xE8DC68A1:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x30ADF951:
		case 0x54E741C7:
		case 0xA20153B4:
		case 0x7C680FBA:
			if (!func_249(0x00003C20, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C20, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2C5F58EE:
		case 0xAC40D8AF:
		case 0xDADF456F:
		case 0x3A840BF3:
			if (!func_249(0x00003C1E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C1E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x36B41A07:
		case 0x72FB128C:
		case 0xC5851ABB:
		case 0x4BC8AE7C:
			if (!func_249(0x00003C2A, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C2A, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xEE8A5C0D:
		case 0xFDF0FADA:
		case 0x8E372C24:
		case 0x95994218:
			if (!func_249(0x00003C38, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C38, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xA6DD8213:
		case 0x7129170F:
		case 0x78F2019A:
		case 0xA556E193:
			if (!func_247(0x000000D1, 0xFFFFFFFF))
			{
				func_245(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	switch (iParam0)
	{
		case 0x816E2F02:
		case 0x56E5CC0A:
		case 0xFF258BBB:
		case 0x24F0F4B1:
			if (!func_249(0x00003C42, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C42, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xCF614D59:
		case 0xC0742F6F:
		case 0x4C642637:
		case 0xA57575B8:
			if (!func_249(0x00003C3E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xB164AC55:
		case 0xAE890CA5:
		case 0x1AA842C0:
		case 0x770218D2:
			if (!func_249(0x00003C3F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x123EDE58:
		case 0x73EBA1B4:
		case 0x10A02EB4:
		case 0x89E0BE8F:
			if (!func_249(0x00003C3D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6CF69C83:
		case 0x9E4A6D8D:
		case 0xDE774A5F:
		case 0xCB9741FB:
			if (!func_249(0x00003C43, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C43, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xC9345EC4:
		case 0x4C726542:
		case 0x2D07E783:
		case 0x4C0FC2E2:
			if (!func_249(0x00003C3B, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3B, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x757CC6E1:
		case 0xCB4AF284:
		case 0xFAE00334:
		case 0x5DC36649:
			if (!func_249(0x00003C3C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_248(0x00003C3C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_246())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_120(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_246()
{
	return 0x00000001;
	return 0x00000000;
}

int func_247(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_120(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_248(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_21();
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

int func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_21();
	}
	iVar1 = func_251(iParam0, iParam1);
	uVar2 = func_250(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_21();
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

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(iParam0);
	return func_119(func_253(iVar0), 0xFFFFFFFF, 0x00000000);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000F6F;
		
		case 0x00000001:
			return 0x00000F70;
		
		case 0x00000002:
			return 0x00000F71;
		
		case 0x00000003:
			return 0x00000F72;
		
		case 0x00000004:
			return 0x00000F73;
		
		case 0x00000005:
			return 0x00001550;
		
		default:
	}
	return 0x00000F6F;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_255(int iParam0)
{
	if (iParam0 == 0x00000020 || iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_254(iParam0);
	iVar1 = func_253(iVar0);
	iVar2 = (func_119(iVar1, 0xFFFFFFFF, 0x00000000) + iParam1);
	func_117(iVar1, iVar2, 0xFFFFFFFF, 0x00000001, 0x00000000);
	if (iVar0 == 0x00000005)
	{
		return;
	}
	if (func_259(0x0000248D, 0xFFFFFFFF, 0xFFFFFFFF) < 0x00000003)
	{
		iVar3 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0x00000000)
			{
				iVar1 = func_253(iVar0);
				iVar3 = (iVar3 + func_119(iVar1, 0xFFFFFFFF, 0x00000000));
			}
			iVar0++;
		}
		iVar4 = 0x00000001;
		while (iVar4 <= 0x00000003)
		{
			if (iVar3 >= func_258(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_257(0x0000248D, iVar5, 0xFFFFFFFF, 0x00000001);
	}
}

var func_257(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_21();
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

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x000186A0;
			break;
		
		case 0x00000002:
			return 0x000493E0;
			break;
		
		case 0x00000003:
			return 0x0007A120;
			break;
	}
	return 0x00000000;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_21();
	}
	iVar0 = 0x00000000;
	iVar1 = func_261(iParam0, iParam1);
	iVar2 = func_260(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_260(int iParam0)
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

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_21();
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

int func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_148(iParam1);
	if (func_255(iParam1))
	{
		switch (iVar1)
		{
			case 0x00000001:
				iVar0 = Global_40001.f_4240;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000003:
				iVar0 = Global_40001.f_423F;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000004:
				iVar0 = Global_40001.f_423E;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000000:
				iVar0 = Global_40001.f_423C;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000002:
				iVar0 = Global_40001.f_423D;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000005:
				iVar0 = Global_40001.f_5244;
				if (func_263(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_263(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0x00000000;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_267(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 0x000000C0)
	{
	}
	else if (iParam0 == 0x000000BE)
	{
		if (uParam1->f_A > 0x00000000)
		{
			if (func_122())
			{
				Var0 = { func_150() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_262(unk_0xD803B885F5E47A62(), Var0, *uParam3);
				if (Var0.f_1 == 0x00000001)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A3);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A2);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_231(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4899);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4898));
				iVar13 = ((*iParam2 / 0x00000064) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 0x0000000B)
					{
						if (*uParam1 > 0x00000000)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 0x00000009)
					{
						if (*uParam1 > 0x00000000)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0x00000000)
				{
					func_93(0x00000056);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_205(0x00000000))
			{
				Var14 = { func_268(func_11()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_262(func_11(), Var14, *uParam3);
				if (Var14.f_1 == 0x00000001)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A3));
				}
				else if (Var14.f_1 == 0x00000000)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A2));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_48CA;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_48CB;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 0x0000000B)
					{
						if (*uParam1 > 0x00000000)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_268(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_269(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 0x000000A7)
	{
		if (func_29(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_284();
			}
			func_283();
		}
	}
	else if (iParam0 == 0x000000A8)
	{
		if (bParam1)
		{
			if (func_29(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_275(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0x00000000)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_274(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_231(&uVar2);
					iVar4 = Global_40001.f_3F0D;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3BF6));
					iVar6 = ((*iParam3 / 0x00000064) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0x00000000 && uParam2->f_9 != 0x00000004)
					{
						func_93(0x0000002C);
					}
				}
				func_272(*iParam3);
				func_271();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0x00000000;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_230(iVar9))
						{
							func_222(iVar9, 0x00000001, 0xB2F6B863);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(unk_0xD803B885F5E47A62()))
		{
			func_270();
		}
	}
}

void func_270()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_21()];
	iVar0++;
	func_116(0x00000E53, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_271()
{
	int iVar0;
	
	iVar0 = Global_277695[func_21()];
	iVar0++;
	func_116(0x00000E52, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_21()];
	iVar0 = (iVar0 + iParam0);
	func_116(0x00000E54, iVar0, 0xFFFFFFFF, 0x00000001);
	if (func_259(0x00001DF2, 0xFFFFFFFF, 0xFFFFFFFF) < 0x00000018)
	{
		iVar1 = 0x00000001;
		while (iVar1 <= 0x00000018)
		{
			if (iVar0 >= func_273(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_257(0x00001DF2, iVar2, 0xFFFFFFFF, 0x00000001);
	}
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_3F92;
			break;
		
		case 0x00000002:
			return Global_40001.f_3F93;
			break;
		
		case 0x00000003:
			return Global_40001.f_3F94;
			break;
		
		case 0x00000004:
			return Global_40001.f_3F95;
			break;
		
		case 0x00000005:
			return Global_40001.f_3F96;
			break;
		
		case 0x00000006:
			return Global_40001.f_3F97;
			break;
		
		case 0x00000007:
			return Global_40001.f_3F98;
			break;
		
		case 0x00000008:
			return Global_40001.f_3F99;
			break;
		
		case 0x00000009:
			return Global_40001.f_3F9A;
			break;
		
		case 0x0000000A:
			return Global_40001.f_3F9B;
			break;
		
		case 0x0000000B:
			return Global_40001.f_3F9C;
			break;
		
		case 0x0000000C:
			return Global_40001.f_3F9D;
			break;
		
		case 0x0000000D:
			return Global_40001.f_3F9E;
			break;
		
		case 0x0000000E:
			return Global_40001.f_3F9F;
			break;
		
		case 0x0000000F:
			return Global_40001.f_3FA0;
			break;
		
		case 0x00000010:
			return Global_40001.f_3FA1;
			break;
		
		case 0x00000011:
			return Global_40001.f_3FA2;
			break;
		
		case 0x00000012:
			return Global_40001.f_3FA3;
			break;
		
		case 0x00000013:
			return Global_40001.f_3FA4;
			break;
		
		case 0x00000014:
			return Global_40001.f_3FA5;
			break;
		
		case 0x00000015:
			return Global_40001.f_3FA6;
			break;
		
		case 0x00000016:
			return Global_40001.f_3FA7;
			break;
		
		case 0x00000017:
			return Global_40001.f_3FA8;
			break;
		
		case 0x00000018:
			return Global_40001.f_3FA9;
			break;
	}
	return 0x00000000;
}

var func_274(int iParam0)
{
	if (iParam0 >= Global_40001.f_3BE0)
	{
		return Global_40001.f_3BF5;
	}
	else if (iParam0 >= Global_40001.f_3BDF)
	{
		return Global_40001.f_3BF4;
	}
	else if (iParam0 >= Global_40001.f_3BDE)
	{
		return Global_40001.f_3BF3;
	}
	else if (iParam0 >= Global_40001.f_3BDD)
	{
		return Global_40001.f_3BF2;
	}
	else if (iParam0 >= Global_40001.f_3BDC)
	{
		return Global_40001.f_3BF1;
	}
	else if (iParam0 >= Global_40001.f_3BDB)
	{
		return Global_40001.f_3BF0;
	}
	else if (iParam0 >= Global_40001.f_3BDA)
	{
		return Global_40001.f_3BEF;
	}
	else if (iParam0 >= Global_40001.f_3BD9)
	{
		return Global_40001.f_3BEE;
	}
	else if (iParam0 >= Global_40001.f_3BD8)
	{
		return Global_40001.f_3BED;
	}
	else if (iParam0 >= Global_40001.f_3BD7)
	{
		return Global_40001.f_3BEC;
	}
	else if (iParam0 >= Global_40001.f_3BD6)
	{
		return Global_40001.f_3BEB;
	}
	else if (iParam0 >= Global_40001.f_3BD5)
	{
		return Global_40001.f_3BEA;
	}
	else if (iParam0 >= Global_40001.f_3BD4)
	{
		return Global_40001.f_3BE9;
	}
	else if (iParam0 >= Global_40001.f_3BD3)
	{
		return Global_40001.f_3BE8;
	}
	else if (iParam0 >= Global_40001.f_3BD2)
	{
		return Global_40001.f_3BE7;
	}
	else if (iParam0 >= Global_40001.f_3BD1)
	{
		return Global_40001.f_3BE6;
	}
	else if (iParam0 >= Global_40001.f_3BD0)
	{
		return Global_40001.f_3BE5;
	}
	else if (iParam0 >= Global_40001.f_3BCF)
	{
		return Global_40001.f_3BE4;
	}
	else if (iParam0 >= Global_40001.f_3BCE)
	{
		return Global_40001.f_3BE3;
	}
	else if (iParam0 >= Global_40001.f_3BCD)
	{
		return Global_40001.f_3BE2;
	}
	return Global_40001.f_3BE1;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_282(iParam0))
	{
		iVar2 = 0x00000001;
		while (iVar2 <= 0x00000006)
		{
			iVar3 = iVar2;
			if (func_281(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_280(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_276(iParam0))
		{
			iVar2 = 0x00000000;
			while (iVar2 <= (func_276(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_280(unk_0x09AC81E49EA267F7(0x00000001, 0x00000006)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = func_277(func_278(iParam0));
		return func_119(iVar0, 0xFFFFFFFF, 0x00000000);
	}
	return 0x00000000;
}

int func_277(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000E3E;
	}
	else if (iParam0 == 0x00000001)
	{
		return 0x00000E3F;
	}
	else if (iParam0 == 0x00000002)
	{
		return 0x00000E40;
	}
	else if (iParam0 == 0x00000003)
	{
		return 0x00000E41;
	}
	else if (iParam0 == 0x00000004)
	{
		return 0x00000E42;
	}
	return 0x00000E3E;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000004)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_279(int iParam0)
{
	if (iParam0 < 0x00000001 || iParam0 > 0x00000016)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_280(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		return Global_40001.f_3CA8;
	}
	else if (iParam0 == 0x00000002)
	{
		return Global_40001.f_3CA6;
	}
	else if (iParam0 == 0x00000003)
	{
		return Global_40001.f_3CAA;
	}
	else if (iParam0 == 0x00000004)
	{
		return Global_40001.f_3CA4;
	}
	else if (iParam0 == 0x00000005)
	{
		return Global_40001.f_3CA2;
	}
	else if (iParam0 == 0x00000006)
	{
		return Global_40001.f_3CAC;
	}
	return 0x00000000;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000006)
		{
			if (Global_199337[iVar0] == iParam1 && Global_19933E[iVar0] == iParam0)
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000004)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_283()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_21()];
	iVar0++;
	Global_27768C[func_21()] = iVar0;
	func_116(0x00000E51, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_284()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_21()];
	iVar1 = Global_277692[func_21()];
	iVar0++;
	iVar1++;
	Global_277689[func_21()] = iVar0;
	Global_277692[func_21()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_116(0x00000E4F, iVar0, 0xFFFFFFFF, 0x00000001);
	func_116(0x00000E50, iVar1, 0xFFFFFFFF, 0x00000001);
}

void func_285()
{
	if (func_136())
	{
		Global_2567E2.f_C02.f_86 = 0x00000000;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_286()
{
	if (func_136())
	{
		if (Global_2567E2.f_C02.f_86 < 0x0000000A)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_287()
{
	if (func_136())
	{
		if (Global_2567E2.f_C02.f_86 > 0x00000000)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 0x00000001);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_288(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000B2:
		case 0x000000BC:
			return 0x00000001;
		
		case 0x000000E1:
		case 0x000000E2:
		case 0x000000E5:
		case 0x000000E6:
		case 0x000000E9:
		case 0x000000ED:
		case 0x0000009E:
			if (func_95(0x00000001) && !func_205(0x00000001))
			{
				if (func_290(func_11()))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_290(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

int func_291(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_40001.f_4769;
	}
	switch (iParam0)
	{
		case 0x0000008E:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DA) * Global_40001.f_30DF));
		
		case 0x0000009D:
			return 0x00000000;
		
		case 0x0000009F:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A8) * Global_40001.f_30AD));
		
		case 0x00000097:
			return 0x00000000;
		
		case 0x00000094:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C3) * Global_40001.f_30C7));
		
		case 0x000000A4:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D0) * Global_40001.f_30D4));
		
		case 0x00000098:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E6) * Global_40001.f_30EB));
		
		case 0x00000099:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3188) * Global_40001.f_3189));
		
		case 0x0000009A:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318E) * Global_40001.f_318F));
		
		case 0x0000009B:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318C) * Global_40001.f_318D));
		
		case 0x000000A0:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3186) * Global_40001.f_3187));
		
		case 0x000000A2:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318A) * Global_40001.f_318B));
		
		case 0x000000A3:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3184) * Global_40001.f_3185));
		
		case 0x000000AA:
			return 0x00000000;
		
		case 0x000000AB:
			return Global_40001.f_3ACB;
		
		case 0x000000AC:
			return Global_40001.f_3ADB;
		
		case 0x000000AD:
			return Global_40001.f_3AA2;
		
		case 0x000000A6:
			return 0x00000000;
		
		case 0x000000B3:
			return Global_40001.f_4771;
		
		case 0x000000B4:
			return Global_40001.f_46F4;
		
		case 0x000000B6:
			return 0x00000000;
		
		case 0x000000B7:
			return Global_40001.f_46FC;
		
		case 0x000000B9:
			return Global_40001.f_4705;
		
		case 0x000000BA:
			return 0x00000000;
		
		case 0x000000BD:
			return Global_40001.f_47C9;
		
		case 0x000000BE:
			return 0x00000000;
		
		case 0x000000BF:
			return 0x00000000;
		
		case 0x000000C0:
			return 0x00000000;
		
		case 0x000000C1:
			return Global_40001.f_47DA;
		
		case 0x000000C2:
			return 0x00000000;
		
		case 0x000000C3:
			return 0x00000000;
		
		case 0x000000C5:
			return Global_40001.f_4741;
		
		case 0x000000C6:
			return 0x00000000;
		
		case 0x000000C7:
			return Global_40001.f_47F9;
		
		case 0x000000C8:
			return 0x00000000;
		
		case 0x000000C9:
			return Global_40001.f_477F;
		
		case 0x000000CD:
			return Global_40001.f_47EC;
		
		case 0x000000CF:
			return 0x00000000;
		
		case 0x000000D0:
			return Global_40001.f_475E;
		
		case 0x000000D1:
			return 0x00000000;
		
		case 0x000000D2:
			return Global_40001.f_47E7;
		
		case 0x000000D3:
			return Global_40001.f_47C3;
		
		case 0x000000D6:
			return Global_40001.f_4A15;
		
		case 0x000000D7:
			return Global_40001.f_4A1F;
		
		case 0x000000D8:
			return Global_40001.f_4A29;
		
		case 0x000000D9:
			return Global_40001.f_4A32;
		
		case 0x000000DA:
			return Global_40001.f_4A3B;
		
		case 0x000000DB:
			return Global_40001.f_4A4B;
		
		case 0x000000F1:
			return Global_40001.f_5E1A;
		
		case 0x000000F2:
			return Global_40001.f_5E16;
		
		case 0x000000F8:
			return Global_40001.f_5E19;
		
		case 0x000000F4:
			return Global_40001.f_5E17;
		
		case 0x000000EF:
			return Global_40001.f_5E1B;
		
		case 0x000000F0:
			return Global_40001.f_5E1C;
		
		case 0x000000F3:
			return Global_40001.f_66BB;
		
		default:
	}
	return 0x00000000;
}

int func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_40001.f_476A;
	}
	switch (iParam0)
	{
		case 0x0000008E:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DB) * Global_40001.f_30E0));
		
		case 0x0000009D:
			return 0x00000000;
		
		case 0x0000009F:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A9) * Global_40001.f_30AE));
		
		case 0x00000097:
			return 0x00000000;
		
		case 0x00000094:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C4) * Global_40001.f_30C8));
		
		case 0x000000A4:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D1) * Global_40001.f_30D5));
		
		case 0x00000098:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E7) * Global_40001.f_30EC));
		
		case 0x00000099:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_310C) * Global_40001.f_310F));
		
		case 0x0000009A:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_313A) * Global_40001.f_313D));
		
		case 0x0000009B:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3130) * Global_40001.f_3133));
		
		case 0x000000A0:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3103) * Global_40001.f_3106));
		
		case 0x000000A2:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_311C));
		
		case 0x000000A3:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30F4) * Global_40001.f_30F7));
		
		case 0x000000AA:
			return Global_40001.f_3A91;
		
		case 0x000000AB:
			return Global_40001.f_3ACC;
		
		case 0x000000AC:
			return Global_40001.f_3ADC;
		
		case 0x000000AD:
			return Global_40001.f_3AA3;
		
		case 0x000000A6:
			return 0x00000000;
		
		case 0x000000A7:
			return Global_40001.f_42C2;
		
		case 0x000000A8:
			return Global_40001.f_42C1;
		
		case 0x000000B3:
			return Global_40001.f_4772;
		
		case 0x000000B4:
			return Global_40001.f_46F5;
		
		case 0x000000B6:
			return 0x00000000;
		
		case 0x000000B7:
			return Global_40001.f_46FD;
		
		case 0x000000B9:
			return Global_40001.f_4706;
		
		case 0x000000BA:
			return 0x00000000;
		
		case 0x000000BD:
			return Global_40001.f_47CA;
		
		case 0x000000BE:
			return 0x00000000;
		
		case 0x000000BF:
			return 0x00000000;
		
		case 0x000000C0:
			return 0x00000000;
		
		case 0x000000C1:
			return Global_40001.f_47DB;
		
		case 0x000000C2:
			return 0x00000000;
		
		case 0x000000C3:
			return 0x00000000;
		
		case 0x000000C5:
			return Global_40001.f_4742;
		
		case 0x000000C6:
			return 0x00000000;
		
		case 0x000000C7:
			return Global_40001.f_47FA;
		
		case 0x000000C8:
			return 0x00000000;
		
		case 0x000000C9:
			return Global_40001.f_4780;
		
		case 0x000000CD:
			return Global_40001.f_47ED;
		
		case 0x000000CF:
			return 0x00000000;
		
		case 0x000000D0:
			return Global_40001.f_475F;
		
		case 0x000000D1:
			return 0x00000000;
		
		case 0x000000D2:
			return Global_40001.f_47E8;
		
		case 0x000000D3:
			return Global_40001.f_47C4;
		
		case 0x000000D6:
			return Global_40001.f_4A16;
		
		case 0x000000D7:
			return Global_40001.f_4A20;
		
		case 0x000000D8:
			return Global_40001.f_4A2A;
		
		case 0x000000D9:
			return Global_40001.f_4A33;
		
		case 0x000000DA:
			return Global_40001.f_4A3C;
		
		case 0x000000DB:
			return Global_40001.f_4A4C;
		
		case 0x000000B2:
			if (func_136())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 0x000000BC:
			if (func_136())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 0x000000E1:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 0x000000E2:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 0x000000E3:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 0x000000E5:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 0x000000E6:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 0x000000E9:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_58F7;
			}
			break;
		
		case 0x000000F1:
			return Global_40001.f_5E21;
		
		case 0x000000F2:
			return Global_40001.f_5E1D;
		
		case 0x000000F4:
			return Global_40001.f_5E1E;
		
		case 0x000000F8:
			return Global_40001.f_5E20;
		
		case 0x000000EF:
			return Global_40001.f_5E22;
		
		case 0x000000F0:
			return Global_40001.f_5E23;
		
		case 0x000000ED:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 0x000000EE:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 0x000000F9:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 0x000000F3:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 0x0000009E:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return 0x000005DC;
				}
				else
				{
					return 0x000003E8;
				}
			}
			else if (func_122())
			{
				return 0x000005DC;
			}
			break;
	}
	return 0x00000000;
}

void func_293(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 0x0000009D)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_294(iParam0))
	{
		if (!func_136())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_3070;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_28(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (func_92(iParam0))
		{
			*uParam1 = (Global_40001.f_46DD / 100f);
			*uParam2 = (Global_40001.f_46DD / 100f);
		}
		else if (iParam0 == 0x000000F2)
		{
			*uParam1 = Global_40001.f_5E24;
			*uParam2 = Global_40001.f_5E24;
		}
		else if (iParam0 == 0x000000F4)
		{
			*uParam1 = Global_40001.f_5E25;
			*uParam2 = Global_40001.f_5E25;
		}
		else if (iParam0 == 0x000000F8)
		{
			*uParam1 = Global_40001.f_5E27;
			*uParam2 = Global_40001.f_5E27;
		}
		else if (iParam0 == 0x000000F1)
		{
			*uParam1 = Global_40001.f_5E28;
			*uParam2 = Global_40001.f_5E28;
		}
		else if (iParam0 == 0x000000EF)
		{
			*uParam1 = Global_40001.f_5E29;
			*uParam2 = Global_40001.f_5E29;
		}
		else if (iParam0 == 0x000000F0)
		{
			*uParam1 = Global_40001.f_5E2A;
			*uParam2 = Global_40001.f_5E2A;
		}
		else
		{
			*uParam1 = Global_40001.f_306D;
			*uParam2 = Global_40001.f_306C;
		}
	}
	else if (func_92(iParam0))
	{
		*uParam1 = (Global_40001.f_46DE / 100f);
		*uParam2 = (Global_40001.f_46DE / 100f);
	}
	else if (iParam0 == 0x000000F2)
	{
		*uParam1 = Global_40001.f_5E2B;
		*uParam2 = Global_40001.f_5E2B;
	}
	else if (iParam0 == 0x000000F4)
	{
		*uParam1 = Global_40001.f_5E2C;
		*uParam2 = Global_40001.f_5E2C;
	}
	else if (iParam0 == 0x000000F8)
	{
		*uParam1 = Global_40001.f_5E2E;
		*uParam2 = Global_40001.f_5E2E;
	}
	else if (iParam0 == 0x000000F1)
	{
		*uParam1 = Global_40001.f_5E2F;
		*uParam2 = Global_40001.f_5E2F;
	}
	else if (iParam0 == 0x000000EF)
	{
		*uParam1 = Global_40001.f_5E30;
		*uParam2 = Global_40001.f_5E30;
	}
	else if (iParam0 == 0x000000F0)
	{
		*uParam1 = Global_40001.f_5E31;
		*uParam2 = Global_40001.f_5E31;
	}
	else
	{
		*uParam1 = Global_40001.f_306F;
		*uParam2 = Global_40001.f_306E;
	}
	iVar0 = func_60();
	if (iVar0 != func_10())
	{
		if (func_48(unk_0xD803B885F5E47A62(), iVar0, 0x00000001))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000A0:
		case 0x000000A2:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_295()
{
	if ((func_36(unk_0xD803B885F5E47A62(), 0x00000015) || func_36(unk_0xD803B885F5E47A62(), 0x00000016)) || func_300())
	{
		return 0x00000001;
	}
	if (func_297())
	{
		func_296(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_296(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_297()
{
	if (func_33(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_26() && !func_299()) || func_22(unk_0xD803B885F5E47A62(), 0x00000015)) || func_22(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_298(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_298(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_299()
{
	return Global_1406A2.f_1;
}

bool func_300()
{
	return func_247(0x00000166, 0xFFFFFFFF);
}

int func_301()
{
	return 0x00000000;
}

void func_302()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_344())
	{
		return;
	}
	if (func_343())
	{
		func_336();
	}
	if (func_335())
	{
		func_334();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000004)) && !unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000003))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000007))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_82.f_A)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_82.f_A)
			{
				func_326(0x00000065, sVar0, sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF, 0x00000002);
			}
			else
			{
				func_325(0x00000057, func_37(), 0xFFFFFFFF, sVar1, sVar0, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
			}
		}
		else if (func_324() != unk_0xD803B885F5E47A62())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_82.f_A)
			{
				func_326(0x00000065, sVar0, sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_324(), func_37(), func_10(), 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF, 0x00000002);
			}
			else
			{
				func_323(0x0000005B, func_324(), func_37(), 0xFFFFFFFF, sVar1, sVar0, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_82.f_A)
			{
				func_326(0x00000065, "GB_WINNER", sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF, 0x00000002);
			}
			else
			{
				func_325(0x00000057, func_37(), 0xFFFFFFFF, sVar1, "GB_WINNER", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000003))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_304(0x00000058, sVar0, sVar1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000004) || func_31(func_37(), 0x00000001, 0x00000000))
		{
			if (unk_0xD803B885F5E47A62() == func_60())
			{
				Var2.f_A = func_60();
				Var2.f_2 = 0xE3AA9000;
				func_303(Var2, func_46(func_37()));
			}
		}
	}
}

void func_303(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_304(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_322(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_320(&(Var0.f_45), iParam7);
	}
	return func_305(&Var0);
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_319(uParam0, uParam0->f_11);
	func_316(uParam0);
	if (func_84())
	{
		func_316(uParam0);
	}
	if (func_315(uParam0->f_1))
	{
		func_308();
		if (Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/] = { *uParam0 };
			return 0x00000001;
		}
		if (((Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000000D || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000035) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000036) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000003A)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 = 0x00000005;
		}
		iVar0 = 0x00000002;
		while (iVar0 >= 0x00000001)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 0xFFFFFFFF);
		}
		Global_2537E2.f_AA3[0x00000001 /*80*/] = { *uParam0 };
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0x00000000)
			{
				func_308();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_307(uParam0->f_45, 0x00000080))
			{
				if (func_306(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000058:
		case 0x00000057:
		case 0x0000005B:
		case 0x0000005C:
		case 0x00000056:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_308()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 0x00000001;
		bVar0 = 0x00000001;
	}
	func_309();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_309()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_313(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_310(&(Global_2537E2.f_BE7.f_1));
}

void func_310(var uParam0)
{
	if (uParam0->f_1 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0x00000000;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0x00000000;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(0x00000000);
		uParam0->f_234 = 0x00000000;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_312(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_311(0x00000000);
}

void func_311(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_312(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_313(var uParam0)
{
	func_314(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_314(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0x00000000;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0x00000000;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0x00000000;
	uParam0->f_233 = 0x00000000;
	uParam0->f_23C = 0x00000000;
	uParam0->f_234 = 0x00000000;
	uParam0->f_235 = 0x00000000;
	uParam0->f_236 = 0x00000000;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_23E = 0x00000000;
	uParam0->f_23F = 0x00000000;
	uParam0->f_23D = 1f;
}

int func_315(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_316(var uParam0)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_48 = func_317();
	}
}

int func_317()
{
	return 0x00000015;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
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
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_319(var uParam0, int iParam1)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_306(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_63(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

void func_320(var uParam0, int iParam1)
{
	func_321(uParam0, iParam1);
}

void func_321(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_322(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_10();
	uParam1->f_12 = func_10();
	uParam1->f_13 = func_10();
	uParam1->f_14 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 0x00000001;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 0x00000001;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 0x00000001;
	uParam1->f_4A = 0x00000001;
	uParam1->f_4B = 0x00000001;
	uParam1->f_4C = 0x00000000;
	uParam1->f_4D = 0x00000000;
	uParam1->f_49 = 0x00000000;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_322(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_305(&Var0);
}

int func_324()
{
	return Local_82.f_3;
}

int func_325(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_322(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 0x00000000)
	{
		func_320(&(Var0.f_45), iParam8);
	}
	return func_305(&Var0);
}

int func_326(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_322(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 0x00000002)
	{
		Var0.f_47 = iParam14;
	}
	func_320(&(Var0.f_45), 0x00000004);
	return func_305(&Var0);
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_79(iVar0);
	}
	return 0x00000001;
}

char* func_328()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_27(unk_0xD803B885F5E47A62());
	if (iVar0 != func_10())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_36(iVar0, 0x0000001C) || func_36(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_333(iVar0)) && !func_332(iVar0))
			{
				return func_330(iVar0, 0x00000000);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_330(iVar0, 0x00000000);
			}
		}
		sVar1 = func_329(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_330(iVar0, 0x00000000);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_329(var uParam0)
{
	return uParam0;
}

char* func_330(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 0x00000001))
		{
			return func_331();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_331()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

int func_332(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_175(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_333(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_175(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				return 0x00000000;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

void func_334()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

bool func_335()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_336()
{
	if (!func_342())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_337();
}

void func_337()
{
	func_339();
	func_338(0x00000000);
}

void func_338(bool bParam0)
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

void func_339()
{
	if (!func_341())
	{
	}
	if (func_342())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_340();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_340()
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

int func_341()
{
	if (!func_342())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_340();
	return unk_0xB165082A56EE6E7F();
}

int func_342()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_343()
{
	return func_342();
}

int func_344()
{
	if (!func_345(0x00000001, 0x00000001, 0x00000001, 0x00000000) || func_621())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_47(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			return 0x00000000;
		}
	}
	if (!func_393(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0x00000000;
		}
	}
	if (func_391(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_390())
	{
		return 0x00000000;
	}
	if (func_389())
	{
		return 0x00000000;
	}
	if (func_388())
	{
		return 0x00000000;
	}
	if (func_387())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_385(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_383())
	{
		return 0x00000000;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 0x00000000) || func_22(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_22(unk_0xD803B885F5E47A62(), 0x0000000C) || func_22(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_22(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_376(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		if (!func_355())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (func_354())
		{
			return 0x00000000;
		}
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_353(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_352())
	{
		return 0x00000000;
	}
	if (func_351(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((func_350(unk_0xD803B885F5E47A62()) && func_56(unk_0xD803B885F5E47A62()) == 0x0000007B) && !bParam3)
	{
		return 0x00000000;
	}
	if (func_349())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (func_348(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_347(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_124(unk_0xD803B885F5E47A62()))
	{
		if (func_346(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

int func_347(int iParam0)
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

int func_348(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_349()
{
	return Global_199459.f_10CF != 0xFFFFFFFF;
}

int func_350(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

int func_351(int iParam0)
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

int func_352()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_353(int iParam0)
{
	if (!func_9(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_354()
{
	return Global_181EC.f_15A > 0x00000000;
}

int func_355()
{
	int iVar0;
	
	iVar0 = func_32(unk_0xD803B885F5E47A62());
	if (((func_375(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_374(unk_0xD803B885F5E47A62())) || func_373(unk_0xD803B885F5E47A62())) || func_368(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 0x000000A7 || iVar0 == 0x000000A8) || iVar0 == 0x000000B2) || iVar0 == 0x000000BC)
		{
			return 0x00000001;
		}
	}
	if (func_366(unk_0xD803B885F5E47A62()))
	{
		if (func_121(iVar0) || func_365(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_364(unk_0xD803B885F5E47A62()))
	{
		if (func_365(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_363(unk_0xD803B885F5E47A62()))
	{
		if (func_109(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_362(unk_0xD803B885F5E47A62()))
	{
		if (func_108(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_361(unk_0xD803B885F5E47A62()))
	{
		if (func_107(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_360(unk_0xD803B885F5E47A62()))
	{
		if (func_359(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_358(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_357(iVar0))
		{
			if (func_58(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
		}
	}
	if (func_356(unk_0xD803B885F5E47A62()))
	{
		if (func_99(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_356(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000F1:
		case 0x000000F8:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_10())
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000F9:
		case 0x000000FA:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_360(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_361(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_362(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_363(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_364(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_366(int iParam0)
{
	if (func_367(Global_184507[iParam0 /*876*/].f_112.f_1C, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		switch (iParam0)
		{
			case 0x0000005B:
			case 0x0000005C:
			case 0x0000005D:
			case 0x0000005E:
			case 0x0000005F:
			case 0x00000060:
			case 0x00000061:
			case 0x00000062:
			case 0x00000063:
			case 0x00000064:
			case 0x00000065:
			case 0x00000066:
				return 0x00000001;
				break;
		}
	}
	else if (iParam1 == 0x0000005B)
	{
		switch (iParam0)
		{
			case 0x0000005B:
			case 0x0000005C:
			case 0x0000005D:
			case 0x0000005E:
			case 0x0000005F:
			case 0x00000060:
				return 0x00000001;
				break;
		}
	}
	else if (iParam1 == 0x00000061)
	{
		switch (iParam0)
		{
			case 0x00000061:
			case 0x00000062:
			case 0x00000063:
			case 0x00000064:
			case 0x00000065:
			case 0x00000066:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_368(int iParam0)
{
	if (func_369(Global_184507[iParam0 /*876*/].f_112.f_1C, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_369(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_370(unk_0xD803B885F5E47A62(), 0x00000000);
	}
	if (bParam1)
	{
		if (func_370(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return 0x00000000;
		}
		switch (iParam0)
		{
			case 0x00000067:
			case 0x0000006A:
			case 0x0000006D:
			case 0x00000070:
			case 0x00000068:
			case 0x0000006B:
			case 0x0000006E:
			case 0x00000071:
			case 0x00000069:
			case 0x0000006C:
			case 0x0000006F:
			case 0x00000072:
				return 0x00000001;
				break;
			}
	}
	switch (iParam0)
	{
		case 0x00000067:
		case 0x0000006A:
		case 0x0000006D:
		case 0x00000070:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000069:
		case 0x0000006C:
		case 0x0000006F:
		case 0x00000072:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_370(int iParam0, bool bParam1)
{
	if (Global_184465 != func_10())
	{
		if (!func_372(Global_184465))
		{
			return 0x00000000;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 0x00000018) || func_371(Global_184465))
				{
					return 0x00000001;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000018);
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000009);
	}
	return 0x00000000;
}

int func_372(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x00000002);
	}
	return 0x00000000;
}

int func_373(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_374(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
		if (func_374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_364(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_373(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_363(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_362(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_361(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_382(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_360(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_381(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_358(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_380(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_356(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_379(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_378(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_377(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_377(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_378(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_379(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_380(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_381(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_382(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_10())
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_383()
{
	if (func_384() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_384()
{
	return Global_1406D3.f_12;
}

bool func_385(int iParam0)
{
	return func_386(iParam0);
}

bool func_386(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_387()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_388()
{
	return Global_14086D;
}

bool func_389()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

bool func_390()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_391(int iParam0)
{
	if (func_392(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_385(iParam0))
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

bool func_393(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

void func_394(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 0x00000001;
			}
			else if (func_395(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000001;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			Global_26B66F.f_1404.f_17F = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_27(iParam1);
		}
	}
	return 0x00000000;
}

void func_396(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_515(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_513() || iParam2 == 0x0000001C)
	{
		if (func_468(iParam1, iParam2, uParam3, Global_180529, 0x00000000, func_511(), sParam7))
		{
			func_467(0x00000001);
			if ((!func_466() && !func_465()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_464())
				{
					func_463();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_462(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_461(iParam1, 0x00000000, 0x00000000);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
							}
						}
						if (iParam2 == 0x0000001C)
						{
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								iVar1[iVar17] = 0xFFFFFFFF;
								iVar17++;
							}
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_19(iVar3, 0x00000000))
									{
										if ((func_460(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_30(iVar3))
										{
											iVar9 = iVar3;
											if (func_29(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_459(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_457(unk_0xD803B885F5E47A62(), 0x00000000) && func_32(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_456())
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_10();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_455(iVar3) && func_451(iVar3, iParam2)) && func_9(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_446(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_175(iVar3) };
								iVar5 = func_440(iVar3);
								sVar4 = "";
								if (iVar5 != 0x00000000)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 0xFFFFFFFF)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 0xFFFFFFFF || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									if (!func_456())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_435(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_434(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 0xFFFFFFFE;
									}
								}
								iVar16 = func_433(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_28(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 0xFFFFFFFF)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_432(iParam5))
								{
									func_431(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_431(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_9(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_10();
							}
							if (func_455(iVar3))
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_446(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_175(iVar3) };
									iVar5 = func_440(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_433(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_28(iVar3, 0x00000001))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_411(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_408(uParam3, iParam1, iParam2);
						}
						func_407(&(uParam3->f_15));
						func_406();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_405(uParam3, iParam1);
							func_404(iParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_405(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_400(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_397(uParam3);
						if (Global_180606 == 0x00000001)
						{
							uParam3->f_1B = 0x00000000;
						}
						if (Global_180606 == 0x00000002)
						{
							uParam3->f_1B = 0x00000000;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(0x00000007);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
						unk_0xD9ACBBA59FD5A09E(0x00000004);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0x00000000;
			func_406();
			func_462(0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000A))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x0000000A);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_397(var uParam0)
{
	if (!func_399(&(uParam0->f_15)))
	{
		func_4(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_3(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_407(&(uParam0->f_15));
		func_398(0x00000000);
	}
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 0x00000002)
		{
			Global_180606 = 0x00000002;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0x00000000:
				Global_180606 = 0x00000001;
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				break;
			}
	}
}

bool func_399(var uParam0)
{
	return uParam0->f_1;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_10() && func_9(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_175(iVar3) };
		iVar1 = func_403(uParam0, uParam0->f_25);
		if (func_402(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_401(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_401(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_401(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_401(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_401(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_401(uParam0, iVar0, 0x00000000);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 0x00000020)
	{
		uParam0->f_25 = 0x00000000;
	}
	return iVar4;
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_403(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 0x00000001)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_405(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_406()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_407(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_410(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_409(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_409(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 0x00000041)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_410(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000041;
	switch (iParam2)
	{
		case 0x00000015:
			iVar0 = 0x00000000;
			break;
	}
	if (bParam1)
	{
		iVar0 = 0x00000074;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 0x0000002F;
		
		case 0x00000001:
			return 0x00000031;
		
		default:
	}
	return iVar0;
}

void func_411(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_430() && iParam4 < func_429())
	{
		iParam4 = (iParam4 % 0x00000010);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000008) || uParam3->f_6C == 0x00000006)
			{
				func_428("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_428(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_428("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_428("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_428("");
			}
			else
			{
				func_428(&sParam5);
			}
			func_416(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_415(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_413(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_412(uParam3))
			{
				func_414("DPAD_CREW");
			}
			else
			{
				func_414("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_412(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_413(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_414(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_415(var uParam0)
{
	if (func_413(uParam0) && func_412(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_416(var uParam0, int iParam1)
{
	if (func_427(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_420(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_417())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_417()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_418() || func_86())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_418()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_86();
	}
	return func_419(Global_440000.f_2F9AE);
}

int func_419(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_420(int iParam0)
{
	if ((func_9(iParam0, 0x00000000, 0x00000001) && func_421()) && func_6(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_421()
{
	if (func_426(unk_0xD803B885F5E47A62()) || func_425())
	{
		if (!func_422(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_422(int iParam0)
{
	if (func_424(iParam0) == 0x000000EC || func_424(iParam0) == 0x00000096)
	{
		return func_423(iParam0);
	}
	return 0x00000000;
}

int func_423(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

int func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

int func_425()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000BC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

int func_427(int iParam0)
{
	if (func_417())
	{
		if (func_9(iParam0, 0x00000000, 0x00000001))
		{
			return func_29(iParam0);
		}
	}
	if ((func_9(iParam0, 0x00000000, 0x00000001) && func_421()) && func_8(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_428(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_429()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 0x00000020;
	}
	else
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

int func_430()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_431(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_430() && iParam3 < func_429())
	{
		iParam3 = (iParam3 % 0x00000010);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 0xFFFFFFFE)
			{
				iParam10 = 0xFFFFFFFF;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000008) || uParam2->f_6C == 0x00000006)
				{
					func_428("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_414(sParam16);
				}
				else
				{
					func_428(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_428("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000041);
				}
				if (iParam12 == 0x00000001)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0xFFFFFFFF);
				}
				if (func_456())
				{
					func_428("");
				}
				else if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000005 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000007 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000008 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 0x00000001);
					}
					if (iParam10 != 0xFFFFFFFF)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000009)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x0000000A)
				{
					if (iParam10 == 0x00000000)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 0xFFFFFFFF)
				{
					if (iParam15 == 0x00000000 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_414(&(uParam2->f_68));
					}
					else
					{
						func_428("");
					}
				}
				else if (iParam14 != 0xFFFFFFFF)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 0xFFFFFFFF)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_428("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_428("");
				}
				else
				{
					func_428(&sParam4);
				}
				func_416(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_428("");
					func_428("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_415(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_413(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_412(uParam2))
				{
					func_414("DPAD_CREW");
				}
				else
				{
					func_414("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_432(int iParam0)
{
	return 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_433(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_426(iParam0)) && !func_124(iParam0))
	{
		iVar0 = func_317();
	}
	iVar1 = func_81(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_79(iVar1);
	}
	return iVar0;
}

char* func_434(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 0x00000007:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 0x00000001)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_435(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_439(iParam3))
	{
		*fParam1 = (func_436(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_432(iParam3))
	{
		*fParam1 = (func_436(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

float func_436(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_438(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_437(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_437(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_438(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = func_443(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_441(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_441(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_443(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_442(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_443(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_444(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_444(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_445(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_445(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_446(int iParam0)
{
	char cVar0[32];
	
	if (func_9(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_175(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_402(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			return cVar0;
		}
		if (func_450(&Global_265942))
		{
			Global_2658FC = { func_448(iParam0) };
			func_447(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_447(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

struct<35> func_448(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_449(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_175(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_449(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_450(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_451(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_454(iParam0) || func_453(iParam0)) || func_452(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_393(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_460(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_30(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_452(int iParam0)
{
	if (func_454(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

bool func_454(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

int func_455(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (func_19(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_456()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	switch (func_424(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_124(unk_0xD803B885F5E47A62()))
	{
		switch (func_32(unk_0xD803B885F5E47A62()))
		{
			case 0x00000094:
			case 0x00000097:
			case 0x00000098:
			case 0x00000099:
			case 0x0000009D:
			case 0x0000009F:
			case 0x000000A2:
			case 0x000000A4:
			case 0x0000008E:
				return 0x00000001;
				break;
			}
	}
	if (func_422(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_457(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_458(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_458(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009B:
		case 0x000000A0:
		case 0x00000099:
		case 0x000000A2:
		case 0x0000009A:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return func_113(iParam0, 0x00000000);
	return 0x00000000;
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_9(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_19(iVar1, 0x00000000))
			{
				if ((func_460(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_30(iVar1))
				{
					if (func_48(iVar1, iParam1, 0x00000000))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_460(int iParam0)
{
	if (func_9(iParam0, 0x00000000, 0x00000001))
	{
		if (func_9(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_32(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_462(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0x00000000)
		{
			Global_15038F.f_2 = 0x00000001;
		}
	}
	else if (Global_15038F.f_2 == 0x00000001)
	{
		Global_15038F.f_2 = 0x00000000;
	}
}

void func_463()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_335())
		{
			func_334();
		}
	}
}

int func_464()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_335())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_335())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_465()
{
	if (func_335())
	{
		if (func_306(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_466()
{
	if (func_335())
	{
		if (func_318(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_467(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_468(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 0x00000014;
	bVar3 = func_510(iParam1);
	fVar4 = func_509();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_508())
		{
			if (func_507() > 0x00000000 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(0x00000012);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(0x0000000A);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_497())
		{
			func_496(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_496(iParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_399(&(uParam2->f_13)))
	{
		if (func_507() == 0x00000001)
		{
			func_495(bVar3, iParam0, 0x00000000);
			func_4(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_496(iParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_399(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_3(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_507() == 0x00000000 && !bParam5))
		{
			func_496(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_494();
				if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(0x00000012);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				if (bVar2 == 0x00000000)
				{
					func_494();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_495(bVar3, iParam0, 0x00000000))
				{
					func_461(iParam0, 0x00000000, 0x00000000);
					sVar1 = func_492(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_490(iParam1) };
					if (bParam4)
					{
						func_487(iParam0, sVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_480(iParam0, func_484(uParam2), func_481(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_476(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_474(iParam0, sVar6, func_475(), 0xFFFFFFFF);
					}
					else if (func_417())
					{
						uParam2->f_22 = Global_18052A;
						func_487(iParam0, sVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_469(iParam1);
						uParam2->f_22 = Global_18052A;
						func_487(iParam0, sVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_469(iParam1);
						func_487(iParam0, sVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0x00000000);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				Global_180529 = uParam3;
				Global_180528 = 0x00000001;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0x00000000);
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_473())
	{
		iVar0 = 0x00000002;
	}
	switch (iParam0)
	{
		case 0x00000028:
			iVar0 = 0x00000016;
			break;
		
		case 0x00000000:
		case 0x0000001F:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000006;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000005;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000015;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000011;
			break;
		
		case 0x00000010:
			iVar0 = 0x00000012;
			break;
		
		case 0x00000012:
			if (func_472(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_471(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_470(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_196())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_470(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_471(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_472(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_473()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_474(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_414(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_414("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_475()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 0x000000A3:
			return "BD_SORT_1";
			break;
		
		case 0x000000A0:
			return "BD_SORT_4";
			break;
		
		case 0x0000009A:
			return "BD_SORT_3";
			break;
		
		case 0x0000009B:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_476(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0x00000000:
			return "GR_DPD_E";
			break;
		
		case 0x00000001:
			return "GR_DPD_F";
			break;
		
		case 0x00000002:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0x00000000:
			return "GR_DPD_A";
			break;
		
		case 0x00000001:
			return "GR_DPD_B";
			break;
		
		case 0x00000002:
			return "GR_DPD_C";
			break;
		
		case 0x00000003:
			return "GR_DPD_D";
			break;
	}
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 0x000000E9:
			return "H2_DPAD_SET";
			break;
		
		case 0x000000B4:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 0x000000B6:
			return "DEAL_DEALN";
			break;
		
		case 0x000000C2:
			return "PI_BIK_13_0";
			break;
		
		case 0x000000BD:
			return "PI_BIK_4_1";
			break;
		
		case 0x000000C1:
			return "PI_BIK_13_1";
			break;
		
		case 0x000000CD:
			return "PI_BIK_13_3";
			break;
		
		case 0x000000BA:
			return "CELL_BIKER_CK";
			break;
		
		case 0x000000CF:
			return "DV_SH_TITLE";
			break;
		
		case 0x000000D0:
			return "BA_SH_TITLE";
			break;
		
		case 0x000000D1:
			return "SHU_SH_TITLE";
			break;
		
		case 0x000000D2:
			return "PI_BIK_13_4";
			break;
		
		case 0x000000B7:
			return "CELL_BIKER_RESC";
			break;
		
		case 0x000000C7:
			return "CELL_BIKER_SEAR";
			break;
		
		case 0x000000C9:
			return "CELL_BIKER_STAN";
			break;
		
		case 0x0000008E:
			return "PIM_MAGM210";
			break;
		
		case 0x000000A3:
			return "PIM_MAGM608";
			break;
		
		case 0x000000A0:
			return "PIM_MAGM604";
			break;
		
		case 0x0000009A:
			return "PIM_MAGM602";
			break;
		
		case 0x0000009B:
			return "PIM_MAGM603";
			break;
		
		case 0x00000094:
			if (func_478())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_205(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_205(0x00000001))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 0x0000009D:
			return "PIM_MAGM207";
			break;
		
		case 0x0000009F:
			return "PIM_MAGM206";
			break;
		
		case 0x000000A2:
			return "PIM_MAGM607";
			break;
		
		case 0x000000A4:
			return "PIM_MAGM212";
			break;
		
		case 0x000000A6:
			return "GB_DPAD_HEAD";
		
		case 0x000000A7:
			return "GB_DPAD_BUY";
		
		case 0x000000A8:
			return "GB_DPAD_SELL";
		
		case 0x000000A9:
			return "GB_DPAD_DEF";
		
		case 0x000000AA:
			return "GB_DPAD_AIR";
		
		case 0x000000AB:
			return "GB_DPAD_CASH";
		
		case 0x000000AC:
			return "GB_DPAD_SAL";
		
		case 0x000000AD:
			return "GB_DPAD_FRA";
		
		case 0x000000B2:
			return "VEX_TITLEa";
		
		case 0x000000BC:
			return "VEX_TITLEb";
		
		case 0x000000DA:
			return "FRT_MODE";
		
		case 0x000000D9:
			return "FRT_TRNS";
		
		case 0x000000D6:
			return "MODE_PLW";
		
		case 0x000000D7:
			return "MODE_FUL";
		
		case 0x000000D8:
			return "MODE_AA";
		
		case 0x000000DB:
			return "MODE_VEL";
		
		case 0x000000DC:
			return "MODE_RMP";
		
		case 0x000000DD:
			return "MODE_STK";
		
		case 0x000000E1:
			return "GR_TITLEL";
		
		case 0x000000E2:
			return "GRS_TITLEL";
		
		case 0x000000E3:
			return "GRD_TITLEL";
		
		case 0x000000C3:
			return "GB_STEAL_T";
		
		case 0x000000C6:
			return "SC_MENU_TITLE";
		
		case 0x000000BE:
			return "GB_DPAD_BSEL";
		
		case 0x000000BF:
			return "GB_DPAD_BDEF";
		
		case 0x000000B9:
			return "GB_DPAD_GFH";
		
		case 0x000000C5:
			return "GB_DPAD_JB";
		
		case 0x000000B3:
			return "CELL_JOUST";
		
		case 0x000000C8:
			return "CAG_BLIP";
		
		case 0x000000C0:
			if (func_477(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_478()
{
	return (func_479() && func_62(func_60()));
}

bool func_479()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

void func_480(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_414(sParam1);
		}
		else if (func_424(unk_0xD803B885F5E47A62()) == 0x00000085)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_414("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_481(var uParam0)
{
	int iVar0;
	
	iVar0 = func_424(unk_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "";
		
		case 0x00000084:
			return "FM_AE_SORT_5";
		
		case 0x00000085:
			switch (func_482())
			{
				case 0x00000000:
					return "FM_AE_SORT_2";
				
				case 0x00000001:
					return "FM_AE_SORT_2";
				
				case 0x00000002:
					return "FM_AE_SORT_3";
				
				case 0x00000003:
					return "FM_AE_SORT_2";
				
				case 0x00000004:
					return "FM_AE_SORT_2";
				
				case 0x00000005:
					return "FM_AE_SORT_2";
				
				case 0x00000006:
					return "FM_AE_SORT_2";
				
				case 0x00000007:
					return "FM_AE_SORT_13";
				
				case 0x00000008:
					return "FM_AE_SORT_4";
				
				case 0x00000009:
					return "FM_AE_SORT_2";
				
				case 0x0000000A:
					return "FM_AE_SORT_2";
				
				case 0x0000000B:
					return "FM_AE_SORT_2";
				
				case 0x0000000C:
					return "FM_AE_SORT_2";
				
				case 0x0000000D:
					return "FM_AE_SORT_2";
				
				case 0x0000000E:
					return "FM_AE_SORT_5";
				
				case 0x0000000F:
					return "FM_AE_SORT_9";
				
				case 0x00000010:
					return "FM_AE_SORT_9";
				
				case 0x00000011:
					return "FM_AE_SORT_9";
				
				case 0x00000012:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "";
		
		case 0x0000008A:
			return "";
		
		case 0x0000008B:
			return "FM_AE_SORT_10";
		
		case 0x0000008C:
			return "";
		
		case 0x0000008D:
			return "FM_AE_SORT_5";
		
		case 0x00000090:
			return "FM_AE_SORT_1";
		
		case 0x00000081:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_482()
{
	if (func_424(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

bool func_483()
{
	return Global_184488;
}

char* func_484(var uParam0)
{
	int iVar0;
	
	iVar0 = func_424(unk_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "PIM_TA9";
		
		case 0x00000084:
			if (func_486() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_486() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_482())
			{
				case 0x00000000:
					return "AMCH_0SLC";
				
				case 0x00000001:
					return "AMCH_1SLC";
				
				case 0x00000002:
					return "AMCH_2SLC";
				
				case 0x00000003:
					return "AMCH_3SLC";
				
				case 0x00000004:
					return "AMCH_4SLC";
				
				case 0x00000005:
					return "AMCH_5SLC";
				
				case 0x00000006:
					return "AMCH_6SLC";
				
				case 0x00000007:
					return "AMCH_7SLC";
				
				case 0x00000008:
					return "AMCH_8SLC";
				
				case 0x00000009:
					return "AMCH_12SLC";
				
				case 0x0000000A:
					return "AMCH_13SLC";
				
				case 0x0000000B:
					return "AMCH_15SLC";
				
				case 0x0000000C:
					return "AMCH_16SLC";
				
				case 0x0000000D:
					return "AMCH_23SLC";
				
				case 0x0000000E:
					return "AMCH_9SLC";
				
				case 0x0000000F:
					return "AMCH_19SLC";
				
				case 0x00000010:
					return "AMCH_20SLC";
				
				case 0x00000011:
					return "AMCH_21SLC";
				
				case 0x00000012:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "PIM_TA10";
		
		case 0x0000008A:
			return "PIM_TA4";
		
		case 0x0000008B:
			return "PIM_TA5";
		
		case 0x0000008C:
			return "PIM_TA3";
		
		case 0x0000008D:
			return "PIM_TA8";
		
		case 0x00000090:
			return "PIM_TA2";
		
		case 0x00000081:
			if (func_485() == 0x00000001)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 0x00000092:
			return "PIM_TA6";
	}
	return "";
}

int func_485()
{
	return Global_26B66F.f_13B8;
}

int func_486()
{
	if (func_424(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_487(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_428(sParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_414(sParam1);
		}
		if (func_508() && iParam6)
		{
			if (func_489())
			{
				iVar0 = 0x00000002;
				iVar1 = 0x00000002;
			}
			else
			{
				iVar0 = 0x00000001;
				iVar1 = 0x00000002;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_414(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_488(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_84())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_488(int iParam0)
{
	if (func_472(iParam0) || func_471(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_489()
{
	return Global_18052B;
}

struct<4> func_490(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_491(unk_0xD803B885F5E47A62()) || func_470(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000012:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_417() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_491(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_492(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_417() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_493();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 0x00000019)
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 0x00000001)
		{
			Global_180619 = 0x00000000;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		switch (iParam0)
		{
			case 0x00000000:
			case 0x0000001F:
				return "HUD_LBD_DM";
				break;
			
			case 0x00000001:
				return "HUD_LBD_TDM";
				break;
			
			case 0x00000005:
				return "HUD_LBD_GRCE";
				break;
			
			case 0x00000004:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
			case 0x0000001A:
			case 0x0000000B:
				return "HUD_LBD_RCE";
				break;
			
			case 0x00000007:
				return "HUD_LBD_BRCE";
				break;
			
			case 0x00000012:
			case 0x0000000E:
			case 0x00000011:
			case 0x0000000F:
			case 0x0000000D:
			case 0x0000000C:
			case 0x00000010:
			case 0x00000013:
				return "HUD_TITLEMC";
				break;
			
			case 0x00000003:
				return "HUD_LBD_HRD";
				break;
			
			case 0x00000016:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_493()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_494()
{
	Global_A56F = 0x00000001;
}

bool func_495(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_496(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_406();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_399(&(uParam1->f_13)))
		{
			func_407(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000000);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_497()
{
	if (func_506())
	{
		return 0x00000000;
	}
	if (func_389())
	{
		return 0x00000000;
	}
	if (!func_504())
	{
		return 0x00000000;
	}
	if (!func_383())
	{
		return 0x00000000;
	}
	if (func_503(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_507() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_387())
	{
		return 0x00000000;
	}
	else if (!func_392(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_502(0x00000001) || func_500(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_499() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_17(unk_0xD803B885F5E47A62()) && !func_499())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (Global_195C3B)
	{
		return 0x00000000;
	}
	if (func_206(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (Global_14E876)
	{
		return 0x00000000;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0x00000000;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0x00000000;
	}
	if (func_498(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_498(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_499()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_500(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_501(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000019) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))
				{
					return 0x00000000;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0x00000000;
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000013) || (!bParam0 && unk_0x7FEE810EE9E768EB(0x00000000, 0x00000013)))
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0x00000000, 0x000000A6) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A7)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A8)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A9))
		{
			return 0x00000001;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A6) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A7)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A8)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A9))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_501(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 0x0A914799)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_502(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_503(int iParam0, int iParam1)
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

int func_504()
{
	if (func_505())
	{
		return 0x00000001;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000000;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0x00000000;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_505()
{
	return Global_1406B8;
}

bool func_506()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_507()
{
	return Global_150392.f_44;
}

int func_508()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_509()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000014:
		case 0x00000015:
		case 0x0000001B:
		case 0x0000001C:
		case 0x00000028:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_511()
{
	if (func_512(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_512(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_19(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

int func_513()
{
	if (func_511())
	{
		return 0x00000001;
	}
	if (func_452(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_483())
	{
		return 0x00000001;
	}
	if (func_426(unk_0xD803B885F5E47A62()))
	{
		switch (func_424(unk_0xD803B885F5E47A62()))
		{
			case 0x00000083:
			case 0x00000084:
			case 0x00000085:
			case 0x00000088:
			case 0x0000008A:
			case 0x0000008B:
			case 0x0000008D:
			case 0x00000090:
			case 0x00000092:
				return 0x00000001;
				break;
			
			case 0x0000008C:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AF:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_514(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_515(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_426(unk_0xD803B885F5E47A62()) && !func_124(unk_0xD803B885F5E47A62())) && !func_422(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_33(unk_0xD803B885F5E47A62(), 0x00000000) && func_124(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_516(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_516(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_426(iParam0) && !func_454(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_124(iParam0);
	uVar3 = func_26();
	bVar4 = func_295();
	if ((bVar1 && (func_423(iParam0) || func_518(iParam0))) || bVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (uVar3 || ((!bVar2 && !func_35(iParam0)) && !func_517(iParam0)))
	{
		iVar0 = 0x00000002;
	}
	else
	{
		iVar0 = 0x00000003;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

bool func_517(int iParam0)
{
	return func_36(iParam0, 0x00000013);
}

int func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_519()
{
	if (func_9(func_37(), 0x00000001, 0x00000001) && !unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(func_37()), 0x00000000))
	{
		func_520(0x00000097, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_37()), 0x00000001), &uLocal_81, 0x43FA0000, 0x443B8000, 0x00000000);
	}
}

void func_520(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_426(unk_0xD803B885F5E47A62()) && !func_454(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000008)) && (func_423(unk_0xD803B885F5E47A62()) || func_518(unk_0xD803B885F5E47A62()))) || func_562(vParam1))
	{
		return;
	}
	Global_198C6B = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam1);
	func_558(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_35(unk_0xD803B885F5E47A62()) || func_34(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(0x502431FB))
			{
				unk_0x8134AB7E30C9809E(0x502431FB);
			}
		}
		else if (unk_0x70305AA977EFE679(0x502431FB))
		{
			unk_0x64366F76B4845277(0x502431FB);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_22(unk_0xD803B885F5E47A62(), 0x00000015) || func_22(unk_0xD803B885F5E47A62(), 0x00000019)))
		{
			func_557(vParam1, 0x00000001, 0x00000000);
		}
		if (!*uParam2 && func_9(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			*uParam2 = 0x00000001;
			if (func_556(iParam0))
			{
				unk_0x51B096AAC60548C1(func_555(iParam0));
				if (func_554(iParam0, 0xFFFFFFFF))
				{
					unk_0x34D79252800B23FF(0x00000000);
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000000);
				}
			}
			if (func_553(iParam0))
			{
				fVar1 = func_552(iParam0);
				if (fVar1 != 1f)
				{
					func_549(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000001);
				}
			}
			if (!Global_247C05)
			{
				if (func_548(iParam0) && func_35(unk_0xD803B885F5E47A62()))
				{
					func_546(0x00000001);
					func_545(0x00000002);
				}
			}
			func_296(0x00000013);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_36(unk_0xD803B885F5E47A62(), 0x00000013))
			{
				func_298(0x00000013);
			}
		}
		if (*uParam2 && func_9(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			*uParam2 = 0x00000000;
			if (func_556(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(0x00000005);
					unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000000);
				}
			}
			if (func_553(iParam0))
			{
				func_544();
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000001);
			}
			if (iParam5 && !func_426(unk_0xD803B885F5E47A62()))
			{
				if (func_32(unk_0xD803B885F5E47A62()) != 0x00000098)
				{
					func_522();
				}
			}
			if (func_206(0x00000002))
			{
				func_546(0x00000000);
				func_521(0x00000002);
			}
		}
	}
}

void func_521(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_522()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_542();
	func_525(0x00000001, 0x00000001, 0x00000000);
	func_523();
}

void func_523()
{
	func_524(0x00000000, 0x00000000);
}

void func_524(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_525(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 0x00000140);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_541();
	}
	if (!bParam2)
	{
		func_528(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_527(0x00000000);
	func_526();
}

void func_526()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0x00000000;
	}
	else
	{
		Global_24B2D0.f_2C1 = 0x00000001;
	}
}

void func_528(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_540())
		{
			func_539();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_537();
		func_532(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 0x00000001;
	}
	else
	{
		func_529();
	}
}

void func_529()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	if (func_531())
	{
		func_530();
	}
	else
	{
		func_537();
		func_532(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_530()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

int func_531()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_10())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_533())
		{
			iParam0 = 0x00000017;
		}
	}
	if (iParam0 != 0x00000012 && iParam0 != 0x00000011)
	{
		Global_24D062 = 0x00000000;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_533()
{
	if ((((((func_32(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_32(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_536()) || func_535()) || func_347(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_534(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_534(int iParam0)
{
	if (func_423(iParam0))
	{
		return 0x00000001;
	}
	if (func_124(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_535()
{
	return Global_180605;
}

int func_536()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_537()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	func_538();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_538()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 0x3F800000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000064)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_539()
{
	if (func_531())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 0x00000207);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 0x00000001;
	}
}

int func_540()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_541()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_542()
{
	func_543();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_543()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_544()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 0xFFFFFFFF;
	Global_26B66F.f_13FF = 1f;
}

void func_545(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_546(int iParam0)
{
	if (func_547() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0x00000000;
	Global_247C08 = 0x00000000;
}

int func_547()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000008E:
		case 0x0000009F:
		case 0x00000094:
		case 0x0000009D:
		case 0x000000A6:
		case 0x000000B3:
		case 0x000000BD:
		case 0x000000C1:
		case 0x000000C6:
		case 0x000000CD:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_549(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_550())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

int func_550()
{
	switch (func_16())
	{
		case 0x00000000:
			return func_551();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_551()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_552(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000008E:
		case 0x0000009D:
		case 0x0000009F:
		case 0x00000097:
		case 0x00000094:
		case 0x000000A4:
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x000000A0:
		case 0x000000A2:
		case 0x000000A6:
		case 0x000000AD:
		case 0x000000A9:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AA:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000BD:
		case 0x000000B4:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000C9:
		case 0x000000B9:
		case 0x000000C5:
		case 0x000000BA:
		case 0x000000C6:
		case 0x000000C3:
		case 0x000000CD:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000E1:
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E5:
		case 0x000000E6:
		case 0x000000E9:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
		case 0x000000F3:
		case 0x0000009E:
		case 0x000000B5:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000098:
		case 0x000000A4:
		case 0x00000097:
		case 0x000000AA:
		case 0x000000A9:
		case 0x000000C9:
		case 0x000000BF:
		case 0x000000C6:
		case 0x000000B4:
		case 0x000000C8:
		case 0x000000D0:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000E3:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_554(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000094:
		case 0x000000A4:
		case 0x00000098:
		case 0x00000099:
		case 0x000000A0:
			return 0x00000001;
		
		case 0x000000A8:
			if ((iParam1 != 0x00000002 && iParam1 != 0x0000000A) && iParam1 != 0x00000007)
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000AA:
		case 0x000000A6:
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000B3:
		case 0x000000B7:
		case 0x000000B5:
		case 0x000000BD:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000BA:
		case 0x000000C7:
		case 0x000000B9:
		case 0x000000C9:
		case 0x000000C6:
		case 0x000000C3:
		case 0x000000B4:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
		case 0x000000D6:
		case 0x000000D9:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D8:
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
		case 0x000000E3:
			return 0x00000001;
		
		case 0x000000BE:
			if (((iParam1 != 0x00000006 && iParam1 != 0x00000009) && iParam1 != 0x00000007) && iParam1 != 0x00000001)
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

float func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
		case 0x0000008A:
		case 0x0000008C:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000092:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0f;
		
		case 0x00000090:
			return 0f;
		
		case 0x000000B9:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000098:
		case 0x0000008E:
		case 0x000000A4:
		case 0x00000097:
		case 0x000000A0:
		case 0x000000A6:
		case 0x000000AD:
		case 0x000000B7:
		case 0x000000B9:
		case 0x000000C5:
		case 0x000000BA:
		case 0x000000C9:
		case 0x000000BF:
		case 0x000000C6:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000C8:
		case 0x000000C3:
		case 0x000000B4:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000E3:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_557(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

void func_558(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_561(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_559();
	}
}

void func_559()
{
	if (!func_560(unk_0xD803B885F5E47A62()))
	{
		func_296(0x00000019);
	}
}

bool func_560(int iParam0)
{
	return func_36(iParam0, 0x00000019);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000098:
			return Global_40001.f_30EA;
		
		case 0x0000008E:
			return Global_40001.f_30DE;
		
		case 0x0000009D:
			return Global_40001.f_30BD;
		
		case 0x0000009F:
			return Global_40001.f_30AC;
		
		case 0x000000A2:
			return Global_40001.f_311B;
		
		case 0x000000AD:
			return 0x00000064;
		
		case 0x000000AA:
			return 0x00000064;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_562(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_563()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		switch (iVar1)
		{
			case 0x000000B9:
				func_564(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_564(int iParam0)
{
	struct<6> Var0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x0000000D))
	{
		if ((unk_0xC844350D5D58C99A(Var0) && unk_0xEC560E589DF8370E(Var0)) && unk_0x940C1429253D3B1B(Var0) == unk_0x9539D44F3E4492F6(func_37()))
		{
			if (Var0.f_5)
			{
				if (unk_0xC844350D5D58C99A(Var0.f_1) && unk_0xEC560E589DF8370E(Var0.f_1))
				{
					if (unk_0x940C1429253D3B1B(Var0.f_1) == unk_0x16F2683693E537C9())
					{
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000001);
					}
				}
			}
		}
	}
}

void func_565()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_80, 0x00000003))
	{
		if (func_9(func_37(), 0x00000001, 0x00000001) && unk_0x40B8C182D63932FC(func_37()))
		{
			func_582(func_37(), func_583(0x00000006), 0x00000001, 0x00000000);
			func_580(func_37(), 0x000001B0, 0x00000001, 0x00000000);
			func_578(func_37(), 0x00000001, 0x00000001, 0x00000000);
			func_577(func_37(), Global_40001.f_3043, 0x00000001, 0x00000000);
			func_574(func_37(), 0x00000001, 0x00000000);
			if (func_42() <= 0x00000001)
			{
				func_566(func_37(), 0x00000001, 0x00001B58);
			}
			unk_0x5D96D8530B3D0904(&iLocal_80, 0x00000003);
		}
	}
}

void func_566(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 0x00030D40)
	{
		iParam2 = 0x00030D40;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2537E2)
		{
		}
		else if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_172), iVar0);
			unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
			unk_0xF412DD40DE84CE72(Global_24DDCF[iVar0], 0x00000001);
			unk_0xF91C863A82DF022A(Global_24DDCF[iVar0], 0x000000FA);
			func_567(iParam0);
			if (iParam2 < 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_177), iVar0);
			}
			else
			{
				Global_24DDCF.f_C9[iVar0] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam2);
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_172), iVar0);
			unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
			if (iParam2 < 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_177), iVar0);
			}
			else
			{
				Global_24DDCF.f_C9[iVar0] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_172), iVar0);
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			func_567(iParam0);
			unk_0xF412DD40DE84CE72(Global_24DDCF[iVar0], 0x00000000);
		}
	}
}

void func_567(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0x00000000, 0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			Global_24DDCF.f_5DD[iVar0] = func_568(iParam0);
			unk_0x2A065371C9D96655(Global_24DDCF[iVar0], Global_24DDCF.f_5DD[iVar0]);
		}
	}
}

int func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0x00000000, 0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			iVar1 = unk_0x301901B13DC3365B(Global_24DDCF[iVar0]);
			if (unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_182, iVar0) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_181, iVar0))
			{
				return 0x00000001;
			}
			else if ((unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_173, iVar0) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_172, iVar0)) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_184, iVar0))
			{
				return func_571(0x0000000A);
			}
			else
			{
				switch (iVar1)
				{
					case 0x000000FD:
					case 0x000000FC:
					case 0x000000FF:
						return func_571(0x00000007);
						break;
					
					case 0x00000101:
					case 0x00000102:
					case 0x00000103:
					case 0x00000104:
					case 0x00000105:
						return func_571(0x0000000B);
						break;
					
					case 0x000000FE:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_571(0x00000006);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					
					case 0x0000010F:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_571(0x00000006);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					
					case 0x000000A3:
					case 0x000000A4:
						if (func_78(Global_2537E2, iParam0, 0xFFFFFFFE, 0x00000000))
						{
							return func_571(0x00000006);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					
					case 0x0000012F:
					case 0x000001A2:
						return func_571(0x0000000A);
						break;
					
					case 0x0000016C:
						if (func_569(Global_2537E2, iParam0, 0x00000001))
						{
							return func_571(0x0000000A);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					
					case 0x000001DE:
					case 0x000001F5:
					case 0x0000020B:
					case 0x0000022C:
						return func_571(0x0000000A);
						break;
					
					case 0x000001A1:
						if ((func_356(iParam0) || func_379(iParam0)) || func_378(iParam0))
						{
							if (func_569(Global_2537E2, iParam0, 0x00000001))
							{
								return 0x00000003;
							}
							else
							{
								return 0x00000004;
							}
						}
						else if (func_569(Global_2537E2, iParam0, 0x00000001))
						{
							return func_571(0x00000006);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					
					case 0x00000100:
					case 0x0000010C:
					default:
						if (func_569(Global_2537E2, iParam0, 0x00000001))
						{
							return func_571(0x00000006);
						}
						else
						{
							return func_571(0x00000005);
						}
						break;
					}
				}
			}
	}
	return 0x00000001;
}

int func_569(int iParam0, int iParam1, bool bParam2)
{
	if (func_63(iParam0, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000) == func_63(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (func_570(func_63(iParam0, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000)) && func_570(func_63(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_570(int iParam0)
{
	if (iParam0 == func_69(0x00000001) || iParam0 == func_69(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
			if (func_573())
			{
				if (iParam0 == 0x00000005)
				{
					iParam0 = 0x00000006;
				}
				else
				{
					iParam0 = 0x00000005;
				}
			}
			break;
	}
	return func_572(iParam0);
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000A:
			return 0x00000009;
			break;
		
		case 0x00000005:
			return 0x00000008;
			break;
		
		case 0x00000006:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000004:
		case 0x0000000B:
			return 0x00000002;
			break;
		
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000009:
		case 0x00000001:
			return 0x00000001;
			break;
	}
	return 0x00000001;
}

int func_573()
{
	int iVar0;
	
	iVar0 = unk_0x08067D4957B73C02(Global_2537E2);
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_2560, 0x00000004);
	}
	return 0x00000000;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	func_575(&(Global_24DDCF.f_2D0[iParam0]), &(Global_24DDCF.f_43B[iParam0]), &(Global_24DDCF.f_189), bParam1, iParam0, bParam2, &uVar0);
}

int func_575(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x5D96D8530B3D0904(iParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x0674E58A79778E99(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = 0xFFFFFFFF;
			}
			*uParam0 = 0xFFFFFFFF;
		}
		return 0x00000001;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0x00000000;
}

int func_576(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0x00000001;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_550())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_577(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_2F1[iParam0]), &(Global_24DDCF.f_45C[iParam0]), &(Global_24DDCF.f_188), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_22B[iParam0] = fParam1;
		}
	}
}

void func_578(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_579(iParam0, bParam2);
	}
}

void func_579(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_170), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_170), iParam0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iParam0]))
	{
		if (bParam1)
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], 0x00000000);
		}
		else
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], 0x00000001);
		}
	}
}

void func_580(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_581();
		}
	}
}

void func_581()
{
	Global_24DDCF.f_64E = 0x00000001;
}

void func_582(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_583(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000004;
		
		case 0x00000000:
			return 0x00000004;
		
		case 0x00000006:
			return 0x0000003B;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x0000000D:
			return 0x00000005;
		
		case 0x00000074:
			return 0x00000026;
		
		case 0x0000001C:
			return 0x00000006;
		
		case 0x0000001D:
			return 0x00000007;
		
		case 0x0000001E:
			return 0x00000008;
		
		case 0x0000001F:
			return 0x00000009;
		
		case 0x00000020:
			return 0x0000000A;
		
		case 0x00000021:
			return 0x0000000B;
		
		case 0x00000022:
			return 0x0000000C;
		
		case 0x00000023:
			return 0x0000000D;
		
		case 0x00000024:
			return 0x0000000E;
		
		case 0x00000025:
			return 0x0000000F;
		
		case 0x00000026:
			return 0x00000010;
		
		case 0x00000027:
			return 0x00000011;
		
		case 0x00000028:
			return 0x00000012;
		
		case 0x00000029:
			return 0x00000013;
		
		case 0x0000002A:
			return 0x00000014;
		
		case 0x0000002B:
			return 0x00000015;
		
		case 0x0000002C:
			return 0x00000016;
		
		case 0x0000002D:
			return 0x00000017;
		
		case 0x0000002E:
			return 0x00000018;
		
		case 0x0000002F:
			return 0x00000019;
		
		case 0x00000030:
			return 0x0000001A;
		
		case 0x00000031:
			return 0x0000001B;
		
		case 0x00000032:
			return 0x0000001C;
		
		case 0x00000033:
			return 0x0000001D;
		
		case 0x00000034:
			return 0x0000001E;
		
		case 0x00000035:
			return 0x0000001F;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000021;
		
		case 0x00000038:
			return 0x00000022;
		
		case 0x00000039:
			return 0x00000023;
		
		case 0x0000003A:
			return 0x00000024;
		
		case 0x0000003B:
			return 0x00000025;
		
		case 0x00000009:
			return 0x00000039;
		
		case 0x0000000A:
			return 0x00000035;
		
		case 0x00000076:
			return 0x00000039;
		
		case 0x0000000E:
			return 0x00000038;
		
		case 0x00000003:
			return 0x00000037;
		
		case 0x00000015:
			return 0x00000032;
		
		case 0x0000000F:
			return 0x00000033;
		
		case 0x00000014:
			return 0x00000034;
		
		case 0x0000000B:
			return 0x00000036;
		
		case 0x00000017:
			return 0x0000003A;
		
		case 0x0000000C:
			return 0x0000003C;
		
		case 0x00000018:
			return 0x0000003D;
		
		case 0x00000004:
			return 0x0000003E;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 0x01000000) + (iVar1 * 0x00010000)) + iVar2 * 256) + iVar3);
	return 0x00000000;
}

void func_584()
{
	char* sVar0;
	
	if (func_344())
	{
		if (func_343())
		{
			func_336();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_82.f_A)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_591(sVar0))
	{
		func_585(sVar0, func_37(), 0x00000001, 0x00000000);
	}
}

void func_585(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_586(sParam0, unk_0x6E524813889AECF8(iParam1), bParam3, 0x00000001);
}

int func_586(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 0x0000003F)
	{
		return 0x00000000;
	}
	if (func_590(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	uVar0 = Global_140749.f_36;
	func_337();
	Global_140749 = 0x00000009;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = iParam3;
	Global_140749.f_38 = iParam3;
	Global_140749.f_36 = uVar0;
	func_589();
	func_588(bParam2);
	func_587();
	return 0x00000001;
}

void func_587()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_588(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_589()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_590(char* sParam0, char* sParam1)
{
	if (!func_342())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_591(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (!func_342())
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
	return func_592(sParam0);
}

bool func_592(char* sParam0)
{
	if (!func_342())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_593(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_593(char* sParam0)
{
	if (!func_342())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_594()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_344())
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0x00000000))
	{
		if (func_399(&(Local_82.f_4)))
		{
			iVar1 = (func_5() - func_599(&(Local_82.f_4), 0x00000000, 0x00000000));
			if (iVar1 > 0x00007530)
			{
				iVar0 = 0x00000001;
			}
			else
			{
				iVar0 = 0x00000006;
			}
			iVar1 = func_598(iVar1, 0x00000000);
			sVar2 = "GB_WORK_END";
			if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0x00000000)
			{
				func_595(iVar1, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else
			{
				func_595(0x00000000, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
	}
}

void func_595(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_597(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_596(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_596(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_597(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_598(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_599(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_600()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_344())
	{
		return;
	}
	if (unk_0xD803B885F5E47A62() != func_60())
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_80, 0x00000000))
		{
			if (!func_335())
			{
				sVar0 = "GBTER_START";
				if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_82.f_A)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_602(sVar0, unk_0x6E524813889AECF8(func_37()), 0x00000000, 0xFFFFFFFF);
				func_601(0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_80, 0x00000002);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_334();
			func_325(0x00000056, func_37(), 0xFFFFFFFF, sVar2, sVar1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_80, 0x00000000))
	{
		if (!func_335())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_82.f_A)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_602(sVar3, unk_0x6E524813889AECF8(func_37()), 0x00000000, 0xFFFFFFFF);
			unk_0x5D96D8530B3D0904(&iLocal_80, 0x00000002);
			func_601(0x00000001);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_82.f_A)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_334();
		func_325(0x00000056, func_37(), 0xFFFFFFFF, sVar5, sVar4, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
		unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0x00000000);
	}
	unk_0x5D96D8530B3D0904(&iLocal_80, 0x00000000);
}

void func_601(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_205(0x00000001))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_335())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Boss_Message_Orange", sVar0, 0x00000000);
	}
}

void func_602(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

void func_603(int iParam0)
{
	Local_83[unk_0x57270EE11514DC67() /*4*/].f_2 = iParam0;
}

void func_604(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(unk_0xD803B885F5E47A62(), 0x00000009))
		{
			if (func_516(unk_0xD803B885F5E47A62()) != 0x00000000)
			{
				func_296(0x00000009);
			}
		}
	}
	else if (func_36(unk_0xD803B885F5E47A62(), 0x00000009))
	{
		func_298(0x00000009);
	}
}

void func_605(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_619(0xFFFFFFFF);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_618() != 0xFFFFFFFF)
		{
			func_617(0xFFFFFFFF);
		}
		if (func_616() != 0xFFFFFFFF)
		{
			func_615(0xFFFFFFFF);
		}
		func_614(iParam2);
		func_612(iParam0);
		if (!func_553(iParam0))
		{
			fVar0 = func_552(iParam0);
			if (fVar0 != 1f)
			{
				func_549(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000001);
			}
		}
		if (!func_556(iParam0) || iParam3)
		{
			if (func_554(iParam0, iParam2) && iParam3 == 0x00000001)
			{
				unk_0x34D79252800B23FF(0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000000);
			}
			else if (unk_0x02A813E6E0380440() < 0x00000005)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0x34D79252800B23FF(0x00000005);
			}
		}
		if (func_26())
		{
			func_296(0x0000001B);
		}
		if (bParam1)
		{
			if (!func_295())
			{
				func_546(0x00000001);
			}
		}
		if ((((((iParam0 == 0x0000009F || iParam0 == 0x0000009D) || iParam0 == 0x00000099) || iParam0 == 0x0000009A) || iParam0 == 0x000000A4) || iParam0 == 0x0000009B) || iParam0 == 0x000000AB)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000000))
			{
				func_93(0x00000006);
			}
			func_611();
		}
		if (((iParam0 == 0x000000A4 || iParam0 == 0x000000D0) || iParam0 == 0x000000FA) || iParam0 == 0x000000ED)
		{
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
		}
		if (func_426(unk_0xD803B885F5E47A62()) && func_35(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000008);
		}
		func_607();
		if (func_606(iParam0))
		{
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000006);
		}
		Global_26B66F.f_19B3 = 0x00000000;
	}
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x00000078:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_610();
	iVar2 = func_27(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_48(iVar1, iVar2, 0x00000001) || func_608(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, iVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_608(int iParam0, int iParam1)
{
	if (func_28(iParam0, 0x00000001) && func_28(iParam1, 0x00000001))
	{
		return (func_609(iParam0) == func_27(iParam1) || func_609(iParam1) == func_27(iParam0));
	}
	return 0x00000000;
}

int func_609(int iParam0)
{
	if (func_28(iParam0, 0x00000001))
	{
		return Global_18D84D[func_27(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_10();
}

int func_610()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0x00000000, 0x00000001))
		{
			iVar1 = iVar0;
			if (iVar1 != 0xFFFFFFFF)
			{
				return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar1 /*615*/].f_1, 0x00000010);
			}
		}
	}
	return 0x00000000;
}

void func_611()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000004))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0x00000004);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000006))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0x00000006);
	}
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0x00000002);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2EF = 0x00000000;
	if (Global_26B66F.f_11CD > 0x00000000)
	{
		unk_0x34D79252800B23FF(Global_26B66F.f_11CD);
	}
	Global_26B66F.f_11CC = 0x00000000;
}

void func_612(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(0x00000ECF, 0xFFFFFFFF, 0x00000000);
	iVar1 = func_613(iParam0);
	if (iVar1 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_117(0x00000ECF, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000AA:
			return 0x00000000;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AB:
			return 0x00000002;
		
		case 0x000000AC:
			return 0x00000003;
		
		case 0x000000AD:
			return 0x00000004;
		
		case 0x000000D6:
			return 0x00000005;
		
		case 0x000000D7:
			return 0x00000006;
		
		case 0x000000D8:
			return 0x00000007;
		
		case 0x000000D9:
			return 0x00000008;
		
		case 0x000000DA:
			return 0x00000009;
		
		case 0x000000DB:
			return 0x0000000A;
		
		case 0x000000DC:
			return 0x0000000B;
		
		case 0x000000DD:
			return 0x0000000C;
		
		default:
	}
	return 0xFFFFFFFF;
}

void func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_615(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_616()
{
	return Global_26B66F.f_1404.f_154;
}

void func_617(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

int func_618()
{
	return Global_26B66F.f_1404.f_153;
}

void func_619(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

int func_620()
{
	return Local_83[unk_0x57270EE11514DC67() /*4*/].f_2;
}

int func_621()
{
	if (func_622(0x00000097) || func_295())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_622(int iParam0)
{
	if (!func_136() && !func_28(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (!func_35(unk_0xD803B885F5E47A62()))
		{
			if (func_295())
			{
				return 0x00000001;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000094:
			break;
		
		case 0x00000097:
			break;
		
		case 0x00000098:
			break;
	}
	return 0x00000000;
}

void func_623(int iParam0, int iParam1)
{
	Local_83[iParam0 /*4*/] = iParam1;
}

int func_624()
{
	return 0x00000001;
}

int func_625()
{
	return Local_82;
}

int func_626(int iParam0)
{
	return Local_83[iParam0 /*4*/];
}

int func_627()
{
	var uVar0;
	
	func_632(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_631())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_630())
	{
		return 0x00000001;
	}
	if (func_629(0x0000009F))
	{
		if (!func_628())
		{
			return 0x00000001;
		}
	}
	if (func_629(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_550() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_550()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_628()
{
	return Global_2564C8.f_256;
}

int func_629(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_630()
{
	return Global_258C08;
}

bool func_631()
{
	return Global_2564C8.f_251;
}

void func_632(var uParam0)
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
					func_633(iVar0);
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

void func_633(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_9(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_634(iVar2, &bVar3))
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

int func_634(int iParam0, var uParam1)
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

void func_635()
{
	SYSTEM::WAIT(0x00000000);
}

void func_636()
{
	func_336();
	if (func_9(func_37(), 0x00000000, 0x00000001))
	{
		func_577(func_37(), 1f, 0x00000001, 0x00000000);
		func_45(func_46(func_37()), 0x00000000);
	}
	Global_19AA04 = func_10();
	func_637(0x00000001, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_637(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14DB79.f_1.f_6C != 0x00000000)
	{
		Global_14DB79.f_1.f_6C = 0x00000000;
	}
	Global_14DB79.f_1.f_6D = 0xFFFFFFFF;
	Global_14DB79.f_1.f_6E = 0xFFFFFFFF;
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000A7 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000A8)
	{
		func_691();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000004);
	}
	if ((func_122() && iParam1 != 0x00000000) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000BE || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000C0)
		{
			func_671(unk_0xD803B885F5E47A62(), iParam1, 0x00000001, 0x00000000);
		}
	}
	if (((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000A4 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000D0) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000FA) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000ED)
	{
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
	}
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != 0xFFFFFFFF)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = 0xFFFFFFFF;
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_426(unk_0xD803B885F5E47A62()))
		{
			func_546(0x00000000);
		}
	}
	else if (func_669(unk_0xD803B885F5E47A62()) != 0xFFFFFFFF)
	{
		func_619(0xFFFFFFFF);
	}
	func_668(func_10());
	if (func_206(0x00000010))
	{
		func_521(0x00000010);
	}
	func_665(0x00000000);
	func_614(0xFFFFFFFF);
	func_664();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_663(iVar0);
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		func_660(iVar1);
		iVar1++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000))
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000005);
	}
	iVar2 = func_659();
	if ((func_458(iVar2) || iVar2 == 0x000000CD) || iVar2 == 0x000000D2)
	{
		func_658(0xFFFFFFFF);
	}
	else if (((iVar2 == 0x000000C9 || iVar2 == 0x000000C8) || iVar2 == 0x000000B3) || func_121(iVar2))
	{
		func_655(0xFFFFFFFF, 0x00000001);
	}
	else if (((((func_654(iVar2) || func_653(iVar2)) || func_652(iVar2)) || func_109(iVar2)) || func_108(iVar2)) || func_107(iVar2))
	{
	}
	else
	{
		func_655(0xFFFFFFFF, 0x00000001);
	}
	func_298(0x00000013);
	func_298(0x00000014);
	func_298(0x00000015);
	func_298(0x00000016);
	func_298(0x0000001B);
	func_521(0x00000003);
	func_521(0x00000004);
	func_521(0x00000007);
	func_651();
	if (func_35(unk_0xD803B885F5E47A62()))
	{
		func_604(0x00000000);
	}
	func_298(0x0000001D);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_10();
	if (Global_26B66F.f_1404.f_29 != 0x00000000)
	{
		Global_26B66F.f_1404.f_29 = 0x00000000;
	}
	if (bParam0)
	{
		func_522();
	}
	if (!func_426(unk_0xD803B885F5E47A62()))
	{
		func_544();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000006))
	{
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000006);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000007))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000007);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000008))
	{
		func_650("IMPEXP_SELFDES", 0x00000000);
		func_640("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000008);
	}
	func_638(iVar2, 0x00000000);
}

void func_638(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000009))
		{
			unk_0x8BC9595FD2792B5D(func_639(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000009);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000009))
	{
		unk_0x8910D3D58E0132B8(func_639(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000009);
	}
}

char* func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000DB:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 0x000000DD:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 0x000000DC:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 0x000000D6:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 0x000000D9:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 0x000000DA:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 0x000000D7:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 0x000000D8:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_640(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0x00000002)
				{
				}
				else
				{
					func_642();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0x00000000;
					if (func_641(iVar0))
					{
					}
					else
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0x00000000;
						Global_1B416.f_3738[iVar0 /*104*/].f_1C = 0x00000000;
						Global_1B416.f_3738[iVar0 /*104*/].f_1D = 0x00000000;
					}
					unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_641(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000000] == 0x00000001 || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000001] == 0x00000001) || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000002] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_642()
{
	if (func_649(0x0000000E))
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
		Global_4C1E = func_643();
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

var func_643()
{
	func_644();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_644()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_647(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_646(unk_0x16F2683693E537C9());
			if (func_645(iVar0) && (!func_649(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_645(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_645(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_646(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_647(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_647(int iParam0)
{
	if (func_645(iParam0))
	{
		return func_648(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_648(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_649(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_650(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0x00000000)
				{
				}
				Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0x00000001;
				if (Global_1B416.f_3738[iVar0 /*104*/].f_19 == 0x00000001)
				{
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000000] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000001] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000002] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000003] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000003 /*20*/].f_11 = 0x00000000;
					}
					Global_1B416.f_3738[iVar0 /*104*/].f_19 = 0x00000000;
					if (iParam1 == 0x00000001)
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_1B = 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_651()
{
	if (func_560(unk_0xD803B885F5E47A62()))
	{
		func_298(0x00000019);
	}
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000B2:
		case 0x000000BC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_653(int iParam0)
{
	if ((iParam0 == 0x000000BF || iParam0 == 0x000000BE) || iParam0 == 0x000000C0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_654(int iParam0)
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

void func_655(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0x00000000)
	{
		if (func_11() != func_10())
		{
			if (func_59(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_657(iParam0)] = 0x00000001;
			}
		}
		iVar0 = func_657(0x0000009F);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x0000009D);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x00000094);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000A4);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x0000008E);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x00000098);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000A6);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000AA);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000AD);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000B3);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C8);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C9);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000B6);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000B7);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000B9);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000BA);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000B4);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C3);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C5);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C6);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000CF);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D0);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D1);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D6);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D7);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D8);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D9);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000DA);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000DB);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000DC);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000DD);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
	}
}

int func_656(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(unk_0xD803B885F5E47A62(), 0x00000013) && !func_36(unk_0xD803B885F5E47A62(), 0x00000014)) && !func_36(unk_0xD803B885F5E47A62(), 0x00000009))
		{
			return 0x00000000;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 0x00000001 && func_399(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_599(&(Global_265EAE[iParam0 /*2*/]), 0x00000001, 0x00000000) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0x00000000;
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009F:
			return 0x0000000B;
		
		case 0x0000009D:
			return 0x0000000C;
		
		case 0x00000094:
			return 0x0000000D;
		
		case 0x000000A4:
			return 0x0000000E;
		
		case 0x0000008E:
			return 0x0000000F;
		
		case 0x00000098:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000011;
		
		case 0x0000009B:
			return 0x00000012;
		
		case 0x000000A0:
			return 0x00000013;
		
		case 0x00000099:
			return 0x00000014;
		
		case 0x000000A2:
			return 0x00000015;
		
		case 0x0000009A:
			return 0x00000016;
		
		case 0x000000A6:
			return 0x00000008;
		
		case 0x000000AA:
			return 0x00000009;
		
		case 0x000000AD:
			return 0x0000000A;
		
		case 0x000000AB:
			return 0x00000017;
		
		case 0x000000AC:
			return 0x00000018;
		
		case 0x000000B3:
			return 0x00000019;
		
		case 0x000000BD:
			return 0x0000001A;
		
		case 0x000000C1:
			return 0x0000001B;
		
		case 0x000000C2:
			return 0x0000001C;
		
		case 0x000000C7:
			return 0x0000001D;
		
		case 0x000000C9:
			return 0x0000001E;
		
		case 0x000000C8:
			return 0x0000001F;
		
		case 0x000000CD:
			return 0x00000020;
		
		case 0x000000D2:
			return 0x00000021;
		
		case 0x000000B6:
			return 0x00000022;
		
		case 0x000000B7:
			return 0x00000023;
		
		case 0x000000B9:
			return 0x00000024;
		
		case 0x000000BA:
			return 0x00000025;
		
		case 0x000000B4:
			return 0x00000026;
		
		case 0x000000C3:
			return 0x00000027;
		
		case 0x000000C5:
			return 0x00000028;
		
		case 0x000000C6:
			return 0x00000029;
		
		case 0x000000CF:
			return 0x0000002A;
		
		case 0x000000D0:
			return 0x0000002B;
		
		case 0x000000D1:
			return 0x0000002C;
		
		case 0x000000D3:
			return 0x0000002D;
		
		case 0x000000D6:
			return 0x00000000;
		
		case 0x000000D7:
			return 0x00000001;
		
		case 0x000000D8:
			return 0x00000002;
		
		case 0x000000D9:
			return 0x00000003;
		
		case 0x000000DA:
			return 0x00000004;
		
		case 0x000000DB:
			return 0x00000005;
		
		case 0x000000DC:
			return 0x00000006;
		
		case 0x000000DD:
			return 0x00000007;
		
		default:
	}
	return 0xFFFFFFFF;
}

void func_658(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0x00000000)
	{
		if (func_11() != func_10())
		{
			Global_265EAE.f_5D[func_657(iParam0)] = 0x00000001;
		}
		iVar0 = func_657(0x0000009B);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000A3);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000A0);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x00000099);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000A2);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x0000009A);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000AB);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000AC);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C7);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C2);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000C1);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D2);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000CD);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000BD);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_657(0x000000D3);
		if (func_656(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
	}
}

int func_659()
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
	{
		return 0x0000009F;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
	{
		return 0x0000009D;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
	{
		return 0x00000094;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 0x000000A4;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
	{
		return 0x0000008E;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
	{
		return 0x00000098;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
	{
		return 0x000000A3;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
	{
		return 0x0000009B;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 0x000000A0;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
	{
		return 0x00000099;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
	{
		return 0x000000A2;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
	{
		return 0x0000009A;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
	{
		return 0x000000A6;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 0x000000A7;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 0x000000A8;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 0x000000A9;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
	{
		return 0x000000AA;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
	{
		return 0x000000AB;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
	{
		return 0x000000AC;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 0x000000AD;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 0x000000B2;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 0x000000C0;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_JOUST"))
	{
		return 0x000000B3;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 0x000000B4;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 0x000000B6;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 0x000000B7;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 0x000000B9;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 0x000000BA;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 0x000000BD;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 0x000000BE;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 0x000000BF;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 0x000000C0;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 0x000000C1;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 0x000000C2;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 0x000000C5;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 0x000000C6;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 0x000000C3;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 0x000000C7;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_PENNED_IN"))
	{
		return 0x000000C8;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 0x000000C9;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 0x000000CD;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 0x000000CF;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 0x000000D0;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 0x000000D1;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 0x000000D2;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_PLOUGHED"))
	{
		return 0x000000D6;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FULLY_LOADED"))
	{
		return 0x000000D7;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 0x000000D8;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_TRANSPORTER"))
	{
		return 0x000000D9;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FORTIFIED"))
	{
		return 0x000000DA;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VELOCITY"))
	{
		return 0x000000DB;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_STOCKPILING"))
	{
		return 0x000000DD;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_RAMPED_UP"))
	{
		return 0x000000DC;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING"))
	{
		return 0x000000E1;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 0x000000E3;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SMUGGLER"))
	{
		return 0x000000E5;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FM_GANGOPS"))
	{
		return 0x000000E9;
	}
	return 0x00000000;
}

void func_660(int iParam0)
{
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_662(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_662(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_662() };
	}
}

bool func_661(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_662()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_663(int iParam0)
{
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_662(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_662(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_662() };
	}
}

void func_664()
{
	struct<20> Var0;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_10();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 0x00000003))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 0x00000003);
	}
}

void func_665(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(unk_0xD803B885F5E47A62(), 0x0000000E))
		{
			func_667(0x0000000E);
		}
	}
	else if (func_47(unk_0xD803B885F5E47A62(), 0x0000000E))
	{
		func_666(0x0000000E);
	}
}

void func_666(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_667(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_668(int iParam0)
{
	if (func_29(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_669(int iParam0)
{
	if (func_670(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 0xFFFFFFFF;
}

int func_670(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_671(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1) && func_690(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		func_675(iVar0, bParam2, bParam3);
		func_672(iVar0, 0x00000001);
	}
}

void func_672(int iParam0, bool bParam1)
{
	if (!func_674(iParam0))
	{
		return;
	}
	func_248(func_673(iParam0), bParam1, 0xFFFFFFFF, 0x00000001);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00001DCC;
		
		case 0x00000001:
			return 0x00001DCD;
		
		case 0x00000002:
			return 0x00001DCE;
		
		case 0x00000003:
			return 0x00001DCF;
		
		case 0x00000004:
			return 0x00001DD0;
		
		case 0x00000005:
			return 0x00003C0D;
		
		default:
	}
	return 0x00001DCC;
}

bool func_674(int iParam0)
{
	return (iParam0 >= 0x00000000 && iParam0 < 0x00000006);
}

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = 0x00000000;
	iVar2 = func_689(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_688(iParam0, 0x00000000, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_687(iParam0, bParam2);
		if (iVar0 < 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		if (!bParam2)
		{
			Global_1993C9 = 0xFFFFFFFF;
		}
		func_686(iParam0, 0x00000000, bParam2);
	}
	else if (func_684(iParam0, bParam2))
	{
		iVar0 = func_683(iVar2, 0x00000000);
		iVar3 = func_682(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_681(iVar2, bParam2);
		iVar5 = func_683(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0x00000000)
		{
			iVar0 = iVar5;
		}
		if (func_680(iVar2) && func_679(unk_0xD803B885F5E47A62(), iVar2) == 0x00000002)
		{
			iVar0 = (iVar0 / 0x00000002);
			bVar1 = 0x00000001;
		}
		func_688(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_678(unk_0xD803B885F5E47A62(), iVar2) > 0x00000000)
		{
			func_677(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_681(iVar2, bParam2) / 0x00000002)));
		}
		iVar0 = (func_683(iVar2, bParam2) / func_678(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_680(iVar2) && func_679(unk_0xD803B885F5E47A62(), iVar2) == 0x00000002)
		{
			iVar0 = (iVar0 / 0x00000002);
			bVar1 = 0x00000001;
		}
	}
	func_676(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_676(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_184507[iParam0 /*876*/].f_112.f_101 = iParam2;
				}
				else
				{
					Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_677(int iParam0, int iParam1)
{
	if (iParam0 != 0xFFFFFFFF && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (func_255(iParam1) && func_680(iParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_680(int iParam0)
{
	return func_148(iParam0) == 0x00000005;
}

int func_681(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 0x00000001:
			uVar0 = Global_40001.f_4236;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 0x00000003:
			uVar0 = Global_40001.f_4235;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 0x00000004:
			uVar0 = Global_40001.f_4234;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0x00000000:
			uVar0 = Global_40001.f_4232;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 0x00000002:
			uVar0 = Global_40001.f_4233;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_682(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_683(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 0x00000001:
			iVar0 = Global_40001.f_4223;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 0x00000003:
			iVar0 = Global_40001.f_4224;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 0x00000004:
			iVar0 = Global_40001.f_4225;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0x00000000:
			iVar0 = Global_40001.f_4226;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 0x00000002:
			iVar0 = Global_40001.f_4227;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_422E);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				iVar0 = Global_40001.f_524F;
			}
			else
			{
				iVar0 = Global_40001.f_523F;
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5250);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5240);
				}
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5251);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5241);
				}
			}
			if (func_679(unk_0xD803B885F5E47A62(), iParam0) == 0x00000002)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_684(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_249(0x00003C18, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	return func_249(func_685(iParam0), 0xFFFFFFFF, 0xFFFFFFFF);
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000024C8;
		
		case 0x00000001:
			return 0x000024C9;
		
		case 0x00000002:
			return 0x000024CA;
		
		case 0x00000003:
			return 0x000024CB;
		
		case 0x00000004:
			return 0x000024CC;
		
		case 0x00000005:
			return 0x00003C0C;
		
		default:
	}
	return 0x000024C8;
}

void func_686(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_248(0x00003C18, bParam1, 0xFFFFFFFF, 0x00000001);
		return;
	}
	func_248(func_685(iParam0), bParam1, 0xFFFFFFFF, 0x00000001);
}

int func_687(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_689(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_680(iVar1))
	{
		if (func_679(unk_0xD803B885F5E47A62(), iVar1) == 0x00000002)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_688(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_689(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000006)
	{
		return 0x00000000;
	}
	if (func_255(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0x00000000 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_691()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x0000001C);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x0000001D);
	func_692(0x00000018);
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_693(struct<21> Param0)
{
	func_742(func_743(Param0), Param0);
	unk_0x3A4967AE7C71F999(0x00000000);
	func_739(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_82, 0x0000000B);
	unk_0x35B62793EAE9ADDF(&Local_83, 0x00000081);
	unk_0x256D93AFAE851A7A(0x00000000);
	func_694(0x00000000, 0x00000000, 0x00000000);
	return 0x00000001;
}

void func_694(int iParam0, int iParam1, bool bParam2)
{
	func_738();
	if (func_58(unk_0xD803B885F5E47A62()))
	{
		func_700(0x00000001);
	}
	if ((iParam0 != 0x00000000 && unk_0x40B8C182D63932FC(iParam1)) && func_699(iParam1, 0x00000001))
	{
		switch (iParam0)
		{
			case 0x0000009D:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0x00000000);
				break;
			}
	}
	if (!func_136() && !func_28(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (func_300())
		{
			func_545(0x00000003);
		}
	}
	func_545(0x00000004);
	if (func_95(0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_11();
	}
	if (func_92(iParam0))
	{
		func_698();
		Global_198C86.f_12 = func_697(func_60());
	}
	else if (func_110(func_669(unk_0xD803B885F5E47A62())))
	{
		func_696();
		Global_198CBC.f_12 = func_697(func_60());
	}
	if (bParam2)
	{
		if (!func_295())
		{
			func_546(0x00000001);
		}
	}
	func_695();
}

void func_695()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_10();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0x00000000;
		iVar0++;
	}
}

void func_696()
{
	struct<63> Var0;
	
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_F = 0xFFFFFFFF;
	Var0.f_10 = 0xFFFFFFFF;
	Var0.f_11 = 0xFFFFFFFF;
	Var0.f_12 = 0xFFFFFFFF;
	Var0.f_13 = 0xFFFFFFFF;
	Var0.f_14 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Var0.f_16 = 0xFFFFFFFF;
	Var0.f_17 = 0xFFFFFFFF;
	Var0.f_18 = 0xFFFFFFFF;
	Var0.f_19 = 0xFFFFFFFF;
	Var0.f_1A = 0xFFFFFFFF;
	Var0.f_1B = 0xFFFFFFFF;
	Var0.f_1C = 0xFFFFFFFF;
	Var0.f_1D = 0xFFFFFFFF;
	Var0.f_1E = 0xFFFFFFFF;
	Var0.f_1F = 0xFFFFFFFF;
	Var0.f_20 = 0xFFFFFFFF;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Var0.f_23 = 0xFFFFFFFF;
	Var0.f_24 = 0xFFFFFFFF;
	Var0.f_25 = 0xFFFFFFFF;
	Var0.f_26 = 0xFFFFFFFF;
	Var0.f_27 = 0xFFFFFFFF;
	Var0.f_28 = 0xFFFFFFFF;
	Var0.f_29 = 0xFFFFFFFF;
	Var0.f_2A = 0xFFFFFFFF;
	Var0.f_2B = 0xFFFFFFFF;
	Var0.f_2C = 0xFFFFFFFF;
	Var0.f_2D = 0xFFFFFFFF;
	Var0.f_2E = 0xFFFFFFFF;
	Var0.f_2F = 0xFFFFFFFF;
	Var0.f_30 = 0xFFFFFFFF;
	Var0.f_31 = 0xFFFFFFFF;
	Var0.f_32 = 0xFFFFFFFF;
	Var0.f_33 = 0xFFFFFFFF;
	Var0.f_34 = 0xFFFFFFFF;
	Var0.f_35 = 0xFFFFFFFF;
	Var0.f_36 = 0xFFFFFFFF;
	Var0.f_37 = 0xFFFFFFFF;
	Var0.f_38 = 0xFFFFFFFF;
	Var0.f_39 = 0xFFFFFFFF;
	Var0.f_3A = 0xFFFFFFFF;
	Var0.f_3B = 0xFFFFFFFF;
	Var0.f_3C = 0xFFFFFFFF;
	Var0.f_3D = 0xFFFFFFFF;
	Var0.f_3E = 0xFFFFFFFF;
	Global_198CBC = { Var0 };
	Global_198CBC.f_18 = 0x00000000;
	Global_198CBC.f_19 = 0x00000000;
	Global_198CBC.f_11 = 0x00000000;
}

int func_697(int iParam0)
{
	if (func_28(iParam0, 0x00000001))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 0xFFFFFFFF;
}

void func_698()
{
	struct<54> Var0;
	
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_F = 0xFFFFFFFF;
	Var0.f_10 = 0xFFFFFFFF;
	Var0.f_11 = 0xFFFFFFFF;
	Var0.f_12 = 0xFFFFFFFF;
	Var0.f_13 = 0xFFFFFFFF;
	Var0.f_14 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Var0.f_16 = 0xFFFFFFFF;
	Var0.f_17 = 0xFFFFFFFF;
	Var0.f_18 = 0xFFFFFFFF;
	Var0.f_19 = 0xFFFFFFFF;
	Var0.f_1A = 0xFFFFFFFF;
	Var0.f_1B = 0xFFFFFFFF;
	Var0.f_1C = 0xFFFFFFFF;
	Var0.f_1D = 0xFFFFFFFF;
	Var0.f_1E = 0xFFFFFFFF;
	Var0.f_1F = 0xFFFFFFFF;
	Var0.f_20 = 0xFFFFFFFF;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Var0.f_23 = 0xFFFFFFFF;
	Var0.f_24 = 0xFFFFFFFF;
	Var0.f_25 = 0xFFFFFFFF;
	Var0.f_26 = 0xFFFFFFFF;
	Var0.f_27 = 0xFFFFFFFF;
	Var0.f_28 = 0xFFFFFFFF;
	Var0.f_29 = 0xFFFFFFFF;
	Var0.f_2A = 0xFFFFFFFF;
	Var0.f_2B = 0xFFFFFFFF;
	Var0.f_2C = 0xFFFFFFFF;
	Var0.f_2D = 0xFFFFFFFF;
	Var0.f_2E = 0xFFFFFFFF;
	Var0.f_2F = 0xFFFFFFFF;
	Var0.f_30 = 0xFFFFFFFF;
	Var0.f_31 = 0xFFFFFFFF;
	Var0.f_32 = 0xFFFFFFFF;
	Var0.f_33 = 0xFFFFFFFF;
	Var0.f_34 = 0xFFFFFFFF;
	Var0.f_35 = 0xFFFFFFFF;
	Global_198C86 = { Var0 };
	Global_198C86.f_1D = 0x00000000;
	Global_198C86.f_1E = 0x00000000;
	Global_198C86.f_11 = 0x00000000;
}

int func_699(int iParam0, bool bParam1)
{
	return func_48(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

void func_700(bool bParam0)
{
	int iVar0;
	
	func_692(0x00000021);
	func_692(0x00000022);
	func_692(0x00000023);
	func_692(0x00000024);
	func_692(0x00000025);
	func_692(0x00000026);
	func_692(0x00000027);
	func_692(0x00000028);
	func_692(0x0000002B);
	func_692(0x00000029);
	func_692(0x00000036);
	func_692(0x0000002A);
	func_692(0x0000002F);
	func_737(0x00000017);
	func_737(0x00000018);
	func_692(0x0000005C);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x00000002);
	func_736();
	func_731();
	func_726();
	func_721();
	func_710();
	func_706();
	func_702();
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	else if (func_701(0x00000003))
	{
		func_737(0x00000003);
	}
	else if (func_701(0x00000004))
	{
		func_737(0x00000004);
	}
	else if (func_701(0x00000005))
	{
		func_737(0x00000005);
	}
	else if (func_701(0x00000006))
	{
		func_737(0x00000006);
	}
	else if (func_701(0x00000007))
	{
		func_737(0x00000007);
	}
	else if (((((((((((((((((func_701(0x00000000) || func_701(0x00000001)) || func_701(0x00000002)) || func_701(0x00000008)) || func_701(0x00000009)) || func_701(0x0000000A)) || func_701(0x0000000B)) || func_701(0x0000000C)) || func_701(0x0000000D)) || func_701(0x0000000E)) || func_701(0x0000000F)) || func_701(0x00000010)) || func_701(0x00000011)) || func_701(0x00000012)) || func_701(0x00000013)) || func_701(0x00000014)) || func_701(0x00000015)) || func_701(0x00000016))
	{
		func_737(0x00000008);
		func_737(0x00000000);
		func_737(0x00000001);
		func_737(0x00000002);
		func_737(0x00000009);
		func_737(0x0000000A);
		func_737(0x0000000B);
		func_737(0x0000000C);
		func_737(0x0000000D);
		func_737(0x0000000E);
		func_737(0x0000000F);
		func_737(0x00000010);
		func_737(0x00000011);
		func_737(0x00000012);
		func_737(0x00000013);
		func_737(0x00000014);
		func_737(0x00000015);
		func_737(0x00000016);
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0x00000000;
			iVar0++;
		}
	}
}

bool func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_702()
{
	if (func_704())
	{
		func_703(0x00000000);
		func_703(0x00000001);
		func_703(0x00000002);
		func_703(0x00000003);
	}
}

void func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_704()
{
	if (((func_705(0x00000000) || func_705(0x00000001)) || func_705(0x00000002)) || func_705(0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_706()
{
	if (func_708())
	{
		func_707(0x00000004);
		func_707(0x00000005);
		func_707(0x00000006);
		func_707(0x00000007);
	}
}

void func_707(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_708()
{
	if (((func_709(0x00000004) || func_709(0x00000005)) || func_709(0x00000006)) || func_709(0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_710()
{
	int iVar0;
	
	if (func_720())
	{
		func_719(0x00000008);
		func_719(0x00000009);
		func_719(0x0000000A);
		func_719(0x0000000C);
		func_719(0x0000000D);
		func_719(0x0000000E);
		func_719(0x00000013);
		func_719(0x00000014);
		func_719(0x00000015);
		func_719(0x00000016);
		func_719(0x00000017);
		func_719(0x00000018);
		func_719(0x00000019);
		func_719(0x0000001A);
		func_719(0x0000000F);
		func_719(0x00000010);
		func_719(0x00000011);
		func_719(0x00000012);
		func_719(0x00000023);
		func_719(0x0000002D);
		func_719(0x0000002E);
		if (func_718(0x0000000B))
		{
			func_719(0x0000000B);
			iVar0 = func_119(0x00001C3A, 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
			func_117(0x00001C3A, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	if (func_718(0x00000030))
	{
		if (func_716(0x00000097, 0x00000003))
		{
			func_714(0x00000097, 0x00000003);
		}
		func_719(0x00000030);
	}
	if (func_718(0x00000031))
	{
		if (func_716(0x00000098, 0x00000003))
		{
			func_714(0x00000098, 0x00000003);
		}
		func_719(0x00000031);
	}
	if (func_718(0x00000032))
	{
		if (func_716(0x00000099, 0x00000003))
		{
			func_714(0x00000099, 0x00000003);
		}
		func_719(0x00000032);
	}
	if (func_718(0x00000033))
	{
		if (func_716(func_711(), 0x00000003))
		{
			func_714(func_711(), 0x00000003);
		}
		func_719(0x00000033);
	}
}

int func_711()
{
	if (func_713())
	{
		func_712(0x0000009A, Global_4C1E, 0x00000001);
	}
	return 0x0000009A;
}

void func_712(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

int func_713()
{
	int iVar0;
	
	iVar0 = func_27(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_10()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_714(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (iParam1 > 0x00000003)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_715(iParam0, iVar0, 0x00000000);
			func_712(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_715(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_716(int iParam0, int iParam1)
{
	if (func_717(iParam0, iParam1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_717(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_720()
{
	if (((((((((((((((((((((func_718(0x00000008) || func_718(0x00000009)) || func_718(0x0000000A)) || func_718(0x0000000C)) || func_718(0x0000000B)) || func_718(0x0000000D)) || func_718(0x0000000E)) || func_718(0x00000013)) || func_718(0x00000014)) || func_718(0x00000015)) || func_718(0x00000016)) || func_718(0x00000017)) || func_718(0x00000018)) || func_718(0x00000019)) || func_718(0x0000001A)) || func_718(0x0000000F)) || func_718(0x00000010)) || func_718(0x00000011)) || func_718(0x00000012)) || func_718(0x00000023)) || func_718(0x0000002D)) || func_718(0x0000002E))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_721()
{
	if (func_725())
	{
		func_724(0x00000000);
		func_724(0x00000001);
		func_724(0x00000002);
		func_724(0x00000003);
		func_724(0x00000004);
		func_724(0x00000005);
		if (func_723(0x00000020))
		{
			if (func_716(func_722(), 0x00000003))
			{
				func_714(func_722(), 0x00000003);
			}
			func_724(0x00000020);
		}
	}
}

int func_722()
{
	if (func_713())
	{
		func_712(0x0000000C, Global_4C1E, 0x00000001);
	}
	return 0x0000000C;
}

bool func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_725()
{
	if ((((func_723(0x00000001) || func_723(0x00000000)) || func_723(0x00000002)) || func_723(0x00000004)) || func_723(0x00000005))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_726()
{
	if (func_730())
	{
		func_729(0x00000000);
		func_729(0x00000001);
		func_729(0x00000002);
		func_729(0x00000003);
		func_729(0x00000004);
		func_729(0x00000005);
		func_729(0x00000006);
		func_729(0x00000007);
		if (func_728(0x00000008))
		{
			func_729(0x00000008);
		}
		if (func_728(0x0000000F))
		{
			if (func_716(func_727(), 0x00000003))
			{
				func_714(func_727(), 0x00000003);
			}
			func_729(0x0000000F);
		}
	}
}

int func_727()
{
	if (func_713())
	{
		func_712(0x00000014, Global_4C1E, 0x00000001);
	}
	return 0x00000014;
}

bool func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_730()
{
	if ((((((((func_728(0x00000000) || func_728(0x00000001)) || func_728(0x00000002)) || func_728(0x00000003)) || func_728(0x00000004)) || func_728(0x00000005)) || func_728(0x00000006)) || func_728(0x00000007)) || func_728(0x00000008))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_731()
{
	if (func_735())
	{
		func_734(0x00000000);
		func_734(0x00000001);
		func_734(0x00000002);
		func_734(0x00000003);
		func_734(0x00000004);
		func_734(0x00000005);
		func_734(0x00000006);
		func_734(0x00000007);
		func_734(0x00000008);
		func_734(0x00000009);
		func_734(0x0000000A);
		func_734(0x0000000B);
		func_734(0x0000000C);
		if (func_733(0x0000000D))
		{
			if (func_716(func_732(), 0x00000003))
			{
				func_714(func_732(), 0x00000003);
			}
			func_734(0x0000000D);
		}
	}
}

int func_732()
{
	if (func_713())
	{
		func_712(0x0000004C, Global_4C1E, 0x00000001);
	}
	return 0x0000004C;
}

bool func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_735()
{
	if ((((((((((((func_733(0x00000000) || func_733(0x00000001)) || func_733(0x00000002)) || func_733(0x00000003)) || func_733(0x00000004)) || func_733(0x00000005)) || func_733(0x00000006)) || func_733(0x00000007)) || func_733(0x00000008)) || func_733(0x00000009)) || func_733(0x0000000A)) || func_733(0x0000000B)) || func_733(0x0000000C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_736()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_737(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_738()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0x00000000;
	Global_198C74.f_F = 0x00000000;
}

int func_739(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_740())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_631())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_629(0x0000009D))
				{
					if (!bParam2)
					{
						func_741();
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
					func_741();
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
				func_741();
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
			func_741();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_740()
{
	return Global_140856;
}

void func_741()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_742(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_741();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_743(int iParam0)
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

