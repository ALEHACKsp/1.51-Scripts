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
	int iLocal_35 = 0;
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
	func_88();
	while (0x00000001)
	{
		func_87();
		if (func_79())
		{
			func_78();
		}
		if (Global_26B66F.f_1404.f_2ED == 0x00000000)
		{
			func_78();
		}
		switch (iLocal_35)
		{
			case 0x00000000:
				iLocal_35 = 0x00000001;
				break;
			
			case 0x00000001:
				if (func_11())
				{
					iLocal_35 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (!func_1())
				{
					iLocal_35 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				func_78();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(0x00000001))
	{
		iVar0 = Global_26B66F.f_1404.f_2EC;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0x00000000;
			}
		}
		else
		{
			func_2(iVar0);
			return 0x00000000;
		}
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_2(int iParam0)
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_26B66F.f_1404.f_2EC = func_6();
}

void func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_184), iVar0);
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_185), iVar0);
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_186), iVar0);
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_188), iVar0);
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_18C), iVar0);
	unk_0x0674E58A79778E99(&(Global_24DDCF.f_187), iVar0);
}

int func_4(int iParam0)
{
	if (!func_5(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
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

int func_6()
{
	return 0xFFFFFFFF;
}

bool func_7(bool bParam0)
{
	return func_8(unk_0xD803B885F5E47A62(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 0x00000001);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_6() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_6())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_11()
{
	int iVar0;
	
	if (func_7(0x00000001))
	{
		iVar0 = Global_26B66F.f_1404.f_2EC;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_12(int iParam0)
{
	if (func_5(iParam0, 0x00000000, 0x00000001))
	{
		func_76(iParam0, 0x000001B0, 0x00000001, 0x00000000);
		if (func_75(iParam0))
		{
			func_72(iParam0, func_73(func_74(unk_0xD803B885F5E47A62())), 0x00000001, 0x00000000);
		}
		if (func_70(iParam0))
		{
			func_68(iParam0, 0x00000001, 0x00000001, 0x00000000);
		}
		func_62(iParam0, 0x00000001, 0x00000000);
		func_13(iParam0, 0x00000001, 0x00001388);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
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
			func_14(iParam0);
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
			func_14(iParam0);
			unk_0xF412DD40DE84CE72(Global_24DDCF[iVar0], 0x00000000);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0x00000000, 0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			Global_24DDCF.f_5DD[iVar0] = func_15(iParam0);
			unk_0x2A065371C9D96655(Global_24DDCF[iVar0], Global_24DDCF.f_5DD[iVar0]);
		}
	}
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0x00000000, 0x00000001))
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
				return func_59(0x0000000A);
			}
			else
			{
				switch (iVar1)
				{
					case 0x000000FD:
					case 0x000000FC:
					case 0x000000FF:
						return func_59(0x00000007);
						break;
					
					case 0x00000101:
					case 0x00000102:
					case 0x00000103:
					case 0x00000104:
					case 0x00000105:
						return func_59(0x0000000B);
						break;
					
					case 0x000000FE:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_59(0x00000006);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					
					case 0x0000010F:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_59(0x00000006);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					
					case 0x000000A3:
					case 0x000000A4:
						if (func_58(Global_2537E2, iParam0, 0xFFFFFFFE, 0x00000000))
						{
							return func_59(0x00000006);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					
					case 0x0000012F:
					case 0x000001A2:
						return func_59(0x0000000A);
						break;
					
					case 0x0000016C:
						if (func_20(Global_2537E2, iParam0, 0x00000001))
						{
							return func_59(0x0000000A);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					
					case 0x000001DE:
					case 0x000001F5:
					case 0x0000020B:
					case 0x0000022C:
						return func_59(0x0000000A);
						break;
					
					case 0x000001A1:
						if ((func_19(iParam0) || func_18(iParam0)) || func_16(iParam0))
						{
							if (func_20(Global_2537E2, iParam0, 0x00000001))
							{
								return 0x00000003;
							}
							else
							{
								return 0x00000004;
							}
						}
						else if (func_20(Global_2537E2, iParam0, 0x00000001))
						{
							return func_59(0x00000006);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					
					case 0x00000100:
					case 0x0000010C:
					default:
						if (func_20(Global_2537E2, iParam0, 0x00000001))
						{
							return func_59(0x00000006);
						}
						else
						{
							return func_59(0x00000005);
						}
						break;
					}
				}
			}
	}
	return 0x00000001;
}

int func_16(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_17(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_17(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_19(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_17(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_20(int iParam0, int iParam1, bool bParam2)
{
	if (func_23(iParam0, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000) == func_23(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (func_21(func_23(iParam0, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000)) && func_21(func_23(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_21(int iParam0)
{
	if (iParam0 == func_22(0x00000001) || iParam0 == func_22(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_22(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_53(iParam0) && !bParam4)
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
	if (((func_53(unk_0xD803B885F5E47A62()) || (func_52() && func_51())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_50();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_5(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_48(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_35(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_35(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_48(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_24(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_24(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_48(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_35(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_35(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_24(bool bParam0, int iParam1, bool bParam2)
{
	return func_25(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_34() || (func_33() && func_31())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_30(iParam2, iVar0);
		}
		else
		{
			return func_30(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_29(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_22(0x00000001);
				}
				else
				{
					return func_22(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_26(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_26(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_22(0x00000001);
	}
	return func_22(0x00000000);
}

int func_26(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, iParam1, iParam3);
	if (func_27(Global_440000.f_2F9AE, 0x00000001))
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

int func_27(int iParam0, bool bParam1)
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

int func_28(int iParam0, int iParam1, int iParam2)
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
			if (!func_29(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_29(int iParam0, int iParam1, int iParam2)
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

int func_30(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_28(iParam1, iParam0, 0x00000004);
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

bool func_31()
{
	if (func_32())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_32()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_33()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_34()
{
	if (func_32() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_43())
			{
				iVar3 = func_39(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_37(iVar3);
				}
			}
			if ((func_58(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_29(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_22(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_36(0x00000001);
			}
			else
			{
				return func_25(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_22(0x00000001);
			}
			else
			{
				return func_25(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_39(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_37(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_36(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_38(iParam0);
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

var func_38(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_39(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_41(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_40(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_40(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_6();
}

bool func_41(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_42(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_6();
}

int func_42(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_6())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_43()
{
	if (((func_47() || func_46()) || func_45()) || func_44())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_44()
{
	return Global_2564C8.f_13;
}

var func_45()
{
	return Global_2564C8.f_11;
}

var func_46()
{
	return Global_2564C8.f_10;
}

var func_47()
{
	return Global_2564C8.f_F;
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_43())
	{
		iVar2 = func_39(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_37(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_6())
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
			iVar0 = func_25(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_49(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_29(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_36(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_49(int iParam0)
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

var func_50()
{
	return Global_240006.f_2;
}

bool func_51()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_53(int iParam0)
{
	if (func_55(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_54())
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

bool func_54()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_56(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1407E9;
}

bool func_58(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
			if (func_61())
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
	return func_60(iParam0);
}

int func_60(int iParam0)
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

int func_61()
{
	int iVar0;
	
	iVar0 = unk_0x08067D4957B73C02(Global_2537E2);
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_2560, 0x00000004);
	}
	return 0x00000000;
}

void func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	func_63(&(Global_24DDCF.f_2D0[iParam0]), &(Global_24DDCF.f_43B[iParam0]), &(Global_24DDCF.f_189), bParam1, iParam0, bParam2, &uVar0);
}

int func_63(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_64(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0x00000001;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_65())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_65()
{
	switch (func_67())
	{
		case 0x00000000:
			return func_66();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_66()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_67()
{
	return Global_7830;
}

void func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_69(iParam0, bParam2);
	}
}

void func_69(int iParam0, bool bParam1)
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

bool func_70(int iParam0)
{
	return func_71(&(Global_24DDCF.f_333[iParam0]));
}

int func_71(var uParam0)
{
	if (unk_0x1727A44C562FBED2(*uParam0))
	{
		if (!*uParam0 == unk_0x0D0A574C76D769AC())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_72(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_73(int iParam0)
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

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_37(iVar0);
	}
	return 0x00000001;
}

bool func_75(int iParam0)
{
	return func_71(&(Global_24DDCF.f_26D[iParam0]));
}

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_77();
		}
	}
}

void func_77()
{
	Global_24DDCF.f_64E = 0x00000001;
}

void func_78()
{
	func_2(Global_26B66F.f_1404.f_2EC);
	unk_0x10FAF14A60A0DBE1();
}

int func_79()
{
	var uVar0;
	
	func_84(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_83())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_82())
	{
		return 0x00000001;
	}
	if (func_81(0x0000009F))
	{
		if (!func_80())
		{
			return 0x00000001;
		}
	}
	if (func_81(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_65() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_65()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_80()
{
	return Global_2564C8.f_256;
}

int func_81(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_82()
{
	return Global_258C08;
}

bool func_83()
{
	return Global_2564C8.f_251;
}

void func_84(var uParam0)
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
					func_85(iVar0);
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

void func_85(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_5(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_86(iVar2, &bVar3))
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

int func_86(int iParam0, var uParam1)
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

void func_87()
{
	SYSTEM::WAIT(0x00000000);
}

int func_88()
{
	unk_0x256D93AFAE851A7A(0x00000000);
	return 0x00000001;
}

